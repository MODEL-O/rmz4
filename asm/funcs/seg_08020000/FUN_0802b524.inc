@ FUN_0802b524  entry 0x0802b524  size 20
.thumb
.org 0x2b524
FUN_0802b524:
	ldr r2, [pc, #16]	@ 0002b524 044a
.org 0x2b526
	ldrb r1, [r0, #9]	@ 0002b526 417a
.org 0x2b528
	lsls r1, r1, #2	@ 0002b528 8900
.org 0x2b52a
	adds r1, r1, r2	@ 0002b52a 8918
.org 0x2b52c
	movs r2, #4	@ 0002b52c 0422
.org 0x2b52e
	str r2, [r0, #12]	@ 0002b52e c260
.org 0x2b530
	ldr r1, [r1, #0]	@ 0002b530 0968
.org 0x2b532
	ldr r1, [r1, #16]	@ 0002b532 0969
.org 0x2b534
	str r1, [r0, #20]	@ 0002b534 4161
.org 0x2b536
	bx lr	@ 0002b536 7047
