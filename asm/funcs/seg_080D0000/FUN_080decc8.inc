@ FUN_080decc8  entry 0x080decc8  size 20
.thumb
.org 0xdecc8
FUN_080decc8:
	push {lr}	@ 000decc8 00b5
.org 0xdecca
	ldr r2, [pc, #16]	@ 000decca 044a
.org 0xdeccc
	ldrb r1, [r0, #16]	@ 000deccc 017c
.org 0xdecce
	lsls r1, r1, #2	@ 000decce 8900
.org 0xdecd0
	adds r1, r1, r2	@ 000decd0 8918
.org 0xdecd2
	ldr r1, [r1, #0]	@ 000decd2 0968
.org 0xdecd4
	bl 0x128f80	@ 000decd4 4af054f9
.org 0xdecd8
	pop {r0}	@ 000decd8 01bc
.org 0xdecda
	bx r0	@ 000decda 0047
