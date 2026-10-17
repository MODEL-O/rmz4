@ FUN_08062b90  entry 0x08062b90  size 314
.thumb
.org 0x62b90
FUN_08062b90:
	push {r4, r5, r6, r7, lr}	@ 00062b90 f0b5
.org 0x62b92
	mov r7, r8	@ 00062b92 4746
.org 0x62b94
	push {r7}	@ 00062b94 80b4
.org 0x62b96
	sub sp, #16	@ 00062b96 84b0
.org 0x62b98
	adds r7, r0, #0	@ 00062b98 071c
.org 0x62b9a
	ldr r1, [pc, #304]	@ 00062b9a 4c49
.org 0x62b9c
	mov r0, sp	@ 00062b9c 6846
.org 0x62b9e
	movs r2, #4	@ 00062b9e 0422
.org 0x62ba0
	bl 0x129258	@ 00062ba0 c6f05afb
.org 0x62ba4
	add r4, sp, #4	@ 00062ba4 01ac
.org 0x62ba6
	ldr r1, [pc, #296]	@ 00062ba6 4a49
.org 0x62ba8
	adds r0, r4, #0	@ 00062ba8 201c
.org 0x62baa
	movs r2, #4	@ 00062baa 0422
.org 0x62bac
	bl 0x129258	@ 00062bac c6f054fb
.org 0x62bb0
	ldrb r0, [r7, #10]	@ 00062bb0 b87a
.org 0x62bb2
	lsrs r6, r0, #4	@ 00062bb2 0609
.org 0x62bb4
	movs r0, #1	@ 00062bb4 0120
.org 0x62bb6
	ands r6, r0	@ 00062bb6 0640
.org 0x62bb8
	ldrb r0, [r7, #15]	@ 00062bb8 f87b
.org 0x62bba
	cmp r0, #0	@ 00062bba 0028
.org 0x62bbc
	bne.n 0x62c4a	@ 00062bbc 45d1
.org 0x62bbe
	movs r0, #134	@ 00062bbe 8620
.org 0x62bc0
	lsls r0, r0, #1	@ 00062bc0 4000
.org 0x62bc2
	bl 0x2b10	@ 00062bc2 9ff7a5ff
.org 0x62bc6
	movs r2, #0	@ 00062bc6 0022
.org 0x62bc8
	ldr r0, [pc, #264]	@ 00062bc8 4248
.org 0x62bca
	ldr r0, [r0, #0]	@ 00062bca 0068
.org 0x62bcc
	ldr r0, [r0, #84]	@ 00062bcc 406d
.org 0x62bce
	ldr r1, [r7, #84]	@ 00062bce 796d
.org 0x62bd0
	subs r0, r0, r1	@ 00062bd0 401a
.org 0x62bd2
	ldr r1, [pc, #260]	@ 00062bd2 4149
.org 0x62bd4
	adds r0, r0, r1	@ 00062bd4 4018
.org 0x62bd6
	ldr r1, [pc, #260]	@ 00062bd6 4149
.org 0x62bd8
	cmp r0, r1	@ 00062bd8 8842
.org 0x62bda
	bls.n 0x62bde	@ 00062bda 00d9
.org 0x62bdc
	movs r2, #1	@ 00062bdc 0122
.org 0x62bde
	lsls r2, r2, #1	@ 00062bde 5200
.org 0x62be0
	mov r8, r2	@ 00062be0 9046
.org 0x62be2
	adds r0, r4, r2	@ 00062be2 a018
.org 0x62be4
	movs r1, #2	@ 00062be4 0221
.org 0x62be6
	bl 0x6635c	@ 00062be6 03f0b9fb
.org 0x62bea
	lsls r6, r6, #1	@ 00062bea 7600
.org 0x62bec
	subs r1, r6, #1	@ 00062bec 711e
.org 0x62bee
	lsls r1, r1, #11	@ 00062bee c902
.org 0x62bf0
	ldr r0, [r7, #84]	@ 00062bf0 786d
.org 0x62bf2
	adds r0, r0, r1	@ 00062bf2 4018
.org 0x62bf4
	str r0, [sp, #8]	@ 00062bf4 0290
.org 0x62bf6
	ldr r0, [r7, #88]	@ 00062bf6 b86d
.org 0x62bf8
	ldr r1, [pc, #228]	@ 00062bf8 3949
.org 0x62bfa
	adds r0, r0, r1	@ 00062bfa 4018
.org 0x62bfc
	add r5, sp, #8	@ 00062bfc 02ad
.org 0x62bfe
	str r0, [r5, #4]	@ 00062bfe 6860
.org 0x62c00
	mov r0, sp	@ 00062c00 6846
.org 0x62c02
	add r0, r8	@ 00062c02 4044
.org 0x62c04
	ldrb r2, [r0, #0]	@ 00062c04 0278
.org 0x62c06
	movs r4, #160	@ 00062c06 a024
.org 0x62c08
	lsls r4, r4, #1	@ 00062c08 6400
.org 0x62c0a
	subs r0, r4, r2	@ 00062c0a a01a
.org 0x62c0c
	muls r0, r6	@ 00062c0c 7043
.org 0x62c0e
	adds r2, r2, r0	@ 00062c0e 1218
.org 0x62c10
	lsls r2, r2, #24	@ 00062c10 1206
.org 0x62c12
	lsrs r2, r2, #24	@ 00062c12 120e
.org 0x62c14
	adds r0, r7, #0	@ 00062c14 381c
.org 0x62c16
	adds r1, r5, #0	@ 00062c16 291c
.org 0x62c18
	bl 0xc71c8	@ 00062c18 64f0d6fa
.org 0x62c1c
	mov r0, sp	@ 00062c1c 6846
.org 0x62c1e
	adds r0, #1	@ 00062c1e 0130
.org 0x62c20
	add r0, r8	@ 00062c20 4044
.org 0x62c22
	ldrb r2, [r0, #0]	@ 00062c22 0278
.org 0x62c24
	subs r4, r4, r2	@ 00062c24 a41a
.org 0x62c26
	adds r0, r4, #0	@ 00062c26 201c
.org 0x62c28
	muls r0, r6	@ 00062c28 7043
.org 0x62c2a
	adds r2, r2, r0	@ 00062c2a 1218
.org 0x62c2c
	lsls r2, r2, #24	@ 00062c2c 1206
.org 0x62c2e
	lsrs r2, r2, #24	@ 00062c2e 120e
.org 0x62c30
	adds r0, r7, #0	@ 00062c30 381c
.org 0x62c32
	adds r1, r5, #0	@ 00062c32 291c
.org 0x62c34
	bl 0xc71c8	@ 00062c34 64f0c8fa
.org 0x62c38
	adds r0, r7, #0	@ 00062c38 381c
.org 0x62c3a
	movs r1, #6	@ 00062c3a 0621
.org 0x62c3c
	bl 0x65a94	@ 00062c3c 02f02aff
.org 0x62c40
	movs r0, #32	@ 00062c40 2020
.org 0x62c42
	strb r0, [r7, #18]	@ 00062c42 b874
.org 0x62c44
	ldrb r0, [r7, #15]	@ 00062c44 f87b
.org 0x62c46
	adds r0, #1	@ 00062c46 0130
.org 0x62c48
	strb r0, [r7, #15]	@ 00062c48 f873
.org 0x62c4a
	adds r0, r7, #0	@ 00062c4a 381c
.org 0x62c4c
	bl 0x1cff0	@ 00062c4c baf7d0f9
.org 0x62c50
	adds r0, r7, #0	@ 00062c50 381c
.org 0x62c52
	adds r0, #116	@ 00062c52 7430
.org 0x62c54
	ldr r4, [pc, #140]	@ 00062c54 234c
.org 0x62c56
	ldr r3, [pc, #144]	@ 00062c56 244b
.org 0x62c58
	adds r1, r7, #0	@ 00062c58 391c
.org 0x62c5a
	adds r1, #180	@ 00062c5a b431
.org 0x62c5c
	ldrb r2, [r1, #0]	@ 00062c5c 0a78
.org 0x62c5e
	lsls r1, r2, #1	@ 00062c5e 5100
.org 0x62c60
	adds r1, r1, r3	@ 00062c60 c918
.org 0x62c62
	ldrh r1, [r1, #0]	@ 00062c62 0988
.org 0x62c64
	lsls r1, r1, #2	@ 00062c64 8900
.org 0x62c66
	adds r1, r1, r4	@ 00062c66 0919
.org 0x62c68
	adds r3, r7, #0	@ 00062c68 3b1c
.org 0x62c6a
	adds r3, #113	@ 00062c6a 7133
.org 0x62c6c
	movs r5, #0	@ 00062c6c 0025
.org 0x62c6e
	ldrsb r5, [r3, r5]	@ 00062c6e 5d57
.org 0x62c70
	ldr r1, [r1, #0]	@ 00062c70 0968
.org 0x62c72
	lsls r3, r5, #2	@ 00062c72 ab00
.org 0x62c74
	adds r3, r3, r1	@ 00062c74 5b18
.org 0x62c76
	ldr r4, [pc, #116]	@ 00062c76 1d4c
.org 0x62c78
	adds r1, r7, #0	@ 00062c78 391c
.org 0x62c7a
	adds r1, #181	@ 00062c7a b531
.org 0x62c7c
	ldrb r1, [r1, #0]	@ 00062c7c 0978
.org 0x62c7e
	lsls r1, r1, #2	@ 00062c7e 8900
.org 0x62c80
	adds r1, r1, r4	@ 00062c80 0919
.org 0x62c82
	ldr r1, [r1, #0]	@ 00062c82 0968
.org 0x62c84
	lsls r2, r2, #2	@ 00062c84 9200
.org 0x62c86
	adds r2, r2, r1	@ 00062c86 5218
.org 0x62c88
	ldr r1, [r2, #0]	@ 00062c88 1168
.org 0x62c8a
	adds r1, r1, r5	@ 00062c8a 4919
.org 0x62c8c
	ldrb r1, [r1, #0]	@ 00062c8c 0978
.org 0x62c8e
	lsls r2, r1, #1	@ 00062c8e 4a00
.org 0x62c90
	adds r2, r2, r1	@ 00062c90 5218
.org 0x62c92
	lsls r2, r2, #3	@ 00062c92 d200
.org 0x62c94
	ldr r1, [r3, #0]	@ 00062c94 1968
.org 0x62c96
	adds r1, r1, r2	@ 00062c96 8918
.org 0x62c98
	bl 0x5784	@ 00062c98 a2f774fd
.org 0x62c9c
	ldrb r0, [r7, #18]	@ 00062c9c b87c
.org 0x62c9e
	cmp r0, #0	@ 00062c9e 0028
.org 0x62ca0
	beq.n 0x62cac	@ 00062ca0 04d0
.org 0x62ca2
	subs r0, #1	@ 00062ca2 0138
.org 0x62ca4
	strb r0, [r7, #18]	@ 00062ca4 b874
.org 0x62ca6
	lsls r0, r0, #24	@ 00062ca6 0006
.org 0x62ca8
	cmp r0, #0	@ 00062ca8 0028
.org 0x62caa
	bne.n 0x62cbe	@ 00062caa 08d1
.org 0x62cac
	adds r0, r7, #0	@ 00062cac 381c
.org 0x62cae
	adds r0, #115	@ 00062cae 7330
.org 0x62cb0
	ldrb r0, [r0, #0]	@ 00062cb0 0078
.org 0x62cb2
	cmp r0, #3	@ 00062cb2 0328
.org 0x62cb4
	bne.n 0x62cbe	@ 00062cb4 03d1
.org 0x62cb6
	movs r1, #0	@ 00062cb6 0021
.org 0x62cb8
	movs r0, #2	@ 00062cb8 0220
.org 0x62cba
	strb r0, [r7, #14]	@ 00062cba b873
.org 0x62cbc
	strb r1, [r7, #15]	@ 00062cbc f973
.org 0x62cbe
	add sp, #16	@ 00062cbe 04b0
.org 0x62cc0
	pop {r3}	@ 00062cc0 08bc
.org 0x62cc2
	mov r8, r3	@ 00062cc2 9846
.org 0x62cc4
	pop {r4, r5, r6, r7}	@ 00062cc4 f0bc
.org 0x62cc6
	pop {r0}	@ 00062cc6 01bc
.org 0x62cc8
	bx r0	@ 00062cc8 0047
