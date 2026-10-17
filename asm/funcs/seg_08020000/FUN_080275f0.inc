@ FUN_080275f0  entry 0x080275f0  size 52
.thumb
.org 0x275f0
FUN_080275f0:
	push {r4, r5, lr}	@ 000275f0 30b5
.org 0x275f2
	str r1, [r0, #12]	@ 000275f2 c160
.org 0x275f4
	str r1, [r0, #8]	@ 000275f4 8160
.org 0x275f6
	ldr r2, [pc, #44]	@ 000275f6 0b4a
.org 0x275f8
	ldrb r1, [r2, #18]	@ 000275f8 917c
.org 0x275fa
	movs r0, #1	@ 000275fa 0120
.org 0x275fc
	movs r5, #0	@ 000275fc 0025
.org 0x275fe
	orrs r0, r1	@ 000275fe 0843
.org 0x27600
	strb r0, [r2, #18]	@ 00027600 9074
.org 0x27602
	ldr r0, [pc, #36]	@ 00027602 0948
.org 0x27604
	strh r5, [r0, #0]	@ 00027604 0580
.org 0x27606
	ldr r4, [pc, #36]	@ 00027606 094c
.org 0x27608
	ldrh r0, [r4, #0]	@ 00027608 2088
.org 0x2760a
	cmp r0, #0	@ 0002760a 0028
.org 0x2760c
	beq.n 0x2761e	@ 0002760c 07d0
.org 0x2760e
	ldr r2, [pc, #32]	@ 0002760e 084a
.org 0x27610
	ldrb r1, [r2, #8]	@ 00027610 117a
.org 0x27612
	movs r0, #127	@ 00027612 7f20
.org 0x27614
	ands r0, r1	@ 00027614 0840
.org 0x27616
	strb r0, [r2, #8]	@ 00027616 1072
.org 0x27618
	bl 0x2a50	@ 00027618 dbf71afa
.org 0x2761c
	strh r5, [r4, #0]	@ 0002761c 2580
.org 0x2761e
	pop {r4, r5}	@ 0002761e 30bc
.org 0x27620
	pop {r0}	@ 00027620 01bc
.org 0x27622
	bx r0	@ 00027622 0047
