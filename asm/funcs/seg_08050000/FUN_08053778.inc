@ FUN_08053778  entry 0x08053778  size 62
.thumb
.org 0x53778
FUN_08053778:
	push {r4, lr}	@ 00053778 10b5
.org 0x5377a
	adds r4, r0, #0	@ 0005377a 041c
.org 0x5377c
	ldrb r0, [r4, #15]	@ 0005377c e07b
.org 0x5377e
	cmp r0, #0	@ 0005377e 0028
.org 0x53780
	bne.n 0x53796	@ 00053780 09d1
.org 0x53782
	movs r1, #182	@ 00053782 b621
.org 0x53784
	lsls r1, r1, #8	@ 00053784 0902
.org 0x53786
	adds r0, r4, #0	@ 00053786 201c
.org 0x53788
	bl 0x1cf00	@ 00053788 c9f7bafb
.org 0x5378c
	movs r0, #120	@ 0005378c 7820
.org 0x5378e
	strb r0, [r4, #18]	@ 0005378e a074
.org 0x53790
	ldrb r0, [r4, #15]	@ 00053790 e07b
.org 0x53792
	adds r0, #1	@ 00053792 0130
.org 0x53794
	strb r0, [r4, #15]	@ 00053794 e073
.org 0x53796
	adds r0, r4, #0	@ 00053796 201c
.org 0x53798
	bl 0x1cff0	@ 00053798 c9f72afc
.org 0x5379c
	ldrb r0, [r4, #18]	@ 0005379c a07c
.org 0x5379e
	subs r0, #1	@ 0005379e 0138
.org 0x537a0
	strb r0, [r4, #18]	@ 000537a0 a074
.org 0x537a2
	lsls r0, r0, #24	@ 000537a2 0006
.org 0x537a4
	lsrs r0, r0, #24	@ 000537a4 000e
.org 0x537a6
	cmp r0, #0	@ 000537a6 0028
.org 0x537a8
	bne.n 0x537b0	@ 000537a8 02d1
.org 0x537aa
	strb r0, [r4, #13]	@ 000537aa 6073
.org 0x537ac
	strb r0, [r4, #14]	@ 000537ac a073
.org 0x537ae
	strb r0, [r4, #15]	@ 000537ae e073
.org 0x537b0
	pop {r4}	@ 000537b0 10bc
.org 0x537b2
	pop {r0}	@ 000537b2 01bc
.org 0x537b4
	bx r0	@ 000537b4 0047
