@ FUN_08084e10  entry 0x08084e10  size 122
.thumb
.org 0x84e10
FUN_08084e10:
	push {r4, lr}	@ 00084e10 10b5
.org 0x84e12
	adds r4, r0, #0	@ 00084e12 041c
.org 0x84e14
	ldrb r0, [r4, #14]	@ 00084e14 a07b
.org 0x84e16
	cmp r0, #0	@ 00084e16 0028
.org 0x84e18
	beq.n 0x84e20	@ 00084e18 02d0
.org 0x84e1a
	cmp r0, #1	@ 00084e1a 0128
.org 0x84e1c
	beq.n 0x84e40	@ 00084e1c 10d0
.org 0x84e1e
	b.n 0x84e84	@ 00084e1e 31e0
.org 0x84e20
	adds r0, r4, #0	@ 00084e20 201c
.org 0x84e22
	adds r0, #116	@ 00084e22 7430
.org 0x84e24
	ldr r1, [pc, #100]	@ 00084e24 1949
.org 0x84e26
	bl 0x5784	@ 00084e26 80f7adfc
.org 0x84e2a
	ldr r1, [pc, #100]	@ 00084e2a 1949
.org 0x84e2c
	ldrb r0, [r4, #16]	@ 00084e2c 207c
.org 0x84e2e
	lsls r0, r0, #1	@ 00084e2e 4000
.org 0x84e30
	adds r0, r0, r1	@ 00084e30 4018
.org 0x84e32
	ldrh r1, [r0, #0]	@ 00084e32 0188
.org 0x84e34
	adds r0, r4, #0	@ 00084e34 201c
.org 0x84e36
	bl 0x1cf00	@ 00084e36 98f763f8
.org 0x84e3a
	ldrb r0, [r4, #14]	@ 00084e3a a07b
.org 0x84e3c
	adds r0, #1	@ 00084e3c 0130
.org 0x84e3e
	strb r0, [r4, #14]	@ 00084e3e a073
.org 0x84e40
	adds r0, r4, #0	@ 00084e40 201c
.org 0x84e42
	bl 0x1cff0	@ 00084e42 98f7d5f8
.org 0x84e46
	adds r0, r4, #0	@ 00084e46 201c
.org 0x84e48
	adds r0, #115	@ 00084e48 7330
.org 0x84e4a
	ldrb r3, [r0, #0]	@ 00084e4a 0378
.org 0x84e4c
	cmp r3, #3	@ 00084e4c 032b
.org 0x84e4e
	bne.n 0x84e84	@ 00084e4e 19d1
.org 0x84e50
	ldrb r1, [r4, #10]	@ 00084e50 a17a
.org 0x84e52
	movs r0, #254	@ 00084e52 fe20
.org 0x84e54
	ands r0, r1	@ 00084e54 0840
.org 0x84e56
	movs r2, #0	@ 00084e56 0022
.org 0x84e58
	movs r1, #253	@ 00084e58 fd21
.org 0x84e5a
	ands r0, r1	@ 00084e5a 0840
.org 0x84e5c
	strb r0, [r4, #10]	@ 00084e5c a072
.org 0x84e5e
	adds r0, r4, #0	@ 00084e5e 201c
.org 0x84e60
	adds r0, #140	@ 00084e60 8c30
.org 0x84e62
	str r2, [r0, #0]	@ 00084e62 0260
.org 0x84e64
	adds r0, #4	@ 00084e64 0430
.org 0x84e66
	str r2, [r0, #0]	@ 00084e66 0260
.org 0x84e68
	adds r0, #4	@ 00084e68 0430
.org 0x84e6a
	strb r2, [r0, #0]	@ 00084e6a 0270
.org 0x84e6c
	ldrb r1, [r4, #10]	@ 00084e6c a17a
.org 0x84e6e
	movs r0, #251	@ 00084e6e fb20
.org 0x84e70
	ands r0, r1	@ 00084e70 0840
.org 0x84e72
	strb r0, [r4, #10]	@ 00084e72 a072
.org 0x84e74
	ldr r1, [pc, #28]	@ 00084e74 0749
.org 0x84e76
	ldrb r0, [r4, #9]	@ 00084e76 607a
.org 0x84e78
	lsls r0, r0, #2	@ 00084e78 8000
.org 0x84e7a
	adds r0, r0, r1	@ 00084e7a 4018
.org 0x84e7c
	str r3, [r4, #12]	@ 00084e7c e360
.org 0x84e7e
	ldr r0, [r0, #0]	@ 00084e7e 0068
.org 0x84e80
	ldr r0, [r0, #12]	@ 00084e80 c068
.org 0x84e82
	str r0, [r4, #20]	@ 00084e82 6061
.org 0x84e84
	pop {r4}	@ 00084e84 10bc
.org 0x84e86
	pop {r0}	@ 00084e86 01bc
.org 0x84e88
	bx r0	@ 00084e88 0047
