@ FUN_080467a8  entry 0x080467a8  size 134
.thumb
.org 0x467a8
FUN_080467a8:
	push {r4, r5, lr}	@ 000467a8 30b5
.org 0x467aa
	adds r4, r0, #0	@ 000467aa 041c
.org 0x467ac
	ldr r5, [r4, #40]	@ 000467ac a56a
.org 0x467ae
	bl 0x1d134	@ 000467ae d6f7c1fc
.org 0x467b2
	ldrb r0, [r4, #14]	@ 000467b2 a07b
.org 0x467b4
	cmp r0, #1	@ 000467b4 0128
.org 0x467b6
	bhi.n 0x467d6	@ 000467b6 0ed8
.org 0x467b8
	cmp r0, #1	@ 000467b8 0128
.org 0x467ba
	bne.n 0x467d0	@ 000467ba 09d1
.org 0x467bc
	ldrb r2, [r4, #17]	@ 000467bc 627c
.org 0x467be
	cmp r2, #3	@ 000467be 032a
.org 0x467c0
	bhi.n 0x467d0	@ 000467c0 06d8
.org 0x467c2
	ldr r0, [r4, #44]	@ 000467c2 e06a
.org 0x467c4
	adds r2, #1	@ 000467c4 0132
.org 0x467c6
	lsls r2, r2, #24	@ 000467c6 1206
.org 0x467c8
	lsrs r2, r2, #24	@ 000467c8 120e
.org 0x467ca
	adds r1, r4, #0	@ 000467ca 211c
.org 0x467cc
	bl 0x46274	@ 000467cc fff752fd
.org 0x467d0
	ldrb r0, [r4, #14]	@ 000467d0 a07b
.org 0x467d2
	adds r0, #1	@ 000467d2 0130
.org 0x467d4
	strb r0, [r4, #14]	@ 000467d4 a073
.org 0x467d6
	ldrb r1, [r4, #13]	@ 000467d6 617b
.org 0x467d8
	cmp r1, #0	@ 000467d8 0029
.org 0x467da
	beq.n 0x467f4	@ 000467da 0bd0
.org 0x467dc
	ldr r1, [pc, #16]	@ 000467dc 0449
.org 0x467de
	ldrb r0, [r4, #9]	@ 000467de 607a
.org 0x467e0
	lsls r0, r0, #2	@ 000467e0 8000
.org 0x467e2
	adds r0, r0, r1	@ 000467e2 4018
.org 0x467e4
	movs r1, #2	@ 000467e4 0221
.org 0x467e6
	str r1, [r4, #12]	@ 000467e6 e160
.org 0x467e8
	ldr r0, [r0, #0]	@ 000467e8 0068
.org 0x467ea
	ldr r0, [r0, #8]	@ 000467ea 8068
.org 0x467ec
	str r0, [r4, #20]	@ 000467ec 6061
.org 0x467ee
	b.n 0x4682c	@ 000467ee 1de0
.org 0x467f0
	.byte 0xf8,0x39,0x85,0x08	@ 000467f0 data
.org 0x467f4
	ldrb r0, [r5, #12]	@ 000467f4 287b
.org 0x467f6
	cmp r0, #1	@ 000467f6 0128
.org 0x467f8
	bls.n 0x467fe	@ 000467f8 01d9
.org 0x467fa
	adds r0, r1, #1	@ 000467fa 481c
.org 0x467fc
	strb r0, [r4, #13]	@ 000467fc 6073
.org 0x467fe
	adds r1, r4, #0	@ 000467fe 211c
.org 0x46800
	adds r1, #188	@ 00046800 bc31
.org 0x46802
	adds r3, r4, #0	@ 00046802 231c
.org 0x46804
	adds r3, #180	@ 00046804 b433
.org 0x46806
	ldr r0, [r3, #0]	@ 00046806 1868
.org 0x46808
	str r0, [r1, #0]	@ 00046808 0860
.org 0x4680a
	adds r1, #4	@ 0004680a 0431
.org 0x4680c
	adds r2, r4, #0	@ 0004680c 221c
.org 0x4680e
	adds r2, #184	@ 0004680e b832
.org 0x46810
	ldr r0, [r2, #0]	@ 00046810 1068
.org 0x46812
	str r0, [r1, #0]	@ 00046812 0860
.org 0x46814
	ldr r0, [r4, #84]	@ 00046814 606d
.org 0x46816
	str r0, [r3, #0]	@ 00046816 1860
.org 0x46818
	ldr r0, [r4, #88]	@ 00046818 a06d
.org 0x4681a
	str r0, [r2, #0]	@ 0004681a 1060
.org 0x4681c
	adds r0, r5, #0	@ 0004681c 281c
.org 0x4681e
	adds r0, #180	@ 0004681e b430
.org 0x46820
	ldr r0, [r0, #0]	@ 00046820 0068
.org 0x46822
	str r0, [r4, #84]	@ 00046822 6065
.org 0x46824
	adds r0, r5, #0	@ 00046824 281c
.org 0x46826
	adds r0, #184	@ 00046826 b830
.org 0x46828
	ldr r0, [r0, #0]	@ 00046828 0068
.org 0x4682a
	str r0, [r4, #88]	@ 0004682a a065
.org 0x4682c
	pop {r4, r5}	@ 0004682c 30bc
