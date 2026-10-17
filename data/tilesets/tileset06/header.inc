.section .rodata
.balign 4, 0

.global gTileset06Graphics
gTileset06Graphics:
	@ Graphic 0
	.4byte gTileset06Graphics_0-. @ src offset
	.4byte (0 << 22) | 14272 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset06Graphics_0_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset06Graphics_1-. @ src offset
	.4byte (512 << 22) | 14528 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset06Graphics_1_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset06Graphics_2-. @ src offset
	.4byte (0 << 22) | 15872 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset06Graphics_2_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset06Graphics_3-. @ src offset
	.4byte (512 << 22) | 14592 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset06Graphics_3_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset06Graphics_4-. @ src offset
	.4byte (512 << 22) | 9404 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset06Graphics_4_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset06Graphics_5-. @ src offset
	.4byte (0 << 22) | 6144 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset06Graphics_5_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 6
	.4byte gTileset06Graphics_6-. @ src offset
	.4byte (512 << 22) | 14912 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset06Graphics_6_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 7
	.4byte gTileset06Graphics_7-. @ src offset
	.4byte (512 << 22) | 16128 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset06Graphics_7_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset06Graphics_0:
	.incbin "data/tilesets/tileset06/0/tiles.4bpp"
	gTileset06Graphics_0_Palettes:
	.incbin "data/tilesets/tileset06/0/02.pal"
	.incbin "data/tilesets/tileset06/0/03.pal"
	.incbin "data/tilesets/tileset06/0/04.pal"
	.incbin "data/tilesets/tileset06/0/05.pal"
	.incbin "data/tilesets/tileset06/0/06.pal"
	.incbin "data/tilesets/tileset06/0/07.pal"
gTileset06Graphics_1:
	.incbin "data/tilesets/tileset06/1/tiles.4bpp"
	gTileset06Graphics_1_Palettes:
	.incbin "data/tilesets/tileset06/1/09.pal"
	.incbin "data/tilesets/tileset06/1/10.pal"
	.incbin "data/tilesets/tileset06/1/11.pal"
	.incbin "data/tilesets/tileset06/1/12.pal"
gTileset06Graphics_2:
	.incbin "data/tilesets/tileset06/2/tiles.4bpp"
	gTileset06Graphics_2_Palettes:
	.incbin "data/tilesets/tileset06/2/02.pal"
	.incbin "data/tilesets/tileset06/2/03.pal"
	.incbin "data/tilesets/tileset06/2/04.pal"
	.incbin "data/tilesets/tileset06/2/05.pal"
	.incbin "data/tilesets/tileset06/2/06.pal"
	.incbin "data/tilesets/tileset06/2/07.pal"
gTileset06Graphics_3:
	.incbin "data/tilesets/tileset06/3/tiles.4bpp"
	gTileset06Graphics_3_Palettes:
	.incbin "data/tilesets/tileset06/3/09.pal"
	.incbin "data/tilesets/tileset06/3/10.pal"
	.incbin "data/tilesets/tileset06/3/11.pal"
	.incbin "data/tilesets/tileset06/3/12.pal"
	.incbin "data/tilesets/tileset06/3/13.pal"
	.incbin "data/tilesets/tileset06/3/14.pal"
gTileset06Graphics_4:
	.incbin "data/tilesets/tileset06/4/tiles.4bpp.lz"
	gTileset06Graphics_4_Palettes:
	.incbin "data/tilesets/tileset06/4/09.pal"
	.incbin "data/tilesets/tileset06/4/10.pal"
	.incbin "data/tilesets/tileset06/4/11.pal"
	.incbin "data/tilesets/tileset06/4/12.pal"
	.incbin "data/tilesets/tileset06/4/13.pal"
	.incbin "data/tilesets/tileset06/4/14.pal"
gTileset06Graphics_5:
	.incbin "data/tilesets/tileset06/5/tiles.4bpp"
	gTileset06Graphics_5_Palettes:
	.incbin "data/tilesets/tileset06/5/02.pal"
	.incbin "data/tilesets/tileset06/5/03.pal"
	.incbin "data/tilesets/tileset06/5/04.pal"
gTileset06Graphics_6:
	.incbin "data/tilesets/tileset06/6/tiles.4bpp"
	gTileset06Graphics_6_Palettes:
	.incbin "data/tilesets/tileset06/6/09.pal"
	.incbin "data/tilesets/tileset06/6/10.pal"
	.incbin "data/tilesets/tileset06/6/11.pal"
gTileset06Graphics_7:
	.incbin "data/tilesets/tileset06/7/tiles.4bpp"
	gTileset06Graphics_7_Palettes:
	.incbin "data/tilesets/tileset06/7/09.pal"
	.incbin "data/tilesets/tileset06/7/10.pal"
	.incbin "data/tilesets/tileset06/7/11.pal"
	.incbin "data/tilesets/tileset06/7/12.pal"
