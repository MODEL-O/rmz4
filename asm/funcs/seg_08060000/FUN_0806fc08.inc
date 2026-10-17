@ FUN_0806fc08  entry 0x0806fc08  size 154
.thumb
.org 0x6fc08
FUN_0806fc08:
	push {r4, r5, r6, r7, lr}	@ 0006fc08 f0b5
.org 0x6fc0a
	mov r7, r8	@ 0006fc0a 4746
.org 0x6fc0c
	push {r7}	@ 0006fc0c 80b4
.org 0x6fc0e
	adds r4, r0, #0	@ 0006fc0e 041c
.org 0x6fc10
	bl 0x1cff0	@ 0006fc10 adf7eef9
.org 0x6fc14
	ldr r0, [pc, #88]	@ 0006fc14 1648
.org 0x6fc16
	ldrh r1, [r0, #8]	@ 0006fc16 0189
.org 0x6fc18
	movs r0, #8	@ 0006fc18 0820
.org 0x6fc1a
	ands r0, r1	@ 0006fc1a 0840
.org 0x6fc1c
	cmp r0, #0	@ 0006fc1c 0028
.org 0x6fc1e
	bne.n 0x6fcb2	@ 0006fc1e 48d1
.org 0x6fc20
	ldr r0, [pc, #80]	@ 0006fc20 1448
.org 0x6fc22
	ldr r0, [r0, #0]	@ 0006fc22 0068
.org 0x6fc24
	ldr r1, [r4, #84]	@ 0006fc24 616d
.org 0x6fc26
	ldr r0, [r0, #84]	@ 0006fc26 406d
.org 0x6fc28
	subs r1, r1, r0	@ 0006fc28 091a
.org 0x6fc2a
	mov r8, r1	@ 0006fc2a 8846
.org 0x6fc2c
	adds r5, r4, #0	@ 0006fc2c 251c
.org 0x6fc2e
	adds r5, #180	@ 0006fc2e b435
.org 0x6fc30
	ldr r0, [pc, #68]	@ 0006fc30 1148
.org 0x6fc32
	mov ip, r0	@ 0006fc32 8446
.org 0x6fc34
	movs r7, #4	@ 0006fc34 0427
.org 0x6fc36
	movs r6, #6	@ 0006fc36 0626
.org 0x6fc38
	mov r2, ip	@ 0006fc38 6246
.org 0x6fc3a
	ldr r1, [r2, #0]	@ 0006fc3a 1168
.org 0x6fc3c
	ldr r0, [pc, #60]	@ 0006fc3c 0f48
.org 0x6fc3e
	muls r0, r1	@ 0006fc3e 4843
.org 0x6fc40
	ldr r3, [pc, #60]	@ 0006fc40 0f4b
.org 0x6fc42
	adds r0, r0, r3	@ 0006fc42 c018
.org 0x6fc44
	lsls r0, r0, #1	@ 0006fc44 4000
.org 0x6fc46
	lsrs r1, r0, #1	@ 0006fc46 4108
.org 0x6fc48
	str r1, [r2, #0]	@ 0006fc48 1160
.org 0x6fc4a
	lsrs r2, r0, #17	@ 0006fc4a 420c
.org 0x6fc4c
	movs r0, #15	@ 0006fc4c 0f20
.org 0x6fc4e
	ands r2, r0	@ 0006fc4e 0240
.org 0x6fc50
	adds r3, r2, #0	@ 0006fc50 131c
.org 0x6fc52
	mov r1, r8	@ 0006fc52 4146
.org 0x6fc54
	cmp r1, #0	@ 0006fc54 0029
.org 0x6fc56
	bge.n 0x6fc5a	@ 0006fc56 00da
.org 0x6fc58
	negs r1, r1	@ 0006fc58 4942
.org 0x6fc5a
	ldr r0, [pc, #40]	@ 0006fc5a 0a48
.org 0x6fc5c
	cmp r1, r0	@ 0006fc5c 8142
.org 0x6fc5e
	bgt.n 0x6fc88	@ 0006fc5e 13dc
.org 0x6fc60
	cmp r2, #2	@ 0006fc60 022a
.org 0x6fc62
	bls.n 0x6fc8c	@ 0006fc62 13d9
.org 0x6fc64
	cmp r2, #12	@ 0006fc64 0c2a
.org 0x6fc66
	bhi.n 0x6fc90	@ 0006fc66 13d8
.org 0x6fc68
	movs r0, #5	@ 0006fc68 0520
.org 0x6fc6a
	strb r0, [r4, #13]	@ 0006fc6a 6073
.org 0x6fc6c
	b.n 0x6fc92	@ 0006fc6c 11e0
.org 0x6fc6e
	.byte 0x00	@ 0006fc6e data
.org 0x6fc6f
	.byte 0x00	@ 0006fc6f data
.org 0x6fc70
	.byte 0x10,0xe9,0x02,0x02	@ 0006fc70 data
.org 0x6fc74
	.byte 0xf0,0xdb,0x02,0x02	@ 0006fc74 data
.org 0x6fc78
	.byte 0x38,0xdc,0x02,0x02	@ 0006fc78 data
.org 0x6fc7c
	.byte 0xfd,0x43,0x03,0x00	@ 0006fc7c data
.org 0x6fc80
	.byte 0xc3,0x9e,0x26,0x00	@ 0006fc80 data
.org 0x6fc84
	.byte 0xff,0x27,0x00,0x00	@ 0006fc84 data
.org 0x6fc88
	cmp r3, #7	@ 0006fc88 072b
.org 0x6fc8a
	bhi.n 0x6fc90	@ 0006fc8a 01d8
.org 0x6fc8c
	strb r7, [r4, #13]	@ 0006fc8c 6773
.org 0x6fc8e
	b.n 0x6fc92	@ 0006fc8e 00e0
.org 0x6fc90
	strb r6, [r4, #13]	@ 0006fc90 6673
.org 0x6fc92
	adds r0, r5, #0	@ 0006fc92 281c
.org 0x6fc94
	ldrb r2, [r0, #21]	@ 0006fc94 427d
.org 0x6fc96
	adds r1, r2, #0	@ 0006fc96 111c
.org 0x6fc98
	ldrb r3, [r4, #13]	@ 0006fc98 637b
.org 0x6fc9a
	cmp r1, r3	@ 0006fc9a 9942
.org 0x6fc9c
	bne.n 0x6fca4	@ 0006fc9c 02d1
.org 0x6fc9e
	ldrb r0, [r0, #20]	@ 0006fc9e 007d
.org 0x6fca0
	cmp r0, r1	@ 0006fca0 8842
