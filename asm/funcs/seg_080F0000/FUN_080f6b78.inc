@ FUN_080f6b78  entry 0x080f6b78  size 90
.thumb
.org 0xf6b78
FUN_080f6b78:
	push {r4, r5, r6, lr}	@ 000f6b78 70b5
.org 0xf6b7a
	adds r6, r0, #0	@ 000f6b7a 061c
.org 0xf6b7c
	lsls r1, r1, #24	@ 000f6b7c 0906
.org 0xf6b7e
	lsrs r5, r1, #24	@ 000f6b7e 0d0e
.org 0xf6b80
	lsls r2, r2, #24	@ 000f6b80 1206
.org 0xf6b82
	lsrs r4, r2, #24	@ 000f6b82 140e
.org 0xf6b84
	ldr r0, [pc, #76]	@ 000f6b84 1348
.org 0xf6b86
	ldr r0, [r0, #0]	@ 000f6b86 0068
.org 0xf6b88
	bl 0x5500	@ 000f6b88 0ef7bafc
.org 0xf6b8c
	adds r3, r0, #0	@ 000f6b8c 031c
.org 0xf6b8e
	cmp r3, #0	@ 000f6b8e 002b
.org 0xf6b90
	beq.n 0xf6bca	@ 000f6b90 1bd0
.org 0xf6b92
	adds r1, r3, #0	@ 000f6b92 191c
.org 0xf6b94
	adds r1, #37	@ 000f6b94 2531
.org 0xf6b96
	movs r2, #0	@ 000f6b96 0022
.org 0xf6b98
	movs r0, #30	@ 000f6b98 1e20
.org 0xf6b9a
	strb r0, [r1, #0]	@ 000f6b9a 0870
.org 0xf6b9c
	ldr r1, [pc, #56]	@ 000f6b9c 0e49
.org 0xf6b9e
	movs r0, #25	@ 000f6b9e 1920
.org 0xf6ba0
	strb r0, [r3, #9]	@ 000f6ba0 5872
.org 0xf6ba2
	ldr r0, [r1, #100]	@ 000f6ba2 486e
.org 0xf6ba4
	ldr r0, [r0, #0]	@ 000f6ba4 0068
.org 0xf6ba6
	str r0, [r3, #20]	@ 000f6ba6 5861
.org 0xf6ba8
	movs r0, #0	@ 000f6ba8 0020
.org 0xf6baa
	strh r2, [r3, #32]	@ 000f6baa 1a84
.org 0xf6bac
	adds r1, r3, #0	@ 000f6bac 191c
.org 0xf6bae
	adds r1, #34	@ 000f6bae 2231
.org 0xf6bb0
	strb r0, [r1, #0]	@ 000f6bb0 0870
.org 0xf6bb2
	ldrb r1, [r3, #11]	@ 000f6bb2 d97a
.org 0xf6bb4
	movs r0, #16	@ 000f6bb4 1020
.org 0xf6bb6
	orrs r0, r1	@ 000f6bb6 0843
.org 0xf6bb8
	strb r0, [r3, #11]	@ 000f6bb8 d872
.org 0xf6bba
	ldrb r0, [r3, #28]	@ 000f6bba 187f
.org 0xf6bbc
	strb r0, [r3, #29]	@ 000f6bbc 5877
.org 0xf6bbe
	ldr r0, [r6, #0]	@ 000f6bbe 3068
.org 0xf6bc0
	ldr r1, [r6, #4]	@ 000f6bc0 7168
.org 0xf6bc2
	str r0, [r3, #84]	@ 000f6bc2 5865
.org 0xf6bc4
	str r1, [r3, #88]	@ 000f6bc4 9965
.org 0xf6bc6
	strb r5, [r3, #16]	@ 000f6bc6 1d74
.org 0xf6bc8
	strb r4, [r3, #17]	@ 000f6bc8 5c74
.org 0xf6bca
	adds r0, r3, #0	@ 000f6bca 181c
.org 0xf6bcc
	pop {r4, r5, r6}	@ 000f6bcc 70bc
.org 0xf6bce
	pop {r1}	@ 000f6bce 02bc
.org 0xf6bd0
	bx r1	@ 000f6bd0 0847
