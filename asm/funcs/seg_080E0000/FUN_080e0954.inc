@ FUN_080e0954  entry 0x080e0954  size 72
.thumb
.org 0xe0954
FUN_080e0954:
	push {r4, lr}	@ 000e0954 10b5
.org 0xe0956
	adds r4, r0, #0	@ 000e0956 041c
.org 0xe0958
	bl 0x1cc9c	@ 000e0958 3cf7a0f9
.org 0xe095c
	ldrb r1, [r4, #10]	@ 000e095c a17a
.org 0xe095e
	movs r0, #1	@ 000e095e 0120
.org 0xe0960
	orrs r0, r1	@ 000e0960 0843
.org 0xe0962
	movs r1, #2	@ 000e0962 0221
.org 0xe0964
	orrs r0, r1	@ 000e0964 0843
.org 0xe0966
	strb r0, [r4, #10]	@ 000e0966 a072
.org 0xe0968
	ldr r1, [pc, #48]	@ 000e0968 0c49
.org 0xe096a
	ldrb r0, [r4, #9]	@ 000e096a 607a
.org 0xe096c
	lsls r0, r0, #2	@ 000e096c 8000
.org 0xe096e
	adds r0, r0, r1	@ 000e096e 4018
.org 0xe0970
	movs r1, #1	@ 000e0970 0121
.org 0xe0972
	str r1, [r4, #12]	@ 000e0972 e160
.org 0xe0974
	ldr r0, [r0, #0]	@ 000e0974 0068
.org 0xe0976
	ldr r0, [r0, #4]	@ 000e0976 4068
.org 0xe0978
	str r0, [r4, #20]	@ 000e0978 6061
.org 0xe097a
	ldrb r0, [r4, #16]	@ 000e097a 207c
.org 0xe097c
	cmp r0, #2	@ 000e097c 0228
.org 0xe097e
	bhi.n 0xe0990	@ 000e097e 07d8
.org 0xe0980
	ldr r0, [pc, #28]	@ 000e0980 0748
.org 0xe0982
	ldrb r1, [r4, #16]	@ 000e0982 217c
.org 0xe0984
	lsls r1, r1, #2	@ 000e0984 8900
.org 0xe0986
	adds r1, r1, r0	@ 000e0986 0918
.org 0xe0988
	ldr r1, [r1, #0]	@ 000e0988 0968
.org 0xe098a
	adds r0, r4, #0	@ 000e098a 201c
.org 0xe098c
	bl 0x128f80	@ 000e098c 48f0f8fa
.org 0xe0990
	adds r0, r4, #0	@ 000e0990 201c
.org 0xe0992
	bl 0xe0ac4	@ 000e0992 00f097f8
.org 0xe0996
	pop {r4}	@ 000e0996 10bc
.org 0xe0998
	pop {r0}	@ 000e0998 01bc
.org 0xe099a
	bx r0	@ 000e099a 0047
