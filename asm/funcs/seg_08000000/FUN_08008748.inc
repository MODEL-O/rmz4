@ FUN_08008748  entry 0x08008748  size 248
.thumb
.org 0x8748
FUN_08008748:
	push {r4, r5, r6, r7, lr}	@ 00008748 f0b5
.org 0x874a
	mov r7, sl	@ 0000874a 5746
.org 0x874c
	mov r6, r9	@ 0000874c 4e46
.org 0x874e
	mov r5, r8	@ 0000874e 4546
.org 0x8750
	push {r5, r6, r7}	@ 00008750 e0b4
.org 0x8752
	sub sp, #4	@ 00008752 81b0
.org 0x8754
	adds r6, r0, #0	@ 00008754 061c
.org 0x8756
	mov r9, r1	@ 00008756 8946
.org 0x8758
	mov r5, r9	@ 00008758 4d46
.org 0x875a
	ldr r4, [pc, #52]	@ 0000875a 0d4c
.org 0x875c
	movs r1, #232	@ 0000875c e821
.org 0x875e
	lsls r1, r1, #1	@ 0000875e 4900
.org 0x8760
	adds r0, r4, r1	@ 00008760 6018
.org 0x8762
	ldrh r0, [r0, #0]	@ 00008762 0088
.org 0x8764
	cmp r0, #4	@ 00008764 0428
.org 0x8766
	bne.n 0x877a	@ 00008766 08d1
.org 0x8768
	ldr r2, [pc, #40]	@ 00008768 0a4a
.org 0x876a
	adds r0, r6, r2	@ 0000876a b018
.org 0x876c
	movs r1, #240	@ 0000876c f021
.org 0x876e
	lsls r1, r1, #10	@ 0000876e 8902
.org 0x8770
	bl 0x129050	@ 00008770 20f16efc
.org 0x8774
	movs r1, #240	@ 00008774 f021
.org 0x8776
	lsls r1, r1, #8	@ 00008776 0902
.org 0x8778
	adds r6, r0, r1	@ 00008778 4618
.org 0x877a
	asrs r2, r6, #12	@ 0000877a 3213
.org 0x877c
	mov r8, r2	@ 0000877c 9046
.org 0x877e
	mov r0, r9	@ 0000877e 4846
.org 0x8780
	asrs r1, r0, #12	@ 00008780 0113
.org 0x8782
	ldr r0, [pc, #20]	@ 00008782 0548
.org 0x8784
	cmp r8, r0	@ 00008784 8045
.org 0x8786
	bls.n 0x879c	@ 00008786 09d9
.org 0x8788
	movs r0, #1	@ 00008788 0120
.org 0x878a
	negs r0, r0	@ 0000878a 4042
.org 0x878c
	b.n 0x8854	@ 0000878c 62e0
.org 0x878e
	.byte 0x00	@ 0000878e data
.org 0x878f
	.byte 0x00	@ 0000878f data
.org 0x8790
	.byte 0xb0,0x0a,0x00,0x02	@ 00008790 data
.org 0x8794
	.byte 0x00,0x10,0xff,0xff	@ 00008794 data
.org 0x8798
	.byte 0x7f,0x07,0x00,0x00	@ 00008798 data
.org 0x879c
	movs r7, #0	@ 0000879c 0027
.org 0x879e
	ldr r0, [pc, #96]	@ 0000879e 1848
.org 0x87a0
	cmp r1, r0	@ 000087a0 8142
.org 0x87a2
	bhi.n 0x8822	@ 000087a2 3ed8
.org 0x87a4
	movs r2, #252	@ 000087a4 fc22
.org 0x87a6
	lsls r2, r2, #3	@ 000087a6 d200
.org 0x87a8
	adds r2, r2, r4	@ 000087a8 1219
.org 0x87aa
	mov sl, r2	@ 000087aa 9246
.org 0x87ac
	ldr r3, [pc, #84]	@ 000087ac 154b
.org 0x87ae
	mov r2, sl	@ 000087ae 5246
.org 0x87b0
	ldrh r0, [r2, #0]	@ 000087b0 1088
.org 0x87b2
	muls r0, r1	@ 000087b2 4843
.org 0x87b4
	add r0, r8	@ 000087b4 4044
.org 0x87b6
	adds r0, #2	@ 000087b6 0230
.org 0x87b8
	lsls r0, r0, #1	@ 000087b8 4000
.org 0x87ba
	add r0, sl	@ 000087ba 5044
.org 0x87bc
	ldrh r0, [r0, #0]	@ 000087bc 0088
.org 0x87be
	ldr r2, [pc, #72]	@ 000087be 124a
.org 0x87c0
	ldr r1, [r2, #0]	@ 000087c0 1168
.org 0x87c2
	lsls r0, r0, #1	@ 000087c2 4000
.org 0x87c4
	adds r0, r0, r1	@ 000087c4 4018
.org 0x87c6
	ldrh r4, [r0, #0]	@ 000087c6 0488
.org 0x87c8
	movs r0, #15	@ 000087c8 0f20
.org 0x87ca
	ands r0, r4	@ 000087ca 2040
.org 0x87cc
	lsls r0, r0, #2	@ 000087cc 8000
.org 0x87ce
	ldr r1, [pc, #60]	@ 000087ce 0f49
.org 0x87d0
	adds r0, r0, r1	@ 000087d0 4018
.org 0x87d2
	adds r1, r3, #0	@ 000087d2 191c
.org 0x87d4
	bics r1, r5	@ 000087d4 a943
.org 0x87d6
	ldr r2, [r0, #0]	@ 000087d6 0268
.org 0x87d8
	adds r0, r6, #0	@ 000087d8 301c
.org 0x87da
	ands r0, r3	@ 000087da 1840
.org 0x87dc
	str r3, [sp, #0]	@ 000087dc 0093
.org 0x87de
	bl 0x128f84	@ 000087de 20f1d1fb
.org 0x87e2
	ldr r3, [sp, #0]	@ 000087e2 009b
.org 0x87e4
	cmp r0, #0	@ 000087e4 0028
.org 0x87e6
	beq.n 0x87f4	@ 000087e6 05d0
.org 0x87e8
	movs r2, #132	@ 000087e8 8422
.org 0x87ea
	lsls r2, r2, #8	@ 000087ea 1202
.org 0x87ec
	adds r0, r2, #0	@ 000087ec 101c
.org 0x87ee
	ands r4, r0	@ 000087ee 0440
.org 0x87f0
	cmp r4, #0	@ 000087f0 002c
.org 0x87f2
	beq.n 0x8822	@ 000087f2 16d0
.org 0x87f4
	movs r0, #1	@ 000087f4 0120
.org 0x87f6
	ands r0, r7	@ 000087f6 3840
.org 0x87f8
	cmp r0, #0	@ 000087f8 0028
.org 0x87fa
	beq.n 0x8810	@ 000087fa 09d0
.org 0x87fc
	subs r5, #1	@ 000087fc 013d
.org 0x87fe
	b.n 0x8814	@ 000087fe 09e0
.org 0x8800
	.byte 0xff,0x04,0x00,0x00	@ 00008800 data
.org 0x8804
	.byte 0xff,0x0f,0x00,0x00	@ 00008804 data
.org 0x8808
	.byte 0x68,0x0c,0x00,0x02	@ 00008808 data
.org 0x880c
	.byte 0x14,0xb1,0x82,0x08	@ 0000880c data
.org 0x8810
	asrs r0, r5, #12	@ 00008810 2813
.org 0x8812
	lsls r5, r0, #12	@ 00008812 0503
.org 0x8814
	asrs r1, r5, #12	@ 00008814 2913
.org 0x8816
	adds r7, #1	@ 00008816 0137
.org 0x8818
	cmp r7, #127	@ 00008818 7f2f
.org 0x881a
	bgt.n 0x8826	@ 0000881a 04dc
.org 0x881c
	ldr r0, [pc, #20]	@ 0000881c 0548
.org 0x881e
	cmp r1, r0	@ 0000881e 8142
.org 0x8820
	bls.n 0x87ae	@ 00008820 c5d9
.org 0x8822
	cmp r7, #127	@ 00008822 7f2f
.org 0x8824
	ble.n 0x8838	@ 00008824 08dd
.org 0x8826
	adds r0, r6, #0	@ 00008826 301c
.org 0x8828
	mov r1, r9	@ 00008828 4946
.org 0x882a
	movs r2, #0	@ 0000882a 0022
.org 0x882c
	bl 0x972c	@ 0000882c 00f07eff
.org 0x8830
	b.n 0x8854	@ 00008830 10e0
.org 0x8832
	.byte 0x00	@ 00008832 data
.org 0x8833
	.byte 0x00	@ 00008833 data
.org 0x8834
	.byte 0xff,0x04,0x00,0x00	@ 00008834 data
.org 0x8838
	adds r0, r6, #0	@ 00008838 301c
.org 0x883a
	adds r1, r5, #0	@ 0000883a 291c
.org 0x883c
	bl 0x7f8c	@ 0000883c fff7a6fb
