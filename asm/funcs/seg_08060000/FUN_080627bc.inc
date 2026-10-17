@ FUN_080627bc  entry 0x080627bc  size 20
.thumb
.org 0x627bc
FUN_080627bc:
	push {lr}	@ 000627bc 00b5
.org 0x627be
	ldr r2, [pc, #16]	@ 000627be 044a
.org 0x627c0
	ldrb r1, [r0, #14]	@ 000627c0 817b
.org 0x627c2
	lsls r1, r1, #2	@ 000627c2 8900
.org 0x627c4
	adds r1, r1, r2	@ 000627c4 8918
.org 0x627c6
	ldr r1, [r1, #0]	@ 000627c6 0968
.org 0x627c8
	bl 0x128f80	@ 000627c8 c6f0dafb
.org 0x627cc
	pop {r0}	@ 000627cc 01bc
.org 0x627ce
	bx r0	@ 000627ce 0047
