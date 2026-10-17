@ FUN_080c75dc  entry 0x080c75dc  size 102
.thumb
.org 0xc75dc
FUN_080c75dc:
	push {r4, r5, r6, lr}	@ 000c75dc 70b5
.org 0xc75de
	adds r5, r0, #0	@ 000c75de 051c
.org 0xc75e0
	ldr r4, [r5, #40]	@ 000c75e0 ac6a
.org 0xc75e2
	adds r6, r5, #0	@ 000c75e2 2e1c
.org 0xc75e4
	adds r6, #84	@ 000c75e4 5436
.org 0xc75e6
	cmp r4, #0	@ 000c75e6 002c
.org 0xc75e8
	beq.n 0xc75f4	@ 000c75e8 04d0
.org 0xc75ea
	ldrb r0, [r4, #12]	@ 000c75ea 207b
.org 0xc75ec
	cmp r0, #1	@ 000c75ec 0128
.org 0xc75ee
	bls.n 0xc75f4	@ 000c75ee 01d9
.org 0xc75f0
	movs r4, #0	@ 000c75f0 0024
.org 0xc75f2
	str r4, [r5, #40]	@ 000c75f2 ac62
.org 0xc75f4
	adds r0, r5, #0	@ 000c75f4 281c
.org 0xc75f6
	bl 0x1cff0	@ 000c75f6 55f7fbfc
.org 0xc75fa
	adds r2, r6, #0	@ 000c75fa 321c
.org 0xc75fc
	movs r3, #1	@ 000c75fc 0123
.org 0xc75fe
	ldr r0, [r2, #8]	@ 000c75fe 9068
.org 0xc7600
	ldr r1, [r2, #12]	@ 000c7600 d168
.org 0xc7602
	stmia r2!, {r0, r1}	@ 000c7602 03c2
.org 0xc7604
	subs r3, #1	@ 000c7604 013b
.org 0xc7606
	cmp r3, #0	@ 000c7606 002b
.org 0xc7608
	bge.n 0xc75fe	@ 000c7608 f9da
.org 0xc760a
	ldr r0, [r6, #0]	@ 000c760a 3068
.org 0xc760c
	cmp r0, #0	@ 000c760c 0028
.org 0xc760e
	bne.n 0xc7630	@ 000c760e 0fd1
.org 0xc7610
	ldr r1, [pc, #24]	@ 000c7610 0649
.org 0xc7612
	ldrb r0, [r5, #9]	@ 000c7612 687a
.org 0xc7614
	lsls r0, r0, #2	@ 000c7614 8000
.org 0xc7616
	adds r0, r0, r1	@ 000c7616 4018
.org 0xc7618
	movs r1, #2	@ 000c7618 0221
.org 0xc761a
	str r1, [r5, #12]	@ 000c761a e960
.org 0xc761c
	ldr r0, [r0, #0]	@ 000c761c 0068
.org 0xc761e
	ldr r0, [r0, #8]	@ 000c761e 8068
.org 0xc7620
	str r0, [r5, #20]	@ 000c7620 6861
.org 0xc7622
	adds r0, r5, #0	@ 000c7622 281c
.org 0xc7624
	bl 0xc7648	@ 000c7624 00f010f8
.org 0xc7628
	b.n 0xc7642	@ 000c7628 0be0
.org 0xc762a
	.byte 0x00	@ 000c762a data
.org 0xc762b
	.byte 0x00	@ 000c762b data
.org 0xc762c
	.byte 0xf4,0x49,0x86,0x08	@ 000c762c data
.org 0xc7630
	cmp r4, #0	@ 000c7630 002c
.org 0xc7632
	beq.n 0xc763e	@ 000c7632 04d0
.org 0xc7634
	ldr r0, [r4, #84]	@ 000c7634 606d
.org 0xc7636
	ldr r1, [r4, #88]	@ 000c7636 a16d
.org 0xc7638
	str r0, [r6, #16]	@ 000c7638 3061
.org 0xc763a
	str r1, [r6, #20]	@ 000c763a 7161
.org 0xc763c
	b.n 0xc7642	@ 000c763c 01e0
.org 0xc763e
	str r4, [r6, #20]	@ 000c763e 7461
.org 0xc7640
	str r4, [r6, #16]	@ 000c7640 3461
