@ FUN_080e4a54  entry 0x080e4a54  size 130
.thumb
.org 0xe4a54
FUN_080e4a54:
	push {r4, r5, r6, r7, lr}	@ 000e4a54 f0b5
.org 0xe4a56
	adds r6, r0, #0	@ 000e4a56 061c
.org 0xe4a58
	lsls r4, r1, #16	@ 000e4a58 0c04
.org 0xe4a5a
	lsrs r7, r4, #16	@ 000e4a5a 270c
.org 0xe4a5c
	lsls r2, r2, #24	@ 000e4a5c 1206
.org 0xe4a5e
	lsrs r5, r2, #24	@ 000e4a5e 150e
.org 0xe4a60
	ldr r0, [pc, #76]	@ 000e4a60 1348
.org 0xe4a62
	ldr r0, [r0, #0]	@ 000e4a62 0068
.org 0xe4a64
	bl 0x5500	@ 000e4a64 20f74cfd
.org 0xe4a68
	adds r3, r0, #0	@ 000e4a68 031c
.org 0xe4a6a
	cmp r3, #0	@ 000e4a6a 002b
.org 0xe4a6c
	beq.n 0xe4ada	@ 000e4a6c 35d0
.org 0xe4a6e
	adds r1, r3, #0	@ 000e4a6e 191c
.org 0xe4a70
	adds r1, #37	@ 000e4a70 2531
.org 0xe4a72
	movs r2, #0	@ 000e4a72 0022
.org 0xe4a74
	movs r0, #1	@ 000e4a74 0120
.org 0xe4a76
	strb r0, [r1, #0]	@ 000e4a76 0870
.org 0xe4a78
	ldr r0, [pc, #56]	@ 000e4a78 0e48
.org 0xe4a7a
	movs r1, #74	@ 000e4a7a 4a21
.org 0xe4a7c
	strb r1, [r3, #9]	@ 000e4a7c 5972
.org 0xe4a7e
	adds r1, #222	@ 000e4a7e de31
.org 0xe4a80
	adds r0, r0, r1	@ 000e4a80 4018
.org 0xe4a82
	ldr r0, [r0, #0]	@ 000e4a82 0068
.org 0xe4a84
	ldr r0, [r0, #0]	@ 000e4a84 0068
.org 0xe4a86
	str r0, [r3, #20]	@ 000e4a86 5861
.org 0xe4a88
	movs r0, #0	@ 000e4a88 0020
.org 0xe4a8a
	strh r2, [r3, #32]	@ 000e4a8a 1a84
.org 0xe4a8c
	adds r1, r3, #0	@ 000e4a8c 191c
.org 0xe4a8e
	adds r1, #34	@ 000e4a8e 2231
.org 0xe4a90
	strb r0, [r1, #0]	@ 000e4a90 0870
.org 0xe4a92
	ldr r0, [r6, #0]	@ 000e4a92 3068
.org 0xe4a94
	ldr r1, [r6, #4]	@ 000e4a94 7168
.org 0xe4a96
	str r0, [r3, #84]	@ 000e4a96 5865
.org 0xe4a98
	str r1, [r3, #88]	@ 000e4a98 9965
.org 0xe4a9a
	lsrs r0, r4, #24	@ 000e4a9a 200e
.org 0xe4a9c
	strb r0, [r3, #16]	@ 000e4a9c 1874
.org 0xe4a9e
	strb r7, [r3, #17]	@ 000e4a9e 5f74
.org 0xe4aa0
	adds r2, r5, #0	@ 000e4aa0 2a1c
.org 0xe4aa2
	cmp r2, #0	@ 000e4aa2 002a
.org 0xe4aa4
	beq.n 0xe4ab8	@ 000e4aa4 08d0
.org 0xe4aa6
	ldrb r0, [r3, #10]	@ 000e4aa6 987a
.org 0xe4aa8
	movs r1, #16	@ 000e4aa8 1021
.org 0xe4aaa
	orrs r0, r1	@ 000e4aaa 0843
.org 0xe4aac
	b.n 0xe4abe	@ 000e4aac 07e0
.org 0xe4aae
	.byte 0x00	@ 000e4aae data
.org 0xe4aaf
	.byte 0x00	@ 000e4aaf data
.org 0xe4ab0
	.byte 0x9c,0xed,0x02,0x02	@ 000e4ab0 data
.org 0xe4ab4
	.byte 0x64,0x6f,0x86,0x08	@ 000e4ab4 data
.org 0xe4ab8
	ldrb r1, [r3, #10]	@ 000e4ab8 997a
.org 0xe4aba
	movs r0, #239	@ 000e4aba ef20
.org 0xe4abc
	ands r0, r1	@ 000e4abc 0840
.org 0xe4abe
	strb r0, [r3, #10]	@ 000e4abe 9872
.org 0xe4ac0
	movs r1, #1	@ 000e4ac0 0121
.org 0xe4ac2
	ands r1, r2	@ 000e4ac2 1140
.org 0xe4ac4
	adds r0, r3, #0	@ 000e4ac4 181c
.org 0xe4ac6
	adds r0, #76	@ 000e4ac6 4c30
.org 0xe4ac8
	strb r1, [r0, #0]	@ 000e4ac8 0170
.org 0xe4aca
	adds r3, #74	@ 000e4aca 4a33
.org 0xe4acc
	lsls r1, r1, #4	@ 000e4acc 0901
.org 0xe4ace
	ldrb r2, [r3, #0]	@ 000e4ace 1a78
.org 0xe4ad0
	movs r0, #17	@ 000e4ad0 1120
.org 0xe4ad2
	negs r0, r0	@ 000e4ad2 4042
.org 0xe4ad4
	ands r0, r2	@ 000e4ad4 1040
