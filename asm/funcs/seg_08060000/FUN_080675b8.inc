@ FUN_080675b8  entry 0x080675b8  size 62
.thumb
.org 0x675b8
FUN_080675b8:
	push {r4, lr}	@ 000675b8 10b5
.org 0x675ba
	adds r4, r0, #0	@ 000675ba 041c
.org 0x675bc
	ldrb r0, [r4, #14]	@ 000675bc a07b
.org 0x675be
	cmp r0, #0	@ 000675be 0028
.org 0x675c0
	bne.n 0x675d4	@ 000675c0 08d1
.org 0x675c2
	ldr r1, [pc, #52]	@ 000675c2 0d49
.org 0x675c4
	adds r0, r4, #0	@ 000675c4 201c
.org 0x675c6
	bl 0x1cf00	@ 000675c6 b5f79bfc
.org 0x675ca
	movs r0, #64	@ 000675ca 4020
.org 0x675cc
	strb r0, [r4, #18]	@ 000675cc a074
.org 0x675ce
	ldrb r0, [r4, #14]	@ 000675ce a07b
.org 0x675d0
	adds r0, #1	@ 000675d0 0130
.org 0x675d2
	strb r0, [r4, #14]	@ 000675d2 a073
.org 0x675d4
	adds r0, r4, #0	@ 000675d4 201c
.org 0x675d6
	bl 0x1cff0	@ 000675d6 b5f70bfd
.org 0x675da
	ldrb r0, [r4, #18]	@ 000675da a07c
.org 0x675dc
	subs r0, #1	@ 000675dc 0138
.org 0x675de
	strb r0, [r4, #18]	@ 000675de a074
.org 0x675e0
	lsls r0, r0, #24	@ 000675e0 0006
.org 0x675e2
	lsrs r0, r0, #24	@ 000675e2 000e
.org 0x675e4
	cmp r0, #255	@ 000675e4 ff28
.org 0x675e6
	bne.n 0x675f0	@ 000675e6 03d1
.org 0x675e8
	movs r0, #12	@ 000675e8 0c20
.org 0x675ea
	strb r0, [r4, #13]	@ 000675ea 6073
.org 0x675ec
	movs r0, #0	@ 000675ec 0020
.org 0x675ee
	strb r0, [r4, #14]	@ 000675ee a073
.org 0x675f0
	pop {r4}	@ 000675f0 10bc
.org 0x675f2
	pop {r0}	@ 000675f2 01bc
.org 0x675f4
	bx r0	@ 000675f4 0047
