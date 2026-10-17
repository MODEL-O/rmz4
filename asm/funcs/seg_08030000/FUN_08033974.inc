@ FUN_08033974  entry 0x08033974  size 288
.thumb
.org 0x33974
FUN_08033974:
	push {r4, r5, lr}	@ 00033974 30b5
.org 0x33976
	sub sp, #4	@ 00033976 81b0
.org 0x33978
	adds r4, r0, #0	@ 00033978 041c
.org 0x3397a
	movs r0, #129	@ 0003397a 8120
.org 0x3397c
	lsls r0, r0, #1	@ 0003397c 4000
.org 0x3397e
	adds r5, r4, r0	@ 0003397e 2518
.org 0x33980
	ldrb r0, [r5, #0]	@ 00033980 2878
.org 0x33982
	cmp r0, #0	@ 00033982 0028
.org 0x33984
	bne.n 0x339a0	@ 00033984 0cd1
.org 0x33986
	movs r1, #240	@ 00033986 f021
.org 0x33988
	lsls r1, r1, #4	@ 00033988 0901
.org 0x3398a
	adds r0, r4, #0	@ 0003398a 201c
.org 0x3398c
	bl 0x1cf00	@ 0003398c e9f7b8fa
.org 0x33990
	adds r0, r4, #0	@ 00033990 201c
.org 0x33992
	movs r1, #1	@ 00033992 0121
.org 0x33994
	bl 0x3c464	@ 00033994 08f066fd
.org 0x33998
	ldrb r0, [r5, #0]	@ 00033998 2878
.org 0x3399a
	adds r0, #1	@ 0003399a 0130
.org 0x3399c
	strb r0, [r5, #0]	@ 0003399c 2870
.org 0x3399e
	b.n 0x339cc	@ 0003399e 15e0
.org 0x339a0
	adds r0, r4, #0	@ 000339a0 201c
.org 0x339a2
	mov r1, sp	@ 000339a2 6946
.org 0x339a4
	bl 0x39fd8	@ 000339a4 06f018fb
.org 0x339a8
	lsls r0, r0, #24	@ 000339a8 0006
.org 0x339aa
	cmp r0, #0	@ 000339aa 0028
.org 0x339ac
	beq.n 0x339c2	@ 000339ac 09d0
.org 0x339ae
	mov r0, sp	@ 000339ae 6846
.org 0x339b0
	ldrb r0, [r0, #0]	@ 000339b0 0078
.org 0x339b2
	cmp r0, #1	@ 000339b2 0128
.org 0x339b4
	bne.n 0x339c2	@ 000339b4 05d1
.org 0x339b6
	movs r2, #163	@ 000339b6 a322
.org 0x339b8
	lsls r2, r2, #1	@ 000339b8 5200
.org 0x339ba
	adds r1, r4, r2	@ 000339ba a118
.org 0x339bc
	ldrb r0, [r1, #0]	@ 000339bc 0878
.org 0x339be
	adds r0, #1	@ 000339be 0130
.org 0x339c0
	strb r0, [r1, #0]	@ 000339c0 0870
.org 0x339c2
	movs r1, #240	@ 000339c2 f021
.org 0x339c4
	lsls r1, r1, #4	@ 000339c4 0901
.org 0x339c6
	adds r0, r4, #0	@ 000339c6 201c
.org 0x339c8
	bl 0x3a3b0	@ 000339c8 06f0f2fc
.org 0x339cc
	adds r0, r4, #0	@ 000339cc 201c
.org 0x339ce
	adds r0, #113	@ 000339ce 7130
.org 0x339d0
	ldrb r0, [r0, #0]	@ 000339d0 0078
.org 0x339d2
	lsls r0, r0, #24	@ 000339d2 0006
.org 0x339d4
	asrs r0, r0, #24	@ 000339d4 0016
.org 0x339d6
	cmp r0, #3	@ 000339d6 0328
.org 0x339d8
	ble.n 0x33a70	@ 000339d8 4add
.org 0x339da
	movs r1, #163	@ 000339da a321
.org 0x339dc
	lsls r1, r1, #1	@ 000339dc 4900
.org 0x339de
	adds r0, r4, r1	@ 000339de 6018
.org 0x339e0
	ldrb r0, [r0, #0]	@ 000339e0 0078
.org 0x339e2
	cmp r0, #1	@ 000339e2 0128
.org 0x339e4
	bls.n 0x33a70	@ 000339e4 44d9
.org 0x339e6
	movs r2, #150	@ 000339e6 9622
.org 0x339e8
	lsls r2, r2, #2	@ 000339e8 9200
.org 0x339ea
	adds r0, r4, r2	@ 000339ea a018
.org 0x339ec
	ldr r1, [r0, #0]	@ 000339ec 0168
.org 0x339ee
	movs r2, #64	@ 000339ee 4022
.org 0x339f0
	ands r1, r2	@ 000339f0 1140
.org 0x339f2
	adds r5, r0, #0	@ 000339f2 051c
.org 0x339f4
	cmp r1, #0	@ 000339f4 0029
.org 0x339f6
	beq.n 0x33a24	@ 000339f6 15d0
.org 0x339f8
	adds r0, r4, #0	@ 000339f8 201c
.org 0x339fa
	bl 0x3a68c	@ 000339fa 06f047fe
.org 0x339fe
	lsls r0, r0, #24	@ 000339fe 0006
.org 0x33a00
	cmp r0, #0	@ 00033a00 0028
.org 0x33a02
	beq.n 0x33a24	@ 00033a02 0fd0
.org 0x33a04
	ldr r0, [pc, #24]	@ 00033a04 0648
.org 0x33a06
	adds r2, r4, r0	@ 00033a06 2218
.org 0x33a08
	movs r1, #0	@ 00033a08 0021
.org 0x33a0a
	movs r0, #5	@ 00033a0a 0520
.org 0x33a0c
	strb r0, [r2, #0]	@ 00033a0c 1070
.org 0x33a0e
	movs r2, #129	@ 00033a0e 8122
.org 0x33a10
	lsls r2, r2, #1	@ 00033a10 5200
.org 0x33a12
	adds r0, r4, r2	@ 00033a12 a018
.org 0x33a14
	strb r1, [r0, #0]	@ 00033a14 0170
.org 0x33a16
	adds r0, r4, #0	@ 00033a16 201c
.org 0x33a18
	bl 0x33c2c	@ 00033a18 00f008f9
.org 0x33a1c
	b.n 0x33a70	@ 00033a1c 28e0
.org 0x33a1e
	.byte 0x00	@ 00033a1e data
.org 0x33a1f
	.byte 0x00	@ 00033a1f data
.org 0x33a20
	.byte 0x01,0x01,0x00,0x00	@ 00033a20 data
.org 0x33a24
	ldr r0, [r5, #0]	@ 00033a24 2868
.org 0x33a26
	movs r1, #128	@ 00033a26 8021
.org 0x33a28
	ands r0, r1	@ 00033a28 0840
.org 0x33a2a
	cmp r0, #0	@ 00033a2a 0028
.org 0x33a2c
	beq.n 0x33a58	@ 00033a2c 14d0
.org 0x33a2e
	adds r0, r4, #0	@ 00033a2e 201c
.org 0x33a30
	bl 0x3a6b4	@ 00033a30 06f040fe
.org 0x33a34
	lsls r0, r0, #24	@ 00033a34 0006
.org 0x33a36
	cmp r0, #0	@ 00033a36 0028
.org 0x33a38
	beq.n 0x33a58	@ 00033a38 0ed0
.org 0x33a3a
	ldr r0, [pc, #24]	@ 00033a3a 0648
.org 0x33a3c
	adds r2, r4, r0	@ 00033a3c 2218
.org 0x33a3e
	movs r1, #0	@ 00033a3e 0021
.org 0x33a40
	movs r0, #6	@ 00033a40 0620
.org 0x33a42
	strb r0, [r2, #0]	@ 00033a42 1070
.org 0x33a44
	movs r2, #129	@ 00033a44 8122
.org 0x33a46
	lsls r2, r2, #1	@ 00033a46 5200
.org 0x33a48
	adds r0, r4, r2	@ 00033a48 a018
.org 0x33a4a
	strb r1, [r0, #0]	@ 00033a4a 0170
.org 0x33a4c
	adds r0, r4, #0	@ 00033a4c 201c
.org 0x33a4e
	bl 0x33ca0	@ 00033a4e 00f027f9
.org 0x33a52
	b.n 0x33a70	@ 00033a52 0de0
.org 0x33a54
	.byte 0x01,0x01,0x00,0x00	@ 00033a54 data
.org 0x33a58
	ldr r0, [pc, #68]	@ 00033a58 1148
.org 0x33a5a
	adds r2, r4, r0	@ 00033a5a 2218
.org 0x33a5c
	movs r1, #0	@ 00033a5c 0021
.org 0x33a5e
	movs r0, #3	@ 00033a5e 0320
.org 0x33a60
	strb r0, [r2, #0]	@ 00033a60 1070
.org 0x33a62
	movs r2, #129	@ 00033a62 8122
.org 0x33a64
	lsls r2, r2, #1	@ 00033a64 5200
.org 0x33a66
	adds r0, r4, r2	@ 00033a66 a018
.org 0x33a68
	strb r1, [r0, #0]	@ 00033a68 0170
.org 0x33a6a
	adds r0, r4, #0	@ 00033a6a 201c
.org 0x33a6c
	bl 0x33aa4	@ 00033a6c 00f01af8
.org 0x33a70
	adds r0, r4, #0	@ 00033a70 201c
.org 0x33a72
	adds r0, #115	@ 00033a72 7330
.org 0x33a74
	ldrb r0, [r0, #0]	@ 00033a74 0078
.org 0x33a76
	cmp r0, #3	@ 00033a76 0328
.org 0x33a78
	bne.n 0x33a96	@ 00033a78 0dd1
.org 0x33a7a
	movs r0, #128	@ 00033a7a 8020
.org 0x33a7c
	lsls r0, r0, #1	@ 00033a7c 4000
.org 0x33a7e
	adds r1, r4, r0	@ 00033a7e 2118
.org 0x33a80
	movs r0, #0	@ 00033a80 0020
.org 0x33a82
	strb r0, [r1, #0]	@ 00033a82 0870
.org 0x33a84
	adds r0, r4, #0	@ 00033a84 201c
.org 0x33a86
	bl 0x2b7d8	@ 00033a86 f7f7a7fe
.org 0x33a8a
	adds r1, r0, #0	@ 00033a8a 011c
.org 0x33a8c
	lsls r1, r1, #16	@ 00033a8c 0904
.org 0x33a8e
	lsrs r1, r1, #16	@ 00033a8e 090c
.org 0x33a90
	adds r0, r4, #0	@ 00033a90 201c
.org 0x33a92
	bl 0x1cf00	@ 00033a92 e9f735fa
