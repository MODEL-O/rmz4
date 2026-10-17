@ FUN_0802b608  entry 0x0802b608  size 20
.thumb
.org 0x2b608
FUN_0802b608:
	push {lr}	@ 0002b608 00b5
.org 0x2b60a
	adds r0, #241	@ 0002b60a f130
.org 0x2b60c
	ldrb r0, [r0, #0]	@ 0002b60c 0078
.org 0x2b60e
	cmp r0, #6	@ 0002b60e 0628
.org 0x2b610
	bhi.n 0x2b616	@ 0002b610 01d8
.org 0x2b612
	movs r0, #0	@ 0002b612 0020
.org 0x2b614
	b.n 0x2b618	@ 0002b614 00e0
.org 0x2b616
	movs r0, #1	@ 0002b616 0120
.org 0x2b618
	pop {r1}	@ 0002b618 02bc
.org 0x2b61a
	bx r1	@ 0002b61a 0847
