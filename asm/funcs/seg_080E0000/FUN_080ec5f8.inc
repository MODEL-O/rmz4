@ FUN_080ec5f8  entry 0x080ec5f8  size 58
.thumb
.org 0xec5f8
FUN_080ec5f8:
	push {lr}	@ 000ec5f8 00b5
.org 0xec5fa
	adds r2, r0, #0	@ 000ec5fa 021c
.org 0xec5fc
	ldr r0, [r2, #40]	@ 000ec5fc 906a
.org 0xec5fe
	ldrb r0, [r0, #12]	@ 000ec5fe 007b
.org 0xec600
	cmp r0, #4	@ 000ec600 0428
.org 0xec602
	bne.n 0xec624	@ 000ec602 0fd1
.org 0xec604
	ldr r1, [pc, #24]	@ 000ec604 0649
.org 0xec606
	ldrb r0, [r2, #9]	@ 000ec606 507a
.org 0xec608
	lsls r0, r0, #2	@ 000ec608 8000
.org 0xec60a
	adds r0, r0, r1	@ 000ec60a 4018
.org 0xec60c
	movs r1, #2	@ 000ec60c 0221
.org 0xec60e
	str r1, [r2, #12]	@ 000ec60e d160
.org 0xec610
	ldr r0, [r0, #0]	@ 000ec610 0068
.org 0xec612
	ldr r0, [r0, #8]	@ 000ec612 8068
.org 0xec614
	str r0, [r2, #20]	@ 000ec614 5061
.org 0xec616
	adds r0, r2, #0	@ 000ec616 101c
.org 0xec618
	bl 0xec920	@ 000ec618 00f082f9
.org 0xec61c
	b.n 0xec634	@ 000ec61c 0ae0
.org 0xec61e
	.byte 0x00	@ 000ec61e data
.org 0xec61f
	.byte 0x00	@ 000ec61f data
.org 0xec620
	.byte 0xfc,0x92,0x86,0x08	@ 000ec620 data
.org 0xec624
	ldr r0, [pc, #16]	@ 000ec624 0448
.org 0xec626
	ldrb r1, [r2, #13]	@ 000ec626 517b
.org 0xec628
	lsls r1, r1, #2	@ 000ec628 8900
.org 0xec62a
	adds r1, r1, r0	@ 000ec62a 0918
.org 0xec62c
	ldr r1, [r1, #0]	@ 000ec62c 0968
.org 0xec62e
	adds r0, r2, #0	@ 000ec62e 101c
.org 0xec630
	bl 0x128f80	@ 000ec630 3cf0a6fc
