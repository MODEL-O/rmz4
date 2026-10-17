.section .rodata
.balign 4, 0

.global gTileset09Graphics
gTileset09Graphics:
	@ Graphic 0
	.4byte gTileset09Graphics_0-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset09Graphics_0_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset09Graphics_1-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset09Graphics_1_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset09Graphics_2-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset09Graphics_2_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset09Graphics_3-. @ src offset
	.4byte (512 << 22) | 16192 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset09Graphics_3_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset09Graphics_4-. @ src offset
	.4byte (512 << 22) | 15488 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset09Graphics_4_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset09Graphics_5-. @ src offset
	.4byte (512 << 22) | 16320 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset09Graphics_5_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset09Graphics_0:
	.incbin "data/tilesets/tileset09/0/tiles.4bpp"
	gTileset09Graphics_0_Palettes:
	.incbin "data/tilesets/tileset09/0/02.pal"
	.incbin "data/tilesets/tileset09/0/03.pal"
	.incbin "data/tilesets/tileset09/0/04.pal"
	.incbin "data/tilesets/tileset09/0/05.pal"
	.incbin "data/tilesets/tileset09/0/06.pal"
	.incbin "data/tilesets/tileset09/0/07.pal"
	.incbin "data/tilesets/tileset09/0/08.pal"
gTileset09Graphics_1:
	.incbin "data/tilesets/tileset09/1/tiles.4bpp"
	gTileset09Graphics_1_Palettes:
	.incbin "data/tilesets/tileset09/1/09.pal"
	.incbin "data/tilesets/tileset09/1/10.pal"
	.incbin "data/tilesets/tileset09/1/11.pal"
	.incbin "data/tilesets/tileset09/1/12.pal"
	.incbin "data/tilesets/tileset09/1/13.pal"
	.incbin "data/tilesets/tileset09/1/14.pal"
	.incbin "data/tilesets/tileset09/1/15.pal"
gTileset09Graphics_2:
	.incbin "data/tilesets/tileset09/2/tiles.4bpp"
	gTileset09Graphics_2_Palettes:
	.incbin "data/tilesets/tileset09/2/09.pal"
	.incbin "data/tilesets/tileset09/2/10.pal"
	.incbin "data/tilesets/tileset09/2/11.pal"
	.incbin "data/tilesets/tileset09/2/12.pal"
	.incbin "data/tilesets/tileset09/2/13.pal"
	.incbin "data/tilesets/tileset09/2/14.pal"
	.incbin "data/tilesets/tileset09/2/15.pal"
gTileset09Graphics_3:
	.incbin "data/tilesets/tileset09/3/tiles.4bpp"
	gTileset09Graphics_3_Palettes:
	.incbin "data/tilesets/tileset09/3/09.pal"
	.incbin "data/tilesets/tileset09/3/10.pal"
	.incbin "data/tilesets/tileset09/3/11.pal"
	.incbin "data/tilesets/tileset09/3/12.pal"
	.incbin "data/tilesets/tileset09/3/13.pal"
	.incbin "data/tilesets/tileset09/3/14.pal"
	.incbin "data/tilesets/tileset09/3/15.pal"
gTileset09Graphics_4:
	.incbin "data/tilesets/tileset09/4/tiles.4bpp"
	gTileset09Graphics_4_Palettes:
	.incbin "data/tilesets/tileset09/4/09.pal"
	.incbin "data/tilesets/tileset09/4/10.pal"
	.incbin "data/tilesets/tileset09/4/11.pal"
	.incbin "data/tilesets/tileset09/4/12.pal"
	.incbin "data/tilesets/tileset09/4/13.pal"
	.incbin "data/tilesets/tileset09/4/14.pal"
	.incbin "data/tilesets/tileset09/4/15.pal"
gTileset09Graphics_5:
	.incbin "data/tilesets/tileset09/5/tiles.4bpp"
	gTileset09Graphics_5_Palettes:
	.incbin "data/tilesets/tileset09/5/09.pal"
	.incbin "data/tilesets/tileset09/5/10.pal"
	.incbin "data/tilesets/tileset09/5/11.pal"
	.incbin "data/tilesets/tileset09/5/12.pal"
	.incbin "data/tilesets/tileset09/5/13.pal"
	.incbin "data/tilesets/tileset09/5/14.pal"
	.incbin "data/tilesets/tileset09/5/15.pal"
