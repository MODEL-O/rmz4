@ FUN_080cd920  entry 0x080cd920  size 20
.thumb
.org 0xcd920
FUN_080cd920:
	ldr r2, [pc, #16]	@ 000cd920 044a
.org 0xcd922
	ldrb r1, [r0, #9]	@ 000cd922 417a
.org 0xcd924
	lsls r1, r1, #2	@ 000cd924 8900
.org 0xcd926
	adds r1, r1, r2	@ 000cd926 8918
.org 0xcd928
	movs r2, #4	@ 000cd928 0422
.org 0xcd92a
	str r2, [r0, #12]	@ 000cd92a c260
.org 0xcd92c
	ldr r1, [r1, #0]	@ 000cd92c 0968
.org 0xcd92e
	ldr r1, [r1, #16]	@ 000cd92e 0969
.org 0xcd930
	str r1, [r0, #20]	@ 000cd930 4161
.org 0xcd932
	bx lr	@ 000cd932 7047
