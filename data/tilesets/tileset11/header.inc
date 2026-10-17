.section .rodata
.balign 4, 0

.global gTileset11Graphics
gTileset11Graphics:
	@ Graphic 0
	.4byte gTileset11Graphics_0-. @ src offset
	.4byte (0 << 22) | 16320 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_0_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset11Graphics_1-. @ src offset
	.4byte (512 << 22) | 16256 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_1_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset11Graphics_2-. @ src offset
	.4byte (0 << 22) | 16320 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_2_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset11Graphics_3-. @ src offset
	.4byte (512 << 22) | 16128 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_3_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset11Graphics_4-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_4_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset11Graphics_5-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_5_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 6
	.4byte gTileset11Graphics_6-. @ src offset
	.4byte (0 << 22) | 13248 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_6_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 7
	.4byte gTileset11Graphics_7-. @ src offset
	.4byte (512 << 22) | 13760 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_7_Palettes-. @ src offset
		.2byte 64 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 8
	.4byte gTileset11Graphics_8-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_8_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 9
	.4byte gTileset11Graphics_9-. @ src offset
	.4byte (512 << 22) | 256 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_9_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 10
	.4byte gTileset11Graphics_10-. @ src offset
	.4byte (0 << 22) | 16192 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_10_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 11
	.4byte gTileset11Graphics_11-. @ src offset
	.4byte (512 << 22) | 6720 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_11_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 12
	.4byte gTileset11Graphics_12-. @ src offset
	.4byte (0 << 22) | 16320 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_12_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 13
	.4byte gTileset11Graphics_13-. @ src offset
	.4byte (0 << 22) | 10432 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset11Graphics_13_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset11Graphics_0:
	.incbin "data/tilesets/tileset11/0/tiles.4bpp"
	gTileset11Graphics_0_Palettes:
	.incbin "data/tilesets/tileset11/0/02.pal"
	.incbin "data/tilesets/tileset11/0/03.pal"
	.incbin "data/tilesets/tileset11/0/04.pal"
	.incbin "data/tilesets/tileset11/0/05.pal"
	.incbin "data/tilesets/tileset11/0/06.pal"
	.incbin "data/tilesets/tileset11/0/07.pal"
gTileset11Graphics_1:
	.incbin "data/tilesets/tileset11/1/tiles.4bpp"
	gTileset11Graphics_1_Palettes:
	.incbin "data/tilesets/tileset11/1/09.pal"
	.incbin "data/tilesets/tileset11/1/10.pal"
	.incbin "data/tilesets/tileset11/1/11.pal"
	.incbin "data/tilesets/tileset11/1/12.pal"
	.incbin "data/tilesets/tileset11/1/13.pal"
	.incbin "data/tilesets/tileset11/1/14.pal"
	.incbin "data/tilesets/tileset11/1/15.pal"
gTileset11Graphics_2:
	.incbin "data/tilesets/tileset11/2/tiles.4bpp"
	gTileset11Graphics_2_Palettes:
	.incbin "data/tilesets/tileset11/2/02.pal"
	.incbin "data/tilesets/tileset11/2/03.pal"
	.incbin "data/tilesets/tileset11/2/04.pal"
	.incbin "data/tilesets/tileset11/2/05.pal"
	.incbin "data/tilesets/tileset11/2/06.pal"
	.incbin "data/tilesets/tileset11/2/07.pal"
	.incbin "data/tilesets/tileset11/2/08.pal"
gTileset11Graphics_3:
	.incbin "data/tilesets/tileset11/3/tiles.4bpp"
	gTileset11Graphics_3_Palettes:
	.incbin "data/tilesets/tileset11/3/09.pal"
	.incbin "data/tilesets/tileset11/3/10.pal"
	.incbin "data/tilesets/tileset11/3/11.pal"
	.incbin "data/tilesets/tileset11/3/12.pal"
	.incbin "data/tilesets/tileset11/3/13.pal"
	.incbin "data/tilesets/tileset11/3/14.pal"
	.incbin "data/tilesets/tileset11/3/15.pal"
gTileset11Graphics_4:
	.incbin "data/tilesets/tileset11/4/tiles.4bpp"
	gTileset11Graphics_4_Palettes:
	.incbin "data/tilesets/tileset11/4/02.pal"
	.incbin "data/tilesets/tileset11/4/03.pal"
	.incbin "data/tilesets/tileset11/4/04.pal"
	.incbin "data/tilesets/tileset11/4/05.pal"
	.incbin "data/tilesets/tileset11/4/06.pal"
