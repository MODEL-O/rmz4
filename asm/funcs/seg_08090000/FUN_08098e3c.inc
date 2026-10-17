@ FUN_08098e3c  entry 0x08098e3c  size 150
.thumb
.org 0x98e3c
FUN_08098e3c:
	push {r4, r5, r6, r7, lr}	@ 00098e3c f0b5
.org 0x98e3e
	adds r7, r0, #0	@ 00098e3e 071c
.org 0x98e40
	bl 0x1cc9c	@ 00098e40 83f72cff
.org 0x98e44
	ldrb r1, [r7, #10]	@ 00098e44 b97a
.org 0x98e46
	movs r0, #1	@ 00098e46 0120
.org 0x98e48
	orrs r0, r1	@ 00098e48 0843
.org 0x98e4a
	movs r1, #2	@ 00098e4a 0221
.org 0x98e4c
	orrs r0, r1	@ 00098e4c 0843
.org 0x98e4e
	strb r0, [r7, #10]	@ 00098e4e b872
.org 0x98e50
	movs r1, #208	@ 00098e50 d021
.org 0x98e52
	lsls r1, r1, #7	@ 00098e52 c901
.org 0x98e54
	adds r0, r7, #0	@ 00098e54 381c
.org 0x98e56
	bl 0x1cf00	@ 00098e56 84f753f8
.org 0x98e5a
	adds r0, r7, #0	@ 00098e5a 381c
.org 0x98e5c
	bl 0x1cff0	@ 00098e5c 84f7c8f8
.org 0x98e60
	movs r5, #0	@ 00098e60 0025
.org 0x98e62
	ldrb r1, [r7, #10]	@ 00098e62 b97a
.org 0x98e64
	movs r0, #239	@ 00098e64 ef20
.org 0x98e66
	ands r0, r1	@ 00098e66 0840
.org 0x98e68
	strb r0, [r7, #10]	@ 00098e68 b872
.org 0x98e6a
	movs r6, #1	@ 00098e6a 0126
.org 0x98e6c
	adds r0, r7, #0	@ 00098e6c 381c
.org 0x98e6e
	adds r0, #76	@ 00098e6e 4c30
.org 0x98e70
	strb r5, [r0, #0]	@ 00098e70 0570
.org 0x98e72
	adds r2, r7, #0	@ 00098e72 3a1c
.org 0x98e74
	adds r2, #74	@ 00098e74 4a32
.org 0x98e76
	ldrb r1, [r2, #0]	@ 00098e76 1178
.org 0x98e78
	movs r0, #17	@ 00098e78 1120
.org 0x98e7a
	negs r0, r0	@ 00098e7a 4042
.org 0x98e7c
	ands r0, r1	@ 00098e7c 0840
.org 0x98e7e
	strb r0, [r2, #0]	@ 00098e7e 1070
.org 0x98e80
	ldrb r1, [r7, #10]	@ 00098e80 b97a
.org 0x98e82
	movs r0, #4	@ 00098e82 0420
.org 0x98e84
	orrs r0, r1	@ 00098e84 0843
.org 0x98e86
	strb r0, [r7, #10]	@ 00098e86 b872
.org 0x98e88
	adds r4, r7, #0	@ 00098e88 3c1c
.org 0x98e8a
	adds r4, #116	@ 00098e8a 7434
.org 0x98e8c
	ldr r1, [pc, #68]	@ 00098e8c 1149
.org 0x98e8e
	adds r2, #10	@ 00098e8e 0a32
.org 0x98e90
	adds r0, r4, #0	@ 00098e90 201c
.org 0x98e92
	movs r3, #6	@ 00098e92 0623
.org 0x98e94
	bl 0x5760	@ 00098e94 6cf764fc
.org 0x98e98
	str r7, [r4, #44]	@ 00098e98 e762
.org 0x98e9a
	ldr r0, [pc, #60]	@ 00098e9a 0f48
.org 0x98e9c
	str r0, [r4, #36]	@ 00098e9c 6062
.org 0x98e9e
	adds r0, r7, #0	@ 00098e9e 381c
.org 0x98ea0
	adds r0, #189	@ 00098ea0 bd30
.org 0x98ea2
	strb r5, [r0, #0]	@ 00098ea2 0570
.org 0x98ea4
	ldr r0, [r7, #84]	@ 00098ea4 786d
.org 0x98ea6
	str r0, [r7, #100]	@ 00098ea6 7866
.org 0x98ea8
	ldr r0, [r7, #88]	@ 00098ea8 b86d
.org 0x98eaa
	str r0, [r7, #104]	@ 00098eaa b866
.org 0x98eac
	adds r0, r7, #0	@ 00098eac 381c
.org 0x98eae
	adds r0, #180	@ 00098eae b430
.org 0x98eb0
	str r5, [r0, #0]	@ 00098eb0 0560
.org 0x98eb2
	adds r0, #12	@ 00098eb2 0c30
.org 0x98eb4
	str r5, [r0, #0]	@ 00098eb4 0560
.org 0x98eb6
	ldr r1, [pc, #36]	@ 00098eb6 0949
.org 0x98eb8
	ldrb r0, [r7, #9]	@ 00098eb8 787a
.org 0x98eba
	lsls r0, r0, #2	@ 00098eba 8000
.org 0x98ebc
	adds r0, r0, r1	@ 00098ebc 4018
.org 0x98ebe
	str r6, [r7, #12]	@ 00098ebe fe60
.org 0x98ec0
	ldr r0, [r0, #0]	@ 00098ec0 0068
.org 0x98ec2
	ldr r0, [r0, #4]	@ 00098ec2 4068
.org 0x98ec4
	str r0, [r7, #20]	@ 00098ec4 7861
.org 0x98ec6
	adds r0, r7, #0	@ 00098ec6 381c
.org 0x98ec8
	bl 0x98ee0	@ 00098ec8 00f00af8
.org 0x98ecc
	pop {r4, r5, r6, r7}	@ 00098ecc f0bc
.org 0x98ece
	pop {r0}	@ 00098ece 01bc
.org 0x98ed0
	bx r0	@ 00098ed0 0047
