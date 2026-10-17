@ FUN_080c16b0  entry 0x080c16b0  size 80
.thumb
.org 0xc16b0
FUN_080c16b0:
	push {r4, lr}	@ 000c16b0 10b5
.org 0xc16b2
	adds r4, r0, #0	@ 000c16b2 041c
.org 0xc16b4
	ldrb r2, [r4, #16]	@ 000c16b4 227c
.org 0xc16b6
	ldrb r0, [r4, #15]	@ 000c16b6 e07b
.org 0xc16b8
	cmp r0, #0	@ 000c16b8 0028
.org 0xc16ba
	bne.n 0xc16d4	@ 000c16ba 0bd1
.org 0xc16bc
	ldr r1, [pc, #64]	@ 000c16bc 1049
.org 0xc16be
	lsls r0, r2, #2	@ 000c16be 9000
.org 0xc16c0
	adds r0, r0, r1	@ 000c16c0 4018
.org 0xc16c2
	ldrh r1, [r0, #0]	@ 000c16c2 0188
.org 0xc16c4
	adds r0, r4, #0	@ 000c16c4 201c
.org 0xc16c6
	bl 0x1cf00	@ 000c16c6 5bf71bfc
.org 0xc16ca
	movs r0, #10	@ 000c16ca 0a20
.org 0xc16cc
	strb r0, [r4, #18]	@ 000c16cc a074
.org 0xc16ce
	ldrb r0, [r4, #15]	@ 000c16ce e07b
.org 0xc16d0
	adds r0, #1	@ 000c16d0 0130
.org 0xc16d2
	strb r0, [r4, #15]	@ 000c16d2 e073
.org 0xc16d4
	adds r0, r4, #0	@ 000c16d4 201c
.org 0xc16d6
	bl 0x1cff0	@ 000c16d6 5bf78bfc
.org 0xc16da
	adds r0, r4, #0	@ 000c16da 201c
.org 0xc16dc
	adds r0, #116	@ 000c16dc 7430
.org 0xc16de
	ldr r1, [pc, #36]	@ 000c16de 0949
.org 0xc16e0
	bl 0x5784	@ 000c16e0 44f750f8
.org 0xc16e4
	ldrb r0, [r4, #18]	@ 000c16e4 a07c
.org 0xc16e6
	subs r0, #1	@ 000c16e6 0138
.org 0xc16e8
	strb r0, [r4, #18]	@ 000c16e8 a074
.org 0xc16ea
	lsls r0, r0, #24	@ 000c16ea 0006
.org 0xc16ec
	lsrs r1, r0, #24	@ 000c16ec 010e
.org 0xc16ee
	cmp r1, #0	@ 000c16ee 0029
.org 0xc16f0
	bne.n 0xc16fa	@ 000c16f0 03d1
.org 0xc16f2
	movs r0, #2	@ 000c16f2 0220
.org 0xc16f4
	strb r0, [r4, #13]	@ 000c16f4 6073
.org 0xc16f6
	strb r1, [r4, #14]	@ 000c16f6 a173
.org 0xc16f8
	strb r1, [r4, #15]	@ 000c16f8 e173
.org 0xc16fa
	pop {r4}	@ 000c16fa 10bc
.org 0xc16fc
	pop {r0}	@ 000c16fc 01bc
.org 0xc16fe
	bx r0	@ 000c16fe 0047
