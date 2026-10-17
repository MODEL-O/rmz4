@ FUN_080146bc  entry 0x080146bc  size 74
.thumb
.org 0x146bc
FUN_080146bc:
	push {r4, r5, lr}	@ 000146bc 30b5
.org 0x146be
	adds r4, r0, #0	@ 000146be 041c
.org 0x146c0
	adds r3, r1, #0	@ 000146c0 0b1c
.org 0x146c2
	ldr r0, [pc, #60]	@ 000146c2 0f48
.org 0x146c4
	cmp r4, r0	@ 000146c4 8442
.org 0x146c6
	bgt.n 0x14718	@ 000146c6 27dc
.org 0x146c8
	ldr r0, [pc, #56]	@ 000146c8 0e48
.org 0x146ca
	adds r1, r3, r0	@ 000146ca 1918
.org 0x146cc
	ldr r0, [pc, #56]	@ 000146cc 0e48
.org 0x146ce
	cmp r1, r0	@ 000146ce 8142
.org 0x146d0
	bls.n 0x146dc	@ 000146d0 04d9
.org 0x146d2
	ldr r5, [pc, #56]	@ 000146d2 0e4d
.org 0x146d4
	adds r1, r3, r5	@ 000146d4 5919
.org 0x146d6
	ldr r0, [pc, #56]	@ 000146d6 0e48
.org 0x146d8
	cmp r1, r0	@ 000146d8 8142
.org 0x146da
	bhi.n 0x14718	@ 000146da 1dd8
.org 0x146dc
	ldr r2, [pc, #52]	@ 000146dc 0d4a
.org 0x146de
	movs r0, #252	@ 000146de fc20
.org 0x146e0
	lsls r0, r0, #3	@ 000146e0 c000
.org 0x146e2
	adds r2, r2, r0	@ 000146e2 1218
.org 0x146e4
	ldrh r1, [r2, #0]	@ 000146e4 1188
.org 0x146e6
	movs r5, #200	@ 000146e6 c825
.org 0x146e8
	lsls r5, r5, #11	@ 000146e8 ed02
.org 0x146ea
	adds r0, r3, r5	@ 000146ea 5819
.org 0x146ec
	asrs r0, r0, #12	@ 000146ec 0013
.org 0x146ee
	muls r0, r1	@ 000146ee 4843
.org 0x146f0
	asrs r1, r4, #12	@ 000146f0 2113
.org 0x146f2
	adds r0, r0, r1	@ 000146f2 4018
.org 0x146f4
	adds r0, #2	@ 000146f4 0230
.org 0x146f6
	lsls r0, r0, #1	@ 000146f6 4000
.org 0x146f8
	adds r0, r0, r2	@ 000146f8 8018
.org 0x146fa
	ldrh r0, [r0, #0]	@ 000146fa 0088
.org 0x146fc
	b.n 0x1471a	@ 000146fc 0de0
.org 0x146fe
	.byte 0x00	@ 000146fe data
.org 0x146ff
	.byte 0x00	@ 000146ff data
.org 0x14700
	.byte 0xff,0x8f,0x06,0x00	@ 00014700 data
.org 0x14704
	.byte 0xff,0x1f,0xfe,0xff	@ 00014704 data
