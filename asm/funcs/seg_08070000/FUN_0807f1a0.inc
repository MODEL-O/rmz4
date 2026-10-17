@ FUN_0807f1a0  entry 0x0807f1a0  size 76
.thumb
.org 0x7f1a0
FUN_0807f1a0:
	push {r4, r5, lr}	@ 0007f1a0 30b5
.org 0x7f1a2
	adds r4, r0, #0	@ 0007f1a2 041c
.org 0x7f1a4
	ldrb r5, [r4, #14]	@ 0007f1a4 a57b
.org 0x7f1a6
	cmp r5, #0	@ 0007f1a6 002d
.org 0x7f1a8
	bne.n 0x7f1cc	@ 0007f1a8 10d1
.org 0x7f1aa
	ldrb r0, [r4, #30]	@ 0007f1aa a07f
.org 0x7f1ac
	lsls r0, r0, #8	@ 0007f1ac 0002
.org 0x7f1ae
	adds r1, r4, #0	@ 0007f1ae 211c
.org 0x7f1b0
	adds r1, #112	@ 0007f1b0 7031
.org 0x7f1b2
	ldrb r1, [r1, #0]	@ 0007f1b2 0978
.org 0x7f1b4
	orrs r0, r1	@ 0007f1b4 0843
.org 0x7f1b6
	movs r1, #200	@ 0007f1b6 c821
.org 0x7f1b8
	lsls r1, r1, #8	@ 0007f1b8 0902
.org 0x7f1ba
	cmp r0, r1	@ 0007f1ba 8842
.org 0x7f1bc
	beq.n 0x7f1c4	@ 0007f1bc 02d0
.org 0x7f1be
	adds r0, r4, #0	@ 0007f1be 201c
.org 0x7f1c0
	bl 0x1cf00	@ 0007f1c0 9df79efe
.org 0x7f1c4
	ldrb r0, [r4, #14]	@ 0007f1c4 a07b
.org 0x7f1c6
	adds r0, #1	@ 0007f1c6 0130
.org 0x7f1c8
	strb r0, [r4, #14]	@ 0007f1c8 a073
.org 0x7f1ca
	strb r5, [r4, #15]	@ 0007f1ca e573
.org 0x7f1cc
	adds r0, r4, #0	@ 0007f1cc 201c
.org 0x7f1ce
	bl 0x1cff0	@ 0007f1ce 9df70fff
.org 0x7f1d2
	ldr r0, [r4, #24]	@ 0007f1d2 a069
.org 0x7f1d4
	ldrb r1, [r0, #9]	@ 0007f1d4 417a
.org 0x7f1d6
	movs r2, #1	@ 0007f1d6 0122
.org 0x7f1d8
	adds r0, r2, #0	@ 0007f1d8 101c
.org 0x7f1da
	ands r0, r1	@ 0007f1da 0840
.org 0x7f1dc
	cmp r0, #0	@ 0007f1dc 0028
.org 0x7f1de
	beq.n 0x7f1e6	@ 0007f1de 02d0
.org 0x7f1e0
	movs r0, #0	@ 0007f1e0 0020
.org 0x7f1e2
	strb r2, [r4, #13]	@ 0007f1e2 6273
.org 0x7f1e4
	strb r0, [r4, #14]	@ 0007f1e4 a073
.org 0x7f1e6
	pop {r4, r5}	@ 0007f1e6 30bc
.org 0x7f1e8
	pop {r0}	@ 0007f1e8 01bc
.org 0x7f1ea
	bx r0	@ 0007f1ea 0047
