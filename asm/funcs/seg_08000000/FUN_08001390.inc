@ FUN_08001390  entry 0x08001390  size 26
.thumb
.org 0x1390
FUN_08001390:
	push {lr}	@ 00001390 00b5
.org 0x1392
	lsls r1, r0, #1	@ 00001392 4100
.org 0x1394
	adds r1, r1, r0	@ 00001394 0918
.org 0x1396
	lsls r1, r1, #3	@ 00001396 c900
.org 0x1398
	ldr r0, [pc, #16]	@ 00001398 0448
.org 0x139a
	adds r1, r1, r0	@ 0000139a 0918
.org 0x139c
	ldrb r0, [r1, #0]	@ 0000139c 0878
.org 0x139e
	cmp r0, #1	@ 0000139e 0128
.org 0x13a0
	beq.n 0x13a6	@ 000013a0 01d0
.org 0x13a2
	movs r0, #1	@ 000013a2 0120
.org 0x13a4
	strb r0, [r1, #0]	@ 000013a4 0870
.org 0x13a6
	pop {r0}	@ 000013a6 01bc
.org 0x13a8
	bx r0	@ 000013a8 0047
