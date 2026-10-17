@ FUN_08001408  entry 0x08001408  size 36
.thumb
.org 0x1408
FUN_08001408:
	push {lr}	@ 00001408 00b5
.org 0x140a
	lsls r1, r0, #1	@ 0000140a 4100
.org 0x140c
	adds r1, r1, r0	@ 0000140c 0918
.org 0x140e
	lsls r1, r1, #3	@ 0000140e c900
.org 0x1410
	ldr r0, [pc, #24]	@ 00001410 0648
.org 0x1412
	adds r1, r1, r0	@ 00001412 0918
.org 0x1414
	ldrb r2, [r1, #0]	@ 00001414 0a78
.org 0x1416
	cmp r2, #1	@ 00001416 012a
.org 0x1418
	beq.n 0x1428	@ 00001418 06d0
.org 0x141a
	movs r0, #8	@ 0000141a 0820
.org 0x141c
	ands r0, r2	@ 0000141c 1040
.org 0x141e
	cmp r0, #0	@ 0000141e 0028
.org 0x1420
	beq.n 0x1428	@ 00001420 02d0
.org 0x1422
	movs r0, #247	@ 00001422 f720
.org 0x1424
	ands r0, r2	@ 00001424 1040
.org 0x1426
	strb r0, [r1, #0]	@ 00001426 0870
.org 0x1428
	pop {r0}	@ 00001428 01bc
.org 0x142a
	bx r0	@ 0000142a 0047
