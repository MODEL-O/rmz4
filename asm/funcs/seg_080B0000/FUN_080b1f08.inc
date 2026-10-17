@ FUN_080b1f08  entry 0x080b1f08  size 196
.thumb
.org 0xb1f08
FUN_080b1f08:
	push {r4, r5, r6, lr}	@ 000b1f08 70b5
.org 0xb1f0a
	adds r4, r0, #0	@ 000b1f0a 041c
.org 0xb1f0c
	ldrb r0, [r4, #14]	@ 000b1f0c a07b
.org 0xb1f0e
	cmp r0, #0	@ 000b1f0e 0028
.org 0xb1f10
	bne.n 0xb1f38	@ 000b1f10 12d1
.org 0xb1f12
	adds r0, r4, #0	@ 000b1f12 201c
.org 0xb1f14
	adds r0, #192	@ 000b1f14 c030
.org 0xb1f16
	ldr r0, [r0, #0]	@ 000b1f16 0068
.org 0xb1f18
	cmp r0, #0	@ 000b1f18 0028
.org 0xb1f1a
	bne.n 0xb1fc6	@ 000b1f1a 54d1
.org 0xb1f1c
	ldr r1, [pc, #172]	@ 000b1f1c 2b49
.org 0xb1f1e
	adds r0, r4, #0	@ 000b1f1e 201c
.org 0xb1f20
	bl 0x1cf00	@ 000b1f20 6af7eeff
.org 0xb1f24
	adds r0, r4, #0	@ 000b1f24 201c
.org 0xb1f26
	adds r0, #116	@ 000b1f26 7430
.org 0xb1f28
	ldr r1, [pc, #164]	@ 000b1f28 2949
.org 0xb1f2a
	bl 0x5784	@ 000b1f2a 53f72bfc
.org 0xb1f2e
	movs r0, #10	@ 000b1f2e 0a20
.org 0xb1f30
	strb r0, [r4, #18]	@ 000b1f30 a074
.org 0xb1f32
	ldrb r0, [r4, #14]	@ 000b1f32 a07b
.org 0xb1f34
	adds r0, #1	@ 000b1f34 0130
.org 0xb1f36
	strb r0, [r4, #14]	@ 000b1f36 a073
.org 0xb1f38
	ldrb r1, [r4, #18]	@ 000b1f38 a17c
.org 0xb1f3a
	movs r0, #2	@ 000b1f3a 0220
.org 0xb1f3c
	ands r0, r1	@ 000b1f3c 0840
.org 0xb1f3e
	cmp r0, #0	@ 000b1f3e 0028
.org 0xb1f40
	beq.n 0xb1fb4	@ 000b1f40 38d0
.org 0xb1f42
	ldr r6, [pc, #144]	@ 000b1f42 244e
.org 0xb1f44
	ldrb r1, [r4, #10]	@ 000b1f44 a17a
.org 0xb1f46
	movs r5, #16	@ 000b1f46 1025
.org 0xb1f48
	adds r0, r5, #0	@ 000b1f48 281c
.org 0xb1f4a
	ands r0, r1	@ 000b1f4a 0840
.org 0xb1f4c
	movs r1, #0	@ 000b1f4c 0021
.org 0xb1f4e
	cmp r0, #0	@ 000b1f4e 0028
.org 0xb1f50
	beq.n 0xb1f54	@ 000b1f50 00d0
.org 0xb1f52
	movs r1, #12	@ 000b1f52 0c21
.org 0xb1f54
	adds r0, r6, #4	@ 000b1f54 301d
.org 0xb1f56
	adds r0, r1, r0	@ 000b1f56 0818
.org 0xb1f58
	ldr r1, [r0, #0]	@ 000b1f58 0168
.org 0xb1f5a
	lsls r1, r1, #8	@ 000b1f5a 0902
.org 0xb1f5c
	ldr r0, [r4, #84]	@ 000b1f5c 606d
.org 0xb1f5e
	adds r0, r0, r1	@ 000b1f5e 4018
.org 0xb1f60
	ldr r1, [r4, #88]	@ 000b1f60 a16d
.org 0xb1f62
	bl 0x7c7c	@ 000b1f62 55f78bfe
.org 0xb1f66
	lsls r0, r0, #16	@ 000b1f66 0004
.org 0xb1f68
	cmp r0, #0	@ 000b1f68 0028
.org 0xb1f6a
	beq.n 0xb1fb4	@ 000b1f6a 23d0
.org 0xb1f6c
	ldrb r1, [r4, #10]	@ 000b1f6c a17a
.org 0xb1f6e
	adds r0, r5, #0	@ 000b1f6e 281c
.org 0xb1f70
	ands r0, r1	@ 000b1f70 0840
.org 0xb1f72
	movs r1, #0	@ 000b1f72 0021
.org 0xb1f74
	cmp r0, #0	@ 000b1f74 0028
.org 0xb1f76
	beq.n 0xb1f7a	@ 000b1f76 00d0
.org 0xb1f78
	movs r1, #12	@ 000b1f78 0c21
.org 0xb1f7a
	adds r0, r1, r6	@ 000b1f7a 8819
.org 0xb1f7c
	ldr r1, [r0, #0]	@ 000b1f7c 0168
.org 0xb1f7e
	lsls r1, r1, #8	@ 000b1f7e 0902
.org 0xb1f80
	ldr r0, [r4, #84]	@ 000b1f80 606d
.org 0xb1f82
	adds r0, r0, r1	@ 000b1f82 4018
.org 0xb1f84
	ldr r1, [r4, #88]	@ 000b1f84 a16d
.org 0xb1f86
	movs r2, #144	@ 000b1f86 9022
.org 0xb1f88
	lsls r2, r2, #5	@ 000b1f88 5201
.org 0xb1f8a
	adds r1, r1, r2	@ 000b1f8a 8918
.org 0xb1f8c
	bl 0x7c7c	@ 000b1f8c 55f776fe
.org 0xb1f90
	lsls r0, r0, #16	@ 000b1f90 0004
.org 0xb1f92
	cmp r0, #0	@ 000b1f92 0028
.org 0xb1f94
	bne.n 0xb1fb4	@ 000b1f94 0ed1
.org 0xb1f96
	ldrb r1, [r4, #10]	@ 000b1f96 a17a
.org 0xb1f98
	adds r0, r5, #0	@ 000b1f98 281c
.org 0xb1f9a
	ands r0, r1	@ 000b1f9a 0840
.org 0xb1f9c
	movs r1, #0	@ 000b1f9c 0021
.org 0xb1f9e
	cmp r0, #0	@ 000b1f9e 0028
.org 0xb1fa0
	beq.n 0xb1fa4	@ 000b1fa0 00d0
.org 0xb1fa2
	movs r1, #12	@ 000b1fa2 0c21
.org 0xb1fa4
	adds r0, r6, #0	@ 000b1fa4 301c
.org 0xb1fa6
	adds r0, #8	@ 000b1fa6 0830
.org 0xb1fa8
	adds r0, r1, r0	@ 000b1fa8 0818
.org 0xb1faa
	ldr r1, [r0, #0]	@ 000b1faa 0168
.org 0xb1fac
	lsls r1, r1, #8	@ 000b1fac 0902
.org 0xb1fae
	ldr r0, [r4, #84]	@ 000b1fae 606d
.org 0xb1fb0
	adds r0, r0, r1	@ 000b1fb0 4018
.org 0xb1fb2
	str r0, [r4, #84]	@ 000b1fb2 6065
.org 0xb1fb4
	adds r0, r4, #0	@ 000b1fb4 201c
.org 0xb1fb6
	bl 0xb2158	@ 000b1fb6 00f0cff8
.org 0xb1fba
	lsls r0, r0, #24	@ 000b1fba 0006
.org 0xb1fbc
	cmp r0, #0	@ 000b1fbc 0028
.org 0xb1fbe
	beq.n 0xb1fc6	@ 000b1fbe 02d0
.org 0xb1fc0
	movs r0, #0	@ 000b1fc0 0020
.org 0xb1fc2
	strb r0, [r4, #13]	@ 000b1fc2 6073
.org 0xb1fc4
	strb r0, [r4, #14]	@ 000b1fc4 a073
.org 0xb1fc6
	pop {r4, r5, r6}	@ 000b1fc6 70bc
.org 0xb1fc8
	pop {r0}	@ 000b1fc8 01bc
.org 0xb1fca
	bx r0	@ 000b1fca 0047
