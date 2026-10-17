@ FUN_08037a78  entry 0x08037a78  size 38
.thumb
.org 0x37a78
FUN_08037a78:
	push {r4, lr}	@ 00037a78 10b5
.org 0x37a7a
	adds r4, r0, #0	@ 00037a7a 041c
.org 0x37a7c
	ldr r1, [pc, #32]	@ 00037a7c 0849
.org 0x37a7e
	bl 0x1cf00	@ 00037a7e e5f73ffa
.org 0x37a82
	adds r0, r4, #0	@ 00037a82 201c
.org 0x37a84
	movs r1, #2	@ 00037a84 0221
.org 0x37a86
	bl 0x3a39c	@ 00037a86 02f089fc
.org 0x37a8a
	ldr r0, [pc, #24]	@ 00037a8a 0648
.org 0x37a8c
	adds r1, r4, r0	@ 00037a8c 2118
.org 0x37a8e
	movs r0, #1	@ 00037a8e 0120
.org 0x37a90
	strb r0, [r1, #0]	@ 00037a90 0870
.org 0x37a92
	adds r0, r4, #0	@ 00037a92 201c
.org 0x37a94
	bl 0x37aa8	@ 00037a94 00f008f8
.org 0x37a98
	pop {r4}	@ 00037a98 10bc
.org 0x37a9a
	pop {r0}	@ 00037a9a 01bc
.org 0x37a9c
	bx r0	@ 00037a9c 0047
