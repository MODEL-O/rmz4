@ FUN_080e1b14  entry 0x080e1b14  size 118
.thumb
.org 0xe1b14
FUN_080e1b14:
	push {r4, r5, r6, r7, lr}	@ 000e1b14 f0b5
.org 0xe1b16
	adds r6, r0, #0	@ 000e1b16 061c
.org 0xe1b18
	lsls r1, r1, #24	@ 000e1b18 0906
.org 0xe1b1a
	lsrs r5, r1, #24	@ 000e1b1a 0d0e
.org 0xe1b1c
	lsls r2, r2, #16	@ 000e1b1c 1204
.org 0xe1b1e
	lsrs r7, r2, #16	@ 000e1b1e 170c
.org 0xe1b20
	ldr r0, [pc, #104]	@ 000e1b20 1a48
.org 0xe1b22
	ldr r0, [r0, #0]	@ 000e1b22 0068
.org 0xe1b24
	bl 0x5500	@ 000e1b24 23f7ecfc
.org 0xe1b28
	adds r4, r0, #0	@ 000e1b28 041c
.org 0xe1b2a
	cmp r4, #0	@ 000e1b2a 002c
.org 0xe1b2c
	beq.n 0xe1b84	@ 000e1b2c 2ad0
.org 0xe1b2e
	adds r1, r4, #0	@ 000e1b2e 211c
.org 0xe1b30
	adds r1, #37	@ 000e1b30 2531
.org 0xe1b32
	movs r3, #0	@ 000e1b32 0023
.org 0xe1b34
	movs r0, #1	@ 000e1b34 0120
.org 0xe1b36
	strb r0, [r1, #0]	@ 000e1b36 0870
.org 0xe1b38
	ldr r0, [pc, #84]	@ 000e1b38 1548
.org 0xe1b3a
	movs r1, #62	@ 000e1b3a 3e21
.org 0xe1b3c
	strb r1, [r4, #9]	@ 000e1b3c 6172
.org 0xe1b3e
	adds r0, #248	@ 000e1b3e f830
.org 0xe1b40
	ldr r0, [r0, #0]	@ 000e1b40 0068
.org 0xe1b42
	ldr r0, [r0, #0]	@ 000e1b42 0068
.org 0xe1b44
	str r0, [r4, #20]	@ 000e1b44 6061
.org 0xe1b46
	movs r2, #0	@ 000e1b46 0022
.org 0xe1b48
	strh r3, [r4, #32]	@ 000e1b48 2384
.org 0xe1b4a
	adds r0, r4, #0	@ 000e1b4a 201c
.org 0xe1b4c
	adds r0, #34	@ 000e1b4c 2230
.org 0xe1b4e
	strb r2, [r0, #0]	@ 000e1b4e 0270
.org 0xe1b50
	ldr r0, [r6, #0]	@ 000e1b50 3068
.org 0xe1b52
	ldr r1, [r6, #4]	@ 000e1b52 7168
.org 0xe1b54
	str r0, [r4, #84]	@ 000e1b54 6065
.org 0xe1b56
	str r1, [r4, #88]	@ 000e1b56 a165
.org 0xe1b58
	ldr r3, [pc, #56]	@ 000e1b58 0e4b
.org 0xe1b5a
	adds r0, r5, #0	@ 000e1b5a 281c
.org 0xe1b5c
	adds r0, #64	@ 000e1b5c 4030
.org 0xe1b5e
	lsls r0, r0, #24	@ 000e1b5e 0006
.org 0xe1b60
	lsrs r0, r0, #23	@ 000e1b60 c00d
.org 0xe1b62
	adds r0, r0, r3	@ 000e1b62 c018
.org 0xe1b64
	movs r1, #0	@ 000e1b64 0021
.org 0xe1b66
	ldrsh r0, [r0, r1]	@ 000e1b66 405e
.org 0xe1b68
	lsls r1, r7, #16	@ 000e1b68 3904
.org 0xe1b6a
	asrs r1, r1, #16	@ 000e1b6a 0914
.org 0xe1b6c
	muls r0, r1	@ 000e1b6c 4843
.org 0xe1b6e
	asrs r0, r0, #8	@ 000e1b6e 0012
.org 0xe1b70
	str r0, [r4, #92]	@ 000e1b70 e065
.org 0xe1b72
	lsls r0, r5, #1	@ 000e1b72 6800
.org 0xe1b74
	adds r0, r0, r3	@ 000e1b74 c018
.org 0xe1b76
	movs r3, #0	@ 000e1b76 0023
.org 0xe1b78
	ldrsh r0, [r0, r3]	@ 000e1b78 c05e
.org 0xe1b7a
	muls r0, r1	@ 000e1b7a 4843
.org 0xe1b7c
	asrs r0, r0, #8	@ 000e1b7c 0012
.org 0xe1b7e
	str r0, [r4, #96]	@ 000e1b7e 2066
.org 0xe1b80
	strb r2, [r4, #16]	@ 000e1b80 2274
.org 0xe1b82
	strb r2, [r4, #17]	@ 000e1b82 6274
.org 0xe1b84
	pop {r4, r5, r6, r7}	@ 000e1b84 f0bc
.org 0xe1b86
	pop {r0}	@ 000e1b86 01bc
.org 0xe1b88
	bx r0	@ 000e1b88 0047
