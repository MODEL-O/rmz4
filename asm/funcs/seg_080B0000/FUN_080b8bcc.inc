@ FUN_080b8bcc  entry 0x080b8bcc  size 222
.thumb
.org 0xb8bcc
FUN_080b8bcc:
	push {r4, r5, lr}	@ 000b8bcc 30b5
.org 0xb8bce
	adds r5, r0, #0	@ 000b8bce 051c
.org 0xb8bd0
	ldr r1, [r5, #40]	@ 000b8bd0 a96a
.org 0xb8bd2
	ldrb r0, [r5, #15]	@ 000b8bd2 e87b
.org 0xb8bd4
	cmp r0, #0	@ 000b8bd4 0028
.org 0xb8bd6
	bne.n 0xb8c0c	@ 000b8bd6 19d1
.org 0xb8bd8
	adds r1, #191	@ 000b8bd8 bf31
.org 0xb8bda
	ldrb r0, [r1, #0]	@ 000b8bda 0878
.org 0xb8bdc
	movs r4, #4	@ 000b8bdc 0424
.org 0xb8bde
	orrs r0, r4	@ 000b8bde 2043
.org 0xb8be0
	strb r0, [r1, #0]	@ 000b8be0 0870
.org 0xb8be2
	adds r0, r5, #0	@ 000b8be2 281c
.org 0xb8be4
	adds r0, #116	@ 000b8be4 7430
.org 0xb8be6
	ldr r1, [pc, #196]	@ 000b8be6 3149
.org 0xb8be8
	bl 0x5784	@ 000b8be8 4cf7ccfd
.org 0xb8bec
	ldr r1, [pc, #192]	@ 000b8bec 3049
.org 0xb8bee
	ldr r0, [pc, #196]	@ 000b8bee 3148
.org 0xb8bf0
	strh r0, [r1, #0]	@ 000b8bf0 0880
.org 0xb8bf2
	adds r2, r5, #0	@ 000b8bf2 2a1c
.org 0xb8bf4
	adds r2, #69	@ 000b8bf4 4532
.org 0xb8bf6
	ldrb r1, [r2, #0]	@ 000b8bf6 1178
.org 0xb8bf8
	movs r0, #13	@ 000b8bf8 0d20
.org 0xb8bfa
	negs r0, r0	@ 000b8bfa 4042
.org 0xb8bfc
	ands r0, r1	@ 000b8bfc 0840
.org 0xb8bfe
	orrs r0, r4	@ 000b8bfe 2043
.org 0xb8c00
	strb r0, [r2, #0]	@ 000b8c00 1070
.org 0xb8c02
	movs r0, #32	@ 000b8c02 2020
.org 0xb8c04
	strb r0, [r5, #18]	@ 000b8c04 a874
.org 0xb8c06
	ldrb r0, [r5, #15]	@ 000b8c06 e87b
.org 0xb8c08
	adds r0, #1	@ 000b8c08 0130
.org 0xb8c0a
	strb r0, [r5, #15]	@ 000b8c0a e873
.org 0xb8c0c
	adds r0, r5, #0	@ 000b8c0c 281c
.org 0xb8c0e
	bl 0x1cff0	@ 000b8c0e 64f7eff9
.org 0xb8c12
	ldrb r0, [r5, #18]	@ 000b8c12 a87c
.org 0xb8c14
	subs r4, r0, #1	@ 000b8c14 441e
.org 0xb8c16
	strb r4, [r5, #18]	@ 000b8c16 ac74
.org 0xb8c18
	ldrb r0, [r5, #18]	@ 000b8c18 a87c
.org 0xb8c1a
	ldr r2, [pc, #156]	@ 000b8c1a 274a
.org 0xb8c1c
	lsls r0, r0, #25	@ 000b8c1c 4006
.org 0xb8c1e
	lsrs r0, r0, #23	@ 000b8c1e c00d
.org 0xb8c20
	adds r0, r0, r2	@ 000b8c20 8018
.org 0xb8c22
	movs r1, #0	@ 000b8c22 0021
.org 0xb8c24
	ldrsh r0, [r0, r1]	@ 000b8c24 405e
.org 0xb8c26
	adds r1, r0, #0	@ 000b8c26 011c
.org 0xb8c28
	cmp r0, #0	@ 000b8c28 0028
.org 0xb8c2a
	bge.n 0xb8c2e	@ 000b8c2a 00da
.org 0xb8c2c
	adds r1, r0, #3	@ 000b8c2c c11c
.org 0xb8c2e
	asrs r0, r1, #2	@ 000b8c2e 8810
.org 0xb8c30
	lsls r0, r0, #24	@ 000b8c30 0006
.org 0xb8c32
	lsrs r0, r0, #23	@ 000b8c32 c00d
.org 0xb8c34
	adds r0, r0, r2	@ 000b8c34 8018
.org 0xb8c36
	movs r1, #0	@ 000b8c36 0021
.org 0xb8c38
	ldrsh r0, [r0, r1]	@ 000b8c38 405e
.org 0xb8c3a
	cmp r0, #0	@ 000b8c3a 0028
.org 0xb8c3c
	bge.n 0xb8c40	@ 000b8c3c 00da
.org 0xb8c3e
	adds r0, #15	@ 000b8c3e 0f30
.org 0xb8c40
	asrs r2, r0, #4	@ 000b8c40 0211
.org 0xb8c42
	ldr r3, [pc, #108]	@ 000b8c42 1b4b
.org 0xb8c44
	movs r0, #31	@ 000b8c44 1f20
.org 0xb8c46
	adds r1, r2, #0	@ 000b8c46 111c
.org 0xb8c48
	ands r1, r0	@ 000b8c48 0140
.org 0xb8c4a
	movs r0, #16	@ 000b8c4a 1020
.org 0xb8c4c
	subs r0, r0, r2	@ 000b8c4c 801a
.org 0xb8c4e
	lsls r0, r0, #8	@ 000b8c4e 0002
.org 0xb8c50
	orrs r1, r0	@ 000b8c50 0143
.org 0xb8c52
	strh r1, [r3, #2]	@ 000b8c52 5980
.org 0xb8c54
	lsls r0, r4, #24	@ 000b8c54 2006
.org 0xb8c56
	lsrs r2, r0, #24	@ 000b8c56 020e
.org 0xb8c58
	cmp r2, #0	@ 000b8c58 002a
.org 0xb8c5a
	bne.n 0xb8ca4	@ 000b8c5a 23d1
.org 0xb8c5c
	strh r2, [r3, #0]	@ 000b8c5c 1a80
.org 0xb8c5e
	adds r3, r5, #0	@ 000b8c5e 2b1c
.org 0xb8c60
	adds r3, #69	@ 000b8c60 4533
.org 0xb8c62
	ldrb r1, [r3, #0]	@ 000b8c62 1978
.org 0xb8c64
	movs r0, #13	@ 000b8c64 0d20
.org 0xb8c66
	negs r0, r0	@ 000b8c66 4042
.org 0xb8c68
	ands r0, r1	@ 000b8c68 0840
.org 0xb8c6a
	strb r0, [r3, #0]	@ 000b8c6a 1870
.org 0xb8c6c
	ldrb r1, [r5, #10]	@ 000b8c6c a97a
.org 0xb8c6e
	movs r0, #254	@ 000b8c6e fe20
.org 0xb8c70
	ands r0, r1	@ 000b8c70 0840
.org 0xb8c72
	movs r1, #253	@ 000b8c72 fd21
.org 0xb8c74
	ands r0, r1	@ 000b8c74 0840
.org 0xb8c76
	strb r0, [r5, #10]	@ 000b8c76 a872
.org 0xb8c78
	adds r0, r5, #0	@ 000b8c78 281c
.org 0xb8c7a
	adds r0, #140	@ 000b8c7a 8c30
.org 0xb8c7c
	str r2, [r0, #0]	@ 000b8c7c 0260
.org 0xb8c7e
	adds r0, #4	@ 000b8c7e 0430
.org 0xb8c80
	str r2, [r0, #0]	@ 000b8c80 0260
.org 0xb8c82
	adds r1, r5, #0	@ 000b8c82 291c
.org 0xb8c84
	adds r1, #148	@ 000b8c84 9431
.org 0xb8c86
	movs r0, #0	@ 000b8c86 0020
.org 0xb8c88
	strb r0, [r1, #0]	@ 000b8c88 0870
.org 0xb8c8a
	ldrb r1, [r5, #10]	@ 000b8c8a a97a
.org 0xb8c8c
	movs r0, #251	@ 000b8c8c fb20
.org 0xb8c8e
	ands r0, r1	@ 000b8c8e 0840
.org 0xb8c90
	strb r0, [r5, #10]	@ 000b8c90 a872
.org 0xb8c92
	ldr r1, [pc, #40]	@ 000b8c92 0a49
.org 0xb8c94
	ldrb r0, [r5, #9]	@ 000b8c94 687a
.org 0xb8c96
	lsls r0, r0, #2	@ 000b8c96 8000
.org 0xb8c98
	adds r0, r0, r1	@ 000b8c98 4018
.org 0xb8c9a
	movs r1, #3	@ 000b8c9a 0321
.org 0xb8c9c
	str r1, [r5, #12]	@ 000b8c9c e960
.org 0xb8c9e
	ldr r0, [r0, #0]	@ 000b8c9e 0068
.org 0xb8ca0
	ldr r0, [r0, #12]	@ 000b8ca0 c068
.org 0xb8ca2
	str r0, [r5, #20]	@ 000b8ca2 6861
.org 0xb8ca4
	pop {r4, r5}	@ 000b8ca4 30bc
.org 0xb8ca6
	pop {r0}	@ 000b8ca6 01bc
.org 0xb8ca8
	bx r0	@ 000b8ca8 0047
