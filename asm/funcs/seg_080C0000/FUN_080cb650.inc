@ FUN_080cb650  entry 0x080cb650  size 134
.thumb
.org 0xcb650
FUN_080cb650:
	push {r4, r5, r6, lr}	@ 000cb650 70b5
.org 0xcb652
	mov r6, r8	@ 000cb652 4646
.org 0xcb654
	push {r6}	@ 000cb654 40b4
.org 0xcb656
	adds r4, r0, #0	@ 000cb656 041c
.org 0xcb658
	bl 0x1cc9c	@ 000cb658 51f720fb
.org 0xcb65c
	ldrb r1, [r4, #10]	@ 000cb65c a17a
.org 0xcb65e
	movs r0, #1	@ 000cb65e 0120
.org 0xcb660
	orrs r0, r1	@ 000cb660 0843
.org 0xcb662
	movs r1, #2	@ 000cb662 0221
.org 0xcb664
	orrs r0, r1	@ 000cb664 0843
.org 0xcb666
	strb r0, [r4, #10]	@ 000cb666 a072
.org 0xcb668
	ldr r1, [pc, #108]	@ 000cb668 1b49
.org 0xcb66a
	adds r0, r4, #0	@ 000cb66a 201c
.org 0xcb66c
	bl 0x1cf00	@ 000cb66c 51f748fc
.org 0xcb670
	adds r0, r4, #0	@ 000cb670 201c
.org 0xcb672
	bl 0x1cff0	@ 000cb672 51f7bdfc
.org 0xcb676
	movs r6, #0	@ 000cb676 0026
.org 0xcb678
	ldrb r1, [r4, #10]	@ 000cb678 a17a
.org 0xcb67a
	movs r0, #239	@ 000cb67a ef20
.org 0xcb67c
	ands r0, r1	@ 000cb67c 0840
.org 0xcb67e
	strb r0, [r4, #10]	@ 000cb67e a072
.org 0xcb680
	movs r0, #1	@ 000cb680 0120
.org 0xcb682
	mov r8, r0	@ 000cb682 8046
.org 0xcb684
	adds r0, r4, #0	@ 000cb684 201c
.org 0xcb686
	adds r0, #76	@ 000cb686 4c30
.org 0xcb688
	strb r6, [r0, #0]	@ 000cb688 0670
.org 0xcb68a
	adds r2, r4, #0	@ 000cb68a 221c
.org 0xcb68c
	adds r2, #74	@ 000cb68c 4a32
.org 0xcb68e
	ldrb r1, [r2, #0]	@ 000cb68e 1178
.org 0xcb690
	movs r0, #17	@ 000cb690 1120
.org 0xcb692
	negs r0, r0	@ 000cb692 4042
.org 0xcb694
	ands r0, r1	@ 000cb694 0840
.org 0xcb696
	strb r0, [r2, #0]	@ 000cb696 1070
.org 0xcb698
	ldrb r1, [r4, #10]	@ 000cb698 a17a
.org 0xcb69a
	movs r0, #4	@ 000cb69a 0420
.org 0xcb69c
	orrs r0, r1	@ 000cb69c 0843
.org 0xcb69e
	strb r0, [r4, #10]	@ 000cb69e a072
.org 0xcb6a0
	adds r5, r4, #0	@ 000cb6a0 251c
.org 0xcb6a2
	adds r5, #116	@ 000cb6a2 7435
.org 0xcb6a4
	ldr r1, [pc, #52]	@ 000cb6a4 0d49
.org 0xcb6a6
	adds r2, #10	@ 000cb6a6 0a32
.org 0xcb6a8
	adds r0, r5, #0	@ 000cb6a8 281c
.org 0xcb6aa
	movs r3, #8	@ 000cb6aa 0823
.org 0xcb6ac
	bl 0x5760	@ 000cb6ac 3af758f8
.org 0xcb6b0
	str r4, [r5, #44]	@ 000cb6b0 ec62
.org 0xcb6b2
	str r6, [r5, #36]	@ 000cb6b2 6e62
.org 0xcb6b4
	ldr r1, [pc, #40]	@ 000cb6b4 0a49
.org 0xcb6b6
	ldrb r0, [r4, #9]	@ 000cb6b6 607a
.org 0xcb6b8
	lsls r0, r0, #2	@ 000cb6b8 8000
.org 0xcb6ba
	adds r0, r0, r1	@ 000cb6ba 4018
.org 0xcb6bc
	mov r1, r8	@ 000cb6bc 4146
.org 0xcb6be
	str r1, [r4, #12]	@ 000cb6be e160
.org 0xcb6c0
	ldr r0, [r0, #0]	@ 000cb6c0 0068
.org 0xcb6c2
	ldr r0, [r0, #4]	@ 000cb6c2 4068
.org 0xcb6c4
	str r0, [r4, #20]	@ 000cb6c4 6061
.org 0xcb6c6
	adds r0, r4, #0	@ 000cb6c6 201c
.org 0xcb6c8
	bl 0xcb55c	@ 000cb6c8 fff748ff
.org 0xcb6cc
	pop {r3}	@ 000cb6cc 08bc
.org 0xcb6ce
	mov r8, r3	@ 000cb6ce 9846
.org 0xcb6d0
	pop {r4, r5, r6}	@ 000cb6d0 70bc
.org 0xcb6d2
	pop {r0}	@ 000cb6d2 01bc
.org 0xcb6d4
	bx r0	@ 000cb6d4 0047
