@ FUN_080ceedc  entry 0x080ceedc  size 20
.thumb
.org 0xceedc
FUN_080ceedc:
	push {lr}	@ 000ceedc 00b5
.org 0xceede
	ldr r2, [pc, #16]	@ 000ceede 044a
.org 0xceee0
	ldrb r1, [r0, #16]	@ 000ceee0 017c
.org 0xceee2
	lsls r1, r1, #2	@ 000ceee2 8900
.org 0xceee4
	adds r1, r1, r2	@ 000ceee4 8918
.org 0xceee6
	ldr r1, [r1, #0]	@ 000ceee6 0968
.org 0xceee8
	bl 0x128f80	@ 000ceee8 5af04af8
.org 0xceeec
	pop {r0}	@ 000ceeec 01bc
.org 0xceeee
	bx r0	@ 000ceeee 0047
