.section .rodata
.balign 4, 0

.global gTileset04Graphics
gTileset04Graphics:
	@ Graphic 0
	.4byte gTileset04Graphics_0-. @ src offset
	.4byte (0 << 22) | 15104 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset04Graphics_0_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset04Graphics_1-. @ src offset
	.4byte (512 << 22) | 16320 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset04Graphics_1_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset04Graphics_2-. @ src offset
	.4byte (0 << 22) | 6976 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset04Graphics_2_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset04Graphics_3-. @ src offset
	.4byte (0 << 22) | 13824 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset04Graphics_3_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset04Graphics_4-. @ src offset
	.4byte (0 << 22) | 16256 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset04Graphics_4_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset04Graphics_5-. @ src offset
	.4byte (512 << 22) | 15808 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset04Graphics_5_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 6
	.4byte gTileset04Graphics_6-. @ src offset
	.4byte (0 << 22) | 12992 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset04Graphics_6_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 7
	.4byte gTileset04Graphics_7-. @ src offset
	.4byte (512 << 22) | 16256 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset04Graphics_7_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset04Graphics_0:
	.incbin "data/tilesets/tileset04/0/tiles.4bpp"
	gTileset04Graphics_0_Palettes:
	.incbin "data/tilesets/tileset04/0/02.pal"
	.incbin "data/tilesets/tileset04/0/03.pal"
	.incbin "data/tilesets/tileset04/0/04.pal"
	.incbin "data/tilesets/tileset04/0/05.pal"
	.incbin "data/tilesets/tileset04/0/06.pal"
	.incbin "data/tilesets/tileset04/0/07.pal"
gTileset04Graphics_1:
	.incbin "data/tilesets/tileset04/1/tiles.4bpp"
	gTileset04Graphics_1_Palettes:
	.incbin "data/tilesets/tileset04/1/09.pal"
	.incbin "data/tilesets/tileset04/1/10.pal"
	.incbin "data/tilesets/tileset04/1/11.pal"
	.incbin "data/tilesets/tileset04/1/12.pal"
	.incbin "data/tilesets/tileset04/1/13.pal"
gTileset04Graphics_2:
	.incbin "data/tilesets/tileset04/2/tiles.4bpp"
	gTileset04Graphics_2_Palettes:
	.incbin "data/tilesets/tileset04/2/02.pal"
	.incbin "data/tilesets/tileset04/2/03.pal"
	.incbin "data/tilesets/tileset04/2/04.pal"
gTileset04Graphics_3:
	.incbin "data/tilesets/tileset04/3/tiles.4bpp"
	gTileset04Graphics_3_Palettes:
	.incbin "data/tilesets/tileset04/3/02.pal"
	.incbin "data/tilesets/tileset04/3/03.pal"
	.incbin "data/tilesets/tileset04/3/04.pal"
gTileset04Graphics_4:
	.incbin "data/tilesets/tileset04/4/tiles.4bpp"
	gTileset04Graphics_4_Palettes:
	.incbin "data/tilesets/tileset04/4/02.pal"
	.incbin "data/tilesets/tileset04/4/03.pal"
	.incbin "data/tilesets/tileset04/4/04.pal"
	.incbin "data/tilesets/tileset04/4/05.pal"
	.incbin "data/tilesets/tileset04/4/06.pal"
	.incbin "data/tilesets/tileset04/4/07.pal"
	.incbin "data/tilesets/tileset04/4/08.pal"
gTileset04Graphics_5:
	.incbin "data/tilesets/tileset04/5/tiles.4bpp"
	gTileset04Graphics_5_Palettes:
	.incbin "data/tilesets/tileset04/5/09.pal"
	.incbin "data/tilesets/tileset04/5/10.pal"
	.incbin "data/tilesets/tileset04/5/11.pal"
	.incbin "data/tilesets/tileset04/5/12.pal"
gTileset04Graphics_6:
	.incbin "data/tilesets/tileset04/6/tiles.4bpp"
	gTileset04Graphics_6_Palettes:
	.incbin "data/tilesets/tileset04/6/02.pal"
	.incbin "data/tilesets/tileset04/6/03.pal"
	.incbin "data/tilesets/tileset04/6/04.pal"
	.incbin "data/tilesets/tileset04/6/05.pal"
	.incbin "data/tilesets/tileset04/6/06.pal"
	.incbin "data/tilesets/tileset04/6/07.pal"
gTileset04Graphics_7:
	.incbin "data/tilesets/tileset04/7/tiles.4bpp"
	gTileset04Graphics_7_Palettes:
	.incbin "data/tilesets/tileset04/7/09.pal"
	.incbin "data/tilesets/tileset04/7/10.pal"
	.incbin "data/tilesets/tileset04/7/11.pal"
	.incbin "data/tilesets/tileset04/7/12.pal"
	.incbin "data/tilesets/tileset04/7/13.pal"
	.incbin "data/tilesets/tileset04/7/14.pal"
	.incbin "data/tilesets/tileset04/7/15.pal"
