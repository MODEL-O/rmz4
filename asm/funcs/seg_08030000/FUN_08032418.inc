@ FUN_08032418  entry 0x08032418  size 20
.thumb
.org 0x32418
FUN_08032418:
	push {lr}	@ 00032418 00b5
.org 0x3241a
	ldr r2, [pc, #16]	@ 0003241a 044a
.org 0x3241c
	ldrb r1, [r0, #15]	@ 0003241c c17b
.org 0x3241e
	lsls r1, r1, #2	@ 0003241e 8900
.org 0x32420
	adds r1, r1, r2	@ 00032420 8918
.org 0x32422
	ldr r1, [r1, #0]	@ 00032422 0968
.org 0x32424
	bl 0x128f80	@ 00032424 f6f0acfd
.org 0x32428
	pop {r0}	@ 00032428 01bc
.org 0x3242a
	bx r0	@ 0003242a 0047
