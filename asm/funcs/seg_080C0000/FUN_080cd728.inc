@ FUN_080cd728  entry 0x080cd728  size 98
.thumb
.org 0xcd728
FUN_080cd728:
	push {r4, lr}	@ 000cd728 10b5
.org 0xcd72a
	adds r4, r0, #0	@ 000cd72a 041c
.org 0xcd72c
	bl 0x1cc9c	@ 000cd72c 4ff7b6fa
.org 0xcd730
	ldrb r1, [r4, #10]	@ 000cd730 a17a
.org 0xcd732
	movs r0, #1	@ 000cd732 0120
.org 0xcd734
	orrs r0, r1	@ 000cd734 0843
.org 0xcd736
	movs r1, #2	@ 000cd736 0221
.org 0xcd738
	orrs r0, r1	@ 000cd738 0843
.org 0xcd73a
	strb r0, [r4, #10]	@ 000cd73a a072
.org 0xcd73c
	ldr r1, [pc, #76]	@ 000cd73c 1349
.org 0xcd73e
	adds r0, r4, #0	@ 000cd73e 201c
.org 0xcd740
	bl 0x1cf00	@ 000cd740 4ff7defb
.org 0xcd744
	adds r0, r4, #0	@ 000cd744 201c
.org 0xcd746
	bl 0x1cff0	@ 000cd746 4ff753fc
.org 0xcd74a
	movs r2, #0	@ 000cd74a 0022
.org 0xcd74c
	ldrb r1, [r4, #10]	@ 000cd74c a17a
.org 0xcd74e
	movs r0, #239	@ 000cd74e ef20
.org 0xcd750
	ands r0, r1	@ 000cd750 0840
.org 0xcd752
	strb r0, [r4, #10]	@ 000cd752 a072
.org 0xcd754
	movs r3, #1	@ 000cd754 0123
.org 0xcd756
	adds r0, r4, #0	@ 000cd756 201c
.org 0xcd758
	adds r0, #76	@ 000cd758 4c30
.org 0xcd75a
	strb r2, [r0, #0]	@ 000cd75a 0270
.org 0xcd75c
	adds r2, r4, #0	@ 000cd75c 221c
.org 0xcd75e
	adds r2, #74	@ 000cd75e 4a32
.org 0xcd760
	ldrb r1, [r2, #0]	@ 000cd760 1178
.org 0xcd762
	movs r0, #17	@ 000cd762 1120
.org 0xcd764
	negs r0, r0	@ 000cd764 4042
.org 0xcd766
	ands r0, r1	@ 000cd766 0840
.org 0xcd768
	strb r0, [r2, #0]	@ 000cd768 1070
.org 0xcd76a
	movs r0, #16	@ 000cd76a 1020
.org 0xcd76c
	strb r0, [r4, #18]	@ 000cd76c a074
.org 0xcd76e
	ldr r1, [pc, #32]	@ 000cd76e 0849
.org 0xcd770
	ldrb r0, [r4, #9]	@ 000cd770 607a
.org 0xcd772
	lsls r0, r0, #2	@ 000cd772 8000
.org 0xcd774
	adds r0, r0, r1	@ 000cd774 4018
.org 0xcd776
	str r3, [r4, #12]	@ 000cd776 e360
.org 0xcd778
	ldr r0, [r0, #0]	@ 000cd778 0068
.org 0xcd77a
	ldr r0, [r0, #4]	@ 000cd77a 4068
.org 0xcd77c
	str r0, [r4, #20]	@ 000cd77c 6061
.org 0xcd77e
	adds r0, r4, #0	@ 000cd77e 201c
.org 0xcd780
	bl 0xcd794	@ 000cd780 00f008f8
.org 0xcd784
	pop {r4}	@ 000cd784 10bc
.org 0xcd786
	pop {r0}	@ 000cd786 01bc
.org 0xcd788
	bx r0	@ 000cd788 0047
