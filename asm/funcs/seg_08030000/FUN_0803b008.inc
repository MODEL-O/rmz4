@ FUN_0803b008  entry 0x0803b008  size 28
.thumb
.org 0x3b008
FUN_0803b008:
	push {lr}	@ 0003b008 00b5
.org 0x3b00a
	adds r2, r0, #0	@ 0003b00a 021c
.org 0x3b00c
	ldrb r0, [r2, #16]	@ 0003b00c 107c
.org 0x3b00e
	cmp r0, #1	@ 0003b00e 0128
.org 0x3b010
	beq.n 0x3b01e	@ 0003b010 05d0
.org 0x3b012
	ldr r0, [r2, #84]	@ 0003b012 506d
.org 0x3b014
	str r0, [r1, #0]	@ 0003b014 0860
.org 0x3b016
	ldr r0, [r2, #88]	@ 0003b016 906d
.org 0x3b018
	str r0, [r1, #4]	@ 0003b018 4860
.org 0x3b01a
	movs r0, #1	@ 0003b01a 0120
.org 0x3b01c
	b.n 0x3b020	@ 0003b01c 00e0
.org 0x3b01e
	movs r0, #0	@ 0003b01e 0020
.org 0x3b020
	pop {r1}	@ 0003b020 02bc
.org 0x3b022
	bx r1	@ 0003b022 0847
