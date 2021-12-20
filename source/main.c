
#include <stdio.h>
#include <tonc.h>
#include "space.h"
#include "ship.h"
#include "shot.h"
#include "smile.h"

OBJ_ATTR obj_buffer[128];
OBJ_AFFINE *obj_aff_buffer= (OBJ_AFFINE*)obj_buffer;
OBJ_ATTR *ship = &obj_buffer[0];
OBJ_ATTR *shot = &obj_buffer[4];
OBJ_ATTR *smile[13];



//background coordinates
double bgx = 192, bgy = 32;
//ship coordinates x = bgx + width/2, y = bgy +(height - 32)
int x = 120, y = 128;
//laser shot coordinates
int laserX, laserY;
//smile coordinates
double smileX = 0, smileY = 0;
double smileHitX[13], smileHitY[13];

bool laserFired = false;
bool movingRight = true;
bool movingLeft = false;

bool hit[13];

int frame = 0;
int pb = 0, tid = 0;

int Setup()
{
	bool gameOver = 0;
	
	oam_init(obj_buffer, 128);
	
	obj_set_attr(ship,
		ATTR0_SQUARE,
		ATTR1_SIZE_16,
		ATTR2_PALBANK(pb) | tid);
		
	obj_set_attr(shot,
		ATTR0_SQUARE,
		ATTR1_SIZE_8,
		ATTR2_PALBANK(0) | 4);
	
	for(int i = 1; i <= 13; i++){
		obj_set_attr(smile[i],
			ATTR0_SQUARE,
			ATTR1_SIZE_16,
			ATTR2_PALBANK(0) | (1 + i*4));
	}
	obj_set_pos(ship, x, y);
	
	laserX = x + 4;
	laserY = y - 8;
	
	smileX = 0;
	smileY = 0;
	
	obj_hide(shot);
	
	for(int i = 1; i <= 12; i++)
		hit[i] = false;
	
	

}

int Draw()
{
	VBlankIntrWait();
	
	//draw ship position
	obj_set_pos(ship, x, y);
	
	//draw laser shot
	if(laserFired == true)
	{
		obj_unhide(shot, 0);
		obj_set_pos(shot, laserX, laserY);
	}
	if(laserFired == false)
		obj_hide(shot);
	
	
	//draw smiles
	for(int i = 1; i <= 4; i++)
	{
		
		obj_set_pos(smile[i], ((44*i)+smileX), 24+smileY);
		smileHitX[i] = (44*i)+smileX;
		smileHitY[i] = 24 + smileY;
		
		if(hit[i] == true)
		{
			obj_hide(smile[i]);
			obj_set_pos(smile[i], 0, 0);
			
			
		}
	
	}
	for(int i = 1; i <= 4; i++)
	{
		obj_set_pos(smile[4+i], (44*i)+smileX, 44+smileY);
		smileHitX[i+4] = (44*i)+smileX;
		smileHitY[i+4] = 44 + smileY;
		
		if(hit[i+4] == true)
		{
			obj_hide(smile[i+4]);
			obj_set_pos(smile[i+4], 0, 0);
			
			
		}
	
	}
	for(int i = 1; i <= 4; i++)
	{
		obj_set_pos(smile[8+i], (44*i)+smileX, 64+smileY);
		smileHitX[i+8] = (44*i)+smileX;
		smileHitY[i+8] = 64 + smileY;
		
		if(hit[i+8] == true)
		{
			obj_hide(smile[i+8]);
			obj_set_pos(smile[i+8], 0, 0);
			
			
		}
		
	}
	
	
	
	oam_copy(oam_mem, obj_buffer, 128);

}

int Input()
{
	key_poll();
	
	//ship left right movement
	x +=key_tri_horz();
	
	if(key_hit(KEY_B))
	{
		laserFired = true;
	}

}

