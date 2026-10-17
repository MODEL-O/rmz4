@ FUN_080adc78  entry 0x080adc78  size 128
.thumb
.org 0xadc78
FUN_080adc78:
	push {r4, lr}	@ 000adc78 10b5
.org 0xadc7a
	adds r4, r0, #0	@ 000adc7a 041c
.org 0xadc7c
	ldr r0, [r4, #84]	@ 000adc7c 606d
.org 0xadc7e
	ldr r1, [r4, #88]	@ 000adc7e a16d
.org 0xadc80
	bl 0x7c7c	@ 000adc80 59f7fcff
.org 0xadc84
	lsls r0, r0, #16	@ 000adc84 0004
.org 0xadc86
	cmp r0, #0	@ 000adc86 0028
.org 0xadc88
	beq.n 0xadcb4	@ 000adc88 14d0
.org 0xadc8a
	ldr r2, [pc, #108]	@ 000adc8a 1b4a
.org 0xadc8c
	ldrh r1, [r2, #12]	@ 000adc8c 9189
.org 0xadc8e
	ldr r0, [pc, #108]	@ 000adc8e 1b48
.org 0xadc90
	cmp r1, r0	@ 000adc90 8142
.org 0xadc92
	bhi.n 0xadc98	@ 000adc92 01d8
.org 0xadc94
	adds r0, r1, #1	@ 000adc94 481c
.org 0xadc96
	strh r0, [r2, #12]	@ 000adc96 9081
.org 0xadc98
	adds r1, r4, #0	@ 000adc98 211c
.org 0xadc9a
	adds r1, #84	@ 000adc9a 5431
.org 0xadc9c
	adds r0, r4, #0	@ 000adc9c 201c
.org 0xadc9e
	bl 0x2abe0	@ 000adc9e 7cf79fff
.org 0xadca2
	ldr r1, [pc, #92]	@ 000adca2 1749
.org 0xadca4
	ldrb r0, [r4, #9]	@ 000adca4 607a
.org 0xadca6
	lsls r0, r0, #2	@ 000adca6 8000
.org 0xadca8
	adds r0, r0, r1	@ 000adca8 4018
.org 0xadcaa
	movs r1, #2	@ 000adcaa 0221
.org 0xadcac
	str r1, [r4, #12]	@ 000adcac e160
.org 0xadcae
	ldr r0, [r0, #0]	@ 000adcae 0068
.org 0xadcb0
	ldr r0, [r0, #8]	@ 000adcb0 8068
.org 0xadcb2
	str r0, [r4, #20]	@ 000adcb2 6061
.org 0xadcb4
	ldr r0, [pc, #76]	@ 000adcb4 1348
.org 0xadcb6
	ldr r2, [r0, #0]	@ 000adcb6 0268
.org 0xadcb8
	ldr r0, [r2, #84]	@ 000adcb8 506d
.org 0xadcba
	ldr r1, [r4, #84]	@ 000adcba 616d
.org 0xadcbc
	subs r0, r0, r1	@ 000adcbc 401a
.org 0xadcbe
	asrs r0, r0, #8	@ 000adcbe 0012
.org 0xadcc0
	cmp r0, #0	@ 000adcc0 0028
.org 0xadcc2
	bge.n 0xadcc6	@ 000adcc2 00da
.org 0xadcc4
	negs r0, r0	@ 000adcc4 4042
.org 0xadcc6
	movs r3, #200	@ 000adcc6 c823
.org 0xadcc8
	lsls r3, r3, #1	@ 000adcc8 5b00
.org 0xadcca
	cmp r0, r3	@ 000adcca 9842
.org 0xadccc
	bgt.n 0xadce0	@ 000adccc 08dc
.org 0xadcce
	ldr r0, [r2, #88]	@ 000adcce 906d
.org 0xadcd0
	ldr r1, [r4, #88]	@ 000adcd0 a16d
.org 0xadcd2
	subs r0, r0, r1	@ 000adcd2 401a
.org 0xadcd4
	asrs r0, r0, #8	@ 000adcd4 0012
.org 0xadcd6
	cmp r0, #0	@ 000adcd6 0028
.org 0xadcd8
	bge.n 0xadcdc	@ 000adcd8 00da
.org 0xadcda
	negs r0, r0	@ 000adcda 4042
.org 0xadcdc
	cmp r0, r3	@ 000adcdc 9842
.org 0xadcde
	ble.n 0xadcf2	@ 000adcde 08dd
.org 0xadce0
	ldr r1, [pc, #28]	@ 000adce0 0749
.org 0xadce2
	ldrb r0, [r4, #9]	@ 000adce2 607a
.org 0xadce4
	lsls r0, r0, #2	@ 000adce4 8000
.org 0xadce6
	adds r0, r0, r1	@ 000adce6 4018
.org 0xadce8
	movs r1, #2	@ 000adce8 0221
.org 0xadcea
	str r1, [r4, #12]	@ 000adcea e160
.org 0xadcec
	ldr r0, [r0, #0]	@ 000adcec 0068
.org 0xadcee
	ldr r0, [r0, #8]	@ 000adcee 8068
.org 0xadcf0
	str r0, [r4, #20]	@ 000adcf0 6061
.org 0xadcf2
	pop {r4}	@ 000adcf2 10bc
.org 0xadcf4
	pop {r0}	@ 000adcf4 01bc
.org 0xadcf6
	bx r0	@ 000adcf6 0047
