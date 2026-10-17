@ FUN_0803d984  entry 0x0803d984  size 260
.thumb
.org 0x3d984
FUN_0803d984:
	push {r4, r5, r6, lr}	@ 0003d984 70b5
.org 0x3d986
	adds r5, r0, #0	@ 0003d986 051c
.org 0x3d988
	lsls r1, r1, #24	@ 0003d988 0906
.org 0x3d98a
	lsrs r4, r1, #24	@ 0003d98a 0c0e
.org 0x3d98c
	lsls r2, r2, #24	@ 0003d98c 1206
.org 0x3d98e
	lsrs r6, r2, #24	@ 0003d98e 160e
.org 0x3d990
	ldr r0, [pc, #72]	@ 0003d990 1248
.org 0x3d992
	bl 0x3a964	@ 0003d992 fcf7e7ff
.org 0x3d996
	ldr r0, [pc, #72]	@ 0003d996 1248
.org 0x3d998
	ldr r0, [r0, #0]	@ 0003d998 0068
.org 0x3d99a
	bl 0x5500	@ 0003d99a c7f7b1fd
.org 0x3d99e
	adds r2, r0, #0	@ 0003d99e 021c
.org 0x3d9a0
	cmp r2, #0	@ 0003d9a0 002a
.org 0x3d9a2
	bne.n 0x3d9a6	@ 0003d9a2 00d1
.org 0x3d9a4
	b.n 0x3dab0	@ 0003d9a4 84e0
.org 0x3d9a6
	cmp r4, #0	@ 0003d9a6 002c
.org 0x3d9a8
	bne.n 0x3da2c	@ 0003d9a8 40d1
.org 0x3d9aa
	adds r0, r5, #0	@ 0003d9aa 281c
.org 0x3d9ac
	adds r0, #248	@ 0003d9ac f830
.org 0x3d9ae
	ldrb r0, [r0, #0]	@ 0003d9ae 0078
.org 0x3d9b0
	cmp r0, #0	@ 0003d9b0 0028
.org 0x3d9b2
	bne.n 0x3d9f0	@ 0003d9b2 1dd1
.org 0x3d9b4
	ldr r1, [pc, #44]	@ 0003d9b4 0b49
.org 0x3d9b6
	movs r0, #3	@ 0003d9b6 0320
.org 0x3d9b8
	strb r0, [r2, #9]	@ 0003d9b8 5072
.org 0x3d9ba
	ldr r0, [r1, #12]	@ 0003d9ba c868
.org 0x3d9bc
	ldr r0, [r0, #0]	@ 0003d9bc 0068
.org 0x3d9be
	str r0, [r2, #20]	@ 0003d9be 5061
.org 0x3d9c0
	ldrb r1, [r2, #11]	@ 0003d9c0 d17a
.org 0x3d9c2
	movs r0, #191	@ 0003d9c2 bf20
.org 0x3d9c4
	ands r0, r1	@ 0003d9c4 0840
.org 0x3d9c6
	strb r0, [r2, #11]	@ 0003d9c6 d072
.org 0x3d9c8
	adds r1, r2, #0	@ 0003d9c8 111c
.org 0x3d9ca
	adds r1, #37	@ 0003d9ca 2531
.org 0x3d9cc
	movs r0, #16	@ 0003d9cc 1020
.org 0x3d9ce
	strb r0, [r1, #0]	@ 0003d9ce 0870
.org 0x3d9d0
	ldr r0, [pc, #20]	@ 0003d9d0 0548
.org 0x3d9d2
	ldrh r0, [r0, #0]	@ 0003d9d2 0088
.org 0x3d9d4
	strh r0, [r2, #32]	@ 0003d9d4 1084
.org 0x3d9d6
	ldr r0, [pc, #20]	@ 0003d9d6 0548
.org 0x3d9d8
	ldrb r0, [r0, #0]	@ 0003d9d8 0078
.org 0x3d9da
	b.n 0x3da16	@ 0003d9da 1ce0
.org 0x3d9dc
	.byte 0x3d,0xd9,0x03,0x08	@ 0003d9dc data
.org 0x3d9e0
	.byte 0x88,0xed,0x02,0x02	@ 0003d9e0 data
.org 0x3d9e4
	.byte 0xf8,0x39,0x85,0x08	@ 0003d9e4 data
.org 0x3d9e8
	.byte 0xfc,0x36,0x85,0x08	@ 0003d9e8 data
.org 0x3d9ec
	.byte 0x04,0x37,0x85,0x08	@ 0003d9ec data
.org 0x3d9f0
	ldr r1, [pc, #44]	@ 0003d9f0 0b49
.org 0x3d9f2
	movs r0, #3	@ 0003d9f2 0320
.org 0x3d9f4
	strb r0, [r2, #9]	@ 0003d9f4 5072
.org 0x3d9f6
	ldr r0, [r1, #12]	@ 0003d9f6 c868
.org 0x3d9f8
	ldr r0, [r0, #0]	@ 0003d9f8 0068
.org 0x3d9fa
	str r0, [r2, #20]	@ 0003d9fa 5061
.org 0x3d9fc
	ldrb r1, [r2, #11]	@ 0003d9fc d17a
.org 0x3d9fe
	movs r0, #191	@ 0003d9fe bf20
.org 0x3da00
	ands r0, r1	@ 0003da00 0840
.org 0x3da02
	strb r0, [r2, #11]	@ 0003da02 d072
.org 0x3da04
	adds r1, r2, #0	@ 0003da04 111c
.org 0x3da06
	adds r1, #37	@ 0003da06 2531
.org 0x3da08
	movs r0, #16	@ 0003da08 1020
.org 0x3da0a
	strb r0, [r1, #0]	@ 0003da0a 0870
.org 0x3da0c
	ldr r0, [pc, #20]	@ 0003da0c 0548
.org 0x3da0e
	ldrh r0, [r0, #0]	@ 0003da0e 0088
.org 0x3da10
	strh r0, [r2, #32]	@ 0003da10 1084
.org 0x3da12
	ldr r0, [pc, #20]	@ 0003da12 0548
.org 0x3da14
	ldrb r0, [r0, #1]	@ 0003da14 4078
.org 0x3da16
	subs r1, #3	@ 0003da16 0339
.org 0x3da18
	strb r0, [r1, #0]	@ 0003da18 0870
.org 0x3da1a
	movs r0, #0	@ 0003da1a 0020
.org 0x3da1c
	b.n 0x3da9c	@ 0003da1c 3ee0
.org 0x3da1e
	.byte 0x00	@ 0003da1e data
.org 0x3da1f
	.byte 0x00	@ 0003da1f data
.org 0x3da20
	.byte 0xf8,0x39,0x85,0x08	@ 0003da20 data
.org 0x3da24
	.byte 0xfc,0x36,0x85,0x08	@ 0003da24 data
.org 0x3da28
	.byte 0x04,0x37,0x85,0x08	@ 0003da28 data
.org 0x3da2c
	adds r0, r5, #0	@ 0003da2c 281c
.org 0x3da2e
	adds r0, #248	@ 0003da2e f830
.org 0x3da30
	ldrb r0, [r0, #0]	@ 0003da30 0078
.org 0x3da32
	cmp r0, #2	@ 0003da32 0228
.org 0x3da34
	bne.n 0x3da6c	@ 0003da34 1ad1
.org 0x3da36
	ldr r1, [pc, #40]	@ 0003da36 0a49
.org 0x3da38
	movs r0, #3	@ 0003da38 0320
.org 0x3da3a
	strb r0, [r2, #9]	@ 0003da3a 5072
.org 0x3da3c
	ldr r0, [r1, #12]	@ 0003da3c c868
.org 0x3da3e
	ldr r0, [r0, #0]	@ 0003da3e 0068
.org 0x3da40
	str r0, [r2, #20]	@ 0003da40 5061
.org 0x3da42
	ldrb r1, [r2, #11]	@ 0003da42 d17a
.org 0x3da44
	movs r0, #191	@ 0003da44 bf20
.org 0x3da46
	ands r0, r1	@ 0003da46 0840
.org 0x3da48
	strb r0, [r2, #11]	@ 0003da48 d072
.org 0x3da4a
	adds r1, r2, #0	@ 0003da4a 111c
.org 0x3da4c
	adds r1, #37	@ 0003da4c 2531
.org 0x3da4e
	movs r0, #16	@ 0003da4e 1020
.org 0x3da50
	strb r0, [r1, #0]	@ 0003da50 0870
.org 0x3da52
	ldr r0, [pc, #16]	@ 0003da52 0448
.org 0x3da54
	ldrh r0, [r0, #0]	@ 0003da54 0088
.org 0x3da56
	strh r0, [r2, #32]	@ 0003da56 1084
.org 0x3da58
	ldr r0, [pc, #12]	@ 0003da58 0348
.org 0x3da5a
	ldrb r0, [r0, #0]	@ 0003da5a 0078
.org 0x3da5c
	b.n 0x3da92	@ 0003da5c 19e0
.org 0x3da5e
	.byte 0x00	@ 0003da5e data
.org 0x3da5f
	.byte 0x00	@ 0003da5f data
.org 0x3da60
	.byte 0xf8,0x39,0x85,0x08	@ 0003da60 data
.org 0x3da64
	.byte 0xfc,0x36,0x85,0x08	@ 0003da64 data
.org 0x3da68
	.byte 0x04,0x37,0x85,0x08	@ 0003da68 data
.org 0x3da6c
	ldr r1, [pc, #72]	@ 0003da6c 1249
.org 0x3da6e
	movs r0, #3	@ 0003da6e 0320
.org 0x3da70
	strb r0, [r2, #9]	@ 0003da70 5072
.org 0x3da72
	ldr r0, [r1, #12]	@ 0003da72 c868
.org 0x3da74
	ldr r0, [r0, #0]	@ 0003da74 0068
.org 0x3da76
	str r0, [r2, #20]	@ 0003da76 5061
.org 0x3da78
	ldrb r1, [r2, #11]	@ 0003da78 d17a
.org 0x3da7a
	movs r0, #191	@ 0003da7a bf20
.org 0x3da7c
	ands r0, r1	@ 0003da7c 0840
.org 0x3da7e
	strb r0, [r2, #11]	@ 0003da7e d072
.org 0x3da80
	adds r1, r2, #0	@ 0003da80 111c
.org 0x3da82
	adds r1, #37	@ 0003da82 2531
.org 0x3da84
	movs r0, #16	@ 0003da84 1020
.org 0x3da86
	strb r0, [r1, #0]	@ 0003da86 0870
