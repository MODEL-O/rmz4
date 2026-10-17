@ FUN_080ce784  entry 0x080ce784  size 180
.thumb
.org 0xce784
FUN_080ce784:
	push {r4, r5, r6, r7, lr}	@ 000ce784 f0b5
.org 0xce786
	adds r7, r0, #0	@ 000ce786 071c
.org 0xce788
	bl 0x1cc9c	@ 000ce788 4ef788fa
.org 0xce78c
	ldrb r0, [r7, #10]	@ 000ce78c b87a
.org 0xce78e
	movs r1, #1	@ 000ce78e 0121
.org 0xce790
	movs r2, #0	@ 000ce790 0022
.org 0xce792
	movs r5, #0	@ 000ce792 0025
.org 0xce794
	orrs r1, r0	@ 000ce794 0143
.org 0xce796
	movs r0, #2	@ 000ce796 0220
.org 0xce798
	orrs r1, r0	@ 000ce798 0143
.org 0xce79a
	orrs r1, r2	@ 000ce79a 1143
.org 0xce79c
	strb r1, [r7, #10]	@ 000ce79c b972
.org 0xce79e
	ldr r2, [pc, #96]	@ 000ce79e 184a
.org 0xce7a0
	ldrb r0, [r7, #9]	@ 000ce7a0 787a
.org 0xce7a2
	lsls r0, r0, #2	@ 000ce7a2 8000
.org 0xce7a4
	adds r0, r0, r2	@ 000ce7a4 8018
.org 0xce7a6
	movs r6, #1	@ 000ce7a6 0126
.org 0xce7a8
	str r6, [r7, #12]	@ 000ce7a8 fe60
.org 0xce7aa
	ldr r0, [r0, #0]	@ 000ce7aa 0068
.org 0xce7ac
	ldr r0, [r0, #4]	@ 000ce7ac 4068
.org 0xce7ae
	str r0, [r7, #20]	@ 000ce7ae 7861
.org 0xce7b0
	movs r0, #4	@ 000ce7b0 0420
.org 0xce7b2
	orrs r1, r0	@ 000ce7b2 0143
.org 0xce7b4
	strb r1, [r7, #10]	@ 000ce7b4 b972
.org 0xce7b6
	adds r4, r7, #0	@ 000ce7b6 3c1c
.org 0xce7b8
	adds r4, #116	@ 000ce7b8 7434
.org 0xce7ba
	ldr r1, [pc, #72]	@ 000ce7ba 1249
.org 0xce7bc
	adds r2, r7, #0	@ 000ce7bc 3a1c
.org 0xce7be
	adds r2, #84	@ 000ce7be 5432
.org 0xce7c0
	adds r0, r4, #0	@ 000ce7c0 201c
.org 0xce7c2
	movs r3, #255	@ 000ce7c2 ff23
.org 0xce7c4
	bl 0x5760	@ 000ce7c4 36f7ccff
.org 0xce7c8
	str r7, [r4, #44]	@ 000ce7c8 e762
.org 0xce7ca
	ldr r0, [pc, #60]	@ 000ce7ca 0f48
.org 0xce7cc
	str r0, [r4, #36]	@ 000ce7cc 6062
.org 0xce7ce
	adds r0, r7, #0	@ 000ce7ce 381c
.org 0xce7d0
	adds r0, #185	@ 000ce7d0 b930
.org 0xce7d2
	strb r5, [r0, #0]	@ 000ce7d2 0570
.org 0xce7d4
	subs r0, #5	@ 000ce7d4 0538
.org 0xce7d6
	str r5, [r0, #0]	@ 000ce7d6 0560
.org 0xce7d8
	adds r0, #4	@ 000ce7d8 0430
.org 0xce7da
	strb r6, [r0, #0]	@ 000ce7da 0670
.org 0xce7dc
	adds r0, #2	@ 000ce7dc 0230
.org 0xce7de
	strb r5, [r0, #0]	@ 000ce7de 0570
.org 0xce7e0
	movs r0, #196	@ 000ce7e0 c420
.org 0xce7e2
	strb r0, [r7, #18]	@ 000ce7e2 b874
.org 0xce7e4
	ldr r1, [pc, #36]	@ 000ce7e4 0949
.org 0xce7e6
	adds r0, r7, #0	@ 000ce7e6 381c
.org 0xce7e8
	bl 0x1cf00	@ 000ce7e8 4ef78afb
.org 0xce7ec
	ldrb r1, [r7, #10]	@ 000ce7ec b97a
.org 0xce7ee
	movs r0, #16	@ 000ce7ee 1020
.org 0xce7f0
	ands r0, r1	@ 000ce7f0 0840
.org 0xce7f2
	cmp r0, #0	@ 000ce7f2 0028
.org 0xce7f4
	beq.n 0xce810	@ 000ce7f4 0cd0
.org 0xce7f6
	ldr r0, [r7, #84]	@ 000ce7f6 786d
.org 0xce7f8
	movs r1, #208	@ 000ce7f8 d021
.org 0xce7fa
	lsls r1, r1, #4	@ 000ce7fa 0901
.org 0xce7fc
	b.n 0xce814	@ 000ce7fc 0ae0
.org 0xce7fe
	.byte 0x00	@ 000ce7fe data
.org 0xce7ff
	.byte 0x00	@ 000ce7ff data
.org 0xce800
	.byte 0xf4,0x49,0x86,0x08	@ 000ce800 data
.org 0xce804
	.byte 0x08,0x6c,0x86,0x08	@ 000ce804 data
.org 0xce808
	.byte 0x6d,0xe9,0x0c,0x08	@ 000ce808 data
.org 0xce80c
	.byte 0x07,0xbb,0x00,0x00	@ 000ce80c data
.org 0xce810
	ldr r0, [r7, #84]	@ 000ce810 786d
.org 0xce812
	ldr r1, [pc, #56]	@ 000ce812 0e49
.org 0xce814
	adds r0, r0, r1	@ 000ce814 4018
.org 0xce816
	str r0, [r7, #84]	@ 000ce816 7865
.org 0xce818
	ldr r0, [r7, #88]	@ 000ce818 b86d
.org 0xce81a
	ldr r1, [pc, #52]	@ 000ce81a 0d49
.org 0xce81c
	adds r0, r0, r1	@ 000ce81c 4018
.org 0xce81e
	str r0, [r7, #88]	@ 000ce81e b865
.org 0xce820
	movs r2, #128	@ 000ce820 8022
.org 0xce822
	lsls r2, r2, #2	@ 000ce822 9200
.org 0xce824
	str r2, [r7, #92]	@ 000ce824 fa65
.org 0xce826
	ldr r0, [pc, #44]	@ 000ce826 0b48
.org 0xce828
	str r0, [r7, #96]	@ 000ce828 3866
.org 0xce82a
	ldrb r1, [r7, #10]	@ 000ce82a b97a
.org 0xce82c
	movs r0, #16	@ 000ce82c 1020
.org 0xce82e
	ands r0, r1	@ 000ce82e 0840
.org 0xce830
	cmp r0, #0	@ 000ce830 0028
.org 0xce832
	bne.n 0xce83e	@ 000ce832 04d1
.org 0xce834
	lsls r0, r2, #8	@ 000ce834 1002
.org 0xce836
	negs r0, r0	@ 000ce836 4042
