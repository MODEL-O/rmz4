@ FUN_0804181c  entry 0x0804181c  size 74
.thumb
.org 0x4181c
FUN_0804181c:
	push {r4, lr}	@ 0004181c 10b5
.org 0x4181e
	adds r4, r0, #0	@ 0004181e 041c
.org 0x41820
	ldr r1, [pc, #68]	@ 00041820 1149
.org 0x41822
	ldrb r0, [r4, #9]	@ 00041822 607a
.org 0x41824
	lsls r0, r0, #2	@ 00041824 8000
.org 0x41826
	adds r0, r0, r1	@ 00041826 4018
.org 0x41828
	movs r1, #1	@ 00041828 0121
.org 0x4182a
	str r1, [r4, #12]	@ 0004182a e160
.org 0x4182c
	ldr r0, [r0, #0]	@ 0004182c 0068
.org 0x4182e
	ldr r0, [r0, #4]	@ 0004182e 4068
.org 0x41830
	str r0, [r4, #20]	@ 00041830 6061
.org 0x41832
	adds r0, r4, #0	@ 00041832 201c
.org 0x41834
	bl 0x1cd28	@ 00041834 dbf778fa
.org 0x41838
	adds r0, r4, #0	@ 00041838 201c
.org 0x4183a
	bl 0x1ceec	@ 0004183a dbf757fb
.org 0x4183e
	ldrb r1, [r4, #10]	@ 0004183e a17a
.org 0x41840
	movs r0, #1	@ 00041840 0120
.org 0x41842
	orrs r0, r1	@ 00041842 0843
.org 0x41844
	movs r1, #2	@ 00041844 0221
.org 0x41846
	orrs r0, r1	@ 00041846 0843
.org 0x41848
	strb r0, [r4, #10]	@ 00041848 a072
.org 0x4184a
	ldr r1, [pc, #32]	@ 0004184a 0849
.org 0x4184c
	ldrb r0, [r4, #16]	@ 0004184c 207c
.org 0x4184e
	lsls r0, r0, #2	@ 0004184e 8000
.org 0x41850
	adds r0, r0, r1	@ 00041850 4018
.org 0x41852
	ldr r1, [r0, #0]	@ 00041852 0168
.org 0x41854
	adds r0, r4, #0	@ 00041854 201c
.org 0x41856
	bl 0x128f80	@ 00041856 e7f093fb
.org 0x4185a
	adds r0, r4, #0	@ 0004185a 201c
.org 0x4185c
	bl 0x41870	@ 0004185c 00f008f8
.org 0x41860
	pop {r4}	@ 00041860 10bc
.org 0x41862
	pop {r0}	@ 00041862 01bc
.org 0x41864
	bx r0	@ 00041864 0047
