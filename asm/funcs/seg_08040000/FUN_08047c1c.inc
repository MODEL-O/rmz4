@ FUN_08047c1c  entry 0x08047c1c  size 92
.thumb
.org 0x47c1c
FUN_08047c1c:
	push {r4, r5, lr}	@ 00047c1c 30b5
.org 0x47c1e
	adds r4, r0, #0	@ 00047c1e 041c
.org 0x47c20
	ldrb r5, [r4, #13]	@ 00047c20 657b
.org 0x47c22
	cmp r5, #0	@ 00047c22 002d
.org 0x47c24
	bne.n 0x47c48	@ 00047c24 10d1
.org 0x47c26
	ldr r1, [pc, #80]	@ 00047c26 1449
.org 0x47c28
	bl 0x1cf00	@ 00047c28 d5f76af9
.org 0x47c2c
	adds r0, r4, #0	@ 00047c2c 201c
.org 0x47c2e
	adds r0, #140	@ 00047c2e 8c30
.org 0x47c30
	str r5, [r0, #0]	@ 00047c30 0560
.org 0x47c32
	adds r0, #4	@ 00047c32 0430
.org 0x47c34
	str r5, [r0, #0]	@ 00047c34 0560
.org 0x47c36
	adds r0, #4	@ 00047c36 0430
.org 0x47c38
	strb r5, [r0, #0]	@ 00047c38 0570
.org 0x47c3a
	ldrb r1, [r4, #10]	@ 00047c3a a17a
.org 0x47c3c
	movs r0, #251	@ 00047c3c fb20
.org 0x47c3e
	ands r0, r1	@ 00047c3e 0840
.org 0x47c40
	strb r0, [r4, #10]	@ 00047c40 a072
.org 0x47c42
	ldrb r0, [r4, #13]	@ 00047c42 607b
.org 0x47c44
	adds r0, #1	@ 00047c44 0130
.org 0x47c46
	strb r0, [r4, #13]	@ 00047c46 6073
.org 0x47c48
	adds r0, r4, #0	@ 00047c48 201c
.org 0x47c4a
	bl 0x1cff0	@ 00047c4a d5f7d1f9
.org 0x47c4e
	adds r0, r4, #0	@ 00047c4e 201c
.org 0x47c50
	adds r0, #115	@ 00047c50 7330
.org 0x47c52
	ldrb r0, [r0, #0]	@ 00047c52 0078
.org 0x47c54
	cmp r0, #3	@ 00047c54 0328
.org 0x47c56
	bne.n 0x47c72	@ 00047c56 0cd1
.org 0x47c58
	ldrb r1, [r4, #10]	@ 00047c58 a17a
.org 0x47c5a
	movs r0, #254	@ 00047c5a fe20
.org 0x47c5c
	ands r0, r1	@ 00047c5c 0840
.org 0x47c5e
	strb r0, [r4, #10]	@ 00047c5e a072
.org 0x47c60
	ldr r1, [pc, #24]	@ 00047c60 0649
.org 0x47c62
	ldrb r0, [r4, #9]	@ 00047c62 607a
.org 0x47c64
	lsls r0, r0, #2	@ 00047c64 8000
.org 0x47c66
	adds r0, r0, r1	@ 00047c66 4018
.org 0x47c68
	movs r1, #4	@ 00047c68 0421
.org 0x47c6a
	str r1, [r4, #12]	@ 00047c6a e160
.org 0x47c6c
	ldr r0, [r0, #0]	@ 00047c6c 0068
.org 0x47c6e
	ldr r0, [r0, #16]	@ 00047c6e 0069
.org 0x47c70
	str r0, [r4, #20]	@ 00047c70 6061
.org 0x47c72
	pop {r4, r5}	@ 00047c72 30bc
.org 0x47c74
	pop {r0}	@ 00047c74 01bc
.org 0x47c76
	bx r0	@ 00047c76 0047
