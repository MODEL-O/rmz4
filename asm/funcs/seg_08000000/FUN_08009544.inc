@ FUN_08009544  entry 0x08009544  size 158
.thumb
.org 0x9544
FUN_08009544:
	push {r4, r5, r6, r7, lr}	@ 00009544 f0b5
.org 0x9546
	mov r7, sl	@ 00009546 5746
.org 0x9548
	mov r6, r9	@ 00009548 4e46
.org 0x954a
	mov r5, r8	@ 0000954a 4546
.org 0x954c
	push {r5, r6, r7}	@ 0000954c e0b4
.org 0x954e
	sub sp, #8	@ 0000954e 82b0
.org 0x9550
	adds r6, r0, #0	@ 00009550 061c
.org 0x9552
	str r1, [sp, #0]	@ 00009552 0091
.org 0x9554
	ldr r0, [pc, #108]	@ 00009554 1b48
.org 0x9556
	str r0, [sp, #4]	@ 00009556 0190
.org 0x9558
	movs r5, #0	@ 00009558 0025
.org 0x955a
	ldr r1, [sp, #4]	@ 0000955a 0199
.org 0x955c
	movs r2, #233	@ 0000955c e922
.org 0x955e
	lsls r2, r2, #1	@ 0000955e 5200
.org 0x9560
	adds r0, r1, r2	@ 00009560 8818
.org 0x9562
	ldrb r0, [r0, #0]	@ 00009562 0078
.org 0x9564
	cmp r5, r0	@ 00009564 8542
.org 0x9566
	bge.n 0x95d6	@ 00009566 36da
.org 0x9568
	movs r7, #240	@ 00009568 f027
.org 0x956a
	lsls r7, r7, #1	@ 0000956a 7f00
.org 0x956c
	adds r7, r7, r1	@ 0000956c 7f18
.org 0x956e
	mov r9, r7	@ 0000956e b946
.org 0x9570
	adds r2, #10	@ 00009570 0a32
.org 0x9572
	adds r2, r2, r1	@ 00009572 5218
.org 0x9574
	mov r8, r2	@ 00009574 9046
.org 0x9576
	mov ip, r1	@ 00009576 8c46
.org 0x9578
	mov sl, r0	@ 00009578 8246
.org 0x957a
	movs r0, #236	@ 0000957a ec20
.org 0x957c
	lsls r0, r0, #1	@ 0000957c 4000
.org 0x957e
	add r0, ip	@ 0000957e 6044
.org 0x9580
	ldrh r3, [r0, #0]	@ 00009580 0388
.org 0x9582
	lsls r1, r3, #1	@ 00009582 5900
.org 0x9584
	mov r7, r8	@ 00009584 4746
.org 0x9586
	ldr r4, [r7, #0]	@ 00009586 3c68
.org 0x9588
	subs r0, r6, r4	@ 00009588 301b
.org 0x958a
	adds r0, r0, r3	@ 0000958a c018
.org 0x958c
	cmp r1, r0	@ 0000958c 8142
.org 0x958e
	bls.n 0x95c8	@ 0000958e 1bd9
.org 0x9590
	movs r0, #237	@ 00009590 ed20
.org 0x9592
	lsls r0, r0, #1	@ 00009592 4000
.org 0x9594
	add r0, ip	@ 00009594 6044
.org 0x9596
	ldrh r0, [r0, #0]	@ 00009596 0088
.org 0x9598
	lsls r2, r0, #1	@ 00009598 4200
.org 0x959a
	mov r7, r9	@ 0000959a 4f46
.org 0x959c
	ldr r1, [r7, #0]	@ 0000959c 3968
.org 0x959e
	ldr r7, [sp, #0]	@ 0000959e 009f
.org 0x95a0
	subs r1, r7, r1	@ 000095a0 791a
.org 0x95a2
	adds r1, r1, r0	@ 000095a2 0918
.org 0x95a4
	subs r1, #1	@ 000095a4 0139
.org 0x95a6
	cmp r2, r1	@ 000095a6 8a42
.org 0x95a8
	bls.n 0x95c8	@ 000095a8 0ed9
.org 0x95aa
	movs r0, #235	@ 000095aa eb20
.org 0x95ac
	lsls r0, r0, #1	@ 000095ac 4000
.org 0x95ae
	add r0, ip	@ 000095ae 6044
.org 0x95b0
	ldrh r1, [r0, #0]	@ 000095b0 0188
.org 0x95b2
	movs r0, #132	@ 000095b2 8420
.org 0x95b4
	lsls r0, r0, #8	@ 000095b4 0002
.org 0x95b6
	ands r0, r1	@ 000095b6 0840
.org 0x95b8
	cmp r0, #0	@ 000095b8 0028
.org 0x95ba
	bne.n 0x95c8	@ 000095ba 05d1
.org 0x95bc
	subs r0, r4, r3	@ 000095bc e01a
.org 0x95be
	subs r6, r0, #1	@ 000095be 461e
.org 0x95c0
	b.n 0x9558	@ 000095c0 cae7
.org 0x95c2
	.byte 0x00	@ 000095c2 data
.org 0x95c3
	.byte 0x00	@ 000095c3 data
.org 0x95c4
	.byte 0xb0,0x0a,0x00,0x02	@ 000095c4 data
.org 0x95c8
	movs r0, #24	@ 000095c8 1820
.org 0x95ca
	add r9, r0	@ 000095ca 8144
.org 0x95cc
	add r8, r0	@ 000095cc 8044
.org 0x95ce
	add ip, r0	@ 000095ce 8444
.org 0x95d0
	adds r5, #1	@ 000095d0 0135
.org 0x95d2
	cmp r5, sl	@ 000095d2 5545
.org 0x95d4
	blt.n 0x957a	@ 000095d4 d1db
.org 0x95d6
	adds r0, r6, #0	@ 000095d6 301c
.org 0x95d8
	add sp, #8	@ 000095d8 02b0
.org 0x95da
	pop {r3, r4, r5}	@ 000095da 38bc
.org 0x95dc
	mov r8, r3	@ 000095dc 9846
.org 0x95de
	mov r9, r4	@ 000095de a146
.org 0x95e0
	mov sl, r5	@ 000095e0 aa46