int Logic()
{
	
	//scrolling background
	bgx += .5;
	REG_BG0HOFS = bgx;
	REG_BG0VOFS = bgy;
	
	//if key hit B fire laser only once
	if(laserFired == true)
	{
		
		laserY -= 2;
		
		if(laserY < 8)
		{
			laserFired = false;
		}	
		
		
	}
	
	if(laserFired == false)
	{
		laserX = x + 4;
		laserY = y - 8;
		
		
	}
	
	
	//smile movement
	if(movingRight == true && smileX < 20)
	{
		smileX+= .1;
		if(smileX >=20)
		{
			smileY += 8;
			movingRight = false;
			movingLeft = true;
		}
	}
	if(movingLeft == true && smileX > (-20))
	{
		smileX-= .1;
		if(smileX <= (-20))
		{
			smileY += 8;
			movingRight = true;
			movingLeft = false;
			
		}
	}
	
	//collision detection
	for(int i = 1; i <= 4; i++)
	{
		//if laserX AND laserY hitbox smileHitX[i] AND smileHitY[i]
		if(((laserX + 2) >= smileHitX[i] && (laserX + 6) <= (smileHitX[i] + 16)) && ((laserY >= smileHitY[i]) && (laserY <= smileHitY[i] + 16)) && hit[i] == false)
		{
			
			hit[i] = true;
			
			laserFired = false;
			
			
			
		}
		
	
	}
	
	for(int i = 5; i <= 8; i++)
	{
		//if laserX AND laserY hitbox smileHitX[i] AND smileHitY[i]
		if(((laserX + 2) >= smileHitX[i] && (laserX + 6) <= (smileHitX[i] + 16)) && ((laserY >= smileHitY[i]) && (laserY <= smileHitY[i] + 16)) && hit[i] == false)
		{
			
			hit[i] = true;
			
			laserFired = false;
			
			
		}
		
	
	}
	
	for(int i = 9; i <= 12; i++)
	{
		//if laserX AND laserY hitbox smileHitX[i] AND smileHitY[i]
		if(((laserX + 2) >= smileHitX[i] && (laserX + 6) <= (smileHitX[i] + 16)) && ((laserY >= smileHitY[i]) && (laserY <= smileHitY[i] + 16)) && hit[i] == false)
		{
			
			hit[i] = true;
			laserFired = false;
			
			
			
			
		}
		
		
	}
	
	

}




int main()
{
	// Init interrupts and VBlank irq.
	irq_init(NULL);
	irq_add(II_VBLANK, NULL);
	
	for(int i = 1; i <= 12; i++)
		smile[i] = &obj_buffer[i*4+1];

	
	//loading background graphics
	// load palette
	memcpy(pal_bg_mem, spacePal, spacePalLen);	
	//load tiles into CBB 0
	memcpy(&tile_mem[0][0], spaceTiles, spaceTilesLen);	
	//load map into SBB 30
	memcpy(&se_mem[30][0], spaceMap, spaceMapLen);
	
	//loading object graphics
	memcpy(&tile_mem[4][0], shipTiles, shipTilesLen);
	memcpy(pal_obj_mem, shipPal, shipPalLen);
	memcpy(&tile_mem[4][4], shotTiles, shotTilesLen);
	memcpy(pal_obj_mem, shotPal, shotPalLen);
	
	for(int i = 1; i <= 12; i++)
	{
		memcpy(&tile_mem[4][i*4+1], smileTiles, smileTilesLen);
		memcpy(pal_obj_mem, smilePal, smilePalLen);
	}
	
	// set up BG0 for a 4bpp 64x32t map
	// 	using charblock 0 and screenblock 31
	REG_BG0CNT = BG_CBB(0) | BG_SBB(30) | BG_4BPP | BG_REG_64x32;
	
	// Video mode 0, enable bg 0.
	REG_DISPCNT= DCNT_MODE0 | DCNT_BG0 | DCNT_OBJ | DCNT_OBJ_1D;
	
	/*
	// Init 4bpp vwf text on bg 0.
	tte_init_chr4c(0, 			// BG 0
		BG_CBB(0)|BG_SBB(31),	// Charblock 0; screenblock 31
		0xF000,					// Screen-entry offset
		bytes2word(1,2,0,0),	// Color attributes.
		CLR_YELLOW, 			// Yellow text
		&verdana9Font,			// Verdana 9 font
		NULL					// Use default chr4 renderer
		);
	
	// Initialize use of stdio.
	tte_init_con();
	
	// Printf something at 96,72
	tte_printf("#{P:96,72}Hello World!");
	*/
	
	Setup();
	
	
	while(1)
	{
		Draw();
		Input();
		Logic();
		
		if(key_hit(KEY_START))
			Setup();
		
		
		
	}
	
	return 0;
}
