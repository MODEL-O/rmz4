.section .rodata
.balign 4, 0

.global gTileset20Graphics
gTileset20Graphics:
	@ Graphic 0
	.4byte gTileset20Graphics_0-. @ src offset
	.4byte (0 << 22) | 4772 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset20Graphics_0_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset20Graphics_1-. @ src offset
	.4byte (512 << 22) | 9136 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset20Graphics_1_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset20Graphics_0:
	.incbin "data/tilesets/tileset20/0/tiles.4bpp.lz"
	gTileset20Graphics_0_Palettes:
	.incbin "data/tilesets/tileset20/0/02.pal"
	.incbin "data/tilesets/tileset20/0/03.pal"
	.incbin "data/tilesets/tileset20/0/04.pal"
	.incbin "data/tilesets/tileset20/0/05.pal"
	.incbin "data/tilesets/tileset20/0/06.pal"
	.incbin "data/tilesets/tileset20/0/07.pal"
gTileset20Graphics_1:
	.incbin "data/tilesets/tileset20/1/tiles.4bpp.lz"
	gTileset20Graphics_1_Palettes:
	.incbin "data/tilesets/tileset20/1/09.pal"
	.incbin "data/tilesets/tileset20/1/10.pal"
	.incbin "data/tilesets/tileset20/1/11.pal"
	.incbin "data/tilesets/tileset20/1/12.pal"
