.section .rodata
.balign 4, 0

.global gTileset24Graphics
gTileset24Graphics:
	@ Graphic 0
	.4byte gTileset24Graphics_0-. @ src offset
	.4byte (0 << 22) | 6200 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset24Graphics_0_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset24Graphics_1-. @ src offset
	.4byte (512 << 22) | 6960 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset24Graphics_1_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset24Graphics_0:
	.incbin "data/tilesets/tileset24/0/tiles.4bpp.lz"
	gTileset24Graphics_0_Palettes:
	.incbin "data/tilesets/tileset24/0/02.pal"
	.incbin "data/tilesets/tileset24/0/03.pal"
	.incbin "data/tilesets/tileset24/0/04.pal"
	.incbin "data/tilesets/tileset24/0/05.pal"
gTileset24Graphics_1:
	.incbin "data/tilesets/tileset24/1/tiles.4bpp.lz"
	gTileset24Graphics_1_Palettes:
	.incbin "data/tilesets/tileset24/1/09.pal"
	.incbin "data/tilesets/tileset24/1/10.pal"
	.incbin "data/tilesets/tileset24/1/11.pal"
	.incbin "data/tilesets/tileset24/1/12.pal"
