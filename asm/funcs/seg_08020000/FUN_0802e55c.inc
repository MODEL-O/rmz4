@ FUN_0802e55c  entry 0x0802e55c  size 198
.thumb
.org 0x2e55c
FUN_0802e55c:
	push {r4, r5, r6, r7, lr}	@ 0002e55c f0b5
.org 0x2e55e
	mov r7, sl	@ 0002e55e 5746
.org 0x2e560
	mov r6, r9	@ 0002e560 4e46
.org 0x2e562
	mov r5, r8	@ 0002e562 4546
.org 0x2e564
	push {r5, r6, r7}	@ 0002e564 e0b4
.org 0x2e566
	mov r8, r0	@ 0002e566 8046
.org 0x2e568
	adds r7, r1, #0	@ 0002e568 0f1c
.org 0x2e56a
	mov sl, r2	@ 0002e56a 9246
.org 0x2e56c
	movs r6, #0	@ 0002e56c 0026
.org 0x2e56e
	movs r0, #220	@ 0002e56e dc20
.org 0x2e570
	lsls r0, r0, #1	@ 0002e570 4000
.org 0x2e572
	add r0, r8	@ 0002e572 4044
.org 0x2e574
	ldrb r0, [r0, #0]	@ 0002e574 0078
.org 0x2e576
	cmp r6, r0	@ 0002e576 8642
.org 0x2e578
	bcs.n 0x2e62a	@ 0002e578 57d2
.org 0x2e57a
	ldr r0, [pc, #124]	@ 0002e57a 1f48
.org 0x2e57c
	mov r9, r0	@ 0002e57c 8146
.org 0x2e57e
	movs r0, #196	@ 0002e57e c420
.org 0x2e580
	lsls r0, r0, #1	@ 0002e580 4000
.org 0x2e582
	add r0, r8	@ 0002e582 4044
.org 0x2e584
	adds r0, r0, r6	@ 0002e584 8019
.org 0x2e586
	ldrb r1, [r0, #0]	@ 0002e586 0178
.org 0x2e588
	lsls r0, r1, #1	@ 0002e588 4800
.org 0x2e58a
	adds r0, r0, r1	@ 0002e58a 4018
.org 0x2e58c
	lsls r2, r0, #3	@ 0002e58c c200
.org 0x2e58e
	movs r0, #238	@ 0002e58e ee20
.org 0x2e590
	lsls r0, r0, #1	@ 0002e590 4000
.org 0x2e592
	add r0, r9	@ 0002e592 4844
.org 0x2e594
	adds r5, r2, r0	@ 0002e594 1518
.org 0x2e596
	ldr r1, [r5, #0]	@ 0002e596 2968
.org 0x2e598
	subs r1, r7, r1	@ 0002e598 791a
.org 0x2e59a
	mov r0, r9	@ 0002e59a 4846
.org 0x2e59c
	adds r3, r2, r0	@ 0002e59c 1318
.org 0x2e59e
	movs r0, #236	@ 0002e59e ec20
.org 0x2e5a0
	lsls r0, r0, #1	@ 0002e5a0 4000
.org 0x2e5a2
	adds r4, r3, r0	@ 0002e5a2 1c18
.org 0x2e5a4
	ldrh r0, [r4, #0]	@ 0002e5a4 2088
.org 0x2e5a6
	adds r1, r1, r0	@ 0002e5a6 0918
.org 0x2e5a8
	lsls r0, r0, #1	@ 0002e5a8 4000
.org 0x2e5aa
	cmp r1, r0	@ 0002e5aa 8142
.org 0x2e5ac
	bcs.n 0x2e618	@ 0002e5ac 34d2
.org 0x2e5ae
	ldr r1, [pc, #76]	@ 0002e5ae 1349
.org 0x2e5b0
	adds r0, r2, r1	@ 0002e5b0 5018
.org 0x2e5b2
	ldr r1, [r0, #0]	@ 0002e5b2 0168
.org 0x2e5b4
	mov r2, sl	@ 0002e5b4 5246
.org 0x2e5b6
	subs r1, r2, r1	@ 0002e5b6 511a
.org 0x2e5b8
	movs r2, #237	@ 0002e5b8 ed22
.org 0x2e5ba
	lsls r2, r2, #1	@ 0002e5ba 5200
.org 0x2e5bc
	adds r0, r3, r2	@ 0002e5bc 9818
.org 0x2e5be
	ldrh r0, [r0, #0]	@ 0002e5be 0088
.org 0x2e5c0
	adds r1, r1, r0	@ 0002e5c0 0918
.org 0x2e5c2
	lsls r0, r0, #1	@ 0002e5c2 4000
.org 0x2e5c4
	cmp r1, r0	@ 0002e5c4 8142
.org 0x2e5c6
	bcs.n 0x2e618	@ 0002e5c6 27d2
.org 0x2e5c8
	ldr r1, [pc, #52]	@ 0002e5c8 0d49
.org 0x2e5ca
	subs r2, #4	@ 0002e5ca 043a
.org 0x2e5cc
	adds r0, r3, r2	@ 0002e5cc 9818
.org 0x2e5ce
	ldrh r0, [r0, #0]	@ 0002e5ce 0088
.org 0x2e5d0
	ands r0, r1	@ 0002e5d0 0840
.org 0x2e5d2
	movs r1, #0	@ 0002e5d2 0021
.org 0x2e5d4
	bl 0x2f084	@ 0002e5d4 00f056fd
.org 0x2e5d8
	lsls r0, r0, #24	@ 0002e5d8 0006
.org 0x2e5da
	cmp r0, #0	@ 0002e5da 0028
.org 0x2e5dc
	beq.n 0x2e618	@ 0002e5dc 1cd0
.org 0x2e5de
	ldrh r0, [r4, #0]	@ 0002e5de 2088
.org 0x2e5e0
	lsrs r0, r0, #1	@ 0002e5e0 4008
.org 0x2e5e2
	ldr r1, [r5, #0]	@ 0002e5e2 2968
.org 0x2e5e4
	adds r0, r1, r0	@ 0002e5e4 0818
.org 0x2e5e6
	subs r2, r0, r7	@ 0002e5e6 c21b
.org 0x2e5e8
	cmp r7, r1	@ 0002e5e8 8f42
.org 0x2e5ea
	ble.n 0x2e608	@ 0002e5ea 0ddd
.org 0x2e5ec
	ldr r0, [pc, #20]	@ 0002e5ec 0548
.org 0x2e5ee
	cmp r2, r0	@ 0002e5ee 8242
.org 0x2e5f0
	bgt.n 0x2e618	@ 0002e5f0 12dc
.org 0x2e5f2
	movs r0, #1	@ 0002e5f2 0120
.org 0x2e5f4
	b.n 0x2e62c	@ 0002e5f4 1ae0
.org 0x2e5f6
	.byte 0x00	@ 0002e5f6 data
.org 0x2e5f7
	.byte 0x00	@ 0002e5f7 data
.org 0x2e5f8
	.byte 0xb0,0x0a,0x00,0x02	@ 0002e5f8 data
.org 0x2e5fc
	.byte 0x90,0x0c,0x00,0x02	@ 0002e5fc data
.org 0x2e600
	.byte 0x0f,0x88,0x00,0x00	@ 0002e600 data
.org 0x2e604
	.byte 0xff,0x03,0x00,0x00	@ 0002e604 data
.org 0x2e608
	ldr r0, [pc, #8]	@ 0002e608 0248
.org 0x2e60a
	cmp r2, r0	@ 0002e60a 8242
.org 0x2e60c
	ble.n 0x2e618	@ 0002e60c 04dd
.org 0x2e60e
	movs r0, #2	@ 0002e60e 0220
.org 0x2e610
	b.n 0x2e62c	@ 0002e610 0ce0
.org 0x2e612
	.byte 0x00	@ 0002e612 data
.org 0x2e613
	.byte 0x00	@ 0002e613 data
.org 0x2e614
	.byte 0x00,0xfc,0xff,0xff	@ 0002e614 data
.org 0x2e618
	adds r0, r6, #1	@ 0002e618 701c
.org 0x2e61a
	lsls r0, r0, #24	@ 0002e61a 0006
.org 0x2e61c
	lsrs r6, r0, #24	@ 0002e61c 060e
.org 0x2e61e
	movs r0, #220	@ 0002e61e dc20
.org 0x2e620
	lsls r0, r0, #1	@ 0002e620 4000
