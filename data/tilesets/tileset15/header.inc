.section .rodata
.balign 4, 0

.global gTileset15Graphics
gTileset15Graphics:
	@ Graphic 0
	.4byte gTileset15Graphics_0-. @ src offset
	.4byte (0 << 22) | 12352 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset15Graphics_0_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset15Graphics_1-. @ src offset
	.4byte (512 << 22) | 12480 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset15Graphics_1_Palettes-. @ src offset
		.2byte 32 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset15Graphics_2-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset15Graphics_2_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset15Graphics_3-. @ src offset
	.4byte (512 << 22) | 15872 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset15Graphics_3_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset15Graphics_4-. @ src offset
	.4byte (0 << 22) | 15872 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset15Graphics_4_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset15Graphics_5-. @ src offset
	.4byte (0 << 22) | 12352 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset15Graphics_5_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 6
	.4byte gTileset15Graphics_6-. @ src offset
	.4byte (512 << 22) | 8208 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset15Graphics_6_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset15Graphics_0:
	.incbin "data/tilesets/tileset15/0/tiles.4bpp"
	gTileset15Graphics_0_Palettes:
	.incbin "data/tilesets/tileset15/0/02.pal"
	.incbin "data/tilesets/tileset15/0/03.pal"
	.incbin "data/tilesets/tileset15/0/04.pal"
	.incbin "data/tilesets/tileset15/0/05.pal"
gTileset15Graphics_1:
	.incbin "data/tilesets/tileset15/1/tiles.4bpp"
	gTileset15Graphics_1_Palettes:
	.incbin "data/tilesets/tileset15/1/09.pal"
gTileset15Graphics_2:
	.incbin "data/tilesets/tileset15/2/tiles.4bpp"
	gTileset15Graphics_2_Palettes:
	.incbin "data/tilesets/tileset15/2/09.pal"
	.incbin "data/tilesets/tileset15/2/10.pal"
	.incbin "data/tilesets/tileset15/2/11.pal"
	.incbin "data/tilesets/tileset15/2/12.pal"
gTileset15Graphics_3:
	.incbin "data/tilesets/tileset15/3/tiles.4bpp"
	gTileset15Graphics_3_Palettes:
	.incbin "data/tilesets/tileset15/3/09.pal"
	.incbin "data/tilesets/tileset15/3/10.pal"
	.incbin "data/tilesets/tileset15/3/11.pal"
	.incbin "data/tilesets/tileset15/3/12.pal"
	.incbin "data/tilesets/tileset15/3/13.pal"
	.incbin "data/tilesets/tileset15/3/14.pal"
	.incbin "data/tilesets/tileset15/3/15.pal"
gTileset15Graphics_4:
	.incbin "data/tilesets/tileset15/4/tiles.4bpp"
	gTileset15Graphics_4_Palettes:
	.incbin "data/tilesets/tileset15/4/02.pal"
	.incbin "data/tilesets/tileset15/4/03.pal"
	.incbin "data/tilesets/tileset15/4/04.pal"
	.incbin "data/tilesets/tileset15/4/05.pal"
gTileset15Graphics_5:
	.incbin "data/tilesets/tileset15/5/tiles.4bpp"
	gTileset15Graphics_5_Palettes:
	.incbin "data/tilesets/tileset15/5/02.pal"
	.incbin "data/tilesets/tileset15/5/03.pal"
	.incbin "data/tilesets/tileset15/5/04.pal"
	.incbin "data/tilesets/tileset15/5/05.pal"
gTileset15Graphics_6:
	.incbin "data/tilesets/tileset15/6/tiles.4bpp.lz"
	gTileset15Graphics_6_Palettes:
	.incbin "data/tilesets/tileset15/6/09.pal"
	.incbin "data/tilesets/tileset15/6/10.pal"
	.incbin "data/tilesets/tileset15/6/11.pal"
	.incbin "data/tilesets/tileset15/6/12.pal"
	.incbin "data/tilesets/tileset15/6/13.pal"
