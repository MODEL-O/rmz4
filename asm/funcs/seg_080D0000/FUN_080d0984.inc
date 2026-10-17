@ FUN_080d0984  entry 0x080d0984  size 118
.thumb
.org 0xd0984
FUN_080d0984:
	push {r4, r5, r6, r7, lr}	@ 000d0984 f0b5
.org 0xd0986
	adds r5, r0, #0	@ 000d0986 051c
.org 0xd0988
	adds r0, #180	@ 000d0988 b430
.org 0xd098a
	ldrb r0, [r0, #0]	@ 000d098a 0078
.org 0xd098c
	cmp r0, #0	@ 000d098c 0028
.org 0xd098e
	beq.n 0xd099c	@ 000d098e 05d0
.org 0xd0990
	ldr r0, [r5, #88]	@ 000d0990 a86d
.org 0xd0992
	ldr r1, [pc, #4]	@ 000d0992 0149
.org 0xd0994
	b.n 0xd09a2	@ 000d0994 05e0
.org 0xd0996
	.byte 0x00	@ 000d0996 data
.org 0xd0997
	.byte 0x00	@ 000d0997 data
.org 0xd0998
	.byte 0x00,0xfc,0xff,0xff	@ 000d0998 data
.org 0xd099c
	ldr r0, [r5, #88]	@ 000d099c a86d
.org 0xd099e
	movs r1, #128	@ 000d099e 8021
.org 0xd09a0
	lsls r1, r1, #3	@ 000d09a0 c900
.org 0xd09a2
	adds r0, r0, r1	@ 000d09a2 4018
.org 0xd09a4
	str r0, [r5, #88]	@ 000d09a4 a865
.org 0xd09a6
	ldrb r0, [r5, #18]	@ 000d09a6 a87c
.org 0xd09a8
	adds r7, r0, #0	@ 000d09a8 071c
.org 0xd09aa
	cmp r7, #0	@ 000d09aa 002f
.org 0xd09ac
	beq.n 0xd09b4	@ 000d09ac 02d0
.org 0xd09ae
	subs r0, #1	@ 000d09ae 0138
.org 0xd09b0
	strb r0, [r5, #18]	@ 000d09b0 a874
.org 0xd09b2
	b.n 0xd09fa	@ 000d09b2 22e0
.org 0xd09b4
	movs r0, #3	@ 000d09b4 0320
.org 0xd09b6
	strb r0, [r5, #18]	@ 000d09b6 a874
.org 0xd09b8
	adds r2, r5, #0	@ 000d09b8 2a1c
.org 0xd09ba
	adds r2, #180	@ 000d09ba b432
.org 0xd09bc
	ldrb r0, [r2, #0]	@ 000d09bc 1078
.org 0xd09be
	movs r1, #1	@ 000d09be 0121
.org 0xd09c0
	eors r0, r1	@ 000d09c0 4840
.org 0xd09c2
	strb r0, [r2, #0]	@ 000d09c2 1070
.org 0xd09c4
	adds r6, r5, #0	@ 000d09c4 2e1c
.org 0xd09c6
	adds r6, #182	@ 000d09c6 b636
.org 0xd09c8
	ldrb r0, [r6, #0]	@ 000d09c8 3078
.org 0xd09ca
	adds r1, r0, #0	@ 000d09ca 011c
.org 0xd09cc
	cmp r1, #0	@ 000d09cc 0029
.org 0xd09ce
	bne.n 0xd09d4	@ 000d09ce 01d1
.org 0xd09d0
	adds r0, #1	@ 000d09d0 0130
.org 0xd09d2
	b.n 0xd09f8	@ 000d09d2 11e0
.org 0xd09d4
	cmp r1, #1	@ 000d09d4 0129
.org 0xd09d6
	bne.n 0xd09f6	@ 000d09d6 0ed1
.org 0xd09d8
	ldrb r0, [r5, #10]	@ 000d09d8 a87a
.org 0xd09da
	movs r1, #4	@ 000d09da 0421
.org 0xd09dc
	orrs r0, r1	@ 000d09dc 0843
.org 0xd09de
	strb r0, [r5, #10]	@ 000d09de a872
.org 0xd09e0
	adds r4, r5, #0	@ 000d09e0 2c1c
.org 0xd09e2
	adds r4, #116	@ 000d09e2 7434
.org 0xd09e4
	ldr r1, [pc, #24]	@ 000d09e4 0649
.org 0xd09e6
	adds r2, r5, #0	@ 000d09e6 2a1c
.org 0xd09e8
	adds r2, #84	@ 000d09e8 5432
.org 0xd09ea
	adds r0, r4, #0	@ 000d09ea 201c
.org 0xd09ec
	movs r3, #255	@ 000d09ec ff23
.org 0xd09ee
	bl 0x5760	@ 000d09ee 34f7b7fe
.org 0xd09f2
	str r5, [r4, #44]	@ 000d09f2 e562
.org 0xd09f4
	str r7, [r4, #36]	@ 000d09f4 6762
.org 0xd09f6
	movs r0, #2	@ 000d09f6 0220
.org 0xd09f8
	strb r0, [r6, #0]	@ 000d09f8 3070
