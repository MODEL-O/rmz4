.section .rodata
.balign 4, 0

.global gTileset22Graphics
gTileset22Graphics:
	@ Graphic 0
	.4byte gTileset22Graphics_0-. @ src offset
	.4byte (0 << 22) | 10548 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset22Graphics_0_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset22Graphics_1-. @ src offset
	.4byte (512 << 22) | 1976 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset22Graphics_1_Palettes-. @ src offset
		.2byte 0 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset22Graphics_0:
	.incbin "data/tilesets/tileset22/0/tiles.4bpp.lz"
	gTileset22Graphics_0_Palettes:
	.incbin "data/tilesets/tileset22/0/02.pal"
	.incbin "data/tilesets/tileset22/0/03.pal"
	.incbin "data/tilesets/tileset22/0/04.pal"
	.incbin "data/tilesets/tileset22/0/05.pal"
gTileset22Graphics_1:
	.incbin "data/tilesets/tileset22/1/tiles.4bpp.lz"
	gTileset22Graphics_1_Palettes:
