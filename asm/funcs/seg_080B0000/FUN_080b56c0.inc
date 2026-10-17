@ FUN_080b56c0  entry 0x080b56c0  size 80
.thumb
.org 0xb56c0
FUN_080b56c0:
	push {r4, lr}	@ 000b56c0 10b5
.org 0xb56c2
	adds r4, r0, #0	@ 000b56c2 041c
.org 0xb56c4
	ldr r0, [pc, #20]	@ 000b56c4 0548
.org 0xb56c6
	ldr r0, [r0, #0]	@ 000b56c6 0068
.org 0xb56c8
	ldr r3, [r4, #84]	@ 000b56c8 636d
.org 0xb56ca
	ldr r1, [r0, #84]	@ 000b56ca 416d
.org 0xb56cc
	subs r2, r3, r1	@ 000b56cc 5a1a
.org 0xb56ce
	cmp r2, #0	@ 000b56ce 002a
.org 0xb56d0
	blt.n 0xb56e4	@ 000b56d0 08db
.org 0xb56d2
	ldr r0, [pc, #12]	@ 000b56d2 0348
.org 0xb56d4
	cmp r2, r0	@ 000b56d4 8242
.org 0xb56d6
	ble.n 0xb56ec	@ 000b56d6 09dd
.org 0xb56d8
	b.n 0xb5714	@ 000b56d8 1ce0
.org 0xb56da
	.byte 0x00	@ 000b56da data
.org 0xb56db
	.byte 0x00	@ 000b56db data
.org 0xb56dc
	.byte 0xf0,0xdb,0x02,0x02	@ 000b56dc data
.org 0xb56e0
	.byte 0xff,0x37,0x00,0x00	@ 000b56e0 data
.org 0xb56e4
	subs r1, r1, r3	@ 000b56e4 c91a
.org 0xb56e6
	ldr r0, [pc, #52]	@ 000b56e6 0d48
.org 0xb56e8
	cmp r1, r0	@ 000b56e8 8142
.org 0xb56ea
	bgt.n 0xb5714	@ 000b56ea 13dc
.org 0xb56ec
	ldr r2, [pc, #48]	@ 000b56ec 0c4a
.org 0xb56ee
	ldr r1, [r2, #0]	@ 000b56ee 1168
.org 0xb56f0
	ldr r0, [pc, #48]	@ 000b56f0 0c48
.org 0xb56f2
	muls r0, r1	@ 000b56f2 4843
.org 0xb56f4
	ldr r1, [pc, #48]	@ 000b56f4 0c49
.org 0xb56f6
	adds r0, r0, r1	@ 000b56f6 4018
.org 0xb56f8
	lsls r0, r0, #1	@ 000b56f8 4000
.org 0xb56fa
	lsrs r1, r0, #1	@ 000b56fa 4108
.org 0xb56fc
	str r1, [r2, #0]	@ 000b56fc 1160
.org 0xb56fe
	lsrs r2, r0, #17	@ 000b56fe 420c
.org 0xb5700
	movs r0, #7	@ 000b5700 0720
.org 0xb5702
	ands r2, r0	@ 000b5702 0240
.org 0xb5704
	cmp r2, #0	@ 000b5704 002a
.org 0xb5706
	bne.n 0xb5714	@ 000b5706 05d1
.org 0xb5708
	movs r1, #1	@ 000b5708 0121
.org 0xb570a
	strb r1, [r4, #13]	@ 000b570a 6173
.org 0xb570c
	strb r2, [r4, #14]	@ 000b570c a273
.org 0xb570e
	adds r0, r4, #0	@ 000b570e 201c
