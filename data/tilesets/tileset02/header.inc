.section .rodata
.balign 4, 0

.global gTileset02Graphics
gTileset02Graphics:
	@ Graphic 0
	.4byte gTileset02Graphics_0-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_0_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset02Graphics_1-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_1_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset02Graphics_2-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_2_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset02Graphics_3-. @ src offset
	.4byte (0 << 22) | 16192 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_3_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset02Graphics_4-. @ src offset
	.4byte (512 << 22) | 15552 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_4_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset02Graphics_5-. @ src offset
	.4byte (0 << 22) | 16000 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_5_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 6
	.4byte gTileset02Graphics_6-. @ src offset
	.4byte (512 << 22) | 14720 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_6_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 7
	.4byte gTileset02Graphics_7-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_7_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 8
	.4byte gTileset02Graphics_8-. @ src offset
	.4byte (0 << 22) | 16128 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_8_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 9
	.4byte gTileset02Graphics_9-. @ src offset
	.4byte (512 << 22) | 14656 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset02Graphics_9_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset02Graphics_0:
	.incbin "data/tilesets/tileset02/0/tiles.4bpp"
	gTileset02Graphics_0_Palettes:
	.incbin "data/tilesets/tileset02/0/02.pal"
	.incbin "data/tilesets/tileset02/0/03.pal"
	.incbin "data/tilesets/tileset02/0/04.pal"
	.incbin "data/tilesets/tileset02/0/05.pal"
gTileset02Graphics_1:
	.incbin "data/tilesets/tileset02/1/tiles.4bpp"
	gTileset02Graphics_1_Palettes:
	.incbin "data/tilesets/tileset02/1/09.pal"
	.incbin "data/tilesets/tileset02/1/10.pal"
	.incbin "data/tilesets/tileset02/1/11.pal"
	.incbin "data/tilesets/tileset02/1/12.pal"
	.incbin "data/tilesets/tileset02/1/13.pal"
	.incbin "data/tilesets/tileset02/1/14.pal"
gTileset02Graphics_2:
	.incbin "data/tilesets/tileset02/2/tiles.4bpp"
	gTileset02Graphics_2_Palettes:
	.incbin "data/tilesets/tileset02/2/02.pal"
	.incbin "data/tilesets/tileset02/2/03.pal"
	.incbin "data/tilesets/tileset02/2/04.pal"
	.incbin "data/tilesets/tileset02/2/05.pal"
gTileset02Graphics_3:
	.incbin "data/tilesets/tileset02/3/tiles.4bpp"
	gTileset02Graphics_3_Palettes:
	.incbin "data/tilesets/tileset02/3/02.pal"
	.incbin "data/tilesets/tileset02/3/03.pal"
	.incbin "data/tilesets/tileset02/3/04.pal"
	.incbin "data/tilesets/tileset02/3/05.pal"
	.incbin "data/tilesets/tileset02/3/06.pal"
gTileset02Graphics_4:
	.incbin "data/tilesets/tileset02/4/tiles.4bpp"
	gTileset02Graphics_4_Palettes:
	.incbin "data/tilesets/tileset02/4/09.pal"
	.incbin "data/tilesets/tileset02/4/10.pal"
	.incbin "data/tilesets/tileset02/4/11.pal"
	.incbin "data/tilesets/tileset02/4/12.pal"
gTileset02Graphics_5:
	.incbin "data/tilesets/tileset02/5/tiles.4bpp"
	gTileset02Graphics_5_Palettes:
	.incbin "data/tilesets/tileset02/5/02.pal"
	.incbin "data/tilesets/tileset02/5/03.pal"
	.incbin "data/tilesets/tileset02/5/04.pal"
	.incbin "data/tilesets/tileset02/5/05.pal"
gTileset02Graphics_6:
	.incbin "data/tilesets/tileset02/6/tiles.4bpp"
	gTileset02Graphics_6_Palettes:
	.incbin "data/tilesets/tileset02/6/09.pal"
	.incbin "data/tilesets/tileset02/6/10.pal"
	.incbin "data/tilesets/tileset02/6/11.pal"
	.incbin "data/tilesets/tileset02/6/12.pal"
	.incbin "data/tilesets/tileset02/6/13.pal"
gTileset02Graphics_7:
	.incbin "data/tilesets/tileset02/7/tiles.4bpp"
	gTileset02Graphics_7_Palettes:
	.incbin "data/tilesets/tileset02/7/09.pal"
	.incbin "data/tilesets/tileset02/7/10.pal"
	.incbin "data/tilesets/tileset02/7/11.pal"
	.incbin "data/tilesets/tileset02/7/12.pal"
gTileset02Graphics_8:
	.incbin "data/tilesets/tileset02/8/tiles.4bpp"
	gTileset02Graphics_8_Palettes:
	.incbin "data/tilesets/tileset02/8/02.pal"
	.incbin "data/tilesets/tileset02/8/03.pal"
	.incbin "data/tilesets/tileset02/8/04.pal"
	.incbin "data/tilesets/tileset02/8/05.pal"
gTileset02Graphics_9:
	.incbin "data/tilesets/tileset02/9/tiles.4bpp"
	gTileset02Graphics_9_Palettes:
	.incbin "data/tilesets/tileset02/9/09.pal"
	.incbin "data/tilesets/tileset02/9/10.pal"
	.incbin "data/tilesets/tileset02/9/11.pal"
	.incbin "data/tilesets/tileset02/9/12.pal"
	.incbin "data/tilesets/tileset02/9/13.pal"
