@ FUN_08032e48  entry 0x08032e48  size 132
.thumb
.org 0x32e48
FUN_08032e48:
	push {r4, lr}	@ 00032e48 10b5
.org 0x32e4a
	adds r4, r0, #0	@ 00032e4a 041c
.org 0x32e4c
	ldr r1, [pc, #20]	@ 00032e4c 0549
.org 0x32e4e
	adds r0, r4, r1	@ 00032e4e 6018
.org 0x32e50
	ldrb r0, [r0, #0]	@ 00032e50 0078
.org 0x32e52
	cmp r0, #2	@ 00032e52 0228
.org 0x32e54
	bne.n 0x32e6c	@ 00032e54 0ad1
.org 0x32e56
	ldr r1, [pc, #16]	@ 00032e56 0449
.org 0x32e58
	adds r0, r4, #0	@ 00032e58 201c
.org 0x32e5a
	movs r2, #2	@ 00032e5a 0222
.org 0x32e5c
	movs r3, #1	@ 00032e5c 0123
.org 0x32e5e
	bl 0x1cfc8	@ 00032e5e eaf7b3f8
.org 0x32e62
	b.n 0x32e8e	@ 00032e62 14e0
.org 0x32e64
	.byte 0x43,0x01,0x00,0x00	@ 00032e64 data
.org 0x32e68
	.byte 0x04,0x04,0x00,0x00	@ 00032e68 data
.org 0x32e6c
	adds r0, r4, #0	@ 00032e6c 201c
.org 0x32e6e
	adds r0, #252	@ 00032e6e fc30
.org 0x32e70
	ldrb r0, [r0, #0]	@ 00032e70 0078
.org 0x32e72
	cmp r0, #0	@ 00032e72 0028
.org 0x32e74
	bne.n 0x32e82	@ 00032e74 05d1
.org 0x32e76
	movs r1, #128	@ 00032e76 8021
.org 0x32e78
	lsls r1, r1, #2	@ 00032e78 8900
.org 0x32e7a
	adds r0, r4, #0	@ 00032e7a 201c
.org 0x32e7c
	bl 0x1cf00	@ 00032e7c eaf740f8
.org 0x32e80
	b.n 0x32e8e	@ 00032e80 05e0
.org 0x32e82
	ldr r1, [pc, #80]	@ 00032e82 1449
.org 0x32e84
	adds r0, r4, #0	@ 00032e84 201c
.org 0x32e86
	movs r2, #2	@ 00032e86 0222
.org 0x32e88
	movs r3, #1	@ 00032e88 0123
.org 0x32e8a
	bl 0x1cfc8	@ 00032e8a eaf79df8
.org 0x32e8e
	adds r3, r4, #0	@ 00032e8e 231c
.org 0x32e90
	adds r3, #180	@ 00032e90 b433
.org 0x32e92
	ldr r2, [r3, #84]	@ 00032e92 5a6d
.org 0x32e94
	cmp r2, #0	@ 00032e94 002a
.org 0x32e96
	beq.n 0x32ea0	@ 00032e96 03d0
.org 0x32e98
	movs r1, #0	@ 00032e98 0021
.org 0x32e9a
	movs r0, #1	@ 00032e9a 0120
.org 0x32e9c
	strb r0, [r2, #17]	@ 00032e9c 5074
.org 0x32e9e
	str r1, [r3, #84]	@ 00032e9e 5965
.org 0x32ea0
	movs r1, #128	@ 00032ea0 8021
.org 0x32ea2
	lsls r1, r1, #1	@ 00032ea2 4900
.org 0x32ea4
	adds r0, r4, r1	@ 00032ea4 6018
.org 0x32ea6
	movs r1, #0	@ 00032ea6 0021
.org 0x32ea8
	strb r1, [r0, #0]	@ 00032ea8 0170
.org 0x32eaa
	ldr r0, [pc, #44]	@ 00032eaa 0b48
.org 0x32eac
	adds r2, r4, r0	@ 00032eac 2218
.org 0x32eae
	movs r0, #255	@ 00032eae ff20
.org 0x32eb0
	strb r0, [r2, #0]	@ 00032eb0 1070
.org 0x32eb2
	adds r0, #79	@ 00032eb2 4f30
.org 0x32eb4
	adds r2, r4, r0	@ 00032eb4 2218
.org 0x32eb6
	movs r0, #1	@ 00032eb6 0120
.org 0x32eb8
	negs r0, r0	@ 00032eb8 4042
.org 0x32eba
	strb r0, [r2, #0]	@ 00032eba 1070
.org 0x32ebc
	adds r0, r4, #0	@ 00032ebc 201c
.org 0x32ebe
	adds r0, #92	@ 00032ebe 5c30
.org 0x32ec0
	str r1, [r0, #4]	@ 00032ec0 4160
.org 0x32ec2
	str r1, [r4, #92]	@ 00032ec2 e165
.org 0x32ec4
	movs r0, #1	@ 00032ec4 0120
.org 0x32ec6
	strb r0, [r4, #14]	@ 00032ec6 a073
.org 0x32ec8
	adds r0, r4, #0	@ 00032ec8 201c
.org 0x32eca
	bl 0x32edc	@ 00032eca 00f007f8
