.section .rodata
.balign 4, 0

.global gTileset01Graphics
gTileset01Graphics:
	@ Graphic 0
	.4byte gTileset01Graphics_0-. @ src offset
	.4byte (0 << 22) | 13632 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset01Graphics_0_Palettes-. @ src offset
		.2byte 192 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 1
	.4byte gTileset01Graphics_1-. @ src offset
	.4byte (512 << 22) | 14720 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset01Graphics_1_Palettes-. @ src offset
		.2byte 96 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 2
	.4byte gTileset01Graphics_2-. @ src offset
	.4byte (512 << 22) | 16384 	@ size, dst=VRAM+512
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset01Graphics_2_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 9 @ lz77, dst=PaletteID
	@ Graphic 3
	.4byte gTileset01Graphics_3-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (BPP4) 	@ rowsize, props
		@ Palette
		.4byte gTileset01Graphics_3_Palettes-. @ src offset
		.2byte 128 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID
	@ Graphic 4
	.4byte gTileset01Graphics_4-. @ src offset
	.4byte (0 << 22) | 16384 	@ size, dst=VRAM+0
	.2byte 256, (0x40) 	@ rowsize, props
		@ Palette
		.4byte gTileset01Graphics_4_Palettes-. @ src offset
		.2byte 32 @ bytesize
		.byte 0, 2 @ lz77, dst=PaletteID

@;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTileset01Graphics_0:
	.incbin "data/tilesets/tileset01/0/tiles.4bpp"
	gTileset01Graphics_0_Palettes:
	.incbin "data/tilesets/tileset01/0/02.pal"
	.incbin "data/tilesets/tileset01/0/03.pal"
	.incbin "data/tilesets/tileset01/0/04.pal"
	.incbin "data/tilesets/tileset01/0/05.pal"
	.incbin "data/tilesets/tileset01/0/06.pal"
	.incbin "data/tilesets/tileset01/0/07.pal"
gTileset01Graphics_1:
	.incbin "data/tilesets/tileset01/1/tiles.4bpp"
	gTileset01Graphics_1_Palettes:
	.incbin "data/tilesets/tileset01/1/09.pal"
	.incbin "data/tilesets/tileset01/1/10.pal"
	.incbin "data/tilesets/tileset01/1/11.pal"
gTileset01Graphics_2:
	.incbin "data/tilesets/tileset01/2/tiles.4bpp"
	gTileset01Graphics_2_Palettes:
	.incbin "data/tilesets/tileset01/2/09.pal"
	.incbin "data/tilesets/tileset01/2/10.pal"
	.incbin "data/tilesets/tileset01/2/11.pal"
	.incbin "data/tilesets/tileset01/2/12.pal"
gTileset01Graphics_3:
	.incbin "data/tilesets/tileset01/3/tiles.4bpp"
	gTileset01Graphics_3_Palettes:
	.incbin "data/tilesets/tileset01/3/02.pal"
	.incbin "data/tilesets/tileset01/3/03.pal"
	.incbin "data/tilesets/tileset01/3/04.pal"
	.incbin "data/tilesets/tileset01/3/05.pal"
gTileset01Graphics_4:
	.incbin "data/tilesets/tileset01/4/tiles.4bpp"
	gTileset01Graphics_4_Palettes:
	.incbin "data/tilesets/tileset01/4/02.pal"
