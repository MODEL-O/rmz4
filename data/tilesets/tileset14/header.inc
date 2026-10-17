.section .rodata
.balign 4, 0

.global gTileset14Graphics
gTileset14Graphics:
	@ Graphic 0
	.4byte gTileset14Graphics_0-. @ src offset
	.4byte (0 << 22) | 7424 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_0_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset14Graphics_1-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_1_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset14Graphics_2-. @ src offset
	.4byte (512 << 22) | 9856 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_2_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset14Graphics_3-. @ src offset
	.4byte (512 << 22) | 9408 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_3_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset14Graphics_4-. @ src offset
	.4byte (0 << 22) | 9792 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_4_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset14Graphics_5-. @ src offset
	.4byte (512 << 22) | 9856 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_5_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 6
	.4byte gTileset14Graphics_6-. @ src offset
	.4byte (0 << 22) | 14912 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_6_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 7
	.4byte gTileset14Graphics_7-. @ src offset
	.4byte (0 << 22) | 15552 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_7_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 8
	.4byte gTileset14Graphics_8-. @ src offset
	.4byte (512 << 22) | 12736 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_8_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 9
	.4byte gTileset14Graphics_9-. @ src offset
	.4byte (0 << 22) | 11456 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_9_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 10
	.4byte gTileset14Graphics_10-. @ src offset
	.4byte (512 << 22) | 16000 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_10_Palettes-. @ src offset
		.2byte 64 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 11
	.4byte gTileset14Graphics_11-. @ src offset
	.4byte (0 << 22) | 8920 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset14Graphics_11_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset14Graphics_0:
	.incbin "data/tilesets/tileset14/0/tiles.4bpp"
	gTileset14Graphics_0_Palettes:
	.incbin "data/tilesets/tileset14/0/02.pal"
	.incbin "data/tilesets/tileset14/0/03.pal"
	.incbin "data/tilesets/tileset14/0/04.pal"
	.incbin "data/tilesets/tileset14/0/05.pal"
	.incbin "data/tilesets/tileset14/0/06.pal"
gTileset14Graphics_1:
	.incbin "data/tilesets/tileset14/1/tiles.4bpp"
	gTileset14Graphics_1_Palettes:
	.incbin "data/tilesets/tileset14/1/09.pal"
	.incbin "data/tilesets/tileset14/1/10.pal"
	.incbin "data/tilesets/tileset14/1/11.pal"
	.incbin "data/tilesets/tileset14/1/12.pal"
	.incbin "data/tilesets/tileset14/1/13.pal"
	.incbin "data/tilesets/tileset14/1/14.pal"
	.incbin "data/tilesets/tileset14/1/15.pal"
gTileset14Graphics_2:
	.incbin "data/tilesets/tileset14/2/tiles.4bpp"
	gTileset14Graphics_2_Palettes:
	.incbin "data/tilesets/tileset14/2/09.pal"
	.incbin "data/tilesets/tileset14/2/10.pal"
	.incbin "data/tilesets/tileset14/2/11.pal"
gTileset14Graphics_3:
	.incbin "data/tilesets/tileset14/3/tiles.4bpp"
	gTileset14Graphics_3_Palettes:
	.incbin "data/tilesets/tileset14/3/09.pal"
	.incbin "data/tilesets/tileset14/3/10.pal"
	.incbin "data/tilesets/tileset14/3/11.pal"
	.incbin "data/tilesets/tileset14/3/12.pal"
gTileset14Graphics_4:
	.incbin "data/tilesets/tileset14/4/tiles.4bpp"
	gTileset14Graphics_4_Palettes:
	.incbin "data/tilesets/tileset14/4/02.pal"
	.incbin "data/tilesets/tileset14/4/03.pal"
	.incbin "data/tilesets/tileset14/4/04.pal"
gTileset14Graphics_5:
	.incbin "data/tilesets/tileset14/5/tiles.4bpp"
	gTileset14Graphics_5_Palettes:
	.incbin "data/tilesets/tileset14/5/09.pal"
	.incbin "data/tilesets/tileset14/5/10.pal"
	.incbin "data/tilesets/tileset14/5/11.pal"
	.incbin "data/tilesets/tileset14/5/12.pal"
gTileset14Graphics_6:
	.incbin "data/tilesets/tileset14/6/tiles.4bpp"
	gTileset14Graphics_6_Palettes:
	.incbin "data/tilesets/tileset14/6/02.pal"
	.incbin "data/tilesets/tileset14/6/03.pal"
	.incbin "data/tilesets/tileset14/6/04.pal"
	.incbin "data/tilesets/tileset14/6/05.pal"
	.incbin "data/tilesets/tileset14/6/06.pal"
	.incbin "data/tilesets/tileset14/6/07.pal"
gTileset14Graphics_7:
	.incbin "data/tilesets/tileset14/7/tiles.4bpp"
	gTileset14Graphics_7_Palettes:
	.incbin "data/tilesets/tileset14/7/02.pal"
	.incbin "data/tilesets/tileset14/7/03.pal"
	.incbin "data/tilesets/tileset14/7/04.pal"
	.incbin "data/tilesets/tileset14/7/05.pal"
	.incbin "data/tilesets/tileset14/7/06.pal"
	.incbin "data/tilesets/tileset14/7/07.pal"
	.incbin "data/tilesets/tileset14/7/08.pal"
gTileset14Graphics_8:
	.incbin "data/tilesets/tileset14/8/tiles.4bpp"
	gTileset14Graphics_8_Palettes:
	.incbin "data/tilesets/tileset14/8/09.pal"
	.incbin "data/tilesets/tileset14/8/10.pal"
	.incbin "data/tilesets/tileset14/8/11.pal"
	.incbin "data/tilesets/tileset14/8/12.pal"
	.incbin "data/tilesets/tileset14/8/13.pal"
	.incbin "data/tilesets/tileset14/8/14.pal"
	.incbin "data/tilesets/tileset14/8/15.pal"
gTileset14Graphics_9:
	.incbin "data/tilesets/tileset14/9/tiles.4bpp"
	gTileset14Graphics_9_Palettes:
	.incbin "data/tilesets/tileset14/9/02.pal"
	.incbin "data/tilesets/tileset14/9/03.pal"
	.incbin "data/tilesets/tileset14/9/04.pal"
	.incbin "data/tilesets/tileset14/9/05.pal"
	.incbin "data/tilesets/tileset14/9/06.pal"
	.incbin "data/tilesets/tileset14/9/07.pal"
gTileset14Graphics_10:
	.incbin "data/tilesets/tileset14/10/tiles.4bpp"
	gTileset14Graphics_10_Palettes:
	.incbin "data/tilesets/tileset14/10/09.pal"
	.incbin "data/tilesets/tileset14/10/10.pal"
gTileset14Graphics_11:
	.incbin "data/tilesets/tileset14/11/tiles.4bpp.lz"
	gTileset14Graphics_11_Palettes:
	.incbin "data/tilesets/tileset14/11/02.pal"
	.incbin "data/tilesets/tileset14/11/03.pal"
	.incbin "data/tilesets/tileset14/11/04.pal"
	.incbin "data/tilesets/tileset14/11/05.pal"
	.incbin "data/tilesets/tileset14/11/06.pal"
	.incbin "data/tilesets/tileset14/11/07.pal"
	.incbin "data/tilesets/tileset14/11/08.pal"
