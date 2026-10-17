.section .rodata
.balign 4, 0

.global gTileset07Graphics
gTileset07Graphics:
	@ Graphic 0
	.4byte gTileset07Graphics_0-. @ src offset
	.4byte (0 << 22) | 10376 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset07Graphics_0_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset07Graphics_1-. @ src offset
	.4byte (512 << 22) | 10688 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset07Graphics_1_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset07Graphics_2-. @ src offset
	.4byte (0 << 22) | 11004 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset07Graphics_2_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset07Graphics_3-. @ src offset
	.4byte (512 << 22) | 7740 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset07Graphics_3_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset07Graphics_4-. @ src offset
	.4byte (0 << 22) | 9612 	@ size, dst=VRAM+0
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset07Graphics_4_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset07Graphics_5-. @ src offset
	.4byte (512 << 22) | 10996 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset07Graphics_5_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset07Graphics_0:
	.incbin "data/tilesets/tileset07/0/tiles.4bpp.lz"
	gTileset07Graphics_0_Palettes:
	.incbin "data/tilesets/tileset07/0/02.pal"
	.incbin "data/tilesets/tileset07/0/03.pal"
	.incbin "data/tilesets/tileset07/0/04.pal"
	.incbin "data/tilesets/tileset07/0/05.pal"
	.incbin "data/tilesets/tileset07/0/06.pal"
	.incbin "data/tilesets/tileset07/0/07.pal"
gTileset07Graphics_1:
	.incbin "data/tilesets/tileset07/1/tiles.4bpp.lz"
	gTileset07Graphics_1_Palettes:
	.incbin "data/tilesets/tileset07/1/09.pal"
	.incbin "data/tilesets/tileset07/1/10.pal"
	.incbin "data/tilesets/tileset07/1/11.pal"
	.incbin "data/tilesets/tileset07/1/12.pal"
	.incbin "data/tilesets/tileset07/1/13.pal"
gTileset07Graphics_2:
	.incbin "data/tilesets/tileset07/2/tiles.4bpp.lz"
	gTileset07Graphics_2_Palettes:
	.incbin "data/tilesets/tileset07/2/02.pal"
	.incbin "data/tilesets/tileset07/2/03.pal"
	.incbin "data/tilesets/tileset07/2/04.pal"
	.incbin "data/tilesets/tileset07/2/05.pal"
	.incbin "data/tilesets/tileset07/2/06.pal"
	.incbin "data/tilesets/tileset07/2/07.pal"
	.incbin "data/tilesets/tileset07/2/08.pal"
gTileset07Graphics_3:
	.incbin "data/tilesets/tileset07/3/tiles.4bpp.lz"
	gTileset07Graphics_3_Palettes:
	.incbin "data/tilesets/tileset07/3/09.pal"
	.incbin "data/tilesets/tileset07/3/10.pal"
	.incbin "data/tilesets/tileset07/3/11.pal"
	.incbin "data/tilesets/tileset07/3/12.pal"
	.incbin "data/tilesets/tileset07/3/13.pal"
	.incbin "data/tilesets/tileset07/3/14.pal"
	.incbin "data/tilesets/tileset07/3/15.pal"
gTileset07Graphics_4:
	.incbin "data/tilesets/tileset07/4/tiles.4bpp.lz"
	gTileset07Graphics_4_Palettes:
	.incbin "data/tilesets/tileset07/4/02.pal"
	.incbin "data/tilesets/tileset07/4/03.pal"
	.incbin "data/tilesets/tileset07/4/04.pal"
	.incbin "data/tilesets/tileset07/4/05.pal"
	.incbin "data/tilesets/tileset07/4/06.pal"
	.incbin "data/tilesets/tileset07/4/07.pal"
	.incbin "data/tilesets/tileset07/4/08.pal"
gTileset07Graphics_5:
	.incbin "data/tilesets/tileset07/5/tiles.4bpp.lz"
	gTileset07Graphics_5_Palettes:
	.incbin "data/tilesets/tileset07/5/09.pal"
	.incbin "data/tilesets/tileset07/5/10.pal"
	.incbin "data/tilesets/tileset07/5/11.pal"
	.incbin "data/tilesets/tileset07/5/12.pal"
	.incbin "data/tilesets/tileset07/5/13.pal"
	.incbin "data/tilesets/tileset07/5/14.pal"
	.incbin "data/tilesets/tileset07/5/15.pal"
