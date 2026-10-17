@ FUN_0809a270  entry 0x0809a270  size 146
.thumb
.org 0x9a270
FUN_0809a270:
	push {r4, r5, r6, lr}	@ 0009a270 70b5
.org 0x9a272
	adds r6, r0, #0	@ 0009a272 061c
.org 0x9a274
	bl 0x1ce54	@ 0009a274 82f7eefd
.org 0x9a278
	ldrb r1, [r6, #10]	@ 0009a278 b17a
.org 0x9a27a
	movs r0, #1	@ 0009a27a 0120
.org 0x9a27c
	movs r5, #0	@ 0009a27c 0025
.org 0x9a27e
	orrs r0, r1	@ 0009a27e 0843
.org 0x9a280
	movs r1, #2	@ 0009a280 0221
.org 0x9a282
	orrs r0, r1	@ 0009a282 0843
.org 0x9a284
	strb r0, [r6, #10]	@ 0009a284 b072
.org 0x9a286
	movs r1, #194	@ 0009a286 c221
.org 0x9a288
	lsls r1, r1, #7	@ 0009a288 c901
.org 0x9a28a
	adds r0, r6, #0	@ 0009a28a 301c
.org 0x9a28c
	bl 0x1cf00	@ 0009a28c 82f738fe
.org 0x9a290
	adds r0, r6, #0	@ 0009a290 301c
.org 0x9a292
	bl 0x1cff0	@ 0009a292 82f7adfe
.org 0x9a296
	ldrb r1, [r6, #10]	@ 0009a296 b17a
.org 0x9a298
	movs r0, #4	@ 0009a298 0420
.org 0x9a29a
	orrs r0, r1	@ 0009a29a 0843
.org 0x9a29c
	strb r0, [r6, #10]	@ 0009a29c b072
.org 0x9a29e
	adds r4, r6, #0	@ 0009a29e 341c
.org 0x9a2a0
	adds r4, #116	@ 0009a2a0 7434
.org 0x9a2a2
	ldr r1, [pc, #28]	@ 0009a2a2 0749
.org 0x9a2a4
	adds r2, r6, #0	@ 0009a2a4 321c
.org 0x9a2a6
	adds r2, #84	@ 0009a2a6 5432
.org 0x9a2a8
	adds r0, r4, #0	@ 0009a2a8 201c
.org 0x9a2aa
	movs r3, #8	@ 0009a2aa 0823
.org 0x9a2ac
	bl 0x5760	@ 0009a2ac 6bf758fa
.org 0x9a2b0
	str r6, [r4, #44]	@ 0009a2b0 e662
.org 0x9a2b2
	str r5, [r4, #36]	@ 0009a2b2 6562
.org 0x9a2b4
	ldrb r0, [r6, #17]	@ 0009a2b4 707c
.org 0x9a2b6
	cmp r0, #0	@ 0009a2b6 0028
.org 0x9a2b8
	beq.n 0x9a2c4	@ 0009a2b8 04d0
.org 0x9a2ba
	movs r0, #96	@ 0009a2ba 6020
.org 0x9a2bc
	b.n 0x9a2c6	@ 0009a2bc 03e0
.org 0x9a2be
	.byte 0x00	@ 0009a2be data
.org 0x9a2bf
	.byte 0x00	@ 0009a2bf data
.org 0x9a2c0
	.byte 0x28,0x0f,0x86,0x08	@ 0009a2c0 data
.org 0x9a2c4
	movs r0, #32	@ 0009a2c4 2020
.org 0x9a2c6
	strb r0, [r6, #18]	@ 0009a2c6 b074
.org 0x9a2c8
	ldr r3, [pc, #60]	@ 0009a2c8 0f4b
.org 0x9a2ca
	ldrb r1, [r6, #18]	@ 0009a2ca b17c
.org 0x9a2cc
	adds r0, r1, #0	@ 0009a2cc 081c
.org 0x9a2ce
	adds r0, #192	@ 0009a2ce c030
.org 0x9a2d0
	lsls r0, r0, #24	@ 0009a2d0 0006
.org 0x9a2d2
	lsrs r0, r0, #23	@ 0009a2d2 c00d
.org 0x9a2d4
	adds r0, r0, r3	@ 0009a2d4 c018
.org 0x9a2d6
	movs r4, #0	@ 0009a2d6 0024
.org 0x9a2d8
	ldrsh r2, [r0, r4]	@ 0009a2d8 025f
.org 0x9a2da
	lsls r0, r2, #2	@ 0009a2da 9000
.org 0x9a2dc
	str r0, [r6, #92]	@ 0009a2dc f065
.org 0x9a2de
	adds r1, #128	@ 0009a2de 8031
.org 0x9a2e0
	lsls r1, r1, #24	@ 0009a2e0 0906
.org 0x9a2e2
	lsrs r1, r1, #23	@ 0009a2e2 c90d
.org 0x9a2e4
	adds r1, r1, r3	@ 0009a2e4 c918
.org 0x9a2e6
	movs r0, #0	@ 0009a2e6 0020
.org 0x9a2e8
	ldrsh r1, [r1, r0]	@ 0009a2e8 095e
.org 0x9a2ea
	lsls r0, r1, #2	@ 0009a2ea 8800
.org 0x9a2ec
	str r0, [r6, #96]	@ 0009a2ec 3066
.org 0x9a2ee
	asrs r2, r2, #3	@ 0009a2ee d210
.org 0x9a2f0
	str r2, [r6, #100]	@ 0009a2f0 7266
.org 0x9a2f2
	asrs r1, r1, #3	@ 0009a2f2 c910
.org 0x9a2f4
	str r1, [r6, #104]	@ 0009a2f4 b166
.org 0x9a2f6
	movs r0, #16	@ 0009a2f6 1020
.org 0x9a2f8
	strb r0, [r6, #19]	@ 0009a2f8 f074
.org 0x9a2fa
	adds r1, r6, #0	@ 0009a2fa 311c
.org 0x9a2fc
	adds r1, #190	@ 0009a2fc be31
.org 0x9a2fe
	movs r0, #224	@ 0009a2fe e020
.org 0x9a300
	strh r0, [r1, #0]	@ 0009a300 0880
