@ FUN_08036a0c  entry 0x08036a0c  size 188
.thumb
.org 0x36a0c
FUN_08036a0c:
	push {r4, r5, lr}	@ 00036a0c 30b5
.org 0x36a0e
	adds r4, r0, #0	@ 00036a0e 041c
.org 0x36a10
	adds r0, #180	@ 00036a10 b430
.org 0x36a12
	ldrb r0, [r0, #19]	@ 00036a12 c07c
.org 0x36a14
	cmp r0, #3	@ 00036a14 0328
.org 0x36a16
	bls.n 0x36a34	@ 00036a16 0dd9
.org 0x36a18
	ldr r1, [pc, #16]	@ 00036a18 0449
.org 0x36a1a
	adds r0, r4, #0	@ 00036a1a 201c
.org 0x36a1c
	bl 0x1cf00	@ 00036a1c e6f770fa
.org 0x36a20
	ldr r0, [pc, #12]	@ 00036a20 0348
.org 0x36a22
	adds r1, r4, r0	@ 00036a22 2118
.org 0x36a24
	movs r0, #0	@ 00036a24 0020
.org 0x36a26
	strb r0, [r1, #0]	@ 00036a26 0870
.org 0x36a28
	b.n 0x36ad6	@ 00036a28 55e0
.org 0x36a2a
	.byte 0x00	@ 00036a2a data
.org 0x36a2b
	.byte 0x00	@ 00036a2b data
.org 0x36a2c
	.byte 0x02,0x2b,0x00,0x00	@ 00036a2c data
.org 0x36a30
	.byte 0x57,0x01,0x00,0x00	@ 00036a30 data
.org 0x36a34
	movs r1, #150	@ 00036a34 9621
.org 0x36a36
	lsls r1, r1, #2	@ 00036a36 8900
.org 0x36a38
	adds r0, r4, r1	@ 00036a38 6018
.org 0x36a3a
	ldr r1, [r0, #0]	@ 00036a3a 0168
.org 0x36a3c
	movs r0, #64	@ 00036a3c 4020
.org 0x36a3e
	ands r0, r1	@ 00036a3e 0840
.org 0x36a40
	cmp r0, #0	@ 00036a40 0028
.org 0x36a42
	beq.n 0x36a80	@ 00036a42 1dd0
.org 0x36a44
	movs r0, #48	@ 00036a44 3020
.org 0x36a46
	ands r1, r0	@ 00036a46 0140
.org 0x36a48
	cmp r1, #0	@ 00036a48 0029
.org 0x36a4a
	beq.n 0x36a68	@ 00036a4a 0dd0
.org 0x36a4c
	ldr r1, [pc, #16]	@ 00036a4c 0449
.org 0x36a4e
	adds r0, r4, #0	@ 00036a4e 201c
.org 0x36a50
	bl 0x1cf00	@ 00036a50 e6f756fa
.org 0x36a54
	ldr r0, [pc, #12]	@ 00036a54 0348
.org 0x36a56
	adds r1, r4, r0	@ 00036a56 2118
.org 0x36a58
	movs r0, #1	@ 00036a58 0120
.org 0x36a5a
	strb r0, [r1, #0]	@ 00036a5a 0870
.org 0x36a5c
	b.n 0x36ad6	@ 00036a5c 3be0
.org 0x36a5e
	.byte 0x00	@ 00036a5e data
.org 0x36a5f
	.byte 0x00	@ 00036a5f data
.org 0x36a60
	.byte 0x01,0x2b,0x00,0x00	@ 00036a60 data
.org 0x36a64
	.byte 0x57,0x01,0x00,0x00	@ 00036a64 data
.org 0x36a68
	movs r1, #172	@ 00036a68 ac21
.org 0x36a6a
	lsls r1, r1, #6	@ 00036a6a 8901
.org 0x36a6c
	adds r0, r4, #0	@ 00036a6c 201c
.org 0x36a6e
	bl 0x1cf00	@ 00036a6e e6f747fa
.org 0x36a72
	ldr r0, [pc, #8]	@ 00036a72 0248
.org 0x36a74
	adds r1, r4, r0	@ 00036a74 2118
.org 0x36a76
	movs r0, #3	@ 00036a76 0320
.org 0x36a78
	strb r0, [r1, #0]	@ 00036a78 0870
.org 0x36a7a
	b.n 0x36ad6	@ 00036a7a 2ce0
.org 0x36a7c
	.byte 0x57,0x01,0x00,0x00	@ 00036a7c data
.org 0x36a80
	movs r5, #128	@ 00036a80 8025
.org 0x36a82
	ands r5, r1	@ 00036a82 0d40
.org 0x36a84
	cmp r5, #0	@ 00036a84 002d
.org 0x36a86
	beq.n 0x36ac8	@ 00036a86 1fd0
.org 0x36a88
	movs r0, #48	@ 00036a88 3020
.org 0x36a8a
	ands r1, r0	@ 00036a8a 0140
.org 0x36a8c
	cmp r1, #0	@ 00036a8c 0029
.org 0x36a8e
	beq.n 0x36aac	@ 00036a8e 0dd0
.org 0x36a90
	ldr r1, [pc, #16]	@ 00036a90 0449
.org 0x36a92
	adds r0, r4, #0	@ 00036a92 201c
.org 0x36a94
	bl 0x1cf00	@ 00036a94 e6f734fa
.org 0x36a98
	ldr r0, [pc, #12]	@ 00036a98 0348
.org 0x36a9a
	adds r1, r4, r0	@ 00036a9a 2118
.org 0x36a9c
	movs r0, #2	@ 00036a9c 0220
.org 0x36a9e
	strb r0, [r1, #0]	@ 00036a9e 0870
.org 0x36aa0
	b.n 0x36ad6	@ 00036aa0 19e0
.org 0x36aa2
	.byte 0x00	@ 00036aa2 data
.org 0x36aa3
	.byte 0x00	@ 00036aa3 data
.org 0x36aa4
	.byte 0x03,0x2b,0x00,0x00	@ 00036aa4 data
.org 0x36aa8
	.byte 0x57,0x01,0x00,0x00	@ 00036aa8 data
.org 0x36aac
	ldr r1, [pc, #16]	@ 00036aac 0449
.org 0x36aae
	adds r0, r4, #0	@ 00036aae 201c
.org 0x36ab0
	bl 0x1cf00	@ 00036ab0 e6f726fa
.org 0x36ab4
	ldr r0, [pc, #12]	@ 00036ab4 0348
.org 0x36ab6
	adds r1, r4, r0	@ 00036ab6 2118
.org 0x36ab8
	movs r0, #4	@ 00036ab8 0420
.org 0x36aba
	strb r0, [r1, #0]	@ 00036aba 0870
.org 0x36abc
	b.n 0x36ad6	@ 00036abc 0be0
.org 0x36abe
	.byte 0x00	@ 00036abe data
.org 0x36abf
	.byte 0x00	@ 00036abf data
.org 0x36ac0
	.byte 0x04,0x2b,0x00,0x00	@ 00036ac0 data
.org 0x36ac4
	.byte 0x57,0x01,0x00,0x00	@ 00036ac4 data
