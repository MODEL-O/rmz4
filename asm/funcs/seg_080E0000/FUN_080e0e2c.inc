@ FUN_080e0e2c  entry 0x080e0e2c  size 152
.thumb
.org 0xe0e2c
FUN_080e0e2c:
	push {r4, r5, r6, lr}	@ 000e0e2c 70b5
.org 0xe0e2e
	adds r5, r0, #0	@ 000e0e2e 051c
.org 0xe0e30
	ldrb r4, [r5, #17]	@ 000e0e30 6c7c
.org 0xe0e32
	ldr r1, [pc, #88]	@ 000e0e32 1649
.org 0xe0e34
	ldrb r0, [r5, #9]	@ 000e0e34 687a
.org 0xe0e36
	lsls r0, r0, #2	@ 000e0e36 8000
.org 0xe0e38
	adds r0, r0, r1	@ 000e0e38 4018
.org 0xe0e3a
	movs r1, #1	@ 000e0e3a 0121
.org 0xe0e3c
	str r1, [r5, #12]	@ 000e0e3c e960
.org 0xe0e3e
	ldr r0, [r0, #0]	@ 000e0e3e 0068
.org 0xe0e40
	ldr r0, [r0, #4]	@ 000e0e40 4068
.org 0xe0e42
	str r0, [r5, #20]	@ 000e0e42 6861
.org 0xe0e44
	ldrb r1, [r5, #10]	@ 000e0e44 a97a
.org 0xe0e46
	movs r0, #1	@ 000e0e46 0120
.org 0xe0e48
	movs r6, #0	@ 000e0e48 0026
.org 0xe0e4a
	orrs r0, r1	@ 000e0e4a 0843
.org 0xe0e4c
	movs r1, #2	@ 000e0e4c 0221
.org 0xe0e4e
	orrs r0, r1	@ 000e0e4e 0843
.org 0xe0e50
	strb r0, [r5, #10]	@ 000e0e50 a872
.org 0xe0e52
	lsls r0, r4, #8	@ 000e0e52 2002
.org 0xe0e54
	subs r0, #128	@ 000e0e54 8038
.org 0xe0e56
	negs r0, r0	@ 000e0e56 4042
.org 0xe0e58
	str r0, [r5, #92]	@ 000e0e58 e865
.org 0xe0e5a
	ldr r0, [pc, #52]	@ 000e0e5a 0d48
.org 0xe0e5c
	str r0, [r5, #96]	@ 000e0e5c 2866
.org 0xe0e5e
	ldr r2, [pc, #52]	@ 000e0e5e 0d4a
.org 0xe0e60
	ldr r1, [r2, #0]	@ 000e0e60 1168
.org 0xe0e62
	ldr r0, [pc, #52]	@ 000e0e62 0d48
.org 0xe0e64
	muls r0, r1	@ 000e0e64 4843
.org 0xe0e66
	ldr r1, [pc, #52]	@ 000e0e66 0d49
.org 0xe0e68
	adds r0, r0, r1	@ 000e0e68 4018
.org 0xe0e6a
	lsls r0, r0, #1	@ 000e0e6a 4000
.org 0xe0e6c
	lsrs r1, r0, #1	@ 000e0e6c 4108
.org 0xe0e6e
	str r1, [r2, #0]	@ 000e0e6e 1160
.org 0xe0e70
	lsrs r0, r0, #17	@ 000e0e70 400c
.org 0xe0e72
	movs r1, #3	@ 000e0e72 0321
.org 0xe0e74
	ands r0, r1	@ 000e0e74 0840
.org 0xe0e76
	adds r0, #16	@ 000e0e76 1030
.org 0xe0e78
	strb r0, [r5, #18]	@ 000e0e78 a874
.org 0xe0e7a
	adds r0, r5, #0	@ 000e0e7a 281c
.org 0xe0e7c
	bl 0x1cc9c	@ 000e0e7c 3bf70eff
.org 0xe0e80
	cmp r4, #0	@ 000e0e80 002c
.org 0xe0e82
	beq.n 0xe0ea0	@ 000e0e82 0dd0
.org 0xe0e84
	ldrb r0, [r5, #10]	@ 000e0e84 a87a
.org 0xe0e86
	movs r1, #16	@ 000e0e86 1021
.org 0xe0e88
	orrs r0, r1	@ 000e0e88 0843
.org 0xe0e8a
	b.n 0xe0ea6	@ 000e0e8a 0ce0
.org 0xe0e8c
	.byte 0x64,0x6f,0x86,0x08	@ 000e0e8c data
.org 0xe0e90
	.byte 0x80,0xfe,0xff,0xff	@ 000e0e90 data
.org 0xe0e94
	.byte 0x38,0xdc,0x02,0x02	@ 000e0e94 data
.org 0xe0e98
	.byte 0xfd,0x43,0x03,0x00	@ 000e0e98 data
.org 0xe0e9c
	.byte 0xc3,0x9e,0x26,0x00	@ 000e0e9c data
.org 0xe0ea0
	ldrb r1, [r5, #10]	@ 000e0ea0 a97a
.org 0xe0ea2
	movs r0, #239	@ 000e0ea2 ef20
.org 0xe0ea4
	ands r0, r1	@ 000e0ea4 0840
.org 0xe0ea6
	strb r0, [r5, #10]	@ 000e0ea6 a872
.org 0xe0ea8
	movs r1, #1	@ 000e0ea8 0121
.org 0xe0eaa
	ands r1, r4	@ 000e0eaa 2140
.org 0xe0eac
	adds r0, r5, #0	@ 000e0eac 281c
.org 0xe0eae
	adds r0, #76	@ 000e0eae 4c30
.org 0xe0eb0
	strb r1, [r0, #0]	@ 000e0eb0 0170
.org 0xe0eb2
	adds r3, r5, #0	@ 000e0eb2 2b1c
.org 0xe0eb4
	adds r3, #74	@ 000e0eb4 4a33
.org 0xe0eb6
	lsls r1, r1, #4	@ 000e0eb6 0901
.org 0xe0eb8
	ldrb r2, [r3, #0]	@ 000e0eb8 1a78
.org 0xe0eba
	movs r0, #17	@ 000e0eba 1120
.org 0xe0ebc
	negs r0, r0	@ 000e0ebc 4042
.org 0xe0ebe
	ands r0, r2	@ 000e0ebe 1040
.org 0xe0ec0
	orrs r0, r1	@ 000e0ec0 0843
.org 0xe0ec2
	strb r0, [r3, #0]	@ 000e0ec2 1870
