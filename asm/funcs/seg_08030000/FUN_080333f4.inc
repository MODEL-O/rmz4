@ FUN_080333f4  entry 0x080333f4  size 26
.thumb
.org 0x333f4
FUN_080333f4:
	push {lr}	@ 000333f4 00b5
.org 0x333f6
	ldr r2, [pc, #24]	@ 000333f6 064a
.org 0x333f8
	movs r3, #128	@ 000333f8 8023
.org 0x333fa
	lsls r3, r3, #1	@ 000333fa 5b00
.org 0x333fc
	adds r1, r0, r3	@ 000333fc c118
.org 0x333fe
	ldrb r1, [r1, #0]	@ 000333fe 0978
.org 0x33400
	lsls r1, r1, #2	@ 00033400 8900
.org 0x33402
	adds r1, r1, r2	@ 00033402 8918
.org 0x33404
	ldr r1, [r1, #0]	@ 00033404 0968
.org 0x33406
	bl 0x128f80	@ 00033406 f5f0bbfd
.org 0x3340a
	pop {r0}	@ 0003340a 01bc
.org 0x3340c
	bx r0	@ 0003340c 0047
