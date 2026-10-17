@ FUN_0809e090  entry 0x0809e090  size 128
.thumb
.org 0x9e090
FUN_0809e090:
	push {r4, r5, r6, lr}	@ 0009e090 70b5
.org 0x9e092
	adds r4, r0, #0	@ 0009e092 041c
.org 0x9e094
	adds r5, r4, #0	@ 0009e094 251c
.org 0x9e096
	adds r5, #192	@ 0009e096 c035
.org 0x9e098
	ldr r0, [r5, #0]	@ 0009e098 2868
.org 0x9e09a
	cmp r0, #0	@ 0009e09a 0028
.org 0x9e09c
	bne.n 0x9e11c	@ 0009e09c 3ed1
.org 0x9e09e
	adds r0, r4, #0	@ 0009e09e 201c
.org 0x9e0a0
	adds r0, #140	@ 0009e0a0 8c30
.org 0x9e0a2
	ldr r0, [r0, #0]	@ 0009e0a2 0068
.org 0x9e0a4
	movs r6, #1	@ 0009e0a4 0126
.org 0x9e0a6
	ands r0, r6	@ 0009e0a6 3040
.org 0x9e0a8
	cmp r0, #0	@ 0009e0a8 0028
.org 0x9e0aa
	beq.n 0x9e11c	@ 0009e0aa 37d0
.org 0x9e0ac
	ldr r2, [pc, #36]	@ 0009e0ac 094a
.org 0x9e0ae
	movs r0, #0	@ 0009e0ae 0020
.org 0x9e0b0
	adds r1, r4, #0	@ 0009e0b0 211c
.org 0x9e0b2
	bl 0x2adac	@ 0009e0b2 8cf77bfe
.org 0x9e0b6
	adds r2, r0, #0	@ 0009e0b6 021c
.org 0x9e0b8
	str r2, [r5, #0]	@ 0009e0b8 2a60
.org 0x9e0ba
	cmp r2, #0	@ 0009e0ba 002a
.org 0x9e0bc
	beq.n 0x9e0e0	@ 0009e0bc 10d0
.org 0x9e0be
	adds r0, r4, #0	@ 0009e0be 201c
.org 0x9e0c0
	adds r0, #116	@ 0009e0c0 7430
.org 0x9e0c2
	ldr r1, [pc, #20]	@ 0009e0c2 0549
.org 0x9e0c4
	bl 0x5784	@ 0009e0c4 67f75efb
.org 0x9e0c8
	ldr r1, [pc, #16]	@ 0009e0c8 0449
.org 0x9e0ca
	adds r0, r4, #0	@ 0009e0ca 201c
.org 0x9e0cc
	bl 0x1cf00	@ 0009e0cc 7ef718ff
.org 0x9e0d0
	b.n 0x9e0fe	@ 0009e0d0 15e0
.org 0x9e0d2
	.byte 0x00	@ 0009e0d2 data
.org 0x9e0d3
	.byte 0x00	@ 0009e0d3 data
.org 0x9e0d4
	.byte 0x5c,0x15,0x86,0x08	@ 0009e0d4 data
.org 0x9e0d8
	.byte 0x34,0x15,0x86,0x08	@ 0009e0d8 data
.org 0x9e0dc
	.byte 0x05,0x6e,0x00,0x00	@ 0009e0dc data
.org 0x9e0e0
	ldr r0, [pc, #16]	@ 0009e0e0 0448
.org 0x9e0e2
	ldr r0, [r0, #0]	@ 0009e0e2 0068
.org 0x9e0e4
	ldr r1, [r4, #84]	@ 0009e0e4 616d
.org 0x9e0e6
	ldr r0, [r0, #84]	@ 0009e0e6 406d
.org 0x9e0e8
	cmp r1, r0	@ 0009e0e8 8142
.org 0x9e0ea
	ble.n 0x9e0f8	@ 0009e0ea 05dd
.org 0x9e0ec
	adds r0, r4, #0	@ 0009e0ec 201c
.org 0x9e0ee
	adds r0, #188	@ 0009e0ee bc30
.org 0x9e0f0
	strb r6, [r0, #0]	@ 0009e0f0 0670
.org 0x9e0f2
	b.n 0x9e0fe	@ 0009e0f2 04e0
.org 0x9e0f4
	.byte 0xf0,0xdb,0x02,0x02	@ 0009e0f4 data
.org 0x9e0f8
	adds r0, r4, #0	@ 0009e0f8 201c
.org 0x9e0fa
	adds r0, #188	@ 0009e0fa bc30
.org 0x9e0fc
	strb r2, [r0, #0]	@ 0009e0fc 0270
.org 0x9e0fe
	ldrb r0, [r4, #13]	@ 0009e0fe 607b
.org 0x9e100
	subs r0, #2	@ 0009e100 0238
.org 0x9e102
	lsls r0, r0, #24	@ 0009e102 0006
.org 0x9e104
	lsrs r0, r0, #24	@ 0009e104 000e
.org 0x9e106
	cmp r0, #1	@ 0009e106 0128
.org 0x9e108
	bhi.n 0x9e10e	@ 0009e108 01d8
.org 0x9e10a
	movs r0, #180	@ 0009e10a b420
.org 0x9e10c
	strb r0, [r4, #18]	@ 0009e10c a074
.org 0x9e10e
	movs r0, #0	@ 0009e10e 0020
