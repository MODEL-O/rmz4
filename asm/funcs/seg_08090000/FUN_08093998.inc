@ FUN_08093998  entry 0x08093998  size 96
.thumb
.org 0x93998
FUN_08093998:
	push {r4, lr}	@ 00093998 10b5
.org 0x9399a
	adds r4, r0, #0	@ 0009399a 041c
.org 0x9399c
	ldrb r0, [r4, #15]	@ 0009399c e07b
.org 0x9399e
	cmp r0, #0	@ 0009399e 0028
.org 0x939a0
	bne.n 0x939c0	@ 000939a0 0ed1
.org 0x939a2
	adds r0, r4, #0	@ 000939a2 201c
.org 0x939a4
	adds r0, #116	@ 000939a4 7430
.org 0x939a6
	ldr r1, [pc, #52]	@ 000939a6 0d49
.org 0x939a8
	bl 0x5784	@ 000939a8 71f7ecfe
.org 0x939ac
	movs r1, #128	@ 000939ac 8021
.org 0x939ae
	lsls r1, r1, #7	@ 000939ae c901
.org 0x939b0
	adds r0, r4, #0	@ 000939b0 201c
.org 0x939b2
	bl 0x1cf00	@ 000939b2 89f7a5fa
.org 0x939b6
	movs r0, #16	@ 000939b6 1020
.org 0x939b8
	strb r0, [r4, #18]	@ 000939b8 a074
.org 0x939ba
	ldrb r0, [r4, #15]	@ 000939ba e07b
.org 0x939bc
	adds r0, #1	@ 000939bc 0130
.org 0x939be
	strb r0, [r4, #15]	@ 000939be e073
.org 0x939c0
	adds r0, r4, #0	@ 000939c0 201c
.org 0x939c2
	bl 0x1cff0	@ 000939c2 89f715fb
.org 0x939c6
	adds r0, r4, #0	@ 000939c6 201c
.org 0x939c8
	bl 0x94a38	@ 000939c8 01f036f8
.org 0x939cc
	adds r0, r4, #0	@ 000939cc 201c
.org 0x939ce
	bl 0x94f38	@ 000939ce 01f0b3fa
.org 0x939d2
	cmp r0, #0	@ 000939d2 0028
.org 0x939d4
	beq.n 0x939e0	@ 000939d4 04d0
.org 0x939d6
	movs r1, #0	@ 000939d6 0021
.org 0x939d8
	movs r0, #3	@ 000939d8 0320
.org 0x939da
	b.n 0x939f0	@ 000939da 09e0
.org 0x939dc
	.byte 0x94,0x05,0x86,0x08	@ 000939dc data
.org 0x939e0
	ldrb r0, [r4, #18]	@ 000939e0 a07c
.org 0x939e2
	subs r0, #1	@ 000939e2 0138
.org 0x939e4
	strb r0, [r4, #18]	@ 000939e4 a074
.org 0x939e6
	lsls r0, r0, #24	@ 000939e6 0006
.org 0x939e8
	lsrs r1, r0, #24	@ 000939e8 010e
.org 0x939ea
	cmp r1, #0	@ 000939ea 0029
.org 0x939ec
	bne.n 0x939f6	@ 000939ec 03d1
.org 0x939ee
	movs r0, #1	@ 000939ee 0120
.org 0x939f0
	strb r0, [r4, #13]	@ 000939f0 6073
.org 0x939f2
	strb r1, [r4, #14]	@ 000939f2 a173
.org 0x939f4
	strb r1, [r4, #15]	@ 000939f4 e173
.org 0x939f6
	pop {r4}	@ 000939f6 10bc
