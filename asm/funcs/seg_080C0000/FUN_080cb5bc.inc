@ FUN_080cb5bc  entry 0x080cb5bc  size 134
.thumb
.org 0xcb5bc
FUN_080cb5bc:
	push {r4, r5, r6, lr}	@ 000cb5bc 70b5
.org 0xcb5be
	mov r6, r8	@ 000cb5be 4646
.org 0xcb5c0
	push {r6}	@ 000cb5c0 40b4
.org 0xcb5c2
	adds r4, r0, #0	@ 000cb5c2 041c
.org 0xcb5c4
	bl 0x1cc9c	@ 000cb5c4 51f76afb
.org 0xcb5c8
	ldrb r1, [r4, #10]	@ 000cb5c8 a17a
.org 0xcb5ca
	movs r0, #1	@ 000cb5ca 0120
.org 0xcb5cc
	orrs r0, r1	@ 000cb5cc 0843
.org 0xcb5ce
	movs r1, #2	@ 000cb5ce 0221
.org 0xcb5d0
	orrs r0, r1	@ 000cb5d0 0843
.org 0xcb5d2
	strb r0, [r4, #10]	@ 000cb5d2 a072
.org 0xcb5d4
	ldr r1, [pc, #108]	@ 000cb5d4 1b49
.org 0xcb5d6
	adds r0, r4, #0	@ 000cb5d6 201c
.org 0xcb5d8
	bl 0x1cf00	@ 000cb5d8 51f792fc
.org 0xcb5dc
	adds r0, r4, #0	@ 000cb5dc 201c
.org 0xcb5de
	bl 0x1cff0	@ 000cb5de 51f707fd
.org 0xcb5e2
	movs r6, #0	@ 000cb5e2 0026
.org 0xcb5e4
	ldrb r1, [r4, #10]	@ 000cb5e4 a17a
.org 0xcb5e6
	movs r0, #239	@ 000cb5e6 ef20
.org 0xcb5e8
	ands r0, r1	@ 000cb5e8 0840
.org 0xcb5ea
	strb r0, [r4, #10]	@ 000cb5ea a072
.org 0xcb5ec
	movs r0, #1	@ 000cb5ec 0120
.org 0xcb5ee
	mov r8, r0	@ 000cb5ee 8046
.org 0xcb5f0
	adds r0, r4, #0	@ 000cb5f0 201c
.org 0xcb5f2
	adds r0, #76	@ 000cb5f2 4c30
.org 0xcb5f4
	strb r6, [r0, #0]	@ 000cb5f4 0670
.org 0xcb5f6
	adds r2, r4, #0	@ 000cb5f6 221c
.org 0xcb5f8
	adds r2, #74	@ 000cb5f8 4a32
.org 0xcb5fa
	ldrb r1, [r2, #0]	@ 000cb5fa 1178
.org 0xcb5fc
	movs r0, #17	@ 000cb5fc 1120
.org 0xcb5fe
	negs r0, r0	@ 000cb5fe 4042
.org 0xcb600
	ands r0, r1	@ 000cb600 0840
.org 0xcb602
	strb r0, [r2, #0]	@ 000cb602 1070
.org 0xcb604
	ldrb r1, [r4, #10]	@ 000cb604 a17a
.org 0xcb606
	movs r0, #4	@ 000cb606 0420
.org 0xcb608
	orrs r0, r1	@ 000cb608 0843
.org 0xcb60a
	strb r0, [r4, #10]	@ 000cb60a a072
.org 0xcb60c
	adds r5, r4, #0	@ 000cb60c 251c
.org 0xcb60e
	adds r5, #116	@ 000cb60e 7435
.org 0xcb610
	ldr r1, [pc, #52]	@ 000cb610 0d49
.org 0xcb612
	adds r2, #10	@ 000cb612 0a32
.org 0xcb614
	adds r0, r5, #0	@ 000cb614 281c
.org 0xcb616
	movs r3, #8	@ 000cb616 0823
.org 0xcb618
	bl 0x5760	@ 000cb618 3af7a2f8
.org 0xcb61c
	str r4, [r5, #44]	@ 000cb61c ec62
.org 0xcb61e
	str r6, [r5, #36]	@ 000cb61e 6e62
.org 0xcb620
	ldr r1, [pc, #40]	@ 000cb620 0a49
.org 0xcb622
	ldrb r0, [r4, #9]	@ 000cb622 607a
.org 0xcb624
	lsls r0, r0, #2	@ 000cb624 8000
.org 0xcb626
	adds r0, r0, r1	@ 000cb626 4018
.org 0xcb628
	mov r1, r8	@ 000cb628 4146
.org 0xcb62a
	str r1, [r4, #12]	@ 000cb62a e160
.org 0xcb62c
	ldr r0, [r0, #0]	@ 000cb62c 0068
.org 0xcb62e
	ldr r0, [r0, #4]	@ 000cb62e 4068
.org 0xcb630
	str r0, [r4, #20]	@ 000cb630 6061
.org 0xcb632
	adds r0, r4, #0	@ 000cb632 201c
.org 0xcb634
	bl 0xcb55c	@ 000cb634 fff792ff
.org 0xcb638
	pop {r3}	@ 000cb638 08bc
.org 0xcb63a
	mov r8, r3	@ 000cb63a 9846
.org 0xcb63c
	pop {r4, r5, r6}	@ 000cb63c 70bc
.org 0xcb63e
	pop {r0}	@ 000cb63e 01bc
.org 0xcb640
	bx r0	@ 000cb640 0047
