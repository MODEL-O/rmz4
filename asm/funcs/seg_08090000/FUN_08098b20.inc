@ FUN_08098b20  entry 0x08098b20  size 138
.thumb
.org 0x98b20
FUN_08098b20:
	push {r4, r5, lr}	@ 00098b20 30b5
.org 0x98b22
	adds r4, r0, #0	@ 00098b22 041c
.org 0x98b24
	ldrb r0, [r4, #16]	@ 00098b24 207c
.org 0x98b26
	cmp r0, #0	@ 00098b26 0028
.org 0x98b28
	beq.n 0x98b32	@ 00098b28 03d0
.org 0x98b2a
	adds r0, r4, #0	@ 00098b2a 201c
.org 0x98b2c
	bl 0x98bb0	@ 00098b2c 00f040f8
.org 0x98b30
	b.n 0x98ba4	@ 00098b30 38e0
.org 0x98b32
	ldrb r0, [r4, #14]	@ 00098b32 a07b
.org 0x98b34
	cmp r0, #0	@ 00098b34 0028
.org 0x98b36
	bne.n 0x98b94	@ 00098b36 2dd1
.org 0x98b38
	adds r0, r4, #0	@ 00098b38 201c
.org 0x98b3a
	adds r0, #189	@ 00098b3a bd30
.org 0x98b3c
	ldrb r0, [r0, #0]	@ 00098b3c 0078
.org 0x98b3e
	cmp r0, #0	@ 00098b3e 0028
.org 0x98b40
	beq.n 0x98b4c	@ 00098b40 04d0
.org 0x98b42
	movs r0, #2	@ 00098b42 0220
.org 0x98b44
	strb r0, [r4, #13]	@ 00098b44 6073
.org 0x98b46
	adds r5, r4, #0	@ 00098b46 251c
.org 0x98b48
	adds r5, #140	@ 00098b48 8c35
.org 0x98b4a
	b.n 0x98b78	@ 00098b4a 15e0
.org 0x98b4c
	adds r1, r4, #0	@ 00098b4c 211c
.org 0x98b4e
	adds r1, #140	@ 00098b4e 8c31
.org 0x98b50
	ldr r2, [r1, #0]	@ 00098b50 0a68
.org 0x98b52
	movs r0, #128	@ 00098b52 8020
.org 0x98b54
	lsls r0, r0, #9	@ 00098b54 4002
.org 0x98b56
	ands r2, r0	@ 00098b56 0240
.org 0x98b58
	adds r5, r1, #0	@ 00098b58 0d1c
.org 0x98b5a
	cmp r2, #0	@ 00098b5a 002a
.org 0x98b5c
	beq.n 0x98b76	@ 00098b5c 0bd0
.org 0x98b5e
	subs r1, #56	@ 00098b5e 3839
.org 0x98b60
	movs r2, #128	@ 00098b60 8022
.org 0x98b62
	lsls r2, r2, #2	@ 00098b62 9200
.org 0x98b64
	adds r0, r4, #0	@ 00098b64 201c
.org 0x98b66
	adds r0, #188	@ 00098b66 bc30
.org 0x98b68
	ldrb r3, [r0, #0]	@ 00098b68 0378
.org 0x98b6a
	movs r0, #0	@ 00098b6a 0020
.org 0x98b6c
	bl 0xd0dc4	@ 00098b6c 38f02af9
.org 0x98b70
	movs r0, #1	@ 00098b70 0120
.org 0x98b72
	strb r0, [r4, #13]	@ 00098b72 6073
.org 0x98b74
	b.n 0x98b78	@ 00098b74 00e0
.org 0x98b76
	strb r2, [r4, #13]	@ 00098b76 6273
.org 0x98b78
	movs r1, #0	@ 00098b78 0021
.org 0x98b7a
	str r1, [r5, #0]	@ 00098b7a 2960
.org 0x98b7c
	adds r0, r4, #0	@ 00098b7c 201c
.org 0x98b7e
	adds r0, #144	@ 00098b7e 9030
.org 0x98b80
	str r1, [r0, #0]	@ 00098b80 0160
.org 0x98b82
	adds r0, #4	@ 00098b82 0430
.org 0x98b84
	strb r1, [r0, #0]	@ 00098b84 0170
.org 0x98b86
	ldrb r1, [r4, #10]	@ 00098b86 a17a
.org 0x98b88
	movs r0, #251	@ 00098b88 fb20
.org 0x98b8a
	ands r0, r1	@ 00098b8a 0840
.org 0x98b8c
	strb r0, [r4, #10]	@ 00098b8c a072
.org 0x98b8e
	ldrb r0, [r4, #14]	@ 00098b8e a07b
.org 0x98b90
	adds r0, #1	@ 00098b90 0130
.org 0x98b92
	strb r0, [r4, #14]	@ 00098b92 a073
.org 0x98b94
	ldr r0, [pc, #20]	@ 00098b94 0548
.org 0x98b96
	ldrb r1, [r4, #13]	@ 00098b96 617b
.org 0x98b98
	lsls r1, r1, #2	@ 00098b98 8900
.org 0x98b9a
	adds r1, r1, r0	@ 00098b9a 0918
.org 0x98b9c
	ldr r1, [r1, #0]	@ 00098b9c 0968
.org 0x98b9e
	adds r0, r4, #0	@ 00098b9e 201c
.org 0x98ba0
	bl 0x128f80	@ 00098ba0 90f0eef9
.org 0x98ba4
	pop {r4, r5}	@ 00098ba4 30bc
.org 0x98ba6
	pop {r0}	@ 00098ba6 01bc
.org 0x98ba8
	bx r0	@ 00098ba8 0047
