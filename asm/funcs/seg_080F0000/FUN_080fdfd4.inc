@ FUN_080fdfd4  entry 0x080fdfd4  size 74
.thumb
.org 0xfdfd4
FUN_080fdfd4:
	push {r4, lr}	@ 000fdfd4 10b5
.org 0xfdfd6
	ldr r0, [pc, #72]	@ 000fdfd6 1248
.org 0xfdfd8
	ldr r0, [r0, #0]	@ 000fdfd8 0068
.org 0xfdfda
	bl 0x5500	@ 000fdfda 07f791fa
.org 0xfdfde
	adds r4, r0, #0	@ 000fdfde 041c
.org 0xfdfe0
	cmp r4, #0	@ 000fdfe0 002c
.org 0xfdfe2
	beq.n 0xfe016	@ 000fdfe2 18d0
.org 0xfdfe4
	adds r1, r4, #0	@ 000fdfe4 211c
.org 0xfdfe6
	adds r1, #37	@ 000fdfe6 2531
.org 0xfdfe8
	movs r3, #0	@ 000fdfe8 0023
.org 0xfdfea
	movs r0, #30	@ 000fdfea 1e20
.org 0xfdfec
	strb r0, [r1, #0]	@ 000fdfec 0870
.org 0xfdfee
	ldr r0, [pc, #52]	@ 000fdfee 0d48
.org 0xfdff0
	movs r1, #47	@ 000fdff0 2f21
.org 0xfdff2
	strb r1, [r4, #9]	@ 000fdff2 6172
.org 0xfdff4
	adds r0, #188	@ 000fdff4 bc30
.org 0xfdff6
	ldr r0, [r0, #0]	@ 000fdff6 0068
.org 0xfdff8
	ldr r0, [r0, #0]	@ 000fdff8 0068
.org 0xfdffa
	str r0, [r4, #20]	@ 000fdffa 6061
.org 0xfdffc
	movs r2, #0	@ 000fdffc 0022
.org 0xfdffe
	strh r3, [r4, #32]	@ 000fdffe 2384
.org 0xfe000
	adds r0, r4, #0	@ 000fe000 201c
.org 0xfe002
	adds r0, #34	@ 000fe002 2230
.org 0xfe004
	strb r2, [r0, #0]	@ 000fe004 0270
.org 0xfe006
	ldrb r1, [r4, #11]	@ 000fe006 e17a
.org 0xfe008
	movs r0, #16	@ 000fe008 1020
.org 0xfe00a
	orrs r0, r1	@ 000fe00a 0843
.org 0xfe00c
	strb r0, [r4, #11]	@ 000fe00c e072
.org 0xfe00e
	ldrb r0, [r4, #28]	@ 000fe00e 207f
.org 0xfe010
	strb r0, [r4, #29]	@ 000fe010 6077
.org 0xfe012
	strb r2, [r4, #16]	@ 000fe012 2274
.org 0xfe014
	strb r2, [r4, #17]	@ 000fe014 6274
.org 0xfe016
	adds r0, r4, #0	@ 000fe016 201c
.org 0xfe018
	pop {r4}	@ 000fe018 10bc
.org 0xfe01a
	pop {r1}	@ 000fe01a 02bc
.org 0xfe01c
	bx r1	@ 000fe01c 0847
