.section .rodata
.balign 4, 0

.global gTileset23Graphics
gTileset23Graphics:
	@ Graphic 0
	.4byte gTileset23Graphics_0-. @ src offset
	.4byte (0 << 22) | 7456 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset23Graphics_0_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset23Graphics_1-. @ src offset
	.4byte (512 << 22) | 1976 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset23Graphics_1_Palettes-. @ src offset
		.2byte 0 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset23Graphics_0:
	.incbin "data/tilesets/tileset23/0/tiles.4bpp.lz"
	gTileset23Graphics_0_Palettes:
	.incbin "data/tilesets/tileset23/0/02.pal"
	.incbin "data/tilesets/tileset23/0/03.pal"
	.incbin "data/tilesets/tileset23/0/04.pal"
	.incbin "data/tilesets/tileset23/0/05.pal"
	.incbin "data/tilesets/tileset23/0/06.pal"
gTileset23Graphics_1:
	.incbin "data/tilesets/tileset23/1/tiles.4bpp.lz"
	gTileset23Graphics_1_Palettes:
