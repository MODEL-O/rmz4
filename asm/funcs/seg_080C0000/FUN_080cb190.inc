@ FUN_080cb190  entry 0x080cb190  size 154
.thumb
.org 0xcb190
FUN_080cb190:
	push {r4, r5, r6, r7, lr}	@ 000cb190 f0b5
.org 0xcb192
	adds r7, r0, #0	@ 000cb192 071c
.org 0xcb194
	bl 0x1cc9c	@ 000cb194 51f782fd
.org 0xcb198
	ldrb r1, [r7, #10]	@ 000cb198 b97a
.org 0xcb19a
	movs r0, #1	@ 000cb19a 0120
.org 0xcb19c
	movs r4, #0	@ 000cb19c 0024
.org 0xcb19e
	orrs r0, r1	@ 000cb19e 0843
.org 0xcb1a0
	movs r1, #2	@ 000cb1a0 0221
.org 0xcb1a2
	orrs r0, r1	@ 000cb1a2 0843
.org 0xcb1a4
	strb r0, [r7, #10]	@ 000cb1a4 b872
.org 0xcb1a6
	movs r1, #142	@ 000cb1a6 8e21
.org 0xcb1a8
	lsls r1, r1, #8	@ 000cb1a8 0902
.org 0xcb1aa
	adds r0, r7, #0	@ 000cb1aa 381c
.org 0xcb1ac
	bl 0x1cf00	@ 000cb1ac 51f7a8fe
.org 0xcb1b0
	adds r0, r7, #0	@ 000cb1b0 381c
.org 0xcb1b2
	bl 0x1cff0	@ 000cb1b2 51f71dff
.org 0xcb1b6
	ldrb r2, [r7, #17]	@ 000cb1b6 7a7c
.org 0xcb1b8
	cmp r2, #0	@ 000cb1b8 002a
.org 0xcb1ba
	beq.n 0xcb1c4	@ 000cb1ba 03d0
.org 0xcb1bc
	ldrb r0, [r7, #10]	@ 000cb1bc b87a
.org 0xcb1be
	movs r1, #16	@ 000cb1be 1021
.org 0xcb1c0
	orrs r0, r1	@ 000cb1c0 0843
.org 0xcb1c2
	b.n 0xcb1ca	@ 000cb1c2 02e0
.org 0xcb1c4
	ldrb r1, [r7, #10]	@ 000cb1c4 b97a
.org 0xcb1c6
	movs r0, #239	@ 000cb1c6 ef20
.org 0xcb1c8
	ands r0, r1	@ 000cb1c8 0840
.org 0xcb1ca
	strb r0, [r7, #10]	@ 000cb1ca b872
.org 0xcb1cc
	movs r5, #1	@ 000cb1cc 0125
.org 0xcb1ce
	adds r1, r5, #0	@ 000cb1ce 291c
.org 0xcb1d0
	ands r1, r2	@ 000cb1d0 1140
.org 0xcb1d2
	adds r0, r7, #0	@ 000cb1d2 381c
.org 0xcb1d4
	adds r0, #76	@ 000cb1d4 4c30
.org 0xcb1d6
	movs r6, #0	@ 000cb1d6 0026
.org 0xcb1d8
	strb r1, [r0, #0]	@ 000cb1d8 0170
.org 0xcb1da
	adds r3, r7, #0	@ 000cb1da 3b1c
.org 0xcb1dc
	adds r3, #74	@ 000cb1dc 4a33
.org 0xcb1de
	lsls r1, r1, #4	@ 000cb1de 0901
.org 0xcb1e0
	ldrb r2, [r3, #0]	@ 000cb1e0 1a78
.org 0xcb1e2
	movs r0, #17	@ 000cb1e2 1120
.org 0xcb1e4
	negs r0, r0	@ 000cb1e4 4042
.org 0xcb1e6
	ands r0, r2	@ 000cb1e6 1040
.org 0xcb1e8
	orrs r0, r1	@ 000cb1e8 0843
.org 0xcb1ea
	strb r0, [r3, #0]	@ 000cb1ea 1870
.org 0xcb1ec
	ldrb r1, [r7, #10]	@ 000cb1ec b97a
.org 0xcb1ee
	movs r0, #4	@ 000cb1ee 0420
.org 0xcb1f0
	orrs r0, r1	@ 000cb1f0 0843
.org 0xcb1f2
	strb r0, [r7, #10]	@ 000cb1f2 b872
.org 0xcb1f4
	adds r4, r7, #0	@ 000cb1f4 3c1c
.org 0xcb1f6
	adds r4, #116	@ 000cb1f6 7434
.org 0xcb1f8
	ldr r1, [pc, #48]	@ 000cb1f8 0c49
.org 0xcb1fa
	adds r2, r7, #0	@ 000cb1fa 3a1c
.org 0xcb1fc
	adds r2, #84	@ 000cb1fc 5432
.org 0xcb1fe
	adds r0, r4, #0	@ 000cb1fe 201c
.org 0xcb200
	movs r3, #8	@ 000cb200 0823
.org 0xcb202
	bl 0x5760	@ 000cb202 3af7adfa
.org 0xcb206
	str r7, [r4, #44]	@ 000cb206 e762
.org 0xcb208
	str r6, [r4, #36]	@ 000cb208 6662
.org 0xcb20a
	movs r0, #4	@ 000cb20a 0420
.org 0xcb20c
	strb r0, [r7, #18]	@ 000cb20c b874
.org 0xcb20e
	ldr r1, [pc, #32]	@ 000cb20e 0849
.org 0xcb210
	ldrb r0, [r7, #9]	@ 000cb210 787a
.org 0xcb212
	lsls r0, r0, #2	@ 000cb212 8000
.org 0xcb214
	adds r0, r0, r1	@ 000cb214 4018
.org 0xcb216
	str r5, [r7, #12]	@ 000cb216 fd60
.org 0xcb218
	ldr r0, [r0, #0]	@ 000cb218 0068
.org 0xcb21a
	ldr r0, [r0, #4]	@ 000cb21a 4068
.org 0xcb21c
	str r0, [r7, #20]	@ 000cb21c 7861
.org 0xcb21e
	adds r0, r7, #0	@ 000cb21e 381c
.org 0xcb220
	bl 0xcb130	@ 000cb220 fff786ff
.org 0xcb224
	pop {r4, r5, r6, r7}	@ 000cb224 f0bc
.org 0xcb226
	pop {r0}	@ 000cb226 01bc
.org 0xcb228
	bx r0	@ 000cb228 0047
