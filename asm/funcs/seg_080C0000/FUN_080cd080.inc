@ FUN_080cd080  entry 0x080cd080  size 64
.thumb
.org 0xcd080
FUN_080cd080:
	push {r4, lr}	@ 000cd080 10b5
.org 0xcd082
	adds r4, r0, #0	@ 000cd082 041c
.org 0xcd084
	ldr r0, [r4, #84]	@ 000cd084 606d
.org 0xcd086
	ldr r1, [r4, #92]	@ 000cd086 e16d
.org 0xcd088
	adds r0, r0, r1	@ 000cd088 4018
.org 0xcd08a
	str r0, [r4, #84]	@ 000cd08a 6065
.org 0xcd08c
	ldr r1, [r4, #88]	@ 000cd08c a16d
.org 0xcd08e
	ldr r2, [r4, #96]	@ 000cd08e 226e
.org 0xcd090
	adds r1, r1, r2	@ 000cd090 8918
.org 0xcd092
	str r1, [r4, #88]	@ 000cd092 a165
.org 0xcd094
	adds r2, #64	@ 000cd094 4032
.org 0xcd096
	str r2, [r4, #96]	@ 000cd096 2266
.org 0xcd098
	bl 0x7c7c	@ 000cd098 3af7f0fd
.org 0xcd09c
	lsls r0, r0, #16	@ 000cd09c 0004
.org 0xcd09e
	cmp r0, #0	@ 000cd09e 0028
.org 0xcd0a0
	beq.n 0xcd0b4	@ 000cd0a0 08d0
.org 0xcd0a2
	ldr r1, [pc, #28]	@ 000cd0a2 0749
.org 0xcd0a4
	ldrb r0, [r4, #9]	@ 000cd0a4 607a
.org 0xcd0a6
	lsls r0, r0, #2	@ 000cd0a6 8000
.org 0xcd0a8
	adds r0, r0, r1	@ 000cd0a8 4018
.org 0xcd0aa
	movs r1, #2	@ 000cd0aa 0221
.org 0xcd0ac
	str r1, [r4, #12]	@ 000cd0ac e160
.org 0xcd0ae
	ldr r0, [r0, #0]	@ 000cd0ae 0068
.org 0xcd0b0
	ldr r0, [r0, #8]	@ 000cd0b0 8068
.org 0xcd0b2
	str r0, [r4, #20]	@ 000cd0b2 6061
.org 0xcd0b4
	adds r0, r4, #0	@ 000cd0b4 201c
.org 0xcd0b6
	bl 0x1cff0	@ 000cd0b6 4ff79bff
.org 0xcd0ba
	pop {r4}	@ 000cd0ba 10bc
.org 0xcd0bc
	pop {r0}	@ 000cd0bc 01bc
.org 0xcd0be
	bx r0	@ 000cd0be 0047
