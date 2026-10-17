@ FUN_08040638  entry 0x08040638  size 42
.thumb
.org 0x40638
FUN_08040638:
	push {lr}	@ 00040638 00b5
.org 0x4063a
	adds r2, r0, #0	@ 0004063a 021c
.org 0x4063c
	ldr r0, [r2, #20]	@ 0004063c 5069
.org 0x4063e
	movs r1, #1	@ 0004063e 0121
.org 0x40640
	ands r0, r1	@ 00040640 0840
.org 0x40642
	cmp r0, #0	@ 00040642 0028
.org 0x40644
	beq.n 0x4065e	@ 00040644 0bd0
.org 0x40646
	ldr r0, [r2, #12]	@ 00040646 d068
.org 0x40648
	ldr r0, [r0, #44]	@ 00040648 c06a
.org 0x4064a
	ldr r2, [r2, #44]	@ 0004064a d26a
.org 0x4064c
	movs r3, #0	@ 0004064c 0023
.org 0x4064e
	ldr r1, [r0, #84]	@ 0004064e 416d
.org 0x40650
	ldr r0, [r2, #84]	@ 00040650 506d
.org 0x40652
	cmp r1, r0	@ 00040652 8142
.org 0x40654
	ble.n 0x40658	@ 00040654 00dd
.org 0x40656
	movs r3, #1	@ 00040656 0123
.org 0x40658
	adds r0, r2, #0	@ 00040658 101c
.org 0x4065a
	adds r0, #188	@ 0004065a bc30
.org 0x4065c
	strb r3, [r0, #0]	@ 0004065c 0370
.org 0x4065e
	pop {r0}	@ 0004065e 01bc
.org 0x40660
	bx r0	@ 00040660 0047
