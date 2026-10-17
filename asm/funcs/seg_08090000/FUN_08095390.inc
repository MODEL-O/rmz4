@ FUN_08095390  entry 0x08095390  size 20
.thumb
.org 0x95390
FUN_08095390:
	push {lr}	@ 00095390 00b5
.org 0x95392
	ldr r2, [pc, #16]	@ 00095392 044a
.org 0x95394
	ldrb r1, [r0, #16]	@ 00095394 017c
.org 0x95396
	lsls r1, r1, #2	@ 00095396 8900
.org 0x95398
	adds r1, r1, r2	@ 00095398 8918
.org 0x9539a
	ldr r1, [r1, #0]	@ 0009539a 0968
.org 0x9539c
	bl 0x128f80	@ 0009539c 93f0f0fd
.org 0x953a0
	pop {r0}	@ 000953a0 01bc
.org 0x953a2
	bx r0	@ 000953a2 0047
