@ FUN_08072c30  entry 0x08072c30  size 162
.thumb
.org 0x72c30
FUN_08072c30:
	push {r4, r5, r6, lr}	@ 00072c30 70b5
.org 0x72c32
	adds r6, r0, #0	@ 00072c32 061c
.org 0x72c34
	ldrb r0, [r6, #15]	@ 00072c34 f07b
.org 0x72c36
	cmp r0, #0	@ 00072c36 0028
.org 0x72c38
	bne.n 0x72c58	@ 00072c38 0ed1
.org 0x72c3a
	ldr r0, [pc, #152]	@ 00072c3a 2648
.org 0x72c3c
	bl 0x2b10	@ 00072c3c 8ff768ff
.org 0x72c40
	adds r0, r6, #0	@ 00072c40 301c
.org 0x72c42
	bl 0xab9f8	@ 00072c42 38f0d9fe
.org 0x72c46
	adds r0, r6, #0	@ 00072c46 301c
.org 0x72c48
	movs r1, #21	@ 00072c48 1521
.org 0x72c4a
	bl 0x736c4	@ 00072c4a 00f03bfd
.org 0x72c4e
	movs r0, #28	@ 00072c4e 1c20
.org 0x72c50
	strb r0, [r6, #18]	@ 00072c50 b074
.org 0x72c52
	ldrb r0, [r6, #15]	@ 00072c52 f07b
.org 0x72c54
	adds r0, #1	@ 00072c54 0130
.org 0x72c56
	strb r0, [r6, #15]	@ 00072c56 f073
.org 0x72c58
	adds r0, r6, #0	@ 00072c58 301c
.org 0x72c5a
	bl 0x1cff0	@ 00072c5a aaf7c9f9
.org 0x72c5e
	adds r0, r6, #0	@ 00072c5e 301c
.org 0x72c60
	adds r0, #116	@ 00072c60 7430
.org 0x72c62
	ldr r4, [pc, #116]	@ 00072c62 1d4c
.org 0x72c64
	ldr r3, [pc, #116]	@ 00072c64 1d4b
.org 0x72c66
	adds r1, r6, #0	@ 00072c66 311c
.org 0x72c68
	adds r1, #184	@ 00072c68 b831
.org 0x72c6a
	ldrb r2, [r1, #0]	@ 00072c6a 0a78
.org 0x72c6c
	lsls r1, r2, #1	@ 00072c6c 5100
.org 0x72c6e
	adds r1, r1, r3	@ 00072c6e c918
.org 0x72c70
	ldrh r1, [r1, #0]	@ 00072c70 0988
.org 0x72c72
	lsls r1, r1, #2	@ 00072c72 8900
.org 0x72c74
	adds r1, r1, r4	@ 00072c74 0919
.org 0x72c76
	adds r3, r6, #0	@ 00072c76 331c
.org 0x72c78
	adds r3, #113	@ 00072c78 7133
.org 0x72c7a
	movs r5, #0	@ 00072c7a 0025
.org 0x72c7c
	ldrsb r5, [r3, r5]	@ 00072c7c 5d57
.org 0x72c7e
	ldr r1, [r1, #0]	@ 00072c7e 0968
.org 0x72c80
	lsls r3, r5, #2	@ 00072c80 ab00
.org 0x72c82
	adds r3, r3, r1	@ 00072c82 5b18
.org 0x72c84
	ldr r4, [pc, #88]	@ 00072c84 164c
.org 0x72c86
	adds r1, r6, #0	@ 00072c86 311c
.org 0x72c88
	adds r1, #185	@ 00072c88 b931
.org 0x72c8a
	ldrb r1, [r1, #0]	@ 00072c8a 0978
.org 0x72c8c
	lsls r1, r1, #2	@ 00072c8c 8900
.org 0x72c8e
	adds r1, r1, r4	@ 00072c8e 0919
.org 0x72c90
	ldr r1, [r1, #0]	@ 00072c90 0968
.org 0x72c92
	lsls r2, r2, #2	@ 00072c92 9200
.org 0x72c94
	adds r2, r2, r1	@ 00072c94 5218
.org 0x72c96
	ldr r1, [r2, #0]	@ 00072c96 1168
.org 0x72c98
	adds r1, r1, r5	@ 00072c98 4919
.org 0x72c9a
	ldrb r1, [r1, #0]	@ 00072c9a 0978
.org 0x72c9c
	lsls r2, r1, #1	@ 00072c9c 4a00
.org 0x72c9e
	adds r2, r2, r1	@ 00072c9e 5218
.org 0x72ca0
	lsls r2, r2, #3	@ 00072ca0 d200
.org 0x72ca2
	ldr r1, [r3, #0]	@ 00072ca2 1968
.org 0x72ca4
	adds r1, r1, r2	@ 00072ca4 8918
.org 0x72ca6
	bl 0x5784	@ 00072ca6 92f76dfd
.org 0x72caa
	ldrb r0, [r6, #18]	@ 00072caa b07c
.org 0x72cac
	cmp r0, #0	@ 00072cac 0028
.org 0x72cae
	beq.n 0x72cb4	@ 00072cae 01d0
.org 0x72cb0
	subs r0, #1	@ 00072cb0 0138
.org 0x72cb2
	strb r0, [r6, #18]	@ 00072cb2 b074
.org 0x72cb4
	adds r0, r6, #0	@ 00072cb4 301c
.org 0x72cb6
	adds r0, #115	@ 00072cb6 7330
.org 0x72cb8
	ldrb r0, [r0, #0]	@ 00072cb8 0078
.org 0x72cba
	cmp r0, #3	@ 00072cba 0328
.org 0x72cbc
	bne.n 0x72ccc	@ 00072cbc 06d1
.org 0x72cbe
	ldrb r1, [r6, #18]	@ 00072cbe b17c
.org 0x72cc0
	cmp r1, #0	@ 00072cc0 0029
.org 0x72cc2
	bne.n 0x72ccc	@ 00072cc2 03d1
.org 0x72cc4
	ldrb r0, [r6, #14]	@ 00072cc4 b07b
.org 0x72cc6
	adds r0, #1	@ 00072cc6 0130
.org 0x72cc8
	strb r0, [r6, #14]	@ 00072cc8 b073
.org 0x72cca
	strb r1, [r6, #15]	@ 00072cca f173
.org 0x72ccc
	pop {r4, r5, r6}	@ 00072ccc 70bc
.org 0x72cce
	pop {r0}	@ 00072cce 01bc
.org 0x72cd0
	bx r0	@ 00072cd0 0047
