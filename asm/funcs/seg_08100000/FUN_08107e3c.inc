@ FUN_08107e3c  entry 0x08107e3c  size 156
.thumb
.org 0x107e3c
FUN_08107e3c:
	push {r4, lr}	@ 00107e3c 10b5
.org 0x107e3e
	adds r4, r0, #0	@ 00107e3e 041c
.org 0x107e40
	ldrb r2, [r4, #14]	@ 00107e40 a27b
.org 0x107e42
	cmp r2, #0	@ 00107e42 002a
.org 0x107e44
	bne.n 0x107e66	@ 00107e44 0fd1
.org 0x107e46
	adds r1, r4, #0	@ 00107e46 211c
.org 0x107e48
	adds r1, #181	@ 00107e48 b531
.org 0x107e4a
	ldrb r0, [r1, #0]	@ 00107e4a 0878
.org 0x107e4c
	cmp r0, #7	@ 00107e4c 0728
.org 0x107e4e
	bls.n 0x107e5a	@ 00107e4e 04d9
.org 0x107e50
	ldr r0, [r4, #40]	@ 00107e50 a06a
.org 0x107e52
	adds r0, #181	@ 00107e52 b530
.org 0x107e54
	ldrb r0, [r0, #0]	@ 00107e54 0078
.org 0x107e56
	adds r0, #1	@ 00107e56 0130
.org 0x107e58
	strb r0, [r1, #0]	@ 00107e58 0870
.org 0x107e5a
	adds r0, r4, #0	@ 00107e5a 201c
.org 0x107e5c
	adds r0, #182	@ 00107e5c b630
.org 0x107e5e
	strb r2, [r0, #0]	@ 00107e5e 0270
.org 0x107e60
	ldrb r0, [r4, #14]	@ 00107e60 a07b
.org 0x107e62
	adds r0, #1	@ 00107e62 0130
.org 0x107e64
	strb r0, [r4, #14]	@ 00107e64 a073
.org 0x107e66
	adds r2, r4, #0	@ 00107e66 221c
.org 0x107e68
	adds r2, #181	@ 00107e68 b532
.org 0x107e6a
	ldrb r0, [r2, #0]	@ 00107e6a 1078
.org 0x107e6c
	cmp r0, #0	@ 00107e6c 0028
.org 0x107e6e
	beq.n 0x107ed2	@ 00107e6e 30d0
.org 0x107e70
	ldr r1, [r4, #40]	@ 00107e70 a16a
.org 0x107e72
	cmp r1, #0	@ 00107e72 0029
.org 0x107e74
	beq.n 0x107ed2	@ 00107e74 2dd0
.org 0x107e76
	ldrb r0, [r1, #12]	@ 00107e76 087b
.org 0x107e78
	cmp r0, #1	@ 00107e78 0128
.org 0x107e7a
	bls.n 0x107ea4	@ 00107e7a 13d9
.org 0x107e7c
	adds r0, r1, #0	@ 00107e7c 081c
.org 0x107e7e
	adds r0, #181	@ 00107e7e b530
.org 0x107e80
	ldrb r0, [r0, #0]	@ 00107e80 0078
.org 0x107e82
	strb r0, [r2, #0]	@ 00107e82 1070
.org 0x107e84
	ldr r0, [r4, #40]	@ 00107e84 a06a
.org 0x107e86
	adds r0, #180	@ 00107e86 b430
.org 0x107e88
	ldrb r0, [r0, #0]	@ 00107e88 0078
.org 0x107e8a
	cmp r0, #1	@ 00107e8a 0128
.org 0x107e8c
	bne.n 0x107e94	@ 00107e8c 02d1
.org 0x107e8e
	adds r0, r4, #0	@ 00107e8e 201c
.org 0x107e90
	bl 0x1080bc	@ 00107e90 00f014f9
.org 0x107e94
	ldr r0, [r4, #40]	@ 00107e94 a06a
.org 0x107e96
	ldr r0, [r0, #40]	@ 00107e96 806a
.org 0x107e98
	str r0, [r4, #40]	@ 00107e98 a062
.org 0x107e9a
	movs r0, #1	@ 00107e9a 0120
.org 0x107e9c
	strb r0, [r4, #13]	@ 00107e9c 6073
.org 0x107e9e
	movs r0, #0	@ 00107e9e 0020
.org 0x107ea0
	strb r0, [r4, #14]	@ 00107ea0 a073
.org 0x107ea2
	b.n 0x107ed2	@ 00107ea2 16e0
.org 0x107ea4
	ldrb r3, [r1, #13]	@ 00107ea4 4b7b
.org 0x107ea6
	cmp r3, #1	@ 00107ea6 012b
.org 0x107ea8
	bne.n 0x107eba	@ 00107ea8 07d1
.org 0x107eaa
	adds r0, r1, #0	@ 00107eaa 081c
.org 0x107eac
	adds r0, #181	@ 00107eac b530
.org 0x107eae
	ldrb r0, [r0, #0]	@ 00107eae 0078
.org 0x107eb0
	adds r0, #1	@ 00107eb0 0130
.org 0x107eb2
	movs r1, #0	@ 00107eb2 0021
.org 0x107eb4
	strb r0, [r2, #0]	@ 00107eb4 1070
.org 0x107eb6
	strb r3, [r4, #13]	@ 00107eb6 6373
.org 0x107eb8
	b.n 0x107ed0	@ 00107eb8 0ae0
.org 0x107eba
	adds r0, r1, #0	@ 00107eba 081c
.org 0x107ebc
	adds r0, #181	@ 00107ebc b530
.org 0x107ebe
	ldrb r0, [r0, #0]	@ 00107ebe 0078
.org 0x107ec0
	adds r0, #1	@ 00107ec0 0130
.org 0x107ec2
	ldrb r1, [r2, #0]	@ 00107ec2 1178
.org 0x107ec4
	cmp r0, r1	@ 00107ec4 8842
.org 0x107ec6
	beq.n 0x107ed2	@ 00107ec6 04d0
.org 0x107ec8
	movs r1, #0	@ 00107ec8 0021
.org 0x107eca
	strb r0, [r2, #0]	@ 00107eca 1070
.org 0x107ecc
	movs r0, #1	@ 00107ecc 0120
.org 0x107ece
	strb r0, [r4, #13]	@ 00107ece 6073
.org 0x107ed0
	strb r1, [r4, #14]	@ 00107ed0 a173
.org 0x107ed2
	pop {r4}	@ 00107ed2 10bc
.org 0x107ed4
	pop {r0}	@ 00107ed4 01bc
.org 0x107ed6
	bx r0	@ 00107ed6 0047
