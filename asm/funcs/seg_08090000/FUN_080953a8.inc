@ FUN_080953a8  entry 0x080953a8  size 20
.thumb
.org 0x953a8
FUN_080953a8:
	push {lr}	@ 000953a8 00b5
.org 0x953aa
	ldr r2, [pc, #16]	@ 000953aa 044a
.org 0x953ac
	ldrb r1, [r0, #13]	@ 000953ac 417b
.org 0x953ae
	lsls r1, r1, #2	@ 000953ae 8900
.org 0x953b0
	adds r1, r1, r2	@ 000953b0 8918
.org 0x953b2
	ldr r1, [r1, #0]	@ 000953b2 0968
.org 0x953b4
	bl 0x128f80	@ 000953b4 93f0e4fd
.org 0x953b8
	pop {r0}	@ 000953b8 01bc
.org 0x953ba
	bx r0	@ 000953ba 0047
