@ FUN_0804051c  entry 0x0804051c  size 48
.thumb
.org 0x4051c
FUN_0804051c:
	push {r4, lr}	@ 0004051c 10b5
.org 0x4051e
	adds r4, r0, #0	@ 0004051e 041c
.org 0x40520
	bl 0x1cff0	@ 00040520 dcf766fd
.org 0x40524
	adds r0, r4, #0	@ 00040524 201c
.org 0x40526
	adds r0, #115	@ 00040526 7330
.org 0x40528
	ldrb r0, [r0, #0]	@ 00040528 0078
.org 0x4052a
	cmp r0, #3	@ 0004052a 0328
.org 0x4052c
	bne.n 0x40546	@ 0004052c 0bd1
.org 0x4052e
	ldr r1, [pc, #28]	@ 0004052e 0749
.org 0x40530
	ldrb r0, [r4, #9]	@ 00040530 607a
.org 0x40532
	lsls r0, r0, #2	@ 00040532 8000
.org 0x40534
	adds r0, r0, r1	@ 00040534 4018
.org 0x40536
	movs r1, #2	@ 00040536 0221
.org 0x40538
	str r1, [r4, #12]	@ 00040538 e160
.org 0x4053a
	ldr r0, [r0, #0]	@ 0004053a 0068
.org 0x4053c
	ldr r0, [r0, #8]	@ 0004053c 8068
.org 0x4053e
	str r0, [r4, #20]	@ 0004053e 6061
.org 0x40540
	adds r0, r4, #0	@ 00040540 201c
.org 0x40542
	bl 0x4016c	@ 00040542 fff713fe
.org 0x40546
	pop {r4}	@ 00040546 10bc
.org 0x40548
	pop {r0}	@ 00040548 01bc
.org 0x4054a
	bx r0	@ 0004054a 0047
