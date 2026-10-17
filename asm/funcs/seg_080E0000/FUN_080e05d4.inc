@ FUN_080e05d4  entry 0x080e05d4  size 128
.thumb
.org 0xe05d4
FUN_080e05d4:
	push {r4, r5, r6, lr}	@ 000e05d4 70b5
.org 0xe05d6
	adds r5, r0, #0	@ 000e05d6 051c
.org 0xe05d8
	ldrb r4, [r5, #17]	@ 000e05d8 6c7c
.org 0xe05da
	ldr r1, [pc, #64]	@ 000e05da 1049
.org 0xe05dc
	ldrb r0, [r5, #9]	@ 000e05dc 687a
.org 0xe05de
	lsls r0, r0, #2	@ 000e05de 8000
.org 0xe05e0
	adds r0, r0, r1	@ 000e05e0 4018
.org 0xe05e2
	movs r1, #1	@ 000e05e2 0121
.org 0xe05e4
	str r1, [r5, #12]	@ 000e05e4 e960
.org 0xe05e6
	ldr r0, [r0, #0]	@ 000e05e6 0068
.org 0xe05e8
	ldr r0, [r0, #4]	@ 000e05e8 4068
.org 0xe05ea
	str r0, [r5, #20]	@ 000e05ea 6861
.org 0xe05ec
	ldrb r1, [r5, #10]	@ 000e05ec a97a
.org 0xe05ee
	movs r0, #1	@ 000e05ee 0120
.org 0xe05f0
	movs r6, #0	@ 000e05f0 0026
.org 0xe05f2
	movs r2, #0	@ 000e05f2 0022
.org 0xe05f4
	orrs r0, r1	@ 000e05f4 0843
.org 0xe05f6
	movs r1, #2	@ 000e05f6 0221
.org 0xe05f8
	orrs r0, r1	@ 000e05f8 0843
.org 0xe05fa
	strb r0, [r5, #10]	@ 000e05fa a872
.org 0xe05fc
	str r2, [r5, #96]	@ 000e05fc 2a66
.org 0xe05fe
	ldr r0, [r5, #84]	@ 000e05fe 686d
.org 0xe0600
	str r0, [r5, #100]	@ 000e0600 6866
.org 0xe0602
	ldr r0, [r5, #88]	@ 000e0602 a86d
.org 0xe0604
	str r0, [r5, #104]	@ 000e0604 a866
.org 0xe0606
	movs r0, #80	@ 000e0606 5020
.org 0xe0608
	strb r0, [r5, #18]	@ 000e0608 a874
.org 0xe060a
	adds r0, r5, #0	@ 000e060a 281c
.org 0xe060c
	bl 0x1cc9c	@ 000e060c 3cf746fb
.org 0xe0610
	cmp r4, #0	@ 000e0610 002c
.org 0xe0612
	beq.n 0xe0620	@ 000e0612 05d0
.org 0xe0614
	ldrb r0, [r5, #10]	@ 000e0614 a87a
.org 0xe0616
	movs r1, #16	@ 000e0616 1021
.org 0xe0618
	orrs r0, r1	@ 000e0618 0843
.org 0xe061a
	b.n 0xe0626	@ 000e061a 04e0
.org 0xe061c
	.byte 0x64,0x6f,0x86,0x08	@ 000e061c data
.org 0xe0620
	ldrb r1, [r5, #10]	@ 000e0620 a97a
.org 0xe0622
	movs r0, #239	@ 000e0622 ef20
.org 0xe0624
	ands r0, r1	@ 000e0624 0840
.org 0xe0626
	strb r0, [r5, #10]	@ 000e0626 a872
.org 0xe0628
	movs r1, #1	@ 000e0628 0121
.org 0xe062a
	ands r1, r4	@ 000e062a 2140
.org 0xe062c
	adds r0, r5, #0	@ 000e062c 281c
.org 0xe062e
	adds r0, #76	@ 000e062e 4c30
.org 0xe0630
	strb r1, [r0, #0]	@ 000e0630 0170
.org 0xe0632
	adds r3, r5, #0	@ 000e0632 2b1c
.org 0xe0634
	adds r3, #74	@ 000e0634 4a33
.org 0xe0636
	lsls r1, r1, #4	@ 000e0636 0901
.org 0xe0638
	ldrb r2, [r3, #0]	@ 000e0638 1a78
.org 0xe063a
	movs r0, #17	@ 000e063a 1120
.org 0xe063c
	negs r0, r0	@ 000e063c 4042
.org 0xe063e
	ands r0, r2	@ 000e063e 1040
.org 0xe0640
	orrs r0, r1	@ 000e0640 0843
.org 0xe0642
	strb r0, [r3, #0]	@ 000e0642 1870
.org 0xe0644
	ldr r1, [pc, #16]	@ 000e0644 0449
.org 0xe0646
	adds r0, r5, #0	@ 000e0646 281c
.org 0xe0648
	bl 0x1cf00	@ 000e0648 3cf75afc
.org 0xe064c
	adds r0, r5, #0	@ 000e064c 281c
.org 0xe064e
	bl 0xe065c	@ 000e064e 00f005f8
.org 0xe0652
	pop {r4, r5, r6}	@ 000e0652 70bc
