@ FUN_080e7a4c  entry 0x080e7a4c  size 130
.thumb
.org 0xe7a4c
FUN_080e7a4c:
	push {r4, r5, r6, r7, lr}	@ 000e7a4c f0b5
.org 0xe7a4e
	adds r6, r0, #0	@ 000e7a4e 061c
.org 0xe7a50
	lsls r4, r1, #16	@ 000e7a50 0c04
.org 0xe7a52
	lsrs r7, r4, #16	@ 000e7a52 270c
.org 0xe7a54
	lsls r2, r2, #24	@ 000e7a54 1206
.org 0xe7a56
	lsrs r5, r2, #24	@ 000e7a56 150e
.org 0xe7a58
	ldr r0, [pc, #76]	@ 000e7a58 1348
.org 0xe7a5a
	ldr r0, [r0, #0]	@ 000e7a5a 0068
.org 0xe7a5c
	bl 0x5500	@ 000e7a5c 1df750fd
.org 0xe7a60
	adds r3, r0, #0	@ 000e7a60 031c
.org 0xe7a62
	cmp r3, #0	@ 000e7a62 002b
.org 0xe7a64
	beq.n 0xe7ad2	@ 000e7a64 35d0
.org 0xe7a66
	adds r1, r3, #0	@ 000e7a66 191c
.org 0xe7a68
	adds r1, #37	@ 000e7a68 2531
.org 0xe7a6a
	movs r2, #0	@ 000e7a6a 0022
.org 0xe7a6c
	movs r0, #1	@ 000e7a6c 0120
.org 0xe7a6e
	strb r0, [r1, #0]	@ 000e7a6e 0870
.org 0xe7a70
	ldr r0, [pc, #56]	@ 000e7a70 0e48
.org 0xe7a72
	movs r1, #85	@ 000e7a72 5521
.org 0xe7a74
	strb r1, [r3, #9]	@ 000e7a74 5972
.org 0xe7a76
	adds r1, #255	@ 000e7a76 ff31
.org 0xe7a78
	adds r0, r0, r1	@ 000e7a78 4018
.org 0xe7a7a
	ldr r0, [r0, #0]	@ 000e7a7a 0068
.org 0xe7a7c
	ldr r0, [r0, #0]	@ 000e7a7c 0068
.org 0xe7a7e
	str r0, [r3, #20]	@ 000e7a7e 5861
.org 0xe7a80
	movs r0, #0	@ 000e7a80 0020
.org 0xe7a82
	strh r2, [r3, #32]	@ 000e7a82 1a84
.org 0xe7a84
	adds r1, r3, #0	@ 000e7a84 191c
.org 0xe7a86
	adds r1, #34	@ 000e7a86 2231
.org 0xe7a88
	strb r0, [r1, #0]	@ 000e7a88 0870
.org 0xe7a8a
	ldr r0, [r6, #0]	@ 000e7a8a 3068
.org 0xe7a8c
	ldr r1, [r6, #4]	@ 000e7a8c 7168
.org 0xe7a8e
	str r0, [r3, #84]	@ 000e7a8e 5865
.org 0xe7a90
	str r1, [r3, #88]	@ 000e7a90 9965
.org 0xe7a92
	lsrs r0, r4, #24	@ 000e7a92 200e
.org 0xe7a94
	strb r0, [r3, #16]	@ 000e7a94 1874
.org 0xe7a96
	strb r7, [r3, #17]	@ 000e7a96 5f74
.org 0xe7a98
	adds r2, r5, #0	@ 000e7a98 2a1c
.org 0xe7a9a
	cmp r2, #0	@ 000e7a9a 002a
.org 0xe7a9c
	beq.n 0xe7ab0	@ 000e7a9c 08d0
.org 0xe7a9e
	ldrb r0, [r3, #10]	@ 000e7a9e 987a
.org 0xe7aa0
	movs r1, #16	@ 000e7aa0 1021
.org 0xe7aa2
	orrs r0, r1	@ 000e7aa2 0843
.org 0xe7aa4
	b.n 0xe7ab6	@ 000e7aa4 07e0
.org 0xe7aa6
	.byte 0x00	@ 000e7aa6 data
.org 0xe7aa7
	.byte 0x00	@ 000e7aa7 data
.org 0xe7aa8
	.byte 0x9c,0xed,0x02,0x02	@ 000e7aa8 data
.org 0xe7aac
	.byte 0x64,0x6f,0x86,0x08	@ 000e7aac data
.org 0xe7ab0
	ldrb r1, [r3, #10]	@ 000e7ab0 997a
.org 0xe7ab2
	movs r0, #239	@ 000e7ab2 ef20
.org 0xe7ab4
	ands r0, r1	@ 000e7ab4 0840
.org 0xe7ab6
	strb r0, [r3, #10]	@ 000e7ab6 9872
.org 0xe7ab8
	movs r1, #1	@ 000e7ab8 0121
.org 0xe7aba
	ands r1, r2	@ 000e7aba 1140
.org 0xe7abc
	adds r0, r3, #0	@ 000e7abc 181c
.org 0xe7abe
	adds r0, #76	@ 000e7abe 4c30
.org 0xe7ac0
	strb r1, [r0, #0]	@ 000e7ac0 0170
.org 0xe7ac2
	adds r3, #74	@ 000e7ac2 4a33
.org 0xe7ac4
	lsls r1, r1, #4	@ 000e7ac4 0901
.org 0xe7ac6
	ldrb r2, [r3, #0]	@ 000e7ac6 1a78
.org 0xe7ac8
	movs r0, #17	@ 000e7ac8 1120
.org 0xe7aca
	negs r0, r0	@ 000e7aca 4042
.org 0xe7acc
	ands r0, r2	@ 000e7acc 1040
