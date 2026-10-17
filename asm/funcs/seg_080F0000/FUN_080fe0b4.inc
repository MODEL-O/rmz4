@ FUN_080fe0b4  entry 0x080fe0b4  size 38
.thumb
.org 0xfe0b4
FUN_080fe0b4:
	push {lr}	@ 000fe0b4 00b5
.org 0xfe0b6
	ldrb r2, [r0, #17]	@ 000fe0b6 427c
.org 0xfe0b8
	movs r1, #3	@ 000fe0b8 0321
.org 0xfe0ba
	ands r1, r2	@ 000fe0ba 1140
.org 0xfe0bc
	adds r1, #6	@ 000fe0bc 0631
.org 0xfe0be
	strb r1, [r0, #18]	@ 000fe0be 8174
.org 0xfe0c0
	ldr r2, [pc, #24]	@ 000fe0c0 064a
.org 0xfe0c2
	ldrb r1, [r0, #9]	@ 000fe0c2 417a
.org 0xfe0c4
	lsls r1, r1, #2	@ 000fe0c4 8900
.org 0xfe0c6
	adds r1, r1, r2	@ 000fe0c6 8918
.org 0xfe0c8
	movs r2, #1	@ 000fe0c8 0122
.org 0xfe0ca
	str r2, [r0, #12]	@ 000fe0ca c260
.org 0xfe0cc
	ldr r1, [r1, #0]	@ 000fe0cc 0968
.org 0xfe0ce
	ldr r1, [r1, #4]	@ 000fe0ce 4968
.org 0xfe0d0
	str r1, [r0, #20]	@ 000fe0d0 4161
.org 0xfe0d2
	bl 0xfe040	@ 000fe0d2 fff7b5ff
.org 0xfe0d6
	pop {r0}	@ 000fe0d6 01bc
.org 0xfe0d8
	bx r0	@ 000fe0d8 0047
