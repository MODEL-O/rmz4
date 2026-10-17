@ FUN_080418e8  entry 0x080418e8  size 20
.thumb
.org 0x418e8
FUN_080418e8:
	push {lr}	@ 000418e8 00b5
.org 0x418ea
	ldr r2, [pc, #16]	@ 000418ea 044a
.org 0x418ec
	ldrb r1, [r0, #16]	@ 000418ec 017c
.org 0x418ee
	lsls r1, r1, #2	@ 000418ee 8900
.org 0x418f0
	adds r1, r1, r2	@ 000418f0 8918
.org 0x418f2
	ldr r1, [r1, #0]	@ 000418f2 0968
.org 0x418f4
	bl 0x128f80	@ 000418f4 e7f044fb
.org 0x418f8
	pop {r0}	@ 000418f8 01bc
.org 0x418fa
	bx r0	@ 000418fa 0047