gTileset11Graphics_5:
	.incbin "data/tilesets/tileset11/5/tiles.4bpp"
	gTileset11Graphics_5_Palettes:
	.incbin "data/tilesets/tileset11/5/02.pal"
	.incbin "data/tilesets/tileset11/5/03.pal"
	.incbin "data/tilesets/tileset11/5/04.pal"
	.incbin "data/tilesets/tileset11/5/05.pal"
	.incbin "data/tilesets/tileset11/5/06.pal"
	.incbin "data/tilesets/tileset11/5/07.pal"
	.incbin "data/tilesets/tileset11/5/08.pal"
gTileset11Graphics_6:
	.incbin "data/tilesets/tileset11/6/tiles.4bpp"
	gTileset11Graphics_6_Palettes:
	.incbin "data/tilesets/tileset11/6/02.pal"
	.incbin "data/tilesets/tileset11/6/03.pal"
	.incbin "data/tilesets/tileset11/6/04.pal"
	.incbin "data/tilesets/tileset11/6/05.pal"
	.incbin "data/tilesets/tileset11/6/06.pal"
	.incbin "data/tilesets/tileset11/6/07.pal"
gTileset11Graphics_7:
	.incbin "data/tilesets/tileset11/7/tiles.4bpp"
	gTileset11Graphics_7_Palettes:
	.incbin "data/tilesets/tileset11/7/09.pal"
	.incbin "data/tilesets/tileset11/7/10.pal"
gTileset11Graphics_8:
	.incbin "data/tilesets/tileset11/8/tiles.4bpp"
	gTileset11Graphics_8_Palettes:
	.incbin "data/tilesets/tileset11/8/02.pal"
	.incbin "data/tilesets/tileset11/8/03.pal"
	.incbin "data/tilesets/tileset11/8/04.pal"
	.incbin "data/tilesets/tileset11/8/05.pal"
	.incbin "data/tilesets/tileset11/8/06.pal"
	.incbin "data/tilesets/tileset11/8/07.pal"
	.incbin "data/tilesets/tileset11/8/08.pal"
gTileset11Graphics_9:
	.incbin "data/tilesets/tileset11/9/tiles.4bpp"
	gTileset11Graphics_9_Palettes:
	.incbin "data/tilesets/tileset11/9/09.pal"
	.incbin "data/tilesets/tileset11/9/10.pal"
	.incbin "data/tilesets/tileset11/9/11.pal"
	.incbin "data/tilesets/tileset11/9/12.pal"
	.incbin "data/tilesets/tileset11/9/13.pal"
	.incbin "data/tilesets/tileset11/9/14.pal"
	.incbin "data/tilesets/tileset11/9/15.pal"
gTileset11Graphics_10:
	.incbin "data/tilesets/tileset11/10/tiles.4bpp"
	gTileset11Graphics_10_Palettes:
	.incbin "data/tilesets/tileset11/10/02.pal"
	.incbin "data/tilesets/tileset11/10/03.pal"
	.incbin "data/tilesets/tileset11/10/04.pal"
	.incbin "data/tilesets/tileset11/10/05.pal"
	.incbin "data/tilesets/tileset11/10/06.pal"
	.incbin "data/tilesets/tileset11/10/07.pal"
	.incbin "data/tilesets/tileset11/10/08.pal"
gTileset11Graphics_11:
	.incbin "data/tilesets/tileset11/11/tiles.4bpp"
	gTileset11Graphics_11_Palettes:
	.incbin "data/tilesets/tileset11/11/09.pal"
	.incbin "data/tilesets/tileset11/11/10.pal"
	.incbin "data/tilesets/tileset11/11/11.pal"
	.incbin "data/tilesets/tileset11/11/12.pal"
	.incbin "data/tilesets/tileset11/11/13.pal"
gTileset11Graphics_12:
	.incbin "data/tilesets/tileset11/12/tiles.4bpp"
	gTileset11Graphics_12_Palettes:
	.incbin "data/tilesets/tileset11/12/02.pal"
	.incbin "data/tilesets/tileset11/12/03.pal"
	.incbin "data/tilesets/tileset11/12/04.pal"
	.incbin "data/tilesets/tileset11/12/05.pal"
	.incbin "data/tilesets/tileset11/12/06.pal"
	.incbin "data/tilesets/tileset11/12/07.pal"
	.incbin "data/tilesets/tileset11/12/08.pal"
gTileset11Graphics_13:
	.incbin "data/tilesets/tileset11/13/tiles.4bpp"
	gTileset11Graphics_13_Palettes:
	.incbin "data/tilesets/tileset11/13/02.pal"
	.incbin "data/tilesets/tileset11/13/03.pal"
	.incbin "data/tilesets/tileset11/13/04.pal"
	.incbin "data/tilesets/tileset11/13/05.pal"
	.incbin "data/tilesets/tileset11/13/06.pal"
	.incbin "data/tilesets/tileset11/13/07.pal"
	.incbin "data/tilesets/tileset11/13/08.pal"
