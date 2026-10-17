@ FUN_080c88ec  entry 0x080c88ec  size 20
.thumb
.org 0xc88ec
FUN_080c88ec:
	push {lr}	@ 000c88ec 00b5
.org 0xc88ee
	ldr r2, [pc, #16]	@ 000c88ee 044a
.org 0xc88f0
	ldrb r1, [r0, #16]	@ 000c88f0 017c
.org 0xc88f2
	lsls r1, r1, #2	@ 000c88f2 8900
.org 0xc88f4
	adds r1, r1, r2	@ 000c88f4 8918
.org 0xc88f6
	ldr r1, [r1, #0]	@ 000c88f6 0968
.org 0xc88f8
	bl 0x128f80	@ 000c88f8 60f042fb
.org 0xc88fc
	pop {r0}	@ 000c88fc 01bc
.org 0xc88fe
	bx r0	@ 000c88fe 0047
