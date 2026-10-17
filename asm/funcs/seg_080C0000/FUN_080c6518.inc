@ FUN_080c6518  entry 0x080c6518  size 20
.thumb
.org 0xc6518
FUN_080c6518:
	push {lr}	@ 000c6518 00b5
.org 0xc651a
	ldr r2, [pc, #16]	@ 000c651a 044a
.org 0xc651c
	ldrb r1, [r0, #16]	@ 000c651c 017c
.org 0xc651e
	lsls r1, r1, #2	@ 000c651e 8900
.org 0xc6520
	adds r1, r1, r2	@ 000c6520 8918
.org 0xc6522
	ldr r1, [r1, #0]	@ 000c6522 0968
.org 0xc6524
	bl 0x128f80	@ 000c6524 62f02cfd
.org 0xc6528
	pop {r0}	@ 000c6528 01bc
.org 0xc652a
	bx r0	@ 000c652a 0047
