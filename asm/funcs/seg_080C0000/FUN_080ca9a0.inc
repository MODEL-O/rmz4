@ FUN_080ca9a0  entry 0x080ca9a0  size 278
.thumb
.org 0xca9a0
FUN_080ca9a0:
	push {r4, r5, r6, r7, lr}	@ 000ca9a0 f0b5
.org 0xca9a2
	mov r7, r8	@ 000ca9a2 4746
.org 0xca9a4
	push {r7}	@ 000ca9a4 80b4
.org 0xca9a6
	adds r6, r0, #0	@ 000ca9a6 061c
.org 0xca9a8
	ldrb r0, [r6, #16]	@ 000ca9a8 307c
.org 0xca9aa
	lsrs r7, r0, #1	@ 000ca9aa 4708
.org 0xca9ac
	adds r0, r6, #0	@ 000ca9ac 301c
.org 0xca9ae
	bl 0x1cc9c	@ 000ca9ae 52f775f9
.org 0xca9b2
	ldrb r1, [r6, #10]	@ 000ca9b2 b17a
.org 0xca9b4
	movs r0, #1	@ 000ca9b4 0120
.org 0xca9b6
	movs r2, #0	@ 000ca9b6 0022
.org 0xca9b8
	mov r8, r2	@ 000ca9b8 9046
.org 0xca9ba
	orrs r0, r1	@ 000ca9ba 0843
.org 0xca9bc
	movs r1, #2	@ 000ca9bc 0221
.org 0xca9be
	orrs r0, r1	@ 000ca9be 0843
.org 0xca9c0
	movs r5, #0	@ 000ca9c0 0025
.org 0xca9c2
	movs r1, #4	@ 000ca9c2 0421
.org 0xca9c4
	orrs r0, r1	@ 000ca9c4 0843
.org 0xca9c6
	strb r0, [r6, #10]	@ 000ca9c6 b072
.org 0xca9c8
	adds r4, r6, #0	@ 000ca9c8 341c
.org 0xca9ca
	adds r4, #116	@ 000ca9ca 7434
.org 0xca9cc
	ldr r1, [pc, #36]	@ 000ca9cc 0949
.org 0xca9ce
	adds r2, r6, #0	@ 000ca9ce 321c
.org 0xca9d0
	adds r2, #84	@ 000ca9d0 5432
.org 0xca9d2
	adds r0, r4, #0	@ 000ca9d2 201c
.org 0xca9d4
	movs r3, #255	@ 000ca9d4 ff23
.org 0xca9d6
	bl 0x5760	@ 000ca9d6 3af7c3fe
.org 0xca9da
	str r6, [r4, #44]	@ 000ca9da e662
.org 0xca9dc
	mov r0, r8	@ 000ca9dc 4046
.org 0xca9de
	str r0, [r4, #36]	@ 000ca9de 6062
.org 0xca9e0
	ldrb r0, [r6, #16]	@ 000ca9e0 307c
.org 0xca9e2
	movs r2, #1	@ 000ca9e2 0122
.org 0xca9e4
	ands r2, r0	@ 000ca9e4 0240
.org 0xca9e6
	cmp r2, #0	@ 000ca9e6 002a
.org 0xca9e8
	beq.n 0xca9f8	@ 000ca9e8 06d0
.org 0xca9ea
	ldrb r0, [r6, #10]	@ 000ca9ea b07a
.org 0xca9ec
	movs r1, #16	@ 000ca9ec 1021
.org 0xca9ee
	orrs r0, r1	@ 000ca9ee 0843
.org 0xca9f0
	b.n 0xca9fe	@ 000ca9f0 05e0
.org 0xca9f2
	.byte 0x00	@ 000ca9f2 data
.org 0xca9f3
	.byte 0x00	@ 000ca9f3 data
.org 0xca9f4
	.byte 0xe8,0x63,0x86,0x08	@ 000ca9f4 data
.org 0xca9f8
	ldrb r1, [r6, #10]	@ 000ca9f8 b17a
.org 0xca9fa
	movs r0, #239	@ 000ca9fa ef20
.org 0xca9fc
	ands r0, r1	@ 000ca9fc 0840
.org 0xca9fe
	strb r0, [r6, #10]	@ 000ca9fe b072
.org 0xcaa00
	adds r1, r2, #0	@ 000caa00 111c
.org 0xcaa02
	adds r0, r6, #0	@ 000caa02 301c
.org 0xcaa04
	adds r0, #76	@ 000caa04 4c30
.org 0xcaa06
	strb r1, [r0, #0]	@ 000caa06 0170
.org 0xcaa08
	adds r3, r6, #0	@ 000caa08 331c
.org 0xcaa0a
	adds r3, #74	@ 000caa0a 4a33
.org 0xcaa0c
	lsls r1, r1, #4	@ 000caa0c 0901
.org 0xcaa0e
	ldrb r2, [r3, #0]	@ 000caa0e 1a78
.org 0xcaa10
	movs r0, #17	@ 000caa10 1120
.org 0xcaa12
	negs r0, r0	@ 000caa12 4042
.org 0xcaa14
	ands r0, r2	@ 000caa14 1040
.org 0xcaa16
	orrs r0, r1	@ 000caa16 0843
.org 0xcaa18
	strb r0, [r3, #0]	@ 000caa18 1870
.org 0xcaa1a
	ldrb r1, [r6, #10]	@ 000caa1a b17a
.org 0xcaa1c
	movs r0, #16	@ 000caa1c 1020
.org 0xcaa1e
	ands r0, r1	@ 000caa1e 0840
.org 0xcaa20
	cmp r0, #0	@ 000caa20 0028
.org 0xcaa22
	bne.n 0xcaa38	@ 000caa22 09d1
.org 0xcaa24
	ldr r0, [pc, #12]	@ 000caa24 0348
.org 0xcaa26
	lsls r1, r7, #2	@ 000caa26 b900
.org 0xcaa28
	adds r1, r1, r0	@ 000caa28 0918
.org 0xcaa2a
	movs r2, #0	@ 000caa2a 0022
.org 0xcaa2c
	ldrsh r1, [r1, r2]	@ 000caa2c 895e
.org 0xcaa2e
	str r1, [r6, #92]	@ 000caa2e f165
.org 0xcaa30
	adds r2, r0, #0	@ 000caa30 021c
.org 0xcaa32
	b.n 0xcaa52	@ 000caa32 0ee0
.org 0xcaa34
	.byte 0x00,0x64,0x86,0x08	@ 000caa34 data
.org 0xcaa38
	ldr r0, [pc, #36]	@ 000caa38 0948
.org 0xcaa3a
	lsls r1, r7, #2	@ 000caa3a b900
.org 0xcaa3c
	adds r1, r1, r0	@ 000caa3c 0918
.org 0xcaa3e
	movs r2, #0	@ 000caa3e 0022
.org 0xcaa40
	ldrsh r1, [r1, r2]	@ 000caa40 895e
.org 0xcaa42
	lsls r1, r1, #8	@ 000caa42 0902
.org 0xcaa44
	negs r1, r1	@ 000caa44 4942
.org 0xcaa46
	adds r2, r0, #0	@ 000caa46 021c
.org 0xcaa48
	cmp r1, #0	@ 000caa48 0029
.org 0xcaa4a
	bge.n 0xcaa4e	@ 000caa4a 00da
.org 0xcaa4c
	adds r1, #255	@ 000caa4c ff31
.org 0xcaa4e
	asrs r0, r1, #8	@ 000caa4e 0812
.org 0xcaa50
	str r0, [r6, #92]	@ 000caa50 f065
.org 0xcaa52
	ldrb r0, [r6, #16]	@ 000caa52 307c
.org 0xcaa54
	cmp r0, #3	@ 000caa54 0328
.org 0xcaa56
	bhi.n 0xcaa64	@ 000caa56 05d8
.org 0xcaa58
	strb r0, [r6, #18]	@ 000caa58 b074
.org 0xcaa5a
	movs r0, #128	@ 000caa5a 8020
.org 0xcaa5c
	b.n 0xcaa6a	@ 000caa5c 05e0
.org 0xcaa5e
	.byte 0x00	@ 000caa5e data
.org 0xcaa5f
	.byte 0x00	@ 000caa5f data
.org 0xcaa60
	.byte 0x00,0x64,0x86,0x08	@ 000caa60 data
.org 0xcaa64
	movs r0, #255	@ 000caa64 ff20
.org 0xcaa66
	strb r0, [r6, #18]	@ 000caa66 b074
.org 0xcaa68
	movs r0, #80	@ 000caa68 5020
.org 0xcaa6a
	str r0, [r6, #104]	@ 000caa6a b066
.org 0xcaa6c
	movs r0, #3	@ 000caa6c 0320
.org 0xcaa6e
	ands r0, r7	@ 000caa6e 3840
.org 0xcaa70
	lsls r0, r0, #2	@ 000caa70 8000
.org 0xcaa72
	adds r1, r2, #2	@ 000caa72 911c
.org 0xcaa74
	adds r0, r0, r1	@ 000caa74 4018
.org 0xcaa76
	movs r1, #0	@ 000caa76 0021
.org 0xcaa78
	ldrsh r0, [r0, r1]	@ 000caa78 405e
.org 0xcaa7a
	str r0, [r6, #96]	@ 000caa7a 3066
.org 0xcaa7c
	ldr r1, [pc, #72]	@ 000caa7c 1249
.org 0xcaa7e
	lsls r0, r7, #1	@ 000caa7e 7800
.org 0xcaa80
	adds r0, r0, r1	@ 000caa80 4018
.org 0xcaa82
	ldrh r1, [r0, #0]	@ 000caa82 0188
.org 0xcaa84
	adds r0, r6, #0	@ 000caa84 301c
.org 0xcaa86
	bl 0x1cf00	@ 000caa86 52f73bfa
.org 0xcaa8a
	ldrb r0, [r6, #17]	@ 000caa8a 707c
.org 0xcaa8c
	cmp r0, #1	@ 000caa8c 0128
.org 0xcaa8e
	bne.n 0xcaaa4	@ 000caa8e 09d1
.org 0xcaa90
	ldr r1, [r6, #92]	@ 000caa90 f16d
.org 0xcaa92
	lsls r0, r1, #1	@ 000caa92 4800
.org 0xcaa94
	adds r0, r0, r1	@ 000caa94 4018
.org 0xcaa96
	lsls r0, r0, #7	@ 000caa96 c001
.org 0xcaa98
	subs r0, r0, r1	@ 000caa98 401a
.org 0xcaa9a
	cmp r0, #0	@ 000caa9a 0028
.org 0xcaa9c
	bge.n 0xcaaa0	@ 000caa9c 00da
.org 0xcaa9e
	adds r0, #255	@ 000caa9e ff30
.org 0xcaaa0
	asrs r0, r0, #8	@ 000caaa0 0012
.org 0xcaaa2
	str r0, [r6, #92]	@ 000caaa2 f065
.org 0xcaaa4
	ldr r1, [pc, #36]	@ 000caaa4 0949
.org 0xcaaa6
	ldrb r0, [r6, #9]	@ 000caaa6 707a
.org 0xcaaa8
	lsls r0, r0, #2	@ 000caaa8 8000
.org 0xcaaaa
	adds r0, r0, r1	@ 000caaaa 4018
.org 0xcaaac
	movs r1, #1	@ 000caaac 0121
.org 0xcaaae
	str r1, [r6, #12]	@ 000caaae f160
.org 0xcaab0
	ldr r0, [r0, #0]	@ 000caab0 0068
.org 0xcaab2
	ldr r0, [r0, #4]	@ 000caab2 4068
.org 0xcaab4
	str r0, [r6, #20]	@ 000caab4 7061
