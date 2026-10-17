@ FUN_080b8b28  entry 0x080b8b28  size 150
.thumb
.org 0xb8b28
FUN_080b8b28:
	push {r4, r5, r6, r7, lr}	@ 000b8b28 f0b5
.org 0xb8b2a
	mov r7, r8	@ 000b8b2a 4746
.org 0xb8b2c
	push {r7}	@ 000b8b2c 80b4
.org 0xb8b2e
	sub sp, #4	@ 000b8b2e 81b0
.org 0xb8b30
	adds r4, r0, #0	@ 000b8b30 041c
.org 0xb8b32
	ldr r1, [pc, #140]	@ 000b8b32 2349
.org 0xb8b34
	mov r0, sp	@ 000b8b34 6846
.org 0xb8b36
	movs r2, #4	@ 000b8b36 0422
.org 0xb8b38
	bl 0x129258	@ 000b8b38 70f08efb
.org 0xb8b3c
	ldr r7, [r4, #40]	@ 000b8b3c a76a
.org 0xb8b3e
	ldrb r0, [r4, #15]	@ 000b8b3e e07b
.org 0xb8b40
	cmp r0, #0	@ 000b8b40 0028
.org 0xb8b42
	bne.n 0xb8b8c	@ 000b8b42 23d1
.org 0xb8b44
	movs r0, #64	@ 000b8b44 4020
.org 0xb8b46
	bl 0x2b10	@ 000b8b46 49f7e3ff
.org 0xb8b4a
	movs r5, #0	@ 000b8b4a 0025
.org 0xb8b4c
	adds r6, r4, #0	@ 000b8b4c 261c
.org 0xb8b4e
	adds r6, #84	@ 000b8b4e 5436
.org 0xb8b50
	movs r0, #116	@ 000b8b50 7420
.org 0xb8b52
	adds r0, r0, r4	@ 000b8b52 0019
.org 0xb8b54
	mov r8, r0	@ 000b8b54 8046
.org 0xb8b56
	mov r1, sp	@ 000b8b56 6946
.org 0xb8b58
	adds r0, r1, r5	@ 000b8b58 4819
.org 0xb8b5a
	ldrb r3, [r0, #0]	@ 000b8b5a 0378
.org 0xb8b5c
	adds r0, r7, #0	@ 000b8b5c 381c
.org 0xb8b5e
	adds r1, r6, #0	@ 000b8b5e 311c
.org 0xb8b60
	movs r2, #0	@ 000b8b60 0022
.org 0xb8b62
	bl 0xb9514	@ 000b8b62 00f0d7fc
.org 0xb8b66
	adds r5, #1	@ 000b8b66 0135
.org 0xb8b68
	cmp r5, #3	@ 000b8b68 032d
.org 0xb8b6a
	ble.n 0xb8b56	@ 000b8b6a f4dd
.org 0xb8b6c
	adds r0, r4, #0	@ 000b8b6c 201c
.org 0xb8b6e
	bl 0xb8d64	@ 000b8b6e 00f0f9f8
.org 0xb8b72
	ldr r1, [pc, #80]	@ 000b8b72 1449
.org 0xb8b74
	mov r0, r8	@ 000b8b74 4046
.org 0xb8b76
	bl 0x5784	@ 000b8b76 4cf705fe
.org 0xb8b7a
	ldr r1, [pc, #76]	@ 000b8b7a 1349
.org 0xb8b7c
	adds r0, r4, #0	@ 000b8b7c 201c
.org 0xb8b7e
	bl 0x1cf00	@ 000b8b7e 64f7bff9
.org 0xb8b82
	movs r0, #64	@ 000b8b82 4020
.org 0xb8b84
	strb r0, [r4, #18]	@ 000b8b84 a074
.org 0xb8b86
	ldrb r0, [r4, #15]	@ 000b8b86 e07b
.org 0xb8b88
	adds r0, #1	@ 000b8b88 0130
.org 0xb8b8a
	strb r0, [r4, #15]	@ 000b8b8a e073
.org 0xb8b8c
	adds r0, r4, #0	@ 000b8b8c 201c
.org 0xb8b8e
	bl 0x1cff0	@ 000b8b8e 64f72ffa
.org 0xb8b92
	ldrb r0, [r4, #18]	@ 000b8b92 a07c
.org 0xb8b94
	cmp r0, #0	@ 000b8b94 0028
.org 0xb8b96
	beq.n 0xb8b9c	@ 000b8b96 01d0
.org 0xb8b98
	subs r0, #1	@ 000b8b98 0138
.org 0xb8b9a
	strb r0, [r4, #18]	@ 000b8b9a a074
.org 0xb8b9c
	ldrb r0, [r4, #18]	@ 000b8b9c a07c
.org 0xb8b9e
	subs r0, #1	@ 000b8b9e 0138
.org 0xb8ba0
	strb r0, [r4, #18]	@ 000b8ba0 a074
.org 0xb8ba2
	lsls r0, r0, #24	@ 000b8ba2 0006
.org 0xb8ba4
	lsrs r1, r0, #24	@ 000b8ba4 010e
.org 0xb8ba6
	cmp r1, #0	@ 000b8ba6 0029
.org 0xb8ba8
	bne.n 0xb8bb2	@ 000b8ba8 03d1
.org 0xb8baa
	movs r0, #5	@ 000b8baa 0520
.org 0xb8bac
	strb r0, [r4, #13]	@ 000b8bac 6073
.org 0xb8bae
	strb r1, [r4, #14]	@ 000b8bae a173
.org 0xb8bb0
	strb r1, [r4, #15]	@ 000b8bb0 e173
.org 0xb8bb2
	add sp, #4	@ 000b8bb2 01b0
.org 0xb8bb4
	pop {r3}	@ 000b8bb4 08bc
.org 0xb8bb6
	mov r8, r3	@ 000b8bb6 9846
.org 0xb8bb8
	pop {r4, r5, r6, r7}	@ 000b8bb8 f0bc
.org 0xb8bba
	pop {r0}	@ 000b8bba 01bc
.org 0xb8bbc
	bx r0	@ 000b8bbc 0047
