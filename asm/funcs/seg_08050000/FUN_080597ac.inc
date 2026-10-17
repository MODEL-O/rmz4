@ FUN_080597ac  entry 0x080597ac  size 136
.thumb
.org 0x597ac
FUN_080597ac:
	push {r4, r5, r6, r7, lr}	@ 000597ac f0b5
.org 0x597ae
	mov r7, r9	@ 000597ae 4f46
.org 0x597b0
	mov r6, r8	@ 000597b0 4646
.org 0x597b2
	push {r6, r7}	@ 000597b2 c0b4
.org 0x597b4
	mov ip, r0	@ 000597b4 8446
.org 0x597b6
	ldrb r0, [r0, #10]	@ 000597b6 807a
.org 0x597b8
	lsrs r0, r0, #4	@ 000597b8 0009
.org 0x597ba
	movs r1, #1	@ 000597ba 0121
.org 0x597bc
	ands r0, r1	@ 000597bc 0840
.org 0x597be
	movs r1, #160	@ 000597be a021
.org 0x597c0
	lsls r1, r1, #6	@ 000597c0 8901
.org 0x597c2
	adds r4, r1, #0	@ 000597c2 0c1c
.org 0x597c4
	adds r5, r1, #0	@ 000597c4 0d1c
.org 0x597c6
	lsls r0, r0, #1	@ 000597c6 4000
.org 0x597c8
	subs r0, #1	@ 000597c8 0138
.org 0x597ca
	lsls r0, r0, #11	@ 000597ca c002
.org 0x597cc
	mov r9, r0	@ 000597cc 8146
.org 0x597ce
	mov r0, ip	@ 000597ce 6046
.org 0x597d0
	ldr r0, [r0, #84]	@ 000597d0 406d
.org 0x597d2
	mov r8, r0	@ 000597d2 8046
.org 0x597d4
	mov r6, r8	@ 000597d4 4646
.org 0x597d6
	add r6, r9	@ 000597d6 4e44
.org 0x597d8
	mov r0, ip	@ 000597d8 6046
.org 0x597da
	adds r0, #188	@ 000597da bc30
.org 0x597dc
	ldr r0, [r0, #0]	@ 000597dc 0068
.org 0x597de
	ldr r1, [pc, #72]	@ 000597de 1249
.org 0x597e0
	adds r7, r0, r1	@ 000597e0 4718
.org 0x597e2
	ldr r0, [pc, #72]	@ 000597e2 1248
.org 0x597e4
	ldr r0, [r0, #0]	@ 000597e4 0068
.org 0x597e6
	ldr r2, [r0, #84]	@ 000597e6 426d
.org 0x597e8
	ldr r0, [r0, #88]	@ 000597e8 806d
.org 0x597ea
	ldr r1, [pc, #68]	@ 000597ea 1149
.org 0x597ec
	adds r3, r0, r1	@ 000597ec 4318
.org 0x597ee
	subs r0, r6, r2	@ 000597ee b01a
.org 0x597f0
	adds r0, r0, r4	@ 000597f0 0019
.org 0x597f2
	lsls r1, r4, #1	@ 000597f2 6100
.org 0x597f4
	cmp r0, r1	@ 000597f4 8842
.org 0x597f6
	bhi.n 0x59800	@ 000597f6 03d8
.org 0x597f8
	subs r0, r7, r3	@ 000597f8 f81a
.org 0x597fa
	adds r0, r0, r5	@ 000597fa 4019
.org 0x597fc
	cmp r0, r1	@ 000597fc 8842
.org 0x597fe
	bls.n 0x59822	@ 000597fe 10d9
.org 0x59800
	mov r0, ip	@ 00059800 6046
.org 0x59802
	bl 0x503a8	@ 00059802 f6f7d1fd
.org 0x59806
	cmp r0, #0	@ 00059806 0028
.org 0x59808
	beq.n 0x59834	@ 00059808 14d0
.org 0x5980a
	ldr r2, [r0, #0]	@ 0005980a 0268
.org 0x5980c
	ldr r3, [r0, #4]	@ 0005980c 4368
.org 0x5980e
	subs r0, r6, r2	@ 0005980e b01a
.org 0x59810
	adds r0, r0, r4	@ 00059810 0019
.org 0x59812
	lsls r1, r4, #1	@ 00059812 6100
.org 0x59814
	cmp r0, r1	@ 00059814 8842
.org 0x59816
	bhi.n 0x59834	@ 00059816 0dd8
.org 0x59818
	subs r0, r7, r3	@ 00059818 f81a
.org 0x5981a
	adds r0, r0, r5	@ 0005981a 4019
.org 0x5981c
	lsls r1, r5, #1	@ 0005981c 6900
.org 0x5981e
	cmp r0, r1	@ 0005981e 8842
.org 0x59820
	bhi.n 0x59834	@ 00059820 08d8
.org 0x59822
	movs r0, #1	@ 00059822 0120
.org 0x59824
	b.n 0x59836	@ 00059824 07e0
.org 0x59826
	.byte 0x00	@ 00059826 data
.org 0x59827
	.byte 0x00	@ 00059827 data
.org 0x59828
	.byte 0x00,0xde,0xff,0xff	@ 00059828 data
.org 0x5982c
	.byte 0xf0,0xdb,0x02,0x02	@ 0005982c data
.org 0x59830
	.byte 0x00,0xf0,0xff,0xff	@ 00059830 data
