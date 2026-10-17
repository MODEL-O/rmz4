@ FUN_08038640  entry 0x08038640  size 134
.thumb
.org 0x38640
FUN_08038640:
	push {r4, r5, r6, lr}	@ 00038640 70b5
.org 0x38642
	adds r4, r0, #0	@ 00038642 041c
.org 0x38644
	movs r6, #192	@ 00038644 c026
.org 0x38646
	lsls r6, r6, #1	@ 00038646 7600
.org 0x38648
	adds r5, r4, #0	@ 00038648 251c
.org 0x3864a
	adds r5, #180	@ 0003864a b435
.org 0x3864c
	movs r1, #150	@ 0003864c 9621
.org 0x3864e
	lsls r1, r1, #2	@ 0003864e 8900
.org 0x38650
	adds r0, r4, r1	@ 00038650 6018
.org 0x38652
	ldr r0, [r0, #0]	@ 00038652 0068
.org 0x38654
	movs r1, #128	@ 00038654 8021
.org 0x38656
	ands r0, r1	@ 00038656 0840
.org 0x38658
	cmp r0, #0	@ 00038658 0028
.org 0x3865a
	bne.n 0x38670	@ 0003865a 09d1
.org 0x3865c
	adds r0, r4, #0	@ 0003865c 201c
.org 0x3865e
	bl 0x38b0c	@ 0003865e 00f055fa
.org 0x38662
	lsls r0, r0, #24	@ 00038662 0006
.org 0x38664
	cmp r0, #0	@ 00038664 0028
.org 0x38666
	bne.n 0x3866e	@ 00038666 02d1
.org 0x38668
	ldrb r0, [r5, #18]	@ 00038668 a87c
.org 0x3866a
	cmp r0, #25	@ 0003866a 1928
.org 0x3866c
	bne.n 0x38670	@ 0003866c 00d1
.org 0x3866e
	movs r6, #192	@ 0003866e c026
.org 0x38670
	ldr r1, [pc, #52]	@ 00038670 0d49
.org 0x38672
	movs r2, #186	@ 00038672 ba22
.org 0x38674
	lsls r2, r2, #1	@ 00038674 5200
.org 0x38676
	adds r0, r4, r2	@ 00038676 a018
.org 0x38678
	ldrb r0, [r0, #0]	@ 00038678 0078
.org 0x3867a
	lsls r0, r0, #3	@ 0003867a c000
.org 0x3867c
	adds r0, r0, r1	@ 0003867c 4018
.org 0x3867e
	ldrh r0, [r0, #6]	@ 0003867e c088
.org 0x38680
	lsls r0, r0, #16	@ 00038680 0004
.org 0x38682
	asrs r0, r0, #17	@ 00038682 4014
.org 0x38684
	ldr r1, [r4, #88]	@ 00038684 a16d
.org 0x38686
	subs r5, r1, r0	@ 00038686 0d1a
.org 0x38688
	ldr r2, [pc, #32]	@ 00038688 084a
.org 0x3868a
	movs r1, #232	@ 0003868a e821
.org 0x3868c
	lsls r1, r1, #1	@ 0003868c 4900
.org 0x3868e
	adds r0, r2, r1	@ 0003868e 5018
.org 0x38690
	ldrh r1, [r0, #0]	@ 00038690 0188
.org 0x38692
	movs r0, #127	@ 00038692 7f20
.org 0x38694
	ands r0, r1	@ 00038694 0840
.org 0x38696
	cmp r0, #2	@ 00038696 0228
.org 0x38698
	bne.n 0x386b0	@ 00038698 0ad1
.org 0x3869a
	adds r0, r4, #0	@ 0003869a 201c
.org 0x3869c
	adds r0, #84	@ 0003869c 5430
.org 0x3869e
	bl 0x7b84	@ 0003869e cff771fa
.org 0x386a2
	cmp r5, r0	@ 000386a2 8542
.org 0x386a4
	bgt.n 0x386ba	@ 000386a4 09dc
.org 0x386a6
	b.n 0x386cc	@ 000386a6 11e0
.org 0x386a8
	.byte 0x6c,0x33,0x85,0x08	@ 000386a8 data
.org 0x386ac
	.byte 0xb0,0x0a,0x00,0x02	@ 000386ac data
.org 0x386b0
	ldr r1, [pc, #16]	@ 000386b0 0449
.org 0x386b2
	adds r0, r2, r1	@ 000386b2 5018
.org 0x386b4
	ldr r0, [r0, #0]	@ 000386b4 0068
.org 0x386b6
	cmp r5, r0	@ 000386b6 8542
.org 0x386b8
	ble.n 0x386cc	@ 000386b8 08dd
.org 0x386ba
	cmp r6, #192	@ 000386ba c02e
.org 0x386bc
	bne.n 0x386c8	@ 000386bc 04d1
.org 0x386be
	movs r0, #96	@ 000386be 6020
.org 0x386c0
	b.n 0x386ce	@ 000386c0 05e0
.org 0x386c2
	.byte 0x00	@ 000386c2 data
.org 0x386c3
	.byte 0x00	@ 000386c3 data
.org 0x386c4
	.byte 0x0c,0xc0,0x02,0x00	@ 000386c4 data
