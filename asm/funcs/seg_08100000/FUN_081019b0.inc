@ FUN_081019b0  entry 0x081019b0  size 28
.thumb
.org 0x1019b0
FUN_081019b0:
	push {lr}	@ 001019b0 00b5
.org 0x1019b2
	ldr r2, [pc, #24]	@ 001019b2 064a
.org 0x1019b4
	ldrb r1, [r0, #9]	@ 001019b4 417a
.org 0x1019b6
	lsls r1, r1, #2	@ 001019b6 8900
.org 0x1019b8
	adds r1, r1, r2	@ 001019b8 8918
.org 0x1019ba
	movs r2, #1	@ 001019ba 0122
.org 0x1019bc
	str r2, [r0, #12]	@ 001019bc c260
.org 0x1019be
	ldr r1, [r1, #0]	@ 001019be 0968
.org 0x1019c0
	ldr r1, [r1, #4]	@ 001019c0 4968
.org 0x1019c2
	str r1, [r0, #20]	@ 001019c2 4161
.org 0x1019c4
	bl 0x101788	@ 001019c4 fff7e0fe
.org 0x1019c8
	pop {r0}	@ 001019c8 01bc
.org 0x1019ca
	bx r0	@ 001019ca 0047
