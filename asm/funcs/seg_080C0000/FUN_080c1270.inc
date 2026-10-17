@ FUN_080c1270  entry 0x080c1270  size 20
.thumb
.org 0xc1270
FUN_080c1270:
	push {lr}	@ 000c1270 00b5
.org 0xc1272
	ldr r2, [pc, #16]	@ 000c1272 044a
.org 0xc1274
	ldrb r1, [r0, #13]	@ 000c1274 417b
.org 0xc1276
	lsls r1, r1, #2	@ 000c1276 8900
.org 0xc1278
	adds r1, r1, r2	@ 000c1278 8918
.org 0xc127a
	ldr r1, [r1, #0]	@ 000c127a 0968
.org 0xc127c
	bl 0x128f80	@ 000c127c 67f080fe
.org 0xc1280
	pop {r0}	@ 000c1280 01bc
.org 0xc1282
	bx r0	@ 000c1282 0047
