@ FUN_080f7bf8  entry 0x080f7bf8  size 116
.thumb
.org 0xf7bf8
FUN_080f7bf8:
	push {r4, lr}	@ 000f7bf8 10b5
.org 0xf7bfa
	adds r4, r0, #0	@ 000f7bfa 041c
.org 0xf7bfc
	bl 0x1cc9c	@ 000f7bfc 25f74ef8
.org 0xf7c00
	ldrb r1, [r4, #10]	@ 000f7c00 a17a
.org 0xf7c02
	movs r0, #1	@ 000f7c02 0120
.org 0xf7c04
	orrs r0, r1	@ 000f7c04 0843
.org 0xf7c06
	movs r1, #2	@ 000f7c06 0221
.org 0xf7c08
	orrs r0, r1	@ 000f7c08 0843
.org 0xf7c0a
	strb r0, [r4, #10]	@ 000f7c0a a072
.org 0xf7c0c
	ldrb r0, [r4, #17]	@ 000f7c0c 607c
.org 0xf7c0e
	cmp r0, #3	@ 000f7c0e 0328
.org 0xf7c10
	bne.n 0xf7c20	@ 000f7c10 06d1
.org 0xf7c12
	ldr r1, [pc, #8]	@ 000f7c12 0249
.org 0xf7c14
	adds r0, r4, #0	@ 000f7c14 201c
.org 0xf7c16
	bl 0x1cf00	@ 000f7c16 25f773f9
.org 0xf7c1a
	b.n 0xf7c28	@ 000f7c1a 05e0
.org 0xf7c1c
	.byte 0x0b,0x67,0x00,0x00	@ 000f7c1c data
.org 0xf7c20
	ldr r1, [pc, #76]	@ 000f7c20 1349
.org 0xf7c22
	adds r0, r4, #0	@ 000f7c22 201c
.org 0xf7c24
	bl 0x1cf00	@ 000f7c24 25f76cf9
.org 0xf7c28
	adds r2, r4, #0	@ 000f7c28 221c
.org 0xf7c2a
	adds r2, #73	@ 000f7c2a 4932
.org 0xf7c2c
	ldrb r1, [r2, #0]	@ 000f7c2c 1178
.org 0xf7c2e
	movs r0, #13	@ 000f7c2e 0d20
.org 0xf7c30
	negs r0, r0	@ 000f7c30 4042
.org 0xf7c32
	ands r0, r1	@ 000f7c32 0840
.org 0xf7c34
	movs r1, #4	@ 000f7c34 0421
.org 0xf7c36
	orrs r0, r1	@ 000f7c36 0843
.org 0xf7c38
	strb r0, [r2, #0]	@ 000f7c38 1070
.org 0xf7c3a
	adds r1, r4, #0	@ 000f7c3a 211c
.org 0xf7c3c
	adds r1, #37	@ 000f7c3c 2531
.org 0xf7c3e
	movs r0, #0	@ 000f7c3e 0020
.org 0xf7c40
	strb r0, [r1, #0]	@ 000f7c40 0870
.org 0xf7c42
	ldr r1, [pc, #48]	@ 000f7c42 0c49
.org 0xf7c44
	ldrb r0, [r4, #17]	@ 000f7c44 607c
.org 0xf7c46
	adds r0, r0, r1	@ 000f7c46 4018
.org 0xf7c48
	ldrb r0, [r0, #0]	@ 000f7c48 0078
.org 0xf7c4a
	lsls r0, r0, #8	@ 000f7c4a 0002
.org 0xf7c4c
	str r0, [r4, #92]	@ 000f7c4c e065
.org 0xf7c4e
	ldr r0, [pc, #40]	@ 000f7c4e 0a48
.org 0xf7c50
	str r0, [r4, #96]	@ 000f7c50 2066
.org 0xf7c52
	ldr r1, [pc, #40]	@ 000f7c52 0a49
.org 0xf7c54
	ldrb r0, [r4, #9]	@ 000f7c54 607a
.org 0xf7c56
	lsls r0, r0, #2	@ 000f7c56 8000
.org 0xf7c58
	adds r0, r0, r1	@ 000f7c58 4018
.org 0xf7c5a
	movs r1, #1	@ 000f7c5a 0121
.org 0xf7c5c
	str r1, [r4, #12]	@ 000f7c5c e160
.org 0xf7c5e
	ldr r0, [r0, #0]	@ 000f7c5e 0068
.org 0xf7c60
	ldr r0, [r0, #4]	@ 000f7c60 4068
.org 0xf7c62
	str r0, [r4, #20]	@ 000f7c62 6061
.org 0xf7c64
	adds r0, r4, #0	@ 000f7c64 201c
.org 0xf7c66
	bl 0xf762c	@ 000f7c66 fff7e1fc
.org 0xf7c6a
	pop {r4}	@ 000f7c6a 10bc
