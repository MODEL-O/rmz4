@ FUN_0810d51c  entry 0x0810d51c  size 68
.thumb
.org 0x10d51c
FUN_0810d51c:
	push {r4, r5, lr}	@ 0010d51c 30b5
.org 0x10d51e
	ldr r0, [pc, #64]	@ 0010d51e 1048
.org 0x10d520
	movs r1, #178	@ 0010d520 b221
.org 0x10d522
	lsls r1, r1, #3	@ 0010d522 c900
.org 0x10d524
	adds r2, r0, r1	@ 0010d524 4218
.org 0x10d526
	movs r1, #0	@ 0010d526 0021
.org 0x10d528
	str r1, [r2, #0]	@ 0010d528 1160
.org 0x10d52a
	movs r4, #79	@ 0010d52a 4f24
.org 0x10d52c
	adds r5, r0, #0	@ 0010d52c 051c
.org 0x10d52e
	movs r0, #176	@ 0010d52e b020
.org 0x10d530
	lsls r0, r0, #3	@ 0010d530 c000
.org 0x10d532
	adds r1, r5, r0	@ 0010d532 2918
.org 0x10d534
	ldr r3, [pc, #44]	@ 0010d534 0b4b
.org 0x10d536
	strh r3, [r1, #6]	@ 0010d536 cb80
.org 0x10d538
	ldr r0, [r2, #0]	@ 0010d538 1068
.org 0x10d53a
	str r0, [r1, #0]	@ 0010d53a 0860
.org 0x10d53c
	str r1, [r2, #0]	@ 0010d53c 1160
.org 0x10d53e
	subs r1, #8	@ 0010d53e 0839
.org 0x10d540
	subs r3, #2	@ 0010d540 023b
.org 0x10d542
	subs r4, #1	@ 0010d542 013c
.org 0x10d544
	cmp r4, #0	@ 0010d544 002c
.org 0x10d546
	bge.n 0x10d536	@ 0010d546 f6da
.org 0x10d548
	movs r0, #0	@ 0010d548 0020
.org 0x10d54a
	movs r2, #177	@ 0010d54a b122
.org 0x10d54c
	lsls r2, r2, #3	@ 0010d54c d200
.org 0x10d54e
	adds r1, r5, r2	@ 0010d54e a918
.org 0x10d550
	str r0, [r1, #0]	@ 0010d550 0860
.org 0x10d552
	adds r2, #4	@ 0010d552 0432
.org 0x10d554
	adds r1, r5, r2	@ 0010d554 a918
.org 0x10d556
	str r0, [r1, #0]	@ 0010d556 0860
.org 0x10d558
	strh r0, [r5, #4]	@ 0010d558 a880
.org 0x10d55a
	pop {r4, r5}	@ 0010d55a 30bc
.org 0x10d55c
	pop {r0}	@ 0010d55c 01bc
.org 0x10d55e
	bx r0	@ 0010d55e 0047
