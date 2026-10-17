.section .rodata
.balign 4, 0

.global gTileset16Graphics
gTileset16Graphics:
	@ Graphic 0
	.4byte gTileset16Graphics_0-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset16Graphics_0_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset16Graphics_1-. @ src offset
	.4byte (512 << 22) | 15552 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset16Graphics_1_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset16Graphics_2-. @ src offset
	.4byte (0 << 22) | 12288 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset16Graphics_2_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset16Graphics_3-. @ src offset
	.4byte (0 << 22) | 14464 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset16Graphics_3_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset16Graphics_4-. @ src offset
	.4byte (512 << 22) | 5588 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset16Graphics_4_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset16Graphics_5-. @ src offset
	.4byte (0 << 22) | 16192 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset16Graphics_5_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 6
	.4byte gTileset16Graphics_6-. @ src offset
	.4byte (0 << 22) | 10244 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset16Graphics_6_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 7
	.4byte gTileset16Graphics_7-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset16Graphics_7_Palettes-. @ src offset
		.2byte 64 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 8
	.4byte gTileset16Graphics_8-. @ src offset
	.4byte (512 << 22) | 8960 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset16Graphics_8_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset16Graphics_0:
	.incbin "data/tilesets/tileset16/0/tiles.4bpp"
	gTileset16Graphics_0_Palettes:
	.incbin "data/tilesets/tileset16/0/02.pal"
	.incbin "data/tilesets/tileset16/0/03.pal"
	.incbin "data/tilesets/tileset16/0/04.pal"
	.incbin "data/tilesets/tileset16/0/05.pal"
	.incbin "data/tilesets/tileset16/0/06.pal"
	.incbin "data/tilesets/tileset16/0/07.pal"
	.incbin "data/tilesets/tileset16/0/08.pal"
gTileset16Graphics_1:
	.incbin "data/tilesets/tileset16/1/tiles.4bpp"
	gTileset16Graphics_1_Palettes:
	.incbin "data/tilesets/tileset16/1/09.pal"
	.incbin "data/tilesets/tileset16/1/10.pal"
	.incbin "data/tilesets/tileset16/1/11.pal"
	.incbin "data/tilesets/tileset16/1/12.pal"
	.incbin "data/tilesets/tileset16/1/13.pal"
	.incbin "data/tilesets/tileset16/1/14.pal"
	.incbin "data/tilesets/tileset16/1/15.pal"
gTileset16Graphics_2:
	.incbin "data/tilesets/tileset16/2/tiles.4bpp"
	gTileset16Graphics_2_Palettes:
	.incbin "data/tilesets/tileset16/2/02.pal"
	.incbin "data/tilesets/tileset16/2/03.pal"
	.incbin "data/tilesets/tileset16/2/04.pal"
gTileset16Graphics_3:
	.incbin "data/tilesets/tileset16/3/tiles.4bpp"
	gTileset16Graphics_3_Palettes:
	.incbin "data/tilesets/tileset16/3/02.pal"
	.incbin "data/tilesets/tileset16/3/03.pal"
	.incbin "data/tilesets/tileset16/3/04.pal"
	.incbin "data/tilesets/tileset16/3/05.pal"
	.incbin "data/tilesets/tileset16/3/06.pal"
	.incbin "data/tilesets/tileset16/3/07.pal"
	.incbin "data/tilesets/tileset16/3/08.pal"
gTileset16Graphics_4:
	.incbin "data/tilesets/tileset16/4/tiles.4bpp.lz"
	gTileset16Graphics_4_Palettes:
	.incbin "data/tilesets/tileset16/4/09.pal"
	.incbin "data/tilesets/tileset16/4/10.pal"
	.incbin "data/tilesets/tileset16/4/11.pal"
	.incbin "data/tilesets/tileset16/4/12.pal"
	.incbin "data/tilesets/tileset16/4/13.pal"
gTileset16Graphics_5:
	.incbin "data/tilesets/tileset16/5/tiles.4bpp"
	gTileset16Graphics_5_Palettes:
	.incbin "data/tilesets/tileset16/5/02.pal"
	.incbin "data/tilesets/tileset16/5/03.pal"
	.incbin "data/tilesets/tileset16/5/04.pal"
	.incbin "data/tilesets/tileset16/5/05.pal"
	.incbin "data/tilesets/tileset16/5/06.pal"
	.incbin "data/tilesets/tileset16/5/07.pal"
	.incbin "data/tilesets/tileset16/5/08.pal"
gTileset16Graphics_6:
	.incbin "data/tilesets/tileset16/6/tiles.4bpp.lz"
	gTileset16Graphics_6_Palettes:
	.incbin "data/tilesets/tileset16/6/02.pal"
	.incbin "data/tilesets/tileset16/6/03.pal"
	.incbin "data/tilesets/tileset16/6/04.pal"
	.incbin "data/tilesets/tileset16/6/05.pal"
gTileset16Graphics_7:
	.incbin "data/tilesets/tileset16/7/tiles.4bpp"
	gTileset16Graphics_7_Palettes:
	.incbin "data/tilesets/tileset16/7/09.pal"
	.incbin "data/tilesets/tileset16/7/10.pal"
gTileset16Graphics_8:
	.incbin "data/tilesets/tileset16/8/tiles.4bpp.lz"
	gTileset16Graphics_8_Palettes:
	.incbin "data/tilesets/tileset16/8/09.pal"
	.incbin "data/tilesets/tileset16/8/10.pal"
	.incbin "data/tilesets/tileset16/8/11.pal"
	.incbin "data/tilesets/tileset16/8/12.pal"
	.incbin "data/tilesets/tileset16/8/13.pal"
