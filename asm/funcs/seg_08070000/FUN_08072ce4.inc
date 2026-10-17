@ FUN_08072ce4  entry 0x08072ce4  size 180
.thumb
.org 0x72ce4
FUN_08072ce4:
	push {r4, r5, r6, lr}	@ 00072ce4 70b5
.org 0x72ce6
	adds r6, r0, #0	@ 00072ce6 061c
.org 0x72ce8
	ldrb r0, [r6, #15]	@ 00072ce8 f07b
.org 0x72cea
	cmp r0, #0	@ 00072cea 0028
.org 0x72cec
	bne.n 0x72d0e	@ 00072cec 0fd1
.org 0x72cee
	adds r1, r6, #0	@ 00072cee 311c
.org 0x72cf0
	adds r1, #84	@ 00072cf0 5431
.org 0x72cf2
	adds r0, r6, #0	@ 00072cf2 301c
.org 0x72cf4
	movs r2, #0	@ 00072cf4 0022
.org 0x72cf6
	movs r3, #0	@ 00072cf6 0023
.org 0x72cf8
	bl 0xe3630	@ 00072cf8 70f09afc
.org 0x72cfc
	adds r0, r6, #0	@ 00072cfc 301c
.org 0x72cfe
	movs r1, #22	@ 00072cfe 1621
.org 0x72d00
	bl 0x736c4	@ 00072d00 00f0e0fc
.org 0x72d04
	movs r0, #68	@ 00072d04 4420
.org 0x72d06
	strb r0, [r6, #18]	@ 00072d06 b074
.org 0x72d08
	ldrb r0, [r6, #15]	@ 00072d08 f07b
.org 0x72d0a
	adds r0, #1	@ 00072d0a 0130
.org 0x72d0c
	strb r0, [r6, #15]	@ 00072d0c f073
.org 0x72d0e
	adds r0, r6, #0	@ 00072d0e 301c
.org 0x72d10
	bl 0x1cff0	@ 00072d10 aaf76ef9
.org 0x72d14
	adds r0, r6, #0	@ 00072d14 301c
.org 0x72d16
	adds r0, #116	@ 00072d16 7430
.org 0x72d18
	ldr r4, [pc, #124]	@ 00072d18 1f4c
.org 0x72d1a
	ldr r3, [pc, #128]	@ 00072d1a 204b
.org 0x72d1c
	adds r1, r6, #0	@ 00072d1c 311c
.org 0x72d1e
	adds r1, #184	@ 00072d1e b831
.org 0x72d20
	ldrb r2, [r1, #0]	@ 00072d20 0a78
.org 0x72d22
	lsls r1, r2, #1	@ 00072d22 5100
.org 0x72d24
	adds r1, r1, r3	@ 00072d24 c918
.org 0x72d26
	ldrh r1, [r1, #0]	@ 00072d26 0988
.org 0x72d28
	lsls r1, r1, #2	@ 00072d28 8900
.org 0x72d2a
	adds r1, r1, r4	@ 00072d2a 0919
.org 0x72d2c
	adds r3, r6, #0	@ 00072d2c 331c
.org 0x72d2e
	adds r3, #113	@ 00072d2e 7133
.org 0x72d30
	movs r5, #0	@ 00072d30 0025
.org 0x72d32
	ldrsb r5, [r3, r5]	@ 00072d32 5d57
.org 0x72d34
	ldr r1, [r1, #0]	@ 00072d34 0968
.org 0x72d36
	lsls r3, r5, #2	@ 00072d36 ab00
.org 0x72d38
	adds r3, r3, r1	@ 00072d38 5b18
.org 0x72d3a
	ldr r4, [pc, #100]	@ 00072d3a 194c
.org 0x72d3c
	adds r1, r6, #0	@ 00072d3c 311c
.org 0x72d3e
	adds r1, #185	@ 00072d3e b931
.org 0x72d40
	ldrb r1, [r1, #0]	@ 00072d40 0978
.org 0x72d42
	lsls r1, r1, #2	@ 00072d42 8900
.org 0x72d44
	adds r1, r1, r4	@ 00072d44 0919
.org 0x72d46
	ldr r1, [r1, #0]	@ 00072d46 0968
.org 0x72d48
	lsls r2, r2, #2	@ 00072d48 9200
.org 0x72d4a
	adds r2, r2, r1	@ 00072d4a 5218
.org 0x72d4c
	ldr r1, [r2, #0]	@ 00072d4c 1168
.org 0x72d4e
	adds r1, r1, r5	@ 00072d4e 4919
.org 0x72d50
	ldrb r1, [r1, #0]	@ 00072d50 0978
.org 0x72d52
	lsls r2, r1, #1	@ 00072d52 4a00
.org 0x72d54
	adds r2, r2, r1	@ 00072d54 5218
.org 0x72d56
	lsls r2, r2, #3	@ 00072d56 d200
.org 0x72d58
	ldr r1, [r3, #0]	@ 00072d58 1968
.org 0x72d5a
	adds r1, r1, r2	@ 00072d5a 8918
.org 0x72d5c
	bl 0x5784	@ 00072d5c 92f712fd
.org 0x72d60
	ldrb r0, [r6, #18]	@ 00072d60 b07c
.org 0x72d62
	cmp r0, #0	@ 00072d62 0028
.org 0x72d64
	beq.n 0x72d6a	@ 00072d64 01d0
.org 0x72d66
	subs r0, #1	@ 00072d66 0138
.org 0x72d68
	strb r0, [r6, #18]	@ 00072d68 b074
.org 0x72d6a
	ldrb r0, [r6, #18]	@ 00072d6a b07c
.org 0x72d6c
	cmp r0, #36	@ 00072d6c 2428
.org 0x72d6e
	bne.n 0x72d84	@ 00072d6e 09d1
.org 0x72d70
	adds r1, r6, #0	@ 00072d70 311c
.org 0x72d72
	adds r1, #200	@ 00072d72 c831
.org 0x72d74
	movs r2, #0	@ 00072d74 0022
.org 0x72d76
	movs r0, #1	@ 00072d76 0120
.org 0x72d78
	strb r0, [r1, #0]	@ 00072d78 0870
.org 0x72d7a
	adds r0, r6, #0	@ 00072d7a 301c
.org 0x72d7c
	adds r0, #180	@ 00072d7c b430
.org 0x72d7e
	ldr r0, [r0, #0]	@ 00072d7e 0068
.org 0x72d80
	adds r0, #180	@ 00072d80 b430
.org 0x72d82
	strb r2, [r0, #0]	@ 00072d82 0270
.org 0x72d84
	ldrb r1, [r6, #18]	@ 00072d84 b17c
.org 0x72d86
	cmp r1, #0	@ 00072d86 0029
.org 0x72d88
	bne.n 0x72d92	@ 00072d88 03d1
.org 0x72d8a
	ldrb r0, [r6, #14]	@ 00072d8a b07b
.org 0x72d8c
	adds r0, #1	@ 00072d8c 0130
.org 0x72d8e
	strb r0, [r6, #14]	@ 00072d8e b073
.org 0x72d90
	strb r1, [r6, #15]	@ 00072d90 f173
.org 0x72d92
	pop {r4, r5, r6}	@ 00072d92 70bc
.org 0x72d94
	pop {r0}	@ 00072d94 01bc
.org 0x72d96
	bx r0	@ 00072d96 0047
