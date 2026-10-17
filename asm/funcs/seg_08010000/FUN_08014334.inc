@ FUN_08014334  entry 0x08014334  size 34
.thumb
.org 0x14334
FUN_08014334:
	push {r4, lr}	@ 00014334 10b5
.org 0x14336
	ldr r1, [r0, #92]	@ 00014336 c16d
.org 0x14338
	lsls r1, r1, #16	@ 00014338 0904
.org 0x1433a
	lsrs r1, r1, #20	@ 0001433a 090d
.org 0x1433c
	lsls r1, r1, #2	@ 0001433c 8900
.org 0x1433e
	ldr r2, [pc, #24]	@ 0001433e 064a
.org 0x14340
	adds r4, r1, r2	@ 00014340 8c18
.org 0x14342
	ldr r3, [r0, #52]	@ 00014342 436b
.org 0x14344
	strh r3, [r4, #0]	@ 00014344 2380
.org 0x14346
	adds r2, #2	@ 00014346 0232
.org 0x14348
	adds r1, r1, r2	@ 00014348 8918
.org 0x1434a
	ldr r0, [r0, #56]	@ 0001434a 806b
.org 0x1434c
	adds r0, #16	@ 0001434c 1030
.org 0x1434e
	strh r0, [r1, #0]	@ 0001434e 0880
.org 0x14350
	pop {r4}	@ 00014350 10bc
.org 0x14352
	pop {r0}	@ 00014352 01bc
.org 0x14354
	bx r0	@ 00014354 0047
