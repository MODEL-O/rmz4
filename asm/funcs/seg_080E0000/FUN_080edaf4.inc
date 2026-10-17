@ FUN_080edaf4  entry 0x080edaf4  size 52
.thumb
.org 0xedaf4
FUN_080edaf4:
	push {r4, lr}	@ 000edaf4 10b5
.org 0xedaf6
	adds r4, r0, #0	@ 000edaf6 041c
.org 0xedaf8
	ldrb r1, [r4, #10]	@ 000edaf8 a17a
.org 0xedafa
	movs r0, #1	@ 000edafa 0120
.org 0xedafc
	orrs r0, r1	@ 000edafc 0843
.org 0xedafe
	movs r1, #2	@ 000edafe 0221
.org 0xedb00
	orrs r0, r1	@ 000edb00 0843
.org 0xedb02
	strb r0, [r4, #10]	@ 000edb02 a072
.org 0xedb04
	adds r0, r4, #0	@ 000edb04 201c
.org 0xedb06
	bl 0x1cc9c	@ 000edb06 2ff7c9f8
.org 0xedb0a
	ldr r1, [pc, #28]	@ 000edb0a 0749
.org 0xedb0c
	ldrb r0, [r4, #9]	@ 000edb0c 607a
.org 0xedb0e
	lsls r0, r0, #2	@ 000edb0e 8000
.org 0xedb10
	adds r0, r0, r1	@ 000edb10 4018
.org 0xedb12
	movs r1, #1	@ 000edb12 0121
.org 0xedb14
	str r1, [r4, #12]	@ 000edb14 e160
.org 0xedb16
	ldr r0, [r0, #0]	@ 000edb16 0068
.org 0xedb18
	ldr r0, [r0, #4]	@ 000edb18 4068
.org 0xedb1a
	str r0, [r4, #20]	@ 000edb1a 6061
.org 0xedb1c
	adds r0, r4, #0	@ 000edb1c 201c
.org 0xedb1e
	bl 0xed7c8	@ 000edb1e fff753fe
.org 0xedb22
	pop {r4}	@ 000edb22 10bc
.org 0xedb24
	pop {r0}	@ 000edb24 01bc
.org 0xedb26
	bx r0	@ 000edb26 0047
