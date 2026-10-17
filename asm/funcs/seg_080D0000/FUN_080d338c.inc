@ FUN_080d338c  entry 0x080d338c  size 60
.thumb
.org 0xd338c
FUN_080d338c:
	push {r4, r5, r6, lr}	@ 000d338c 70b5
.org 0xd338e
	adds r4, r0, #0	@ 000d338e 041c
.org 0xd3390
	adds r0, #34	@ 000d3390 2230
.org 0xd3392
	movs r5, #1	@ 000d3392 0125
.org 0xd3394
	movs r6, #1	@ 000d3394 0126
.org 0xd3396
	strb r6, [r0, #0]	@ 000d3396 0670
.org 0xd3398
	adds r0, r4, #0	@ 000d3398 201c
.org 0xd339a
	bl 0x1cc9c	@ 000d339a 49f77ffc
.org 0xd339e
	ldr r1, [pc, #40]	@ 000d339e 0a49
.org 0xd33a0
	adds r0, r4, #0	@ 000d33a0 201c
.org 0xd33a2
	bl 0x1cf00	@ 000d33a2 49f7adfd
.org 0xd33a6
	ldrb r0, [r4, #10]	@ 000d33a6 a07a
.org 0xd33a8
	orrs r5, r0	@ 000d33a8 0543
.org 0xd33aa
	strb r5, [r4, #10]	@ 000d33aa a572
.org 0xd33ac
	ldr r1, [pc, #28]	@ 000d33ac 0749
.org 0xd33ae
	ldrb r0, [r4, #9]	@ 000d33ae 607a
.org 0xd33b0
	lsls r0, r0, #2	@ 000d33b0 8000
.org 0xd33b2
	adds r0, r0, r1	@ 000d33b2 4018
.org 0xd33b4
	str r6, [r4, #12]	@ 000d33b4 e660
.org 0xd33b6
	ldr r0, [r0, #0]	@ 000d33b6 0068
.org 0xd33b8
	ldr r0, [r0, #4]	@ 000d33b8 4068
.org 0xd33ba
	str r0, [r4, #20]	@ 000d33ba 6061
.org 0xd33bc
	adds r0, r4, #0	@ 000d33bc 201c
.org 0xd33be
	bl 0xd33d0	@ 000d33be 00f007f8
.org 0xd33c2
	pop {r4, r5, r6}	@ 000d33c2 70bc
.org 0xd33c4
	pop {r0}	@ 000d33c4 01bc
.org 0xd33c6
	bx r0	@ 000d33c6 0047
