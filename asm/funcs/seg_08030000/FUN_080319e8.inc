@ FUN_080319e8  entry 0x080319e8  size 334
.thumb
.org 0x319e8
FUN_080319e8:
	push {r4, r5, r6, r7, lr}	@ 000319e8 f0b5
.org 0x319ea
	mov r7, r8	@ 000319ea 4746
.org 0x319ec
	push {r7}	@ 000319ec 80b4
.org 0x319ee
	adds r4, r0, #0	@ 000319ee 041c
.org 0x319f0
	adds r0, #180	@ 000319f0 b430
.org 0x319f2
	ldr r2, [r0, #104]	@ 000319f2 826e
.org 0x319f4
	cmp r2, #0	@ 000319f4 002a
.org 0x319f6
	beq.n 0x319fe	@ 000319f6 02d0
.org 0x319f8
	lsls r0, r2, #16	@ 000319f8 1004
.org 0x319fa
	lsrs r3, r0, #16	@ 000319fa 030c
.org 0x319fc
	b.n 0x31a6c	@ 000319fc 36e0
.org 0x319fe
	movs r1, #150	@ 000319fe 9621
.org 0x31a00
	lsls r1, r1, #2	@ 00031a00 8900
.org 0x31a02
	adds r0, r4, r1	@ 00031a02 6018
.org 0x31a04
	ldr r1, [r0, #0]	@ 00031a04 0168
.org 0x31a06
	movs r0, #32	@ 00031a06 2020
.org 0x31a08
	ands r0, r1	@ 00031a08 0840
.org 0x31a0a
	cmp r0, #0	@ 00031a0a 0028
.org 0x31a0c
	beq.n 0x31a3a	@ 00031a0c 15d0
.org 0x31a0e
	ldr r0, [r4, #92]	@ 00031a0e e06d
.org 0x31a10
	cmp r0, #0	@ 00031a10 0028
.org 0x31a12
	bge.n 0x31a16	@ 00031a12 00da
.org 0x31a14
	negs r0, r0	@ 00031a14 4042
.org 0x31a16
	negs r0, r0	@ 00031a16 4042
.org 0x31a18
	lsls r0, r0, #16	@ 00031a18 0004
.org 0x31a1a
	lsrs r3, r0, #16	@ 00031a1a 030c
.org 0x31a1c
	adds r0, r4, #0	@ 00031a1c 201c
.org 0x31a1e
	adds r0, #76	@ 00031a1e 4c30
.org 0x31a20
	strb r2, [r0, #0]	@ 00031a20 0270
.org 0x31a22
	adds r2, r4, #0	@ 00031a22 221c
.org 0x31a24
	adds r2, #74	@ 00031a24 4a32
.org 0x31a26
	ldrb r1, [r2, #0]	@ 00031a26 1178
.org 0x31a28
	movs r0, #17	@ 00031a28 1120
.org 0x31a2a
	negs r0, r0	@ 00031a2a 4042
.org 0x31a2c
	ands r0, r1	@ 00031a2c 0840
.org 0x31a2e
	strb r0, [r2, #0]	@ 00031a2e 1070
.org 0x31a30
	ldrb r1, [r4, #10]	@ 00031a30 a17a
.org 0x31a32
	movs r0, #239	@ 00031a32 ef20
.org 0x31a34
	ands r0, r1	@ 00031a34 0840
.org 0x31a36
	strb r0, [r4, #10]	@ 00031a36 a072
.org 0x31a38
	b.n 0x31a6c	@ 00031a38 18e0
.org 0x31a3a
	movs r0, #16	@ 00031a3a 1020
.org 0x31a3c
	ands r1, r0	@ 00031a3c 0140
.org 0x31a3e
	cmp r1, #0	@ 00031a3e 0029
.org 0x31a40
	beq.n 0x31a6a	@ 00031a40 13d0
.org 0x31a42
	ldr r0, [r4, #92]	@ 00031a42 e06d
.org 0x31a44
	cmp r0, #0	@ 00031a44 0028
.org 0x31a46
	bge.n 0x31a4a	@ 00031a46 00da
.org 0x31a48
	negs r0, r0	@ 00031a48 4042
.org 0x31a4a
	lsls r0, r0, #16	@ 00031a4a 0004
.org 0x31a4c
	lsrs r3, r0, #16	@ 00031a4c 030c
.org 0x31a4e
	adds r1, r4, #0	@ 00031a4e 211c
.org 0x31a50
	adds r1, #76	@ 00031a50 4c31
.org 0x31a52
	movs r0, #1	@ 00031a52 0120
.org 0x31a54
	strb r0, [r1, #0]	@ 00031a54 0870
.org 0x31a56
	adds r2, r4, #0	@ 00031a56 221c
.org 0x31a58
	adds r2, #74	@ 00031a58 4a32
.org 0x31a5a
	ldrb r0, [r2, #0]	@ 00031a5a 1078
.org 0x31a5c
	movs r1, #16	@ 00031a5c 1021
.org 0x31a5e
	orrs r0, r1	@ 00031a5e 0843
.org 0x31a60
	strb r0, [r2, #0]	@ 00031a60 1070
.org 0x31a62
	ldrb r0, [r4, #10]	@ 00031a62 a07a
.org 0x31a64
	orrs r1, r0	@ 00031a64 0143
.org 0x31a66
	strb r1, [r4, #10]	@ 00031a66 a172
.org 0x31a68
	b.n 0x31a6c	@ 00031a68 00e0
.org 0x31a6a
	movs r3, #0	@ 00031a6a 0023
.org 0x31a6c
	lsls r0, r3, #16	@ 00031a6c 1804
.org 0x31a6e
	asrs r0, r0, #16	@ 00031a6e 0014
.org 0x31a70
	mov r8, r0	@ 00031a70 8046
.org 0x31a72
	ldr r0, [r4, #84]	@ 00031a72 606d
.org 0x31a74
	add r0, r8	@ 00031a74 4044
.org 0x31a76
	str r0, [r4, #84]	@ 00031a76 6065
.org 0x31a78
	movs r0, #186	@ 00031a78 ba20
.org 0x31a7a
	lsls r0, r0, #1	@ 00031a7a 4000
.org 0x31a7c
	adds r6, r4, r0	@ 00031a7c 2618
.org 0x31a7e
	ldrb r1, [r6, #0]	@ 00031a7e 3178
.org 0x31a80
	lsls r1, r1, #3	@ 00031a80 c900
.org 0x31a82
	ldr r7, [pc, #124]	@ 00031a82 1f4f
.org 0x31a84
	adds r1, r1, r7	@ 00031a84 c919
.org 0x31a86
	adds r0, r4, #0	@ 00031a86 201c
.org 0x31a88
	movs r2, #0	@ 00031a88 0022
.org 0x31a8a
	bl 0x2b7f0	@ 00031a8a f9f7b1fe
.org 0x31a8e
	ldrb r1, [r6, #0]	@ 00031a8e 3178
.org 0x31a90
	lsls r1, r1, #3	@ 00031a90 c900
.org 0x31a92
	adds r1, r1, r7	@ 00031a92 c919
.org 0x31a94
	adds r0, r4, #0	@ 00031a94 201c
.org 0x31a96
	movs r2, #1	@ 00031a96 0122
.org 0x31a98
	bl 0x2b7f0	@ 00031a98 f9f7aafe
.org 0x31a9c
	ldr r0, [r4, #88]	@ 00031a9c a06d
.org 0x31a9e
	ldr r1, [r4, #96]	@ 00031a9e 216e
.org 0x31aa0
	adds r0, r0, r1	@ 00031aa0 4018
.org 0x31aa2
	str r0, [r4, #88]	@ 00031aa2 a065
.org 0x31aa4
	ldrb r1, [r6, #0]	@ 00031aa4 3178
.org 0x31aa6
	lsls r1, r1, #3	@ 00031aa6 c900
.org 0x31aa8
	adds r1, r1, r7	@ 00031aa8 c919
.org 0x31aaa
	adds r0, r4, #0	@ 00031aaa 201c
.org 0x31aac
	movs r2, #0	@ 00031aac 0022
.org 0x31aae
	bl 0x2bfe8	@ 00031aae faf79bfa
.org 0x31ab2
	movs r1, #161	@ 00031ab2 a121
.org 0x31ab4
	lsls r1, r1, #1	@ 00031ab4 4900
.org 0x31ab6
	adds r0, r4, r1	@ 00031ab6 6018
.org 0x31ab8
	ldrb r1, [r0, #0]	@ 00031ab8 0178
.org 0x31aba
	movs r0, #16	@ 00031aba 1020
.org 0x31abc
	ands r0, r1	@ 00031abc 0840
.org 0x31abe
	lsls r0, r0, #24	@ 00031abe 0006
.org 0x31ac0
	lsrs r5, r0, #24	@ 00031ac0 050e
.org 0x31ac2
	cmp r5, #0	@ 00031ac2 002d
.org 0x31ac4
	bne.n 0x31b04	@ 00031ac4 1ed1
.org 0x31ac6
	ldrb r1, [r6, #0]	@ 00031ac6 3178
.org 0x31ac8
	lsls r1, r1, #3	@ 00031ac8 c900
.org 0x31aca
	adds r1, r1, r7	@ 00031aca c919
.org 0x31acc
	adds r0, r4, #0	@ 00031acc 201c
.org 0x31ace
	movs r2, #1	@ 00031ace 0122
.org 0x31ad0
	bl 0x2baf0	@ 00031ad0 faf70ef8
.org 0x31ad4
	lsls r0, r0, #16	@ 00031ad4 0004
.org 0x31ad6
	cmp r0, #0	@ 00031ad6 0028
.org 0x31ad8
	beq.n 0x31b04	@ 00031ad8 14d0
.org 0x31ada
	ldrb r1, [r6, #0]	@ 00031ada 3178
.org 0x31adc
	lsls r1, r1, #3	@ 00031adc c900
.org 0x31ade
	adds r1, r1, r7	@ 00031ade c919
.org 0x31ae0
	adds r0, r4, #0	@ 00031ae0 201c
.org 0x31ae2
	movs r2, #0	@ 00031ae2 0022
.org 0x31ae4
	bl 0x2c2d4	@ 00031ae4 faf7f6fb
.org 0x31ae8
	lsls r0, r0, #16	@ 00031ae8 0004
.org 0x31aea
	cmp r0, #0	@ 00031aea 0028
.org 0x31aec
	beq.n 0x31b04	@ 00031aec 0ad0
.org 0x31aee
	strb r5, [r4, #13]	@ 00031aee 6573
.org 0x31af0
	strb r5, [r4, #14]	@ 00031af0 a573
.org 0x31af2
	strb r5, [r4, #15]	@ 00031af2 e573
.org 0x31af4
	mov r0, r8	@ 00031af4 4046
.org 0x31af6
	str r0, [r4, #92]	@ 00031af6 e065
.org 0x31af8
	movs r0, #7	@ 00031af8 0720
.org 0x31afa
	bl 0x2b10	@ 00031afa d1f709f8
.org 0x31afe
	b.n 0x31b30	@ 00031afe 17e0
.org 0x31b00
	.byte 0x6c,0x33,0x85,0x08	@ 00031b00 data
.org 0x31b04
	adds r0, r4, #0	@ 00031b04 201c
.org 0x31b06
	bl 0x3851c	@ 00031b06 06f009fd
.org 0x31b0a
	lsls r0, r0, #16	@ 00031b0a 0004
.org 0x31b0c
	asrs r0, r0, #16	@ 00031b0c 0014
.org 0x31b0e
	ldr r1, [r4, #96]	@ 00031b0e 216e
.org 0x31b10
	adds r1, r1, r0	@ 00031b10 0918
.org 0x31b12
	str r1, [r4, #96]	@ 00031b12 2166
.org 0x31b14
	adds r0, r4, #0	@ 00031b14 201c
.org 0x31b16
	bl 0x385dc	@ 00031b16 06f061fd
.org 0x31b1a
	lsls r0, r0, #16	@ 00031b1a 0004
.org 0x31b1c
	asrs r0, r0, #16	@ 00031b1c 0014
.org 0x31b1e
	ldr r1, [r4, #96]	@ 00031b1e 216e
.org 0x31b20
	cmp r1, r0	@ 00031b20 8142
.org 0x31b22
	ble.n 0x31b30	@ 00031b22 05dd
.org 0x31b24
	adds r0, r4, #0	@ 00031b24 201c
.org 0x31b26
	bl 0x385dc	@ 00031b26 06f059fd
.org 0x31b2a
	lsls r0, r0, #16	@ 00031b2a 0004
.org 0x31b2c
	asrs r0, r0, #16	@ 00031b2c 0014
.org 0x31b2e
	str r0, [r4, #96]	@ 00031b2e 2066
.org 0x31b30
	pop {r3}	@ 00031b30 08bc
.org 0x31b32
	mov r8, r3	@ 00031b32 9846
.org 0x31b34
	pop {r4, r5, r6, r7}	@ 00031b34 f0bc
