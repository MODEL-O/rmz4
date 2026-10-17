@ FUN_080c33a8  entry 0x080c33a8  size 20
.thumb
.org 0xc33a8
FUN_080c33a8:
	push {lr}	@ 000c33a8 00b5
.org 0xc33aa
	ldr r2, [pc, #16]	@ 000c33aa 044a
.org 0xc33ac
	ldrb r1, [r0, #16]	@ 000c33ac 017c
.org 0xc33ae
	lsls r1, r1, #2	@ 000c33ae 8900
.org 0xc33b0
	adds r1, r1, r2	@ 000c33b0 8918
.org 0xc33b2
	ldr r1, [r1, #0]	@ 000c33b2 0968
.org 0xc33b4
	bl 0x128f80	@ 000c33b4 65f0e4fd
.org 0xc33b8
	pop {r0}	@ 000c33b8 01bc
.org 0xc33ba
	bx r0	@ 000c33ba 0047
