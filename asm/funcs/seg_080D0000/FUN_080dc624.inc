@ FUN_080dc624  entry 0x080dc624  size 62
.thumb
.org 0xdc624
FUN_080dc624:
	push {r4, lr}	@ 000dc624 10b5
.org 0xdc626
	adds r4, r0, #0	@ 000dc626 041c
.org 0xdc628
	ldr r1, [pc, #56]	@ 000dc628 0e49
.org 0xdc62a
	ldrb r0, [r4, #9]	@ 000dc62a 607a
.org 0xdc62c
	lsls r0, r0, #2	@ 000dc62c 8000
.org 0xdc62e
	adds r0, r0, r1	@ 000dc62e 4018
.org 0xdc630
	movs r1, #1	@ 000dc630 0121
.org 0xdc632
	str r1, [r4, #12]	@ 000dc632 e160
.org 0xdc634
	ldr r0, [r0, #0]	@ 000dc634 0068
.org 0xdc636
	ldr r0, [r0, #4]	@ 000dc636 4068
.org 0xdc638
	str r0, [r4, #20]	@ 000dc638 6061
.org 0xdc63a
	ldr r1, [pc, #44]	@ 000dc63a 0b49
.org 0xdc63c
	ldrb r0, [r4, #16]	@ 000dc63c 207c
.org 0xdc63e
	adds r0, r0, r1	@ 000dc63e 4018
.org 0xdc640
	ldrb r0, [r0, #0]	@ 000dc640 0078
.org 0xdc642
	strb r0, [r4, #13]	@ 000dc642 6073
.org 0xdc644
	ldrb r0, [r4, #10]	@ 000dc644 a07a
.org 0xdc646
	movs r1, #2	@ 000dc646 0221
.org 0xdc648
	orrs r0, r1	@ 000dc648 0843
.org 0xdc64a
	movs r1, #1	@ 000dc64a 0121
.org 0xdc64c
	orrs r0, r1	@ 000dc64c 0843
.org 0xdc64e
	strb r0, [r4, #10]	@ 000dc64e a072
.org 0xdc650
	adds r0, r4, #0	@ 000dc650 201c
.org 0xdc652
	bl 0x1cc9c	@ 000dc652 40f723fb
.org 0xdc656
	adds r0, r4, #0	@ 000dc656 201c
.org 0xdc658
	bl 0xdc66c	@ 000dc658 00f008f8
.org 0xdc65c
	pop {r4}	@ 000dc65c 10bc
.org 0xdc65e
	pop {r0}	@ 000dc65e 01bc
.org 0xdc660
	bx r0	@ 000dc660 0047
