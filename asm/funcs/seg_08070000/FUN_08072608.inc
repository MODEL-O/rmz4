@ FUN_08072608  entry 0x08072608  size 90
.thumb
.org 0x72608
FUN_08072608:
	push {r4, r5, lr}	@ 00072608 30b5
.org 0x7260a
	adds r4, r0, #0	@ 0007260a 041c
.org 0x7260c
	ldrb r0, [r4, #10]	@ 0007260c a07a
.org 0x7260e
	lsrs r5, r0, #4	@ 0007260e 0509
.org 0x72610
	movs r1, #1	@ 00072610 0121
.org 0x72612
	ands r5, r1	@ 00072612 0d40
.org 0x72614
	adds r0, r4, #0	@ 00072614 201c
.org 0x72616
	adds r0, #180	@ 00072616 b430
.org 0x72618
	ldr r0, [r0, #0]	@ 00072618 0068
.org 0x7261a
	adds r0, #180	@ 0007261a b430
.org 0x7261c
	strb r1, [r0, #0]	@ 0007261c 0170
.org 0x7261e
	adds r0, r4, #0	@ 0007261e 201c
.org 0x72620
	bl 0x73e00	@ 00072620 01f0eefb
.org 0x72624
	adds r1, r4, #0	@ 00072624 211c
.org 0x72626
	adds r1, #195	@ 00072626 c331
.org 0x72628
	strb r0, [r1, #0]	@ 00072628 0870
.org 0x7262a
	movs r2, #0	@ 0007262a 0022
.org 0x7262c
	ldr r0, [pc, #20]	@ 0007262c 0548
.org 0x7262e
	ldr r0, [r0, #0]	@ 0007262e 0068
.org 0x72630
	ldr r1, [r4, #84]	@ 00072630 616d
.org 0x72632
	ldr r0, [r0, #84]	@ 00072632 406d
.org 0x72634
	cmp r1, r0	@ 00072634 8142
.org 0x72636
	bge.n 0x7263a	@ 00072636 00da
.org 0x72638
	movs r2, #1	@ 00072638 0122
.org 0x7263a
	cmp r2, r5	@ 0007263a aa42
.org 0x7263c
	beq.n 0x72648	@ 0007263c 04d0
.org 0x7263e
	ldrb r0, [r4, #14]	@ 0007263e a07b
.org 0x72640
	adds r0, #1	@ 00072640 0130
.org 0x72642
	b.n 0x7264a	@ 00072642 02e0
.org 0x72644
	.byte 0xf0,0xdb,0x02,0x02	@ 00072644 data
.org 0x72648
	movs r0, #3	@ 00072648 0320
.org 0x7264a
	strb r0, [r4, #14]	@ 0007264a a073
.org 0x7264c
	movs r0, #0	@ 0007264c 0020
.org 0x7264e
	strb r0, [r4, #15]	@ 0007264e e073
.org 0x72650
	ldr r1, [pc, #20]	@ 00072650 0549
.org 0x72652
	ldrb r0, [r4, #13]	@ 00072652 607b
.org 0x72654
	lsls r0, r0, #2	@ 00072654 8000
.org 0x72656
	adds r0, r0, r1	@ 00072656 4018
.org 0x72658
	ldr r1, [r0, #0]	@ 00072658 0168
.org 0x7265a
	adds r0, r4, #0	@ 0007265a 201c
.org 0x7265c
	bl 0x128f80	@ 0007265c b6f090fc
.org 0x72660
	pop {r4, r5}	@ 00072660 30bc
