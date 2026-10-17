@ FUN_080977d4  entry 0x080977d4  size 128
.thumb
.org 0x977d4
FUN_080977d4:
	push {lr}	@ 000977d4 00b5
.org 0x977d6
	adds r2, r0, #0	@ 000977d6 021c
.org 0x977d8
	ldrb r0, [r2, #14]	@ 000977d8 907b
.org 0x977da
	adds r1, r0, #0	@ 000977da 011c
.org 0x977dc
	cmp r1, #0	@ 000977dc 0029
.org 0x977de
	bne.n 0x977e6	@ 000977de 02d1
.org 0x977e0
	strb r1, [r2, #15]	@ 000977e0 d173
.org 0x977e2
	adds r0, #1	@ 000977e2 0130
.org 0x977e4
	strb r0, [r2, #14]	@ 000977e4 9073
.org 0x977e6
	ldrb r0, [r2, #15]	@ 000977e6 d07b
.org 0x977e8
	cmp r0, #1	@ 000977e8 0128
.org 0x977ea
	beq.n 0x97812	@ 000977ea 12d0
.org 0x977ec
	cmp r0, #1	@ 000977ec 0128
.org 0x977ee
	bgt.n 0x977f6	@ 000977ee 02dc
.org 0x977f0
	cmp r0, #0	@ 000977f0 0028
.org 0x977f2
	beq.n 0x977fc	@ 000977f2 03d0
.org 0x977f4
	b.n 0x9784a	@ 000977f4 29e0
.org 0x977f6
	cmp r0, #2	@ 000977f6 0228
.org 0x977f8
	beq.n 0x97834	@ 000977f8 1cd0
.org 0x977fa
	b.n 0x9784a	@ 000977fa 26e0
.org 0x977fc
	adds r3, r2, #0	@ 000977fc 131c
.org 0x977fe
	adds r3, #189	@ 000977fe bd33
.org 0x97800
	ldrb r0, [r3, #0]	@ 00097800 1878
.org 0x97802
	adds r1, r0, #3	@ 00097802 c11c
.org 0x97804
	strb r1, [r3, #0]	@ 00097804 1970
.org 0x97806
	subs r0, #114	@ 00097806 7238
.org 0x97808
	lsls r0, r0, #24	@ 00097808 0006
.org 0x9780a
	lsrs r0, r0, #24	@ 0009780a 000e
.org 0x9780c
	cmp r0, #74	@ 0009780c 4a28
.org 0x9780e
	bhi.n 0x9784a	@ 0009780e 1cd8
.org 0x97810
	b.n 0x9782c	@ 00097810 0ce0
.org 0x97812
	adds r1, r2, #0	@ 00097812 111c
.org 0x97814
	adds r1, #189	@ 00097814 bd31
.org 0x97816
	ldrb r0, [r1, #0]	@ 00097816 0878
.org 0x97818
	subs r0, #2	@ 00097818 0238
.org 0x9781a
	strb r0, [r1, #0]	@ 0009781a 0870
.org 0x9781c
	lsls r0, r0, #24	@ 0009781c 0006
.org 0x9781e
	lsrs r0, r0, #24	@ 0009781e 000e
.org 0x97820
	cmp r0, #112	@ 00097820 7028
.org 0x97822
	bhi.n 0x9784a	@ 00097822 12d8
.org 0x97824
	movs r0, #112	@ 00097824 7020
.org 0x97826
	strb r0, [r1, #0]	@ 00097826 0870
.org 0x97828
	movs r0, #8	@ 00097828 0820
.org 0x9782a
	strb r0, [r2, #18]	@ 0009782a 9074
.org 0x9782c
	ldrb r0, [r2, #15]	@ 0009782c d07b
.org 0x9782e
	adds r0, #1	@ 0009782e 0130
.org 0x97830
	strb r0, [r2, #15]	@ 00097830 d073
.org 0x97832
	b.n 0x9784a	@ 00097832 0ae0
.org 0x97834
	ldrb r0, [r2, #18]	@ 00097834 907c
.org 0x97836
	subs r0, #1	@ 00097836 0138
.org 0x97838
	strb r0, [r2, #18]	@ 00097838 9074
.org 0x9783a
	lsls r0, r0, #24	@ 0009783a 0006
.org 0x9783c
	lsrs r0, r0, #24	@ 0009783c 000e
.org 0x9783e
	cmp r0, #255	@ 0009783e ff28
.org 0x97840
	bne.n 0x9784a	@ 00097840 03d1
.org 0x97842
	movs r0, #4	@ 00097842 0420
.org 0x97844
	strb r0, [r2, #13]	@ 00097844 5073
.org 0x97846
	movs r0, #0	@ 00097846 0020
.org 0x97848
	strb r0, [r2, #14]	@ 00097848 9073
.org 0x9784a
	adds r0, r2, #0	@ 0009784a 101c
.org 0x9784c
	bl 0x1cff0	@ 0009784c 85f7d0fb
.org 0x97850
	pop {r0}	@ 00097850 01bc
.org 0x97852
	bx r0	@ 00097852 0047
