@ FUN_080ec6d4  entry 0x080ec6d4  size 70
.thumb
.org 0xec6d4
FUN_080ec6d4:
	push {r4, r5, lr}	@ 000ec6d4 30b5
.org 0xec6d6
	adds r5, r0, #0	@ 000ec6d6 051c
.org 0xec6d8
	ldrb r0, [r5, #15]	@ 000ec6d8 e87b
.org 0xec6da
	cmp r0, #0	@ 000ec6da 0028
.org 0xec6dc
	bne.n 0xec6ee	@ 000ec6dc 07d1
.org 0xec6de
	movs r1, #176	@ 000ec6de b021
.org 0xec6e0
	lsls r1, r1, #2	@ 000ec6e0 8900
.org 0xec6e2
	movs r0, #7	@ 000ec6e2 0720
.org 0xec6e4
	bl 0x249c	@ 000ec6e4 15f7dafe
.org 0xec6e8
	ldrb r0, [r5, #15]	@ 000ec6e8 e87b
.org 0xec6ea
	adds r0, #1	@ 000ec6ea 0130
.org 0xec6ec
	strb r0, [r5, #15]	@ 000ec6ec e873
.org 0xec6ee
	movs r0, #7	@ 000ec6ee 0720
.org 0xec6f0
	bl 0x25d8	@ 000ec6f0 15f772ff
.org 0xec6f4
	adds r4, r0, #0	@ 000ec6f4 041c
.org 0xec6f6
	lsls r4, r4, #24	@ 000ec6f6 2406
.org 0xec6f8
	lsrs r4, r4, #24	@ 000ec6f8 240e
.org 0xec6fa
	adds r0, r5, #0	@ 000ec6fa 281c
.org 0xec6fc
	bl 0x1cff0	@ 000ec6fc 30f778fc
.org 0xec700
	subs r4, #3	@ 000ec700 033c
.org 0xec702
	cmp r4, #1	@ 000ec702 012c
.org 0xec704
	bhi.n 0xec714	@ 000ec704 06d8
.org 0xec706
	movs r0, #7	@ 000ec706 0720
.org 0xec708
	bl 0x2624	@ 000ec708 15f78cff
.org 0xec70c
	movs r0, #0	@ 000ec70c 0020
.org 0xec70e
	strb r0, [r5, #13]	@ 000ec70e 6873
.org 0xec710
	strb r0, [r5, #14]	@ 000ec710 a873
.org 0xec712
	strb r0, [r5, #15]	@ 000ec712 e873
.org 0xec714
	pop {r4, r5}	@ 000ec714 30bc
.org 0xec716
	pop {r0}	@ 000ec716 01bc
.org 0xec718
	bx r0	@ 000ec718 0047
