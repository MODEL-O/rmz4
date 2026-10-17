@ FUN_080b0b08  entry 0x080b0b08  size 190
.thumb
.org 0xb0b08
FUN_080b0b08:
	push {r4, r5, lr}	@ 000b0b08 30b5
.org 0xb0b0a
	adds r4, r0, #0	@ 000b0b0a 041c
.org 0xb0b0c
	ldrb r0, [r4, #14]	@ 000b0b0c a07b
.org 0xb0b0e
	cmp r0, #0	@ 000b0b0e 0028
.org 0xb0b10
	bne.n 0xb0b68	@ 000b0b10 2ad1
.org 0xb0b12
	adds r0, r4, #0	@ 000b0b12 201c
.org 0xb0b14
	bl 0xb0d28	@ 000b0b14 00f008f9
.org 0xb0b18
	lsls r0, r0, #24	@ 000b0b18 0006
.org 0xb0b1a
	lsrs r0, r0, #24	@ 000b0b1a 000e
.org 0xb0b1c
	adds r5, r0, #0	@ 000b0b1c 051c
.org 0xb0b1e
	adds r0, r4, #0	@ 000b0b1e 201c
.org 0xb0b20
	bl 0xb0ccc	@ 000b0b20 00f0d4f8
.org 0xb0b24
	ldr r2, [pc, #160]	@ 000b0b24 284a
.org 0xb0b26
	adds r0, r5, #0	@ 000b0b26 281c
.org 0xb0b28
	adds r0, #64	@ 000b0b28 4030
.org 0xb0b2a
	lsls r0, r0, #24	@ 000b0b2a 0006
.org 0xb0b2c
	lsrs r0, r0, #23	@ 000b0b2c c00d
.org 0xb0b2e
	adds r0, r0, r2	@ 000b0b2e 8018
.org 0xb0b30
	movs r3, #0	@ 000b0b30 0023
.org 0xb0b32
	ldrsh r1, [r0, r3]	@ 000b0b32 c15e
.org 0xb0b34
	lsls r0, r1, #2	@ 000b0b34 8800
.org 0xb0b36
	adds r0, r0, r1	@ 000b0b36 4018
.org 0xb0b38
	lsls r0, r0, #7	@ 000b0b38 c001
.org 0xb0b3a
	cmp r0, #0	@ 000b0b3a 0028
.org 0xb0b3c
	bge.n 0xb0b40	@ 000b0b3c 00da
.org 0xb0b3e
	adds r0, #255	@ 000b0b3e ff30
.org 0xb0b40
	asrs r0, r0, #8	@ 000b0b40 0012
.org 0xb0b42
	str r0, [r4, #92]	@ 000b0b42 e065
.org 0xb0b44
	lsls r0, r5, #1	@ 000b0b44 6800
.org 0xb0b46
	adds r0, r0, r2	@ 000b0b46 8018
.org 0xb0b48
	movs r2, #0	@ 000b0b48 0022
.org 0xb0b4a
	ldrsh r1, [r0, r2]	@ 000b0b4a 815e
.org 0xb0b4c
	lsls r0, r1, #2	@ 000b0b4c 8800
.org 0xb0b4e
	adds r0, r0, r1	@ 000b0b4e 4018
.org 0xb0b50
	lsls r0, r0, #7	@ 000b0b50 c001
.org 0xb0b52
	cmp r0, #0	@ 000b0b52 0028
.org 0xb0b54
	bge.n 0xb0b58	@ 000b0b54 00da
.org 0xb0b56
	adds r0, #255	@ 000b0b56 ff30
.org 0xb0b58
	asrs r0, r0, #8	@ 000b0b58 0012
.org 0xb0b5a
	str r0, [r4, #96]	@ 000b0b5a 2066
.org 0xb0b5c
	movs r0, #107	@ 000b0b5c 6b20
.org 0xb0b5e
	bl 0x2b10	@ 000b0b5e 51f7d7ff
.org 0xb0b62
	ldrb r0, [r4, #14]	@ 000b0b62 a07b
.org 0xb0b64
	adds r0, #1	@ 000b0b64 0130
.org 0xb0b66
	strb r0, [r4, #14]	@ 000b0b66 a073
.org 0xb0b68
	ldr r0, [r4, #84]	@ 000b0b68 606d
.org 0xb0b6a
	ldr r1, [r4, #92]	@ 000b0b6a e16d
.org 0xb0b6c
	adds r0, r0, r1	@ 000b0b6c 4018
.org 0xb0b6e
	str r0, [r4, #84]	@ 000b0b6e 6065
.org 0xb0b70
	ldr r0, [r4, #88]	@ 000b0b70 a06d
.org 0xb0b72
	ldr r1, [r4, #96]	@ 000b0b72 216e
.org 0xb0b74
	adds r0, r0, r1	@ 000b0b74 4018
.org 0xb0b76
	str r0, [r4, #88]	@ 000b0b76 a065
.org 0xb0b78
	ldr r0, [pc, #80]	@ 000b0b78 1448
.org 0xb0b7a
	adds r1, r4, #0	@ 000b0b7a 211c
.org 0xb0b7c
	adds r1, #84	@ 000b0b7c 5431
.org 0xb0b7e
	bl 0x1fb14	@ 000b0b7e 6ef7c9ff
.org 0xb0b82
	movs r1, #176	@ 000b0b82 b021
.org 0xb0b84
	lsls r1, r1, #5	@ 000b0b84 4901
.org 0xb0b86
	cmp r0, r1	@ 000b0b86 8842
.org 0xb0b88
	bls.n 0xb0bc0	@ 000b0b88 1ad9
.org 0xb0b8a
	ldrb r1, [r4, #10]	@ 000b0b8a a17a
.org 0xb0b8c
	movs r0, #254	@ 000b0b8c fe20
.org 0xb0b8e
	ands r0, r1	@ 000b0b8e 0840
.org 0xb0b90
	movs r2, #0	@ 000b0b90 0022
.org 0xb0b92
	movs r1, #253	@ 000b0b92 fd21
.org 0xb0b94
	ands r0, r1	@ 000b0b94 0840
.org 0xb0b96
	strb r0, [r4, #10]	@ 000b0b96 a072
.org 0xb0b98
	adds r0, r4, #0	@ 000b0b98 201c
.org 0xb0b9a
	adds r0, #140	@ 000b0b9a 8c30
.org 0xb0b9c
	str r2, [r0, #0]	@ 000b0b9c 0260
.org 0xb0b9e
	adds r0, #4	@ 000b0b9e 0430
.org 0xb0ba0
	str r2, [r0, #0]	@ 000b0ba0 0260
.org 0xb0ba2
	adds r0, #4	@ 000b0ba2 0430
.org 0xb0ba4
	strb r2, [r0, #0]	@ 000b0ba4 0270
.org 0xb0ba6
	ldrb r1, [r4, #10]	@ 000b0ba6 a17a
.org 0xb0ba8
	movs r0, #251	@ 000b0ba8 fb20
.org 0xb0baa
	ands r0, r1	@ 000b0baa 0840
.org 0xb0bac
	strb r0, [r4, #10]	@ 000b0bac a072
.org 0xb0bae
	ldr r1, [pc, #32]	@ 000b0bae 0849
.org 0xb0bb0
	ldrb r0, [r4, #9]	@ 000b0bb0 607a
.org 0xb0bb2
	lsls r0, r0, #2	@ 000b0bb2 8000
.org 0xb0bb4
	adds r0, r0, r1	@ 000b0bb4 4018
.org 0xb0bb6
	movs r1, #3	@ 000b0bb6 0321
.org 0xb0bb8
	str r1, [r4, #12]	@ 000b0bb8 e160
.org 0xb0bba
	ldr r0, [r0, #0]	@ 000b0bba 0068
.org 0xb0bbc
	ldr r0, [r0, #12]	@ 000b0bbc c068
.org 0xb0bbe
	str r0, [r4, #20]	@ 000b0bbe 6061
.org 0xb0bc0
	pop {r4, r5}	@ 000b0bc0 30bc
.org 0xb0bc2
	pop {r0}	@ 000b0bc2 01bc
.org 0xb0bc4
	bx r0	@ 000b0bc4 0047
