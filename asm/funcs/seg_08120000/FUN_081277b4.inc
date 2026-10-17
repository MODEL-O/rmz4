@ FUN_081277b4  entry 0x081277b4  size 36
.thumb
.org 0x1277b4
FUN_081277b4:
	push {lr}	@ 001277b4 00b5
.org 0x1277b6
	lsls r0, r0, #16	@ 001277b6 0004
.org 0x1277b8
	ldr r2, [pc, #28]	@ 001277b8 074a
.org 0x1277ba
	ldr r1, [pc, #32]	@ 001277ba 0849
.org 0x1277bc
	lsrs r0, r0, #13	@ 001277bc 400b
.org 0x1277be
	adds r0, r0, r1	@ 001277be 4018
.org 0x1277c0
	ldrh r3, [r0, #4]	@ 001277c0 8388
.org 0x1277c2
	lsls r1, r3, #1	@ 001277c2 5900
.org 0x1277c4
	adds r1, r1, r3	@ 001277c4 c918
.org 0x1277c6
	lsls r1, r1, #2	@ 001277c6 8900
.org 0x1277c8
	adds r1, r1, r2	@ 001277c8 8918
.org 0x1277ca
	ldr r2, [r1, #0]	@ 001277ca 0a68
.org 0x1277cc
	ldr r1, [r0, #0]	@ 001277cc 0168
.org 0x1277ce
	adds r0, r2, #0	@ 001277ce 101c
.org 0x1277d0
	bl 0x127ea0	@ 001277d0 00f066fb
.org 0x1277d4
	pop {r0}	@ 001277d4 01bc
.org 0x1277d6
	bx r0	@ 001277d6 0047
