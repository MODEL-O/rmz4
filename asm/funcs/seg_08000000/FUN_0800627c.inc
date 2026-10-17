@ FUN_0800627c  entry 0x0800627c  size 98
.thumb
.org 0x627c
FUN_0800627c:
	push {r4, r5, r6, lr}	@ 0000627c 70b5
.org 0x627e
	movs r2, #0	@ 0000627e 0022
.org 0x6280
	ldr r5, [pc, #64]	@ 00006280 104d
.org 0x6282
	movs r0, #194	@ 00006282 c220
.org 0x6284
	lsls r0, r0, #3	@ 00006284 c000
.org 0x6286
	adds r6, r5, r0	@ 00006286 2e18
.org 0x6288
	ldrb r1, [r5, #1]	@ 00006288 6978
.org 0x628a
	asrs r1, r2	@ 0000628a 1141
.org 0x628c
	movs r0, #1	@ 0000628c 0120
.org 0x628e
	ands r1, r0	@ 0000628e 0140
.org 0x6290
	adds r4, r2, #1	@ 00006290 541c
.org 0x6292
	cmp r1, #0	@ 00006292 0029
.org 0x6294
	beq.n 0x62dc	@ 00006294 22d0
.org 0x6296
	lsls r0, r2, #2	@ 00006296 9000
.org 0x6298
	adds r0, r0, r6	@ 00006298 8019
.org 0x629a
	ldr r3, [r0, #0]	@ 0000629a 0368
.org 0x629c
	cmp r3, #0	@ 0000629c 002b
.org 0x629e
	beq.n 0x62dc	@ 0000629e 1dd0
.org 0x62a0
	ldr r1, [r3, #8]	@ 000062a0 9968
.org 0x62a2
	adds r1, #35	@ 000062a2 2331
.org 0x62a4
	ldrb r2, [r1, #0]	@ 000062a4 0a78
.org 0x62a6
	movs r0, #15	@ 000062a6 0f20
.org 0x62a8
	ands r0, r2	@ 000062a8 1040
.org 0x62aa
	strb r0, [r1, #0]	@ 000062aa 0870
.org 0x62ac
	ldr r2, [r3, #8]	@ 000062ac 9a68
.org 0x62ae
	movs r1, #48	@ 000062ae 3021
.org 0x62b0
	ldrsh r0, [r2, r1]	@ 000062b0 505e
.org 0x62b2
	cmp r0, #0	@ 000062b2 0028
.org 0x62b4
	beq.n 0x62cc	@ 000062b4 0ad0
.org 0x62b6
	movs r0, #0	@ 000062b6 0020
.org 0x62b8
	strh r0, [r2, #48]	@ 000062b8 1086
.org 0x62ba
	ldr r2, [r3, #8]	@ 000062ba 9a68
.org 0x62bc
	ldr r0, [r2, #24]	@ 000062bc 9069
.org 0x62be
	ldr r1, [pc, #8]	@ 000062be 0249
.org 0x62c0
	b.n 0x62d2	@ 000062c0 07e0
.org 0x62c2
	.byte 0x00	@ 000062c2 data
.org 0x62c3
	.byte 0x00	@ 000062c3 data
.org 0x62c4
	.byte 0xe0,0x32,0x00,0x03	@ 000062c4 data
.org 0x62c8
	.byte 0x01,0x02,0x00,0x00	@ 000062c8 data
.org 0x62cc
	ldr r0, [r2, #24]	@ 000062cc 9069
.org 0x62ce
	movs r1, #128	@ 000062ce 8021
.org 0x62d0
	lsls r1, r1, #2	@ 000062d0 8900
.org 0x62d2
	orrs r0, r1	@ 000062d2 0843
.org 0x62d4
	str r0, [r2, #24]	@ 000062d4 9061
.org 0x62d6
	ldr r3, [r3, #0]	@ 000062d6 1b68
.org 0x62d8
	cmp r3, #0	@ 000062d8 002b
.org 0x62da
	bne.n 0x62a0	@ 000062da e1d1
.org 0x62dc
	adds r2, r4, #0	@ 000062dc 221c
