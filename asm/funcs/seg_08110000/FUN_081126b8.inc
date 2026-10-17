@ FUN_081126b8  entry 0x081126b8  size 436
.thumb
.org 0x1126b8
FUN_081126b8:
	push {r4, r5, r6, r7, lr}	@ 001126b8 f0b5
.org 0x1126ba
	mov r7, sl	@ 001126ba 5746
.org 0x1126bc
	mov r6, r9	@ 001126bc 4e46
.org 0x1126be
	mov r5, r8	@ 001126be 4546
.org 0x1126c0
	push {r5, r6, r7}	@ 001126c0 e0b4
.org 0x1126c2
	sub sp, #4	@ 001126c2 81b0
.org 0x1126c4
	adds r4, r1, #0	@ 001126c4 0c1c
.org 0x1126c6
	adds r5, r2, #0	@ 001126c6 151c
.org 0x1126c8
	ldr r1, [sp, #36]	@ 001126c8 0999
.org 0x1126ca
	ldr r2, [sp, #40]	@ 001126ca 0a9a
.org 0x1126cc
	lsls r0, r0, #24	@ 001126cc 0006
.org 0x1126ce
	lsls r4, r4, #24	@ 001126ce 2406
.org 0x1126d0
	lsrs r4, r4, #24	@ 001126d0 240e
.org 0x1126d2
	lsls r3, r3, #24	@ 001126d2 1b06
.org 0x1126d4
	lsrs r3, r3, #24	@ 001126d4 1b0e
.org 0x1126d6
	mov r9, r3	@ 001126d6 9946
.org 0x1126d8
	str r3, [sp, #0]	@ 001126d8 0093
.org 0x1126da
	lsls r1, r1, #24	@ 001126da 0906
.org 0x1126dc
	lsrs r1, r1, #24	@ 001126dc 090e
.org 0x1126de
	mov sl, r1	@ 001126de 8a46
.org 0x1126e0
	lsls r2, r2, #24	@ 001126e0 1206
.org 0x1126e2
	lsrs r6, r2, #24	@ 001126e2 160e
.org 0x1126e4
	ldr r1, [pc, #348]	@ 001126e4 5749
.org 0x1126e6
	mov r8, r1	@ 001126e6 8846
.org 0x1126e8
	lsrs r0, r0, #23	@ 001126e8 c00d
.org 0x1126ea
	adds r0, #62	@ 001126ea 3e30
.org 0x1126ec
	add r0, r8	@ 001126ec 4044
.org 0x1126ee
	ldrh r0, [r0, #0]	@ 001126ee 0088
.org 0x1126f0
	ldr r7, [pc, #340]	@ 001126f0 554f
.org 0x1126f2
	adds r0, r0, r7	@ 001126f2 c019
.org 0x1126f4
	movs r1, #7	@ 001126f4 0721
.org 0x1126f6
	adds r2, r6, #0	@ 001126f6 321c
.org 0x1126f8
	bl 0x10d85c	@ 001126f8 fbf7b0f8
.org 0x1126fc
	adds r4, #40	@ 001126fc 2834
.org 0x1126fe
	lsls r4, r4, #1	@ 001126fe 6400
.org 0x112700
	add r4, r8	@ 00112700 4444
.org 0x112702
	ldrh r0, [r4, #0]	@ 00112702 2088
.org 0x112704
	adds r0, r0, r7	@ 00112704 c019
.org 0x112706
	movs r1, #9	@ 00112706 0921
.org 0x112708
	adds r2, r6, #0	@ 00112708 321c
.org 0x11270a
	bl 0x10d85c	@ 0011270a fbf7a7f8
.org 0x11270e
	ldr r1, [pc, #316]	@ 0011270e 4f49
.org 0x112710
	adds r0, r5, #0	@ 00112710 281c
.org 0x112712
	bl 0x129120	@ 00112712 16f005fd
.org 0x112716
	adds r0, #30	@ 00112716 1e30
.org 0x112718
	lsls r0, r0, #1	@ 00112718 4000
.org 0x11271a
	add r0, r8	@ 0011271a 4044
.org 0x11271c
	ldrh r0, [r0, #0]	@ 0011271c 0088
.org 0x11271e
	adds r0, r0, r7	@ 0011271e c019
.org 0x112720
	movs r1, #14	@ 00112720 0e21
.org 0x112722
	adds r2, r6, #0	@ 00112722 321c
.org 0x112724
	bl 0x10d85c	@ 00112724 fbf79af8
.org 0x112728
	ldr r1, [pc, #292]	@ 00112728 4949
.org 0x11272a
	adds r0, r5, #0	@ 0011272a 281c
.org 0x11272c
	bl 0x129120	@ 0011272c 16f0f8fc
.org 0x112730
	movs r1, #10	@ 00112730 0a21
.org 0x112732
	bl 0x129198	@ 00112732 16f031fd
.org 0x112736
	adds r0, #30	@ 00112736 1e30
.org 0x112738
	lsls r0, r0, #1	@ 00112738 4000
.org 0x11273a
	add r0, r8	@ 0011273a 4044
.org 0x11273c
	ldrh r0, [r0, #0]	@ 0011273c 0088
.org 0x11273e
	adds r0, r0, r7	@ 0011273e c019
.org 0x112740
	movs r1, #15	@ 00112740 0f21
.org 0x112742
	adds r2, r6, #0	@ 00112742 321c
.org 0x112744
	bl 0x10d85c	@ 00112744 fbf78af8
.org 0x112748
	mov r3, r8	@ 00112748 4346
.org 0x11274a
	ldrh r0, [r3, #14]	@ 0011274a d889
.org 0x11274c
	adds r0, r0, r7	@ 0011274c c019
.org 0x11274e
	movs r1, #16	@ 0011274e 1021
.org 0x112750
	adds r2, r6, #0	@ 00112750 321c
.org 0x112752
	bl 0x10d85c	@ 00112752 fbf783f8
.org 0x112756
	ldr r1, [pc, #252]	@ 00112756 3f49
.org 0x112758
	adds r0, r5, #0	@ 00112758 281c
.org 0x11275a
	bl 0x129120	@ 0011275a 16f0e1fc
.org 0x11275e
	movs r1, #6	@ 0011275e 0621
.org 0x112760
	bl 0x129198	@ 00112760 16f01afd
.org 0x112764
	adds r0, #30	@ 00112764 1e30
.org 0x112766
	lsls r0, r0, #1	@ 00112766 4000
.org 0x112768
	add r0, r8	@ 00112768 4044
.org 0x11276a
	ldrh r0, [r0, #0]	@ 0011276a 0088
.org 0x11276c
	adds r0, r0, r7	@ 0011276c c019
.org 0x11276e
	movs r1, #17	@ 0011276e 1121
.org 0x112770
	adds r2, r6, #0	@ 00112770 321c
.org 0x112772
	bl 0x10d85c	@ 00112772 fbf773f8
.org 0x112776
	movs r1, #225	@ 00112776 e121
.org 0x112778
	lsls r1, r1, #4	@ 00112778 0901
.org 0x11277a
	adds r0, r5, #0	@ 0011277a 281c
.org 0x11277c
	bl 0x129120	@ 0011277c 16f0d0fc
.org 0x112780
	movs r1, #10	@ 00112780 0a21
.org 0x112782
	bl 0x129198	@ 00112782 16f009fd
.org 0x112786
	adds r0, #30	@ 00112786 1e30
.org 0x112788
	lsls r0, r0, #1	@ 00112788 4000
.org 0x11278a
	add r0, r8	@ 0011278a 4044
.org 0x11278c
	ldrh r0, [r0, #0]	@ 0011278c 0088
.org 0x11278e
	adds r0, r0, r7	@ 0011278e c019
.org 0x112790
	movs r1, #18	@ 00112790 1221
.org 0x112792
	adds r2, r6, #0	@ 00112792 321c
.org 0x112794
	bl 0x10d85c	@ 00112794 fbf762f8
.org 0x112798
	mov r1, r8	@ 00112798 4146
.org 0x11279a
	ldrh r0, [r1, #16]	@ 0011279a 088a
.org 0x11279c
	adds r0, r0, r7	@ 0011279c c019
.org 0x11279e
	movs r1, #19	@ 0011279e 1321
.org 0x1127a0
	adds r2, r6, #0	@ 001127a0 321c
.org 0x1127a2
	bl 0x10d85c	@ 001127a2 fbf75bf8
.org 0x1127a6
	movs r1, #150	@ 001127a6 9621
.org 0x1127a8
	lsls r1, r1, #2	@ 001127a8 8900
.org 0x1127aa
	adds r0, r5, #0	@ 001127aa 281c
.org 0x1127ac
	bl 0x129120	@ 001127ac 16f0b8fc
.org 0x1127b0
	movs r1, #6	@ 001127b0 0621
.org 0x1127b2
	bl 0x129198	@ 001127b2 16f0f1fc
.org 0x1127b6
	adds r0, #30	@ 001127b6 1e30
.org 0x1127b8
	lsls r0, r0, #1	@ 001127b8 4000
.org 0x1127ba
	add r0, r8	@ 001127ba 4044
.org 0x1127bc
	ldrh r0, [r0, #0]	@ 001127bc 0088
.org 0x1127be
	adds r0, r0, r7	@ 001127be c019
.org 0x1127c0
	movs r1, #20	@ 001127c0 1421
.org 0x1127c2
	adds r2, r6, #0	@ 001127c2 321c
.org 0x1127c4
	bl 0x10d85c	@ 001127c4 fbf74af8
.org 0x1127c8
	adds r0, r5, #0	@ 001127c8 281c
.org 0x1127ca
	movs r1, #60	@ 001127ca 3c21
.org 0x1127cc
	bl 0x129120	@ 001127cc 16f0a8fc
.org 0x1127d0
	movs r1, #10	@ 001127d0 0a21
.org 0x1127d2
	bl 0x129198	@ 001127d2 16f0e1fc
.org 0x1127d6
	adds r0, #30	@ 001127d6 1e30
.org 0x1127d8
	lsls r0, r0, #1	@ 001127d8 4000
.org 0x1127da
	add r0, r8	@ 001127da 4044
.org 0x1127dc
	ldrh r0, [r0, #0]	@ 001127dc 0088
.org 0x1127de
	adds r0, r0, r7	@ 001127de c019
.org 0x1127e0
	movs r1, #21	@ 001127e0 1521
.org 0x1127e2
	adds r2, r6, #0	@ 001127e2 321c
.org 0x1127e4
	bl 0x10d85c	@ 001127e4 fbf73af8
.org 0x1127e8
	mov r3, r9	@ 001127e8 4b46
.org 0x1127ea
	cmp r3, #0	@ 001127ea 002b
.org 0x1127ec
	beq.n 0x11282a	@ 001127ec 1dd0
.org 0x1127ee
	cmp r3, #9	@ 001127ee 092b
.org 0x1127f0
	bls.n 0x11280e	@ 001127f0 0dd9
.org 0x1127f2
	mov r0, r9	@ 001127f2 4846
.org 0x1127f4
	movs r1, #10	@ 001127f4 0a21
.org 0x1127f6
	bl 0x129120	@ 001127f6 16f093fc
.org 0x1127fa
	lsls r0, r0, #24	@ 001127fa 0006
.org 0x1127fc
	lsrs r0, r0, #23	@ 001127fc c00d
.org 0x1127fe
	adds r0, #60	@ 001127fe 3c30
.org 0x112800
	add r0, r8	@ 00112800 4044
.org 0x112802
	ldrh r0, [r0, #0]	@ 00112802 0088
.org 0x112804
	adds r0, r0, r7	@ 00112804 c019
.org 0x112806
	movs r1, #23	@ 00112806 1721
.org 0x112808
	adds r2, r6, #0	@ 00112808 321c
.org 0x11280a
	bl 0x10d85c	@ 0011280a fbf727f8
.org 0x11280e
	ldr r0, [sp, #0]	@ 0011280e 0098
.org 0x112810
	movs r1, #10	@ 00112810 0a21
.org 0x112812
	bl 0x129198	@ 00112812 16f0c1fc
.org 0x112816
	lsls r0, r0, #24	@ 00112816 0006
.org 0x112818
	lsrs r0, r0, #23	@ 00112818 c00d
.org 0x11281a
	adds r0, #60	@ 0011281a 3c30
.org 0x11281c
	add r0, r8	@ 0011281c 4044
.org 0x11281e
	ldrh r0, [r0, #0]	@ 0011281e 0088
.org 0x112820
	adds r0, r0, r7	@ 00112820 c019
.org 0x112822
	movs r1, #24	@ 00112822 1821
.org 0x112824
	adds r2, r6, #0	@ 00112824 321c
.org 0x112826
	bl 0x10d85c	@ 00112826 fbf719f8
.org 0x11282a
	mov r0, sl	@ 0011282a 5046
.org 0x11282c
	cmp r0, #1	@ 0011282c 0128
.org 0x11282e
	bne.n 0x112858	@ 0011282e 13d1
.org 0x112830
	ldr r0, [pc, #16]	@ 00112830 0448
.org 0x112832
	ldrh r0, [r0, #6]	@ 00112832 c088
.org 0x112834
	ldr r1, [pc, #16]	@ 00112834 0449
.org 0x112836
	adds r0, r0, r1	@ 00112836 4018
.org 0x112838
	movs r1, #7	@ 00112838 0721
.org 0x11283a
	adds r1, #18	@ 0011283a 1231
.org 0x11283c
	adds r2, r6, #0	@ 0011283c 321c
.org 0x11283e
	bl 0x10d85c	@ 0011283e fbf70df8
.org 0x112842
	b.n 0x112870	@ 00112842 15e0
.org 0x112844
	.byte 0xf8,0xcf,0x86,0x08	@ 00112844 data
.org 0x112848
	.byte 0x5f,0x0e,0x01,0x09	@ 00112848 data
.org 0x11284c
	.byte 0x80,0xf5,0x20,0x00	@ 0011284c data
.org 0x112850
	.byte 0xc0,0x4b,0x03,0x00	@ 00112850 data
.org 0x112854
	.byte 0xa0,0x8c,0x00,0x00	@ 00112854 data
.org 0x112858
	mov r1, sl	@ 00112858 5146
.org 0x11285a
	cmp r1, #2	@ 0011285a 0229
.org 0x11285c
	bne.n 0x112870	@ 0011285c 08d1
.org 0x11285e
	ldr r0, [pc, #32]	@ 0011285e 0848
.org 0x112860
	ldrh r0, [r0, #8]	@ 00112860 0089
.org 0x112862
	ldr r1, [pc, #32]	@ 00112862 0849
.org 0x112864
	adds r0, r0, r1	@ 00112864 4018
.org 0x112866
	movs r1, #7	@ 00112866 0721
.org 0x112868
	adds r1, #18	@ 00112868 1231
.org 0x11286a
	adds r2, r6, #0	@ 0011286a 321c
