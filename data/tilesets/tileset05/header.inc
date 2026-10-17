.section .rodata
.balign 4, 0

.global gTileset05Graphics
gTileset05Graphics:
	@ Graphic 0
	.4byte gTileset05Graphics_0-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset05Graphics_0_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset05Graphics_1-. @ src offset
	.4byte (512 << 22) | 14336 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset05Graphics_1_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset05Graphics_2-. @ src offset
	.4byte (512 << 22) | 12032 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset05Graphics_2_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset05Graphics_3-. @ src offset
	.4byte (512 << 22) | 15744 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset05Graphics_3_Palettes-. @ src offset
		.2byte 160 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset05Graphics_4-. @ src offset
	.4byte (512 << 22) | 7088 	@ size, dst=VRAM+512
	.2byte 256, (BPP4 | LZ77) 	@ rowsize, props
		@ Palette
		.4byte gTileset05Graphics_4_Palettes-. @ src offset
		.2byte 224 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 5
	.4byte gTileset05Graphics_5-. @ src offset
	.4byte (512 << 22) | 14144 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset05Graphics_5_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset05Graphics_0:
	.incbin "data/tilesets/tileset05/0/tiles.4bpp"
	gTileset05Graphics_0_Palettes:
	.incbin "data/tilesets/tileset05/0/02.pal"
	.incbin "data/tilesets/tileset05/0/03.pal"
	.incbin "data/tilesets/tileset05/0/04.pal"
	.incbin "data/tilesets/tileset05/0/05.pal"
	.incbin "data/tilesets/tileset05/0/06.pal"
	.incbin "data/tilesets/tileset05/0/07.pal"
	.incbin "data/tilesets/tileset05/0/08.pal"
gTileset05Graphics_1:
	.incbin "data/tilesets/tileset05/1/tiles.4bpp"
	gTileset05Graphics_1_Palettes:
	.incbin "data/tilesets/tileset05/1/09.pal"
	.incbin "data/tilesets/tileset05/1/10.pal"
	.incbin "data/tilesets/tileset05/1/11.pal"
	.incbin "data/tilesets/tileset05/1/12.pal"
	.incbin "data/tilesets/tileset05/1/13.pal"
	.incbin "data/tilesets/tileset05/1/14.pal"
	.incbin "data/tilesets/tileset05/1/15.pal"
gTileset05Graphics_2:
	.incbin "data/tilesets/tileset05/2/tiles.4bpp"
	gTileset05Graphics_2_Palettes:
	.incbin "data/tilesets/tileset05/2/09.pal"
	.incbin "data/tilesets/tileset05/2/10.pal"
	.incbin "data/tilesets/tileset05/2/11.pal"
	.incbin "data/tilesets/tileset05/2/12.pal"
	.incbin "data/tilesets/tileset05/2/13.pal"
	.incbin "data/tilesets/tileset05/2/14.pal"
	.incbin "data/tilesets/tileset05/2/15.pal"
gTileset05Graphics_3:
	.incbin "data/tilesets/tileset05/3/tiles.4bpp"
	gTileset05Graphics_3_Palettes:
	.incbin "data/tilesets/tileset05/3/09.pal"
	.incbin "data/tilesets/tileset05/3/10.pal"
	.incbin "data/tilesets/tileset05/3/11.pal"
	.incbin "data/tilesets/tileset05/3/12.pal"
	.incbin "data/tilesets/tileset05/3/13.pal"
gTileset05Graphics_4:
	.incbin "data/tilesets/tileset05/4/tiles.4bpp.lz"
	gTileset05Graphics_4_Palettes:
	.incbin "data/tilesets/tileset05/4/09.pal"
	.incbin "data/tilesets/tileset05/4/10.pal"
	.incbin "data/tilesets/tileset05/4/11.pal"
	.incbin "data/tilesets/tileset05/4/12.pal"
	.incbin "data/tilesets/tileset05/4/13.pal"
	.incbin "data/tilesets/tileset05/4/14.pal"
	.incbin "data/tilesets/tileset05/4/15.pal"
gTileset05Graphics_5:
	.incbin "data/tilesets/tileset05/5/tiles.4bpp"
	gTileset05Graphics_5_Palettes:
	.incbin "data/tilesets/tileset05/5/09.pal"
	.incbin "data/tilesets/tileset05/5/10.pal"
	.incbin "data/tilesets/tileset05/5/11.pal"
	.incbin "data/tilesets/tileset05/5/12.pal"
	.incbin "data/tilesets/tileset05/5/13.pal"
	.incbin "data/tilesets/tileset05/5/14.pal"
