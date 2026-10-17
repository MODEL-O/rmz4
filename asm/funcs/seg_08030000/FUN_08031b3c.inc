@ FUN_08031b3c  entry 0x08031b3c  size 298
.thumb
.org 0x31b3c
FUN_08031b3c:
	push {r4, r5, r6, r7, lr}	@ 00031b3c f0b5
.org 0x31b3e
	mov r7, r8	@ 00031b3e 4746
.org 0x31b40
	push {r7}	@ 00031b40 80b4
.org 0x31b42
	adds r4, r0, #0	@ 00031b42 041c
.org 0x31b44
	movs r1, #150	@ 00031b44 9621
.org 0x31b46
	lsls r1, r1, #2	@ 00031b46 8900
.org 0x31b48
	adds r0, r4, r1	@ 00031b48 6018
.org 0x31b4a
	ldr r1, [r0, #0]	@ 00031b4a 0168
.org 0x31b4c
	movs r0, #32	@ 00031b4c 2020
.org 0x31b4e
	ands r0, r1	@ 00031b4e 0840
.org 0x31b50
	cmp r0, #0	@ 00031b50 0028
.org 0x31b52
	beq.n 0x31b72	@ 00031b52 0ed0
.org 0x31b54
	adds r1, r4, #0	@ 00031b54 211c
.org 0x31b56
	adds r1, #76	@ 00031b56 4c31
.org 0x31b58
	movs r0, #0	@ 00031b58 0020
.org 0x31b5a
	strb r0, [r1, #0]	@ 00031b5a 0870
.org 0x31b5c
	adds r2, r4, #0	@ 00031b5c 221c
.org 0x31b5e
	adds r2, #74	@ 00031b5e 4a32
.org 0x31b60
	ldrb r1, [r2, #0]	@ 00031b60 1178
.org 0x31b62
	subs r0, #17	@ 00031b62 1138
.org 0x31b64
	ands r0, r1	@ 00031b64 0840
.org 0x31b66
	strb r0, [r2, #0]	@ 00031b66 1070
.org 0x31b68
	ldrb r1, [r4, #10]	@ 00031b68 a17a
.org 0x31b6a
	movs r0, #239	@ 00031b6a ef20
.org 0x31b6c
	ands r0, r1	@ 00031b6c 0840
.org 0x31b6e
	strb r0, [r4, #10]	@ 00031b6e a072
.org 0x31b70
	b.n 0x31b94	@ 00031b70 10e0
.org 0x31b72
	movs r0, #16	@ 00031b72 1020
.org 0x31b74
	ands r1, r0	@ 00031b74 0140
.org 0x31b76
	cmp r1, #0	@ 00031b76 0029
.org 0x31b78
	beq.n 0x31b94	@ 00031b78 0cd0
.org 0x31b7a
	adds r1, r4, #0	@ 00031b7a 211c
.org 0x31b7c
	adds r1, #76	@ 00031b7c 4c31
.org 0x31b7e
	movs r0, #1	@ 00031b7e 0120
.org 0x31b80
	strb r0, [r1, #0]	@ 00031b80 0870
.org 0x31b82
	adds r2, r4, #0	@ 00031b82 221c
.org 0x31b84
	adds r2, #74	@ 00031b84 4a32
.org 0x31b86
	ldrb r0, [r2, #0]	@ 00031b86 1078
.org 0x31b88
	movs r1, #16	@ 00031b88 1021
.org 0x31b8a
	orrs r0, r1	@ 00031b8a 0843
.org 0x31b8c
	strb r0, [r2, #0]	@ 00031b8c 1070
.org 0x31b8e
	ldrb r0, [r4, #10]	@ 00031b8e a07a
.org 0x31b90
	orrs r1, r0	@ 00031b90 0143
.org 0x31b92
	strb r1, [r4, #10]	@ 00031b92 a172
.org 0x31b94
	ldr r0, [r4, #92]	@ 00031b94 e06d
.org 0x31b96
	cmp r0, #0	@ 00031b96 0028
.org 0x31b98
	bge.n 0x31b9c	@ 00031b98 00da
.org 0x31b9a
	negs r0, r0	@ 00031b9a 4042
.org 0x31b9c
	lsls r0, r0, #16	@ 00031b9c 0004
.org 0x31b9e
	asrs r0, r0, #16	@ 00031b9e 0014
.org 0x31ba0
	mov r8, r0	@ 00031ba0 8046
.org 0x31ba2
	ldr r0, [r4, #84]	@ 00031ba2 606d
.org 0x31ba4
	add r0, r8	@ 00031ba4 4044
.org 0x31ba6
	str r0, [r4, #84]	@ 00031ba6 6065
.org 0x31ba8
	movs r0, #186	@ 00031ba8 ba20
.org 0x31baa
	lsls r0, r0, #1	@ 00031baa 4000
.org 0x31bac
	adds r6, r4, r0	@ 00031bac 2618
.org 0x31bae
	ldrb r1, [r6, #0]	@ 00031bae 3178
.org 0x31bb0
	lsls r1, r1, #3	@ 00031bb0 c900
.org 0x31bb2
	ldr r7, [pc, #124]	@ 00031bb2 1f4f
.org 0x31bb4
	adds r1, r1, r7	@ 00031bb4 c919
.org 0x31bb6
	adds r0, r4, #0	@ 00031bb6 201c
.org 0x31bb8
	movs r2, #0	@ 00031bb8 0022
.org 0x31bba
	bl 0x2b7f0	@ 00031bba f9f719fe
.org 0x31bbe
	ldrb r1, [r6, #0]	@ 00031bbe 3178
.org 0x31bc0
	lsls r1, r1, #3	@ 00031bc0 c900
.org 0x31bc2
	adds r1, r1, r7	@ 00031bc2 c919
.org 0x31bc4
	adds r0, r4, #0	@ 00031bc4 201c
.org 0x31bc6
	movs r2, #1	@ 00031bc6 0122
.org 0x31bc8
	bl 0x2b7f0	@ 00031bc8 f9f712fe
.org 0x31bcc
	ldr r0, [r4, #88]	@ 00031bcc a06d
.org 0x31bce
	ldr r1, [r4, #96]	@ 00031bce 216e
.org 0x31bd0
	adds r0, r0, r1	@ 00031bd0 4018
.org 0x31bd2
	str r0, [r4, #88]	@ 00031bd2 a065
.org 0x31bd4
	ldrb r1, [r6, #0]	@ 00031bd4 3178
.org 0x31bd6
	lsls r1, r1, #3	@ 00031bd6 c900
.org 0x31bd8
	adds r1, r1, r7	@ 00031bd8 c919
.org 0x31bda
	adds r0, r4, #0	@ 00031bda 201c
.org 0x31bdc
	movs r2, #0	@ 00031bdc 0022
.org 0x31bde
	bl 0x2bfe8	@ 00031bde faf703fa
.org 0x31be2
	movs r1, #161	@ 00031be2 a121
.org 0x31be4
	lsls r1, r1, #1	@ 00031be4 4900
.org 0x31be6
	adds r0, r4, r1	@ 00031be6 6018
.org 0x31be8
	ldrb r1, [r0, #0]	@ 00031be8 0178
.org 0x31bea
	movs r0, #16	@ 00031bea 1020
.org 0x31bec
	ands r0, r1	@ 00031bec 0840
.org 0x31bee
	lsls r0, r0, #24	@ 00031bee 0006
.org 0x31bf0
	lsrs r5, r0, #24	@ 00031bf0 050e
.org 0x31bf2
	cmp r5, #0	@ 00031bf2 002d
.org 0x31bf4
	bne.n 0x31c34	@ 00031bf4 1ed1
.org 0x31bf6
	ldrb r1, [r6, #0]	@ 00031bf6 3178
.org 0x31bf8
	lsls r1, r1, #3	@ 00031bf8 c900
.org 0x31bfa
	adds r1, r1, r7	@ 00031bfa c919
.org 0x31bfc
	adds r0, r4, #0	@ 00031bfc 201c
.org 0x31bfe
	movs r2, #1	@ 00031bfe 0122
.org 0x31c00
	bl 0x2baf0	@ 00031c00 f9f776ff
.org 0x31c04
	lsls r0, r0, #16	@ 00031c04 0004
.org 0x31c06
	cmp r0, #0	@ 00031c06 0028
.org 0x31c08
	beq.n 0x31c34	@ 00031c08 14d0
.org 0x31c0a
	ldrb r1, [r6, #0]	@ 00031c0a 3178
.org 0x31c0c
	lsls r1, r1, #3	@ 00031c0c c900
.org 0x31c0e
	adds r1, r1, r7	@ 00031c0e c919
.org 0x31c10
	adds r0, r4, #0	@ 00031c10 201c
.org 0x31c12
	movs r2, #0	@ 00031c12 0022
.org 0x31c14
	bl 0x2c2d4	@ 00031c14 faf75efb
.org 0x31c18
	lsls r0, r0, #16	@ 00031c18 0004
.org 0x31c1a
	cmp r0, #0	@ 00031c1a 0028
.org 0x31c1c
	beq.n 0x31c34	@ 00031c1c 0ad0
.org 0x31c1e
	strb r5, [r4, #13]	@ 00031c1e 6573
.org 0x31c20
	strb r5, [r4, #14]	@ 00031c20 a573
.org 0x31c22
	strb r5, [r4, #15]	@ 00031c22 e573
.org 0x31c24
	mov r0, r8	@ 00031c24 4046
.org 0x31c26
	str r0, [r4, #92]	@ 00031c26 e065
.org 0x31c28
	movs r0, #7	@ 00031c28 0720
.org 0x31c2a
	bl 0x2b10	@ 00031c2a d0f771ff
.org 0x31c2e
	b.n 0x31c60	@ 00031c2e 17e0
.org 0x31c30
	.byte 0x6c,0x33,0x85,0x08	@ 00031c30 data
.org 0x31c34
	adds r0, r4, #0	@ 00031c34 201c
.org 0x31c36
	bl 0x3851c	@ 00031c36 06f071fc
.org 0x31c3a
	lsls r0, r0, #16	@ 00031c3a 0004
.org 0x31c3c
	asrs r0, r0, #16	@ 00031c3c 0014
.org 0x31c3e
	ldr r1, [r4, #96]	@ 00031c3e 216e
.org 0x31c40
	adds r1, r1, r0	@ 00031c40 0918
.org 0x31c42
	str r1, [r4, #96]	@ 00031c42 2166
.org 0x31c44
	adds r0, r4, #0	@ 00031c44 201c
.org 0x31c46
	bl 0x385dc	@ 00031c46 06f0c9fc
.org 0x31c4a
	lsls r0, r0, #16	@ 00031c4a 0004
.org 0x31c4c
	asrs r0, r0, #16	@ 00031c4c 0014
.org 0x31c4e
	ldr r1, [r4, #96]	@ 00031c4e 216e
.org 0x31c50
	cmp r1, r0	@ 00031c50 8142
.org 0x31c52
	ble.n 0x31c60	@ 00031c52 05dd
.org 0x31c54
	adds r0, r4, #0	@ 00031c54 201c
.org 0x31c56
	bl 0x385dc	@ 00031c56 06f0c1fc
.org 0x31c5a
	lsls r0, r0, #16	@ 00031c5a 0004
.org 0x31c5c
	asrs r0, r0, #16	@ 00031c5c 0014
.org 0x31c5e
	str r0, [r4, #96]	@ 00031c5e 2066
.org 0x31c60
	pop {r3}	@ 00031c60 08bc
.org 0x31c62
	mov r8, r3	@ 00031c62 9846
.org 0x31c64
	pop {r4, r5, r6, r7}	@ 00031c64 f0bc
