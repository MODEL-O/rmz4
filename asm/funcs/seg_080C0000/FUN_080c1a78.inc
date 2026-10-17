@ FUN_080c1a78  entry 0x080c1a78  size 84
.thumb
.org 0xc1a78
FUN_080c1a78:
	push {r4, r5, r6, r7, lr}	@ 000c1a78 f0b5
.org 0xc1a7a
	adds r6, r0, #0	@ 000c1a7a 061c
.org 0xc1a7c
	adds r7, r1, #0	@ 000c1a7c 0f1c
.org 0xc1a7e
	lsls r2, r2, #24	@ 000c1a7e 1206
.org 0xc1a80
	lsrs r5, r2, #24	@ 000c1a80 150e
.org 0xc1a82
	lsls r3, r3, #24	@ 000c1a82 1b06
.org 0xc1a84
	lsrs r4, r3, #24	@ 000c1a84 1c0e
.org 0xc1a86
	ldr r0, [pc, #68]	@ 000c1a86 1148
.org 0xc1a88
	ldr r0, [r0, #0]	@ 000c1a88 0068
.org 0xc1a8a
	bl 0x5500	@ 000c1a8a 43f739fd
.org 0xc1a8e
	adds r3, r0, #0	@ 000c1a8e 031c
.org 0xc1a90
	cmp r3, #0	@ 000c1a90 002b
.org 0xc1a92
	beq.n 0xc1ac6	@ 000c1a92 18d0
.org 0xc1a94
	adds r1, r3, #0	@ 000c1a94 191c
.org 0xc1a96
	adds r1, #37	@ 000c1a96 2531
.org 0xc1a98
	movs r2, #0	@ 000c1a98 0022
.org 0xc1a9a
	movs r0, #8	@ 000c1a9a 0820
.org 0xc1a9c
	strb r0, [r1, #0]	@ 000c1a9c 0870
.org 0xc1a9e
	ldr r1, [pc, #48]	@ 000c1a9e 0c49
.org 0xc1aa0
	movs r0, #14	@ 000c1aa0 0e20
.org 0xc1aa2
	strb r0, [r3, #9]	@ 000c1aa2 5872
.org 0xc1aa4
	ldr r0, [r1, #56]	@ 000c1aa4 886b
.org 0xc1aa6
	ldr r0, [r0, #0]	@ 000c1aa6 0068
.org 0xc1aa8
	str r0, [r3, #20]	@ 000c1aa8 5861
.org 0xc1aaa
	movs r0, #0	@ 000c1aaa 0020
.org 0xc1aac
	strh r2, [r3, #32]	@ 000c1aac 1a84
.org 0xc1aae
	adds r1, r3, #0	@ 000c1aae 191c
.org 0xc1ab0
	adds r1, #34	@ 000c1ab0 2231
.org 0xc1ab2
	strb r0, [r1, #0]	@ 000c1ab2 0870
.org 0xc1ab4
	str r6, [r3, #84]	@ 000c1ab4 5e65
.org 0xc1ab6
	str r7, [r3, #88]	@ 000c1ab6 9f65
.org 0xc1ab8
	movs r0, #2	@ 000c1ab8 0220
.org 0xc1aba
	strb r0, [r3, #16]	@ 000c1aba 1874
.org 0xc1abc
	strb r5, [r3, #17]	@ 000c1abc 5d74
.org 0xc1abe
	subs r1, r4, #1	@ 000c1abe 611e
.org 0xc1ac0
	adds r0, r3, #0	@ 000c1ac0 181c
.org 0xc1ac2
	adds r0, #189	@ 000c1ac2 bd30
.org 0xc1ac4
	strb r1, [r0, #0]	@ 000c1ac4 0170
.org 0xc1ac6
	pop {r4, r5, r6, r7}	@ 000c1ac6 f0bc
.org 0xc1ac8
	pop {r0}	@ 000c1ac8 01bc
.org 0xc1aca
	bx r0	@ 000c1aca 0047
