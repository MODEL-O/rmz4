@ FUN_080ad5f4  entry 0x080ad5f4  size 120
.thumb
.org 0xad5f4
FUN_080ad5f4:
	push {r4, r5, r6, lr}	@ 000ad5f4 70b5
.org 0xad5f6
	adds r4, r0, #0	@ 000ad5f6 041c
.org 0xad5f8
	ldr r1, [pc, #112]	@ 000ad5f8 1c49
.org 0xad5fa
	ldrb r0, [r4, #9]	@ 000ad5fa 607a
.org 0xad5fc
	lsls r0, r0, #2	@ 000ad5fc 8000
.org 0xad5fe
	adds r0, r0, r1	@ 000ad5fe 4018
.org 0xad600
	movs r1, #1	@ 000ad600 0121
.org 0xad602
	str r1, [r4, #12]	@ 000ad602 e160
.org 0xad604
	ldr r0, [r0, #0]	@ 000ad604 0068
.org 0xad606
	ldr r0, [r0, #4]	@ 000ad606 4068
.org 0xad608
	str r0, [r4, #20]	@ 000ad608 6061
.org 0xad60a
	ldrb r1, [r4, #10]	@ 000ad60a a17a
.org 0xad60c
	movs r0, #1	@ 000ad60c 0120
.org 0xad60e
	orrs r0, r1	@ 000ad60e 0843
.org 0xad610
	movs r1, #2	@ 000ad610 0221
.org 0xad612
	orrs r0, r1	@ 000ad612 0843
.org 0xad614
	strb r0, [r4, #10]	@ 000ad614 a072
.org 0xad616
	adds r0, r4, #0	@ 000ad616 201c
.org 0xad618
	bl 0x1cc9c	@ 000ad618 6ff740fb
.org 0xad61c
	movs r6, #0	@ 000ad61c 0026
.org 0xad61e
	ldrb r1, [r4, #10]	@ 000ad61e a17a
.org 0xad620
	movs r0, #239	@ 000ad620 ef20
.org 0xad622
	ands r0, r1	@ 000ad622 0840
.org 0xad624
	strb r0, [r4, #10]	@ 000ad624 a072
.org 0xad626
	adds r0, r4, #0	@ 000ad626 201c
.org 0xad628
	adds r0, #76	@ 000ad628 4c30
.org 0xad62a
	strb r6, [r0, #0]	@ 000ad62a 0670
.org 0xad62c
	adds r2, r4, #0	@ 000ad62c 221c
.org 0xad62e
	adds r2, #74	@ 000ad62e 4a32
.org 0xad630
	ldrb r1, [r2, #0]	@ 000ad630 1178
.org 0xad632
	movs r0, #17	@ 000ad632 1120
.org 0xad634
	negs r0, r0	@ 000ad634 4042
.org 0xad636
	ands r0, r1	@ 000ad636 0840
.org 0xad638
	strb r0, [r2, #0]	@ 000ad638 1070
.org 0xad63a
	ldr r1, [pc, #52]	@ 000ad63a 0d49
.org 0xad63c
	adds r0, r4, #0	@ 000ad63c 201c
.org 0xad63e
	bl 0x1cf00	@ 000ad63e 6ff75ffc
.org 0xad642
	ldrb r1, [r4, #10]	@ 000ad642 a17a
.org 0xad644
	movs r0, #4	@ 000ad644 0420
.org 0xad646
	orrs r0, r1	@ 000ad646 0843
.org 0xad648
	strb r0, [r4, #10]	@ 000ad648 a072
.org 0xad64a
	adds r5, r4, #0	@ 000ad64a 251c
.org 0xad64c
	adds r5, #116	@ 000ad64c 7435
.org 0xad64e
	ldr r1, [pc, #36]	@ 000ad64e 0949
.org 0xad650
	adds r2, r4, #0	@ 000ad650 221c
.org 0xad652
	adds r2, #84	@ 000ad652 5432
.org 0xad654
	adds r0, r5, #0	@ 000ad654 281c
.org 0xad656
	movs r3, #64	@ 000ad656 4023
.org 0xad658
	bl 0x5760	@ 000ad658 58f782f8
.org 0xad65c
	str r4, [r5, #44]	@ 000ad65c ec62
.org 0xad65e
	str r6, [r5, #36]	@ 000ad65e 6e62
.org 0xad660
	adds r0, r4, #0	@ 000ad660 201c
.org 0xad662
	bl 0xad678	@ 000ad662 00f009f8
.org 0xad666
	pop {r4, r5, r6}	@ 000ad666 70bc
.org 0xad668
	pop {r0}	@ 000ad668 01bc
.org 0xad66a
	bx r0	@ 000ad66a 0047
