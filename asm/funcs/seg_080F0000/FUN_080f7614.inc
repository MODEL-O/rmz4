@ FUN_080f7614  entry 0x080f7614  size 20
.thumb
.org 0xf7614
FUN_080f7614:
	push {lr}	@ 000f7614 00b5
.org 0xf7616
	ldr r2, [pc, #16]	@ 000f7616 044a
.org 0xf7618
	ldrb r1, [r0, #16]	@ 000f7618 017c
.org 0xf761a
	lsls r1, r1, #2	@ 000f761a 8900
.org 0xf761c
	adds r1, r1, r2	@ 000f761c 8918
.org 0xf761e
	ldr r1, [r1, #0]	@ 000f761e 0968
.org 0xf7620
	bl 0x128f80	@ 000f7620 31f0aefc
.org 0xf7624
	pop {r0}	@ 000f7624 01bc
.org 0xf7626
	bx r0	@ 000f7626 0047
