@ FUN_08057ed0  entry 0x08057ed0  size 20
.thumb
.org 0x57ed0
FUN_08057ed0:
	push {lr}	@ 00057ed0 00b5
.org 0x57ed2
	ldr r2, [pc, #16]	@ 00057ed2 044a
.org 0x57ed4
	ldrb r1, [r0, #14]	@ 00057ed4 817b
.org 0x57ed6
	lsls r1, r1, #2	@ 00057ed6 8900
.org 0x57ed8
	adds r1, r1, r2	@ 00057ed8 8918
.org 0x57eda
	ldr r1, [r1, #0]	@ 00057eda 0968
.org 0x57edc
	bl 0x128f80	@ 00057edc d1f050f8
.org 0x57ee0
	pop {r0}	@ 00057ee0 01bc
.org 0x57ee2
	bx r0	@ 00057ee2 0047
