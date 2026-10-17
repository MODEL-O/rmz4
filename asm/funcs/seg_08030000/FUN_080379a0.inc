@ FUN_080379a0  entry 0x080379a0  size 78
.thumb
.org 0x379a0
FUN_080379a0:
	push {r4, r5, lr}	@ 000379a0 30b5
.org 0x379a2
	adds r4, r0, #0	@ 000379a2 041c
.org 0x379a4
	movs r0, #129	@ 000379a4 8120
.org 0x379a6
	lsls r0, r0, #1	@ 000379a6 4000
.org 0x379a8
	adds r5, r4, r0	@ 000379a8 2518
.org 0x379aa
	ldrb r0, [r5, #0]	@ 000379aa 2878
.org 0x379ac
	cmp r0, #0	@ 000379ac 0028
.org 0x379ae
	bne.n 0x379c8	@ 000379ae 0bd1
.org 0x379b0
	ldr r1, [pc, #60]	@ 000379b0 0f49
.org 0x379b2
	adds r0, r4, #0	@ 000379b2 201c
.org 0x379b4
	bl 0x1cf00	@ 000379b4 e5f7a4fa
.org 0x379b8
	movs r0, #169	@ 000379b8 a920
.org 0x379ba
	lsls r0, r0, #1	@ 000379ba 4000
.org 0x379bc
	adds r1, r4, r0	@ 000379bc 2118
.org 0x379be
	movs r0, #14	@ 000379be 0e20
.org 0x379c0
	strb r0, [r1, #0]	@ 000379c0 0870
.org 0x379c2
	ldrb r0, [r5, #0]	@ 000379c2 2878
.org 0x379c4
	adds r0, #1	@ 000379c4 0130
.org 0x379c6
	strb r0, [r5, #0]	@ 000379c6 2870
.org 0x379c8
	movs r0, #169	@ 000379c8 a920
.org 0x379ca
	lsls r0, r0, #1	@ 000379ca 4000
.org 0x379cc
	adds r1, r4, r0	@ 000379cc 2118
.org 0x379ce
	ldrb r0, [r1, #0]	@ 000379ce 0878
.org 0x379d0
	subs r0, #1	@ 000379d0 0138
.org 0x379d2
	strb r0, [r1, #0]	@ 000379d2 0870
.org 0x379d4
	lsls r0, r0, #24	@ 000379d4 0006
.org 0x379d6
	lsrs r0, r0, #24	@ 000379d6 000e
.org 0x379d8
	cmp r0, #255	@ 000379d8 ff28
.org 0x379da
	bne.n 0x379e8	@ 000379da 05d1
.org 0x379dc
	ldr r0, [pc, #20]	@ 000379dc 0548
.org 0x379de
	adds r1, r4, r0	@ 000379de 2118
.org 0x379e0
	movs r0, #4	@ 000379e0 0420
.org 0x379e2
	strb r0, [r1, #0]	@ 000379e2 0870
.org 0x379e4
	movs r0, #0	@ 000379e4 0020
.org 0x379e6
	strb r0, [r5, #0]	@ 000379e6 2870
.org 0x379e8
	pop {r4, r5}	@ 000379e8 30bc
.org 0x379ea
	pop {r0}	@ 000379ea 01bc
.org 0x379ec
	bx r0	@ 000379ec 0047
