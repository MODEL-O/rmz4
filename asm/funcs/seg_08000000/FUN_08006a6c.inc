@ FUN_08006a6c  entry 0x08006a6c  size 36
.thumb
.org 0x6a6c
FUN_08006a6c:
	push {lr}	@ 00006a6c 00b5
.org 0x6a6e
	adds r2, r1, #0	@ 00006a6e 0a1c
.org 0x6a70
	lsls r0, r0, #24	@ 00006a70 0006
.org 0x6a72
	ldr r3, [pc, #28]	@ 00006a72 074b
.org 0x6a74
	lsrs r0, r0, #22	@ 00006a74 800d
.org 0x6a76
	adds r1, r3, #0	@ 00006a76 191c
.org 0x6a78
	adds r1, #28	@ 00006a78 1c31
.org 0x6a7a
	adds r1, r0, r1	@ 00006a7a 4118
.org 0x6a7c
	ldr r0, [r1, #0]	@ 00006a7c 0868
.org 0x6a7e
	cmp r0, r2	@ 00006a7e 9042
.org 0x6a80
	beq.n 0x6a8c	@ 00006a80 04d0
.org 0x6a82
	str r2, [r1, #0]	@ 00006a82 0a60
.org 0x6a84
	adds r1, r3, #0	@ 00006a84 191c
.org 0x6a86
	adds r1, #56	@ 00006a86 3831
.org 0x6a88
	movs r0, #1	@ 00006a88 0120
.org 0x6a8a
	strb r0, [r1, #0]	@ 00006a8a 0870
.org 0x6a8c
	pop {r0}	@ 00006a8c 01bc
.org 0x6a8e
	bx r0	@ 00006a8e 0047
