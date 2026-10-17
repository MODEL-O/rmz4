@ FUN_08087640  entry 0x08087640  size 110
.thumb
.org 0x87640
FUN_08087640:
	push {r4, r5, lr}	@ 00087640 30b5
.org 0x87642
	adds r4, r0, #0	@ 00087642 041c
.org 0x87644
	ldrb r5, [r4, #15]	@ 00087644 e57b
.org 0x87646
	cmp r5, #0	@ 00087646 002d
.org 0x87648
	bne.n 0x8768e	@ 00087648 21d1
.org 0x8764a
	adds r0, #116	@ 0008764a 7430
.org 0x8764c
	ldr r1, [pc, #96]	@ 0008764c 1849
.org 0x8764e
	bl 0x5784	@ 0008764e 7ef799f8
.org 0x87652
	movs r1, #232	@ 00087652 e821
.org 0x87654
	lsls r1, r1, #5	@ 00087654 4901
.org 0x87656
	adds r0, r4, #0	@ 00087656 201c
.org 0x87658
	bl 0x1cf00	@ 00087658 95f752fc
.org 0x8765c
	ldrb r1, [r4, #10]	@ 0008765c a17a
.org 0x8765e
	movs r0, #223	@ 0008765e df20
.org 0x87660
	ands r0, r1	@ 00087660 0840
.org 0x87662
	strb r0, [r4, #10]	@ 00087662 a072
.org 0x87664
	adds r0, r4, #0	@ 00087664 201c
.org 0x87666
	adds r0, #77	@ 00087666 4d30
.org 0x87668
	strb r5, [r0, #0]	@ 00087668 0570
.org 0x8766a
	adds r2, r4, #0	@ 0008766a 221c
.org 0x8766c
	adds r2, #74	@ 0008766c 4a32
.org 0x8766e
	ldrb r1, [r2, #0]	@ 0008766e 1178
.org 0x87670
	movs r0, #33	@ 00087670 2120
.org 0x87672
	negs r0, r0	@ 00087672 4042
.org 0x87674
	ands r0, r1	@ 00087674 0840
.org 0x87676
	strb r0, [r2, #0]	@ 00087676 1070
.org 0x87678
	ldr r0, [r4, #88]	@ 00087678 a06d
.org 0x8767a
	movs r1, #192	@ 0008767a c021
.org 0x8767c
	lsls r1, r1, #4	@ 0008767c 0901
.org 0x8767e
	adds r0, r0, r1	@ 0008767e 4018
.org 0x87680
	str r0, [r4, #88]	@ 00087680 a065
.org 0x87682
	str r5, [r4, #92]	@ 00087682 e565
.org 0x87684
	ldr r0, [pc, #44]	@ 00087684 0b48
.org 0x87686
	str r0, [r4, #96]	@ 00087686 2066
.org 0x87688
	ldrb r0, [r4, #15]	@ 00087688 e07b
.org 0x8768a
	adds r0, #1	@ 0008768a 0130
.org 0x8768c
	strb r0, [r4, #15]	@ 0008768c e073
.org 0x8768e
	adds r0, r4, #0	@ 0008768e 201c
.org 0x87690
	bl 0x1cff0	@ 00087690 95f7aefc
.org 0x87694
	adds r0, r4, #0	@ 00087694 201c
.org 0x87696
	bl 0x88c9c	@ 00087696 01f001fb
.org 0x8769a
	cmp r0, #0	@ 0008769a 0028
.org 0x8769c
	beq.n 0x876a8	@ 0008769c 04d0
.org 0x8769e
	movs r1, #0	@ 0008769e 0021
.org 0x876a0
	movs r0, #3	@ 000876a0 0320
.org 0x876a2
	strb r0, [r4, #13]	@ 000876a2 6073
.org 0x876a4
	strb r1, [r4, #14]	@ 000876a4 a173
.org 0x876a6
	strb r1, [r4, #15]	@ 000876a6 e173
.org 0x876a8
	pop {r4, r5}	@ 000876a8 30bc
.org 0x876aa
	pop {r0}	@ 000876aa 01bc
.org 0x876ac
	bx r0	@ 000876ac 0047
