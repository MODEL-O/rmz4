@ FUN_08038790  entry 0x08038790  size 78
.thumb
.org 0x38790
FUN_08038790:
	push {lr}	@ 00038790 00b5
.org 0x38792
	adds r2, r0, #0	@ 00038792 021c
.org 0x38794
	ldr r1, [pc, #20]	@ 00038794 0549
.org 0x38796
	adds r0, r2, r1	@ 00038796 5018
.org 0x38798
	ldrh r1, [r0, #0]	@ 00038798 0188
.org 0x3879a
	movs r0, #128	@ 0003879a 8020
.org 0x3879c
	lsls r0, r0, #8	@ 0003879c 0002
.org 0x3879e
	ands r0, r1	@ 0003879e 0840
.org 0x387a0
	cmp r0, #0	@ 000387a0 0028
.org 0x387a2
	beq.n 0x387b0	@ 000387a2 05d0
.org 0x387a4
	movs r0, #224	@ 000387a4 e020
.org 0x387a6
	lsls r0, r0, #2	@ 000387a6 8000
.org 0x387a8
	b.n 0x387e0	@ 000387a8 1ae0
.org 0x387aa
	.byte 0x00	@ 000387aa data
.org 0x387ab
	.byte 0x00	@ 000387ab data
.org 0x387ac
	.byte 0x52,0x02,0x00,0x00	@ 000387ac data
.org 0x387b0
	movs r3, #159	@ 000387b0 9f23
.org 0x387b2
	lsls r3, r3, #1	@ 000387b2 5b00
.org 0x387b4
	adds r1, r2, r3	@ 000387b4 d118
.org 0x387b6
	ldrb r0, [r1, #0]	@ 000387b6 0878
.org 0x387b8
	cmp r0, #0	@ 000387b8 0028
.org 0x387ba
	bne.n 0x387c8	@ 000387ba 05d1
.org 0x387bc
	movs r0, #221	@ 000387bc dd20
.org 0x387be
	lsls r0, r0, #1	@ 000387be 4000
.org 0x387c0
	adds r1, r2, r0	@ 000387c0 1118
.org 0x387c2
	movs r0, #224	@ 000387c2 e020
.org 0x387c4
	lsls r0, r0, #2	@ 000387c4 8000
.org 0x387c6
	b.n 0x387dc	@ 000387c6 09e0
.org 0x387c8
	ldrb r0, [r1, #0]	@ 000387c8 0878
.org 0x387ca
	movs r1, #128	@ 000387ca 8021
.org 0x387cc
	lsls r1, r1, #1	@ 000387cc 4900
.org 0x387ce
	subs r1, r1, r0	@ 000387ce 091a
.org 0x387d0
	lsls r0, r1, #3	@ 000387d0 c800
.org 0x387d2
	subs r0, r0, r1	@ 000387d2 401a
.org 0x387d4
	asrs r0, r0, #1	@ 000387d4 4010
.org 0x387d6
	movs r3, #221	@ 000387d6 dd23
.org 0x387d8
	lsls r3, r3, #1	@ 000387d8 5b00
.org 0x387da
	adds r1, r2, r3	@ 000387da d118
.org 0x387dc
	ldrb r1, [r1, #0]	@ 000387dc 0978
