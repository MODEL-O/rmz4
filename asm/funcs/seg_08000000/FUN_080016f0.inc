@ FUN_080016f0  entry 0x080016f0  size 82
.thumb
.org 0x16f0
FUN_080016f0:
	push {r4, r5, r6, r7, lr}	@ 000016f0 f0b5
.org 0x16f2
	mov r7, r8	@ 000016f2 4746
.org 0x16f4
	push {r7}	@ 000016f4 80b4
.org 0x16f6
	mov r8, r1	@ 000016f6 8846
.org 0x16f8
	adds r5, r2, #0	@ 000016f8 151c
.org 0x16fa
	lsls r0, r0, #24	@ 000016fa 0006
.org 0x16fc
	lsrs r0, r0, #24	@ 000016fc 000e
.org 0x16fe
	adds r7, r0, #0	@ 000016fe 071c
.org 0x1700
	cmp r0, #5	@ 00001700 0528
.org 0x1702
	bhi.n 0x1738	@ 00001702 19d8
.org 0x1704
	ldr r4, [pc, #44]	@ 00001704 0b4c
.org 0x1706
	ldrb r6, [r4, #0]	@ 00001706 2678
.org 0x1708
	cmp r6, #0	@ 00001708 002e
.org 0x170a
	bne.n 0x1738	@ 0000170a 15d1
.org 0x170c
	adds r1, r5, #0	@ 0000170c 291c
.org 0x170e
	bl 0x1594	@ 0000170e fff741ff
.org 0x1712
	cmp r0, #0	@ 00001712 0028
.org 0x1714
	beq.n 0x1738	@ 00001714 10d0
.org 0x1716
	movs r0, #166	@ 00001716 a620
.org 0x1718
	lsls r0, r0, #2	@ 00001718 8000
.org 0x171a
	cmp r5, r0	@ 0000171a 8542
.org 0x171c
	bhi.n 0x1738	@ 0000171c 0cd8
.org 0x171e
	strb r7, [r4, #1]	@ 0000171e 6770
.org 0x1720
	mov r0, r8	@ 00001720 4046
.org 0x1722
	str r0, [r4, #8]	@ 00001722 a060
.org 0x1724
	str r5, [r4, #20]	@ 00001724 6561
.org 0x1726
	strh r6, [r4, #30]	@ 00001726 e683
.org 0x1728
	movs r0, #1	@ 00001728 0120
.org 0x172a
	strb r0, [r4, #0]	@ 0000172a 2070
.org 0x172c
	movs r0, #2	@ 0000172c 0220
.org 0x172e
	strh r0, [r4, #2]	@ 0000172e 6080
.org 0x1730
	movs r0, #0	@ 00001730 0020
.org 0x1732
	b.n 0x173c	@ 00001732 03e0
.org 0x1734
	.byte 0x90,0x07,0x00,0x02	@ 00001734 data
.org 0x1738
	movs r0, #1	@ 00001738 0120
.org 0x173a
	negs r0, r0	@ 0000173a 4042
.org 0x173c
	pop {r3}	@ 0000173c 08bc
.org 0x173e
	mov r8, r3	@ 0000173e 9846
.org 0x1740
	pop {r4, r5, r6, r7}	@ 00001740 f0bc
