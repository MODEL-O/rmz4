@ FUN_080145f8  entry 0x080145f8  size 44
.thumb
.org 0x145f8
FUN_080145f8:
	push {lr}	@ 000145f8 00b5
.org 0x145fa
	adds r3, r0, #0	@ 000145fa 031c
.org 0x145fc
	ldrb r0, [r3, #14]	@ 000145fc 987b
.org 0x145fe
	cmp r0, #0	@ 000145fe 0028
.org 0x14600
	bne.n 0x14620	@ 00014600 0ed1
.org 0x14602
	ldr r0, [r3, #92]	@ 00014602 d86d
.org 0x14604
	lsls r0, r0, #16	@ 00014604 0004
.org 0x14606
	lsrs r0, r0, #20	@ 00014606 000d
.org 0x14608
	lsls r0, r0, #1	@ 00014608 4000
.org 0x1460a
	ldr r1, [pc, #24]	@ 0001460a 0649
.org 0x1460c
	adds r0, r0, r1	@ 0001460c 4018
.org 0x1460e
	ldrh r2, [r0, #0]	@ 0001460e 0288
.org 0x14610
	ldr r1, [pc, #20]	@ 00014610 0549
.org 0x14612
	ands r1, r2	@ 00014612 1140
.org 0x14614
	movs r2, #3	@ 00014614 0322
.org 0x14616
	orrs r1, r2	@ 00014616 1143
.org 0x14618
	strh r1, [r0, #0]	@ 00014618 0180
.org 0x1461a
	ldrb r0, [r3, #14]	@ 0001461a 987b
.org 0x1461c
	adds r0, #1	@ 0001461c 0130
.org 0x1461e
	strb r0, [r3, #14]	@ 0001461e 9873
.org 0x14620
	pop {r0}	@ 00014620 01bc
.org 0x14622
	bx r0	@ 00014622 0047
