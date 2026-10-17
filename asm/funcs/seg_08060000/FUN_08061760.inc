@ FUN_08061760  entry 0x08061760  size 206
.thumb
.org 0x61760
FUN_08061760:
	push {r4, r5, r6, lr}	@ 00061760 70b5
.org 0x61762
	adds r5, r0, #0	@ 00061762 051c
.org 0x61764
	ldrb r6, [r5, #14]	@ 00061764 ae7b
.org 0x61766
	cmp r6, #0	@ 00061766 002e
.org 0x61768
	bne.n 0x6179c	@ 00061768 18d1
.org 0x6176a
	adds r4, r5, #0	@ 0006176a 2c1c
.org 0x6176c
	adds r4, #180	@ 0006176c b434
.org 0x6176e
	movs r0, #31	@ 0006176e 1f20
.org 0x61770
	strb r0, [r4, #28]	@ 00061770 2077
.org 0x61772
	ldr r1, [pc, #72]	@ 00061772 1249
.org 0x61774
	adds r0, r5, #0	@ 00061774 281c
.org 0x61776
	bl 0x1cf00	@ 00061776 bbf7c3fb
.org 0x6177a
	ldr r0, [pc, #68]	@ 0006177a 1148
.org 0x6177c
	str r0, [r5, #96]	@ 0006177c 2866
.org 0x6177e
	ldr r0, [pc, #68]	@ 0006177e 1148
.org 0x61780
	ldr r0, [r0, #56]	@ 00061780 806b
.org 0x61782
	ldr r1, [r5, #84]	@ 00061782 696d
.org 0x61784
	subs r0, r0, r1	@ 00061784 401a
.org 0x61786
	movs r1, #43	@ 00061786 2b21
.org 0x61788
	bl 0x128fb8	@ 00061788 c7f016fc
.org 0x6178c
	str r0, [r5, #92]	@ 0006178c e865
.org 0x6178e
	ldrb r0, [r4, #27]	@ 0006178e e07e
.org 0x61790
	adds r0, #1	@ 00061790 0130
.org 0x61792
	strb r0, [r4, #27]	@ 00061792 e076
.org 0x61794
	strb r6, [r5, #15]	@ 00061794 ee73
.org 0x61796
	ldrb r0, [r5, #14]	@ 00061796 a87b
.org 0x61798
	adds r0, #1	@ 00061798 0130
.org 0x6179a
	strb r0, [r5, #14]	@ 0006179a a873
.org 0x6179c
	adds r0, r5, #0	@ 0006179c 281c
.org 0x6179e
	bl 0x1cff0	@ 0006179e bbf727fc
.org 0x617a2
	ldrb r1, [r5, #15]	@ 000617a2 e97b
.org 0x617a4
	cmp r1, #0	@ 000617a4 0029
.org 0x617a6
	bne.n 0x617c8	@ 000617a6 0fd1
.org 0x617a8
	adds r0, r5, #0	@ 000617a8 281c
.org 0x617aa
	adds r0, #113	@ 000617aa 7130
.org 0x617ac
	ldrb r0, [r0, #0]	@ 000617ac 0078
.org 0x617ae
	lsls r0, r0, #24	@ 000617ae 0006
.org 0x617b0
	asrs r0, r0, #24	@ 000617b0 0016
.org 0x617b2
	cmp r0, #0	@ 000617b2 0028
.org 0x617b4
	beq.n 0x61838	@ 000617b4 40d0
.org 0x617b6
	adds r0, r1, #1	@ 000617b6 481c
.org 0x617b8
	strb r0, [r5, #15]	@ 000617b8 e873
.org 0x617ba
	b.n 0x61838	@ 000617ba 3de0
.org 0x617bc
	.byte 0x02,0xa5,0x00,0x00	@ 000617bc data
.org 0x617c0
	.byte 0xc0,0xf8,0xff,0xff	@ 000617c0 data
.org 0x617c4
	.byte 0xf8,0xe9,0x02,0x02	@ 000617c4 data
.org 0x617c8
	movs r3, #0	@ 000617c8 0023
.org 0x617ca
	ldr r0, [pc, #60]	@ 000617ca 0f48
.org 0x617cc
	ldr r2, [r0, #0]	@ 000617cc 0268
.org 0x617ce
	ldr r1, [r5, #84]	@ 000617ce 696d
.org 0x617d0
	ldr r0, [r2, #84]	@ 000617d0 506d
.org 0x617d2
	cmp r1, r0	@ 000617d2 8142
.org 0x617d4
	bge.n 0x617d8	@ 000617d4 00da
.org 0x617d6
	movs r3, #1	@ 000617d6 0123
.org 0x617d8
	adds r0, r5, #0	@ 000617d8 281c
.org 0x617da
	adds r0, #76	@ 000617da 4c30
.org 0x617dc
	strb r3, [r0, #0]	@ 000617dc 0370
.org 0x617de
	movs r3, #0	@ 000617de 0023
.org 0x617e0
	ldr r1, [r5, #84]	@ 000617e0 696d
.org 0x617e2
	ldr r0, [r2, #84]	@ 000617e2 506d
.org 0x617e4
	cmp r1, r0	@ 000617e4 8142
.org 0x617e6
	bge.n 0x617ea	@ 000617e6 00da
.org 0x617e8
	movs r3, #1	@ 000617e8 0123
.org 0x617ea
	adds r4, r5, #0	@ 000617ea 2c1c
.org 0x617ec
	adds r4, #74	@ 000617ec 4a34
.org 0x617ee
	lsls r2, r3, #4	@ 000617ee 1a01
.org 0x617f0
	ldrb r1, [r4, #0]	@ 000617f0 2178
.org 0x617f2
	movs r0, #17	@ 000617f2 1120
.org 0x617f4
	negs r0, r0	@ 000617f4 4042
.org 0x617f6
	ands r0, r1	@ 000617f6 0840
.org 0x617f8
	orrs r0, r2	@ 000617f8 1043
.org 0x617fa
	strb r0, [r4, #0]	@ 000617fa 2070
.org 0x617fc
	cmp r3, #0	@ 000617fc 002b
.org 0x617fe
	beq.n 0x6180c	@ 000617fe 05d0
.org 0x61800
	ldrb r0, [r5, #10]	@ 00061800 a87a
.org 0x61802
	movs r1, #16	@ 00061802 1021
.org 0x61804
	orrs r0, r1	@ 00061804 0843
.org 0x61806
	b.n 0x61812	@ 00061806 04e0
.org 0x61808
	.byte 0xf0,0xdb,0x02,0x02	@ 00061808 data
.org 0x6180c
	ldrb r1, [r5, #10]	@ 0006180c a97a
.org 0x6180e
	movs r0, #239	@ 0006180e ef20
.org 0x61810
	ands r0, r1	@ 00061810 0840
.org 0x61812
	strb r0, [r5, #10]	@ 00061812 a872
.org 0x61814
	ldr r0, [r5, #84]	@ 00061814 686d
.org 0x61816
	ldr r1, [r5, #92]	@ 00061816 e96d
.org 0x61818
	adds r0, r0, r1	@ 00061818 4018
.org 0x6181a
	str r0, [r5, #84]	@ 0006181a 6865
.org 0x6181c
	ldr r0, [r5, #88]	@ 0006181c a86d
.org 0x6181e
	ldr r1, [r5, #96]	@ 0006181e 296e
.org 0x61820
	adds r0, r0, r1	@ 00061820 4018
.org 0x61822
	str r0, [r5, #88]	@ 00061822 a865
.org 0x61824
	adds r1, #64	@ 00061824 4031
.org 0x61826
	str r1, [r5, #96]	@ 00061826 2966
.org 0x61828
	movs r0, #192	@ 00061828 c020
.org 0x6182a
	negs r0, r0	@ 0006182a 4042
.org 0x6182c
	cmp r1, r0	@ 0006182c 8142
