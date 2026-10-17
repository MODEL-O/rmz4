@ FUN_08068768  entry 0x08068768  size 100
.thumb
.org 0x68768
FUN_08068768:
	push {r4, lr}	@ 00068768 10b5
.org 0x6876a
	adds r4, r0, #0	@ 0006876a 041c
.org 0x6876c
	ldrb r0, [r4, #14]	@ 0006876c a07b
.org 0x6876e
	cmp r0, #0	@ 0006876e 0028
.org 0x68770
	bne.n 0x6878e	@ 00068770 0dd1
.org 0x68772
	ldr r1, [pc, #76]	@ 00068772 1349
.org 0x68774
	adds r0, r4, #0	@ 00068774 201c
.org 0x68776
	bl 0x1cf00	@ 00068776 b4f7c3fb
.org 0x6877a
	adds r0, r4, #0	@ 0006877a 201c
.org 0x6877c
	adds r0, #116	@ 0006877c 7430
.org 0x6877e
	ldr r1, [pc, #68]	@ 0006877e 1149
.org 0x68780
	bl 0x5784	@ 00068780 9df700f8
.org 0x68784
	movs r0, #32	@ 00068784 2020
.org 0x68786
	strb r0, [r4, #18]	@ 00068786 a074
.org 0x68788
	ldrb r0, [r4, #14]	@ 00068788 a07b
.org 0x6878a
	adds r0, #1	@ 0006878a 0130
.org 0x6878c
	strb r0, [r4, #14]	@ 0006878c a073
.org 0x6878e
	adds r0, r4, #0	@ 0006878e 201c
.org 0x68790
	bl 0x1cff0	@ 00068790 b4f72efc
.org 0x68794
	adds r0, r4, #0	@ 00068794 201c
.org 0x68796
	adds r0, #115	@ 00068796 7330
.org 0x68798
	ldrb r3, [r0, #0]	@ 00068798 0378
.org 0x6879a
	cmp r3, #3	@ 0006879a 032b
.org 0x6879c
	bne.n 0x687da	@ 0006879c 1dd1
.org 0x6879e
	ldr r2, [pc, #40]	@ 0006879e 0a4a
.org 0x687a0
	ldr r1, [r2, #0]	@ 000687a0 1168
.org 0x687a2
	ldr r0, [pc, #40]	@ 000687a2 0a48
.org 0x687a4
	muls r0, r1	@ 000687a4 4843
.org 0x687a6
	ldr r1, [pc, #40]	@ 000687a6 0a49
.org 0x687a8
	adds r0, r0, r1	@ 000687a8 4018
.org 0x687aa
	lsls r0, r0, #1	@ 000687aa 4000
.org 0x687ac
	lsrs r1, r0, #1	@ 000687ac 4108
.org 0x687ae
	str r1, [r2, #0]	@ 000687ae 1160
.org 0x687b0
	lsrs r0, r0, #17	@ 000687b0 400c
.org 0x687b2
	movs r1, #1	@ 000687b2 0121
.org 0x687b4
	ands r0, r1	@ 000687b4 0840
.org 0x687b6
	cmp r0, #0	@ 000687b6 0028
.org 0x687b8
	beq.n 0x687d4	@ 000687b8 0cd0
.org 0x687ba
	movs r0, #13	@ 000687ba 0d20
.org 0x687bc
	strb r0, [r4, #13]	@ 000687bc 6073
.org 0x687be
	b.n 0x687d6	@ 000687be 0ae0
.org 0x687c0
	.byte 0x1d,0xa9,0x00,0x00	@ 000687c0 data
.org 0x687c4
	.byte 0xfc,0xb1,0x85,0x08	@ 000687c4 data
.org 0x687c8
	.byte 0x38,0xdc,0x02,0x02	@ 000687c8 data
