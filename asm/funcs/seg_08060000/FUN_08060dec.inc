@ FUN_08060dec  entry 0x08060dec  size 240
.thumb
.org 0x60dec
FUN_08060dec:
	push {r4, lr}	@ 00060dec 10b5
.org 0x60dee
	sub sp, #8	@ 00060dee 82b0
.org 0x60df0
	adds r4, r0, #0	@ 00060df0 041c
.org 0x60df2
	ldrb r0, [r4, #14]	@ 00060df2 a07b
.org 0x60df4
	cmp r0, #0	@ 00060df4 0028
.org 0x60df6
	bne.n 0x60e6e	@ 00060df6 3ad1
.org 0x60df8
	adds r1, r4, #0	@ 00060df8 211c
.org 0x60dfa
	adds r1, #180	@ 00060dfa b431
.org 0x60dfc
	movs r0, #24	@ 00060dfc 1820
.org 0x60dfe
	strb r0, [r1, #28]	@ 00060dfe 0877
.org 0x60e00
	ldr r1, [pc, #72]	@ 00060e00 1249
.org 0x60e02
	adds r0, r4, #0	@ 00060e02 201c
.org 0x60e04
	bl 0x1cf00	@ 00060e04 bcf77cf8
.org 0x60e08
	movs r3, #0	@ 00060e08 0023
.org 0x60e0a
	ldr r0, [pc, #68]	@ 00060e0a 1148
.org 0x60e0c
	ldr r2, [r0, #0]	@ 00060e0c 0268
.org 0x60e0e
	ldr r1, [r4, #84]	@ 00060e0e 616d
.org 0x60e10
	ldr r0, [r2, #84]	@ 00060e10 506d
.org 0x60e12
	cmp r1, r0	@ 00060e12 8142
.org 0x60e14
	bge.n 0x60e18	@ 00060e14 00da
.org 0x60e16
	movs r3, #1	@ 00060e16 0123
.org 0x60e18
	adds r0, r4, #0	@ 00060e18 201c
.org 0x60e1a
	adds r0, #76	@ 00060e1a 4c30
.org 0x60e1c
	strb r3, [r0, #0]	@ 00060e1c 0370
.org 0x60e1e
	movs r3, #0	@ 00060e1e 0023
.org 0x60e20
	ldr r1, [r4, #84]	@ 00060e20 616d
.org 0x60e22
	ldr r0, [r2, #84]	@ 00060e22 506d
.org 0x60e24
	cmp r1, r0	@ 00060e24 8142
.org 0x60e26
	bge.n 0x60e2a	@ 00060e26 00da
.org 0x60e28
	movs r3, #1	@ 00060e28 0123
.org 0x60e2a
	movs r0, #74	@ 00060e2a 4a20
.org 0x60e2c
	adds r0, r0, r4	@ 00060e2c 0019
.org 0x60e2e
	mov ip, r0	@ 00060e2e 8446
.org 0x60e30
	lsls r2, r3, #4	@ 00060e30 1a01
.org 0x60e32
	ldrb r1, [r0, #0]	@ 00060e32 0178
.org 0x60e34
	movs r0, #17	@ 00060e34 1120
.org 0x60e36
	negs r0, r0	@ 00060e36 4042
.org 0x60e38
	ands r0, r1	@ 00060e38 0840
.org 0x60e3a
	orrs r0, r2	@ 00060e3a 1043
.org 0x60e3c
	mov r1, ip	@ 00060e3c 6146
.org 0x60e3e
	strb r0, [r1, #0]	@ 00060e3e 0870
.org 0x60e40
	cmp r3, #0	@ 00060e40 002b
.org 0x60e42
	beq.n 0x60e54	@ 00060e42 07d0
.org 0x60e44
	ldrb r0, [r4, #10]	@ 00060e44 a07a
.org 0x60e46
	movs r1, #16	@ 00060e46 1021
.org 0x60e48
	orrs r0, r1	@ 00060e48 0843
.org 0x60e4a
	b.n 0x60e5a	@ 00060e4a 06e0
.org 0x60e4c
	.byte 0x16,0xa5,0x00,0x00	@ 00060e4c data
.org 0x60e50
	.byte 0xf0,0xdb,0x02,0x02	@ 00060e50 data
.org 0x60e54
	ldrb r1, [r4, #10]	@ 00060e54 a17a
.org 0x60e56
	movs r0, #239	@ 00060e56 ef20
.org 0x60e58
	ands r0, r1	@ 00060e58 0840
.org 0x60e5a
	strb r0, [r4, #10]	@ 00060e5a a072
.org 0x60e5c
	movs r0, #142	@ 00060e5c 8e20
.org 0x60e5e
	lsls r0, r0, #1	@ 00060e5e 4000
.org 0x60e60
	bl 0x2b10	@ 00060e60 a1f756fe
.org 0x60e64
	movs r0, #0	@ 00060e64 0020
.org 0x60e66
	strb r0, [r4, #15]	@ 00060e66 e073
.org 0x60e68
	ldrb r0, [r4, #14]	@ 00060e68 a07b
.org 0x60e6a
	adds r0, #1	@ 00060e6a 0130
.org 0x60e6c
	strb r0, [r4, #14]	@ 00060e6c a073
.org 0x60e6e
	adds r0, r4, #0	@ 00060e6e 201c
.org 0x60e70
	bl 0x1cff0	@ 00060e70 bcf7bef8
.org 0x60e74
	ldrb r0, [r4, #15]	@ 00060e74 e07b
.org 0x60e76
	cmp r0, #0	@ 00060e76 0028
.org 0x60e78
	bne.n 0x60eca	@ 00060e78 27d1
.org 0x60e7a
	adds r0, r4, #0	@ 00060e7a 201c
.org 0x60e7c
	adds r0, #113	@ 00060e7c 7130
.org 0x60e7e
	ldrb r0, [r0, #0]	@ 00060e7e 0078
.org 0x60e80
	lsls r0, r0, #24	@ 00060e80 0006
.org 0x60e82
	asrs r0, r0, #24	@ 00060e82 0016
.org 0x60e84
	cmp r0, #6	@ 00060e84 0628
.org 0x60e86
	ble.n 0x60eca	@ 00060e86 20dd
.org 0x60e88
	ldrb r1, [r4, #10]	@ 00060e88 a17a
.org 0x60e8a
	movs r0, #16	@ 00060e8a 1020
.org 0x60e8c
	ands r0, r1	@ 00060e8c 0840
.org 0x60e8e
	cmp r0, #0	@ 00060e8e 0028
.org 0x60e90
	beq.n 0x60e9a	@ 00060e90 03d0
.org 0x60e92
	ldr r0, [r4, #84]	@ 00060e92 606d
.org 0x60e94
	movs r2, #192	@ 00060e94 c022
.org 0x60e96
	lsls r2, r2, #4	@ 00060e96 1201
.org 0x60e98
	b.n 0x60e9e	@ 00060e98 01e0
.org 0x60e9a
	ldr r0, [r4, #84]	@ 00060e9a 606d
.org 0x60e9c
	ldr r2, [pc, #68]	@ 00060e9c 114a
.org 0x60e9e
	adds r0, r0, r2	@ 00060e9e 8018
.org 0x60ea0
	str r0, [sp, #0]	@ 00060ea0 0090
.org 0x60ea2
	ldr r0, [r4, #88]	@ 00060ea2 a06d
.org 0x60ea4
	ldr r2, [pc, #64]	@ 00060ea4 104a
.org 0x60ea6
	adds r0, r0, r2	@ 00060ea6 8018
.org 0x60ea8
	str r0, [sp, #4]	@ 00060ea8 0190
.org 0x60eaa
	lsls r2, r1, #24	@ 00060eaa 0a06
.org 0x60eac
	lsrs r2, r2, #28	@ 00060eac 120f
.org 0x60eae
	movs r0, #1	@ 00060eae 0120
.org 0x60eb0
	ands r2, r0	@ 00060eb0 0240
.org 0x60eb2
	mov r0, sp	@ 00060eb2 6846
.org 0x60eb4
	movs r1, #3	@ 00060eb4 0321
.org 0x60eb6
	movs r3, #0	@ 00060eb6 0023
.org 0x60eb8
	bl 0x99e6c	@ 00060eb8 38f0d8ff
.org 0x60ebc
	movs r0, #157	@ 00060ebc 9d20
.org 0x60ebe
	lsls r0, r0, #1	@ 00060ebe 4000
.org 0x60ec0
	bl 0x2b10	@ 00060ec0 a1f726fe
.org 0x60ec4
	ldrb r0, [r4, #15]	@ 00060ec4 e07b
.org 0x60ec6
	adds r0, #1	@ 00060ec6 0130
.org 0x60ec8
	strb r0, [r4, #15]	@ 00060ec8 e073
.org 0x60eca
	adds r0, r4, #0	@ 00060eca 201c
.org 0x60ecc
	adds r0, #115	@ 00060ecc 7330
.org 0x60ece
	ldrb r0, [r0, #0]	@ 00060ece 0078
.org 0x60ed0
	cmp r0, #3	@ 00060ed0 0328
.org 0x60ed2
	bne.n 0x60edc	@ 00060ed2 03d1
.org 0x60ed4
	movs r1, #0	@ 00060ed4 0021
.org 0x60ed6
	movs r0, #25	@ 00060ed6 1920
.org 0x60ed8
	strb r0, [r4, #13]	@ 00060ed8 6073
.org 0x60eda
	strb r1, [r4, #14]	@ 00060eda a173
