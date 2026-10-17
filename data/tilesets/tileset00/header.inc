.section .rodata
.balign 4, 0

.global gTileset00Graphics
gTileset00Graphics:
	@ Graphic 0
	.4byte gTileset00Graphics_0-. @ src offset
	.4byte (0 << 22) | 11548 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset00Graphics_0_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset00Graphics_1-. @ src offset
	.4byte (512 << 22) | 14140 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset00Graphics_1_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset00Graphics_0:
	.incbin "data/tilesets/tileset00/0/tiles.4bpp.lz"
	gTileset00Graphics_0_Palettes:
	.incbin "data/tilesets/tileset00/0/02.pal"
	.incbin "data/tilesets/tileset00/0/03.pal"
	.incbin "data/tilesets/tileset00/0/04.pal"
	.incbin "data/tilesets/tileset00/0/05.pal"
	.incbin "data/tilesets/tileset00/0/06.pal"
gTileset00Graphics_1:
	.incbin "data/tilesets/tileset00/1/tiles.4bpp.lz"
	gTileset00Graphics_1_Palettes:
	.incbin "data/tilesets/tileset00/1/09.pal"
	.incbin "data/tilesets/tileset00/1/10.pal"
	.incbin "data/tilesets/tileset00/1/11.pal"
	.incbin "data/tilesets/tileset00/1/12.pal"
	.incbin "data/tilesets/tileset00/1/13.pal"
	.incbin "data/tilesets/tileset00/1/14.pal"
