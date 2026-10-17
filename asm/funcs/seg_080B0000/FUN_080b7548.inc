@ FUN_080b7548  entry 0x080b7548  size 60
.thumb
.org 0xb7548
FUN_080b7548:
	push {r4, r5, r6, r7, lr}	@ 000b7548 f0b5
.org 0xb754a
	sub sp, #8	@ 000b754a 82b0
.org 0xb754c
	ldrb r1, [r0, #10]	@ 000b754c 817a
.org 0xb754e
	lsrs r1, r1, #4	@ 000b754e 0909
.org 0xb7550
	movs r2, #1	@ 000b7550 0122
.org 0xb7552
	ands r1, r2	@ 000b7552 1140
.org 0xb7554
	ldr r2, [r0, #84]	@ 000b7554 426d
.org 0xb7556
	str r2, [sp, #0]	@ 000b7556 0092
.org 0xb7558
	ldr r0, [r0, #88]	@ 000b7558 806d
.org 0xb755a
	str r0, [sp, #4]	@ 000b755a 0190
.org 0xb755c
	lsls r0, r1, #4	@ 000b755c 0801
.org 0xb755e
	orrs r1, r0	@ 000b755e 0143
.org 0xb7560
	lsls r6, r1, #24	@ 000b7560 0e06
.org 0xb7562
	movs r5, #0	@ 000b7562 0025
.org 0xb7564
	ldr r7, [pc, #28]	@ 000b7564 074f
.org 0xb7566
	movs r4, #2	@ 000b7566 0224
.org 0xb7568
	adds r1, r5, r7	@ 000b7568 e919
.org 0xb756a
	mov r0, sp	@ 000b756a 6846
.org 0xb756c
	movs r2, #0	@ 000b756c 0022
.org 0xb756e
	lsrs r3, r6, #24	@ 000b756e 330e
.org 0xb7570
	bl 0xd4c8c	@ 000b7570 1df08cfb
.org 0xb7574
	adds r5, #28	@ 000b7574 1c35
.org 0xb7576
	subs r4, #1	@ 000b7576 013c
.org 0xb7578
	cmp r4, #0	@ 000b7578 002c
.org 0xb757a
	bge.n 0xb7568	@ 000b757a f5da
.org 0xb757c
	add sp, #8	@ 000b757c 02b0
.org 0xb757e
	pop {r4, r5, r6, r7}	@ 000b757e f0bc
.org 0xb7580
	pop {r0}	@ 000b7580 01bc
.org 0xb7582
	bx r0	@ 000b7582 0047
