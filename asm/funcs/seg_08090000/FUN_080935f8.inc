@ FUN_080935f8  entry 0x080935f8  size 20
.thumb
.org 0x935f8
FUN_080935f8:
	push {lr}	@ 000935f8 00b5
.org 0x935fa
	ldr r2, [pc, #16]	@ 000935fa 044a
.org 0x935fc
	ldrb r1, [r0, #14]	@ 000935fc 817b
.org 0x935fe
	lsls r1, r1, #2	@ 000935fe 8900
.org 0x93600
	adds r1, r1, r2	@ 00093600 8918
.org 0x93602
	ldr r1, [r1, #0]	@ 00093602 0968
.org 0x93604
	bl 0x128f80	@ 00093604 95f0bcfc
.org 0x93608
	pop {r0}	@ 00093608 01bc
.org 0x9360a
	bx r0	@ 0009360a 0047
