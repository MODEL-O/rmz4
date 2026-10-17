@ FUN_080e1978  entry 0x080e1978  size 50
.thumb
.org 0xe1978
FUN_080e1978:
	push {r4, lr}	@ 000e1978 10b5
.org 0xe197a
	adds r4, r0, #0	@ 000e197a 041c
.org 0xe197c
	ldrb r0, [r4, #13]	@ 000e197c 607b
.org 0xe197e
	cmp r0, #0	@ 000e197e 0028
.org 0xe1980
	bne.n 0xe1998	@ 000e1980 0ad1
.org 0xe1982
	adds r0, r4, #0	@ 000e1982 201c
.org 0xe1984
	adds r0, #118	@ 000e1984 7630
.org 0xe1986
	ldrh r0, [r0, #0]	@ 000e1986 0088
.org 0xe1988
	movs r1, #12	@ 000e1988 0c21
.org 0xe198a
	orrs r1, r0	@ 000e198a 0143
.org 0xe198c
	adds r0, r4, #0	@ 000e198c 201c
.org 0xe198e
	bl 0x1cf00	@ 000e198e 3bf7b7fa
.org 0xe1992
	ldrb r0, [r4, #13]	@ 000e1992 607b
.org 0xe1994
	adds r0, #1	@ 000e1994 0130
.org 0xe1996
	strb r0, [r4, #13]	@ 000e1996 6073
.org 0xe1998
	adds r0, r4, #0	@ 000e1998 201c
.org 0xe199a
	bl 0xe19e0	@ 000e199a 00f021f8
.org 0xe199e
	adds r0, r4, #0	@ 000e199e 201c
.org 0xe19a0
	bl 0xe1a28	@ 000e19a0 00f042f8
.org 0xe19a4
	pop {r4}	@ 000e19a4 10bc
.org 0xe19a6
	pop {r0}	@ 000e19a6 01bc
.org 0xe19a8
	bx r0	@ 000e19a8 0047
