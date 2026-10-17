.section .rodata
.balign 4, 0

.global gTileset03Graphics
gTileset03Graphics:
	@ Graphic 0
	.4byte gTileset03Graphics_0-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset03Graphics_0_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset03Graphics_1-. @ src offset
	.4byte (512 << 22) | 15680 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset03Graphics_1_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset03Graphics_2-. @ src offset
	.4byte (512 << 22) | 10304 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset03Graphics_2_Palettes-. @ src offset
		.2byte 64 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset03Graphics_3-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset03Graphics_3_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset03Graphics_4-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset03Graphics_4_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset03Graphics_5-. @ src offset
	.4byte (0 << 22) | 14720 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset03Graphics_5_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset03Graphics_0:
	.incbin "data/tilesets/tileset03/0/tiles.4bpp"
	gTileset03Graphics_0_Palettes:
	.incbin "data/tilesets/tileset03/0/02.pal"
	.incbin "data/tilesets/tileset03/0/03.pal"
	.incbin "data/tilesets/tileset03/0/04.pal"
	.incbin "data/tilesets/tileset03/0/05.pal"
	.incbin "data/tilesets/tileset03/0/06.pal"
	.incbin "data/tilesets/tileset03/0/07.pal"
	.incbin "data/tilesets/tileset03/0/08.pal"
gTileset03Graphics_1:
	.incbin "data/tilesets/tileset03/1/tiles.4bpp"
	gTileset03Graphics_1_Palettes:
	.incbin "data/tilesets/tileset03/1/09.pal"
	.incbin "data/tilesets/tileset03/1/10.pal"
	.incbin "data/tilesets/tileset03/1/11.pal"
	.incbin "data/tilesets/tileset03/1/12.pal"
	.incbin "data/tilesets/tileset03/1/13.pal"
	.incbin "data/tilesets/tileset03/1/14.pal"
	.incbin "data/tilesets/tileset03/1/15.pal"
gTileset03Graphics_2:
	.incbin "data/tilesets/tileset03/2/tiles.4bpp"
	gTileset03Graphics_2_Palettes:
	.incbin "data/tilesets/tileset03/2/09.pal"
	.incbin "data/tilesets/tileset03/2/10.pal"
gTileset03Graphics_3:
	.incbin "data/tilesets/tileset03/3/tiles.4bpp"
	gTileset03Graphics_3_Palettes:
	.incbin "data/tilesets/tileset03/3/09.pal"
	.incbin "data/tilesets/tileset03/3/10.pal"
	.incbin "data/tilesets/tileset03/3/11.pal"
	.incbin "data/tilesets/tileset03/3/12.pal"
gTileset03Graphics_4:
	.incbin "data/tilesets/tileset03/4/tiles.4bpp"
	gTileset03Graphics_4_Palettes:
	.incbin "data/tilesets/tileset03/4/09.pal"
	.incbin "data/tilesets/tileset03/4/10.pal"
	.incbin "data/tilesets/tileset03/4/11.pal"
	.incbin "data/tilesets/tileset03/4/12.pal"
	.incbin "data/tilesets/tileset03/4/13.pal"
	.incbin "data/tilesets/tileset03/4/14.pal"
	.incbin "data/tilesets/tileset03/4/15.pal"
gTileset03Graphics_5:
	.incbin "data/tilesets/tileset03/5/tiles.4bpp"
	gTileset03Graphics_5_Palettes:
	.incbin "data/tilesets/tileset03/5/02.pal"
	.incbin "data/tilesets/tileset03/5/03.pal"
	.incbin "data/tilesets/tileset03/5/04.pal"
	.incbin "data/tilesets/tileset03/5/05.pal"
	.incbin "data/tilesets/tileset03/5/06.pal"
	.incbin "data/tilesets/tileset03/5/07.pal"
	.incbin "data/tilesets/tileset03/5/08.pal"
