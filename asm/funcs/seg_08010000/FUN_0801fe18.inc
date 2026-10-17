@ FUN_0801fe18  entry 0x0801fe18  size 36
.thumb
.org 0x1fe18
FUN_0801fe18:
	push {lr}	@ 0001fe18 00b5
.org 0x1fe1a
	ldr r2, [pc, #32]	@ 0001fe1a 084a
.org 0x1fe1c
	movs r1, #0	@ 0001fe1c 0021
.org 0x1fe1e
	str r1, [r2, #0]	@ 0001fe1e 1160
.org 0x1fe20
	movs r3, #207	@ 0001fe20 cf23
.org 0x1fe22
	lsls r3, r3, #1	@ 0001fe22 5b00
.org 0x1fe24
	adds r0, r2, r3	@ 0001fe24 d018
.org 0x1fe26
	strh r1, [r0, #0]	@ 0001fe26 0180
.org 0x1fe28
	adds r3, #2	@ 0001fe28 0233
.org 0x1fe2a
	adds r0, r2, r3	@ 0001fe2a d018
.org 0x1fe2c
	str r1, [r0, #0]	@ 0001fe2c 0160
.org 0x1fe2e
	adds r3, #6	@ 0001fe2e 0633
.org 0x1fe30
	adds r0, r2, r3	@ 0001fe30 d018
.org 0x1fe32
	strh r1, [r0, #0]	@ 0001fe32 0180
.org 0x1fe34
	bl 0x1fe40	@ 0001fe34 00f004f8
.org 0x1fe38
	pop {r0}	@ 0001fe38 01bc
.org 0x1fe3a
	bx r0	@ 0001fe3a 0047
