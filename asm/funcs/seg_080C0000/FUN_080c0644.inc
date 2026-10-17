@ FUN_080c0644  entry 0x080c0644  size 134
.thumb
.org 0xc0644
FUN_080c0644:
	push {r4, r5, lr}	@ 000c0644 30b5
.org 0xc0646
	adds r2, r0, #0	@ 000c0646 021c
.org 0xc0648
	ldr r5, [r2, #40]	@ 000c0648 956a
.org 0xc064a
	ldrb r0, [r5, #10]	@ 000c064a a87a
.org 0xc064c
	lsrs r4, r0, #4	@ 000c064c 0409
.org 0xc064e
	movs r0, #1	@ 000c064e 0120
.org 0xc0650
	ands r4, r0	@ 000c0650 0440
.org 0xc0652
	ldrb r0, [r5, #12]	@ 000c0652 287b
.org 0xc0654
	cmp r0, #1	@ 000c0654 0128
.org 0xc0656
	bls.n 0xc0678	@ 000c0656 0fd9
.org 0xc0658
	ldr r1, [pc, #24]	@ 000c0658 0649
.org 0xc065a
	ldrb r0, [r2, #9]	@ 000c065a 507a
.org 0xc065c
	lsls r0, r0, #2	@ 000c065c 8000
.org 0xc065e
	adds r0, r0, r1	@ 000c065e 4018
.org 0xc0660
	movs r1, #2	@ 000c0660 0221
.org 0xc0662
	str r1, [r2, #12]	@ 000c0662 d160
.org 0xc0664
	ldr r0, [r0, #0]	@ 000c0664 0068
.org 0xc0666
	ldr r0, [r0, #8]	@ 000c0666 8068
.org 0xc0668
	str r0, [r2, #20]	@ 000c0668 5061
.org 0xc066a
	adds r0, r2, #0	@ 000c066a 101c
.org 0xc066c
	bl 0xc0c74	@ 000c066c 00f002fb
.org 0xc0670
	b.n 0xc06ca	@ 000c0670 2be0
.org 0xc0672
	.byte 0x00	@ 000c0672 data
.org 0xc0673
	.byte 0x00	@ 000c0673 data
.org 0xc0674
	.byte 0xf4,0x49,0x86,0x08	@ 000c0674 data
.org 0xc0678
	adds r0, r2, #0	@ 000c0678 101c
.org 0xc067a
	adds r0, #184	@ 000c067a b830
.org 0xc067c
	ldrb r3, [r0, #0]	@ 000c067c 0378
.org 0xc067e
	ldrb r0, [r2, #13]	@ 000c067e 507b
.org 0xc0680
	cmp r0, r3	@ 000c0680 9842
.org 0xc0682
	beq.n 0xc0692	@ 000c0682 06d0
.org 0xc0684
	movs r1, #0	@ 000c0684 0021
.org 0xc0686
	strb r3, [r2, #13]	@ 000c0686 5373
.org 0xc0688
	strb r1, [r2, #14]	@ 000c0688 9173
.org 0xc068a
	strb r1, [r2, #15]	@ 000c068a d173
.org 0xc068c
	adds r0, r2, #0	@ 000c068c 101c
.org 0xc068e
	adds r0, #180	@ 000c068e b430
.org 0xc0690
	strh r1, [r0, #0]	@ 000c0690 0180
.org 0xc0692
	ldr r0, [r5, #84]	@ 000c0692 686d
.org 0xc0694
	ldr r1, [r5, #88]	@ 000c0694 a96d
.org 0xc0696
	str r0, [r2, #84]	@ 000c0696 5065
.org 0xc0698
	str r1, [r2, #88]	@ 000c0698 9165
.org 0xc069a
	adds r3, r4, #0	@ 000c069a 231c
.org 0xc069c
	cmp r3, #0	@ 000c069c 002b
.org 0xc069e
	beq.n 0xc06a8	@ 000c069e 03d0
.org 0xc06a0
	ldrb r1, [r2, #10]	@ 000c06a0 917a
.org 0xc06a2
	movs r0, #16	@ 000c06a2 1020
.org 0xc06a4
	orrs r0, r1	@ 000c06a4 0843
.org 0xc06a6
	b.n 0xc06ae	@ 000c06a6 02e0
.org 0xc06a8
	ldrb r1, [r2, #10]	@ 000c06a8 917a
.org 0xc06aa
	movs r0, #239	@ 000c06aa ef20
.org 0xc06ac
	ands r0, r1	@ 000c06ac 0840
.org 0xc06ae
	strb r0, [r2, #10]	@ 000c06ae 9072
.org 0xc06b0
	adds r1, r3, #0	@ 000c06b0 191c
.org 0xc06b2
	adds r0, r2, #0	@ 000c06b2 101c
.org 0xc06b4
	adds r0, #76	@ 000c06b4 4c30
.org 0xc06b6
	strb r1, [r0, #0]	@ 000c06b6 0170
.org 0xc06b8
	adds r3, r2, #0	@ 000c06b8 131c
.org 0xc06ba
	adds r3, #74	@ 000c06ba 4a33
.org 0xc06bc
	lsls r1, r1, #4	@ 000c06bc 0901
.org 0xc06be
	ldrb r2, [r3, #0]	@ 000c06be 1a78
.org 0xc06c0
	movs r0, #17	@ 000c06c0 1120
.org 0xc06c2
	negs r0, r0	@ 000c06c2 4042
.org 0xc06c4
	ands r0, r2	@ 000c06c4 1040
.org 0xc06c6
	orrs r0, r1	@ 000c06c6 0843
.org 0xc06c8
	strb r0, [r3, #0]	@ 000c06c8 1870
