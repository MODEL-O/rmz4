@ FUN_080583c4  entry 0x080583c4  size 20
.thumb
.org 0x583c4
FUN_080583c4:
	push {lr}	@ 000583c4 00b5
.org 0x583c6
	ldr r2, [pc, #16]	@ 000583c6 044a
.org 0x583c8
	ldrb r1, [r0, #14]	@ 000583c8 817b
.org 0x583ca
	lsls r1, r1, #2	@ 000583ca 8900
.org 0x583cc
	adds r1, r1, r2	@ 000583cc 8918
.org 0x583ce
	ldr r1, [r1, #0]	@ 000583ce 0968
.org 0x583d0
	bl 0x128f80	@ 000583d0 d0f0d6fd
.org 0x583d4
	pop {r0}	@ 000583d4 01bc
.org 0x583d6
	bx r0	@ 000583d6 0047
