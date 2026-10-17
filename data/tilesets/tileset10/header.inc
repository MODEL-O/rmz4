.section .rodata
.balign 4, 0

.global gTileset10Graphics
gTileset10Graphics:
	@ Graphic 0
	.4byte gTileset10Graphics_0-. @ src offset
	.4byte (0 << 22) | 14208 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset10Graphics_0_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset10Graphics_1-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset10Graphics_1_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset10Graphics_2-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset10Graphics_2_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset10Graphics_3-. @ src offset
	.4byte (512 << 22) | 16320 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset10Graphics_3_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset10Graphics_4-. @ src offset
	.4byte (0 << 22) | 13504 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset10Graphics_4_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset10Graphics_0:
	.incbin "data/tilesets/tileset10/0/tiles.4bpp"
	gTileset10Graphics_0_Palettes:
	.incbin "data/tilesets/tileset10/0/02.pal"
	.incbin "data/tilesets/tileset10/0/03.pal"
	.incbin "data/tilesets/tileset10/0/04.pal"
	.incbin "data/tilesets/tileset10/0/05.pal"
	.incbin "data/tilesets/tileset10/0/06.pal"
	.incbin "data/tilesets/tileset10/0/07.pal"
	.incbin "data/tilesets/tileset10/0/08.pal"
gTileset10Graphics_1:
	.incbin "data/tilesets/tileset10/1/tiles.4bpp"
	gTileset10Graphics_1_Palettes:
	.incbin "data/tilesets/tileset10/1/09.pal"
	.incbin "data/tilesets/tileset10/1/10.pal"
	.incbin "data/tilesets/tileset10/1/11.pal"
	.incbin "data/tilesets/tileset10/1/12.pal"
	.incbin "data/tilesets/tileset10/1/13.pal"
gTileset10Graphics_2:
	.incbin "data/tilesets/tileset10/2/tiles.4bpp"
	gTileset10Graphics_2_Palettes:
	.incbin "data/tilesets/tileset10/2/02.pal"
	.incbin "data/tilesets/tileset10/2/03.pal"
	.incbin "data/tilesets/tileset10/2/04.pal"
	.incbin "data/tilesets/tileset10/2/05.pal"
	.incbin "data/tilesets/tileset10/2/06.pal"
	.incbin "data/tilesets/tileset10/2/07.pal"
gTileset10Graphics_3:
	.incbin "data/tilesets/tileset10/3/tiles.4bpp"
	gTileset10Graphics_3_Palettes:
	.incbin "data/tilesets/tileset10/3/09.pal"
	.incbin "data/tilesets/tileset10/3/10.pal"
	.incbin "data/tilesets/tileset10/3/11.pal"
	.incbin "data/tilesets/tileset10/3/12.pal"
	.incbin "data/tilesets/tileset10/3/13.pal"
	.incbin "data/tilesets/tileset10/3/14.pal"
	.incbin "data/tilesets/tileset10/3/15.pal"
gTileset10Graphics_4:
	.incbin "data/tilesets/tileset10/4/tiles.4bpp"
	gTileset10Graphics_4_Palettes:
	.incbin "data/tilesets/tileset10/4/02.pal"
	.incbin "data/tilesets/tileset10/4/03.pal"
	.incbin "data/tilesets/tileset10/4/04.pal"
	.incbin "data/tilesets/tileset10/4/05.pal"
	.incbin "data/tilesets/tileset10/4/06.pal"
	.incbin "data/tilesets/tileset10/4/07.pal"
	.incbin "data/tilesets/tileset10/4/08.pal"
