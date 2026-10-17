@ FUN_080d9bfc  entry 0x080d9bfc  size 90
.thumb
.org 0xd9bfc
FUN_080d9bfc:
	push {r4, lr}	@ 000d9bfc 10b5
.org 0xd9bfe
	adds r4, r0, #0	@ 000d9bfe 041c
.org 0xd9c00
	ldr r1, [pc, #84]	@ 000d9c00 1549
.org 0xd9c02
	ldrb r0, [r4, #9]	@ 000d9c02 607a
.org 0xd9c04
	lsls r0, r0, #2	@ 000d9c04 8000
.org 0xd9c06
	adds r0, r0, r1	@ 000d9c06 4018
.org 0xd9c08
	movs r1, #1	@ 000d9c08 0121
.org 0xd9c0a
	str r1, [r4, #12]	@ 000d9c0a e160
.org 0xd9c0c
	ldr r0, [r0, #0]	@ 000d9c0c 0068
.org 0xd9c0e
	ldr r0, [r0, #4]	@ 000d9c0e 4068
.org 0xd9c10
	str r0, [r4, #20]	@ 000d9c10 6061
.org 0xd9c12
	ldrb r1, [r4, #10]	@ 000d9c12 a17a
.org 0xd9c14
	movs r0, #1	@ 000d9c14 0120
.org 0xd9c16
	orrs r0, r1	@ 000d9c16 0843
.org 0xd9c18
	movs r1, #2	@ 000d9c18 0221
.org 0xd9c1a
	orrs r0, r1	@ 000d9c1a 0843
.org 0xd9c1c
	strb r0, [r4, #10]	@ 000d9c1c a072
.org 0xd9c1e
	adds r0, r4, #0	@ 000d9c1e 201c
.org 0xd9c20
	bl 0x1cc9c	@ 000d9c20 43f73cf8
.org 0xd9c24
	movs r2, #0	@ 000d9c24 0022
.org 0xd9c26
	ldrb r1, [r4, #10]	@ 000d9c26 a17a
.org 0xd9c28
	movs r0, #239	@ 000d9c28 ef20
.org 0xd9c2a
	ands r0, r1	@ 000d9c2a 0840
.org 0xd9c2c
	strb r0, [r4, #10]	@ 000d9c2c a072
.org 0xd9c2e
	adds r0, r4, #0	@ 000d9c2e 201c
.org 0xd9c30
	adds r0, #76	@ 000d9c30 4c30
.org 0xd9c32
	strb r2, [r0, #0]	@ 000d9c32 0270
.org 0xd9c34
	adds r2, r4, #0	@ 000d9c34 221c
.org 0xd9c36
	adds r2, #74	@ 000d9c36 4a32
.org 0xd9c38
	ldrb r1, [r2, #0]	@ 000d9c38 1178
.org 0xd9c3a
	movs r0, #17	@ 000d9c3a 1120
.org 0xd9c3c
	negs r0, r0	@ 000d9c3c 4042
.org 0xd9c3e
	ands r0, r1	@ 000d9c3e 0840
.org 0xd9c40
	strb r0, [r2, #0]	@ 000d9c40 1070
.org 0xd9c42
	ldr r1, [pc, #24]	@ 000d9c42 0649
.org 0xd9c44
	adds r0, r4, #0	@ 000d9c44 201c
.org 0xd9c46
	bl 0x1cf00	@ 000d9c46 43f75bf9
.org 0xd9c4a
	adds r0, r4, #0	@ 000d9c4a 201c
.org 0xd9c4c
	bl 0xd9c60	@ 000d9c4c 00f008f8
.org 0xd9c50
	pop {r4}	@ 000d9c50 10bc
.org 0xd9c52
	pop {r0}	@ 000d9c52 01bc
.org 0xd9c54
	bx r0	@ 000d9c54 0047
