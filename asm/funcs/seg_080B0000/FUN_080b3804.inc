@ FUN_080b3804  entry 0x080b3804  size 24
.thumb
.org 0xb3804
FUN_080b3804:
	push {lr}	@ 000b3804 00b5
.org 0xb3806
	adds r1, r0, #0	@ 000b3806 011c
.org 0xb3808
	ldrb r0, [r1, #19]	@ 000b3808 c87c
.org 0xb380a
	cmp r0, #0	@ 000b380a 0028
.org 0xb380c
	beq.n 0xb3816	@ 000b380c 03d0
.org 0xb380e
	subs r0, #1	@ 000b380e 0138
.org 0xb3810
	strb r0, [r1, #19]	@ 000b3810 c874
.org 0xb3812
	movs r0, #0	@ 000b3812 0020
.org 0xb3814
	b.n 0xb3818	@ 000b3814 00e0
.org 0xb3816
	movs r0, #1	@ 000b3816 0120
.org 0xb3818
	pop {r1}	@ 000b3818 02bc
.org 0xb381a
	bx r1	@ 000b381a 0847
