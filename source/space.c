
//{{BLOCK(space)

//======================================================================
//
//	space, 512x256@4, 
//	+ palette 256 entries, not compressed
//	+ 60 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 1920 + 4096 = 6528
//
//	Time-stamp: 2018-01-24, 21:49:56
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short spaceTiles[960] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0xFF55,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0xF555,0x555F,0xF555,0x555F,0x5555,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x55FF,0x5555,0x55FF,0x5555,
	0x5555,0x5555,0x55FF,0x5555,0x55FF,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0xFF55,0x5555,0xFF55,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0xF555,0x5555,0xF555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0xFF55,0x5555,
	0xFF55,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5FF5,0x5555,0x5FF5,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0xFF55,0x5555,0xFF55,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5FF5,0x5555,0x5FF5,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x55FF,0x5555,
	0x55FF,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5FF5,0x5555,0x5FF5,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x1555,0x5555,0x9555,0x5555,0x9555,
	0x5555,0x9995,0x1555,0x1111,0x9995,0x9999,0x9995,0x1999,
	0x1111,0x9111,0x9911,0x9999,0x1199,0x1111,0x9999,0x9999,

	0x5599,0x5555,0x9991,0x5555,0x1119,0x5511,0x1111,0x5511,
	0x9999,0x5999,0x9999,0x9999,0x9999,0x9999,0x1111,0x9991,
	0x5555,0x9555,0x5555,0x9555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x9999,0x9999,0x9999,0x1111,0x1111,0x9999,0x1195,0x1111,
	0x9995,0x9999,0x9555,0x9999,0x5555,0x9995,0x5555,0x5555,
	0x1999,0x1111,0x9111,0x9999,0x9999,0x5999,0x9999,0x5599,
	0x1111,0x5591,0x9999,0x5555,0x5599,0x5555,0x5555,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0xFF55,0x5555,0xFF55,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5FF5,
	0x5555,0x5FF5,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0xFFF5,0x5555,0xFFF5,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5FF5,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0xF555,0x555F,0xF555,0x555F,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x555F,0x5555,0x555F,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0xF555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x55FF,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0xF555,0x555F,0xF555,0x555F,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0xF555,0x555F,
	0x5555,0xF555,0x5555,0xF555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0xB555,0x5555,0xB775,
	0xB555,0x77BB,0xBB55,0x77BB,0xBBB5,0xBBBB,0xBBB5,0xBBBB,

	0x5555,0x5555,0xBB55,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,
	0x7777,0xB777,0x7777,0x7777,0x777B,0x7777,0xBBBB,0xBBBB,
	0x5555,0x5555,0x55BB,0x5555,0xBBBB,0x555B,0xBBBB,0x5BBB,
	0xBBBB,0xBBBB,0x7777,0xDD77,0x7777,0x77DD,0xDDBB,0x7777,
	0x5555,0x5555,0x5555,0xD555,0x5555,0x5DD5,0xD555,0x555D,
	0x5DDB,0xD555,0x55BD,0x5DD5,0xDB77,0x555D,0x5DD7,0x5555,
	0x5DD5,0x5555,0x555D,0x5555,0xD555,0x555D,0x5DD5,0x5555,
	0x555D,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0xB555,0x5555,0xB555,
	0x5555,0xB555,0x5555,0xB555,0x5555,0x5555,0x5555,0x5555,
	0x7777,0xBBBB,0x7777,0xBB77,0x77BB,0xB777,0xBBBB,0x777B,
	0xBBBB,0xDBBB,0xBBBB,0xBDDB,0xDBBB,0xBBBD,0xBDDD,0xBBBB,
	0xBBBB,0xBBBB,0xBBBB,0xDDBB,0xDBBB,0xBBDD,0xBDD7,0xBBBB,
	0x777D,0xDD77,0x7BBB,0xB7DD,0xDDBB,0x7777,0xBBDD,0x77BB,
	0xBBDD,0xDBBB,0xBBBB,0xBDDB,0xDBBB,0xBBBD,0xBDDB,0xBBBB,
	0xBBBD,0xBBBB,0xBBBB,0xBBBB,0xBBB7,0xBBBB,0xBB77,0xBBBB,

	0x777D,0x5555,0x7BBB,0x5555,0xBBBB,0x555B,0xBBBB,0x555B,
	0xBBBB,0x555B,0xBBBB,0x55FB,0xBBBB,0x55FF,0xBBBB,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0xDD55,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0xDD55,0x5555,0x55DD,0xDD55,0x5555,0x55DD,0x5555,
	0x5555,0xDD55,0x5555,0x55DD,0xDD55,0x5555,0x55DD,0x5555,
	0xBBB5,0xDDBB,0xBBB5,0xBBDD,0xDD55,0xBBBB,0xB5DD,0xBBBB,
	0x5555,0xBBB5,0x5555,0xB555,0x5555,0x5555,0x5555,0x5555,

	0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,
	0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xB555,0xBBBB,0x5555,0x5555,
	0x7777,0xBBBB,0x777B,0xBBB7,0x7BBB,0xB777,0xBBBB,0x777B,
	0xBBBB,0x5BBB,0xBBBB,0x555B,0x555B,0x5555,0x5555,0x5555,
	0x5BBB,0x5555,0x5BBB,0x5555,0x55BB,0x5555,0x555B,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0xF555,0x5555,0xF555,0x5555,0xF555,

	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0xEEEE,0xECC5,0xEEEE,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x55EE,0x5555,0x2EEE,0x5552,
	0x5555,0x5555,0x5555,0x2555,0x5555,0x2255,0x5555,0x2225,
	0x5555,0x2225,0x5555,0xC222,0x5555,0xCC22,0x5555,0xCC22,
	0xCEC2,0xECCC,0xCCC2,0xCCC2,0xCCC2,0xCCC2,0xCCCC,0xCC22,
	0xCCCC,0xCC22,0xCCCC,0xCC2C,0xCCCC,0xC22C,0xCCCC,0xC22C,

	0xEEEE,0x5522,0x2222,0x5CC2,0xC222,0x2CCC,0xCCC2,0xCCCC,
	0xCCC2,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x2CCC,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5552,0x5555,
	0x5552,0x5555,0x5522,0x5555,0x5522,0x5555,0x5522,0x5555,
	0x5555,0xCC22,0x5555,0xC225,0x5555,0x2225,0x5555,0x2255,
	0x5555,0x2555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0xCC2C,0xC22C,0x222C,0xCCCC,0x2222,0xCCC2,0xCCC2,0xCCCC,
	0xCCC2,0xCCCC,0xEE22,0x2CCC,0xEE25,0xEEEE,0x5555,0xEEEE,

	0xCCCC,0x22CC,0xCCCC,0x22CC,0x2CCC,0x2222,0x2222,0x2222,
	0x2222,0x52CC,0xEE22,0x552C,0xCEEE,0x5552,0x55EE,0x5555,
	0x5522,0x5555,0x5552,0x5555,0x5552,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x55FF,0x5555,0x55FF,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0xF555,
	0x5555,0xF555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
};

