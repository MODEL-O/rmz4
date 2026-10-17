.section .rodata
.balign 4, 0

.global gTileset13Graphics
gTileset13Graphics:
	@ Graphic 0
	.4byte gTileset13Graphics_0-. @ src offset
	.4byte (0 << 22) | 8192 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset13Graphics_0_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset13Graphics_1-. @ src offset
	.4byte (512 << 22) | 15744 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset13Graphics_1_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset13Graphics_2-. @ src offset
	.4byte (0 << 22) | 14144 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset13Graphics_2_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset13Graphics_3-. @ src offset
	.4byte (512 << 22) | 8340 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset13Graphics_3_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset13Graphics_0:
	.incbin "data/tilesets/tileset13/0/tiles.4bpp"
	gTileset13Graphics_0_Palettes:
	.incbin "data/tilesets/tileset13/0/02.pal"
	.incbin "data/tilesets/tileset13/0/03.pal"
	.incbin "data/tilesets/tileset13/0/04.pal"
	.incbin "data/tilesets/tileset13/0/05.pal"
gTileset13Graphics_1:
	.incbin "data/tilesets/tileset13/1/tiles.4bpp"
	gTileset13Graphics_1_Palettes:
	.incbin "data/tilesets/tileset13/1/09.pal"
	.incbin "data/tilesets/tileset13/1/10.pal"
	.incbin "data/tilesets/tileset13/1/11.pal"
	.incbin "data/tilesets/tileset13/1/12.pal"
	.incbin "data/tilesets/tileset13/1/13.pal"
gTileset13Graphics_2:
	.incbin "data/tilesets/tileset13/2/tiles.4bpp"
	gTileset13Graphics_2_Palettes:
	.incbin "data/tilesets/tileset13/2/02.pal"
	.incbin "data/tilesets/tileset13/2/03.pal"
	.incbin "data/tilesets/tileset13/2/04.pal"
	.incbin "data/tilesets/tileset13/2/05.pal"
	.incbin "data/tilesets/tileset13/2/06.pal"
	.incbin "data/tilesets/tileset13/2/07.pal"
	.incbin "data/tilesets/tileset13/2/08.pal"
gTileset13Graphics_3:
	.incbin "data/tilesets/tileset13/3/tiles.4bpp.lz"
	gTileset13Graphics_3_Palettes:
	.incbin "data/tilesets/tileset13/3/09.pal"
	.incbin "data/tilesets/tileset13/3/10.pal"
	.incbin "data/tilesets/tileset13/3/11.pal"
	.incbin "data/tilesets/tileset13/3/12.pal"
