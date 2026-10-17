@ FUN_080ea978  entry 0x080ea978  size 54
.thumb
.org 0xea978
FUN_080ea978:
	push {r4, lr}	@ 000ea978 10b5
.org 0xea97a
	adds r4, r0, #0	@ 000ea97a 041c
.org 0xea97c
	ldrb r0, [r4, #9]	@ 000ea97c 607a
.org 0xea97e
	cmp r0, #2	@ 000ea97e 0228
.org 0xea980
	bne.n 0xea9a8	@ 000ea980 12d1
.org 0xea982
	adds r1, r4, #0	@ 000ea982 211c
.org 0xea984
	adds r1, #184	@ 000ea984 b831
.org 0xea986
	ldrb r0, [r1, #0]	@ 000ea986 0878
.org 0xea988
	cmp r0, #203	@ 000ea988 cb28
.org 0xea98a
	beq.n 0xea9a8	@ 000ea98a 0dd0
.org 0xea98c
	movs r0, #203	@ 000ea98c cb20
.org 0xea98e
	strb r0, [r1, #0]	@ 000ea98e 0870
.org 0xea990
	movs r2, #203	@ 000ea990 cb22
.org 0xea992
	lsls r2, r2, #8	@ 000ea992 1202
.org 0xea994
	adds r0, r4, #0	@ 000ea994 201c
.org 0xea996
	adds r0, #112	@ 000ea996 7030
.org 0xea998
	ldrb r1, [r0, #0]	@ 000ea998 0178
.org 0xea99a
	orrs r1, r2	@ 000ea99a 1143
.org 0xea99c
	adds r0, r4, #0	@ 000ea99c 201c
.org 0xea99e
	bl 0x1cf00	@ 000ea99e 32f7affa
.org 0xea9a2
	adds r0, r4, #0	@ 000ea9a2 201c
.org 0xea9a4
	bl 0x1cff0	@ 000ea9a4 32f724fb
.org 0xea9a8
	pop {r4}	@ 000ea9a8 10bc
.org 0xea9aa
	pop {r0}	@ 000ea9aa 01bc
.org 0xea9ac
	bx r0	@ 000ea9ac 0047
