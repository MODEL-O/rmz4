@ FUN_0804d62c  entry 0x0804d62c  size 42
.thumb
.org 0x4d62c
FUN_0804d62c:
	push {lr}	@ 0004d62c 00b5
.org 0x4d62e
	adds r2, r0, #0	@ 0004d62e 021c
.org 0x4d630
	ldr r0, [r2, #20]	@ 0004d630 5069
.org 0x4d632
	movs r1, #1	@ 0004d632 0121
.org 0x4d634
	ands r0, r1	@ 0004d634 0840
.org 0x4d636
	cmp r0, #0	@ 0004d636 0028
.org 0x4d638
	beq.n 0x4d652	@ 0004d638 0bd0
.org 0x4d63a
	ldr r0, [r2, #12]	@ 0004d63a d068
.org 0x4d63c
	ldr r0, [r0, #44]	@ 0004d63c c06a
.org 0x4d63e
	ldr r2, [r2, #44]	@ 0004d63e d26a
.org 0x4d640
	movs r3, #0	@ 0004d640 0023
.org 0x4d642
	ldr r1, [r0, #84]	@ 0004d642 416d
.org 0x4d644
	ldr r0, [r2, #84]	@ 0004d644 506d
.org 0x4d646
	cmp r1, r0	@ 0004d646 8142
.org 0x4d648
	ble.n 0x4d64c	@ 0004d648 00dd
.org 0x4d64a
	movs r3, #1	@ 0004d64a 0123
.org 0x4d64c
	adds r0, r2, #0	@ 0004d64c 101c
.org 0x4d64e
	adds r0, #188	@ 0004d64e bc30
.org 0x4d650
	strb r3, [r0, #0]	@ 0004d650 0370
.org 0x4d652
	pop {r0}	@ 0004d652 01bc
.org 0x4d654
	bx r0	@ 0004d654 0047
