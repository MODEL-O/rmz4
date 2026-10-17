@ FUN_080e5e48  entry 0x080e5e48  size 136
.thumb
.org 0xe5e48
FUN_080e5e48:
	push {r4, r5, lr}	@ 000e5e48 30b5
.org 0xe5e4a
	sub sp, #12	@ 000e5e4a 83b0
.org 0xe5e4c
	adds r5, r0, #0	@ 000e5e4c 051c
.org 0xe5e4e
	ldr r1, [pc, #76]	@ 000e5e4e 1349
.org 0xe5e50
	mov r0, sp	@ 000e5e50 6846
.org 0xe5e52
	movs r2, #4	@ 000e5e52 0422
.org 0xe5e54
	bl 0x129258	@ 000e5e54 43f000fa
.org 0xe5e58
	ldrb r2, [r5, #17]	@ 000e5e58 6a7c
.org 0xe5e5a
	cmp r2, #0	@ 000e5e5a 002a
.org 0xe5e5c
	bne.n 0xe5ea0	@ 000e5e5c 20d1
.org 0xe5e5e
	ldr r0, [r5, #84]	@ 000e5e5e 686d
.org 0xe5e60
	str r0, [sp, #4]	@ 000e5e60 0190
.org 0xe5e62
	ldr r0, [r5, #88]	@ 000e5e62 a86d
.org 0xe5e64
	movs r1, #224	@ 000e5e64 e021
.org 0xe5e66
	lsls r1, r1, #5	@ 000e5e66 4901
.org 0xe5e68
	adds r0, r0, r1	@ 000e5e68 4018
.org 0xe5e6a
	add r1, sp, #4	@ 000e5e6a 01a9
.org 0xe5e6c
	str r0, [r1, #4]	@ 000e5e6c 4860
.org 0xe5e6e
	str r2, [r5, #96]	@ 000e5e6e 2a66
.org 0xe5e70
	movs r2, #128	@ 000e5e70 8022
.org 0xe5e72
	lsls r2, r2, #2	@ 000e5e72 9200
.org 0xe5e74
	ldrb r3, [r5, #10]	@ 000e5e74 ab7a
.org 0xe5e76
	lsrs r3, r3, #4	@ 000e5e76 1b09
.org 0xe5e78
	movs r4, #1	@ 000e5e78 0124
.org 0xe5e7a
	ands r3, r4	@ 000e5e7a 2340
.org 0xe5e7c
	movs r0, #0	@ 000e5e7c 0020
.org 0xe5e7e
	bl 0xd0dc4	@ 000e5e7e eaf7a1ff
.org 0xe5e82
	adds r0, r5, #0	@ 000e5e82 281c
.org 0xe5e84
	adds r0, #84	@ 000e5e84 5430
.org 0xe5e86
	ldrb r2, [r5, #10]	@ 000e5e86 aa7a
.org 0xe5e88
	lsrs r2, r2, #4	@ 000e5e88 1209
.org 0xe5e8a
	ands r2, r4	@ 000e5e8a 2240
.org 0xe5e8c
	movs r1, #1	@ 000e5e8c 0121
.org 0xe5e8e
	bl 0xe5d34	@ 000e5e8e fff751ff
.org 0xe5e92
	adds r1, r5, #0	@ 000e5e92 291c
.org 0xe5e94
	adds r1, #37	@ 000e5e94 2531
.org 0xe5e96
	movs r0, #24	@ 000e5e96 1820
.org 0xe5e98
	strb r0, [r1, #0]	@ 000e5e98 0870
.org 0xe5e9a
	b.n 0xe5eba	@ 000e5e9a 0ee0
.org 0xe5e9c
	.byte 0xd8,0xa2,0x12,0x08	@ 000e5e9c data
.org 0xe5ea0
	movs r1, #0	@ 000e5ea0 0021
.org 0xe5ea2
	movs r0, #20	@ 000e5ea2 1420
.org 0xe5ea4
	strb r0, [r5, #18]	@ 000e5ea4 a874
.org 0xe5ea6
	str r1, [r5, #96]	@ 000e5ea6 2966
.org 0xe5ea8
	ldr r0, [r5, #84]	@ 000e5ea8 686d
.org 0xe5eaa
	ldr r1, [r5, #88]	@ 000e5eaa a96d
.org 0xe5eac
	bl 0x7c7c	@ 000e5eac 21f7e6fe
.org 0xe5eb0
	lsls r0, r0, #16	@ 000e5eb0 0004
.org 0xe5eb2
	cmp r0, #0	@ 000e5eb2 0028
.org 0xe5eb4
	bne.n 0xe5eba	@ 000e5eb4 01d1
.org 0xe5eb6
	ldr r0, [pc, #28]	@ 000e5eb6 0748
.org 0xe5eb8
	str r0, [r5, #96]	@ 000e5eb8 2866
.org 0xe5eba
	ldrb r0, [r5, #17]	@ 000e5eba 687c
.org 0xe5ebc
	lsls r0, r0, #1	@ 000e5ebc 4000
.org 0xe5ebe
	add r0, sp	@ 000e5ebe 6844
.org 0xe5ec0
	ldrh r1, [r0, #0]	@ 000e5ec0 0188
.org 0xe5ec2
	adds r0, r5, #0	@ 000e5ec2 281c
.org 0xe5ec4
	bl 0x1cf00	@ 000e5ec4 37f71cf8
.org 0xe5ec8
	movs r0, #0	@ 000e5ec8 0020
.org 0xe5eca
	strb r0, [r5, #13]	@ 000e5eca 6873
.org 0xe5ecc
	add sp, #12	@ 000e5ecc 03b0
.org 0xe5ece
	pop {r4, r5}	@ 000e5ece 30bc
