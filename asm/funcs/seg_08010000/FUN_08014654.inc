@ FUN_08014654  entry 0x08014654  size 84
.thumb
.org 0x14654
FUN_08014654:
	push {r4, lr}	@ 00014654 10b5
.org 0x14656
	adds r4, r0, #0	@ 00014656 041c
.org 0x14658
	movs r3, #0	@ 00014658 0023
.org 0x1465a
	ldr r0, [pc, #68]	@ 0001465a 1148
.org 0x1465c
	ldr r1, [pc, #68]	@ 0001465c 1149
.org 0x1465e
	adds r0, r0, r1	@ 0001465e 4018
.org 0x14660
	ldrb r1, [r0, #0]	@ 00014660 0178
.org 0x14662
	movs r0, #15	@ 00014662 0f20
.org 0x14664
	ands r0, r1	@ 00014664 0840
.org 0x14666
	cmp r0, #2	@ 00014666 0228
.org 0x14668
	beq.n 0x146b4	@ 00014668 24d0
.org 0x1466a
	ldr r2, [r4, #4]	@ 0001466a 6268
.org 0x1466c
	ldr r0, [pc, #56]	@ 0001466c 0e48
.org 0x1466e
	adds r1, r2, r0	@ 0001466e 1118
.org 0x14670
	ldr r0, [pc, #56]	@ 00014670 0e48
.org 0x14672
	cmp r1, r0	@ 00014672 8142
.org 0x14674
	bhi.n 0x1468c	@ 00014674 0ad8
.org 0x14676
	movs r3, #150	@ 00014676 9623
.org 0x14678
	lsls r3, r3, #13	@ 00014678 5b03
.org 0x1467a
	ldr r1, [pc, #52]	@ 0001467a 0d49
.org 0x1467c
	adds r0, r2, r1	@ 0001467c 5018
.org 0x1467e
	asrs r1, r0, #8	@ 0001467e 0112
.org 0x14680
	adds r0, r1, #0	@ 00014680 081c
.org 0x14682
	subs r0, #16	@ 00014682 1038
.org 0x14684
	cmp r0, #143	@ 00014684 8f28
.org 0x14686
	bhi.n 0x1468c	@ 00014686 01d8
.org 0x14688
	lsls r0, r1, #6	@ 00014688 8801
.org 0x1468a
	subs r3, r3, r0	@ 0001468a 1b1a
.org 0x1468c
	ldr r1, [r4, #0]	@ 0001468c 2168
.org 0x1468e
	cmp r1, r3	@ 0001468e 9942
.org 0x14690
	ble.n 0x146b4	@ 00014690 10dd
.org 0x14692
	movs r2, #160	@ 00014692 a022
.org 0x14694
	lsls r2, r2, #8	@ 00014694 1202
.org 0x14696
	adds r0, r3, r2	@ 00014696 9818
.org 0x14698
	cmp r1, r0	@ 00014698 8142
.org 0x1469a
	bge.n 0x146b4	@ 0001469a 0bda
.org 0x1469c
	movs r0, #1	@ 0001469c 0120
.org 0x1469e
	b.n 0x146b6	@ 0001469e 0ae0
.org 0x146a0
	.byte 0xb0,0x0a,0x00,0x02	@ 000146a0 data
.org 0x146a4
	.byte 0x10,0xc0,0x02,0x00	@ 000146a4 data
