@ FUN_080b3700  entry 0x080b3700  size 48
.thumb
.org 0xb3700
FUN_080b3700:
	push {lr}	@ 000b3700 00b5
.org 0xb3702
	adds r2, r0, #0	@ 000b3702 021c
.org 0xb3704
	ldrb r0, [r2, #18]	@ 000b3704 907c
.org 0xb3706
	cmp r0, #60	@ 000b3706 3c28
.org 0xb3708
	bne.n 0xb370e	@ 000b3708 01d1
.org 0xb370a
	movs r0, #0	@ 000b370a 0020
.org 0xb370c
	strb r0, [r2, #18]	@ 000b370c 9074
.org 0xb370e
	ldrb r1, [r2, #18]	@ 000b370e 917c
.org 0xb3710
	adds r0, r1, #0	@ 000b3710 081c
.org 0xb3712
	subs r0, #15	@ 000b3712 0f38
.org 0xb3714
	lsls r0, r0, #24	@ 000b3714 0006
.org 0xb3716
	lsrs r0, r0, #24	@ 000b3716 000e
.org 0xb3718
	cmp r0, #30	@ 000b3718 1e28
.org 0xb371a
	bls.n 0xb3722	@ 000b371a 02d9
.org 0xb371c
	ldr r0, [r2, #88]	@ 000b371c 906d
.org 0xb371e
	adds r0, #64	@ 000b371e 4030
.org 0xb3720
	b.n 0xb3726	@ 000b3720 01e0
.org 0xb3722
	ldr r0, [r2, #88]	@ 000b3722 906d
.org 0xb3724
	subs r0, #64	@ 000b3724 4038
.org 0xb3726
	str r0, [r2, #88]	@ 000b3726 9065
.org 0xb3728
	adds r0, r1, #1	@ 000b3728 481c
.org 0xb372a
	strb r0, [r2, #18]	@ 000b372a 9074
.org 0xb372c
	pop {r0}	@ 000b372c 01bc
.org 0xb372e
	bx r0	@ 000b372e 0047
