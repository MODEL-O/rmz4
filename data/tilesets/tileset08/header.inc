.section .rodata
.balign 4, 0

.global gTileset08Graphics
gTileset08Graphics:
	@ Graphic 0
	.4byte gTileset08Graphics_0-. @ src offset
	.4byte (0 << 22) | 14848 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_0_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset08Graphics_1-. @ src offset
	.4byte (512 << 22) | 16320 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_1_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset08Graphics_2-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_2_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset08Graphics_3-. @ src offset
	.4byte (0 << 22) | 14400 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_3_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset08Graphics_4-. @ src offset
	.4byte (512 << 22) | 10560 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_4_Palettes-. @ src offset
		.2byte 64 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset08Graphics_5-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_5_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 6
	.4byte gTileset08Graphics_6-. @ src offset
	.4byte (0 << 22) | 15808 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_6_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 7
	.4byte gTileset08Graphics_7-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_7_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 8
	.4byte gTileset08Graphics_8-. @ src offset
	.4byte (0 << 22) | 13568 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_8_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 9
	.4byte gTileset08Graphics_9-. @ src offset
	.4byte (512 << 22) | 11840 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_9_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 10
	.4byte gTileset08Graphics_10-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_10_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 11
	.4byte gTileset08Graphics_11-. @ src offset
	.4byte (512 << 22) | 10072 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset08Graphics_11_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset08Graphics_0:
	.incbin "data/tilesets/tileset08/0/tiles.4bpp"
	gTileset08Graphics_0_Palettes:
	.incbin "data/tilesets/tileset08/0/02.pal"
	.incbin "data/tilesets/tileset08/0/03.pal"
	.incbin "data/tilesets/tileset08/0/04.pal"
	.incbin "data/tilesets/tileset08/0/05.pal"
	.incbin "data/tilesets/tileset08/0/06.pal"
	.incbin "data/tilesets/tileset08/0/07.pal"
	.incbin "data/tilesets/tileset08/0/08.pal"
gTileset08Graphics_1:
	.incbin "data/tilesets/tileset08/1/tiles.4bpp"
	gTileset08Graphics_1_Palettes:
	.incbin "data/tilesets/tileset08/1/09.pal"
	.incbin "data/tilesets/tileset08/1/10.pal"
	.incbin "data/tilesets/tileset08/1/11.pal"
	.incbin "data/tilesets/tileset08/1/12.pal"
	.incbin "data/tilesets/tileset08/1/13.pal"
	.incbin "data/tilesets/tileset08/1/14.pal"
	.incbin "data/tilesets/tileset08/1/15.pal"
gTileset08Graphics_2:
	.incbin "data/tilesets/tileset08/2/tiles.4bpp"
	gTileset08Graphics_2_Palettes:
	.incbin "data/tilesets/tileset08/2/02.pal"
	.incbin "data/tilesets/tileset08/2/03.pal"
	.incbin "data/tilesets/tileset08/2/04.pal"
	.incbin "data/tilesets/tileset08/2/05.pal"
gTileset08Graphics_3:
	.incbin "data/tilesets/tileset08/3/tiles.4bpp"
	gTileset08Graphics_3_Palettes:
	.incbin "data/tilesets/tileset08/3/02.pal"
	.incbin "data/tilesets/tileset08/3/03.pal"
	.incbin "data/tilesets/tileset08/3/04.pal"
	.incbin "data/tilesets/tileset08/3/05.pal"
	.incbin "data/tilesets/tileset08/3/06.pal"
gTileset08Graphics_4:
	.incbin "data/tilesets/tileset08/4/tiles.4bpp"
	gTileset08Graphics_4_Palettes:
	.incbin "data/tilesets/tileset08/4/09.pal"
	.incbin "data/tilesets/tileset08/4/10.pal"
gTileset08Graphics_5:
	.incbin "data/tilesets/tileset08/5/tiles.4bpp"
	gTileset08Graphics_5_Palettes:
	.incbin "data/tilesets/tileset08/5/09.pal"
	.incbin "data/tilesets/tileset08/5/10.pal"
	.incbin "data/tilesets/tileset08/5/11.pal"
	.incbin "data/tilesets/tileset08/5/12.pal"
	.incbin "data/tilesets/tileset08/5/13.pal"
	.incbin "data/tilesets/tileset08/5/14.pal"
gTileset08Graphics_6:
	.incbin "data/tilesets/tileset08/6/tiles.4bpp"
	gTileset08Graphics_6_Palettes:
	.incbin "data/tilesets/tileset08/6/02.pal"
	.incbin "data/tilesets/tileset08/6/03.pal"
	.incbin "data/tilesets/tileset08/6/04.pal"
	.incbin "data/tilesets/tileset08/6/05.pal"
	.incbin "data/tilesets/tileset08/6/06.pal"
	.incbin "data/tilesets/tileset08/6/07.pal"
gTileset08Graphics_7:
	.incbin "data/tilesets/tileset08/7/tiles.4bpp"
	gTileset08Graphics_7_Palettes:
	.incbin "data/tilesets/tileset08/7/09.pal"
	.incbin "data/tilesets/tileset08/7/10.pal"
	.incbin "data/tilesets/tileset08/7/11.pal"
	.incbin "data/tilesets/tileset08/7/12.pal"
	.incbin "data/tilesets/tileset08/7/13.pal"
	.incbin "data/tilesets/tileset08/7/14.pal"
	.incbin "data/tilesets/tileset08/7/15.pal"
gTileset08Graphics_8:
	.incbin "data/tilesets/tileset08/8/tiles.4bpp"
	gTileset08Graphics_8_Palettes:
	.incbin "data/tilesets/tileset08/8/02.pal"
	.incbin "data/tilesets/tileset08/8/03.pal"
	.incbin "data/tilesets/tileset08/8/04.pal"
	.incbin "data/tilesets/tileset08/8/05.pal"
	.incbin "data/tilesets/tileset08/8/06.pal"
	.incbin "data/tilesets/tileset08/8/07.pal"
	.incbin "data/tilesets/tileset08/8/08.pal"
gTileset08Graphics_9:
	.incbin "data/tilesets/tileset08/9/tiles.4bpp"
	gTileset08Graphics_9_Palettes:
	.incbin "data/tilesets/tileset08/9/09.pal"
	.incbin "data/tilesets/tileset08/9/10.pal"
	.incbin "data/tilesets/tileset08/9/11.pal"
	.incbin "data/tilesets/tileset08/9/12.pal"
	.incbin "data/tilesets/tileset08/9/13.pal"
gTileset08Graphics_10:
	.incbin "data/tilesets/tileset08/10/tiles.4bpp"
	gTileset08Graphics_10_Palettes:
	.incbin "data/tilesets/tileset08/10/09.pal"
	.incbin "data/tilesets/tileset08/10/10.pal"
	.incbin "data/tilesets/tileset08/10/11.pal"
	.incbin "data/tilesets/tileset08/10/12.pal"
	.incbin "data/tilesets/tileset08/10/13.pal"
gTileset08Graphics_11:
	.incbin "data/tilesets/tileset08/11/tiles.4bpp.lz"
	gTileset08Graphics_11_Palettes:
	.incbin "data/tilesets/tileset08/11/09.pal"
	.incbin "data/tilesets/tileset08/11/10.pal"
	.incbin "data/tilesets/tileset08/11/11.pal"
	.incbin "data/tilesets/tileset08/11/12.pal"
	.incbin "data/tilesets/tileset08/11/13.pal"
	.incbin "data/tilesets/tileset08/11/14.pal"
	.incbin "data/tilesets/tileset08/11/15.pal"
