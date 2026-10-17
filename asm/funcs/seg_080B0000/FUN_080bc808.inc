@ FUN_080bc808  entry 0x080bc808  size 112
.thumb
.org 0xbc808
FUN_080bc808:
	push {r4, r5, r6, lr}	@ 000bc808 70b5
.org 0xbc80a
	adds r4, r0, #0	@ 000bc80a 041c
.org 0xbc80c
	bl 0x1cc9c	@ 000bc80c 60f746fa
.org 0xbc810
	ldrb r0, [r4, #10]	@ 000bc810 a07a
.org 0xbc812
	movs r2, #1	@ 000bc812 0122
.org 0xbc814
	movs r1, #0	@ 000bc814 0021
.org 0xbc816
	movs r6, #0	@ 000bc816 0026
.org 0xbc818
	orrs r2, r0	@ 000bc818 0243
.org 0xbc81a
	movs r0, #2	@ 000bc81a 0220
.org 0xbc81c
	orrs r2, r0	@ 000bc81c 0243
.org 0xbc81e
	orrs r2, r1	@ 000bc81e 0a43
.org 0xbc820
	strb r2, [r4, #10]	@ 000bc820 a272
.org 0xbc822
	ldr r1, [pc, #84]	@ 000bc822 1549
.org 0xbc824
	ldrb r0, [r4, #9]	@ 000bc824 607a
.org 0xbc826
	lsls r0, r0, #2	@ 000bc826 8000
.org 0xbc828
	adds r0, r0, r1	@ 000bc828 4018
.org 0xbc82a
	movs r1, #1	@ 000bc82a 0121
.org 0xbc82c
	str r1, [r4, #12]	@ 000bc82c e160
.org 0xbc82e
	ldr r0, [r0, #0]	@ 000bc82e 0068
.org 0xbc830
	ldr r0, [r0, #4]	@ 000bc830 4068
.org 0xbc832
	str r0, [r4, #20]	@ 000bc832 6061
.org 0xbc834
	movs r0, #4	@ 000bc834 0420
.org 0xbc836
	orrs r2, r0	@ 000bc836 0243
.org 0xbc838
	strb r2, [r4, #10]	@ 000bc838 a272
.org 0xbc83a
	adds r5, r4, #0	@ 000bc83a 251c
.org 0xbc83c
	adds r5, #116	@ 000bc83c 7435
.org 0xbc83e
	ldr r1, [pc, #60]	@ 000bc83e 0f49
.org 0xbc840
	ldrb r0, [r4, #16]	@ 000bc840 207c
.org 0xbc842
	lsls r0, r0, #2	@ 000bc842 8000
.org 0xbc844
	adds r0, r0, r1	@ 000bc844 4018
.org 0xbc846
	ldr r1, [r0, #0]	@ 000bc846 0168
.org 0xbc848
	adds r2, r4, #0	@ 000bc848 221c
.org 0xbc84a
	adds r2, #84	@ 000bc84a 5432
.org 0xbc84c
	adds r0, r5, #0	@ 000bc84c 281c
.org 0xbc84e
	movs r3, #128	@ 000bc84e 8023
.org 0xbc850
	bl 0x5760	@ 000bc850 48f786ff
.org 0xbc854
	str r4, [r5, #44]	@ 000bc854 ec62
.org 0xbc856
	ldr r0, [pc, #40]	@ 000bc856 0a48
.org 0xbc858
	str r0, [r5, #36]	@ 000bc858 6862
.org 0xbc85a
	adds r0, r4, #0	@ 000bc85a 201c
.org 0xbc85c
	adds r0, #180	@ 000bc85c b430
.org 0xbc85e
	strb r6, [r0, #0]	@ 000bc85e 0670
.org 0xbc860
	strb r6, [r4, #19]	@ 000bc860 e674
.org 0xbc862
	ldr r0, [r4, #84]	@ 000bc862 606d
.org 0xbc864
	ldr r1, [r4, #88]	@ 000bc864 a16d
.org 0xbc866
	bl 0x8534	@ 000bc866 4bf765fe
.org 0xbc86a
	str r0, [r4, #88]	@ 000bc86a a065
.org 0xbc86c
	adds r0, r4, #0	@ 000bc86c 201c
.org 0xbc86e
	bl 0xbc884	@ 000bc86e 00f009f8
.org 0xbc872
	pop {r4, r5, r6}	@ 000bc872 70bc
.org 0xbc874
	pop {r0}	@ 000bc874 01bc
.org 0xbc876
	bx r0	@ 000bc876 0047
