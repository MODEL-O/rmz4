@ FUN_080523c0  entry 0x080523c0  size 54
.thumb
.org 0x523c0
FUN_080523c0:
	push {r4, lr}	@ 000523c0 10b5
.org 0x523c2
	adds r4, r0, #0	@ 000523c2 041c
.org 0x523c4
	ldrb r0, [r4, #14]	@ 000523c4 a07b
.org 0x523c6
	cmp r0, #0	@ 000523c6 0028
.org 0x523c8
	bne.n 0x523d8	@ 000523c8 06d1
.org 0x523ca
	ldr r1, [pc, #44]	@ 000523ca 0b49
.org 0x523cc
	adds r0, r4, #0	@ 000523cc 201c
.org 0x523ce
	bl 0x1cf00	@ 000523ce caf797fd
.org 0x523d2
	ldrb r0, [r4, #14]	@ 000523d2 a07b
.org 0x523d4
	adds r0, #1	@ 000523d4 0130
.org 0x523d6
	strb r0, [r4, #14]	@ 000523d6 a073
.org 0x523d8
	adds r0, r4, #0	@ 000523d8 201c
.org 0x523da
	bl 0x1cff0	@ 000523da caf709fe
.org 0x523de
	adds r0, r4, #0	@ 000523de 201c
.org 0x523e0
	adds r0, #115	@ 000523e0 7330
.org 0x523e2
	ldrb r0, [r0, #0]	@ 000523e2 0078
.org 0x523e4
	cmp r0, #3	@ 000523e4 0328
.org 0x523e6
	bne.n 0x523f0	@ 000523e6 03d1
.org 0x523e8
	movs r1, #0	@ 000523e8 0021
.org 0x523ea
	movs r0, #22	@ 000523ea 1620
.org 0x523ec
	strb r0, [r4, #13]	@ 000523ec 6073
.org 0x523ee
	strb r1, [r4, #14]	@ 000523ee a173
.org 0x523f0
	pop {r4}	@ 000523f0 10bc
.org 0x523f2
	pop {r0}	@ 000523f2 01bc
.org 0x523f4
	bx r0	@ 000523f4 0047
