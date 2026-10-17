@ FUN_080cc778  entry 0x080cc778  size 188
.thumb
.org 0xcc778
FUN_080cc778:
	push {r4, r5, r6, lr}	@ 000cc778 70b5
.org 0xcc77a
	adds r4, r0, #0	@ 000cc77a 041c
.org 0xcc77c
	ldr r6, [r4, #40]	@ 000cc77c a66a
.org 0xcc77e
	ldrb r0, [r6, #13]	@ 000cc77e 707b
.org 0xcc780
	cmp r0, #20	@ 000cc780 1428
.org 0xcc782
	beq.n 0xcc7a4	@ 000cc782 0fd0
.org 0xcc784
	ldr r1, [pc, #24]	@ 000cc784 0649
.org 0xcc786
	ldrb r0, [r4, #9]	@ 000cc786 607a
.org 0xcc788
	lsls r0, r0, #2	@ 000cc788 8000
.org 0xcc78a
	adds r0, r0, r1	@ 000cc78a 4018
.org 0xcc78c
	movs r1, #2	@ 000cc78c 0221
.org 0xcc78e
	str r1, [r4, #12]	@ 000cc78e e160
.org 0xcc790
	ldr r0, [r0, #0]	@ 000cc790 0068
.org 0xcc792
	ldr r0, [r0, #8]	@ 000cc792 8068
.org 0xcc794
	str r0, [r4, #20]	@ 000cc794 6061
.org 0xcc796
	adds r0, r4, #0	@ 000cc796 201c
.org 0xcc798
	bl 0xcc0bc	@ 000cc798 fff790fc
.org 0xcc79c
	b.n 0xcc83e	@ 000cc79c 4fe0
.org 0xcc79e
	.byte 0x00	@ 000cc79e data
.org 0xcc79f
	.byte 0x00	@ 000cc79f data
.org 0xcc7a0
	.byte 0xf4,0x49,0x86,0x08	@ 000cc7a0 data
.org 0xcc7a4
	ldrb r0, [r4, #19]	@ 000cc7a4 e07c
.org 0xcc7a6
	ldrb r1, [r4, #18]	@ 000cc7a6 a17c
.org 0xcc7a8
	cmp r0, r1	@ 000cc7a8 8842
.org 0xcc7aa
	bne.n 0xcc7c8	@ 000cc7aa 0dd1
.org 0xcc7ac
	adds r0, r4, #0	@ 000cc7ac 201c
.org 0xcc7ae
	adds r0, #116	@ 000cc7ae 7430
.org 0xcc7b0
	ldrb r2, [r4, #17]	@ 000cc7b0 627c
.org 0xcc7b2
	lsls r1, r2, #1	@ 000cc7b2 5100
.org 0xcc7b4
	adds r1, r1, r2	@ 000cc7b4 8918
.org 0xcc7b6
	lsls r1, r1, #5	@ 000cc7b6 4901
.org 0xcc7b8
	ldr r2, [pc, #8]	@ 000cc7b8 024a
.org 0xcc7ba
	adds r1, r1, r2	@ 000cc7ba 8918
.org 0xcc7bc
	bl 0x5784	@ 000cc7bc 38f7e2ff
.org 0xcc7c0
	b.n 0xcc7d2	@ 000cc7c0 07e0
.org 0xcc7c2
	.byte 0x00	@ 000cc7c2 data
.org 0xcc7c3
	.byte 0x00	@ 000cc7c3 data
.org 0xcc7c4
	.byte 0x20,0x67,0x86,0x08	@ 000cc7c4 data
.org 0xcc7c8
	adds r0, r4, #0	@ 000cc7c8 201c
.org 0xcc7ca
	adds r0, #116	@ 000cc7ca 7430
.org 0xcc7cc
	ldr r1, [pc, #36]	@ 000cc7cc 0949
.org 0xcc7ce
	bl 0x5784	@ 000cc7ce 38f7d9ff
.org 0xcc7d2
	ldrb r0, [r4, #19]	@ 000cc7d2 e07c
.org 0xcc7d4
	adds r0, #1	@ 000cc7d4 0130
.org 0xcc7d6
	movs r1, #1	@ 000cc7d6 0121
.org 0xcc7d8
	ands r0, r1	@ 000cc7d8 0840
.org 0xcc7da
	strb r0, [r4, #19]	@ 000cc7da e074
.org 0xcc7dc
	ldrb r1, [r6, #10]	@ 000cc7dc b17a
.org 0xcc7de
	movs r0, #16	@ 000cc7de 1020
.org 0xcc7e0
	ands r0, r1	@ 000cc7e0 0840
.org 0xcc7e2
	cmp r0, #0	@ 000cc7e2 0028
.org 0xcc7e4
	beq.n 0xcc7f8	@ 000cc7e4 08d0
.org 0xcc7e6
	adds r0, r6, #0	@ 000cc7e6 301c
.org 0xcc7e8
	adds r0, #36	@ 000cc7e8 2430
.org 0xcc7ea
	ldrb r0, [r0, #0]	@ 000cc7ea 0078
.org 0xcc7ec
	negs r0, r0	@ 000cc7ec 4042
.org 0xcc7ee
	lsls r0, r0, #24	@ 000cc7ee 0006
.org 0xcc7f0
	lsrs r5, r0, #24	@ 000cc7f0 050e
.org 0xcc7f2
	b.n 0xcc7fe	@ 000cc7f2 04e0
.org 0xcc7f4
	.byte 0xe0,0x67,0x86,0x08	@ 000cc7f4 data
.org 0xcc7f8
	adds r0, r6, #0	@ 000cc7f8 301c
.org 0xcc7fa
	adds r0, #36	@ 000cc7fa 2430
.org 0xcc7fc
	ldrb r5, [r0, #0]	@ 000cc7fc 0578
.org 0xcc7fe
	adds r0, r4, #0	@ 000cc7fe 201c
.org 0xcc800
	adds r0, #36	@ 000cc800 2430
.org 0xcc802
	strb r5, [r0, #0]	@ 000cc802 0570
.org 0xcc804
	ldr r0, [r6, #84]	@ 000cc804 706d
.org 0xcc806
	ldr r1, [r6, #88]	@ 000cc806 b16d
.org 0xcc808
	str r0, [r4, #84]	@ 000cc808 6065
.org 0xcc80a
	str r1, [r4, #88]	@ 000cc80a a165
.org 0xcc80c
	ldr r3, [pc, #52]	@ 000cc80c 0d4b
.org 0xcc80e
	lsls r0, r5, #1	@ 000cc80e 6800
.org 0xcc810
	adds r0, r0, r3	@ 000cc810 c018
.org 0xcc812
	movs r1, #0	@ 000cc812 0021
.org 0xcc814
	ldrsh r0, [r0, r1]	@ 000cc814 405e
.org 0xcc816
	ldr r2, [r4, #100]	@ 000cc816 626e
.org 0xcc818
	adds r1, r2, #0	@ 000cc818 111c
.org 0xcc81a
	muls r1, r0	@ 000cc81a 4143
.org 0xcc81c
	asrs r1, r1, #8	@ 000cc81c 0912
.org 0xcc81e
	ldr r0, [r4, #84]	@ 000cc81e 606d
.org 0xcc820
	adds r0, r0, r1	@ 000cc820 4018
.org 0xcc822
	str r0, [r4, #84]	@ 000cc822 6065
.org 0xcc824
	adds r0, r5, #0	@ 000cc824 281c
.org 0xcc826
	adds r0, #64	@ 000cc826 4030
.org 0xcc828
	lsls r0, r0, #24	@ 000cc828 0006
.org 0xcc82a
	lsrs r0, r0, #23	@ 000cc82a c00d
.org 0xcc82c
	adds r0, r0, r3	@ 000cc82c c018
.org 0xcc82e
	movs r1, #0	@ 000cc82e 0021
.org 0xcc830
	ldrsh r0, [r0, r1]	@ 000cc830 405e
.org 0xcc832
	adds r1, r2, #0	@ 000cc832 111c