const unsigned short spaceMap[2048] __attribute__((aligned(4)))=
{
	0x0001,0x0002,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0802,0x0001,0x0001,0x0001,0x0003,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0004,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0005,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0006,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0007,0x0407,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0402,0x0001,0x0C05,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0C02,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0008,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0009,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x000A,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x000B,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x000C,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0804,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0409,0x0001,0x0001,0x0001,0x0001,0x000D,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x000B,
	0x0001,0x0001,0x0001,0x0001,0x000E,0x000F,0x0010,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0011,0x0012,0x0013,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0014,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x040A,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0405,0x0001,0x0001,0x0001,0x0001,
	0x0809,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0015,0x0001,0x0001,0x0001,0x0001,0x0001,0x0C0D,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0414,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x000C,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0405,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0016,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0814,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0017,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x040A,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0817,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0003,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0007,0x0407,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x000B,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0C0A,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0018,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x080A,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0014,0x0019,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0404,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0C09,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x001A,0x041A,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x081A,0x0C1A,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x000C,0x0001,0x0001,0x0001,0x001B,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x001A,0x041A,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x081B,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0404,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0814,0x0001,0x0001,0x0001,0x0001,
	0x081A,0x0C1A,0x0001,0x0001,0x0001,0x001C,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0807,0x0C07,0x0001,0x0001,0x0001,0x0807,
	0x0C07,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0404,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0007,0x0407,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0805,0x0001,0x0001,
	0x0001,0x0007,0x0407,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0004,0x0001,
	0x0001,0x0001,0x080D,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0C06,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x041B,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0402,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x001D,0x0001,
	0x0001,0x0001,0x0C1B,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0C02,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x081D,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x001E,0x041E,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x001F,0x0020,0x0021,0x0022,0x0023,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0006,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x080A,0x0001,0x0001,
	0x0024,0x0025,0x0026,0x0027,0x0028,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0003,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0014,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0029,
	0x002A,0x002B,0x002C,0x002D,0x002E,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x000B,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x080D,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0009,0x0001,0x002F,0x042F,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0030,0x0031,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0032,0x0033,0x0034,0x0035,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0408,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x040D,0x0001,0x0001,0x0036,0x0037,0x0038,0x0039,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0406,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x003A,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0C05,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x003B,0x043B,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x080A,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x000B,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0C3A,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0C0A,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0405,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x001B,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0417,0x0001,0x0001,0x0001,0x0001,

	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0C06,0x081B,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0C17,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
};

