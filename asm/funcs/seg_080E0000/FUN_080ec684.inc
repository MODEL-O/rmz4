@ FUN_080ec684  entry 0x080ec684  size 78
.thumb
.org 0xec684
FUN_080ec684:
	push {r4, r5, r6, lr}	@ 000ec684 70b5
.org 0xec686
	adds r4, r0, #0	@ 000ec686 041c
.org 0xec688
	ldrb r0, [r4, #15]	@ 000ec688 e07b
.org 0xec68a
	cmp r0, #0	@ 000ec68a 0028
.org 0xec68c
	bne.n 0xec69e	@ 000ec68c 07d1
.org 0xec68e
	movs r1, #176	@ 000ec68e b021
.org 0xec690
	lsls r1, r1, #2	@ 000ec690 8900
.org 0xec692
	movs r0, #6	@ 000ec692 0620
.org 0xec694
	bl 0x249c	@ 000ec694 15f702ff
.org 0xec698
	ldrb r0, [r4, #15]	@ 000ec698 e07b
.org 0xec69a
	adds r0, #1	@ 000ec69a 0130
.org 0xec69c
	strb r0, [r4, #15]	@ 000ec69c e073
.org 0xec69e
	movs r0, #6	@ 000ec69e 0620
.org 0xec6a0
	bl 0x25d8	@ 000ec6a0 15f79aff
.org 0xec6a4
	lsls r0, r0, #24	@ 000ec6a4 0006
.org 0xec6a6
	lsrs r6, r0, #24	@ 000ec6a6 060e
.org 0xec6a8
	adds r0, r4, #0	@ 000ec6a8 201c
.org 0xec6aa
	bl 0x1cff0	@ 000ec6aa 30f7a1fc
.org 0xec6ae
	adds r0, r4, #0	@ 000ec6ae 201c
.org 0xec6b0
	adds r0, #180	@ 000ec6b0 b430
.org 0xec6b2
	ldrb r5, [r0, #0]	@ 000ec6b2 0578
.org 0xec6b4
	cmp r5, #0	@ 000ec6b4 002d
.org 0xec6b6
	bne.n 0xec6cc	@ 000ec6b6 09d1
.org 0xec6b8
	subs r0, r6, #3	@ 000ec6b8 f01e
.org 0xec6ba
	cmp r0, #1	@ 000ec6ba 0128
.org 0xec6bc
	bhi.n 0xec6cc	@ 000ec6bc 06d8
.org 0xec6be
	movs r0, #6	@ 000ec6be 0620
.org 0xec6c0
	bl 0x2624	@ 000ec6c0 15f7b0ff
.org 0xec6c4
	movs r0, #2	@ 000ec6c4 0220
.org 0xec6c6
	strb r0, [r4, #13]	@ 000ec6c6 6073
.org 0xec6c8
	strb r5, [r4, #14]	@ 000ec6c8 a573
.org 0xec6ca
	strb r5, [r4, #15]	@ 000ec6ca e573
.org 0xec6cc
	pop {r4, r5, r6}	@ 000ec6cc 70bc
.org 0xec6ce
	pop {r0}	@ 000ec6ce 01bc
.org 0xec6d0
	bx r0	@ 000ec6d0 0047
