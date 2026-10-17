@ FUN_08071a00  entry 0x08071a00  size 168
.thumb
.org 0x71a00
FUN_08071a00:
	push {r4, r5, r6, lr}	@ 00071a00 70b5
.org 0x71a02
	sub sp, #4	@ 00071a02 81b0
.org 0x71a04
	adds r6, r0, #0	@ 00071a04 061c
.org 0x71a06
	ldr r1, [pc, #160]	@ 00071a06 2849
.org 0x71a08
	mov r0, sp	@ 00071a08 6846
.org 0x71a0a
	movs r2, #3	@ 00071a0a 0322
.org 0x71a0c
	bl 0x129258	@ 00071a0c b7f024fc
.org 0x71a10
	adds r0, r6, #0	@ 00071a10 301c
.org 0x71a12
	adds r0, #195	@ 00071a12 c330
.org 0x71a14
	ldrb r4, [r0, #0]	@ 00071a14 0478
.org 0x71a16
	ldrb r0, [r6, #15]	@ 00071a16 f07b
.org 0x71a18
	cmp r0, #0	@ 00071a18 0028
.org 0x71a1a
	bne.n 0x71a32	@ 00071a1a 0ad1
.org 0x71a1c
	adds r0, r6, #0	@ 00071a1c 301c
.org 0x71a1e
	movs r1, #0	@ 00071a1e 0021
.org 0x71a20
	bl 0x736c4	@ 00071a20 01f050fe
.org 0x71a24
	mov r1, sp	@ 00071a24 6946
.org 0x71a26
	adds r0, r1, r4	@ 00071a26 0819
.org 0x71a28
	ldrb r0, [r0, #0]	@ 00071a28 0078
.org 0x71a2a
	strb r0, [r6, #18]	@ 00071a2a b074
.org 0x71a2c
	ldrb r0, [r6, #15]	@ 00071a2c f07b
.org 0x71a2e
	adds r0, #1	@ 00071a2e 0130
.org 0x71a30
	strb r0, [r6, #15]	@ 00071a30 f073
.org 0x71a32
	adds r0, r6, #0	@ 00071a32 301c
.org 0x71a34
	bl 0x1cff0	@ 00071a34 abf7dcfa
.org 0x71a38
	adds r0, r6, #0	@ 00071a38 301c
.org 0x71a3a
	adds r0, #116	@ 00071a3a 7430
.org 0x71a3c
	ldr r4, [pc, #108]	@ 00071a3c 1b4c
.org 0x71a3e
	ldr r3, [pc, #112]	@ 00071a3e 1c4b
.org 0x71a40
	adds r1, r6, #0	@ 00071a40 311c
.org 0x71a42
	adds r1, #184	@ 00071a42 b831
.org 0x71a44
	ldrb r2, [r1, #0]	@ 00071a44 0a78
.org 0x71a46
	lsls r1, r2, #1	@ 00071a46 5100
.org 0x71a48
	adds r1, r1, r3	@ 00071a48 c918
.org 0x71a4a
	ldrh r1, [r1, #0]	@ 00071a4a 0988
.org 0x71a4c
	lsls r1, r1, #2	@ 00071a4c 8900
.org 0x71a4e
	adds r1, r1, r4	@ 00071a4e 0919
.org 0x71a50
	adds r3, r6, #0	@ 00071a50 331c
.org 0x71a52
	adds r3, #113	@ 00071a52 7133
.org 0x71a54
	movs r5, #0	@ 00071a54 0025
.org 0x71a56
	ldrsb r5, [r3, r5]	@ 00071a56 5d57
.org 0x71a58
	ldr r1, [r1, #0]	@ 00071a58 0968
.org 0x71a5a
	lsls r3, r5, #2	@ 00071a5a ab00
.org 0x71a5c
	adds r3, r3, r1	@ 00071a5c 5b18
.org 0x71a5e
	ldr r4, [pc, #84]	@ 00071a5e 154c
.org 0x71a60
	adds r1, r6, #0	@ 00071a60 311c
.org 0x71a62
	adds r1, #185	@ 00071a62 b931
.org 0x71a64
	ldrb r1, [r1, #0]	@ 00071a64 0978
.org 0x71a66
	lsls r1, r1, #2	@ 00071a66 8900
.org 0x71a68
	adds r1, r1, r4	@ 00071a68 0919
.org 0x71a6a
	ldr r1, [r1, #0]	@ 00071a6a 0968
.org 0x71a6c
	lsls r2, r2, #2	@ 00071a6c 9200
.org 0x71a6e
	adds r2, r2, r1	@ 00071a6e 5218
.org 0x71a70
	ldr r1, [r2, #0]	@ 00071a70 1168
.org 0x71a72
	adds r1, r1, r5	@ 00071a72 4919
.org 0x71a74
	ldrb r1, [r1, #0]	@ 00071a74 0978
.org 0x71a76
	lsls r2, r1, #1	@ 00071a76 4a00
.org 0x71a78
	adds r2, r2, r1	@ 00071a78 5218
.org 0x71a7a
	lsls r2, r2, #3	@ 00071a7a d200
.org 0x71a7c
	ldr r1, [r3, #0]	@ 00071a7c 1968
.org 0x71a7e
	adds r1, r1, r2	@ 00071a7e 8918
.org 0x71a80
	bl 0x5784	@ 00071a80 93f780fe
.org 0x71a84
	adds r0, r6, #0	@ 00071a84 301c
.org 0x71a86
	bl 0x73a68	@ 00071a86 01f0efff
.org 0x71a8a
	ldrb r0, [r6, #18]	@ 00071a8a b07c
.org 0x71a8c
	subs r0, #1	@ 00071a8c 0138
.org 0x71a8e
	strb r0, [r6, #18]	@ 00071a8e b074
.org 0x71a90
	lsls r0, r0, #24	@ 00071a90 0006
.org 0x71a92
	lsrs r1, r0, #24	@ 00071a92 010e
.org 0x71a94
	cmp r1, #0	@ 00071a94 0029
.org 0x71a96
	bne.n 0x71aa0	@ 00071a96 03d1
.org 0x71a98
	ldrb r0, [r6, #14]	@ 00071a98 b07b
.org 0x71a9a
	adds r0, #1	@ 00071a9a 0130
.org 0x71a9c
	strb r0, [r6, #14]	@ 00071a9c b073
.org 0x71a9e
	strb r1, [r6, #15]	@ 00071a9e f173
.org 0x71aa0
	add sp, #4	@ 00071aa0 01b0
.org 0x71aa2
	pop {r4, r5, r6}	@ 00071aa2 70bc
.org 0x71aa4
	pop {r0}	@ 00071aa4 01bc
.org 0x71aa6
	bx r0	@ 00071aa6 0047
