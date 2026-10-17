@ FUN_08104a78  entry 0x08104a78  size 98
.thumb
.org 0x104a78
FUN_08104a78:
	push {r4, r5, r6, r7, lr}	@ 00104a78 f0b5
.org 0x104a7a
	adds r6, r0, #0	@ 00104a7a 061c
.org 0x104a7c
	adds r7, r1, #0	@ 00104a7c 0f1c
.org 0x104a7e
	lsls r2, r2, #24	@ 00104a7e 1206
.org 0x104a80
	lsrs r5, r2, #24	@ 00104a80 150e
.org 0x104a82
	lsls r3, r3, #24	@ 00104a82 1b06
.org 0x104a84
	lsrs r4, r3, #24	@ 00104a84 1c0e
.org 0x104a86
	ldr r0, [pc, #84]	@ 00104a86 1548
.org 0x104a88
	ldr r0, [r0, #0]	@ 00104a88 0068
.org 0x104a8a
	bl 0x5500	@ 00104a8a 00f739fd
.org 0x104a8e
	adds r3, r0, #0	@ 00104a8e 031c
.org 0x104a90
	cmp r3, #0	@ 00104a90 002b
.org 0x104a92
	beq.n 0x104ad2	@ 00104a92 1ed0
.org 0x104a94
	adds r1, r3, #0	@ 00104a94 191c
.org 0x104a96
	adds r1, #37	@ 00104a96 2531
.org 0x104a98
	movs r2, #0	@ 00104a98 0022
.org 0x104a9a
	movs r0, #30	@ 00104a9a 1e20
.org 0x104a9c
	strb r0, [r1, #0]	@ 00104a9c 0870
.org 0x104a9e
	ldr r0, [pc, #64]	@ 00104a9e 1048
.org 0x104aa0
	movs r1, #76	@ 00104aa0 4c21
.org 0x104aa2
	strb r1, [r3, #9]	@ 00104aa2 5972
.org 0x104aa4
	adds r1, #228	@ 00104aa4 e431
.org 0x104aa6
	adds r0, r0, r1	@ 00104aa6 4018
.org 0x104aa8
	ldr r0, [r0, #0]	@ 00104aa8 0068
.org 0x104aaa
	ldr r0, [r0, #0]	@ 00104aaa 0068
.org 0x104aac
	str r0, [r3, #20]	@ 00104aac 5861
.org 0x104aae
	movs r0, #0	@ 00104aae 0020
.org 0x104ab0
	strh r2, [r3, #32]	@ 00104ab0 1a84
.org 0x104ab2
	adds r1, r3, #0	@ 00104ab2 191c
.org 0x104ab4
	adds r1, #34	@ 00104ab4 2231
.org 0x104ab6
	strb r0, [r1, #0]	@ 00104ab6 0870
.org 0x104ab8
	ldrb r1, [r3, #11]	@ 00104ab8 d97a
.org 0x104aba
	movs r0, #16	@ 00104aba 1020
.org 0x104abc
	orrs r0, r1	@ 00104abc 0843
.org 0x104abe
	strb r0, [r3, #11]	@ 00104abe d872
.org 0x104ac0
	ldrb r0, [r3, #28]	@ 00104ac0 187f
.org 0x104ac2
	strb r0, [r3, #29]	@ 00104ac2 5877
.org 0x104ac4
	str r6, [r3, #40]	@ 00104ac4 9e62
.org 0x104ac6
	ldr r0, [r7, #0]	@ 00104ac6 3868
.org 0x104ac8
	ldr r1, [r7, #4]	@ 00104ac8 7968
.org 0x104aca
	str r0, [r3, #84]	@ 00104aca 5865
.org 0x104acc
	str r1, [r3, #88]	@ 00104acc 9965
.org 0x104ace
	strb r5, [r3, #16]	@ 00104ace 1d74
.org 0x104ad0
	strb r4, [r3, #17]	@ 00104ad0 5c74
.org 0x104ad2
	adds r0, r3, #0	@ 00104ad2 181c
.org 0x104ad4
	pop {r4, r5, r6, r7}	@ 00104ad4 f0bc
.org 0x104ad6
	pop {r1}	@ 00104ad6 02bc
.org 0x104ad8
	bx r1	@ 00104ad8 0847
