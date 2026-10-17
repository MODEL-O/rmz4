@ FUN_08033f50  entry 0x08033f50  size 232
.thumb
.org 0x33f50
FUN_08033f50:
	push {r4, r5, r6, r7, lr}	@ 00033f50 f0b5
.org 0x33f52
	mov r7, r9	@ 00033f52 4f46
.org 0x33f54
	mov r6, r8	@ 00033f54 4646
.org 0x33f56
	push {r6, r7}	@ 00033f56 c0b4
.org 0x33f58
	adds r5, r0, #0	@ 00033f58 051c
.org 0x33f5a
	movs r0, #180	@ 00033f5a b420
.org 0x33f5c
	adds r0, r0, r5	@ 00033f5c 4019
.org 0x33f5e
	mov r8, r0	@ 00033f5e 8046
.org 0x33f60
	ldr r1, [pc, #96]	@ 00033f60 1849
.org 0x33f62
	adds r2, r5, r1	@ 00033f62 6a18
.org 0x33f64
	ldrb r0, [r2, #0]	@ 00033f64 1078
.org 0x33f66
	movs r1, #4	@ 00033f66 0421
.org 0x33f68
	orrs r0, r1	@ 00033f68 0843
.org 0x33f6a
	movs r1, #2	@ 00033f6a 0221
.org 0x33f6c
	orrs r0, r1	@ 00033f6c 0843
.org 0x33f6e
	strb r0, [r2, #0]	@ 00033f6e 1070
.org 0x33f70
	ldr r1, [pc, #84]	@ 00033f70 1549
.org 0x33f72
	movs r2, #171	@ 00033f72 ab22
.org 0x33f74
	lsls r2, r2, #1	@ 00033f74 5200
.org 0x33f76
	adds r6, r5, r2	@ 00033f76 ae18
.org 0x33f78
	ldrb r0, [r6, #0]	@ 00033f78 3078
.org 0x33f7a
	adds r0, r0, r1	@ 00033f7a 4018
.org 0x33f7c
	ldrb r0, [r0, #0]	@ 00033f7c 0078
.org 0x33f7e
	ldr r1, [pc, #76]	@ 00033f7e 1349
.org 0x33f80
	adds r7, r5, r1	@ 00033f80 6f18
.org 0x33f82
	movs r2, #0	@ 00033f82 0022
.org 0x33f84
	mov r9, r2	@ 00033f84 9146
.org 0x33f86
	strb r0, [r7, #0]	@ 00033f86 3870
.org 0x33f88
	ldr r4, [pc, #68]	@ 00033f88 114c
.org 0x33f8a
	ldrb r0, [r6, #0]	@ 00033f8a 3078
.org 0x33f8c
	lsls r0, r0, #1	@ 00033f8c 4000
.org 0x33f8e
	adds r0, r0, r4	@ 00033f8e 0019
.org 0x33f90
	ldrh r1, [r0, #0]	@ 00033f90 0188
.org 0x33f92
	adds r0, r5, #0	@ 00033f92 281c
.org 0x33f94
	bl 0x3a3b0	@ 00033f94 06f00cfa
.org 0x33f98
	ldrb r0, [r6, #0]	@ 00033f98 3078
.org 0x33f9a
	lsls r0, r0, #1	@ 00033f9a 4000
.org 0x33f9c
	adds r0, r0, r4	@ 00033f9c 0019
.org 0x33f9e
	ldrh r1, [r0, #0]	@ 00033f9e 0188
.org 0x33fa0
	adds r0, r5, #0	@ 00033fa0 281c
.org 0x33fa2
	bl 0x3a3f0	@ 00033fa2 06f025fa
.org 0x33fa6
	adds r0, r5, #0	@ 00033fa6 281c
.org 0x33fa8
	adds r0, #250	@ 00033fa8 fa30
.org 0x33faa
	ldrb r1, [r0, #0]	@ 00033faa 0178
.org 0x33fac
	adds r0, r1, #0	@ 00033fac 081c
.org 0x33fae
	cmp r0, #2	@ 00033fae 0228
.org 0x33fb0
	beq.n 0x33ff0	@ 00033fb0 1ed0
.org 0x33fb2
	cmp r0, #8	@ 00033fb2 0828
.org 0x33fb4
	beq.n 0x33fd8	@ 00033fb4 10d0
.org 0x33fb6
	mov r2, r8	@ 00033fb6 4246
.org 0x33fb8
	ldrb r0, [r2, #12]	@ 00033fb8 107b
.org 0x33fba
	cmp r0, #2	@ 00033fba 0228
.org 0x33fbc
	bne.n 0x33fd4	@ 00033fbc 0ad1
.org 0x33fbe
	strb r1, [r2, #12]	@ 00033fbe 1173
.org 0x33fc0
	b.n 0x33fd8	@ 00033fc0 0ae0
.org 0x33fc2
	.byte 0x00	@ 00033fc2 data
.org 0x33fc3
	.byte 0x00	@ 00033fc3 data
.org 0x33fc4
	.byte 0x53,0x01,0x00,0x00	@ 00033fc4 data
.org 0x33fc8
	.byte 0xbc,0x30,0x85,0x08	@ 00033fc8 data
.org 0x33fcc
	.byte 0x4f,0x01,0x00,0x00	@ 00033fcc data
.org 0x33fd0
	.byte 0xb4,0x30,0x85,0x08	@ 00033fd0 data
.org 0x33fd4
	mov r0, r8	@ 00033fd4 4046
.org 0x33fd6
	strb r1, [r0, #13]	@ 00033fd6 4173
.org 0x33fd8
	ldr r1, [pc, #16]	@ 00033fd8 0449
.org 0x33fda
	adds r2, r5, r1	@ 00033fda 6a18
.org 0x33fdc
	movs r1, #0	@ 00033fdc 0021
.org 0x33fde
	movs r0, #2	@ 00033fde 0220
.org 0x33fe0
	strb r0, [r2, #0]	@ 00033fe0 1070
.org 0x33fe2
	movs r2, #129	@ 00033fe2 8122
.org 0x33fe4
	lsls r2, r2, #1	@ 00033fe4 5200
.org 0x33fe6
	adds r0, r5, r2	@ 00033fe6 a818
.org 0x33fe8
	strb r1, [r0, #0]	@ 00033fe8 0170
.org 0x33fea
	b.n 0x34042	@ 00033fea 2ae0
.org 0x33fec
	.byte 0x01,0x01,0x00,0x00	@ 00033fec data
.org 0x33ff0
	adds r0, r5, #0	@ 00033ff0 281c
.org 0x33ff2
	movs r1, #0	@ 00033ff2 0021
.org 0x33ff4
	bl 0x2ca64	@ 00033ff4 f8f736fd
.org 0x33ff8
	lsls r0, r0, #24	@ 00033ff8 0006
.org 0x33ffa
	lsrs r2, r0, #24	@ 00033ffa 020e
.org 0x33ffc
	cmp r2, #0	@ 00033ffc 002a
.org 0x33ffe
	beq.n 0x34018	@ 00033ffe 0bd0
.org 0x34000
	movs r0, #255	@ 00034000 ff20
.org 0x34002
	strb r0, [r7, #0]	@ 00034002 3870
.org 0x34004
	movs r0, #3	@ 00034004 0320
.org 0x34006
	strb r0, [r5, #13]	@ 00034006 6873
.org 0x34008
	mov r0, r9	@ 00034008 4846
.org 0x3400a
	strb r0, [r5, #14]	@ 0003400a a873
.org 0x3400c
	strb r0, [r5, #15]	@ 0003400c e873
.org 0x3400e
	movs r1, #128	@ 0003400e 8021
.org 0x34010
	lsls r1, r1, #1	@ 00034010 4900
.org 0x34012
	adds r0, r5, r1	@ 00034012 6818
.org 0x34014
	mov r2, r9	@ 00034014 4a46
.org 0x34016
	b.n 0x34040	@ 00034016 13e0
.org 0x34018
	ldr r0, [pc, #52]	@ 00034018 0d48
.org 0x3401a
	adds r1, r5, r0	@ 0003401a 2918
.org 0x3401c
	ldrb r0, [r1, #0]	@ 0003401c 0878
.org 0x3401e
	subs r0, #1	@ 0003401e 0138
.org 0x34020
	strb r0, [r1, #0]	@ 00034020 0870
.org 0x34022
	movs r1, #255	@ 00034022 ff21
.org 0x34024
	lsls r0, r0, #24	@ 00034024 0006
.org 0x34026
	lsrs r0, r0, #24	@ 00034026 000e
.org 0x34028
	cmp r0, #255	@ 00034028 ff28
.org 0x3402a
	bne.n 0x34042	@ 0003402a 0ad1
.org 0x3402c
	ldrb r0, [r7, #0]	@ 0003402c 3878
.org 0x3402e
	orrs r0, r1	@ 0003402e 0843
.org 0x34030
	strb r0, [r7, #0]	@ 00034030 3870
.org 0x34032
	ldr r0, [pc, #32]	@ 00034032 0848
.org 0x34034
	adds r1, r5, r0	@ 00034034 2918
.org 0x34036
	movs r0, #4	@ 00034036 0420
