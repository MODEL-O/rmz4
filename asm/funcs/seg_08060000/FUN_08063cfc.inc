@ FUN_08063cfc  entry 0x08063cfc  size 150
.thumb
.org 0x63cfc
FUN_08063cfc:
	push {r4, r5, r6, lr}	@ 00063cfc 70b5
.org 0x63cfe
	adds r6, r0, #0	@ 00063cfe 061c
.org 0x63d00
	ldrb r0, [r6, #15]	@ 00063d00 f07b
.org 0x63d02
	cmp r0, #0	@ 00063d02 0028
.org 0x63d04
	bne.n 0x63d18	@ 00063d04 08d1
.org 0x63d06
	adds r0, r6, #0	@ 00063d06 301c
.org 0x63d08
	movs r1, #14	@ 00063d08 0e21
.org 0x63d0a
	bl 0x65a94	@ 00063d0a 01f0c3fe
.org 0x63d0e
	movs r0, #32	@ 00063d0e 2020
.org 0x63d10
	strb r0, [r6, #18]	@ 00063d10 b074
.org 0x63d12
	ldrb r0, [r6, #15]	@ 00063d12 f07b
.org 0x63d14
	adds r0, #1	@ 00063d14 0130
.org 0x63d16
	strb r0, [r6, #15]	@ 00063d16 f073
.org 0x63d18
	adds r0, r6, #0	@ 00063d18 301c
.org 0x63d1a
	bl 0x1cff0	@ 00063d1a b9f769f9
.org 0x63d1e
	adds r0, r6, #0	@ 00063d1e 301c
.org 0x63d20
	adds r0, #116	@ 00063d20 7430
.org 0x63d22
	ldr r4, [pc, #112]	@ 00063d22 1c4c
.org 0x63d24
	ldr r3, [pc, #112]	@ 00063d24 1c4b
.org 0x63d26
	adds r1, r6, #0	@ 00063d26 311c
.org 0x63d28
	adds r1, #180	@ 00063d28 b431
.org 0x63d2a
	ldrb r2, [r1, #0]	@ 00063d2a 0a78
.org 0x63d2c
	lsls r1, r2, #1	@ 00063d2c 5100
.org 0x63d2e
	adds r1, r1, r3	@ 00063d2e c918
.org 0x63d30
	ldrh r1, [r1, #0]	@ 00063d30 0988
.org 0x63d32
	lsls r1, r1, #2	@ 00063d32 8900
.org 0x63d34
	adds r1, r1, r4	@ 00063d34 0919
.org 0x63d36
	adds r3, r6, #0	@ 00063d36 331c
.org 0x63d38
	adds r3, #113	@ 00063d38 7133
.org 0x63d3a
	movs r5, #0	@ 00063d3a 0025
.org 0x63d3c
	ldrsb r5, [r3, r5]	@ 00063d3c 5d57
.org 0x63d3e
	ldr r1, [r1, #0]	@ 00063d3e 0968
.org 0x63d40
	lsls r3, r5, #2	@ 00063d40 ab00
.org 0x63d42
	adds r3, r3, r1	@ 00063d42 5b18
.org 0x63d44
	ldr r4, [pc, #84]	@ 00063d44 154c
.org 0x63d46
	adds r1, r6, #0	@ 00063d46 311c
.org 0x63d48
	adds r1, #181	@ 00063d48 b531
.org 0x63d4a
	ldrb r1, [r1, #0]	@ 00063d4a 0978
.org 0x63d4c
	lsls r1, r1, #2	@ 00063d4c 8900
.org 0x63d4e
	adds r1, r1, r4	@ 00063d4e 0919
.org 0x63d50
	ldr r1, [r1, #0]	@ 00063d50 0968
.org 0x63d52
	lsls r2, r2, #2	@ 00063d52 9200
.org 0x63d54
	adds r2, r2, r1	@ 00063d54 5218
.org 0x63d56
	ldr r1, [r2, #0]	@ 00063d56 1168
.org 0x63d58
	adds r1, r1, r5	@ 00063d58 4919
.org 0x63d5a
	ldrb r1, [r1, #0]	@ 00063d5a 0978
.org 0x63d5c
	lsls r2, r1, #1	@ 00063d5c 4a00
.org 0x63d5e
	adds r2, r2, r1	@ 00063d5e 5218
.org 0x63d60
	lsls r2, r2, #3	@ 00063d60 d200
.org 0x63d62
	ldr r1, [r3, #0]	@ 00063d62 1968
.org 0x63d64
	adds r1, r1, r2	@ 00063d64 8918
.org 0x63d66
	bl 0x5784	@ 00063d66 a1f70dfd
.org 0x63d6a
	ldrb r0, [r6, #18]	@ 00063d6a b07c
.org 0x63d6c
	cmp r0, #0	@ 00063d6c 0028
.org 0x63d6e
	beq.n 0x63d7a	@ 00063d6e 04d0
.org 0x63d70
	subs r0, #1	@ 00063d70 0138
.org 0x63d72
	strb r0, [r6, #18]	@ 00063d72 b074
.org 0x63d74
	lsls r0, r0, #24	@ 00063d74 0006
.org 0x63d76
	cmp r0, #0	@ 00063d76 0028
.org 0x63d78
	bne.n 0x63d8c	@ 00063d78 08d1
.org 0x63d7a
	adds r0, r6, #0	@ 00063d7a 301c
.org 0x63d7c
	adds r0, #115	@ 00063d7c 7330
.org 0x63d7e
	ldrb r0, [r0, #0]	@ 00063d7e 0078
.org 0x63d80
	cmp r0, #3	@ 00063d80 0328
.org 0x63d82
	bne.n 0x63d8c	@ 00063d82 03d1
.org 0x63d84
	movs r1, #0	@ 00063d84 0021
.org 0x63d86
	movs r0, #1	@ 00063d86 0120
.org 0x63d88
	strb r0, [r6, #14]	@ 00063d88 b073
.org 0x63d8a
	strb r1, [r6, #15]	@ 00063d8a f173
.org 0x63d8c
	pop {r4, r5, r6}	@ 00063d8c 70bc
.org 0x63d8e
	pop {r0}	@ 00063d8e 01bc
.org 0x63d90
	bx r0	@ 00063d90 0047
