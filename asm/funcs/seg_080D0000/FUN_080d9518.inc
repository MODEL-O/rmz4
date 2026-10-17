@ FUN_080d9518  entry 0x080d9518  size 20
.thumb
.org 0xd9518
FUN_080d9518:
	push {lr}	@ 000d9518 00b5
.org 0xd951a
	ldr r2, [pc, #16]	@ 000d951a 044a
.org 0xd951c
	ldrb r1, [r0, #16]	@ 000d951c 017c
.org 0xd951e
	lsls r1, r1, #2	@ 000d951e 8900
.org 0xd9520
	adds r1, r1, r2	@ 000d9520 8918
.org 0xd9522
	ldr r1, [r1, #0]	@ 000d9522 0968
.org 0xd9524
	bl 0x128f80	@ 000d9524 4ff02cfd
.org 0xd9528
	pop {r0}	@ 000d9528 01bc
.org 0xd952a
	bx r0	@ 000d952a 0047
