@ FUN_08077748  entry 0x08077748  size 20
.thumb
.org 0x77748
FUN_08077748:
	push {lr}	@ 00077748 00b5
.org 0x7774a
	ldr r2, [pc, #16]	@ 0007774a 044a
.org 0x7774c
	ldrb r1, [r0, #14]	@ 0007774c 817b
.org 0x7774e
	lsls r1, r1, #2	@ 0007774e 8900
.org 0x77750
	adds r1, r1, r2	@ 00077750 8918
.org 0x77752
	ldr r1, [r1, #0]	@ 00077752 0968
.org 0x77754
	bl 0x128f80	@ 00077754 b1f014fc
.org 0x77758
	pop {r0}	@ 00077758 01bc
.org 0x7775a
	bx r0	@ 0007775a 0047
