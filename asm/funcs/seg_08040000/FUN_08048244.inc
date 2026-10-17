@ FUN_08048244  entry 0x08048244  size 190
.thumb
.org 0x48244
FUN_08048244:
	push {r4, r5, r6, r7, lr}	@ 00048244 f0b5
.org 0x48246
	mov r7, sl	@ 00048246 5746
.org 0x48248
	mov r6, r9	@ 00048248 4e46
.org 0x4824a
	mov r5, r8	@ 0004824a 4546
.org 0x4824c
	push {r5, r6, r7}	@ 0004824c e0b4
.org 0x4824e
	sub sp, #8	@ 0004824e 82b0
.org 0x48250
	str r0, [sp, #0]	@ 00048250 0090
.org 0x48252
	lsls r1, r1, #24	@ 00048252 0906
.org 0x48254
	lsrs r1, r1, #24	@ 00048254 090e
.org 0x48256
	str r1, [sp, #4]	@ 00048256 0191
.org 0x48258
	ldr r0, [pc, #104]	@ 00048258 1a48
.org 0x4825a
	ldr r0, [r0, #0]	@ 0004825a 0068
.org 0x4825c
	bl 0x5500	@ 0004825c bdf750f9
.org 0x48260
	adds r2, r0, #0	@ 00048260 021c
.org 0x48262
	cmp r2, #0	@ 00048262 002a
.org 0x48264
	beq.n 0x48300	@ 00048264 4cd0
.org 0x48266
	ldr r7, [pc, #96]	@ 00048266 184f
.org 0x48268
	movs r6, #31	@ 00048268 1f26
.org 0x4826a
	strb r6, [r2, #9]	@ 0004826a 5672
.org 0x4826c
	ldr r0, [r7, #124]	@ 0004826c f86f
.org 0x4826e
	ldr r0, [r0, #0]	@ 0004826e 0068
.org 0x48270
	str r0, [r2, #20]	@ 00048270 5061
.org 0x48272
	ldrb r1, [r2, #11]	@ 00048272 d17a
.org 0x48274
	movs r0, #191	@ 00048274 bf20
.org 0x48276
	mov r9, r0	@ 00048276 8146
.org 0x48278
	ands r0, r1	@ 00048278 0840
.org 0x4827a
	strb r0, [r2, #11]	@ 0004827a d072
.org 0x4827c
	adds r3, r2, #0	@ 0004827c 131c
.org 0x4827e
	adds r3, #37	@ 0004827e 2533
.org 0x48280
	movs r1, #16	@ 00048280 1021
.org 0x48282
	mov r8, r1	@ 00048282 8846
.org 0x48284
	mov r0, r8	@ 00048284 4046
.org 0x48286
	strb r0, [r3, #0]	@ 00048286 1870
.org 0x48288
	ldr r5, [pc, #64]	@ 00048288 104d
.org 0x4828a
	ldrh r0, [r5, #0]	@ 0004828a 2888
.org 0x4828c
	strh r0, [r2, #32]	@ 0004828c 1084
.org 0x4828e
	ldr r4, [pc, #64]	@ 0004828e 104c
.org 0x48290
	ldrb r0, [r4, #0]	@ 00048290 2078
.org 0x48292
	movs r1, #34	@ 00048292 2221
.org 0x48294
	adds r1, r1, r2	@ 00048294 8918
.org 0x48296
	mov ip, r1	@ 00048296 8c46
.org 0x48298
	strb r0, [r1, #0]	@ 00048298 0870
.org 0x4829a
	ldr r0, [sp, #0]	@ 0004829a 0098
.org 0x4829c
	adds r0, #248	@ 0004829c f830
.org 0x4829e
	ldrb r0, [r0, #0]	@ 0004829e 0078
.org 0x482a0
	adds r1, r7, #0	@ 000482a0 391c
.org 0x482a2
	cmp r0, #2	@ 000482a2 0228
.org 0x482a4
	bne.n 0x482d4	@ 000482a4 16d1
.org 0x482a6
	strb r6, [r2, #9]	@ 000482a6 5672
.org 0x482a8
	ldr r0, [r1, #124]	@ 000482a8 c86f
.org 0x482aa
	ldr r0, [r0, #0]	@ 000482aa 0068
.org 0x482ac
	str r0, [r2, #20]	@ 000482ac 5061
.org 0x482ae
	ldrb r1, [r2, #11]	@ 000482ae d17a
.org 0x482b0
	mov r0, r9	@ 000482b0 4846
.org 0x482b2
	ands r0, r1	@ 000482b2 0840
.org 0x482b4
	strb r0, [r2, #11]	@ 000482b4 d072
.org 0x482b6
	mov r0, r8	@ 000482b6 4046
.org 0x482b8
	strb r0, [r3, #0]	@ 000482b8 1870
.org 0x482ba
	ldrh r0, [r5, #0]	@ 000482ba 2888
.org 0x482bc
	strh r0, [r2, #32]	@ 000482bc 1084
.org 0x482be
	adds r1, r4, #0	@ 000482be 211c
.org 0x482c0
	ldrb r0, [r1, #0]	@ 000482c0 0878
.org 0x482c2
	b.n 0x482ee	@ 000482c2 14e0
.org 0x482c4
	.byte 0x88,0xed,0x02,0x02	@ 000482c4 data
.org 0x482c8
	.byte 0xf8,0x39,0x85,0x08	@ 000482c8 data
.org 0x482cc
	.byte 0xfc,0x36,0x85,0x08	@ 000482cc data
.org 0x482d0
	.byte 0x04,0x37,0x85,0x08	@ 000482d0 data
.org 0x482d4
	strb r6, [r2, #9]	@ 000482d4 5672
.org 0x482d6
	ldr r0, [r7, #124]	@ 000482d6 f86f
.org 0x482d8
	ldr r0, [r0, #0]	@ 000482d8 0068
.org 0x482da
	str r0, [r2, #20]	@ 000482da 5061
.org 0x482dc
	ldrb r1, [r2, #11]	@ 000482dc d17a
.org 0x482de
	mov r0, r9	@ 000482de 4846
.org 0x482e0
	ands r0, r1	@ 000482e0 0840
.org 0x482e2
	strb r0, [r2, #11]	@ 000482e2 d072
.org 0x482e4
	mov r0, r8	@ 000482e4 4046
.org 0x482e6
	strb r0, [r3, #0]	@ 000482e6 1870
.org 0x482e8
	ldrh r0, [r5, #2]	@ 000482e8 6888
.org 0x482ea
	strh r0, [r2, #32]	@ 000482ea 1084
.org 0x482ec
	ldrb r0, [r4, #1]	@ 000482ec 6078
.org 0x482ee
	mov r1, ip	@ 000482ee 6146
.org 0x482f0
	strb r0, [r1, #0]	@ 000482f0 0870
.org 0x482f2
	ldr r0, [sp, #0]	@ 000482f2 0098
.org 0x482f4
	str r0, [r2, #40]	@ 000482f4 9062
.org 0x482f6
	movs r0, #0	@ 000482f6 0020
.org 0x482f8
	strb r0, [r2, #16]	@ 000482f8 1074
.org 0x482fa
	mov r1, sp	@ 000482fa 6946
.org 0x482fc
	ldrb r1, [r1, #4]	@ 000482fc 0979
.org 0x482fe
	strb r1, [r2, #17]	@ 000482fe 5174
.org 0x48300
	adds r0, r2, #0	@ 00048300 101c
