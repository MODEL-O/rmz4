@ FUN_080937a8  entry 0x080937a8  size 20
.thumb
.org 0x937a8
FUN_080937a8:
	push {lr}	@ 000937a8 00b5
.org 0x937aa
	ldr r2, [pc, #16]	@ 000937aa 044a
.org 0x937ac
	ldrb r1, [r0, #14]	@ 000937ac 817b
.org 0x937ae
	lsls r1, r1, #2	@ 000937ae 8900
.org 0x937b0
	adds r1, r1, r2	@ 000937b0 8918
.org 0x937b2
	ldr r1, [r1, #0]	@ 000937b2 0968
.org 0x937b4
	bl 0x128f80	@ 000937b4 95f0e4fb
.org 0x937b8
	pop {r0}	@ 000937b8 01bc
.org 0x937ba
	bx r0	@ 000937ba 0047
