@ FUN_080dadec  entry 0x080dadec  size 20
.thumb
.org 0xdadec
FUN_080dadec:
	push {lr}	@ 000dadec 00b5
.org 0xdadee
	ldr r2, [pc, #16]	@ 000dadee 044a
.org 0xdadf0
	ldrb r1, [r0, #16]	@ 000dadf0 017c
.org 0xdadf2
	lsls r1, r1, #2	@ 000dadf2 8900
.org 0xdadf4
	adds r1, r1, r2	@ 000dadf4 8918
.org 0xdadf6
	ldr r1, [r1, #0]	@ 000dadf6 0968
.org 0xdadf8
	bl 0x128f80	@ 000dadf8 4ef0c2f8
.org 0xdadfc
	pop {r0}	@ 000dadfc 01bc
.org 0xdadfe
	bx r0	@ 000dadfe 0047
