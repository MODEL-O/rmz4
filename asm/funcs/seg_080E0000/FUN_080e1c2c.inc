@ FUN_080e1c2c  entry 0x080e1c2c  size 138
.thumb
.org 0xe1c2c
FUN_080e1c2c:
	push {r4, r5, r6, r7, lr}	@ 000e1c2c f0b5
.org 0xe1c2e
	mov r7, r8	@ 000e1c2e 4746
.org 0xe1c30
	push {r7}	@ 000e1c30 80b4
.org 0xe1c32
	adds r6, r0, #0	@ 000e1c32 061c
.org 0xe1c34
	lsls r1, r1, #24	@ 000e1c34 0906
.org 0xe1c36
	lsrs r5, r1, #24	@ 000e1c36 0d0e
.org 0xe1c38
	lsls r2, r2, #16	@ 000e1c38 1204
.org 0xe1c3a
	lsrs r7, r2, #16	@ 000e1c3a 170c
.org 0xe1c3c
	lsls r3, r3, #24	@ 000e1c3c 1b06
.org 0xe1c3e
	lsrs r3, r3, #24	@ 000e1c3e 1b0e
.org 0xe1c40
	mov r8, r3	@ 000e1c40 9846
.org 0xe1c42
	ldr r0, [pc, #116]	@ 000e1c42 1d48
.org 0xe1c44
	ldr r0, [r0, #0]	@ 000e1c44 0068
.org 0xe1c46
	bl 0x5500	@ 000e1c46 23f75bfc
.org 0xe1c4a
	adds r4, r0, #0	@ 000e1c4a 041c
.org 0xe1c4c
	cmp r4, #0	@ 000e1c4c 002c
.org 0xe1c4e
	beq.n 0xe1cac	@ 000e1c4e 2dd0
.org 0xe1c50
	adds r1, r4, #0	@ 000e1c50 211c
.org 0xe1c52
	adds r1, #37	@ 000e1c52 2531
.org 0xe1c54
	movs r2, #0	@ 000e1c54 0022
.org 0xe1c56
	movs r0, #1	@ 000e1c56 0120
.org 0xe1c58
	strb r0, [r1, #0]	@ 000e1c58 0870
.org 0xe1c5a
	ldr r0, [pc, #96]	@ 000e1c5a 1848
.org 0xe1c5c
	movs r1, #62	@ 000e1c5c 3e21
.org 0xe1c5e
	strb r1, [r4, #9]	@ 000e1c5e 6172
.org 0xe1c60
	adds r0, #248	@ 000e1c60 f830
.org 0xe1c62
	ldr r0, [r0, #0]	@ 000e1c62 0068
.org 0xe1c64
	ldr r0, [r0, #0]	@ 000e1c64 0068
.org 0xe1c66
	str r0, [r4, #20]	@ 000e1c66 6061
.org 0xe1c68
	movs r3, #0	@ 000e1c68 0023
.org 0xe1c6a
	strh r2, [r4, #32]	@ 000e1c6a 2284
.org 0xe1c6c
	adds r0, r4, #0	@ 000e1c6c 201c
.org 0xe1c6e
	adds r0, #34	@ 000e1c6e 2230
.org 0xe1c70
	strb r3, [r0, #0]	@ 000e1c70 0370
.org 0xe1c72
	ldr r0, [r6, #0]	@ 000e1c72 3068
.org 0xe1c74
	ldr r1, [r6, #4]	@ 000e1c74 7168
.org 0xe1c76
	str r0, [r4, #84]	@ 000e1c76 6065
.org 0xe1c78
	str r1, [r4, #88]	@ 000e1c78 a165
.org 0xe1c7a
	ldr r2, [pc, #68]	@ 000e1c7a 114a
.org 0xe1c7c
	adds r0, r5, #0	@ 000e1c7c 281c
.org 0xe1c7e
	adds r0, #64	@ 000e1c7e 4030
.org 0xe1c80
	lsls r0, r0, #24	@ 000e1c80 0006
.org 0xe1c82
	lsrs r0, r0, #23	@ 000e1c82 c00d
.org 0xe1c84
	adds r0, r0, r2	@ 000e1c84 8018
.org 0xe1c86
	movs r1, #0	@ 000e1c86 0021
.org 0xe1c88
	ldrsh r0, [r0, r1]	@ 000e1c88 405e
.org 0xe1c8a
	lsls r1, r7, #16	@ 000e1c8a 3904
.org 0xe1c8c
	asrs r1, r1, #16	@ 000e1c8c 0914
.org 0xe1c8e
	muls r0, r1	@ 000e1c8e 4843
.org 0xe1c90
	asrs r0, r0, #8	@ 000e1c90 0012
.org 0xe1c92
	str r0, [r4, #92]	@ 000e1c92 e065
.org 0xe1c94
	lsls r0, r5, #1	@ 000e1c94 6800
.org 0xe1c96
	adds r0, r0, r2	@ 000e1c96 8018
.org 0xe1c98
	movs r2, #0	@ 000e1c98 0022
.org 0xe1c9a
	ldrsh r0, [r0, r2]	@ 000e1c9a 805e
.org 0xe1c9c
	muls r0, r1	@ 000e1c9c 4843
.org 0xe1c9e
	asrs r0, r0, #8	@ 000e1c9e 0012
.org 0xe1ca0
	str r0, [r4, #96]	@ 000e1ca0 2066
.org 0xe1ca2
	strb r3, [r4, #16]	@ 000e1ca2 2374
.org 0xe1ca4
	movs r1, #112	@ 000e1ca4 7021
.org 0xe1ca6
	mov r0, r8	@ 000e1ca6 4046
.org 0xe1ca8
	orrs r0, r1	@ 000e1ca8 0843
.org 0xe1caa
	strb r0, [r4, #17]	@ 000e1caa 6074
.org 0xe1cac
	pop {r3}	@ 000e1cac 08bc
.org 0xe1cae
	mov r8, r3	@ 000e1cae 9846
.org 0xe1cb0
	pop {r4, r5, r6, r7}	@ 000e1cb0 f0bc
.org 0xe1cb2
	pop {r0}	@ 000e1cb2 01bc
.org 0xe1cb4
	bx r0	@ 000e1cb4 0047
