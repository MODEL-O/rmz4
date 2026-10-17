@ FUN_08030a44  entry 0x08030a44  size 80
.thumb
.org 0x30a44
FUN_08030a44:
	push {r4, lr}	@ 00030a44 10b5
.org 0x30a46
	adds r4, r0, #0	@ 00030a46 041c
.org 0x30a48
	adds r3, r4, #0	@ 00030a48 231c
.org 0x30a4a
	adds r3, #180	@ 00030a4a b433
.org 0x30a4c
	ldr r2, [r3, #84]	@ 00030a4c 5a6d
.org 0x30a4e
	cmp r2, #0	@ 00030a4e 002a
.org 0x30a50
	beq.n 0x30a5a	@ 00030a50 03d0
.org 0x30a52
	movs r1, #0	@ 00030a52 0021
.org 0x30a54
	movs r0, #1	@ 00030a54 0120
.org 0x30a56
	strb r0, [r2, #17]	@ 00030a56 5074
.org 0x30a58
	str r1, [r3, #84]	@ 00030a58 5965
.org 0x30a5a
	ldr r0, [r4, #92]	@ 00030a5a e06d
.org 0x30a5c
	cmp r0, #0	@ 00030a5c 0028
.org 0x30a5e
	bne.n 0x30a76	@ 00030a5e 0ad1
.org 0x30a60
	movs r1, #128	@ 00030a60 8021
.org 0x30a62
	lsls r1, r1, #2	@ 00030a62 8900
.org 0x30a64
	adds r0, r4, #0	@ 00030a64 201c
.org 0x30a66
	bl 0x1cf00	@ 00030a66 ecf74bfa
.org 0x30a6a
	movs r0, #1	@ 00030a6a 0120
.org 0x30a6c
	strb r0, [r4, #15]	@ 00030a6c e073
.org 0x30a6e
	adds r0, r4, #0	@ 00030a6e 201c
.org 0x30a70
	bl 0x30a94	@ 00030a70 00f010f8
.org 0x30a74
	b.n 0x30a8e	@ 00030a74 0be0
.org 0x30a76
	movs r1, #128	@ 00030a76 8021
.org 0x30a78
	lsls r1, r1, #2	@ 00030a78 8900
.org 0x30a7a
	adds r0, r4, #0	@ 00030a7a 201c
.org 0x30a7c
	movs r2, #1	@ 00030a7c 0122
.org 0x30a7e
	movs r3, #4	@ 00030a7e 0423
.org 0x30a80
	bl 0x1cfc8	@ 00030a80 ecf7a2fa
.org 0x30a84
	movs r0, #2	@ 00030a84 0220
.org 0x30a86
	strb r0, [r4, #15]	@ 00030a86 e073
.org 0x30a88
	adds r0, r4, #0	@ 00030a88 201c
.org 0x30a8a
	bl 0x30b88	@ 00030a8a 00f07df8
.org 0x30a8e
	pop {r4}	@ 00030a8e 10bc
.org 0x30a90
	pop {r0}	@ 00030a90 01bc
.org 0x30a92
	bx r0	@ 00030a92 0047
