@ FUN_080885f0  entry 0x080885f0  size 84
.thumb
.org 0x885f0
FUN_080885f0:
	push {r4, lr}	@ 000885f0 10b5
.org 0x885f2
	adds r4, r0, #0	@ 000885f2 041c
.org 0x885f4
	ldrb r0, [r4, #15]	@ 000885f4 e07b
.org 0x885f6
	cmp r0, #0	@ 000885f6 0028
.org 0x885f8
	bne.n 0x88612	@ 000885f8 0bd1
.org 0x885fa
	adds r0, r4, #0	@ 000885fa 201c
.org 0x885fc
	adds r0, #116	@ 000885fc 7430
.org 0x885fe
	ldr r1, [pc, #56]	@ 000885fe 0e49
.org 0x88600
	bl 0x5784	@ 00088600 7df7c0f8
.org 0x88604
	ldr r1, [pc, #52]	@ 00088604 0d49
.org 0x88606
	adds r0, r4, #0	@ 00088606 201c
.org 0x88608
	bl 0x1cf00	@ 00088608 94f77afc
.org 0x8860c
	ldrb r0, [r4, #15]	@ 0008860c e07b
.org 0x8860e
	adds r0, #1	@ 0008860e 0130
.org 0x88610
	strb r0, [r4, #15]	@ 00088610 e073
.org 0x88612
	adds r0, r4, #0	@ 00088612 201c
.org 0x88614
	bl 0x1d1f4	@ 00088614 94f7eefd
.org 0x88618
	adds r0, r4, #0	@ 00088618 201c
.org 0x8861a
	bl 0x88c9c	@ 0008861a 00f03ffb
.org 0x8861e
	cmp r0, #0	@ 0008861e 0028
.org 0x88620
	beq.n 0x88648	@ 00088620 12d0
.org 0x88622
	ldrb r1, [r4, #10]	@ 00088622 a17a
.org 0x88624
	movs r0, #32	@ 00088624 2020
.org 0x88626
	ands r0, r1	@ 00088626 0840
.org 0x88628
	lsls r0, r0, #24	@ 00088628 0006
.org 0x8862a
	lsrs r1, r0, #24	@ 0008862a 010e
.org 0x8862c
	cmp r1, #0	@ 0008862c 0029
.org 0x8862e
	beq.n 0x88640	@ 0008862e 07d0
.org 0x88630
	movs r1, #0	@ 00088630 0021
.org 0x88632
	movs r0, #7	@ 00088632 0720
.org 0x88634
	b.n 0x88642	@ 00088634 05e0
.org 0x88636
	.byte 0x00	@ 00088636 data
.org 0x88637
	.byte 0x00	@ 00088637 data
.org 0x88638
	.byte 0x34,0xf0,0x85,0x08	@ 00088638 data
.org 0x8863c
	.byte 0x0e,0x1d,0x00,0x00	@ 0008863c data
.org 0x88640
	movs r0, #8	@ 00088640 0820
.org 0x88642
	strb r0, [r4, #13]	@ 00088642 6073
