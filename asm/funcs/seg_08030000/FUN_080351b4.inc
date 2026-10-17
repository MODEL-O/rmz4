@ FUN_080351b4  entry 0x080351b4  size 182
.thumb
.org 0x351b4
FUN_080351b4:
	push {r4, r5, lr}	@ 000351b4 30b5
.org 0x351b6
	adds r4, r0, #0	@ 000351b6 041c
.org 0x351b8
	movs r0, #129	@ 000351b8 8120
.org 0x351ba
	lsls r0, r0, #1	@ 000351ba 4000
.org 0x351bc
	adds r5, r4, r0	@ 000351bc 2518
.org 0x351be
	ldrb r0, [r5, #0]	@ 000351be 2878
.org 0x351c0
	cmp r0, #0	@ 000351c0 0028
.org 0x351c2
	bne.n 0x351f0	@ 000351c2 15d1
.org 0x351c4
	ldr r1, [pc, #100]	@ 000351c4 1949
.org 0x351c6
	adds r0, r4, #0	@ 000351c6 201c
.org 0x351c8
	adds r0, #113	@ 000351c8 7130
.org 0x351ca
	movs r2, #0	@ 000351ca 0022
.org 0x351cc
	ldrsb r2, [r0, r2]	@ 000351cc 8256
.org 0x351ce
	lsls r2, r2, #16	@ 000351ce 1204
.org 0x351d0
	lsrs r2, r2, #16	@ 000351d0 120c
.org 0x351d2
	adds r0, #1	@ 000351d2 0130
.org 0x351d4
	movs r3, #0	@ 000351d4 0023
.org 0x351d6
	ldrsb r3, [r0, r3]	@ 000351d6 c356
.org 0x351d8
	lsls r3, r3, #16	@ 000351d8 1b04
.org 0x351da
	lsrs r3, r3, #16	@ 000351da 1b0c
.org 0x351dc
	adds r0, r4, #0	@ 000351dc 201c
.org 0x351de
	bl 0x1cfc8	@ 000351de e7f7f3fe
.org 0x351e2
	ldr r0, [pc, #76]	@ 000351e2 1348
.org 0x351e4
	adds r1, r4, r0	@ 000351e4 2118
.org 0x351e6
	movs r0, #5	@ 000351e6 0520
.org 0x351e8
	strb r0, [r1, #0]	@ 000351e8 0870
.org 0x351ea
	ldrb r0, [r5, #0]	@ 000351ea 2878
.org 0x351ec
	adds r0, #1	@ 000351ec 0130
.org 0x351ee
	strb r0, [r5, #0]	@ 000351ee 2870
.org 0x351f0
	ldr r1, [pc, #64]	@ 000351f0 1049
.org 0x351f2
	adds r2, r4, r1	@ 000351f2 6218
.org 0x351f4
	ldrb r0, [r2, #0]	@ 000351f4 1078
.org 0x351f6
	movs r1, #8	@ 000351f6 0821
.org 0x351f8
	orrs r0, r1	@ 000351f8 0843
.org 0x351fa
	strb r0, [r2, #0]	@ 000351fa 1070
.org 0x351fc
	movs r0, #162	@ 000351fc a220
.org 0x351fe
	lsls r0, r0, #1	@ 000351fe 4000
.org 0x35200
	adds r1, r4, r0	@ 00035200 2118
.org 0x35202
	adds r0, r4, #0	@ 00035202 201c
.org 0x35204
	bl 0x39fd8	@ 00035204 04f0e8fe
.org 0x35208
	lsls r0, r0, #24	@ 00035208 0006
.org 0x3520a
	lsrs r2, r0, #24	@ 0003520a 020e
.org 0x3520c
	cmp r2, #0	@ 0003520c 002a
.org 0x3520e
	beq.n 0x35238	@ 0003520e 13d0
.org 0x35210
	movs r1, #128	@ 00035210 8021
.org 0x35212
	lsls r1, r1, #1	@ 00035212 4900
.org 0x35214
	adds r0, r4, r1	@ 00035214 6018
.org 0x35216
	movs r2, #0	@ 00035216 0022
.org 0x35218
	movs r1, #3	@ 00035218 0321
.org 0x3521a
	strb r1, [r0, #0]	@ 0003521a 0170
.org 0x3521c
	adds r1, #254	@ 0003521c fe31
.org 0x3521e
	adds r0, r4, r1	@ 0003521e 6018
.org 0x35220
	strb r2, [r0, #0]	@ 00035220 0270
.org 0x35222
	adds r0, r4, #0	@ 00035222 201c
.org 0x35224
	bl 0x34b48	@ 00035224 fff790fc
.org 0x35228
	b.n 0x35272	@ 00035228 23e0
.org 0x3522a
	.byte 0x00	@ 0003522a data
.org 0x3522b
	.byte 0x00	@ 0003522b data
.org 0x3522c
	.byte 0x01,0x20,0x00,0x00	@ 0003522c data
.org 0x35230
	.byte 0x45,0x01,0x00,0x00	@ 00035230 data
.org 0x35234
	.byte 0x53,0x01,0x00,0x00	@ 00035234 data
.org 0x35238
	ldr r0, [pc, #60]	@ 00035238 0f48
.org 0x3523a
	adds r1, r4, r0	@ 0003523a 2118
.org 0x3523c
	ldrb r0, [r1, #0]	@ 0003523c 0878
.org 0x3523e
	subs r0, #1	@ 0003523e 0138
.org 0x35240
	strb r0, [r1, #0]	@ 00035240 0870
.org 0x35242
	lsls r0, r0, #24	@ 00035242 0006
.org 0x35244
	lsrs r0, r0, #24	@ 00035244 000e
.org 0x35246
	cmp r0, #255	@ 00035246 ff28
.org 0x35248
	bne.n 0x35272	@ 00035248 13d1
.org 0x3524a
	movs r1, #128	@ 0003524a 8021
.org 0x3524c
	lsls r1, r1, #1	@ 0003524c 4900
.org 0x3524e
	adds r0, r4, r1	@ 0003524e 6018
.org 0x35250
	strb r2, [r0, #0]	@ 00035250 0270
.org 0x35252
	movs r1, #128	@ 00035252 8021
.org 0x35254
	lsls r1, r1, #2	@ 00035254 8900
.org 0x35256
	adds r0, r4, #0	@ 00035256 201c
.org 0x35258
	adds r0, #113	@ 00035258 7130
.org 0x3525a
	movs r2, #0	@ 0003525a 0022
.org 0x3525c
	ldrsb r2, [r0, r2]	@ 0003525c 8256
.org 0x3525e
	lsls r2, r2, #16	@ 0003525e 1204
.org 0x35260
	lsrs r2, r2, #16	@ 00035260 120c
.org 0x35262
	adds r0, #1	@ 00035262 0130
.org 0x35264
	movs r3, #0	@ 00035264 0023
.org 0x35266
	ldrsb r3, [r0, r3]	@ 00035266 c356
.org 0x35268
	lsls r3, r3, #16	@ 00035268 1b04
