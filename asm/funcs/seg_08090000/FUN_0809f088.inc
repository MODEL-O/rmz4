@ FUN_0809f088  entry 0x0809f088  size 146
.thumb
.org 0x9f088
FUN_0809f088:
	push {r4, lr}	@ 0009f088 10b5
.org 0x9f08a
	adds r4, r0, #0	@ 0009f08a 041c
.org 0x9f08c
	ldr r0, [pc, #52]	@ 0009f08c 0d48
.org 0x9f08e
	adds r1, r4, #0	@ 0009f08e 211c
.org 0x9f090
	adds r1, #84	@ 0009f090 5431
.org 0x9f092
	bl 0x1fb14	@ 0009f092 80f73ffd
.org 0x9f096
	lsrs r2, r0, #8	@ 0009f096 020a
.org 0x9f098
	adds r0, r4, #0	@ 0009f098 201c
.org 0x9f09a
	adds r0, #140	@ 0009f09a 8c30
.org 0x9f09c
	ldr r1, [r0, #0]	@ 0009f09c 0168
.org 0x9f09e
	movs r0, #128	@ 0009f09e 8020
.org 0x9f0a0
	lsls r0, r0, #2	@ 0009f0a0 8000
.org 0x9f0a2
	ands r1, r0	@ 0009f0a2 0140
.org 0x9f0a4
	cmp r1, #0	@ 0009f0a4 0029
.org 0x9f0a6
	beq.n 0x9f0cc	@ 0009f0a6 11d0
.org 0x9f0a8
	ldr r1, [pc, #28]	@ 0009f0a8 0749
.org 0x9f0aa
	ldrb r0, [r4, #9]	@ 0009f0aa 607a
.org 0x9f0ac
	lsls r0, r0, #2	@ 0009f0ac 8000
.org 0x9f0ae
	adds r0, r0, r1	@ 0009f0ae 4018
.org 0x9f0b0
	movs r1, #2	@ 0009f0b0 0221
.org 0x9f0b2
	str r1, [r4, #12]	@ 0009f0b2 e160
.org 0x9f0b4
	ldr r0, [r0, #0]	@ 0009f0b4 0068
.org 0x9f0b6
	ldr r0, [r0, #8]	@ 0009f0b6 8068
.org 0x9f0b8
	str r0, [r4, #20]	@ 0009f0b8 6061
.org 0x9f0ba
	adds r0, r4, #0	@ 0009f0ba 201c
.org 0x9f0bc
	bl 0x9f12c	@ 0009f0bc 00f036f8
.org 0x9f0c0
	b.n 0x9f124	@ 0009f0c0 30e0
.org 0x9f0c2
	.byte 0x00	@ 0009f0c2 data
.org 0x9f0c3
	.byte 0x00	@ 0009f0c3 data
.org 0x9f0c4
	.byte 0xf8,0xe9,0x02,0x02	@ 0009f0c4 data
.org 0x9f0c8
	.byte 0x40,0xdb,0x85,0x08	@ 0009f0c8 data
.org 0x9f0cc
	cmp r2, #32	@ 0009f0cc 202a
.org 0x9f0ce
	ble.n 0x9f0da	@ 0009f0ce 04dd
.org 0x9f0d0
	adds r0, r4, #0	@ 0009f0d0 201c
.org 0x9f0d2
	adds r0, #184	@ 0009f0d2 b830
.org 0x9f0d4
	strb r1, [r0, #0]	@ 0009f0d4 0170
.org 0x9f0d6
	strb r1, [r4, #18]	@ 0009f0d6 a174
.org 0x9f0d8
	b.n 0x9f124	@ 0009f0d8 24e0
.org 0x9f0da
	adds r1, r4, #0	@ 0009f0da 211c
.org 0x9f0dc
	adds r1, #184	@ 0009f0dc b831
.org 0x9f0de
	ldrb r0, [r1, #0]	@ 0009f0de 0878
.org 0x9f0e0
	cmp r0, #0	@ 0009f0e0 0028
.org 0x9f0e2
	bne.n 0x9f0f0	@ 0009f0e2 05d1
.org 0x9f0e4
	strb r0, [r4, #13]	@ 0009f0e4 6073
.org 0x9f0e6
	strb r0, [r4, #14]	@ 0009f0e6 a073
.org 0x9f0e8
	movs r0, #1	@ 0009f0e8 0120
.org 0x9f0ea
	strb r0, [r1, #0]	@ 0009f0ea 0870
.org 0x9f0ec
	movs r0, #98	@ 0009f0ec 6220
.org 0x9f0ee
	strb r0, [r4, #18]	@ 0009f0ee a074
.org 0x9f0f0
	adds r0, r4, #0	@ 0009f0f0 201c
.org 0x9f0f2
	bl 0x9f328	@ 0009f0f2 00f019f9
.org 0x9f0f6
	adds r0, r4, #0	@ 0009f0f6 201c
.org 0x9f0f8
	adds r0, #192	@ 0009f0f8 c030
.org 0x9f0fa
	ldr r0, [r0, #0]	@ 0009f0fa 0068
.org 0x9f0fc
	cmp r0, #0	@ 0009f0fc 0028
.org 0x9f0fe
	bne.n 0x9f118	@ 0009f0fe 0bd1
.org 0x9f100
	ldr r0, [pc, #16]	@ 0009f100 0448
.org 0x9f102
	ldrb r1, [r4, #13]	@ 0009f102 617b
.org 0x9f104
	lsls r1, r1, #2	@ 0009f104 8900
.org 0x9f106
	adds r1, r1, r0	@ 0009f106 0918
.org 0x9f108
	ldr r1, [r1, #0]	@ 0009f108 0968
.org 0x9f10a
	adds r0, r4, #0	@ 0009f10a 201c
.org 0x9f10c
	bl 0x128f80	@ 0009f10c 89f038ff
.org 0x9f110
	b.n 0x9f11e	@ 0009f110 05e0
.org 0x9f112
	.byte 0x00	@ 0009f112 data
.org 0x9f113
	.byte 0x00	@ 0009f113 data
.org 0x9f114
	.byte 0x3c,0x17,0x86,0x08	@ 0009f114 data
.org 0x9f118
	adds r0, r4, #0	@ 0009f118 201c
