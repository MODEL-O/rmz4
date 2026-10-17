@ FUN_080d8a6c  entry 0x080d8a6c  size 94
.thumb
.org 0xd8a6c
FUN_080d8a6c:
	push {r4, r5, r6, r7, lr}	@ 000d8a6c f0b5
.org 0xd8a6e
	mov r7, r8	@ 000d8a6e 4746
.org 0xd8a70
	push {r7}	@ 000d8a70 80b4
.org 0xd8a72
	adds r5, r0, #0	@ 000d8a72 051c
.org 0xd8a74
	mov r8, r3	@ 000d8a74 9846
.org 0xd8a76
	ldr r0, [sp, #24]	@ 000d8a76 0698
.org 0xd8a78
	lsls r2, r2, #16	@ 000d8a78 1204
.org 0xd8a7a
	lsrs r7, r2, #16	@ 000d8a7a 170c
.org 0xd8a7c
	lsls r0, r0, #24	@ 000d8a7c 0006
.org 0xd8a7e
	lsrs r6, r0, #24	@ 000d8a7e 060e
.org 0xd8a80
	ldr r0, [pc, #72]	@ 000d8a80 1248
.org 0xd8a82
	ldr r0, [r0, #0]	@ 000d8a82 0068
.org 0xd8a84
	bl 0x5500	@ 000d8a84 2cf73cfd
.org 0xd8a88
	adds r4, r0, #0	@ 000d8a88 041c
.org 0xd8a8a
	cmp r4, #0	@ 000d8a8a 002c
.org 0xd8a8c
	beq.n 0xd8abe	@ 000d8a8c 17d0
.org 0xd8a8e
	adds r0, #37	@ 000d8a8e 2530
.org 0xd8a90
	movs r3, #0	@ 000d8a90 0023
.org 0xd8a92
	movs r2, #1	@ 000d8a92 0122
.org 0xd8a94
	strb r2, [r0, #0]	@ 000d8a94 0270
.org 0xd8a96
	ldr r1, [pc, #56]	@ 000d8a96 0e49
.org 0xd8a98
	movs r0, #27	@ 000d8a98 1b20
.org 0xd8a9a
	strb r0, [r4, #9]	@ 000d8a9a 6072
.org 0xd8a9c
	ldr r0, [r1, #108]	@ 000d8a9c c86e
.org 0xd8a9e
	ldr r0, [r0, #0]	@ 000d8a9e 0068
.org 0xd8aa0
	str r0, [r4, #20]	@ 000d8aa0 6061
.org 0xd8aa2
	movs r0, #0	@ 000d8aa2 0020
.org 0xd8aa4
	strh r3, [r4, #32]	@ 000d8aa4 2384
.org 0xd8aa6
	adds r1, r4, #0	@ 000d8aa6 211c
.org 0xd8aa8
	adds r1, #34	@ 000d8aa8 2231
.org 0xd8aaa
	strb r0, [r1, #0]	@ 000d8aaa 0870
.org 0xd8aac
	strb r6, [r4, #16]	@ 000d8aac 2674
.org 0xd8aae
	strb r2, [r4, #17]	@ 000d8aae 6274
.org 0xd8ab0
	ldr r0, [r5, #0]	@ 000d8ab0 2868
.org 0xd8ab2
	str r0, [r4, #84]	@ 000d8ab2 6065
.org 0xd8ab4
	ldr r0, [r5, #4]	@ 000d8ab4 6868
.org 0xd8ab6
	str r0, [r4, #88]	@ 000d8ab6 a065
.org 0xd8ab8
	str r7, [r4, #116]	@ 000d8ab8 6767
.org 0xd8aba
	mov r0, r8	@ 000d8aba 4046
.org 0xd8abc
	str r0, [r4, #120]	@ 000d8abc a067
.org 0xd8abe
	adds r0, r4, #0	@ 000d8abe 201c
.org 0xd8ac0
	pop {r3}	@ 000d8ac0 08bc
.org 0xd8ac2
	mov r8, r3	@ 000d8ac2 9846
.org 0xd8ac4
	pop {r4, r5, r6, r7}	@ 000d8ac4 f0bc
.org 0xd8ac6
	pop {r1}	@ 000d8ac6 02bc
.org 0xd8ac8
	bx r1	@ 000d8ac8 0847
