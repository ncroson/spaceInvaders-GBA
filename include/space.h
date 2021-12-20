
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

#ifndef GRIT_SPACE_H
#define GRIT_SPACE_H

#define spaceTilesLen 1920
extern const unsigned short spaceTiles[960];

#define spaceMapLen 4096
extern const unsigned short spaceMap[2048];

#define spacePalLen 512
extern const unsigned short spacePal[256];

#endif // GRIT_SPACE_H

//}}BLOCK(space)
