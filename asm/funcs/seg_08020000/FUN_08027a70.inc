@ FUN_08027a70  entry 0x08027a70  size 282
.thumb
.org 0x27a70
FUN_08027a70:
	push {r4, r5, r6, r7, lr}	@ 00027a70 f0b5
.org 0x27a72
	movs r1, #162	@ 00027a72 a221
.org 0x27a74
	lsls r1, r1, #1	@ 00027a74 4900
.org 0x27a76
	adds r0, r0, r1	@ 00027a76 4018
.org 0x27a78
	ldr r2, [r0, #0]	@ 00027a78 0268
.org 0x27a7a
	movs r0, #8	@ 00027a7a 0820
.org 0x27a7c
	ands r0, r2	@ 00027a7c 1040
.org 0x27a7e
	cmp r0, #0	@ 00027a7e 0028
.org 0x27a80
	bne.n 0x27a84	@ 00027a80 00d1
.org 0x27a82
	b.n 0x27ba0	@ 00027a82 8de0
.org 0x27a84
	movs r0, #1	@ 00027a84 0120
.org 0x27a86
	ands r0, r2	@ 00027a86 1040
.org 0x27a88
	cmp r0, #0	@ 00027a88 0028
.org 0x27a8a
	beq.n 0x27aac	@ 00027a8a 0fd0
.org 0x27a8c
	ldr r1, [pc, #24]	@ 00027a8c 0649
.org 0x27a8e
	lsrs r0, r2, #16	@ 00027a8e 100c
.org 0x27a90
	adds r0, #64	@ 00027a90 4030
.org 0x27a92
	lsls r0, r0, #24	@ 00027a92 0006
.org 0x27a94
	lsrs r0, r0, #23	@ 00027a94 c00d
.org 0x27a96
	adds r0, r0, r1	@ 00027a96 4018
.org 0x27a98
	movs r2, #0	@ 00027a98 0022
.org 0x27a9a
	ldrsh r1, [r0, r2]	@ 00027a9a 815e
.org 0x27a9c
	movs r0, #128	@ 00027a9c 8020
.org 0x27a9e
	lsls r0, r0, #1	@ 00027a9e 4000
.org 0x27aa0
	subs r0, r0, r1	@ 00027aa0 401a
.org 0x27aa2
	asrs r4, r0, #2	@ 00027aa2 8410
.org 0x27aa4
	b.n 0x27abe	@ 00027aa4 0be0
.org 0x27aa6
	.byte 0x00	@ 00027aa6 data
.org 0x27aa7
	.byte 0x00	@ 00027aa7 data
.org 0x27aa8
	.byte 0x0c,0x93,0x12,0x08	@ 00027aa8 data
.org 0x27aac
	ldr r0, [pc, #48]	@ 00027aac 0c48
.org 0x27aae
	lsrs r1, r2, #16	@ 00027aae 110c
.org 0x27ab0
	adds r1, #64	@ 00027ab0 4031
.org 0x27ab2
	lsls r1, r1, #24	@ 00027ab2 0906
.org 0x27ab4
	lsrs r1, r1, #23	@ 00027ab4 c90d
.org 0x27ab6
	adds r1, r1, r0	@ 00027ab6 0918
.org 0x27ab8
	ldrh r0, [r1, #0]	@ 00027ab8 0888
.org 0x27aba
	lsls r0, r0, #16	@ 00027aba 0004
.org 0x27abc
	asrs r4, r0, #18	@ 00027abc 8414
.org 0x27abe
	ldr r3, [pc, #36]	@ 00027abe 094b
.org 0x27ac0
	ldrh r1, [r3, #0]	@ 00027ac0 1988
.org 0x27ac2
	movs r2, #128	@ 00027ac2 8022
.org 0x27ac4
	lsls r2, r2, #6	@ 00027ac4 9201
.org 0x27ac6
	adds r0, r2, #0	@ 00027ac6 101c
.org 0x27ac8
	movs r2, #0	@ 00027ac8 0022
.org 0x27aca
	orrs r0, r1	@ 00027aca 0843
.org 0x27acc
	strh r0, [r3, #0]	@ 00027acc 1880
.org 0x27ace
	strb r2, [r3, #12]	@ 00027ace 1a73
.org 0x27ad0
	movs r0, #160	@ 00027ad0 a020
.org 0x27ad2
	strh r0, [r3, #8]	@ 00027ad2 1881
.org 0x27ad4
	cmp r4, #0	@ 00027ad4 002c
.org 0x27ad6
	bne.n 0x27ae8	@ 00027ad6 07d1
.org 0x27ad8
	movs r0, #240	@ 00027ad8 f020
.org 0x27ada
	strh r0, [r3, #4]	@ 00027ada 9880
.org 0x27adc
	b.n 0x27ba0	@ 00027adc 60e0
.org 0x27ade
	.byte 0x00	@ 00027ade data
.org 0x27adf
	.byte 0x00	@ 00027adf data
.org 0x27ae0
	.byte 0x0c,0x93,0x12,0x08	@ 00027ae0 data
.org 0x27ae4
	.byte 0x50,0x0a,0x00,0x02	@ 00027ae4 data
.org 0x27ae8
	movs r0, #160	@ 00027ae8 a020
.org 0x27aea
	lsls r0, r0, #1	@ 00027aea 4000
.org 0x27aec
	bl 0xa70	@ 00027aec d8f7c0ff
.org 0x27af0
	adds r5, r0, #0	@ 00027af0 051c
.org 0x27af2
	cmp r5, #0	@ 00027af2 002d
.org 0x27af4
	beq.n 0x27ba0	@ 00027af4 54d0
.org 0x27af6
	ldr r2, [pc, #52]	@ 00027af6 0d4a
.org 0x27af8
	movs r1, #218	@ 00027af8 da21
.org 0x27afa
	lsls r1, r1, #1	@ 00027afa 4900
.org 0x27afc
	adds r0, r2, r1	@ 00027afc 5018
.org 0x27afe
	str r5, [r0, #0]	@ 00027afe 0560
.org 0x27b00
	movs r0, #220	@ 00027b00 dc20
.org 0x27b02
	lsls r0, r0, #1	@ 00027b02 4000
.org 0x27b04
	adds r1, r2, r0	@ 00027b04 1118
.org 0x27b06
	ldr r0, [pc, #40]	@ 00027b06 0a48
.org 0x27b08
	str r0, [r1, #0]	@ 00027b08 0860
.org 0x27b0a
	movs r0, #222	@ 00027b0a de20
.org 0x27b0c
	lsls r0, r0, #1	@ 00027b0c 4000
.org 0x27b0e
	adds r1, r2, r0	@ 00027b0e 1118
.org 0x27b10
	ldr r0, [pc, #32]	@ 00027b10 0848
.org 0x27b12
	str r0, [r1, #0]	@ 00027b12 0860
.org 0x27b14
	movs r3, #0	@ 00027b14 0023
.org 0x27b16
	adds r6, r4, #0	@ 00027b16 261c
.org 0x27b18
	adds r6, #50	@ 00027b18 3236
.org 0x27b1a
	movs r0, #80	@ 00027b1a 5020
.org 0x27b1c
	subs r0, r0, r4	@ 00027b1c 001b
.org 0x27b1e
	adds r2, r5, #0	@ 00027b1e 2a1c
.org 0x27b20
	lsls r1, r0, #1	@ 00027b20 4100
.org 0x27b22
	adds r1, r1, r0	@ 00027b22 0918
.org 0x27b24
	cmp r3, r6	@ 00027b24 b342
.org 0x27b26
	bge.n 0x27b38	@ 00027b26 07da
.org 0x27b28
	movs r0, #0	@ 00027b28 0020
.org 0x27b2a
	b.n 0x27b52	@ 00027b2a 12e0
.org 0x27b2c
	.byte 0x90,0x15,0x00,0x03	@ 00027b2c data
.org 0x27b30
	.byte 0x40,0x00,0x00,0x04	@ 00027b30 data
.org 0x27b34
	.byte 0x01,0x00,0x60,0xa2	@ 00027b34 data
.org 0x27b38
	adds r0, r4, #0	@ 00027b38 201c
.org 0x27b3a
	adds r0, #110	@ 00027b3a 6e30
.org 0x27b3c
	cmp r3, r0	@ 00027b3c 8342
.org 0x27b3e
	bge.n 0x27b50	@ 00027b3e 07da
.org 0x27b40
	asrs r0, r1, #1	@ 00027b40 4810
.org 0x27b42
	adds r0, #120	@ 00027b42 7830
.org 0x27b44
	lsls r0, r0, #16	@ 00027b44 0004
.org 0x27b46
	lsrs r0, r0, #16	@ 00027b46 000c
.org 0x27b48
	cmp r0, #240	@ 00027b48 f028
.org 0x27b4a
	bls.n 0x27b52	@ 00027b4a 02d9
.org 0x27b4c
	movs r0, #0	@ 00027b4c 0020
.org 0x27b4e
	b.n 0x27b52	@ 00027b4e 00e0
.org 0x27b50
	movs r0, #240	@ 00027b50 f020
.org 0x27b52
	strh r0, [r2, #0]	@ 00027b52 1080
.org 0x27b54
	adds r2, #2	@ 00027b54 0232
.org 0x27b56
	subs r1, #3	@ 00027b56 0339
.org 0x27b58
	adds r3, #1	@ 00027b58 0133
.org 0x27b5a
	cmp r3, #159	@ 00027b5a 9f2b
.org 0x27b5c
	ble.n 0x27b24	@ 00027b5c e2dd
.org 0x27b5e
	movs r3, #0	@ 00027b5e 0023
.org 0x27b60
	movs r0, #50	@ 00027b60 3220
.org 0x27b62
	subs r7, r0, r4	@ 00027b62 071b
.org 0x27b64
	movs r0, #110	@ 00027b64 6e20
.org 0x27b66
	subs r6, r0, r4	@ 00027b66 061b
.org 0x27b68
	adds r2, r5, #0	@ 00027b68 2a1c
.org 0x27b6a
	cmp r3, r7	@ 00027b6a bb42
.org 0x27b6c
	bge.n 0x27b72	@ 00027b6c 01da
.org 0x27b6e
	movs r0, #240	@ 00027b6e f020
.org 0x27b70
	b.n 0x27b96	@ 00027b70 11e0
.org 0x27b72
	cmp r3, r6	@ 00027b72 b342
.org 0x27b74
	bge.n 0x27b98	@ 00027b74 10da
.org 0x27b76
	adds r1, r4, #0	@ 00027b76 211c
.org 0x27b78
	adds r1, #80	@ 00027b78 5031
.org 0x27b7a
	subs r1, r1, r3	@ 00027b7a c91a
.org 0x27b7c
	lsls r0, r1, #1	@ 00027b7c 4800
.org 0x27b7e
	adds r0, r0, r1	@ 00027b7e 4018
.org 0x27b80
	asrs r0, r0, #1	@ 00027b80 4010
.org 0x27b82
	adds r0, #120	@ 00027b82 7830
.org 0x27b84
	lsls r0, r0, #16	@ 00027b84 0004
.org 0x27b86
	lsrs r0, r0, #16	@ 00027b86 000c
.org 0x27b88
	cmp r0, #240	@ 00027b88 f028
