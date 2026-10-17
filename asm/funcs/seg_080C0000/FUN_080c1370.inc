@ FUN_080c1370  entry 0x080c1370  size 20
.thumb
.org 0xc1370
FUN_080c1370:
	push {lr}	@ 000c1370 00b5
.org 0xc1372
	ldr r2, [pc, #16]	@ 000c1372 044a
.org 0xc1374
	ldrb r1, [r0, #16]	@ 000c1374 017c
.org 0xc1376
	lsls r1, r1, #2	@ 000c1376 8900
.org 0xc1378
	adds r1, r1, r2	@ 000c1378 8918
.org 0xc137a
	ldr r1, [r1, #0]	@ 000c137a 0968
.org 0xc137c
	bl 0x128f80	@ 000c137c 67f000fe
.org 0xc1380
	pop {r0}	@ 000c1380 01bc
.org 0xc1382
	bx r0	@ 000c1382 0047
