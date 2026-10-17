@ FUN_08028430  entry 0x08028430  size 52
.thumb
.org 0x28430
FUN_08028430:
	push {lr}	@ 00028430 00b5
.org 0x28432
	adds r2, r0, #0	@ 00028432 021c
.org 0x28434
	ldr r1, [r2, #12]	@ 00028434 d168
.org 0x28436
	ldrb r0, [r1, #1]	@ 00028436 4878
.org 0x28438
	cmp r0, #0	@ 00028438 0028
.org 0x2843a
	beq.n 0x28450	@ 0002843a 09d0
.org 0x2843c
	ldr r0, [pc, #12]	@ 0002843c 0348
.org 0x2843e
	ldrb r0, [r0, #18]	@ 0002843e 807c
.org 0x28440
	ldr r1, [r1, #4]	@ 00028440 4968
.org 0x28442
	ands r0, r1	@ 00028442 0840
.org 0x28444
	cmp r0, #0	@ 00028444 0028
.org 0x28446
	beq.n 0x2845c	@ 00028446 09d0
.org 0x28448
	movs r0, #0	@ 00028448 0020
.org 0x2844a
	b.n 0x28464	@ 0002844a 0be0
.org 0x2844c
	.byte 0x10,0xe9,0x02,0x02	@ 0002844c data
.org 0x28450
	ldr r0, [pc, #20]	@ 00028450 0548
.org 0x28452
	ldrb r0, [r0, #18]	@ 00028452 807c
.org 0x28454
	ldr r1, [r1, #4]	@ 00028454 4968
.org 0x28456
	ands r0, r1	@ 00028456 0840
.org 0x28458
	cmp r0, #0	@ 00028458 0028
.org 0x2845a
	beq.n 0x28448	@ 0002845a f5d0
.org 0x2845c
	ldr r0, [r2, #12]	@ 0002845c d068
.org 0x2845e
	subs r0, #8	@ 0002845e 0838
.org 0x28460
	str r0, [r2, #12]	@ 00028460 d060
.org 0x28462
	movs r0, #1	@ 00028462 0120
