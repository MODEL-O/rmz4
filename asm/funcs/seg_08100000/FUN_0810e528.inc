@ FUN_0810e528  entry 0x0810e528  size 76
.thumb
.org 0x10e528
FUN_0810e528:
	push {r4, r5, lr}	@ 0010e528 30b5
.org 0x10e52a
	lsls r0, r0, #16	@ 0010e52a 0004
.org 0x10e52c
	lsls r1, r1, #16	@ 0010e52c 0904
.org 0x10e52e
	lsrs r1, r1, #16	@ 0010e52e 090c
.org 0x10e530
	ldr r5, [pc, #56]	@ 0010e530 0e4d
.org 0x10e532
	ldr r4, [pc, #60]	@ 0010e532 0f4c
.org 0x10e534
	lsrs r3, r0, #24	@ 0010e534 030e
.org 0x10e536
	lsls r3, r3, #2	@ 0010e536 9b00
.org 0x10e538
	adds r4, r3, r4	@ 0010e538 1c19
.org 0x10e53a
	ldr r2, [pc, #56]	@ 0010e53a 0e4a
.org 0x10e53c
	adds r3, r3, r2	@ 0010e53c 9b18
.org 0x10e53e
	movs r2, #255	@ 0010e53e ff22
.org 0x10e540
	lsls r2, r2, #16	@ 0010e540 1204
.org 0x10e542
	ands r2, r0	@ 0010e542 0240
.org 0x10e544
	ldr r0, [r3, #0]	@ 0010e544 1868
.org 0x10e546
	lsrs r2, r2, #15	@ 0010e546 d20b
.org 0x10e548
	adds r2, r2, r0	@ 0010e548 1218
.org 0x10e54a
	ldrh r2, [r2, #0]	@ 0010e54a 1288
.org 0x10e54c
	ldr r0, [r4, #0]	@ 0010e54c 2068
.org 0x10e54e
	adds r0, r0, r2	@ 0010e54e 8018
.org 0x10e550
	str r0, [r5, #24]	@ 0010e550 a861
.org 0x10e552
	str r1, [r5, #8]	@ 0010e552 a960
.org 0x10e554
	adds r0, r5, #0	@ 0010e554 281c
.org 0x10e556
	bl 0x10e66c	@ 0010e556 00f089f8
.org 0x10e55a
	adds r0, r5, #0	@ 0010e55a 281c
.org 0x10e55c
	bl 0x10e690	@ 0010e55c 00f098f8
.org 0x10e560
	ldrb r0, [r5, #4]	@ 0010e560 2879
.org 0x10e562
	cmp r0, #0	@ 0010e562 0028
.org 0x10e564
	beq.n 0x10e578	@ 0010e564 08d0
.org 0x10e566
	movs r0, #1	@ 0010e566 0120
.org 0x10e568
	b.n 0x10e57a	@ 0010e568 07e0
.org 0x10e56a
	.byte 0x00	@ 0010e56a data
.org 0x10e56b
	.byte 0x00	@ 0010e56b data
.org 0x10e56c
	.byte 0x88,0xf3,0x02,0x02	@ 0010e56c data
.org 0x10e570
	.byte 0xcc,0x0c,0x87,0x08	@ 0010e570 data
