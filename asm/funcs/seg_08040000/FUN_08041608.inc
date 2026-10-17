@ FUN_08041608  entry 0x08041608  size 42
.thumb
.org 0x41608
FUN_08041608:
	push {lr}	@ 00041608 00b5
.org 0x4160a
	adds r2, r0, #0	@ 0004160a 021c
.org 0x4160c
	ldr r0, [r2, #20]	@ 0004160c 5069
.org 0x4160e
	movs r1, #1	@ 0004160e 0121
.org 0x41610
	ands r0, r1	@ 00041610 0840
.org 0x41612
	cmp r0, #0	@ 00041612 0028
.org 0x41614
	beq.n 0x4162e	@ 00041614 0bd0
.org 0x41616
	ldr r0, [r2, #12]	@ 00041616 d068
.org 0x41618
	ldr r0, [r0, #44]	@ 00041618 c06a
.org 0x4161a
	ldr r2, [r2, #44]	@ 0004161a d26a
.org 0x4161c
	movs r3, #0	@ 0004161c 0023
.org 0x4161e
	ldr r1, [r0, #84]	@ 0004161e 416d
.org 0x41620
	ldr r0, [r2, #84]	@ 00041620 506d
.org 0x41622
	cmp r1, r0	@ 00041622 8142
.org 0x41624
	ble.n 0x41628	@ 00041624 00dd
.org 0x41626
	movs r3, #1	@ 00041626 0123
.org 0x41628
	adds r0, r2, #0	@ 00041628 101c
.org 0x4162a
	adds r0, #188	@ 0004162a bc30
.org 0x4162c
	strb r3, [r0, #0]	@ 0004162c 0370
.org 0x4162e
	pop {r0}	@ 0004162e 01bc
.org 0x41630
	bx r0	@ 00041630 0047
