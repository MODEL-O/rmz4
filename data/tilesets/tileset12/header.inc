.section .rodata
.balign 4, 0

.global gTileset12Graphics
gTileset12Graphics:
	@ Graphic 0
	.4byte gTileset12Graphics_0-. @ src offset
	.4byte (0 << 22) | 12928 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset12Graphics_0_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset12Graphics_1-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset12Graphics_1_Palettes-. @ src offset
		.2byte 64 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset12Graphics_2-. @ src offset
	.4byte (512 << 22) | 15936 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset12Graphics_2_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset12Graphics_3-. @ src offset
	.4byte (0 << 22) | 15168 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset12Graphics_3_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset12Graphics_4-. @ src offset
	.4byte (512 << 22) | 15936 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset12Graphics_4_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset12Graphics_5-. @ src offset
	.4byte (0 << 22) | 16256 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset12Graphics_5_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 6
	.4byte gTileset12Graphics_6-. @ src offset
	.4byte (512 << 22) | 12288 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset12Graphics_6_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset12Graphics_0:
	.incbin "data/tilesets/tileset12/0/tiles.4bpp"
	gTileset12Graphics_0_Palettes:
	.incbin "data/tilesets/tileset12/0/02.pal"
	.incbin "data/tilesets/tileset12/0/03.pal"
	.incbin "data/tilesets/tileset12/0/04.pal"
	.incbin "data/tilesets/tileset12/0/05.pal"
gTileset12Graphics_1:
	.incbin "data/tilesets/tileset12/1/tiles.4bpp"
	gTileset12Graphics_1_Palettes:
	.incbin "data/tilesets/tileset12/1/09.pal"
	.incbin "data/tilesets/tileset12/1/10.pal"
gTileset12Graphics_2:
	.incbin "data/tilesets/tileset12/2/tiles.4bpp"
	gTileset12Graphics_2_Palettes:
	.incbin "data/tilesets/tileset12/2/09.pal"
	.incbin "data/tilesets/tileset12/2/10.pal"
	.incbin "data/tilesets/tileset12/2/11.pal"
gTileset12Graphics_3:
	.incbin "data/tilesets/tileset12/3/tiles.4bpp"
	gTileset12Graphics_3_Palettes:
	.incbin "data/tilesets/tileset12/3/02.pal"
	.incbin "data/tilesets/tileset12/3/03.pal"
	.incbin "data/tilesets/tileset12/3/04.pal"
	.incbin "data/tilesets/tileset12/3/05.pal"
gTileset12Graphics_4:
	.incbin "data/tilesets/tileset12/4/tiles.4bpp"
	gTileset12Graphics_4_Palettes:
	.incbin "data/tilesets/tileset12/4/09.pal"
	.incbin "data/tilesets/tileset12/4/10.pal"
	.incbin "data/tilesets/tileset12/4/11.pal"
	.incbin "data/tilesets/tileset12/4/12.pal"
	.incbin "data/tilesets/tileset12/4/13.pal"
	.incbin "data/tilesets/tileset12/4/14.pal"
gTileset12Graphics_5:
	.incbin "data/tilesets/tileset12/5/tiles.4bpp"
	gTileset12Graphics_5_Palettes:
	.incbin "data/tilesets/tileset12/5/02.pal"
	.incbin "data/tilesets/tileset12/5/03.pal"
	.incbin "data/tilesets/tileset12/5/04.pal"
	.incbin "data/tilesets/tileset12/5/05.pal"
gTileset12Graphics_6:
	.incbin "data/tilesets/tileset12/6/tiles.4bpp"
	gTileset12Graphics_6_Palettes:
	.incbin "data/tilesets/tileset12/6/09.pal"
	.incbin "data/tilesets/tileset12/6/10.pal"
	.incbin "data/tilesets/tileset12/6/11.pal"
