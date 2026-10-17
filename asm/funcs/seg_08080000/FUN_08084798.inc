@ FUN_08084798  entry 0x08084798  size 254
.thumb
.org 0x84798
FUN_08084798:
	push {r4, r5, r6, r7, lr}	@ 00084798 f0b5
.org 0x8479a
	mov r7, r8	@ 0008479a 4746
.org 0x8479c
	push {r7}	@ 0008479c 80b4
.org 0x8479e
	adds r4, r0, #0	@ 0008479e 041c
.org 0x847a0
	ldrb r0, [r4, #15]	@ 000847a0 e07b
.org 0x847a2
	cmp r0, #0	@ 000847a2 0028
.org 0x847a4
	bne.n 0x847ca	@ 000847a4 11d1
.org 0x847a6
	ldr r1, [pc, #88]	@ 000847a6 1649
.org 0x847a8
	adds r0, r4, #0	@ 000847a8 201c
.org 0x847aa
	bl 0x1cf00	@ 000847aa 98f7a9fb
.org 0x847ae
	adds r0, r4, #0	@ 000847ae 201c
.org 0x847b0
	adds r0, #84	@ 000847b0 5430
.org 0x847b2
	ldrb r1, [r4, #10]	@ 000847b2 a17a
.org 0x847b4
	lsrs r1, r1, #4	@ 000847b4 0909
.org 0x847b6
	movs r2, #1	@ 000847b6 0122
.org 0x847b8
	ands r1, r2	@ 000847b8 1140
.org 0x847ba
	movs r2, #0	@ 000847ba 0022
.org 0x847bc
	bl 0xd6e54	@ 000847bc 52f04afb
.org 0x847c0
	movs r0, #48	@ 000847c0 3020
.org 0x847c2
	strb r0, [r4, #18]	@ 000847c2 a074
.org 0x847c4
	ldrb r0, [r4, #15]	@ 000847c4 e07b
.org 0x847c6
	adds r0, #1	@ 000847c6 0130
.org 0x847c8
	strb r0, [r4, #15]	@ 000847c8 e073
.org 0x847ca
	adds r0, r4, #0	@ 000847ca 201c
.org 0x847cc
	bl 0x1cff0	@ 000847cc 98f710fc
.org 0x847d0
	ldrb r0, [r4, #18]	@ 000847d0 a07c
.org 0x847d2
	subs r0, #1	@ 000847d2 0138
.org 0x847d4
	strb r0, [r4, #18]	@ 000847d4 a074
.org 0x847d6
	lsls r0, r0, #24	@ 000847d6 0006
.org 0x847d8
	lsrs r0, r0, #24	@ 000847d8 000e
.org 0x847da
	cmp r0, #255	@ 000847da ff28
.org 0x847dc
	bne.n 0x84898	@ 000847dc 5cd1
.org 0x847de
	adds r7, r4, #0	@ 000847de 271c
.org 0x847e0
	adds r7, #84	@ 000847e0 5437
.org 0x847e2
	ldr r0, [pc, #32]	@ 000847e2 0848
.org 0x847e4
	mov ip, r0	@ 000847e4 8446
.org 0x847e6
	adds r2, r4, #0	@ 000847e6 221c
.org 0x847e8
	adds r2, #180	@ 000847e8 b432
.org 0x847ea
	ldrb r5, [r2, #8]	@ 000847ea 157a
.org 0x847ec
	ldrb r1, [r4, #10]	@ 000847ec a17a
.org 0x847ee
	movs r3, #16	@ 000847ee 1023
.org 0x847f0
	adds r0, r3, #0	@ 000847f0 181c
.org 0x847f2
	ands r0, r1	@ 000847f2 0840
.org 0x847f4
	adds r6, r7, #0	@ 000847f4 3e1c
.org 0x847f6
	mov r8, r2	@ 000847f6 9046
.org 0x847f8
	cmp r0, #0	@ 000847f8 0028
.org 0x847fa
	beq.n 0x84808	@ 000847fa 05d0
.org 0x847fc
	orrs r3, r5	@ 000847fc 2b43
.org 0x847fe
	b.n 0x8480a	@ 000847fe 04e0
.org 0x84800
	.byte 0x08,0x1c,0x00,0x00	@ 00084800 data
.org 0x84804
	.byte 0x54,0xea,0x85,0x08	@ 00084804 data
.org 0x84808
	adds r3, r5, #0	@ 00084808 2b1c
.org 0x8480a
	adds r0, r7, #0	@ 0008480a 381c
.org 0x8480c
	mov r1, ip	@ 0008480c 6146
.org 0x8480e
	movs r2, #0	@ 0008480e 0022
.org 0x84810
	bl 0xd4c8c	@ 00084810 50f03cfa
.org 0x84814
	adds r5, r6, #0	@ 00084814 351c
.org 0x84816
	ldr r7, [pc, #20]	@ 00084816 054f
.org 0x84818
	mov r0, r8	@ 00084818 4046
.org 0x8481a
	ldrb r2, [r0, #8]	@ 0008481a 027a
.org 0x8481c
	ldrb r1, [r4, #10]	@ 0008481c a17a
.org 0x8481e
	movs r3, #16	@ 0008481e 1023
.org 0x84820
	adds r0, r3, #0	@ 00084820 181c
.org 0x84822
	ands r0, r1	@ 00084822 0840
.org 0x84824
	cmp r0, #0	@ 00084824 0028
.org 0x84826
	beq.n 0x84830	@ 00084826 03d0
.org 0x84828
	orrs r3, r2	@ 00084828 1343
.org 0x8482a
	b.n 0x84832	@ 0008482a 02e0
.org 0x8482c
	.byte 0x70,0xea,0x85,0x08	@ 0008482c data
.org 0x84830
	adds r3, r2, #0	@ 00084830 131c
.org 0x84832
	adds r0, r5, #0	@ 00084832 281c
.org 0x84834
	adds r1, r7, #0	@ 00084834 391c
.org 0x84836
	movs r2, #0	@ 00084836 0022
.org 0x84838
	bl 0xd4c8c	@ 00084838 50f028fa
.org 0x8483c
	movs r0, #1	@ 0008483c 0120
.org 0x8483e
	adds r1, r6, #0	@ 0008483e 311c
.org 0x84840
	bl 0xd0c88	@ 00084840 4cf022fa
.org 0x84844
	ldrb r1, [r4, #10]	@ 00084844 a17a
.org 0x84846
	movs r0, #16	@ 00084846 1020
.org 0x84848
	ands r0, r1	@ 00084848 0840
.org 0x8484a
	cmp r0, #0	@ 0008484a 0028
.org 0x8484c
	beq.n 0x84858	@ 0008484c 04d0
.org 0x8484e
	movs r0, #2	@ 0008484e 0220
.org 0x84850
	adds r1, r6, #0	@ 00084850 311c
.org 0x84852
	bl 0xd0c88	@ 00084852 4cf019fa
.org 0x84856
	b.n 0x84860	@ 00084856 03e0
.org 0x84858
	movs r0, #2	@ 00084858 0220
.org 0x8485a
	adds r1, r6, #0	@ 0008485a 311c
.org 0x8485c
	bl 0xd0c88	@ 0008485c 4cf014fa
.org 0x84860
	adds r2, r6, #0	@ 00084860 321c
.org 0x84862
	movs r0, #4	@ 00084862 0420
.org 0x84864
	movs r1, #18	@ 00084864 1221
.org 0x84866
	bl 0x2ab88	@ 00084866 a6f78ff9
.org 0x8486a
	movs r0, #42	@ 0008486a 2a20
.org 0x8486c
	bl 0x2b10	@ 0008486c 7ef750f9
.org 0x84870
	ldr r2, [pc, #48]	@ 00084870 0c4a
.org 0x84872
	ldrh r1, [r2, #12]	@ 00084872 9189
.org 0x84874
	ldr r0, [pc, #48]	@ 00084874 0c48
.org 0x84876
	cmp r1, r0	@ 00084876 8142
.org 0x84878
	bhi.n 0x8487e	@ 00084878 01d8
.org 0x8487a
	adds r0, r1, #1	@ 0008487a 481c
.org 0x8487c
	strh r0, [r2, #12]	@ 0008487c 9081
.org 0x8487e
	adds r0, r4, #0	@ 0008487e 201c
.org 0x84880
	adds r1, r6, #0	@ 00084880 311c
.org 0x84882
	bl 0x2abe0	@ 00084882 a6f7adf9
.org 0x84886
	ldr r1, [pc, #36]	@ 00084886 0949
.org 0x84888
	ldrb r0, [r4, #9]	@ 00084888 607a
.org 0x8488a
	lsls r0, r0, #2	@ 0008488a 8000
.org 0x8488c
	adds r0, r0, r1	@ 0008488c 4018
.org 0x8488e
	movs r1, #4	@ 0008488e 0421
.org 0x84890
	str r1, [r4, #12]	@ 00084890 e160
.org 0x84892
	ldr r0, [r0, #0]	@ 00084892 0068
.org 0x84894
	ldr r0, [r0, #16]	@ 00084894 0069
