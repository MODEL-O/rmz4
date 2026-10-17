@ FUN_08070cfc  entry 0x08070cfc  size 168
.thumb
.org 0x70cfc
FUN_08070cfc:
	push {r4, r5, r6, lr}	@ 00070cfc 70b5
.org 0x70cfe
	sub sp, #4	@ 00070cfe 81b0
.org 0x70d00
	adds r6, r0, #0	@ 00070d00 061c
.org 0x70d02
	ldr r1, [pc, #160]	@ 00070d02 2849
.org 0x70d04
	mov r0, sp	@ 00070d04 6846
.org 0x70d06
	movs r2, #3	@ 00070d06 0322
.org 0x70d08
	bl 0x129258	@ 00070d08 b8f0a6fa
.org 0x70d0c
	adds r0, r6, #0	@ 00070d0c 301c
.org 0x70d0e
	adds r0, #195	@ 00070d0e c330
.org 0x70d10
	ldrb r4, [r0, #0]	@ 00070d10 0478
.org 0x70d12
	ldrb r0, [r6, #15]	@ 00070d12 f07b
.org 0x70d14
	cmp r0, #0	@ 00070d14 0028
.org 0x70d16
	bne.n 0x70d2e	@ 00070d16 0ad1
.org 0x70d18
	adds r0, r6, #0	@ 00070d18 301c
.org 0x70d1a
	movs r1, #0	@ 00070d1a 0021
.org 0x70d1c
	bl 0x736c4	@ 00070d1c 02f0d2fc
.org 0x70d20
	mov r1, sp	@ 00070d20 6946
.org 0x70d22
	adds r0, r1, r4	@ 00070d22 0819
.org 0x70d24
	ldrb r0, [r0, #0]	@ 00070d24 0078
.org 0x70d26
	strb r0, [r6, #18]	@ 00070d26 b074
.org 0x70d28
	ldrb r0, [r6, #15]	@ 00070d28 f07b
.org 0x70d2a
	adds r0, #1	@ 00070d2a 0130
.org 0x70d2c
	strb r0, [r6, #15]	@ 00070d2c f073
.org 0x70d2e
	adds r0, r6, #0	@ 00070d2e 301c
.org 0x70d30
	bl 0x1cff0	@ 00070d30 acf75ef9
.org 0x70d34
	adds r0, r6, #0	@ 00070d34 301c
.org 0x70d36
	adds r0, #116	@ 00070d36 7430
.org 0x70d38
	ldr r4, [pc, #108]	@ 00070d38 1b4c
.org 0x70d3a
	ldr r3, [pc, #112]	@ 00070d3a 1c4b
.org 0x70d3c
	adds r1, r6, #0	@ 00070d3c 311c
.org 0x70d3e
	adds r1, #184	@ 00070d3e b831
.org 0x70d40
	ldrb r2, [r1, #0]	@ 00070d40 0a78
.org 0x70d42
	lsls r1, r2, #1	@ 00070d42 5100
.org 0x70d44
	adds r1, r1, r3	@ 00070d44 c918
.org 0x70d46
	ldrh r1, [r1, #0]	@ 00070d46 0988
.org 0x70d48
	lsls r1, r1, #2	@ 00070d48 8900
.org 0x70d4a
	adds r1, r1, r4	@ 00070d4a 0919
.org 0x70d4c
	adds r3, r6, #0	@ 00070d4c 331c
.org 0x70d4e
	adds r3, #113	@ 00070d4e 7133
.org 0x70d50
	movs r5, #0	@ 00070d50 0025
.org 0x70d52
	ldrsb r5, [r3, r5]	@ 00070d52 5d57
.org 0x70d54
	ldr r1, [r1, #0]	@ 00070d54 0968
.org 0x70d56
	lsls r3, r5, #2	@ 00070d56 ab00
.org 0x70d58
	adds r3, r3, r1	@ 00070d58 5b18
.org 0x70d5a
	ldr r4, [pc, #84]	@ 00070d5a 154c
.org 0x70d5c
	adds r1, r6, #0	@ 00070d5c 311c
.org 0x70d5e
	adds r1, #185	@ 00070d5e b931
.org 0x70d60
	ldrb r1, [r1, #0]	@ 00070d60 0978
.org 0x70d62
	lsls r1, r1, #2	@ 00070d62 8900
.org 0x70d64
	adds r1, r1, r4	@ 00070d64 0919
.org 0x70d66
	ldr r1, [r1, #0]	@ 00070d66 0968
.org 0x70d68
	lsls r2, r2, #2	@ 00070d68 9200
.org 0x70d6a
	adds r2, r2, r1	@ 00070d6a 5218
.org 0x70d6c
	ldr r1, [r2, #0]	@ 00070d6c 1168
.org 0x70d6e
	adds r1, r1, r5	@ 00070d6e 4919
.org 0x70d70
	ldrb r1, [r1, #0]	@ 00070d70 0978
.org 0x70d72
	lsls r2, r1, #1	@ 00070d72 4a00
.org 0x70d74
	adds r2, r2, r1	@ 00070d74 5218
.org 0x70d76
	lsls r2, r2, #3	@ 00070d76 d200
.org 0x70d78
	ldr r1, [r3, #0]	@ 00070d78 1968
.org 0x70d7a
	adds r1, r1, r2	@ 00070d7a 8918
.org 0x70d7c
	bl 0x5784	@ 00070d7c 94f702fd
.org 0x70d80
	adds r0, r6, #0	@ 00070d80 301c
.org 0x70d82
	bl 0x73a68	@ 00070d82 02f071fe
.org 0x70d86
	ldrb r0, [r6, #18]	@ 00070d86 b07c
.org 0x70d88
	subs r0, #1	@ 00070d88 0138
.org 0x70d8a
	strb r0, [r6, #18]	@ 00070d8a b074
.org 0x70d8c
	lsls r0, r0, #24	@ 00070d8c 0006
.org 0x70d8e
	lsrs r1, r0, #24	@ 00070d8e 010e
.org 0x70d90
	cmp r1, #0	@ 00070d90 0029
.org 0x70d92
	bne.n 0x70d9c	@ 00070d92 03d1
.org 0x70d94
	ldrb r0, [r6, #14]	@ 00070d94 b07b
.org 0x70d96
	adds r0, #1	@ 00070d96 0130
.org 0x70d98
	strb r0, [r6, #14]	@ 00070d98 b073
.org 0x70d9a
	strb r1, [r6, #15]	@ 00070d9a f173
.org 0x70d9c
	add sp, #4	@ 00070d9c 01b0
.org 0x70d9e
	pop {r4, r5, r6}	@ 00070d9e 70bc
.org 0x70da0
	pop {r0}	@ 00070da0 01bc
.org 0x70da2
	bx r0	@ 00070da2 0047
