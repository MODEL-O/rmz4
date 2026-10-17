@ FUN_08044600  entry 0x08044600  size 48
.thumb
.org 0x44600
FUN_08044600:
	adds r2, r0, #0	@ 00044600 021c
.org 0x44602
	adds r0, #140	@ 00044602 8c30
.org 0x44604
	movs r1, #0	@ 00044604 0021
.org 0x44606
	str r1, [r0, #0]	@ 00044606 0160
.org 0x44608
	adds r0, #4	@ 00044608 0430
.org 0x4460a
	str r1, [r0, #0]	@ 0004460a 0160
.org 0x4460c
	adds r0, #4	@ 0004460c 0430
.org 0x4460e
	strb r1, [r0, #0]	@ 0004460e 0170
.org 0x44610
	ldrb r1, [r2, #10]	@ 00044610 917a
.org 0x44612
	movs r0, #251	@ 00044612 fb20
.org 0x44614
	ands r0, r1	@ 00044614 0840
.org 0x44616
	movs r1, #254	@ 00044616 fe21
.org 0x44618
	ands r0, r1	@ 00044618 0840
.org 0x4461a
	strb r0, [r2, #10]	@ 0004461a 9072
.org 0x4461c
	ldr r1, [pc, #16]	@ 0004461c 0449
.org 0x4461e
	ldrb r0, [r2, #9]	@ 0004461e 507a
.org 0x44620
	lsls r0, r0, #2	@ 00044620 8000
.org 0x44622
	adds r0, r0, r1	@ 00044622 4018
.org 0x44624
	movs r1, #4	@ 00044624 0421
.org 0x44626
	str r1, [r2, #12]	@ 00044626 d160
.org 0x44628
	ldr r0, [r0, #0]	@ 00044628 0068
.org 0x4462a
	ldr r0, [r0, #16]	@ 0004462a 0069
.org 0x4462c
	str r0, [r2, #20]	@ 0004462c 5061
.org 0x4462e
	bx lr	@ 0004462e 7047
