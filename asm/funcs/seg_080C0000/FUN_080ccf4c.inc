@ FUN_080ccf4c  entry 0x080ccf4c  size 72
.thumb
.org 0xccf4c
FUN_080ccf4c:
	push {r4, r5, lr}	@ 000ccf4c 30b5
.org 0xccf4e
	adds r5, r0, #0	@ 000ccf4e 051c
.org 0xccf50
	lsls r1, r1, #24	@ 000ccf50 0906
.org 0xccf52
	lsrs r4, r1, #24	@ 000ccf52 0c0e
.org 0xccf54
	ldr r0, [pc, #60]	@ 000ccf54 0f48
.org 0xccf56
	ldr r0, [r0, #0]	@ 000ccf56 0068
.org 0xccf58
	bl 0x5500	@ 000ccf58 38f7d2fa
.org 0xccf5c
	adds r3, r0, #0	@ 000ccf5c 031c
.org 0xccf5e
	cmp r3, #0	@ 000ccf5e 002b
.org 0xccf60
	beq.n 0xccf8e	@ 000ccf60 15d0
.org 0xccf62
	adds r1, r3, #0	@ 000ccf62 191c
.org 0xccf64
	adds r1, #37	@ 000ccf64 2531
.org 0xccf66
	movs r2, #0	@ 000ccf66 0022
.org 0xccf68
	movs r0, #8	@ 000ccf68 0820
.org 0xccf6a
	strb r0, [r1, #0]	@ 000ccf6a 0870
.org 0xccf6c
	ldr r0, [pc, #40]	@ 000ccf6c 0a48
.org 0xccf6e
	movs r1, #45	@ 000ccf6e 2d21
.org 0xccf70
	strb r1, [r3, #9]	@ 000ccf70 5972
.org 0xccf72
	adds r0, #180	@ 000ccf72 b430
.org 0xccf74
	ldr r0, [r0, #0]	@ 000ccf74 0068
.org 0xccf76
	ldr r0, [r0, #0]	@ 000ccf76 0068
.org 0xccf78
	str r0, [r3, #20]	@ 000ccf78 5861
.org 0xccf7a
	movs r0, #0	@ 000ccf7a 0020
.org 0xccf7c
	strh r2, [r3, #32]	@ 000ccf7c 1a84
.org 0xccf7e
	adds r1, r3, #0	@ 000ccf7e 191c
.org 0xccf80
	adds r1, #34	@ 000ccf80 2231
.org 0xccf82
	strb r0, [r1, #0]	@ 000ccf82 0870
.org 0xccf84
	ldr r0, [r5, #0]	@ 000ccf84 2868
.org 0xccf86
	ldr r1, [r5, #4]	@ 000ccf86 6968
.org 0xccf88
	str r0, [r3, #84]	@ 000ccf88 5865
.org 0xccf8a
	str r1, [r3, #88]	@ 000ccf8a 9965
.org 0xccf8c
	strb r4, [r3, #16]	@ 000ccf8c 1c74
.org 0xccf8e
	pop {r4, r5}	@ 000ccf8e 30bc
.org 0xccf90
	pop {r0}	@ 000ccf90 01bc
.org 0xccf92
	bx r0	@ 000ccf92 0047
