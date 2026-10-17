@ FUN_080d6e54  entry 0x080d6e54  size 128
.thumb
.org 0xd6e54
FUN_080d6e54:
	push {r4, r5, r6, lr}	@ 000d6e54 70b5
.org 0xd6e56
	adds r5, r0, #0	@ 000d6e56 051c
.org 0xd6e58
	lsls r1, r1, #24	@ 000d6e58 0906
.org 0xd6e5a
	lsrs r4, r1, #24	@ 000d6e5a 0c0e
.org 0xd6e5c
	lsls r2, r2, #24	@ 000d6e5c 1206
.org 0xd6e5e
	lsrs r6, r2, #24	@ 000d6e5e 160e
.org 0xd6e60
	ldr r0, [pc, #64]	@ 000d6e60 1048
.org 0xd6e62
	ldr r0, [r0, #0]	@ 000d6e62 0068
.org 0xd6e64
	bl 0x5500	@ 000d6e64 2ef74cfb
.org 0xd6e68
	adds r3, r0, #0	@ 000d6e68 031c
.org 0xd6e6a
	cmp r3, #0	@ 000d6e6a 002b
.org 0xd6e6c
	beq.n 0xd6ed6	@ 000d6e6c 33d0
.org 0xd6e6e
	adds r1, r3, #0	@ 000d6e6e 191c
.org 0xd6e70
	adds r1, #37	@ 000d6e70 2531
.org 0xd6e72
	movs r2, #0	@ 000d6e72 0022
.org 0xd6e74
	movs r0, #1	@ 000d6e74 0120
.org 0xd6e76
	strb r0, [r1, #0]	@ 000d6e76 0870
.org 0xd6e78
	ldr r1, [pc, #44]	@ 000d6e78 0b49
.org 0xd6e7a
	movs r0, #22	@ 000d6e7a 1620
.org 0xd6e7c
	strb r0, [r3, #9]	@ 000d6e7c 5872
.org 0xd6e7e
	ldr r0, [r1, #88]	@ 000d6e7e 886d
.org 0xd6e80
	ldr r0, [r0, #0]	@ 000d6e80 0068
.org 0xd6e82
	str r0, [r3, #20]	@ 000d6e82 5861
.org 0xd6e84
	movs r0, #0	@ 000d6e84 0020
.org 0xd6e86
	strh r2, [r3, #32]	@ 000d6e86 1a84
.org 0xd6e88
	adds r1, r3, #0	@ 000d6e88 191c
.org 0xd6e8a
	adds r1, #34	@ 000d6e8a 2231
.org 0xd6e8c
	strb r0, [r1, #0]	@ 000d6e8c 0870
.org 0xd6e8e
	ldr r0, [r5, #0]	@ 000d6e8e 2868
.org 0xd6e90
	ldr r1, [r5, #4]	@ 000d6e90 6968
.org 0xd6e92
	str r0, [r3, #84]	@ 000d6e92 5865
.org 0xd6e94
	str r1, [r3, #88]	@ 000d6e94 9965
.org 0xd6e96
	adds r2, r4, #0	@ 000d6e96 221c
.org 0xd6e98
	cmp r2, #0	@ 000d6e98 002a
.org 0xd6e9a
	beq.n 0xd6eac	@ 000d6e9a 07d0
.org 0xd6e9c
	ldrb r0, [r3, #10]	@ 000d6e9c 987a
.org 0xd6e9e
	movs r1, #16	@ 000d6e9e 1021
.org 0xd6ea0
	orrs r0, r1	@ 000d6ea0 0843
.org 0xd6ea2
	b.n 0xd6eb2	@ 000d6ea2 06e0
.org 0xd6ea4
	.byte 0x9c,0xed,0x02,0x02	@ 000d6ea4 data
.org 0xd6ea8
	.byte 0x64,0x6f,0x86,0x08	@ 000d6ea8 data
.org 0xd6eac
	ldrb r1, [r3, #10]	@ 000d6eac 997a
.org 0xd6eae
	movs r0, #239	@ 000d6eae ef20
.org 0xd6eb0
	ands r0, r1	@ 000d6eb0 0840
.org 0xd6eb2
	strb r0, [r3, #10]	@ 000d6eb2 9872
.org 0xd6eb4
	movs r1, #1	@ 000d6eb4 0121
.org 0xd6eb6
	ands r1, r2	@ 000d6eb6 1140
.org 0xd6eb8
	adds r0, r3, #0	@ 000d6eb8 181c
.org 0xd6eba
	adds r0, #76	@ 000d6eba 4c30
.org 0xd6ebc
	strb r1, [r0, #0]	@ 000d6ebc 0170
.org 0xd6ebe
	movs r0, #74	@ 000d6ebe 4a20
.org 0xd6ec0
	adds r0, r0, r3	@ 000d6ec0 c018
.org 0xd6ec2
	mov ip, r0	@ 000d6ec2 8446
.org 0xd6ec4
	lsls r1, r1, #4	@ 000d6ec4 0901
.org 0xd6ec6
	ldrb r2, [r0, #0]	@ 000d6ec6 0278
.org 0xd6ec8
	movs r0, #17	@ 000d6ec8 1120
.org 0xd6eca
	negs r0, r0	@ 000d6eca 4042
.org 0xd6ecc
	ands r0, r2	@ 000d6ecc 1040
.org 0xd6ece
	orrs r0, r1	@ 000d6ece 0843
.org 0xd6ed0
	mov r1, ip	@ 000d6ed0 6146
.org 0xd6ed2
	strb r0, [r1, #0]	@ 000d6ed2 0870
