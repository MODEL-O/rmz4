@ FUN_080352b8  entry 0x080352b8  size 26
.thumb
.org 0x352b8
FUN_080352b8:
	push {lr}	@ 000352b8 00b5
.org 0x352ba
	ldr r2, [pc, #24]	@ 000352ba 064a
.org 0x352bc
	movs r3, #128	@ 000352bc 8023
.org 0x352be
	lsls r3, r3, #1	@ 000352be 5b00
.org 0x352c0
	adds r1, r0, r3	@ 000352c0 c118
.org 0x352c2
	ldrb r1, [r1, #0]	@ 000352c2 0978
.org 0x352c4
	lsls r1, r1, #2	@ 000352c4 8900
.org 0x352c6
	adds r1, r1, r2	@ 000352c6 8918
.org 0x352c8
	ldr r1, [r1, #0]	@ 000352c8 0968
.org 0x352ca
	bl 0x128f80	@ 000352ca f3f059fe
.org 0x352ce
	pop {r0}	@ 000352ce 01bc
.org 0x352d0
	bx r0	@ 000352d0 0047
