@ FUN_080e051c  entry 0x080e051c  size 58
.thumb
.org 0xe051c
FUN_080e051c:
	push {r4, lr}	@ 000e051c 10b5
.org 0xe051e
	adds r4, r0, #0	@ 000e051e 041c
.org 0xe0520
	bl 0x1cff0	@ 000e0520 3cf766fd
.org 0xe0524
	ldr r0, [r4, #88]	@ 000e0524 a06d
.org 0xe0526
	ldr r1, [r4, #96]	@ 000e0526 216e
.org 0xe0528
	adds r0, r0, r1	@ 000e0528 4018
.org 0xe052a
	str r0, [r4, #88]	@ 000e052a a065
.org 0xe052c
	ldrb r0, [r4, #18]	@ 000e052c a07c
.org 0xe052e
	subs r0, #1	@ 000e052e 0138
.org 0xe0530
	strb r0, [r4, #18]	@ 000e0530 a074
.org 0xe0532
	lsls r0, r0, #24	@ 000e0532 0006
.org 0xe0534
	cmp r0, #0	@ 000e0534 0028
.org 0xe0536
	bne.n 0xe0550	@ 000e0536 0bd1
.org 0xe0538
	ldr r1, [pc, #28]	@ 000e0538 0749
.org 0xe053a
	ldrb r0, [r4, #9]	@ 000e053a 607a
.org 0xe053c
	lsls r0, r0, #2	@ 000e053c 8000
.org 0xe053e
	adds r0, r0, r1	@ 000e053e 4018
.org 0xe0540
	movs r1, #2	@ 000e0540 0221
.org 0xe0542
	str r1, [r4, #12]	@ 000e0542 e160
.org 0xe0544
	ldr r0, [r0, #0]	@ 000e0544 0068
.org 0xe0546
	ldr r0, [r0, #8]	@ 000e0546 8068
.org 0xe0548
	str r0, [r4, #20]	@ 000e0548 6061
.org 0xe054a
	adds r0, r4, #0	@ 000e054a 201c
.org 0xe054c
	bl 0xe055c	@ 000e054c 00f006f8
.org 0xe0550
	pop {r4}	@ 000e0550 10bc
.org 0xe0552
	pop {r0}	@ 000e0552 01bc
.org 0xe0554
	bx r0	@ 000e0554 0047