const unsigned short spacePal[256] __attribute__((aligned(4)))=
{
	0x0000,0x0010,0x0200,0x0217,0x3000,0x2C0B,0x4200,0x6318,
	0x4210,0x001F,0x03E0,0x02DF,0x7C00,0x7C1F,0x7E80,0x7FFF,
	0x0004,0x0007,0x000B,0x000F,0x0013,0x0017,0x001B,0x001F,
	0x0080,0x00E0,0x0160,0x01E0,0x0260,0x02E0,0x0360,0x03E0,
	0x0084,0x00E7,0x016B,0x01EF,0x0273,0x02F7,0x037B,0x03FF,
	0x1000,0x1C00,0x2C00,0x3C00,0x4C00,0x5C00,0x6C00,0x7C00,
	0x1004,0x1C07,0x2C0B,0x3C0F,0x4C13,0x5C17,0x6C1B,0x7C1F,
	0x1080,0x1CE0,0x2D60,0x3DE0,0x4E60,0x5EE0,0x6F60,0x7FE0,

	0x0842,0x0C63,0x14A5,0x1CE7,0x2529,0x2D6B,0x35AD,0x3DEF,
	0x4631,0x4E73,0x56B5,0x5EF7,0x6739,0x6F7B,0x77BD,0x7FFF,
	0x001F,0x007F,0x00FF,0x017F,0x01FF,0x027F,0x02FF,0x037F,
	0x03FF,0x03FC,0x03F8,0x03F4,0x03F0,0x03EC,0x03E8,0x03E4,
	0x03E0,0x0FE0,0x1FE0,0x2FE0,0x3FE0,0x4FE0,0x5FE0,0x6FE0,
	0x7FE0,0x7F80,0x7F00,0x7E80,0x7E00,0x7D80,0x7D00,0x7C80,
	0x7C00,0x7C03,0x7C07,0x7C0B,0x7C0F,0x7C13,0x7C17,0x7C1B,
	0x7C1F,0x701F,0x601F,0x501F,0x401F,0x301F,0x201F,0x101F,

	0x001F,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0421,0x0842,0x0C63,0x1084,0x14A5,0x18C6,0x1CE7,
	0x2108,0x2529,0x294A,0x2D6B,0x318C,0x35AD,0x39CE,0x3DEF,
	0x4210,0x4631,0x4A52,0x4E73,0x5294,0x56B5,0x5AD6,0x5EF7,
	0x6318,0x6739,0x6B5A,0x6F7B,0x739C,0x77BD,0x7BDE,0x7FFF,
};

//}}BLOCK(space)