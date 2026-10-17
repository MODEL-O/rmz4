@ FUN_080be610  entry 0x080be610  size 48
.thumb
.org 0xbe610
FUN_080be610:
	push {r4, lr}	@ 000be610 10b5
.org 0xbe612
	adds r4, r0, #0	@ 000be612 041c
.org 0xbe614
	ldr r1, [pc, #40]	@ 000be614 0a49
.org 0xbe616
	ldrb r0, [r4, #13]	@ 000be616 607b
.org 0xbe618
	lsls r0, r0, #2	@ 000be618 8000
.org 0xbe61a
	adds r0, r0, r1	@ 000be61a 4018
.org 0xbe61c
	ldr r1, [r0, #0]	@ 000be61c 0168
.org 0xbe61e
	adds r0, r4, #0	@ 000be61e 201c
.org 0xbe620
	bl 0x128f80	@ 000be620 6af0aefc
.org 0xbe624
	lsls r0, r0, #24	@ 000be624 0006
.org 0xbe626
	cmp r0, #0	@ 000be626 0028
.org 0xbe628
	bne.n 0xbe63a	@ 000be628 07d1
.org 0xbe62a
	ldr r0, [pc, #24]	@ 000be62a 0648
.org 0xbe62c
	ldrb r1, [r4, #13]	@ 000be62c 617b
.org 0xbe62e
	lsls r1, r1, #2	@ 000be62e 8900
.org 0xbe630
	adds r1, r1, r0	@ 000be630 0918
.org 0xbe632
	ldr r1, [r1, #0]	@ 000be632 0968
.org 0xbe634
	adds r0, r4, #0	@ 000be634 201c
.org 0xbe636
	bl 0x128f80	@ 000be636 6af0a3fc
.org 0xbe63a
	pop {r4}	@ 000be63a 10bc
.org 0xbe63c
	pop {r0}	@ 000be63c 01bc
.org 0xbe63e
	bx r0	@ 000be63e 0047
