@ FUN_080ae244  entry 0x080ae244  size 20
.thumb
.org 0xae244
FUN_080ae244:
	push {lr}	@ 000ae244 00b5
.org 0xae246
	ldr r2, [pc, #16]	@ 000ae246 044a
.org 0xae248
	ldrb r1, [r0, #13]	@ 000ae248 417b
.org 0xae24a
	lsls r1, r1, #2	@ 000ae24a 8900
.org 0xae24c
	adds r1, r1, r2	@ 000ae24c 8918
.org 0xae24e
	ldr r1, [r1, #0]	@ 000ae24e 0968
.org 0xae250
	bl 0x128f80	@ 000ae250 7af096fe
.org 0xae254
	pop {r0}	@ 000ae254 01bc
.org 0xae256
	bx r0	@ 000ae256 0047
