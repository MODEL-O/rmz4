@ FUN_080ab9f8  entry 0x080ab9f8  size 76
.thumb
.org 0xab9f8
FUN_080ab9f8:
	push {r4, lr}	@ 000ab9f8 10b5
.org 0xab9fa
	adds r4, r0, #0	@ 000ab9fa 041c
.org 0xab9fc
	ldr r0, [pc, #68]	@ 000ab9fc 1148
.org 0xab9fe
	ldr r0, [r0, #0]	@ 000ab9fe 0068
.org 0xaba00
	bl 0x5500	@ 000aba00 59f77efd
.org 0xaba04
	adds r3, r0, #0	@ 000aba04 031c
.org 0xaba06
	cmp r3, #0	@ 000aba06 002b
.org 0xaba08
	beq.n 0xaba3c	@ 000aba08 18d0
.org 0xaba0a
	adds r1, r3, #0	@ 000aba0a 191c
.org 0xaba0c
	adds r1, #37	@ 000aba0c 2531
.org 0xaba0e
	movs r2, #0	@ 000aba0e 0022
.org 0xaba10
	movs r0, #24	@ 000aba10 1820
.org 0xaba12
	strb r0, [r1, #0]	@ 000aba12 0870
.org 0xaba14
	ldr r0, [pc, #48]	@ 000aba14 0c48
.org 0xaba16
	movs r1, #74	@ 000aba16 4a21
.org 0xaba18
	strb r1, [r3, #9]	@ 000aba18 5972
.org 0xaba1a
	adds r1, #222	@ 000aba1a de31
.org 0xaba1c
	adds r0, r0, r1	@ 000aba1c 4018
.org 0xaba1e
	ldr r0, [r0, #0]	@ 000aba1e 0068
.org 0xaba20
	ldr r0, [r0, #0]	@ 000aba20 0068
.org 0xaba22
	str r0, [r3, #20]	@ 000aba22 5861
.org 0xaba24
	movs r0, #0	@ 000aba24 0020
.org 0xaba26
	strh r2, [r3, #32]	@ 000aba26 1a84
.org 0xaba28
	adds r1, r3, #0	@ 000aba28 191c
.org 0xaba2a
	adds r1, #34	@ 000aba2a 2231
.org 0xaba2c
	strb r0, [r1, #0]	@ 000aba2c 0870
.org 0xaba2e
	ldrb r1, [r3, #11]	@ 000aba2e d97a
.org 0xaba30
	movs r0, #16	@ 000aba30 1020
.org 0xaba32
	orrs r0, r1	@ 000aba32 0843
.org 0xaba34
	strb r0, [r3, #11]	@ 000aba34 d872
.org 0xaba36
	ldrb r0, [r3, #28]	@ 000aba36 187f
.org 0xaba38
	strb r0, [r3, #29]	@ 000aba38 5877
.org 0xaba3a
	str r4, [r3, #40]	@ 000aba3a 9c62
.org 0xaba3c
	adds r0, r3, #0	@ 000aba3c 181c
.org 0xaba3e
	pop {r4}	@ 000aba3e 10bc
.org 0xaba40
	pop {r1}	@ 000aba40 02bc
.org 0xaba42
	bx r1	@ 000aba42 0847
