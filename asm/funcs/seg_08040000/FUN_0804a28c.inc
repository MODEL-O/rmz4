@ FUN_0804a28c  entry 0x0804a28c  size 196
.thumb
.org 0x4a28c
FUN_0804a28c:
	push {r4, r5, r6, r7, lr}	@ 0004a28c f0b5
.org 0x4a28e
	mov r7, sl	@ 0004a28e 5746
.org 0x4a290
	mov r6, r9	@ 0004a290 4e46
.org 0x4a292
	mov r5, r8	@ 0004a292 4546
.org 0x4a294
	push {r5, r6, r7}	@ 0004a294 e0b4
.org 0x4a296
	sub sp, #8	@ 0004a296 82b0
.org 0x4a298
	str r0, [sp, #0]	@ 0004a298 0090
.org 0x4a29a
	lsls r1, r1, #24	@ 0004a29a 0906
.org 0x4a29c
	lsrs r1, r1, #24	@ 0004a29c 090e
.org 0x4a29e
	str r1, [sp, #4]	@ 0004a29e 0191
.org 0x4a2a0
	ldr r0, [pc, #112]	@ 0004a2a0 1c48
.org 0x4a2a2
	ldr r0, [r0, #0]	@ 0004a2a2 0068
.org 0x4a2a4
	bl 0x5500	@ 0004a2a4 bbf72cf9
.org 0x4a2a8
	adds r2, r0, #0	@ 0004a2a8 021c
.org 0x4a2aa
	cmp r2, #0	@ 0004a2aa 002a
.org 0x4a2ac
	beq.n 0x4a350	@ 0004a2ac 50d0
.org 0x4a2ae
	ldr r0, [pc, #104]	@ 0004a2ae 1a48
.org 0x4a2b0
	movs r6, #37	@ 0004a2b0 2526
.org 0x4a2b2
	strb r6, [r2, #9]	@ 0004a2b2 5672
.org 0x4a2b4
	adds r7, r0, #0	@ 0004a2b4 071c
.org 0x4a2b6
	adds r7, #148	@ 0004a2b6 9437
.org 0x4a2b8
	ldr r0, [r7, #0]	@ 0004a2b8 3868
.org 0x4a2ba
	ldr r0, [r0, #0]	@ 0004a2ba 0068
.org 0x4a2bc
	str r0, [r2, #20]	@ 0004a2bc 5061
.org 0x4a2be
	ldrb r1, [r2, #11]	@ 0004a2be d17a
.org 0x4a2c0
	movs r0, #191	@ 0004a2c0 bf20
.org 0x4a2c2
	mov r9, r0	@ 0004a2c2 8146
.org 0x4a2c4
	ands r0, r1	@ 0004a2c4 0840
.org 0x4a2c6
	strb r0, [r2, #11]	@ 0004a2c6 d072
.org 0x4a2c8
	adds r3, r2, #0	@ 0004a2c8 131c
.org 0x4a2ca
	adds r3, #37	@ 0004a2ca 2533
.org 0x4a2cc
	movs r1, #16	@ 0004a2cc 1021
.org 0x4a2ce
	mov r8, r1	@ 0004a2ce 8846
.org 0x4a2d0
	mov r0, r8	@ 0004a2d0 4046
.org 0x4a2d2
	strb r0, [r3, #0]	@ 0004a2d2 1870
.org 0x4a2d4
	ldr r5, [pc, #68]	@ 0004a2d4 114d
.org 0x4a2d6
	ldrh r0, [r5, #0]	@ 0004a2d6 2888
.org 0x4a2d8
	strh r0, [r2, #32]	@ 0004a2d8 1084
.org 0x4a2da
	ldr r4, [pc, #68]	@ 0004a2da 114c
.org 0x4a2dc
	ldrb r0, [r4, #0]	@ 0004a2dc 2078
.org 0x4a2de
	movs r1, #34	@ 0004a2de 2221
.org 0x4a2e0
	adds r1, r1, r2	@ 0004a2e0 8918
.org 0x4a2e2
	mov ip, r1	@ 0004a2e2 8c46
.org 0x4a2e4
	strb r0, [r1, #0]	@ 0004a2e4 0870
.org 0x4a2e6
	ldr r0, [sp, #0]	@ 0004a2e6 0098
.org 0x4a2e8
	adds r0, #248	@ 0004a2e8 f830
.org 0x4a2ea
	ldrb r0, [r0, #0]	@ 0004a2ea 0078
.org 0x4a2ec
	cmp r0, #2	@ 0004a2ec 0228
.org 0x4a2ee
	bne.n 0x4a324	@ 0004a2ee 19d1
.org 0x4a2f0
	strb r6, [r2, #9]	@ 0004a2f0 5672
.org 0x4a2f2
	ldr r0, [r7, #0]	@ 0004a2f2 3868
.org 0x4a2f4
	ldr r0, [r0, #0]	@ 0004a2f4 0068
.org 0x4a2f6
	str r0, [r2, #20]	@ 0004a2f6 5061
.org 0x4a2f8
	ldrb r1, [r2, #11]	@ 0004a2f8 d17a
.org 0x4a2fa
	mov r0, r9	@ 0004a2fa 4846
.org 0x4a2fc
	ands r0, r1	@ 0004a2fc 0840
.org 0x4a2fe
	strb r0, [r2, #11]	@ 0004a2fe d072
.org 0x4a300
	mov r0, r8	@ 0004a300 4046
.org 0x4a302
	strb r0, [r3, #0]	@ 0004a302 1870
.org 0x4a304
	ldrh r0, [r5, #0]	@ 0004a304 2888
.org 0x4a306
	strh r0, [r2, #32]	@ 0004a306 1084
.org 0x4a308
	adds r1, r4, #0	@ 0004a308 211c
.org 0x4a30a
	ldrb r0, [r1, #0]	@ 0004a30a 0878
.org 0x4a30c
	mov r3, ip	@ 0004a30c 6346
.org 0x4a30e
	strb r0, [r3, #0]	@ 0004a30e 1870
.org 0x4a310
	b.n 0x4a342	@ 0004a310 17e0
.org 0x4a312
	.byte 0x00	@ 0004a312 data
.org 0x4a313
	.byte 0x00	@ 0004a313 data
.org 0x4a314
	.byte 0x88,0xed,0x02,0x02	@ 0004a314 data
.org 0x4a318
	.byte 0xf8,0x39,0x85,0x08	@ 0004a318 data
.org 0x4a31c
	.byte 0xfc,0x36,0x85,0x08	@ 0004a31c data
.org 0x4a320
	.byte 0x04,0x37,0x85,0x08	@ 0004a320 data
.org 0x4a324
	strb r6, [r2, #9]	@ 0004a324 5672
.org 0x4a326
	ldr r0, [r7, #0]	@ 0004a326 3868
.org 0x4a328
	ldr r0, [r0, #0]	@ 0004a328 0068
.org 0x4a32a
	str r0, [r2, #20]	@ 0004a32a 5061
.org 0x4a32c
	ldrb r1, [r2, #11]	@ 0004a32c d17a
.org 0x4a32e
	mov r0, r9	@ 0004a32e 4846
.org 0x4a330
	ands r0, r1	@ 0004a330 0840
.org 0x4a332
	strb r0, [r2, #11]	@ 0004a332 d072
.org 0x4a334
	mov r0, r8	@ 0004a334 4046
.org 0x4a336
	strb r0, [r3, #0]	@ 0004a336 1870
.org 0x4a338
	ldrh r0, [r5, #2]	@ 0004a338 6888
.org 0x4a33a
	strh r0, [r2, #32]	@ 0004a33a 1084
.org 0x4a33c
	ldrb r0, [r4, #1]	@ 0004a33c 6078
.org 0x4a33e
	mov r1, ip	@ 0004a33e 6146
.org 0x4a340
	strb r0, [r1, #0]	@ 0004a340 0870
.org 0x4a342
	ldr r3, [sp, #0]	@ 0004a342 009b
.org 0x4a344
	str r3, [r2, #40]	@ 0004a344 9362
.org 0x4a346
	movs r0, #0	@ 0004a346 0020
.org 0x4a348
	mov r1, sp	@ 0004a348 6946
.org 0x4a34a
	ldrb r1, [r1, #4]	@ 0004a34a 0979
.org 0x4a34c
	strb r1, [r2, #16]	@ 0004a34c 1174
.org 0x4a34e
	strb r0, [r2, #17]	@ 0004a34e 5074
