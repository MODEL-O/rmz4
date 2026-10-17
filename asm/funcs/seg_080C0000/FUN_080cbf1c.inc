@ FUN_080cbf1c  entry 0x080cbf1c  size 86
.thumb
.org 0xcbf1c
FUN_080cbf1c:
	push {r4, r5, r6, r7, lr}	@ 000cbf1c f0b5
.org 0xcbf1e
	adds r7, r0, #0	@ 000cbf1e 071c
.org 0xcbf20
	lsls r1, r1, #24	@ 000cbf20 0906
.org 0xcbf22
	lsrs r6, r1, #24	@ 000cbf22 0e0e
.org 0xcbf24
	lsls r2, r2, #24	@ 000cbf24 1206
.org 0xcbf26
	lsrs r5, r2, #24	@ 000cbf26 150e
.org 0xcbf28
	lsls r3, r3, #24	@ 000cbf28 1b06
.org 0xcbf2a
	lsrs r4, r3, #24	@ 000cbf2a 1c0e
.org 0xcbf2c
	ldr r0, [pc, #68]	@ 000cbf2c 1148
.org 0xcbf2e
	ldr r0, [r0, #0]	@ 000cbf2e 0068
.org 0xcbf30
	bl 0x54cc	@ 000cbf30 39f7ccfa
.org 0xcbf34
	adds r3, r0, #0	@ 000cbf34 031c
.org 0xcbf36
	cmp r3, #0	@ 000cbf36 002b
.org 0xcbf38
	beq.n 0xcbf6c	@ 000cbf38 18d0
.org 0xcbf3a
	adds r1, r3, #0	@ 000cbf3a 191c
.org 0xcbf3c
	adds r1, #37	@ 000cbf3c 2531
.org 0xcbf3e
	movs r2, #0	@ 000cbf3e 0022
.org 0xcbf40
	movs r0, #8	@ 000cbf40 0820
.org 0xcbf42
	strb r0, [r1, #0]	@ 000cbf42 0870
.org 0xcbf44
	ldr r0, [pc, #48]	@ 000cbf44 0c48
.org 0xcbf46
	movs r1, #42	@ 000cbf46 2a21
.org 0xcbf48
	strb r1, [r3, #9]	@ 000cbf48 5972
.org 0xcbf4a
	adds r0, #168	@ 000cbf4a a830
.org 0xcbf4c
	ldr r0, [r0, #0]	@ 000cbf4c 0068
.org 0xcbf4e
	ldr r0, [r0, #0]	@ 000cbf4e 0068
.org 0xcbf50
	str r0, [r3, #20]	@ 000cbf50 5861
.org 0xcbf52
	movs r0, #0	@ 000cbf52 0020
.org 0xcbf54
	strh r2, [r3, #32]	@ 000cbf54 1a84
.org 0xcbf56
	adds r1, r3, #0	@ 000cbf56 191c
.org 0xcbf58
	adds r1, #34	@ 000cbf58 2231
.org 0xcbf5a
	strb r0, [r1, #0]	@ 000cbf5a 0870
.org 0xcbf5c
	ldr r0, [r7, #0]	@ 000cbf5c 3868
.org 0xcbf5e
	ldr r1, [r7, #4]	@ 000cbf5e 7968
.org 0xcbf60
	str r0, [r3, #84]	@ 000cbf60 5865
.org 0xcbf62
	str r1, [r3, #88]	@ 000cbf62 9965
.org 0xcbf64
	str r2, [r3, #40]	@ 000cbf64 9a62
.org 0xcbf66
	strb r6, [r3, #16]	@ 000cbf66 1e74
.org 0xcbf68
	strb r5, [r3, #17]	@ 000cbf68 5d74
.org 0xcbf6a
	strb r4, [r3, #19]	@ 000cbf6a dc74
.org 0xcbf6c
	pop {r4, r5, r6, r7}	@ 000cbf6c f0bc
.org 0xcbf6e
	pop {r0}	@ 000cbf6e 01bc
.org 0xcbf70
	bx r0	@ 000cbf70 0047
