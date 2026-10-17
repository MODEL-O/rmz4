@ FUN_0810c1b0  entry 0x0810c1b0  size 92
.thumb
.org 0x10c1b0
FUN_0810c1b0:
	push {r4, lr}	@ 0010c1b0 10b5
.org 0x10c1b2
	adds r4, r0, #0	@ 0010c1b2 041c
.org 0x10c1b4
	bl 0x1cdbc	@ 0010c1b4 10f702fe
.org 0x10c1b8
	ldrb r1, [r4, #10]	@ 0010c1b8 a17a
.org 0x10c1ba
	movs r0, #1	@ 0010c1ba 0120
.org 0x10c1bc
	orrs r0, r1	@ 0010c1bc 0843
.org 0x10c1be
	movs r1, #2	@ 0010c1be 0221
.org 0x10c1c0
	orrs r0, r1	@ 0010c1c0 0843
.org 0x10c1c2
	strb r0, [r4, #10]	@ 0010c1c2 a072
.org 0x10c1c4
	adds r2, r4, #0	@ 0010c1c4 221c
.org 0x10c1c6
	adds r2, #73	@ 0010c1c6 4932
.org 0x10c1c8
	ldrb r1, [r2, #0]	@ 0010c1c8 1178
.org 0x10c1ca
	movs r0, #13	@ 0010c1ca 0d20
.org 0x10c1cc
	negs r0, r0	@ 0010c1cc 4042
.org 0x10c1ce
	ands r0, r1	@ 0010c1ce 0840
.org 0x10c1d0
	strb r0, [r2, #0]	@ 0010c1d0 1070
.org 0x10c1d2
	adds r1, r4, #0	@ 0010c1d2 211c
.org 0x10c1d4
	adds r1, #37	@ 0010c1d4 2531
.org 0x10c1d6
	movs r0, #17	@ 0010c1d6 1120
.org 0x10c1d8
	strb r0, [r1, #0]	@ 0010c1d8 0870
.org 0x10c1da
	ldr r1, [pc, #48]	@ 0010c1da 0c49
.org 0x10c1dc
	ldrb r0, [r4, #17]	@ 0010c1dc 607c
.org 0x10c1de
	lsls r0, r0, #2	@ 0010c1de 8000
.org 0x10c1e0
	adds r0, r0, r1	@ 0010c1e0 4018
.org 0x10c1e2
	ldrh r1, [r0, #0]	@ 0010c1e2 0188
.org 0x10c1e4
	adds r0, r4, #0	@ 0010c1e4 201c
.org 0x10c1e6
	adds r0, #116	@ 0010c1e6 7430
.org 0x10c1e8
	strh r1, [r0, #0]	@ 0010c1e8 0180
.org 0x10c1ea
	ldrh r1, [r0, #0]	@ 0010c1ea 0188
.org 0x10c1ec
	adds r0, r4, #0	@ 0010c1ec 201c
.org 0x10c1ee
	bl 0x1cf00	@ 0010c1ee 10f787fe
.org 0x10c1f2
	ldr r1, [pc, #28]	@ 0010c1f2 0749
.org 0x10c1f4
	ldrb r0, [r4, #17]	@ 0010c1f4 607c
.org 0x10c1f6
	lsls r0, r0, #3	@ 0010c1f6 c000
.org 0x10c1f8
	adds r0, r0, r1	@ 0010c1f8 4018
.org 0x10c1fa
	ldr r1, [r0, #4]	@ 0010c1fa 4168
.org 0x10c1fc
	ldr r0, [r0, #0]	@ 0010c1fc 0068
.org 0x10c1fe
	str r0, [r4, #84]	@ 0010c1fe 6065
.org 0x10c200
	str r1, [r4, #88]	@ 0010c200 a165
.org 0x10c202
	str r0, [r4, #100]	@ 0010c202 6066
.org 0x10c204
	str r1, [r4, #104]	@ 0010c204 a166
.org 0x10c206
	pop {r4}	@ 0010c206 10bc
.org 0x10c208
	pop {r0}	@ 0010c208 01bc
.org 0x10c20a
	bx r0	@ 0010c20a 0047
