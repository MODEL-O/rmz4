@ FUN_080889a8  entry 0x080889a8  size 202
.thumb
.org 0x889a8
FUN_080889a8:
	push {r4, r5, r6, r7, lr}	@ 000889a8 f0b5
.org 0x889aa
	sub sp, #16	@ 000889aa 84b0
.org 0x889ac
	adds r7, r0, #0	@ 000889ac 071c
.org 0x889ae
	ldrb r1, [r7, #10]	@ 000889ae b97a
.org 0x889b0
	movs r0, #254	@ 000889b0 fe20
.org 0x889b2
	ands r0, r1	@ 000889b2 0840
.org 0x889b4
	strb r0, [r7, #10]	@ 000889b4 b872
.org 0x889b6
	ldr r6, [pc, #120]	@ 000889b6 1e4e
.org 0x889b8
	ldr r0, [r6, #0]	@ 000889b8 3068
.org 0x889ba
	ldr r5, [pc, #120]	@ 000889ba 1e4d
.org 0x889bc
	muls r0, r5	@ 000889bc 6843
.org 0x889be
	ldr r2, [pc, #120]	@ 000889be 1e4a
.org 0x889c0
	adds r0, r0, r2	@ 000889c0 8018
.org 0x889c2
	lsls r0, r0, #1	@ 000889c2 4000
.org 0x889c4
	lsrs r4, r0, #1	@ 000889c4 4408
.org 0x889c6
	lsrs r0, r0, #17	@ 000889c6 400c
.org 0x889c8
	movs r3, #7	@ 000889c8 0723
.org 0x889ca
	ands r0, r3	@ 000889ca 1840
.org 0x889cc
	subs r0, #3	@ 000889cc 0338
.org 0x889ce
	lsls r0, r0, #8	@ 000889ce 0002
.org 0x889d0
	ldr r1, [r7, #84]	@ 000889d0 796d
.org 0x889d2
	adds r1, r1, r0	@ 000889d2 0918
.org 0x889d4
	str r1, [sp, #0]	@ 000889d4 0091
.org 0x889d6
	adds r0, r4, #0	@ 000889d6 201c
.org 0x889d8
	muls r0, r5	@ 000889d8 6843
.org 0x889da
	adds r0, r0, r2	@ 000889da 8018
.org 0x889dc
	lsls r0, r0, #1	@ 000889dc 4000
.org 0x889de
	lsrs r1, r0, #1	@ 000889de 4108
.org 0x889e0
	str r1, [r6, #0]	@ 000889e0 3160
.org 0x889e2
	lsrs r0, r0, #17	@ 000889e2 400c
.org 0x889e4
	ands r0, r3	@ 000889e4 1840
.org 0x889e6
	subs r0, #3	@ 000889e6 0338
.org 0x889e8
	lsls r0, r0, #8	@ 000889e8 0002
.org 0x889ea
	ldr r1, [r7, #88]	@ 000889ea b96d
.org 0x889ec
	adds r1, r1, r0	@ 000889ec 0918
.org 0x889ee
	str r1, [sp, #4]	@ 000889ee 0191
.org 0x889f0
	movs r0, #1	@ 000889f0 0120
.org 0x889f2
	mov r1, sp	@ 000889f2 6946
.org 0x889f4
	bl 0xd0c88	@ 000889f4 48f048f9
.org 0x889f8
	adds r0, r7, #0	@ 000889f8 381c
.org 0x889fa
	bl 0x88d18	@ 000889fa 00f08df9
.org 0x889fe
	ldr r0, [pc, #60]	@ 000889fe 0f48
.org 0x88a00
	ldr r1, [pc, #60]	@ 00088a00 0f49
.org 0x88a02
	adds r0, r0, r1	@ 00088a02 4018
.org 0x88a04
	ldr r1, [r7, #88]	@ 00088a04 b96d
.org 0x88a06
	ldr r0, [r0, #0]	@ 00088a06 0068
.org 0x88a08
	cmp r1, r0	@ 00088a08 8142
.org 0x88a0a
	ble.n 0x88a44	@ 00088a0a 1bdd
.org 0x88a0c
	movs r0, #49	@ 00088a0c 3120
.org 0x88a0e
	bl 0x2b10	@ 00088a0e 7af77ff8
.org 0x88a12
	movs r0, #128	@ 00088a12 8020
.org 0x88a14
	lsls r0, r0, #4	@ 00088a14 0001
.org 0x88a16
	str r0, [sp, #8]	@ 00088a16 0290
.org 0x88a18
	add r1, sp, #8	@ 00088a18 02a9
.org 0x88a1a
	movs r0, #0	@ 00088a1a 0020
.org 0x88a1c
	str r0, [r1, #4]	@ 00088a1c 4860
.org 0x88a1e
	adds r4, r7, #0	@ 00088a1e 3c1c
.org 0x88a20
	adds r4, #84	@ 00088a20 5434
.org 0x88a22
	adds r0, r4, #0	@ 00088a22 201c
.org 0x88a24
	movs r2, #3	@ 00088a24 0322
.org 0x88a26
	movs r3, #4	@ 00088a26 0423
.org 0x88a28
	bl 0x88ff0	@ 00088a28 00f0e2fa
.org 0x88a2c
	b.n 0x88a4e	@ 00088a2c 0fe0
.org 0x88a2e
	.byte 0x00	@ 00088a2e data
.org 0x88a2f
	.byte 0x00	@ 00088a2f data
.org 0x88a30
	.byte 0x38,0xdc,0x02,0x02	@ 00088a30 data
.org 0x88a34
	.byte 0xfd,0x43,0x03,0x00	@ 00088a34 data
.org 0x88a38
	.byte 0xc3,0x9e,0x26,0x00	@ 00088a38 data
.org 0x88a3c
	.byte 0xb0,0x0a,0x00,0x02	@ 00088a3c data
.org 0x88a40
	.byte 0x0c,0xc0,0x02,0x00	@ 00088a40 data
.org 0x88a44
	movs r0, #42	@ 00088a44 2a20
.org 0x88a46
	bl 0x2b10	@ 00088a46 7af763f8
.org 0x88a4a
	adds r4, r7, #0	@ 00088a4a 3c1c
.org 0x88a4c
	adds r4, #84	@ 00088a4c 5434
.org 0x88a4e
	adds r2, r4, #0	@ 00088a4e 221c
.org 0x88a50
	movs r0, #4	@ 00088a50 0420
.org 0x88a52
	movs r1, #47	@ 00088a52 2f21
.org 0x88a54
	bl 0x2ab88	@ 00088a54 a2f798f8
.org 0x88a58
	ldr r2, [pc, #44]	@ 00088a58 0b4a
.org 0x88a5a
	ldrh r1, [r2, #12]	@ 00088a5a 9189
.org 0x88a5c
	ldr r0, [pc, #44]	@ 00088a5c 0b48
.org 0x88a5e
	cmp r1, r0	@ 00088a5e 8142
.org 0x88a60
	bhi.n 0x88a66	@ 00088a60 01d8
.org 0x88a62
	adds r0, r1, #1	@ 00088a62 481c
.org 0x88a64
	strh r0, [r2, #12]	@ 00088a64 9081
.org 0x88a66
	adds r0, r7, #0	@ 00088a66 381c
.org 0x88a68
	adds r1, r4, #0	@ 00088a68 211c
.org 0x88a6a
	bl 0x2abe0	@ 00088a6a a2f7b9f8
.org 0x88a6e
	ldr r1, [pc, #32]	@ 00088a6e 0849
.org 0x88a70
	ldrb r0, [r7, #9]	@ 00088a70 787a
