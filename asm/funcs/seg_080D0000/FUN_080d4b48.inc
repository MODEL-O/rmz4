@ FUN_080d4b48  entry 0x080d4b48  size 144
.thumb
.org 0xd4b48
FUN_080d4b48:
	push {r4, r5, r6, r7, lr}	@ 000d4b48 f0b5
.org 0xd4b4a
	adds r6, r1, #0	@ 000d4b4a 0e1c
.org 0xd4b4c
	adds r5, r2, #0	@ 000d4b4c 151c
.org 0xd4b4e
	lsls r0, r0, #24	@ 000d4b4e 0006
.org 0xd4b50
	lsrs r7, r0, #24	@ 000d4b50 070e
.org 0xd4b52
	ldr r0, [pc, #92]	@ 000d4b52 1748
.org 0xd4b54
	ldr r0, [r0, #0]	@ 000d4b54 0068
.org 0xd4b56
	bl 0x5500	@ 000d4b56 30f7d3fc
.org 0xd4b5a
	adds r4, r0, #0	@ 000d4b5a 041c
.org 0xd4b5c
	cmp r4, #0	@ 000d4b5c 002c
.org 0xd4b5e
	beq.n 0xd4bde	@ 000d4b5e 3ed0
.org 0xd4b60
	adds r0, #37	@ 000d4b60 2530
.org 0xd4b62
	movs r2, #0	@ 000d4b62 0022
.org 0xd4b64
	movs r3, #1	@ 000d4b64 0123
.org 0xd4b66
	strb r3, [r0, #0]	@ 000d4b66 0370
.org 0xd4b68
	ldr r1, [pc, #72]	@ 000d4b68 1249
.org 0xd4b6a
	movs r0, #15	@ 000d4b6a 0f20
.org 0xd4b6c
	strb r0, [r4, #9]	@ 000d4b6c 6072
.org 0xd4b6e
	ldr r0, [r1, #60]	@ 000d4b6e c86b
.org 0xd4b70
	ldr r0, [r0, #0]	@ 000d4b70 0068
.org 0xd4b72
	str r0, [r4, #20]	@ 000d4b72 6061
.org 0xd4b74
	movs r0, #0	@ 000d4b74 0020
.org 0xd4b76
	strh r2, [r4, #32]	@ 000d4b76 2284
.org 0xd4b78
	adds r1, r4, #0	@ 000d4b78 211c
.org 0xd4b7a
	adds r1, #34	@ 000d4b7a 2231
.org 0xd4b7c
	strb r0, [r1, #0]	@ 000d4b7c 0870
.org 0xd4b7e
	str r6, [r4, #40]	@ 000d4b7e a662
.org 0xd4b80
	ldr r0, [r5, #0]	@ 000d4b80 2868
.org 0xd4b82
	str r0, [r4, #100]	@ 000d4b82 6066
.org 0xd4b84
	ldr r0, [r5, #4]	@ 000d4b84 6868
.org 0xd4b86
	str r0, [r4, #104]	@ 000d4b86 a066
.org 0xd4b88
	strb r3, [r4, #16]	@ 000d4b88 2374
.org 0xd4b8a
	adds r0, r4, #0	@ 000d4b8a 201c
.org 0xd4b8c
	bl 0x1cc9c	@ 000d4b8c 48f786f8
.org 0xd4b90
	ldr r1, [pc, #36]	@ 000d4b90 0949
.org 0xd4b92
	lsls r0, r7, #1	@ 000d4b92 7800
.org 0xd4b94
	adds r0, r0, r1	@ 000d4b94 4018
.org 0xd4b96
	ldrh r1, [r0, #0]	@ 000d4b96 0188
.org 0xd4b98
	adds r0, r4, #0	@ 000d4b98 201c
.org 0xd4b9a
	bl 0x1cf00	@ 000d4b9a 48f7b1f9
.org 0xd4b9e
	ldr r0, [r5, #0]	@ 000d4b9e 2868
.org 0xd4ba0
	lsrs r2, r0, #31	@ 000d4ba0 c20f
.org 0xd4ba2
	cmp r2, #0	@ 000d4ba2 002a
.org 0xd4ba4
	beq.n 0xd4bbc	@ 000d4ba4 0ad0
.org 0xd4ba6
	ldrb r0, [r4, #10]	@ 000d4ba6 a07a
.org 0xd4ba8
	movs r1, #16	@ 000d4ba8 1021
.org 0xd4baa
	orrs r0, r1	@ 000d4baa 0843
.org 0xd4bac
	b.n 0xd4bc2	@ 000d4bac 09e0
.org 0xd4bae
	.byte 0x00	@ 000d4bae data
.org 0xd4baf
	.byte 0x00	@ 000d4baf data
.org 0xd4bb0
	.byte 0x9c,0xed,0x02,0x02	@ 000d4bb0 data
.org 0xd4bb4
	.byte 0x64,0x6f,0x86,0x08	@ 000d4bb4 data
.org 0xd4bb8
	.byte 0x68,0x7e,0x86,0x08	@ 000d4bb8 data
.org 0xd4bbc
	ldrb r1, [r4, #10]	@ 000d4bbc a17a
.org 0xd4bbe
	movs r0, #239	@ 000d4bbe ef20
.org 0xd4bc0
	ands r0, r1	@ 000d4bc0 0840
.org 0xd4bc2
	strb r0, [r4, #10]	@ 000d4bc2 a072
.org 0xd4bc4
	adds r1, r2, #0	@ 000d4bc4 111c
.org 0xd4bc6
	adds r0, r4, #0	@ 000d4bc6 201c
.org 0xd4bc8
	adds r0, #76	@ 000d4bc8 4c30
.org 0xd4bca
	strb r1, [r0, #0]	@ 000d4bca 0170
.org 0xd4bcc
	adds r3, r4, #0	@ 000d4bcc 231c
.org 0xd4bce
	adds r3, #74	@ 000d4bce 4a33
.org 0xd4bd0
	lsls r1, r1, #4	@ 000d4bd0 0901
.org 0xd4bd2
	ldrb r2, [r3, #0]	@ 000d4bd2 1a78
.org 0xd4bd4
	movs r0, #17	@ 000d4bd4 1120
.org 0xd4bd6
	negs r0, r0	@ 000d4bd6 4042
