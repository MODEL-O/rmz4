@ FUN_080b2588  entry 0x080b2588  size 114
.thumb
.org 0xb2588
FUN_080b2588:
	push {r4, r5, r6, lr}	@ 000b2588 70b5
.org 0xb258a
	adds r6, r0, #0	@ 000b258a 061c
.org 0xb258c
	ldr r1, [pc, #16]	@ 000b258c 0449
.org 0xb258e
	bl 0x1cf00	@ 000b258e 6af7b7fc
.org 0xb2592
	ldrb r2, [r6, #17]	@ 000b2592 727c
.org 0xb2594
	cmp r2, #0	@ 000b2594 002a
.org 0xb2596
	beq.n 0xb25a4	@ 000b2596 05d0
.org 0xb2598
	ldrb r1, [r6, #10]	@ 000b2598 b17a
.org 0xb259a
	movs r0, #16	@ 000b259a 1020
.org 0xb259c
	orrs r0, r1	@ 000b259c 0843
.org 0xb259e
	b.n 0xb25aa	@ 000b259e 04e0
.org 0xb25a0
	.byte 0x0c,0xc5,0x00,0x00	@ 000b25a0 data
.org 0xb25a4
	ldrb r1, [r6, #10]	@ 000b25a4 b17a
.org 0xb25a6
	movs r0, #239	@ 000b25a6 ef20
.org 0xb25a8
	ands r0, r1	@ 000b25a8 0840
.org 0xb25aa
	strb r0, [r6, #10]	@ 000b25aa b072
.org 0xb25ac
	movs r1, #1	@ 000b25ac 0121
.org 0xb25ae
	ands r1, r2	@ 000b25ae 1140
.org 0xb25b0
	adds r0, r6, #0	@ 000b25b0 301c
.org 0xb25b2
	adds r0, #76	@ 000b25b2 4c30
.org 0xb25b4
	movs r5, #0	@ 000b25b4 0025
.org 0xb25b6
	strb r1, [r0, #0]	@ 000b25b6 0170
.org 0xb25b8
	adds r3, r6, #0	@ 000b25b8 331c
.org 0xb25ba
	adds r3, #74	@ 000b25ba 4a33
.org 0xb25bc
	lsls r1, r1, #4	@ 000b25bc 0901
.org 0xb25be
	ldrb r2, [r3, #0]	@ 000b25be 1a78
.org 0xb25c0
	movs r0, #17	@ 000b25c0 1120
.org 0xb25c2
	negs r0, r0	@ 000b25c2 4042
.org 0xb25c4
	ands r0, r2	@ 000b25c4 1040
.org 0xb25c6
	orrs r0, r1	@ 000b25c6 0843
.org 0xb25c8
	strb r0, [r3, #0]	@ 000b25c8 1870
.org 0xb25ca
	ldrb r1, [r6, #10]	@ 000b25ca b17a
.org 0xb25cc
	movs r0, #4	@ 000b25cc 0420
.org 0xb25ce
	orrs r0, r1	@ 000b25ce 0843
.org 0xb25d0
	strb r0, [r6, #10]	@ 000b25d0 b072
.org 0xb25d2
	adds r4, r6, #0	@ 000b25d2 341c
.org 0xb25d4
	adds r4, #116	@ 000b25d4 7434
.org 0xb25d6
	ldr r1, [pc, #40]	@ 000b25d6 0a49
.org 0xb25d8
	adds r2, r6, #0	@ 000b25d8 321c
.org 0xb25da
	adds r2, #84	@ 000b25da 5432
.org 0xb25dc
	adds r0, r4, #0	@ 000b25dc 201c
.org 0xb25de
	movs r3, #4	@ 000b25de 0423
.org 0xb25e0
	bl 0x5760	@ 000b25e0 53f7bef8
.org 0xb25e4
	str r6, [r4, #44]	@ 000b25e4 e662
.org 0xb25e6
	ldr r0, [pc, #28]	@ 000b25e6 0748
.org 0xb25e8
	str r0, [r4, #36]	@ 000b25e8 6062
.org 0xb25ea
	ldr r0, [r6, #88]	@ 000b25ea b06d
.org 0xb25ec
	ldr r1, [pc, #24]	@ 000b25ec 0649
.org 0xb25ee
	adds r0, r0, r1	@ 000b25ee 4018
.org 0xb25f0
	str r0, [r6, #88]	@ 000b25f0 b065
.org 0xb25f2
	movs r0, #4	@ 000b25f2 0420
.org 0xb25f4
	strb r0, [r6, #13]	@ 000b25f4 7073
.org 0xb25f6
	strb r5, [r6, #14]	@ 000b25f6 b573
.org 0xb25f8
	pop {r4, r5, r6}	@ 000b25f8 70bc
