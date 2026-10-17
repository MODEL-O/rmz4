@ FUN_08071cbc  entry 0x08071cbc  size 236
.thumb
.org 0x71cbc
FUN_08071cbc:
	push {r4, r5, r6, r7, lr}	@ 00071cbc f0b5
.org 0x71cbe
	mov r7, r8	@ 00071cbe 4746
.org 0x71cc0
	push {r7}	@ 00071cc0 80b4
.org 0x71cc2
	sub sp, #8	@ 00071cc2 82b0
.org 0x71cc4
	adds r6, r0, #0	@ 00071cc4 061c
.org 0x71cc6
	ldrb r0, [r6, #10]	@ 00071cc6 b07a
.org 0x71cc8
	lsrs r7, r0, #4	@ 00071cc8 0709
.org 0x71cca
	movs r4, #1	@ 00071cca 0124
.org 0x71ccc
	ands r7, r4	@ 00071ccc 2740
.org 0x71cce
	ldrb r0, [r6, #15]	@ 00071cce f07b
.org 0x71cd0
	cmp r0, #0	@ 00071cd0 0028
.org 0x71cd2
	bne.n 0x71cee	@ 00071cd2 0cd1
.org 0x71cd4
	ldr r0, [pc, #208]	@ 00071cd4 3448
.org 0x71cd6
	bl 0x2b10	@ 00071cd6 90f71bff
.org 0x71cda
	adds r0, r6, #0	@ 00071cda 301c
.org 0x71cdc
	movs r1, #12	@ 00071cdc 0c21
.org 0x71cde
	bl 0x736c4	@ 00071cde 01f0f1fc
.org 0x71ce2
	movs r0, #24	@ 00071ce2 1820
.org 0x71ce4
	strb r0, [r6, #18]	@ 00071ce4 b074
.org 0x71ce6
	strb r4, [r6, #19]	@ 00071ce6 f474
.org 0x71ce8
	ldrb r0, [r6, #15]	@ 00071ce8 f07b
.org 0x71cea
	adds r0, #1	@ 00071cea 0130
.org 0x71cec
	strb r0, [r6, #15]	@ 00071cec f073
.org 0x71cee
	adds r0, r6, #0	@ 00071cee 301c
.org 0x71cf0
	bl 0x1cff0	@ 00071cf0 abf77ef9
.org 0x71cf4
	adds r0, r6, #0	@ 00071cf4 301c
.org 0x71cf6
	adds r0, #116	@ 00071cf6 7430
.org 0x71cf8
	ldr r4, [pc, #176]	@ 00071cf8 2c4c
.org 0x71cfa
	ldr r3, [pc, #180]	@ 00071cfa 2d4b
.org 0x71cfc
	adds r1, r6, #0	@ 00071cfc 311c
.org 0x71cfe
	adds r1, #184	@ 00071cfe b831
.org 0x71d00
	ldrb r2, [r1, #0]	@ 00071d00 0a78
.org 0x71d02
	lsls r1, r2, #1	@ 00071d02 5100
.org 0x71d04
	adds r1, r1, r3	@ 00071d04 c918
.org 0x71d06
	ldrh r1, [r1, #0]	@ 00071d06 0988
.org 0x71d08
	lsls r1, r1, #2	@ 00071d08 8900
.org 0x71d0a
	adds r1, r1, r4	@ 00071d0a 0919
.org 0x71d0c
	movs r3, #113	@ 00071d0c 7123
.org 0x71d0e
	adds r3, r3, r6	@ 00071d0e 9b19
.org 0x71d10
	mov r8, r3	@ 00071d10 9846
.org 0x71d12
	movs r5, #0	@ 00071d12 0025
.org 0x71d14
	ldrsb r5, [r3, r5]	@ 00071d14 5d57
.org 0x71d16
	ldr r1, [r1, #0]	@ 00071d16 0968
.org 0x71d18
	lsls r3, r5, #2	@ 00071d18 ab00
.org 0x71d1a
	adds r3, r3, r1	@ 00071d1a 5b18
.org 0x71d1c
	ldr r4, [pc, #148]	@ 00071d1c 254c
.org 0x71d1e
	adds r1, r6, #0	@ 00071d1e 311c
.org 0x71d20
	adds r1, #185	@ 00071d20 b931
.org 0x71d22
	ldrb r1, [r1, #0]	@ 00071d22 0978
.org 0x71d24
	lsls r1, r1, #2	@ 00071d24 8900
.org 0x71d26
	adds r1, r1, r4	@ 00071d26 0919
.org 0x71d28
	ldr r1, [r1, #0]	@ 00071d28 0968
.org 0x71d2a
	lsls r2, r2, #2	@ 00071d2a 9200
.org 0x71d2c
	adds r2, r2, r1	@ 00071d2c 5218
.org 0x71d2e
	ldr r1, [r2, #0]	@ 00071d2e 1168
.org 0x71d30
	adds r1, r1, r5	@ 00071d30 4919
.org 0x71d32
	ldrb r1, [r1, #0]	@ 00071d32 0978
.org 0x71d34
	lsls r2, r1, #1	@ 00071d34 4a00
.org 0x71d36
	adds r2, r2, r1	@ 00071d36 5218
.org 0x71d38
	lsls r2, r2, #3	@ 00071d38 d200
.org 0x71d3a
	ldr r1, [r3, #0]	@ 00071d3a 1968
.org 0x71d3c
	adds r1, r1, r2	@ 00071d3c 8918
.org 0x71d3e
	bl 0x5784	@ 00071d3e 93f721fd
.org 0x71d42
	ldrb r0, [r6, #18]	@ 00071d42 b07c
.org 0x71d44
	cmp r0, #0	@ 00071d44 0028
.org 0x71d46
	beq.n 0x71d4c	@ 00071d46 01d0
.org 0x71d48
	subs r0, #1	@ 00071d48 0138
.org 0x71d4a
	strb r0, [r6, #18]	@ 00071d4a b074
.org 0x71d4c
	adds r0, r6, #0	@ 00071d4c 301c
.org 0x71d4e
	bl 0x73a68	@ 00071d4e 01f08bfe
.org 0x71d52
	ldrb r0, [r6, #19]	@ 00071d52 f07c
.org 0x71d54
	cmp r0, #0	@ 00071d54 0028
.org 0x71d56
	beq.n 0x71d84	@ 00071d56 15d0
.org 0x71d58
	mov r1, r8	@ 00071d58 4146
.org 0x71d5a
	movs r0, #0	@ 00071d5a 0020
.org 0x71d5c
	ldrsb r0, [r1, r0]	@ 00071d5c 0856
.org 0x71d5e
	cmp r0, #1	@ 00071d5e 0128
.org 0x71d60
	bne.n 0x71d84	@ 00071d60 10d1
.org 0x71d62
	lsls r1, r7, #1	@ 00071d62 7900
.org 0x71d64
	subs r1, #1	@ 00071d64 0139
.org 0x71d66
	lsls r1, r1, #10	@ 00071d66 8902
.org 0x71d68
	ldr r0, [r6, #84]	@ 00071d68 706d
.org 0x71d6a
	adds r0, r0, r1	@ 00071d6a 4018
.org 0x71d6c
	str r0, [sp, #0]	@ 00071d6c 0090
.org 0x71d6e
	ldr r0, [r6, #88]	@ 00071d6e b06d
.org 0x71d70
	ldr r3, [pc, #68]	@ 00071d70 114b
.org 0x71d72
	adds r0, r0, r3	@ 00071d72 c018
.org 0x71d74
	str r0, [sp, #4]	@ 00071d74 0190
.org 0x71d76
	adds r0, r6, #0	@ 00071d76 301c
.org 0x71d78
	mov r1, sp	@ 00071d78 6946
.org 0x71d7a
	adds r2, r7, #0	@ 00071d7a 3a1c
.org 0x71d7c
	bl 0xbe728	@ 00071d7c 4cf0d4fc
.org 0x71d80
	movs r0, #0	@ 00071d80 0020
.org 0x71d82
	strb r0, [r6, #19]	@ 00071d82 f074
.org 0x71d84
	adds r0, r6, #0	@ 00071d84 301c
.org 0x71d86
	adds r0, #115	@ 00071d86 7330
.org 0x71d88
	ldrb r0, [r0, #0]	@ 00071d88 0078
.org 0x71d8a
	cmp r0, #3	@ 00071d8a 0328
.org 0x71d8c
	bne.n 0x71d9c	@ 00071d8c 06d1
.org 0x71d8e
	ldrb r1, [r6, #18]	@ 00071d8e b17c
.org 0x71d90
	cmp r1, #0	@ 00071d90 0029
.org 0x71d92
	bne.n 0x71d9c	@ 00071d92 03d1
.org 0x71d94
	ldrb r0, [r6, #14]	@ 00071d94 b07b
.org 0x71d96
	adds r0, #1	@ 00071d96 0130
.org 0x71d98
	strb r0, [r6, #14]	@ 00071d98 b073
.org 0x71d9a
	strb r1, [r6, #15]	@ 00071d9a f173
.org 0x71d9c
	add sp, #8	@ 00071d9c 02b0
.org 0x71d9e
	pop {r3}	@ 00071d9e 08bc
.org 0x71da0
	mov r8, r3	@ 00071da0 9846
.org 0x71da2
	pop {r4, r5, r6, r7}	@ 00071da2 f0bc
.org 0x71da4
	pop {r0}	@ 00071da4 01bc
.org 0x71da6
	bx r0	@ 00071da6 0047
