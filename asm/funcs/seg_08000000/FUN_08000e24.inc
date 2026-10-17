@ FUN_08000e24  entry 0x08000e24  size 156
.thumb
.org 0xe24
FUN_08000e24:
	push {r4, r5, lr}	@ 00000e24 30b5
.org 0xe26
	ldr r2, [pc, #68]	@ 00000e26 114a
.org 0xe28
	movs r0, #0	@ 00000e28 0020
.org 0xe2a
	str r0, [r2, #0]	@ 00000e2a 1060
.org 0xe2c
	ldr r1, [pc, #64]	@ 00000e2c 1049
.org 0xe2e
	movs r3, #184	@ 00000e2e b823
.org 0xe30
	lsls r3, r3, #1	@ 00000e30 5b00
.org 0xe32
	adds r0, r1, r3	@ 00000e32 c818
.org 0xe34
	ldr r3, [r0, #0]	@ 00000e34 0368
.org 0xe36
	cmp r3, #0	@ 00000e36 002b
.org 0xe38
	beq.n 0xed0	@ 00000e38 4ad0
.org 0xe3a
	movs r4, #180	@ 00000e3a b424
.org 0xe3c
	lsls r4, r4, #1	@ 00000e3c 6400
.org 0xe3e
	adds r0, r1, r4	@ 00000e3e 0819
.org 0xe40
	ldr r5, [r0, #0]	@ 00000e40 0568
.org 0xe42
	adds r4, #4	@ 00000e42 0434
.org 0xe44
	adds r0, r1, r4	@ 00000e44 0819
.org 0xe46
	ldr r4, [r0, #0]	@ 00000e46 0468
.org 0xe48
	ldr r0, [pc, #40]	@ 00000e48 0a48
.org 0xe4a
	str r5, [r0, #0]	@ 00000e4a 0560
.org 0xe4c
	adds r0, #4	@ 00000e4c 0430
.org 0xe4e
	str r4, [r0, #0]	@ 00000e4e 0460
.org 0xe50
	ldr r0, [pc, #36]	@ 00000e50 0948
.org 0xe52
	ands r0, r3	@ 00000e52 1840
.org 0xe54
	str r0, [r2, #0]	@ 00000e54 1060
.org 0xe56
	ldr r0, [r2, #0]	@ 00000e56 1068
.org 0xe58
	ldr r2, [pc, #32]	@ 00000e58 084a
.org 0xe5a
	ands r2, r3	@ 00000e5a 1a40
.org 0xe5c
	movs r0, #128	@ 00000e5c 8020
.org 0xe5e
	lsls r0, r0, #19	@ 00000e5e c004
.org 0xe60
	ands r0, r3	@ 00000e60 1840
.org 0xe62
	cmp r0, #0	@ 00000e62 0028
.org 0xe64
	beq.n 0xe80	@ 00000e64 0cd0
.org 0xe66
	lsls r2, r2, #2	@ 00000e66 9200
.org 0xe68
	b.n 0xe82	@ 00000e68 0be0
.org 0xe6a
	.byte 0x00	@ 00000e6a data
.org 0xe6b
	.byte 0x00	@ 00000e6b data
.org 0xe6c
	.byte 0xb8,0x00,0x00,0x04	@ 00000e6c data
.org 0xe70
	.byte 0x90,0x15,0x00,0x03	@ 00000e70 data
.org 0xe74
	.byte 0xb0,0x00,0x00,0x04	@ 00000e74 data
.org 0xe78
	.byte 0xff,0xff,0xff,0xcd	@ 00000e78 data
.org 0xe7c
	.byte 0xff,0xff,0x00,0x00	@ 00000e7c data
.org 0xe80
	lsls r2, r2, #1	@ 00000e80 5200
.org 0xe82
	movs r1, #192	@ 00000e82 c021
.org 0xe84
	lsls r1, r1, #15	@ 00000e84 c903
.org 0xe86
	ands r1, r3	@ 00000e86 1940
.org 0xe88
	cmp r1, #0	@ 00000e88 0029
.org 0xe8a
	bne.n 0xe8e	@ 00000e8a 00d1
.org 0xe8c
	adds r4, r4, r2	@ 00000e8c a418
.org 0xe8e
	movs r0, #128	@ 00000e8e 8020
.org 0xe90
	lsls r0, r0, #14	@ 00000e90 8003
.org 0xe92
	cmp r1, r0	@ 00000e92 8142
.org 0xe94
	bne.n 0xe98	@ 00000e94 00d1
.org 0xe96
	subs r4, r4, r2	@ 00000e96 a41a
.org 0xe98
	movs r1, #192	@ 00000e98 c021
.org 0xe9a
	lsls r1, r1, #17	@ 00000e9a 4904
.org 0xe9c
	ands r1, r3	@ 00000e9c 1940
.org 0xe9e
	cmp r1, #0	@ 00000e9e 0029
.org 0xea0
	bne.n 0xea4	@ 00000ea0 00d1
.org 0xea2
	adds r5, r5, r2	@ 00000ea2 ad18
.org 0xea4
	movs r0, #128	@ 00000ea4 8020
.org 0xea6
	lsls r0, r0, #16	@ 00000ea6 0004
.org 0xea8
	cmp r1, r0	@ 00000ea8 8142
.org 0xeaa
	bne.n 0xeae	@ 00000eaa 00d1
.org 0xeac
	subs r5, r5, r2	@ 00000eac ad1a
.org 0xeae
	ldr r2, [pc, #40]	@ 00000eae 0a4a
.org 0xeb0
	ldr r0, [r2, #0]	@ 00000eb0 1068
.org 0xeb2
	movs r1, #128	@ 00000eb2 8021
.org 0xeb4
	lsls r1, r1, #24	@ 00000eb4 0906
.org 0xeb6
	cmp r0, #0	@ 00000eb6 0028
.org 0xeb8
	bge.n 0xec2	@ 00000eb8 03da
.org 0xeba
	ldr r0, [r2, #0]	@ 00000eba 1068
.org 0xebc
	ands r0, r1	@ 00000ebc 0840
.org 0xebe
	cmp r0, #0	@ 00000ebe 0028
