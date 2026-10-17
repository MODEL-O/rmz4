@ FUN_0802b53c  entry 0x0802b53c  size 80
.thumb
.org 0x2b53c
FUN_0802b53c:
	push {r4, r5, lr}	@ 0002b53c 30b5
.org 0x2b53e
	cmp r1, #14	@ 0002b53e 0e29
.org 0x2b540
	bne.n 0x2b570	@ 0002b540 16d1
.org 0x2b542
	lsls r5, r1, #5	@ 0002b542 4d01
.org 0x2b544
	ldr r0, [pc, #28]	@ 0002b544 0748
.org 0x2b546
	adds r0, r0, r5	@ 0002b546 4019
.org 0x2b548
	ldr r4, [pc, #28]	@ 0002b548 074c
.org 0x2b54a
	adds r1, r4, #0	@ 0002b54a 211c
.org 0x2b54c
	movs r2, #8	@ 0002b54c 0822
.org 0x2b54e
	bl 0x128be0	@ 0002b54e fdf047fb
.org 0x2b552
	ldr r0, [pc, #24]	@ 0002b552 0648
.org 0x2b554
	adds r0, r0, r5	@ 0002b554 4019
.org 0x2b556
	adds r4, #128	@ 0002b556 8034
.org 0x2b558
	adds r1, r4, #0	@ 0002b558 211c
.org 0x2b55a
	movs r2, #8	@ 0002b55a 0822
.org 0x2b55c
	bl 0x128be0	@ 0002b55c fdf040fb
.org 0x2b560
	b.n 0x2b594	@ 0002b560 18e0
.org 0x2b562
	.byte 0x00	@ 0002b562 data
.org 0x2b563
	.byte 0x00	@ 0002b563 data
.org 0x2b564
	.byte 0x60,0x29,0x85,0x08	@ 0002b564 data
.org 0x2b568
	.byte 0x40,0x2d,0x00,0x03	@ 0002b568 data
.org 0x2b56c
	.byte 0x40,0x2b,0x85,0x08	@ 0002b56c data
.org 0x2b570
	lsls r5, r1, #5	@ 0002b570 4d01
.org 0x2b572
	ldr r0, [pc, #40]	@ 0002b572 0a48
.org 0x2b574
	adds r0, r5, r0	@ 0002b574 2818
.org 0x2b576
	ldr r4, [pc, #40]	@ 0002b576 0a4c
.org 0x2b578
	adds r1, r4, #0	@ 0002b578 211c
.org 0x2b57a
	movs r2, #8	@ 0002b57a 0822
.org 0x2b57c
	bl 0x128be0	@ 0002b57c fdf030fb
.org 0x2b580
	ldr r0, [pc, #32]	@ 0002b580 0848
.org 0x2b582
	adds r5, r5, r0	@ 0002b582 2d18
.org 0x2b584
	movs r0, #192	@ 0002b584 c020
.org 0x2b586
	lsls r0, r0, #1	@ 0002b586 4000
.org 0x2b588
	adds r4, r4, r0	@ 0002b588 2418
.org 0x2b58a
	adds r0, r5, #0	@ 0002b58a 281c
