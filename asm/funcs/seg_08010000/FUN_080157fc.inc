@ FUN_080157fc  entry 0x080157fc  size 148
.thumb
.org 0x157fc
FUN_080157fc:
	push {lr}	@ 000157fc 00b5
.org 0x157fe
	ldr r1, [pc, #144]	@ 000157fe 2449
.org 0x15800
	ldr r2, [pc, #144]	@ 00015800 244a
.org 0x15802
	adds r0, r1, r2	@ 00015802 8818
.org 0x15804
	movs r2, #0	@ 00015804 0022
.org 0x15806
	strb r2, [r0, #0]	@ 00015806 0270
.org 0x15808
	ldr r3, [pc, #140]	@ 00015808 234b
.org 0x1580a
	adds r0, r1, r3	@ 0001580a c818
.org 0x1580c
	strb r2, [r0, #0]	@ 0001580c 0270
.org 0x1580e
	adds r3, #7	@ 0001580e 0733
.org 0x15810
	adds r0, r1, r3	@ 00015810 c818
.org 0x15812
	str r2, [r0, #0]	@ 00015812 0260
.org 0x15814
	subs r3, #12	@ 00015814 0c3b
.org 0x15816
	adds r0, r1, r3	@ 00015816 c818
.org 0x15818
	strb r2, [r0, #0]	@ 00015818 0270
.org 0x1581a
	adds r3, #1	@ 0001581a 0133
.org 0x1581c
	adds r0, r1, r3	@ 0001581c c818
.org 0x1581e
	strb r2, [r0, #0]	@ 0001581e 0270
.org 0x15820
	ldr r0, [pc, #120]	@ 00015820 1e48
.org 0x15822
	adds r2, r1, r0	@ 00015822 0a18
.org 0x15824
	movs r3, #0	@ 00015824 0023
.org 0x15826
	movs r0, #200	@ 00015826 c820
.org 0x15828
	lsls r0, r0, #3	@ 00015828 c000
.org 0x1582a
	strh r0, [r2, #0]	@ 0001582a 1080
.org 0x1582c
	ldr r2, [pc, #112]	@ 0001582c 1c4a
.org 0x1582e
	adds r0, r1, r2	@ 0001582e 8818
.org 0x15830
	strb r3, [r0, #0]	@ 00015830 0370
.org 0x15832
	adds r2, #10	@ 00015832 0a32
.org 0x15834
	adds r0, r1, r2	@ 00015834 8818
.org 0x15836
	strb r3, [r0, #0]	@ 00015836 0370
.org 0x15838
	ldr r3, [pc, #104]	@ 00015838 1a4b
.org 0x1583a
	adds r1, r1, r3	@ 0001583a c918
.org 0x1583c
	ldrb r1, [r1, #0]	@ 0001583c 0978
.org 0x1583e
	movs r0, #15	@ 0001583e 0f20
.org 0x15840
	ands r0, r1	@ 00015840 0840
.org 0x15842
	cmp r0, #2	@ 00015842 0228
.org 0x15844
	bne.n 0x1588c	@ 00015844 22d1
.org 0x15846
	movs r0, #2	@ 00015846 0220
.org 0x15848
	movs r1, #5	@ 00015848 0521
.org 0x1584a
	movs r2, #102	@ 0001584a 6622
.org 0x1584c
	bl 0x74c0	@ 0001584c f1f738fe
.org 0x15850
	movs r0, #3	@ 00015850 0320
.org 0x15852
	movs r1, #5	@ 00015852 0521
.org 0x15854
	movs r2, #103	@ 00015854 6722
.org 0x15856
	bl 0x74c0	@ 00015856 f1f733fe
.org 0x1585a
	movs r0, #4	@ 0001585a 0420
.org 0x1585c
	movs r1, #5	@ 0001585c 0521
.org 0x1585e
	movs r2, #104	@ 0001585e 6822
.org 0x15860
	bl 0x74c0	@ 00015860 f1f72efe
.org 0x15864
	movs r0, #5	@ 00015864 0520
.org 0x15866
	movs r1, #5	@ 00015866 0521
.org 0x15868
	movs r2, #105	@ 00015868 6922
.org 0x1586a
	bl 0x74c0	@ 0001586a f1f729fe
.org 0x1586e
	movs r0, #6	@ 0001586e 0620
.org 0x15870
	movs r1, #5	@ 00015870 0521
.org 0x15872
	movs r2, #106	@ 00015872 6a22
.org 0x15874
	bl 0x74c0	@ 00015874 f1f724fe
.org 0x15878
	movs r0, #7	@ 00015878 0720
.org 0x1587a
	movs r1, #5	@ 0001587a 0521
.org 0x1587c
	movs r2, #107	@ 0001587c 6b22
.org 0x1587e
	bl 0x74c0	@ 0001587e f1f71ffe
.org 0x15882
	movs r0, #8	@ 00015882 0820
.org 0x15884
	movs r1, #5	@ 00015884 0521
.org 0x15886
	movs r2, #108	@ 00015886 6c22
.org 0x15888
	bl 0x74c0	@ 00015888 f1f71afe
.org 0x1588c
	pop {r0}	@ 0001588c 01bc
.org 0x1588e
	bx r0	@ 0001588e 0047
