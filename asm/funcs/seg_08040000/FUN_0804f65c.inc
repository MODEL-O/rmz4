@ FUN_0804f65c  entry 0x0804f65c  size 42
.thumb
.org 0x4f65c
FUN_0804f65c:
	push {lr}	@ 0004f65c 00b5
.org 0x4f65e
	adds r2, r0, #0	@ 0004f65e 021c
.org 0x4f660
	ldr r0, [r2, #20]	@ 0004f660 5069
.org 0x4f662
	movs r1, #1	@ 0004f662 0121
.org 0x4f664
	ands r0, r1	@ 0004f664 0840
.org 0x4f666
	cmp r0, #0	@ 0004f666 0028
.org 0x4f668
	beq.n 0x4f682	@ 0004f668 0bd0
.org 0x4f66a
	ldr r0, [r2, #12]	@ 0004f66a d068
.org 0x4f66c
	ldr r0, [r0, #44]	@ 0004f66c c06a
.org 0x4f66e
	ldr r2, [r2, #44]	@ 0004f66e d26a
.org 0x4f670
	movs r3, #0	@ 0004f670 0023
.org 0x4f672
	ldr r1, [r0, #84]	@ 0004f672 416d
.org 0x4f674
	ldr r0, [r2, #84]	@ 0004f674 506d
.org 0x4f676
	cmp r1, r0	@ 0004f676 8142
.org 0x4f678
	ble.n 0x4f67c	@ 0004f678 00dd
.org 0x4f67a
	movs r3, #1	@ 0004f67a 0123
.org 0x4f67c
	adds r0, r2, #0	@ 0004f67c 101c
.org 0x4f67e
	adds r0, #188	@ 0004f67e bc30
.org 0x4f680
	strb r3, [r0, #0]	@ 0004f680 0370
.org 0x4f682
	pop {r0}	@ 0004f682 01bc
.org 0x4f684
	bx r0	@ 0004f684 0047
