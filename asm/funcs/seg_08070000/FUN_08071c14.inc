@ FUN_08071c14  entry 0x08071c14  size 156
.thumb
.org 0x71c14
FUN_08071c14:
	push {r4, r5, r6, lr}	@ 00071c14 70b5
.org 0x71c16
	adds r6, r0, #0	@ 00071c16 061c
.org 0x71c18
	ldrb r0, [r6, #15]	@ 00071c18 f07b
.org 0x71c1a
	cmp r0, #0	@ 00071c1a 0028
.org 0x71c1c
	bne.n 0x71c30	@ 00071c1c 08d1
.org 0x71c1e
	adds r0, r6, #0	@ 00071c1e 301c
.org 0x71c20
	movs r1, #11	@ 00071c20 0b21
.org 0x71c22
	bl 0x736c4	@ 00071c22 01f04ffd
.org 0x71c26
	movs r0, #16	@ 00071c26 1020
.org 0x71c28
	strb r0, [r6, #18]	@ 00071c28 b074
.org 0x71c2a
	ldrb r0, [r6, #15]	@ 00071c2a f07b
.org 0x71c2c
	adds r0, #1	@ 00071c2c 0130
.org 0x71c2e
	strb r0, [r6, #15]	@ 00071c2e f073
.org 0x71c30
	adds r0, r6, #0	@ 00071c30 301c
.org 0x71c32
	bl 0x1cff0	@ 00071c32 abf7ddf9
.org 0x71c36
	adds r0, r6, #0	@ 00071c36 301c
.org 0x71c38
	adds r0, #116	@ 00071c38 7430
.org 0x71c3a
	ldr r4, [pc, #116]	@ 00071c3a 1d4c
.org 0x71c3c
	ldr r3, [pc, #116]	@ 00071c3c 1d4b
.org 0x71c3e
	adds r1, r6, #0	@ 00071c3e 311c
.org 0x71c40
	adds r1, #184	@ 00071c40 b831
.org 0x71c42
	ldrb r2, [r1, #0]	@ 00071c42 0a78
.org 0x71c44
	lsls r1, r2, #1	@ 00071c44 5100
.org 0x71c46
	adds r1, r1, r3	@ 00071c46 c918
.org 0x71c48
	ldrh r1, [r1, #0]	@ 00071c48 0988
.org 0x71c4a
	lsls r1, r1, #2	@ 00071c4a 8900
.org 0x71c4c
	adds r1, r1, r4	@ 00071c4c 0919
.org 0x71c4e
	adds r3, r6, #0	@ 00071c4e 331c
.org 0x71c50
	adds r3, #113	@ 00071c50 7133
.org 0x71c52
	movs r5, #0	@ 00071c52 0025
.org 0x71c54
	ldrsb r5, [r3, r5]	@ 00071c54 5d57
.org 0x71c56
	ldr r1, [r1, #0]	@ 00071c56 0968
.org 0x71c58
	lsls r3, r5, #2	@ 00071c58 ab00
.org 0x71c5a
	adds r3, r3, r1	@ 00071c5a 5b18
.org 0x71c5c
	ldr r4, [pc, #88]	@ 00071c5c 164c
.org 0x71c5e
	adds r1, r6, #0	@ 00071c5e 311c
.org 0x71c60
	adds r1, #185	@ 00071c60 b931
.org 0x71c62
	ldrb r1, [r1, #0]	@ 00071c62 0978
.org 0x71c64
	lsls r1, r1, #2	@ 00071c64 8900
.org 0x71c66
	adds r1, r1, r4	@ 00071c66 0919
.org 0x71c68
	ldr r1, [r1, #0]	@ 00071c68 0968
.org 0x71c6a
	lsls r2, r2, #2	@ 00071c6a 9200
.org 0x71c6c
	adds r2, r2, r1	@ 00071c6c 5218
.org 0x71c6e
	ldr r1, [r2, #0]	@ 00071c6e 1168
.org 0x71c70
	adds r1, r1, r5	@ 00071c70 4919
.org 0x71c72
	ldrb r1, [r1, #0]	@ 00071c72 0978
.org 0x71c74
	lsls r2, r1, #1	@ 00071c74 4a00
.org 0x71c76
	adds r2, r2, r1	@ 00071c76 5218
.org 0x71c78
	lsls r2, r2, #3	@ 00071c78 d200
.org 0x71c7a
	ldr r1, [r3, #0]	@ 00071c7a 1968
.org 0x71c7c
	adds r1, r1, r2	@ 00071c7c 8918
.org 0x71c7e
	bl 0x5784	@ 00071c7e 93f781fd
.org 0x71c82
	ldrb r0, [r6, #18]	@ 00071c82 b07c
.org 0x71c84
	cmp r0, #0	@ 00071c84 0028
.org 0x71c86
	beq.n 0x71c8c	@ 00071c86 01d0
.org 0x71c88
	subs r0, #1	@ 00071c88 0138
.org 0x71c8a
	strb r0, [r6, #18]	@ 00071c8a b074
.org 0x71c8c
	adds r0, r6, #0	@ 00071c8c 301c
.org 0x71c8e
	bl 0x73a68	@ 00071c8e 01f0ebfe
.org 0x71c92
	adds r0, r6, #0	@ 00071c92 301c
.org 0x71c94
	adds r0, #115	@ 00071c94 7330
.org 0x71c96
	ldrb r0, [r0, #0]	@ 00071c96 0078
.org 0x71c98
	cmp r0, #3	@ 00071c98 0328
.org 0x71c9a
	bne.n 0x71caa	@ 00071c9a 06d1
.org 0x71c9c
	ldrb r1, [r6, #18]	@ 00071c9c b17c
.org 0x71c9e
	cmp r1, #0	@ 00071c9e 0029
.org 0x71ca0
	bne.n 0x71caa	@ 00071ca0 03d1
.org 0x71ca2
	ldrb r0, [r6, #14]	@ 00071ca2 b07b
.org 0x71ca4
	adds r0, #1	@ 00071ca4 0130
.org 0x71ca6
	strb r0, [r6, #14]	@ 00071ca6 b073
.org 0x71ca8
	strb r1, [r6, #15]	@ 00071ca8 f173
.org 0x71caa
	pop {r4, r5, r6}	@ 00071caa 70bc
.org 0x71cac
	pop {r0}	@ 00071cac 01bc
.org 0x71cae
	bx r0	@ 00071cae 0047
