@ FUN_080330ec  entry 0x080330ec  size 20
.thumb
.org 0x330ec
FUN_080330ec:
	push {lr}	@ 000330ec 00b5
.org 0x330ee
	ldr r2, [pc, #16]	@ 000330ee 044a
.org 0x330f0
	ldrb r1, [r0, #14]	@ 000330f0 817b
.org 0x330f2
	lsls r1, r1, #2	@ 000330f2 8900
.org 0x330f4
	adds r1, r1, r2	@ 000330f4 8918
.org 0x330f6
	ldr r1, [r1, #0]	@ 000330f6 0968
.org 0x330f8
	bl 0x128f80	@ 000330f8 f5f042ff
.org 0x330fc
	pop {r0}	@ 000330fc 01bc
.org 0x330fe
	bx r0	@ 000330fe 0047
