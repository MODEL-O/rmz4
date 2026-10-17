@ FUN_080378b8  entry 0x080378b8  size 50
.thumb
.org 0x378b8
FUN_080378b8:
	push {r4, lr}	@ 000378b8 10b5
.org 0x378ba
	adds r4, r0, #0	@ 000378ba 041c
.org 0x378bc
	movs r1, #176	@ 000378bc b021
.org 0x378be
	lsls r1, r1, #6	@ 000378be 8901
.org 0x378c0
	bl 0x1cf00	@ 000378c0 e5f71efb
.org 0x378c4
	ldr r0, [pc, #36]	@ 000378c4 0948
.org 0x378c6
	adds r1, r4, r0	@ 000378c6 2118
.org 0x378c8
	movs r0, #0	@ 000378c8 0020
.org 0x378ca
	strb r0, [r1, #0]	@ 000378ca 0870
.org 0x378cc
	movs r0, #169	@ 000378cc a920
.org 0x378ce
	lsls r0, r0, #1	@ 000378ce 4000
.org 0x378d0
	adds r1, r4, r0	@ 000378d0 2118
.org 0x378d2
	movs r0, #4	@ 000378d2 0420
.org 0x378d4
	strb r0, [r1, #0]	@ 000378d4 0870
.org 0x378d6
	adds r0, #253	@ 000378d6 fd30
.org 0x378d8
	adds r1, r4, r0	@ 000378d8 2118
.org 0x378da
	movs r0, #1	@ 000378da 0120
.org 0x378dc
	strb r0, [r1, #0]	@ 000378dc 0870
.org 0x378de
	adds r0, r4, #0	@ 000378de 201c
.org 0x378e0
	bl 0x378f0	@ 000378e0 00f006f8
.org 0x378e4
	pop {r4}	@ 000378e4 10bc
.org 0x378e6
	pop {r0}	@ 000378e6 01bc
.org 0x378e8
	bx r0	@ 000378e8 0047
