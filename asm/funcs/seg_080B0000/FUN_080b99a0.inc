@ FUN_080b99a0  entry 0x080b99a0  size 156
.thumb
.org 0xb99a0
FUN_080b99a0:
	push {r4, r5, lr}	@ 000b99a0 30b5
.org 0xb99a2
	adds r4, r0, #0	@ 000b99a2 041c
.org 0xb99a4
	ldrb r5, [r4, #14]	@ 000b99a4 a57b
.org 0xb99a6
	cmp r5, #0	@ 000b99a6 002d
.org 0xb99a8
	bne.n 0xb99ec	@ 000b99a8 20d1
.org 0xb99aa
	bl 0x1ce54	@ 000b99aa 63f753fa
.org 0xb99ae
	adds r0, r4, #0	@ 000b99ae 201c
.org 0xb99b0
	adds r0, #140	@ 000b99b0 8c30
.org 0xb99b2
	str r5, [r0, #0]	@ 000b99b2 0560
.org 0xb99b4
	adds r0, #4	@ 000b99b4 0430
.org 0xb99b6
	str r5, [r0, #0]	@ 000b99b6 0560
.org 0xb99b8
	adds r0, #4	@ 000b99b8 0430
.org 0xb99ba
	strb r5, [r0, #0]	@ 000b99ba 0570
.org 0xb99bc
	ldrb r1, [r4, #10]	@ 000b99bc a17a
.org 0xb99be
	movs r0, #251	@ 000b99be fb20
.org 0xb99c0
	ands r0, r1	@ 000b99c0 0840
.org 0xb99c2
	movs r1, #1	@ 000b99c2 0121
.org 0xb99c4
	orrs r0, r1	@ 000b99c4 0843
.org 0xb99c6
	strb r0, [r4, #10]	@ 000b99c6 a072
.org 0xb99c8
	ldr r1, [pc, #112]	@ 000b99c8 1c49
.org 0xb99ca
	adds r0, r4, #0	@ 000b99ca 201c
.org 0xb99cc
	bl 0x1cf00	@ 000b99cc 63f798fa
.org 0xb99d0
	movs r0, #40	@ 000b99d0 2820
.org 0xb99d2
	strb r0, [r4, #19]	@ 000b99d2 e074
.org 0xb99d4
	movs r0, #1	@ 000b99d4 0120
.org 0xb99d6
	strb r0, [r4, #18]	@ 000b99d6 a074
.org 0xb99d8
	ldrb r0, [r4, #14]	@ 000b99d8 a07b
.org 0xb99da
	adds r0, #1	@ 000b99da 0130
.org 0xb99dc
	strb r0, [r4, #14]	@ 000b99dc a073
.org 0xb99de
	adds r0, r4, #0	@ 000b99de 201c
.org 0xb99e0
	adds r0, #80	@ 000b99e0 5030
.org 0xb99e2
	movs r1, #128	@ 000b99e2 8021
.org 0xb99e4
	lsls r1, r1, #1	@ 000b99e4 4900
.org 0xb99e6
	strh r1, [r0, #0]	@ 000b99e6 0180
.org 0xb99e8
	adds r0, #2	@ 000b99e8 0230
.org 0xb99ea
	strh r1, [r0, #0]	@ 000b99ea 0180
.org 0xb99ec
	ldrb r0, [r4, #19]	@ 000b99ec e07c
.org 0xb99ee
	movs r1, #3	@ 000b99ee 0321
.org 0xb99f0
	ands r0, r1	@ 000b99f0 0840
.org 0xb99f2
	cmp r0, #0	@ 000b99f2 0028
.org 0xb99f4
	bne.n 0xb9a18	@ 000b99f4 10d1
.org 0xb99f6
	adds r0, r4, #0	@ 000b99f6 201c
.org 0xb99f8
	adds r0, #84	@ 000b99f8 5430
.org 0xb99fa
	ldrb r1, [r4, #18]	@ 000b99fa a17c
.org 0xb99fc
	ldrb r2, [r4, #10]	@ 000b99fc a27a
.org 0xb99fe
	lsrs r2, r2, #4	@ 000b99fe 1209
.org 0xb9a00
	movs r5, #1	@ 000b9a00 0125
.org 0xb9a02
	ands r2, r5	@ 000b9a02 2a40
.org 0xb9a04
	bl 0xe67ac	@ 000b9a04 2cf0d2fe
.org 0xb9a08
	ldrb r0, [r4, #18]	@ 000b9a08 a07c
.org 0xb9a0a
	adds r0, #1	@ 000b9a0a 0130
.org 0xb9a0c
	strb r0, [r4, #18]	@ 000b9a0c a074
.org 0xb9a0e
	lsls r0, r0, #24	@ 000b9a0e 0006
.org 0xb9a10
	lsrs r0, r0, #24	@ 000b9a10 000e
.org 0xb9a12
	cmp r0, #5	@ 000b9a12 0528
.org 0xb9a14
	bls.n 0xb9a18	@ 000b9a14 00d9
.org 0xb9a16
	strb r5, [r4, #18]	@ 000b9a16 a574
.org 0xb9a18
	adds r0, r4, #0	@ 000b9a18 201c
.org 0xb9a1a
	bl 0xb9e18	@ 000b9a1a 00f0fdf9
.org 0xb9a1e
	lsls r0, r0, #24	@ 000b9a1e 0006
.org 0xb9a20
	cmp r0, #0	@ 000b9a20 0028
.org 0xb9a22
	beq.n 0xb9a36	@ 000b9a22 08d0
.org 0xb9a24
	ldr r1, [pc, #24]	@ 000b9a24 0649
.org 0xb9a26
	ldrb r0, [r4, #9]	@ 000b9a26 607a
.org 0xb9a28
	lsls r0, r0, #2	@ 000b9a28 8000
.org 0xb9a2a
	adds r0, r0, r1	@ 000b9a2a 4018
.org 0xb9a2c
	movs r1, #4	@ 000b9a2c 0421
.org 0xb9a2e
	str r1, [r4, #12]	@ 000b9a2e e160
.org 0xb9a30
	ldr r0, [r0, #0]	@ 000b9a30 0068
.org 0xb9a32
	ldr r0, [r0, #16]	@ 000b9a32 0069
.org 0xb9a34
	str r0, [r4, #20]	@ 000b9a34 6061
.org 0xb9a36
	pop {r4, r5}	@ 000b9a36 30bc
.org 0xb9a38
	pop {r0}	@ 000b9a38 01bc
.org 0xb9a3a
	bx r0	@ 000b9a3a 0047
