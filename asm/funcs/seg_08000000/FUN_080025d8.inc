@ FUN_080025d8  entry 0x080025d8  size 66
.thumb
.org 0x25d8
FUN_080025d8:
	push {r4, lr}	@ 000025d8 10b5
.org 0x25da
	lsls r0, r0, #16	@ 000025da 0004
.org 0x25dc
	movs r1, #128	@ 000025dc 8021
.org 0x25de
	lsls r1, r1, #9	@ 000025de 4902
.org 0x25e0
	adds r0, r0, r1	@ 000025e0 4018
.org 0x25e2
	lsrs r3, r0, #16	@ 000025e2 030c
.org 0x25e4
	movs r1, #0	@ 000025e4 0021
.org 0x25e6
	ldr r2, [pc, #4]	@ 000025e6 014a
.org 0x25e8
	b.n 0x25f8	@ 000025e8 06e0
.org 0x25ea
	.byte 0x00	@ 000025ea data
.org 0x25eb
	.byte 0x00	@ 000025eb data
.org 0x25ec
	.byte 0xa0,0x08,0x00,0x02	@ 000025ec data
.org 0x25f0
	adds r2, #2	@ 000025f0 0232
.org 0x25f2
	adds r1, #1	@ 000025f2 0131
.org 0x25f4
	cmp r1, #15	@ 000025f4 0f29
.org 0x25f6
	bgt.n 0x25fe	@ 000025f6 02dc
.org 0x25f8
	ldrh r0, [r2, #0]	@ 000025f8 1088
.org 0x25fa
	cmp r0, r3	@ 000025fa 9842
.org 0x25fc
	bne.n 0x25f0	@ 000025fc f8d1
.org 0x25fe
	cmp r1, #16	@ 000025fe 1029
.org 0x2600
	beq.n 0x261c	@ 00002600 0cd0
.org 0x2602
	lsls r4, r1, #2	@ 00002602 8c00
.org 0x2604
	adds r4, r4, r1	@ 00002604 6418
.org 0x2606
	lsls r4, r4, #2	@ 00002606 a400
.org 0x2608
	ldr r0, [pc, #12]	@ 00002608 0348
.org 0x260a
	adds r4, r4, r0	@ 0000260a 2418
.org 0x260c
	adds r0, r4, #0	@ 0000260c 201c
.org 0x260e
	adds r0, #8	@ 0000260e 0830
.org 0x2610
	bl 0x3518	@ 00002610 00f082ff
.org 0x2614
	ldrb r0, [r4, #15]	@ 00002614 e07b
.org 0x2616
	b.n 0x261e	@ 00002616 02e0
.org 0x2618
	.byte 0xc0,0x08,0x00,0x02	@ 00002618 data
