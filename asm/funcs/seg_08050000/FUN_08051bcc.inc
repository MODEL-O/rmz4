@ FUN_08051bcc  entry 0x08051bcc  size 296
.thumb
.org 0x51bcc
FUN_08051bcc:
	push {r4, r5, r6, r7, lr}	@ 00051bcc f0b5
.org 0x51bce
	sub sp, #8	@ 00051bce 82b0
.org 0x51bd0
	adds r4, r0, #0	@ 00051bd0 041c
.org 0x51bd2
	ldrb r5, [r4, #14]	@ 00051bd2 a57b
.org 0x51bd4
	cmp r5, #0	@ 00051bd4 002d
.org 0x51bd6
	bne.n 0x51bf4	@ 00051bd6 0dd1
.org 0x51bd8
	ldr r1, [pc, #76]	@ 00051bd8 1349
.org 0x51bda
	bl 0x1cf00	@ 00051bda cbf791f9
.org 0x51bde
	movs r0, #233	@ 00051bde e920
.org 0x51be0
	bl 0x2b10	@ 00051be0 b0f796ff
.org 0x51be4
	adds r0, r4, #0	@ 00051be4 201c
.org 0x51be6
	adds r0, #215	@ 00051be6 d730
.org 0x51be8
	strb r5, [r0, #0]	@ 00051be8 0570
.org 0x51bea
	strb r5, [r4, #18]	@ 00051bea a574
.org 0x51bec
	strb r5, [r4, #15]	@ 00051bec e573
.org 0x51bee
	ldrb r0, [r4, #14]	@ 00051bee a07b
.org 0x51bf0
	adds r0, #1	@ 00051bf0 0130
.org 0x51bf2
	strb r0, [r4, #14]	@ 00051bf2 a073
.org 0x51bf4
	adds r0, r4, #0	@ 00051bf4 201c
.org 0x51bf6
	bl 0x1cff0	@ 00051bf6 cbf7fbf9
.org 0x51bfa
	ldrb r0, [r4, #15]	@ 00051bfa e07b
.org 0x51bfc
	cmp r0, #0	@ 00051bfc 0028
.org 0x51bfe
	bne.n 0x51c30	@ 00051bfe 17d1
.org 0x51c00
	adds r0, r4, #0	@ 00051c00 201c
.org 0x51c02
	adds r0, #113	@ 00051c02 7130
.org 0x51c04
	ldrb r0, [r0, #0]	@ 00051c04 0078
.org 0x51c06
	lsls r0, r0, #24	@ 00051c06 0006
.org 0x51c08
	asrs r0, r0, #24	@ 00051c08 0016
.org 0x51c0a
	cmp r0, #9	@ 00051c0a 0928
.org 0x51c0c
	ble.n 0x51cf2	@ 00051c0c 71dd
.org 0x51c0e
	movs r0, #235	@ 00051c0e eb20
.org 0x51c10
	bl 0x2b10	@ 00051c10 b0f77eff
.org 0x51c14
	adds r0, r4, #0	@ 00051c14 201c
.org 0x51c16
	adds r0, #116	@ 00051c16 7430
.org 0x51c18
	ldr r1, [pc, #16]	@ 00051c18 0449
.org 0x51c1a
	bl 0x5784	@ 00051c1a b3f7b3fd
.org 0x51c1e
	ldrb r0, [r4, #15]	@ 00051c1e e07b
.org 0x51c20
	adds r0, #1	@ 00051c20 0130
.org 0x51c22
	strb r0, [r4, #15]	@ 00051c22 e073
.org 0x51c24
	b.n 0x51cf2	@ 00051c24 65e0
.org 0x51c26
	.byte 0x00	@ 00051c26 data
.org 0x51c27
	.byte 0x00	@ 00051c27 data
.org 0x51c28
	.byte 0x08,0xa1,0x00,0x00	@ 00051c28 data
.org 0x51c2c
	.byte 0xa4,0x7f,0x85,0x08	@ 00051c2c data
.org 0x51c30
	ldrb r1, [r4, #18]	@ 00051c30 a17c
.org 0x51c32
	movs r7, #1	@ 00051c32 0127
.org 0x51c34
	movs r0, #1	@ 00051c34 0120
.org 0x51c36
	ands r0, r1	@ 00051c36 0840
.org 0x51c38
	cmp r0, #0	@ 00051c38 0028
.org 0x51c3a
	beq.n 0x51cc4	@ 00051c3a 43d0
.org 0x51c3c
	ldr r0, [r4, #84]	@ 00051c3c 606d
.org 0x51c3e
	str r0, [sp, #0]	@ 00051c3e 0090
.org 0x51c40
	ldr r1, [r4, #88]	@ 00051c40 a16d
.org 0x51c42
	bl 0x8534	@ 00051c42 b6f777fc
.org 0x51c46
	str r0, [sp, #4]	@ 00051c46 0190
.org 0x51c48
	ldr r2, [sp, #0]	@ 00051c48 009a
.org 0x51c4a
	movs r0, #128	@ 00051c4a 8020
.org 0x51c4c
	lsls r0, r0, #5	@ 00051c4c 4001
.org 0x51c4e
	adds r2, r2, r0	@ 00051c4e 1218
.org 0x51c50
	ldr r6, [pc, #68]	@ 00051c50 114e
.org 0x51c52
	ldr r0, [r6, #0]	@ 00051c52 3068
.org 0x51c54
	ldr r5, [pc, #68]	@ 00051c54 114d
.org 0x51c56
	muls r0, r5	@ 00051c56 6843
.org 0x51c58
	ldr r1, [pc, #68]	@ 00051c58 1149
.org 0x51c5a
	adds r0, r0, r1	@ 00051c5a 4018
.org 0x51c5c
	lsls r0, r0, #1	@ 00051c5c 4000
.org 0x51c5e
	lsrs r3, r0, #1	@ 00051c5e 4308
.org 0x51c60
	str r3, [r6, #0]	@ 00051c60 3360
.org 0x51c62
	lsrs r0, r0, #17	@ 00051c62 400c
.org 0x51c64
	movs r1, #31	@ 00051c64 1f21
.org 0x51c66
	ands r0, r1	@ 00051c66 0840
.org 0x51c68
	lsls r0, r0, #8	@ 00051c68 0002
.org 0x51c6a
	subs r2, r2, r0	@ 00051c6a 121a
.org 0x51c6c
	str r2, [sp, #0]	@ 00051c6c 0092
.org 0x51c6e
	ldrb r1, [r4, #18]	@ 00051c6e a17c
.org 0x51c70
	movs r0, #3	@ 00051c70 0320
.org 0x51c72
	ands r0, r1	@ 00051c72 0840
.org 0x51c74
	cmp r0, #1	@ 00051c74 0128
.org 0x51c76
	bne.n 0x51ca8	@ 00051c76 17d1
.org 0x51c78
	ldr r1, [pc, #40]	@ 00051c78 0a49
.org 0x51c7a
	muls r3, r5	@ 00051c7a 6b43
.org 0x51c7c
	ldr r0, [pc, #32]	@ 00051c7c 0848
.org 0x51c7e
	adds r3, r3, r0	@ 00051c7e 1b18
.org 0x51c80
	lsls r3, r3, #1	@ 00051c80 5b00
.org 0x51c82
	lsrs r0, r3, #1	@ 00051c82 5808
.org 0x51c84
	str r0, [r6, #0]	@ 00051c84 3060
.org 0x51c86
	lsrs r3, r3, #17	@ 00051c86 5b0c
.org 0x51c88
	ands r3, r7	@ 00051c88 3b40
.org 0x51c8a
	lsls r3, r3, #4	@ 00051c8a 1b01
.org 0x51c8c
	mov r0, sp	@ 00051c8c 6846
.org 0x51c8e
	movs r2, #0	@ 00051c8e 0022
.org 0x51c90
	bl 0xd4c8c	@ 00051c90 82f0fcff
.org 0x51c94
	b.n 0x51cc4	@ 00051c94 16e0
.org 0x51c96
	.byte 0x00	@ 00051c96 data
.org 0x51c97
	.byte 0x00	@ 00051c97 data
.org 0x51c98
	.byte 0x38,0xdc,0x02,0x02	@ 00051c98 data
.org 0x51c9c
	.byte 0xfd,0x43,0x03,0x00	@ 00051c9c data
.org 0x51ca0
	.byte 0xc3,0x9e,0x26,0x00	@ 00051ca0 data
.org 0x51ca4
	.byte 0x64,0x81,0x85,0x08	@ 00051ca4 data
.org 0x51ca8
	ldr r1, [pc, #44]	@ 00051ca8 0b49
.org 0x51caa
	muls r3, r5	@ 00051caa 6b43
.org 0x51cac
	ldr r0, [pc, #44]	@ 00051cac 0b48
.org 0x51cae
	adds r3, r3, r0	@ 00051cae 1b18
.org 0x51cb0
	lsls r3, r3, #1	@ 00051cb0 5b00
.org 0x51cb2
	lsrs r0, r3, #1	@ 00051cb2 5808
.org 0x51cb4
	str r0, [r6, #0]	@ 00051cb4 3060
.org 0x51cb6
	lsrs r3, r3, #17	@ 00051cb6 5b0c
.org 0x51cb8
	ands r3, r7	@ 00051cb8 3b40
.org 0x51cba
	lsls r3, r3, #4	@ 00051cba 1b01
.org 0x51cbc
	mov r0, sp	@ 00051cbc 6846
.org 0x51cbe
	movs r2, #0	@ 00051cbe 0022
.org 0x51cc0
	bl 0xd4c8c	@ 00051cc0 82f0e4ff
.org 0x51cc4
	ldrb r1, [r4, #18]	@ 00051cc4 a17c
.org 0x51cc6
	movs r0, #3	@ 00051cc6 0320
.org 0x51cc8
	ands r0, r1	@ 00051cc8 0840
.org 0x51cca
	cmp r0, #1	@ 00051cca 0128
.org 0x51ccc
	bhi.n 0x51ce0	@ 00051ccc 08d8
.org 0x51cce
	ldr r0, [r4, #84]	@ 00051cce 606d
.org 0x51cd0
	movs r1, #128	@ 00051cd0 8021
.org 0x51cd2
	lsls r1, r1, #1	@ 00051cd2 4900
.org 0x51cd4
	b.n 0x51ce4	@ 00051cd4 06e0
.org 0x51cd6
	.byte 0x00	@ 00051cd6 data
.org 0x51cd7
	.byte 0x00	@ 00051cd7 data
.org 0x51cd8
	.byte 0x80,0x81,0x85,0x08	@ 00051cd8 data
.org 0x51cdc
	.byte 0xc3,0x9e,0x26,0x00	@ 00051cdc data
.org 0x51ce0
	ldr r0, [r4, #84]	@ 00051ce0 606d
.org 0x51ce2
	ldr r1, [pc, #56]	@ 00051ce2 0e49
.org 0x51ce4
	adds r0, r0, r1	@ 00051ce4 4018
.org 0x51ce6
	str r0, [r4, #84]	@ 00051ce6 6065
.org 0x51ce8
	ldr r0, [r4, #88]	@ 00051ce8 a06d
.org 0x51cea
	movs r1, #176	@ 00051cea b021
.org 0x51cec
	lsls r1, r1, #2	@ 00051cec 8900
.org 0x51cee
	adds r0, r0, r1	@ 00051cee 4018
.org 0x51cf0
	str r0, [r4, #88]	@ 00051cf0 a065
.org 0x51cf2
	ldrb r0, [r4, #18]	@ 00051cf2 a07c
