@ FUN_080fdf7c  entry 0x080fdf7c  size 86
.thumb
.org 0xfdf7c
FUN_080fdf7c:
	push {r4, lr}	@ 000fdf7c 10b5
.org 0xfdf7e
	adds r2, r1, #0	@ 000fdf7e 0a1c
.org 0xfdf80
	ldr r4, [r0, #44]	@ 000fdf80 c46a
.org 0xfdf82
	adds r0, #35	@ 000fdf82 2330
.org 0xfdf84
	ldrb r1, [r0, #0]	@ 000fdf84 0178
.org 0xfdf86
	movs r0, #240	@ 000fdf86 f020
.org 0xfdf88
	ands r0, r1	@ 000fdf88 0840
.org 0xfdf8a
	cmp r0, #32	@ 000fdf8a 2028
.org 0xfdf8c
	bne.n 0xfdfc4	@ 000fdf8c 1ad1
.org 0xfdf8e
	ldr r1, [r4, #88]	@ 000fdf8e a16d
.org 0xfdf90
	ldr r0, [r2, #4]	@ 000fdf90 5068
.org 0xfdf92
	subs r2, r1, r0	@ 000fdf92 0a1a
.org 0xfdf94
	cmp r2, #0	@ 000fdf94 002a
.org 0xfdf96
	blt.n 0xfdfa0	@ 000fdf96 03db
.org 0xfdf98
	movs r1, #144	@ 000fdf98 9021
.org 0xfdf9a
	lsls r1, r1, #5	@ 000fdf9a 4901
.org 0xfdf9c
	adds r0, r2, #0	@ 000fdf9c 101c
.org 0xfdf9e
	b.n 0xfdfa6	@ 000fdf9e 02e0
.org 0xfdfa0
	subs r0, r0, r1	@ 000fdfa0 401a
.org 0xfdfa2
	movs r1, #144	@ 000fdfa2 9021
.org 0xfdfa4
	lsls r1, r1, #5	@ 000fdfa4 4901
.org 0xfdfa6
	bl 0x128fb8	@ 000fdfa6 2bf007f8
.org 0xfdfaa
	adds r1, r4, #0	@ 000fdfaa 211c
.org 0xfdfac
	adds r1, #184	@ 000fdfac b831
.org 0xfdfae
	strb r0, [r1, #0]	@ 000fdfae 0870
.org 0xfdfb0
	lsls r0, r0, #24	@ 000fdfb0 0006
.org 0xfdfb2
	asrs r0, r0, #24	@ 000fdfb2 0016
.org 0xfdfb4
	cmp r0, #0	@ 000fdfb4 0028
.org 0xfdfb6
	bge.n 0xfdfbc	@ 000fdfb6 01da
.org 0xfdfb8
	movs r0, #0	@ 000fdfb8 0020
.org 0xfdfba
	b.n 0xfdfc2	@ 000fdfba 02e0
.org 0xfdfbc
	cmp r0, #3	@ 000fdfbc 0328
.org 0xfdfbe
	ble.n 0xfdfc4	@ 000fdfbe 01dd
.org 0xfdfc0
	movs r0, #3	@ 000fdfc0 0320
.org 0xfdfc2
	strb r0, [r1, #0]	@ 000fdfc2 0870
.org 0xfdfc4
	ldrb r1, [r4, #10]	@ 000fdfc4 a17a
.org 0xfdfc6
	movs r0, #1	@ 000fdfc6 0120
.org 0xfdfc8
	orrs r0, r1	@ 000fdfc8 0843
.org 0xfdfca
	strb r0, [r4, #10]	@ 000fdfca a072
.org 0xfdfcc
	pop {r4}	@ 000fdfcc 10bc
.org 0xfdfce
	pop {r0}	@ 000fdfce 01bc
.org 0xfdfd0
	bx r0	@ 000fdfd0 0047
