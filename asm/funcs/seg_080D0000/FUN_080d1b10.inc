@ FUN_080d1b10  entry 0x080d1b10  size 182
.thumb
.org 0xd1b10
FUN_080d1b10:
	push {r4, lr}	@ 000d1b10 10b5
.org 0xd1b12
	adds r4, r0, #0	@ 000d1b12 041c
.org 0xd1b14
	ldr r0, [r4, #84]	@ 000d1b14 606d
.org 0xd1b16
	ldr r1, [r4, #92]	@ 000d1b16 e16d
.org 0xd1b18
	adds r0, r0, r1	@ 000d1b18 4018
.org 0xd1b1a
	str r0, [r4, #84]	@ 000d1b1a 6065
.org 0xd1b1c
	ldr r0, [r4, #88]	@ 000d1b1c a06d
.org 0xd1b1e
	ldr r1, [r4, #96]	@ 000d1b1e 216e
.org 0xd1b20
	adds r0, r0, r1	@ 000d1b20 4018
.org 0xd1b22
	str r0, [r4, #88]	@ 000d1b22 a065
.org 0xd1b24
	ldrb r0, [r4, #13]	@ 000d1b24 607b
.org 0xd1b26
	cmp r0, #1	@ 000d1b26 0128
.org 0xd1b28
	beq.n 0xd1b56	@ 000d1b28 15d0
.org 0xd1b2a
	cmp r0, #1	@ 000d1b2a 0128
.org 0xd1b2c
	bgt.n 0xd1b34	@ 000d1b2c 02dc
.org 0xd1b2e
	cmp r0, #0	@ 000d1b2e 0028
.org 0xd1b30
	beq.n 0xd1b3e	@ 000d1b30 05d0
.org 0xd1b32
	b.n 0xd1b8c	@ 000d1b32 2be0
.org 0xd1b34
	cmp r0, #2	@ 000d1b34 0228
.org 0xd1b36
	beq.n 0xd1b6c	@ 000d1b36 19d0
.org 0xd1b38
	cmp r0, #3	@ 000d1b38 0328
.org 0xd1b3a
	beq.n 0xd1b7c	@ 000d1b3a 1fd0
.org 0xd1b3c
	b.n 0xd1b8c	@ 000d1b3c 26e0
.org 0xd1b3e
	movs r1, #240	@ 000d1b3e f021
.org 0xd1b40
	lsls r1, r1, #4	@ 000d1b40 0901
.org 0xd1b42
	adds r0, r4, #0	@ 000d1b42 201c
.org 0xd1b44
	bl 0x1cf00	@ 000d1b44 4bf7dcf9
.org 0xd1b48
	ldrb r1, [r4, #10]	@ 000d1b48 a17a
.org 0xd1b4a
	movs r0, #1	@ 000d1b4a 0120
.org 0xd1b4c
	orrs r0, r1	@ 000d1b4c 0843
.org 0xd1b4e
	strb r0, [r4, #10]	@ 000d1b4e a072
.org 0xd1b50
	ldrb r0, [r4, #13]	@ 000d1b50 607b
.org 0xd1b52
	adds r0, #1	@ 000d1b52 0130
.org 0xd1b54
	strb r0, [r4, #13]	@ 000d1b54 6073
.org 0xd1b56
	adds r0, r4, #0	@ 000d1b56 201c
.org 0xd1b58
	bl 0x1cff0	@ 000d1b58 4bf74afa
.org 0xd1b5c
	adds r0, r4, #0	@ 000d1b5c 201c
.org 0xd1b5e
	adds r0, #115	@ 000d1b5e 7330
.org 0xd1b60
	ldrb r0, [r0, #0]	@ 000d1b60 0078
.org 0xd1b62
	cmp r0, #3	@ 000d1b62 0328
.org 0xd1b64
	bne.n 0xd1b8c	@ 000d1b64 12d1
.org 0xd1b66
	ldrb r0, [r4, #13]	@ 000d1b66 607b
.org 0xd1b68
	adds r0, #1	@ 000d1b68 0130
.org 0xd1b6a
	b.n 0xd1b8a	@ 000d1b6a 0ee0
.org 0xd1b6c
	strb r0, [r4, #18]	@ 000d1b6c a074
.org 0xd1b6e
	ldrb r0, [r4, #10]	@ 000d1b6e a07a
.org 0xd1b70
	movs r1, #254	@ 000d1b70 fe21
.org 0xd1b72
	ands r1, r0	@ 000d1b72 0140
.org 0xd1b74
	strb r1, [r4, #10]	@ 000d1b74 a172
.org 0xd1b76
	ldrb r0, [r4, #13]	@ 000d1b76 607b
.org 0xd1b78
	adds r0, #1	@ 000d1b78 0130
.org 0xd1b7a
	strb r0, [r4, #13]	@ 000d1b7a 6073
.org 0xd1b7c
	ldrb r0, [r4, #18]	@ 000d1b7c a07c
.org 0xd1b7e
	subs r0, #1	@ 000d1b7e 0138
.org 0xd1b80
	strb r0, [r4, #18]	@ 000d1b80 a074
.org 0xd1b82
	lsls r0, r0, #24	@ 000d1b82 0006
.org 0xd1b84
	lsrs r0, r0, #24	@ 000d1b84 000e
.org 0xd1b86
	cmp r0, #0	@ 000d1b86 0028
.org 0xd1b88
	bne.n 0xd1b8c	@ 000d1b88 00d1
.org 0xd1b8a
	strb r0, [r4, #13]	@ 000d1b8a 6073
.org 0xd1b8c
	ldrb r0, [r4, #17]	@ 000d1b8c 607c
.org 0xd1b8e
	cmp r0, #0	@ 000d1b8e 0028
.org 0xd1b90
	beq.n 0xd1ba2	@ 000d1b90 07d0
.org 0xd1b92
	ldrb r0, [r4, #19]	@ 000d1b92 e07c
.org 0xd1b94
	cmp r0, #108	@ 000d1b94 6c28
.org 0xd1b96
	bne.n 0xd1ba2	@ 000d1b96 04d1
.org 0xd1b98
	ldr r0, [r4, #116]	@ 000d1b98 606f
.org 0xd1b9a
	ldr r1, [r4, #120]	@ 000d1b9a a16f
.org 0xd1b9c
	movs r2, #0	@ 000d1b9c 0022
.org 0xd1b9e
	bl 0xd19a8	@ 000d1b9e fff703ff
.org 0xd1ba2
	ldrb r0, [r4, #19]	@ 000d1ba2 e07c
.org 0xd1ba4
	subs r0, #1	@ 000d1ba4 0138
.org 0xd1ba6
	strb r0, [r4, #19]	@ 000d1ba6 e074
.org 0xd1ba8
	lsls r0, r0, #24	@ 000d1ba8 0006
.org 0xd1baa
	cmp r0, #0	@ 000d1baa 0028
.org 0xd1bac
	bne.n 0xd1bc0	@ 000d1bac 08d1
.org 0xd1bae
	ldr r1, [pc, #24]	@ 000d1bae 0649
.org 0xd1bb0
	ldrb r0, [r4, #9]	@ 000d1bb0 607a
.org 0xd1bb2
	lsls r0, r0, #2	@ 000d1bb2 8000
.org 0xd1bb4
	adds r0, r0, r1	@ 000d1bb4 4018
.org 0xd1bb6
	movs r1, #2	@ 000d1bb6 0221
.org 0xd1bb8
	str r1, [r4, #12]	@ 000d1bb8 e160
.org 0xd1bba
	ldr r0, [r0, #0]	@ 000d1bba 0068
.org 0xd1bbc
	ldr r0, [r0, #8]	@ 000d1bbc 8068
.org 0xd1bbe
	str r0, [r4, #20]	@ 000d1bbe 6061
.org 0xd1bc0
	pop {r4}	@ 000d1bc0 10bc
.org 0xd1bc2
	pop {r0}	@ 000d1bc2 01bc
.org 0xd1bc4
	bx r0	@ 000d1bc4 0047
