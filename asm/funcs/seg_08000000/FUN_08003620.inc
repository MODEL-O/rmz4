@ FUN_08003620  entry 0x08003620  size 1230
.thumb
.org 0x3620
FUN_08003620:
	push {r4, r5, r6, r7, lr}	@ 00003620 f0b5
.org 0x3622
	mov r7, sl	@ 00003622 5746
.org 0x3624
	mov r6, r9	@ 00003624 4e46
.org 0x3626
	mov r5, r8	@ 00003626 4546
.org 0x3628
	push {r5, r6, r7}	@ 00003628 e0b4
.org 0x362a
	sub sp, #60	@ 0000362a 8fb0
.org 0x362c
	mov r8, r0	@ 0000362c 8046
.org 0x362e
	str r1, [sp, #0]	@ 0000362e 0091
.org 0x3630
	str r2, [sp, #4]	@ 00003630 0192
.org 0x3632
	movs r0, #0	@ 00003632 0020
.org 0x3634
	str r0, [sp, #24]	@ 00003634 0690
.org 0x3636
	ldr r3, [r1, #0]	@ 00003636 0b68
.org 0x3638
	movs r2, #16	@ 00003638 1022
.org 0x363a
	adds r1, r3, #0	@ 0000363a 191c
.org 0x363c
	ands r1, r2	@ 0000363c 1140
.org 0x363e
	mov r7, r8	@ 0000363e 4746
.org 0x3640
	ldr r4, [r7, #0]	@ 00003640 3c68
.org 0x3642
	adds r0, r4, #0	@ 00003642 201c
.org 0x3644
	ands r0, r2	@ 00003644 1040
.org 0x3646
	cmp r1, r0	@ 00003646 8142
.org 0x3648
	beq.n 0x3676	@ 00003648 15d0
.org 0x364a
	cmp r3, r4	@ 0000364a a342
.org 0x364c
	ble.n 0x3664	@ 0000364c 0add
.org 0x364e
	movs r0, #136	@ 0000364e 8820
.org 0x3650
	lsls r0, r0, #1	@ 00003650 4000
.org 0x3652
	adds r0, r3, r0	@ 00003652 1818
.org 0x3654
	str r0, [sp, #8]	@ 00003654 0290
.org 0x3656
	ldr r1, [sp, #0]	@ 00003656 0099
.org 0x3658
	ldr r0, [r1, #4]	@ 00003658 4868
.org 0x365a
	adds r2, r0, #0	@ 0000365a 021c
.org 0x365c
	subs r2, #16	@ 0000365c 103a
.org 0x365e
	str r2, [sp, #12]	@ 0000365e 0392
.org 0x3660
	adds r4, r0, #0	@ 00003660 041c
.org 0x3662
	b.n 0x367e	@ 00003662 0ce0
.org 0x3664
	subs r3, #32	@ 00003664 203b
.org 0x3666
	str r3, [sp, #8]	@ 00003666 0293
.org 0x3668
	ldr r3, [sp, #0]	@ 00003668 009b
.org 0x366a
	ldr r0, [r3, #4]	@ 0000366a 5868
.org 0x366c
	adds r4, r0, #0	@ 0000366c 041c
.org 0x366e
	subs r4, #16	@ 0000366e 103c
.org 0x3670
	str r4, [sp, #12]	@ 00003670 0394
.org 0x3672
	adds r4, r0, #0	@ 00003672 041c
.org 0x3674
	b.n 0x367e	@ 00003674 03e0
.org 0x3676
	movs r7, #1	@ 00003676 0127
.org 0x3678
	str r7, [sp, #24]	@ 00003678 0697
.org 0x367a
	ldr r0, [sp, #0]	@ 0000367a 0098
.org 0x367c
	ldr r4, [r0, #4]	@ 0000367c 4468
.org 0x367e
	adds r3, r4, #0	@ 0000367e 231c
.org 0x3680
	movs r2, #16	@ 00003680 1022
.org 0x3682
	adds r1, r3, #0	@ 00003682 191c
.org 0x3684
	ands r1, r2	@ 00003684 1140
.org 0x3686
	mov r7, r8	@ 00003686 4746
.org 0x3688
	ldr r5, [r7, #4]	@ 00003688 7d68
.org 0x368a
	adds r0, r5, #0	@ 0000368a 281c
.org 0x368c
	ands r0, r2	@ 0000368c 1040
.org 0x368e
	cmp r1, r0	@ 0000368e 8142
.org 0x3690
	beq.n 0x36b2	@ 00003690 0fd0
.org 0x3692
	cmp r3, r5	@ 00003692 ab42
.org 0x3694
	ble.n 0x36a4	@ 00003694 06dd
.org 0x3696
	ldr r1, [sp, #0]	@ 00003696 0099
.org 0x3698
	ldr r0, [r1, #0]	@ 00003698 0868
.org 0x369a
	subs r0, #32	@ 0000369a 2038
.org 0x369c
	str r0, [sp, #16]	@ 0000369c 0490
.org 0x369e
	adds r3, #176	@ 0000369e b033
.org 0x36a0
	str r3, [sp, #20]	@ 000036a0 0593
.org 0x36a2
	b.n 0x36ba	@ 000036a2 0ae0
.org 0x36a4
	ldr r2, [sp, #0]	@ 000036a4 009a
.org 0x36a6
	ldr r0, [r2, #0]	@ 000036a6 1068
.org 0x36a8
	subs r0, #32	@ 000036a8 2038
.org 0x36aa
	str r0, [sp, #16]	@ 000036aa 0490
.org 0x36ac
	subs r4, #16	@ 000036ac 103c
.org 0x36ae
	str r4, [sp, #20]	@ 000036ae 0594
.org 0x36b0
	b.n 0x36ba	@ 000036b0 03e0
.org 0x36b2
	movs r0, #2	@ 000036b2 0220
.org 0x36b4
	ldr r3, [sp, #24]	@ 000036b4 069b
.org 0x36b6
	orrs r3, r0	@ 000036b6 0343
.org 0x36b8
	str r3, [sp, #24]	@ 000036b8 0693
.org 0x36ba
	ldr r4, [sp, #8]	@ 000036ba 029c
.org 0x36bc
	cmp r4, #0	@ 000036bc 002c
.org 0x36be
	bge.n 0x36c4	@ 000036be 01da
.org 0x36c0
	movs r7, #0	@ 000036c0 0027
.org 0x36c2
	str r7, [sp, #8]	@ 000036c2 0297
.org 0x36c4
	ldr r0, [sp, #12]	@ 000036c4 0398
.org 0x36c6
	cmp r0, #0	@ 000036c6 0028
.org 0x36c8
	bge.n 0x36ce	@ 000036c8 01da
.org 0x36ca
	movs r1, #0	@ 000036ca 0021
.org 0x36cc
	str r1, [sp, #12]	@ 000036cc 0391
.org 0x36ce
	ldr r2, [sp, #16]	@ 000036ce 049a
.org 0x36d0
	cmp r2, #0	@ 000036d0 002a
.org 0x36d2
	bge.n 0x36d8	@ 000036d2 01da
.org 0x36d4
	movs r3, #0	@ 000036d4 0023
.org 0x36d6
	str r3, [sp, #16]	@ 000036d6 0493
.org 0x36d8
	ldr r4, [sp, #20]	@ 000036d8 059c
.org 0x36da
	cmp r4, #0	@ 000036da 002c
.org 0x36dc
	bge.n 0x36e2	@ 000036dc 01da
.org 0x36de
	movs r7, #0	@ 000036de 0027
.org 0x36e0
	str r7, [sp, #20]	@ 000036e0 0597
.org 0x36e2
	movs r0, #1	@ 000036e2 0120
.org 0x36e4
	ldr r1, [sp, #24]	@ 000036e4 0699
.org 0x36e6
	ands r0, r1	@ 000036e6 0840
.org 0x36e8
	cmp r0, #0	@ 000036e8 0028
.org 0x36ea
	beq.n 0x36ee	@ 000036ea 00d0
.org 0x36ec
	b.n 0x38ca	@ 000036ec ede0
.org 0x36ee
	ldr r2, [sp, #8]	@ 000036ee 029a
.org 0x36f0
	mov sl, r2	@ 000036f0 9246
.org 0x36f2
	adds r0, r2, #0	@ 000036f2 101c
.org 0x36f4
	movs r1, #240	@ 000036f4 f021
.org 0x36f6
	bl 0x128fb8	@ 000036f6 25f15ffc
.org 0x36fa
	adds r4, r0, #0	@ 000036fa 041c
.org 0x36fc
	adds r4, #4	@ 000036fc 0434
.org 0x36fe
	mov r3, r8	@ 000036fe 4346
.org 0x3700
	ldr r6, [r3, #20]	@ 00003700 5e69
.org 0x3702
	adds r4, r6, r4	@ 00003702 3419
.org 0x3704
	ldr r5, [sp, #12]	@ 00003704 039d
.org 0x3706
	adds r0, r5, #0	@ 00003706 281c
.org 0x3708
	movs r1, #160	@ 00003708 a021
.org 0x370a
	bl 0x128fb8	@ 0000370a 25f155fc
.org 0x370e
	ldrb r1, [r6, #0]	@ 0000370e 3178
.org 0x3710
	muls r0, r1	@ 00003710 4843
.org 0x3712
	adds r4, r4, r0	@ 00003712 2418
.org 0x3714
	mov r9, r4	@ 00003714 a146
.org 0x3716
	ldr r0, [sp, #8]	@ 00003716 0298
.org 0x3718
	movs r1, #240	@ 00003718 f021
.org 0x371a
	bl 0x129050	@ 0000371a 25f199fc
.org 0x371e
	lsls r0, r0, #12	@ 0000371e 0003
.org 0x3720
	lsrs r0, r0, #16	@ 00003720 000c
.org 0x3722
	str r0, [sp, #28]	@ 00003722 0790
.org 0x3724
	adds r0, r5, #0	@ 00003724 281c
.org 0x3726
	movs r1, #160	@ 00003726 a021
.org 0x3728
	bl 0x129050	@ 00003728 25f192fc
.org 0x372c
	lsls r0, r0, #12	@ 0000372c 0003
.org 0x372e
	ldrb r2, [r4, #0]	@ 0000372e 2278
.org 0x3730
	lsls r1, r2, #2	@ 00003730 9100
.org 0x3732
	adds r1, r1, r2	@ 00003732 8918
.org 0x3734
	lsls r2, r1, #4	@ 00003734 0a01
.org 0x3736
	subs r2, r2, r1	@ 00003736 521a
.org 0x3738
	lsls r2, r2, #2	@ 00003738 9200
.org 0x373a
	mov r4, r8	@ 0000373a 4446
.org 0x373c
	ldr r3, [r4, #16]	@ 0000373c 2369
.org 0x373e
	adds r2, r3, r2	@ 0000373e 9a18
.org 0x3740
	ldr r7, [sp, #28]	@ 00003740 079f
.org 0x3742
	lsls r1, r7, #16	@ 00003742 3904
.org 0x3744
	asrs r1, r1, #15	@ 00003744 c913
.org 0x3746
	adds r2, r2, r1	@ 00003746 5218
.org 0x3748
	lsrs r1, r0, #16	@ 00003748 010c
.org 0x374a
	str r1, [sp, #32]	@ 0000374a 0891
.org 0x374c
	asrs r0, r0, #16	@ 0000374c 0014
.org 0x374e
	lsls r1, r0, #4	@ 0000374e 0101
.org 0x3750
	subs r1, r1, r0	@ 00003750 091a
.org 0x3752
	lsls r1, r1, #1	@ 00003752 4900
.org 0x3754
	adds r5, r2, r1	@ 00003754 5518
.org 0x3756
	movs r7, #0	@ 00003756 0027
.org 0x3758
	movs r1, #10	@ 00003758 0a21
.org 0x375a
	subs r1, r1, r0	@ 0000375a 091a
.org 0x375c
	str r6, [sp, #56]	@ 0000375c 0e96
.org 0x375e
	str r3, [sp, #52]	@ 0000375e 0d93
.org 0x3760
	cmp r7, r1	@ 00003760 8f42
.org 0x3762
	bge.n 0x37c0	@ 00003762 2dda
.org 0x3764
	mov r2, sp	@ 00003764 6a46
.org 0x3766
	ldrh r3, [r2, #12]	@ 00003766 9389
.org 0x3768
	strh r3, [r2, #36]	@ 00003768 9384
.org 0x376a
	ldr r0, [sp, #8]	@ 0000376a 0298
.org 0x376c
	asrs r4, r0, #3	@ 0000376c c410
.org 0x376e
	movs r0, #30	@ 0000376e 1e20
.org 0x3770
	ands r4, r0	@ 00003770 0440
.org 0x3772
	adds r0, #226	@ 00003772 e230
.org 0x3774
	mov r2, sl	@ 00003774 5246
.org 0x3776
	ands r2, r0	@ 00003776 0240
.org 0x3778
	lsls r2, r2, #3	@ 00003778 d200
.org 0x377a
	mov ip, r2	@ 0000377a 9446
.org 0x377c
	mov r3, r8	@ 0000377c 4346
.org 0x377e
	ldr r3, [r3, #12]	@ 0000377e db68
.org 0x3780
	mov sl, r3	@ 00003780 9a46
.org 0x3782
	adds r6, r1, #0	@ 00003782 0e1c
.org 0x3784
	lsls r2, r7, #16	@ 00003784 3a04
.org 0x3786
	asrs r2, r2, #16	@ 00003786 1214
.org 0x3788
	lsls r0, r2, #4	@ 00003788 1001
.org 0x378a
	mov r7, sp	@ 0000378a 6f46
.org 0x378c
	ldrh r7, [r7, #36]	@ 0000378c bf8c
.org 0x378e
	adds r0, r7, r0	@ 0000378e 3818
.org 0x3790
	ldrh r3, [r5, #0]	@ 00003790 2b88
.org 0x3792
	lsls r3, r3, #3	@ 00003792 db00
.org 0x3794
	add r3, sl	@ 00003794 5344
.org 0x3796
	lsls r0, r0, #16	@ 00003796 0004
.org 0x3798
	asrs r0, r0, #14	@ 00003798 8013
.org 0x379a
	movs r1, #240	@ 0000379a f021
.org 0x379c
	lsls r1, r1, #2	@ 0000379c 8900
.org 0x379e
	ands r0, r1	@ 0000379e 0840
.org 0x37a0
	adds r0, r0, r4	@ 000037a0 0019
.org 0x37a2
	lsls r0, r0, #1	@ 000037a2 4000
.org 0x37a4
	ldr r1, [sp, #4]	@ 000037a4 0199
.org 0x37a6
	adds r0, r0, r1	@ 000037a6 4018
.org 0x37a8
	add r0, ip	@ 000037a8 6044
.org 0x37aa
	ldr r1, [r3, #0]	@ 000037aa 1968
.org 0x37ac
	str r1, [r0, #0]	@ 000037ac 0160
.org 0x37ae
	ldr r1, [r3, #4]	@ 000037ae 5968
.org 0x37b0
	str r1, [r0, #64]	@ 000037b0 0164
.org 0x37b2
	adds r5, #30	@ 000037b2 1e35
.org 0x37b4
	adds r2, #1	@ 000037b4 0132
.org 0x37b6
	lsls r2, r2, #16	@ 000037b6 1204
.org 0x37b8
	lsrs r7, r2, #16	@ 000037b8 170c
.org 0x37ba
	asrs r2, r2, #16	@ 000037ba 1214
.org 0x37bc
	cmp r2, r6	@ 000037bc b242
.org 0x37be
	blt.n 0x3784	@ 000037be e1db
.org 0x37c0
	ldr r2, [sp, #56]	@ 000037c0 0e9a
.org 0x37c2
	ldrb r0, [r2, #0]	@ 000037c2 1078
.org 0x37c4
	add r9, r0	@ 000037c4 8144
.org 0x37c6
	mov r3, r9	@ 000037c6 4b46
.org 0x37c8
	ldrb r0, [r3, #0]	@ 000037c8 1878
.org 0x37ca
	lsls r1, r0, #2	@ 000037ca 8100
.org 0x37cc
	adds r1, r1, r0	@ 000037cc 0918
.org 0x37ce
	lsls r0, r1, #4	@ 000037ce 0801
.org 0x37d0
	subs r0, r0, r1	@ 000037d0 401a
.org 0x37d2
	lsls r0, r0, #2	@ 000037d2 8000
.org 0x37d4
	ldr r4, [sp, #52]	@ 000037d4 0d9c
.org 0x37d6
	adds r0, r4, r0	@ 000037d6 2018
.org 0x37d8
	ldr r1, [sp, #28]	@ 000037d8 0799
.org 0x37da
	lsls r2, r1, #16	@ 000037da 0a04
.org 0x37dc
	asrs r1, r2, #15	@ 000037dc d113
.org 0x37de
	adds r5, r0, r1	@ 000037de 4518
.org 0x37e0
	lsls r3, r7, #16	@ 000037e0 3b04
.org 0x37e2
	asrs r0, r3, #16	@ 000037e2 1814
.org 0x37e4
	str r2, [sp, #44]	@ 000037e4 0b92
.org 0x37e6
	cmp r0, #12	@ 000037e6 0c28
.org 0x37e8
	bgt.n 0x3856	@ 000037e8 35dc
.org 0x37ea
	subs r0, #10	@ 000037ea 0a38
.org 0x37ec
	ldr r2, [sp, #32]	@ 000037ec 089a
.org 0x37ee
	lsls r6, r2, #16	@ 000037ee 1604
.org 0x37f0
	asrs r1, r6, #16	@ 000037f0 3114
.org 0x37f2
	adds r0, r0, r1	@ 000037f2 4018
.org 0x37f4
	cmp r0, #9	@ 000037f4 0928
.org 0x37f6
	bgt.n 0x3856	@ 000037f6 2edc
.org 0x37f8
	mov r4, sp	@ 000037f8 6c46
.org 0x37fa
	ldrh r4, [r4, #12]	@ 000037fa a489
.org 0x37fc
	mov ip, r4	@ 000037fc a446
.org 0x37fe
	ldr r7, [sp, #8]	@ 000037fe 029f
.org 0x3800
	asrs r4, r7, #3	@ 00003800 fc10
.org 0x3802
	movs r0, #30	@ 00003802 1e20
.org 0x3804
	ands r4, r0	@ 00003804 0440
.org 0x3806
	adds r0, #226	@ 00003806 e230
.org 0x3808
	adds r1, r7, #0	@ 00003808 391c
.org 0x380a
	ands r0, r1	@ 0000380a 0840
.org 0x380c
	lsls r0, r0, #3	@ 0000380c c000
.org 0x380e
	mov sl, r0	@ 0000380e 8246
.org 0x3810
	asrs r3, r3, #16	@ 00003810 1b14
.org 0x3812
	lsls r0, r3, #4	@ 00003812 1801
.org 0x3814
	add r0, ip	@ 00003814 6044
.org 0x3816
	ldrh r1, [r5, #0]	@ 00003816 2988
.org 0x3818
	lsls r1, r1, #3	@ 00003818 c900
.org 0x381a
	mov r7, r8	@ 0000381a 4746
.org 0x381c
	ldr r2, [r7, #12]	@ 0000381c fa68
.org 0x381e
	adds r2, r2, r1	@ 0000381e 5218
.org 0x3820
	lsls r0, r0, #16	@ 00003820 0004
.org 0x3822
	asrs r0, r0, #14	@ 00003822 8013
.org 0x3824
	movs r1, #240	@ 00003824 f021
.org 0x3826
	lsls r1, r1, #2	@ 00003826 8900
.org 0x3828
	ands r0, r1	@ 00003828 0840
.org 0x382a
	adds r0, r0, r4	@ 0000382a 0019
.org 0x382c
	lsls r0, r0, #1	@ 0000382c 4000
.org 0x382e
	ldr r1, [sp, #4]	@ 0000382e 0199
.org 0x3830
	adds r0, r0, r1	@ 00003830 4018
.org 0x3832
	add r0, sl	@ 00003832 5044
.org 0x3834
	ldr r1, [r2, #0]	@ 00003834 1168
.org 0x3836
	str r1, [r0, #0]	@ 00003836 0160
.org 0x3838
	ldr r1, [r2, #4]	@ 00003838 5168
.org 0x383a
	str r1, [r0, #64]	@ 0000383a 0164
.org 0x383c
	adds r5, #30	@ 0000383c 1e35
.org 0x383e
	adds r3, #1	@ 0000383e 0133
.org 0x3840
	lsls r3, r3, #16	@ 00003840 1b04
.org 0x3842
	lsrs r7, r3, #16	@ 00003842 1f0c
.org 0x3844
	lsls r3, r7, #16	@ 00003844 3b04
.org 0x3846
	asrs r0, r3, #16	@ 00003846 1814
.org 0x3848
	cmp r0, #12	@ 00003848 0c28
.org 0x384a
	bgt.n 0x3856	@ 0000384a 04dc
.org 0x384c
	subs r0, #10	@ 0000384c 0a38
.org 0x384e
	asrs r1, r6, #16	@ 0000384e 3114
.org 0x3850
	adds r0, r0, r1	@ 00003850 4018
.org 0x3852
	cmp r0, #9	@ 00003852 0928
.org 0x3854
	ble.n 0x3810	@ 00003854 dcdd
.org 0x3856
	ldr r2, [sp, #56]	@ 00003856 0e9a
.org 0x3858
	ldrb r0, [r2, #0]	@ 00003858 1078
.org 0x385a
	add r9, r0	@ 0000385a 8144
.org 0x385c
	mov r3, r9	@ 0000385c 4b46
.org 0x385e
	ldrb r0, [r3, #0]	@ 0000385e 1878
.org 0x3860
	lsls r1, r0, #2	@ 00003860 8100
.org 0x3862
	adds r1, r1, r0	@ 00003862 0918
.org 0x3864
	lsls r0, r1, #4	@ 00003864 0801
.org 0x3866
	subs r0, r0, r1	@ 00003866 401a
.org 0x3868
	lsls r0, r0, #2	@ 00003868 8000
.org 0x386a
	ldr r4, [sp, #52]	@ 0000386a 0d9c
.org 0x386c
	adds r0, r4, r0	@ 0000386c 2018
.org 0x386e
	ldr r2, [sp, #44]	@ 0000386e 0b9a
.org 0x3870
	asrs r1, r2, #15	@ 00003870 d113
.org 0x3872
	adds r5, r0, r1	@ 00003872 4518
.org 0x3874
	lsls r2, r7, #16	@ 00003874 3a04
.org 0x3876
	asrs r0, r2, #16	@ 00003876 1014
.org 0x3878
	cmp r0, #12	@ 00003878 0c28
.org 0x387a
	bgt.n 0x38ca	@ 0000387a 26dc
.org 0x387c
	mov r3, sp	@ 0000387c 6b46
.org 0x387e
	ldrh r3, [r3, #12]	@ 0000387e 9b89
.org 0x3880
	mov r9, r3	@ 00003880 9946
.org 0x3882
	ldr r7, [sp, #8]	@ 00003882 029f
.org 0x3884
	asrs r4, r7, #3	@ 00003884 fc10
.org 0x3886
	movs r0, #30	@ 00003886 1e20
.org 0x3888
	ands r4, r0	@ 00003888 0440
.org 0x388a
	adds r0, #226	@ 0000388a e230
.org 0x388c
	adds r1, r7, #0	@ 0000388c 391c
.org 0x388e
	ands r0, r1	@ 0000388e 0840
.org 0x3890
	lsls r7, r0, #3	@ 00003890 c700
.org 0x3892
	mov r3, r8	@ 00003892 4346
.org 0x3894
	ldr r6, [r3, #12]	@ 00003894 de68
.org 0x3896
	asrs r3, r2, #16	@ 00003896 1314
.org 0x3898
	lsls r0, r3, #4	@ 00003898 1801
.org 0x389a
	add r0, r9	@ 0000389a 4844
.org 0x389c
	ldrh r2, [r5, #0]	@ 0000389c 2a88
.org 0x389e
	lsls r2, r2, #3	@ 0000389e d200
.org 0x38a0
	adds r2, r6, r2	@ 000038a0 b218
.org 0x38a2
	lsls r0, r0, #16	@ 000038a2 0004
.org 0x38a4
	asrs r0, r0, #14	@ 000038a4 8013
.org 0x38a6
	movs r1, #240	@ 000038a6 f021
.org 0x38a8
	lsls r1, r1, #2	@ 000038a8 8900
.org 0x38aa
	ands r0, r1	@ 000038aa 0840
.org 0x38ac
	adds r0, r0, r4	@ 000038ac 0019
.org 0x38ae
	lsls r0, r0, #1	@ 000038ae 4000
.org 0x38b0
	ldr r1, [sp, #4]	@ 000038b0 0199
.org 0x38b2
	adds r0, r0, r1	@ 000038b2 4018
.org 0x38b4
	adds r0, r7, r0	@ 000038b4 3818
.org 0x38b6
	ldr r1, [r2, #0]	@ 000038b6 1168
.org 0x38b8
	str r1, [r0, #0]	@ 000038b8 0160
.org 0x38ba
	ldr r1, [r2, #4]	@ 000038ba 5168
.org 0x38bc
	str r1, [r0, #64]	@ 000038bc 0164
.org 0x38be
	adds r5, #30	@ 000038be 1e35
.org 0x38c0
	adds r3, #1	@ 000038c0 0133
.org 0x38c2
	lsls r2, r3, #16	@ 000038c2 1a04
.org 0x38c4
	asrs r0, r2, #16	@ 000038c4 1014
.org 0x38c6
	cmp r0, #12	@ 000038c6 0c28
.org 0x38c8
	ble.n 0x3896	@ 000038c8 e5dd
.org 0x38ca
	movs r0, #2	@ 000038ca 0220
.org 0x38cc
	ldr r2, [sp, #24]	@ 000038cc 069a
.org 0x38ce
	ands r2, r0	@ 000038ce 0240
.org 0x38d0
	cmp r2, #0	@ 000038d0 002a
.org 0x38d2
	beq.n 0x38d6	@ 000038d2 00d0
.org 0x38d4
	b.n 0x3ac4	@ 000038d4 f6e0
.org 0x38d6
	ldr r0, [sp, #16]	@ 000038d6 0498
.org 0x38d8
	movs r1, #240	@ 000038d8 f021
.org 0x38da
	bl 0x128fb8	@ 000038da 25f16dfb
.org 0x38de
	adds r4, r0, #0	@ 000038de 041c
.org 0x38e0
	adds r4, #4	@ 000038e0 0434
.org 0x38e2
	mov r3, r8	@ 000038e2 4346
.org 0x38e4
	ldr r5, [r3, #20]	@ 000038e4 5d69
.org 0x38e6
	adds r4, r5, r4	@ 000038e6 2c19
.org 0x38e8
	ldr r6, [sp, #20]	@ 000038e8 059e
.org 0x38ea
	adds r0, r6, #0	@ 000038ea 301c
.org 0x38ec
	movs r1, #160	@ 000038ec a021
.org 0x38ee
	bl 0x128fb8	@ 000038ee 25f163fb
.org 0x38f2
	ldrb r1, [r5, #0]	@ 000038f2 2978
.org 0x38f4
	muls r0, r1	@ 000038f4 4843
.org 0x38f6
	adds r4, r4, r0	@ 000038f6 2418
.org 0x38f8
	mov r9, r4	@ 000038f8 a146
.org 0x38fa
	ldr r0, [sp, #16]	@ 000038fa 0498
.org 0x38fc
	movs r1, #240	@ 000038fc f021
.org 0x38fe
	bl 0x129050	@ 000038fe 25f1a7fb
.org 0x3902
	lsls r0, r0, #12	@ 00003902 0003
.org 0x3904
	lsrs r0, r0, #16	@ 00003904 000c
.org 0x3906
	str r0, [sp, #28]	@ 00003906 0790
.org 0x3908
	adds r0, r6, #0	@ 00003908 301c
.org 0x390a
	movs r1, #160	@ 0000390a a021
.org 0x390c
	bl 0x129050	@ 0000390c 25f1a0fb
.org 0x3910
	lsls r0, r0, #12	@ 00003910 0003
.org 0x3912
	ldrb r2, [r4, #0]	@ 00003912 2278
.org 0x3914
	lsls r1, r2, #2	@ 00003914 9100
.org 0x3916
	adds r1, r1, r2	@ 00003916 8918
.org 0x3918
	lsls r2, r1, #4	@ 00003918 0a01
.org 0x391a
	subs r2, r2, r1	@ 0000391a 521a
.org 0x391c
	lsls r2, r2, #2	@ 0000391c 9200
.org 0x391e
	mov r7, r8	@ 0000391e 4746
.org 0x3920
	ldr r4, [r7, #16]	@ 00003920 3c69
.org 0x3922
	adds r2, r4, r2	@ 00003922 a218
.org 0x3924
	ldr r1, [sp, #28]	@ 00003924 0799
.org 0x3926
	lsls r3, r1, #16	@ 00003926 0b04
.org 0x3928
	asrs r3, r3, #16	@ 00003928 1b14
.org 0x392a
	lsls r1, r3, #1	@ 0000392a 5900
.org 0x392c
	adds r2, r2, r1	@ 0000392c 5218
.org 0x392e
	lsrs r7, r0, #16	@ 0000392e 070c
.org 0x3930
	str r7, [sp, #32]	@ 00003930 0897
.org 0x3932
	asrs r0, r0, #16	@ 00003932 0014
.org 0x3934
	lsls r1, r0, #4	@ 00003934 0101
.org 0x3936
	subs r1, r1, r0	@ 00003936 091a
.org 0x3938
	lsls r1, r1, #1	@ 00003938 4900
.org 0x393a
	adds r5, r2, r1	@ 0000393a 5518
.org 0x393c
	movs r7, #0	@ 0000393c 0027
.org 0x393e
	movs r0, #15	@ 0000393e 0f20
.org 0x3940
	subs r1, r0, r3	@ 00003940 c11a
.org 0x3942
	str r4, [sp, #52]	@ 00003942 0d94
.org 0x3944
	cmp r7, r1	@ 00003944 8f42
.org 0x3946
	bge.n 0x39a6	@ 00003946 2eda
.org 0x3948
	mov r0, sp	@ 00003948 6846
.org 0x394a
	ldrh r2, [r0, #16]	@ 0000394a 028a
.org 0x394c
	strh r2, [r0, #40]	@ 0000394c 0285
.org 0x394e
	ldr r3, [sp, #20]	@ 0000394e 059b
.org 0x3950
	lsls r6, r3, #2	@ 00003950 9e00
.org 0x3952
	movs r0, #240	@ 00003952 f020
.org 0x3954
	lsls r0, r0, #2	@ 00003954 8000
.org 0x3956
	ands r6, r0	@ 00003956 0640
.org 0x3958
	mov r4, r8	@ 00003958 4446
.org 0x395a
	ldr r4, [r4, #12]	@ 0000395a e468
.org 0x395c
	mov ip, r4	@ 0000395c a446
.org 0x395e
	mov sl, r1	@ 0000395e 8a46
.org 0x3960
	lsls r3, r7, #16	@ 00003960 3b04
.org 0x3962
	asrs r3, r3, #16	@ 00003962 1b14
.org 0x3964
	lsls r2, r3, #4	@ 00003964 1a01
.org 0x3966
	mov r7, sp	@ 00003966 6f46
.org 0x3968
	ldrh r7, [r7, #40]	@ 00003968 3f8d
.org 0x396a
	adds r2, r7, r2	@ 0000396a ba18
.org 0x396c
	ldrh r4, [r5, #0]	@ 0000396c 2c88
.org 0x396e
	lsls r4, r4, #3	@ 0000396e e400
.org 0x3970
	add r4, ip	@ 00003970 6444
.org 0x3972
	lsls r2, r2, #16	@ 00003972 1204
.org 0x3974
	asrs r1, r2, #19	@ 00003974 d114
.org 0x3976
	movs r0, #30	@ 00003976 1e20
.org 0x3978
	ands r1, r0	@ 00003978 0140
.org 0x397a
	adds r1, r6, r1	@ 0000397a 7118
.org 0x397c
	movs r7, #128	@ 0000397c 8027
.org 0x397e
	lsls r7, r7, #1	@ 0000397e 7f00
.org 0x3980
	lsls r0, r7, #16	@ 00003980 3804
.org 0x3982
	ands r0, r2	@ 00003982 1040
.org 0x3984
	asrs r0, r0, #16	@ 00003984 0014
.org 0x3986
	lsls r0, r0, #3	@ 00003986 c000
.org 0x3988
	lsls r1, r1, #1	@ 00003988 4900
.org 0x398a
	ldr r2, [sp, #4]	@ 0000398a 019a
.org 0x398c
	adds r1, r1, r2	@ 0000398c 8918
.org 0x398e
	adds r0, r0, r1	@ 0000398e 4018
.org 0x3990
	ldr r1, [r4, #0]	@ 00003990 2168
.org 0x3992
	str r1, [r0, #0]	@ 00003992 0160
.org 0x3994
	ldr r1, [r4, #4]	@ 00003994 6168
.org 0x3996
	str r1, [r0, #64]	@ 00003996 0164
.org 0x3998
	adds r5, #2	@ 00003998 0235
.org 0x399a
	adds r3, #1	@ 0000399a 0133
.org 0x399c
	lsls r3, r3, #16	@ 0000399c 1b04
.org 0x399e
	lsrs r7, r3, #16	@ 0000399e 1f0c
.org 0x39a0
	asrs r3, r3, #16	@ 000039a0 1b14
.org 0x39a2
	cmp r3, sl	@ 000039a2 5345
.org 0x39a4
	blt.n 0x3960	@ 000039a4 dcdb
.org 0x39a6
	movs r3, #1	@ 000039a6 0123
.org 0x39a8
	add r9, r3	@ 000039a8 9944
.org 0x39aa
	mov r4, r9	@ 000039aa 4c46
.org 0x39ac
	ldrb r1, [r4, #0]	@ 000039ac 2178
.org 0x39ae
	lsls r0, r1, #2	@ 000039ae 8800
.org 0x39b0
	adds r0, r0, r1	@ 000039b0 4018
.org 0x39b2
	lsls r1, r0, #4	@ 000039b2 0101
.org 0x39b4
	subs r1, r1, r0	@ 000039b4 091a
.org 0x39b6
	lsls r1, r1, #2	@ 000039b6 8900
.org 0x39b8
	ldr r0, [sp, #52]	@ 000039b8 0d98
.org 0x39ba
	adds r1, r0, r1	@ 000039ba 4118
.org 0x39bc
	ldr r2, [sp, #32]	@ 000039bc 089a
.org 0x39be
	lsls r3, r2, #16	@ 000039be 1304
.org 0x39c0
	asrs r2, r3, #16	@ 000039c0 1a14
.org 0x39c2
	lsls r0, r2, #4	@ 000039c2 1001
.org 0x39c4
	subs r0, r0, r2	@ 000039c4 801a
.org 0x39c6
	lsls r0, r0, #1	@ 000039c6 4000
.org 0x39c8
	adds r5, r1, r0	@ 000039c8 0d18
.org 0x39ca
	lsls r4, r7, #16	@ 000039ca 3c04
.org 0x39cc
	asrs r0, r4, #16	@ 000039cc 2014
.org 0x39ce
	str r3, [sp, #48]	@ 000039ce 0c93
.org 0x39d0
	cmp r0, #19	@ 000039d0 1328
.org 0x39d2
	bgt.n 0x3a46	@ 000039d2 38dc
.org 0x39d4
	subs r0, #15	@ 000039d4 0f38
.org 0x39d6
	ldr r3, [sp, #28]	@ 000039d6 079b
.org 0x39d8
	lsls r3, r3, #16	@ 000039d8 1b04
.org 0x39da
	mov ip, r3	@ 000039da 9c46
.org 0x39dc
	asrs r1, r3, #16	@ 000039dc 1914
.org 0x39de
	adds r0, r0, r1	@ 000039de 4018
.org 0x39e0
	cmp r0, #14	@ 000039e0 0e28
.org 0x39e2
	bgt.n 0x3a46	@ 000039e2 30dc
.org 0x39e4
	mov r7, sp	@ 000039e4 6f46
.org 0x39e6
	ldrh r7, [r7, #16]	@ 000039e6 3f8a
.org 0x39e8
	mov sl, r7	@ 000039e8 ba46
.org 0x39ea
	ldr r0, [sp, #20]	@ 000039ea 0598
.org 0x39ec
	lsls r6, r0, #2	@ 000039ec 8600
.org 0x39ee
	movs r0, #240	@ 000039ee f020
.org 0x39f0
	lsls r0, r0, #2	@ 000039f0 8000
.org 0x39f2
	ands r6, r0	@ 000039f2 0640
.org 0x39f4
	asrs r4, r4, #16	@ 000039f4 2414
.org 0x39f6
	lsls r2, r4, #4	@ 000039f6 2201
.org 0x39f8
	add r2, sl	@ 000039f8 5244
.org 0x39fa
	ldrh r0, [r5, #0]	@ 000039fa 2888
.org 0x39fc
	lsls r0, r0, #3	@ 000039fc c000
.org 0x39fe
	mov r1, r8	@ 000039fe 4146
.org 0x3a00
	ldr r3, [r1, #12]	@ 00003a00 cb68
.org 0x3a02
	adds r3, r3, r0	@ 00003a02 1b18
.org 0x3a04
	lsls r2, r2, #16	@ 00003a04 1204
.org 0x3a06
	asrs r1, r2, #19	@ 00003a06 d114
.org 0x3a08
	movs r0, #30	@ 00003a08 1e20
.org 0x3a0a
	ands r1, r0	@ 00003a0a 0140
.org 0x3a0c
	adds r1, r6, r1	@ 00003a0c 7118
.org 0x3a0e
	movs r7, #128	@ 00003a0e 8027
.org 0x3a10
	lsls r7, r7, #1	@ 00003a10 7f00
.org 0x3a12
	lsls r0, r7, #16	@ 00003a12 3804
.org 0x3a14
	ands r0, r2	@ 00003a14 1040
.org 0x3a16
	asrs r0, r0, #16	@ 00003a16 0014
.org 0x3a18
	lsls r0, r0, #3	@ 00003a18 c000
.org 0x3a1a
	lsls r1, r1, #1	@ 00003a1a 4900
.org 0x3a1c
	ldr r2, [sp, #4]	@ 00003a1c 019a
.org 0x3a1e
	adds r1, r1, r2	@ 00003a1e 8918
.org 0x3a20
	adds r0, r0, r1	@ 00003a20 4018
.org 0x3a22
	ldr r1, [r3, #0]	@ 00003a22 1968
.org 0x3a24
	str r1, [r0, #0]	@ 00003a24 0160
.org 0x3a26
	ldr r1, [r3, #4]	@ 00003a26 5968
.org 0x3a28
	str r1, [r0, #64]	@ 00003a28 0164
.org 0x3a2a
	adds r5, #2	@ 00003a2a 0235
.org 0x3a2c
	adds r4, #1	@ 00003a2c 0134
.org 0x3a2e
	lsls r4, r4, #16	@ 00003a2e 2404
.org 0x3a30
	lsrs r7, r4, #16	@ 00003a30 270c
.org 0x3a32
	lsls r4, r7, #16	@ 00003a32 3c04
.org 0x3a34
	asrs r0, r4, #16	@ 00003a34 2014
.org 0x3a36
	cmp r0, #19	@ 00003a36 1328
.org 0x3a38
	bgt.n 0x3a46	@ 00003a38 05dc
.org 0x3a3a
	subs r0, #15	@ 00003a3a 0f38
.org 0x3a3c
	mov r3, ip	@ 00003a3c 6346
.org 0x3a3e
	asrs r1, r3, #16	@ 00003a3e 1914
.org 0x3a40
	adds r0, r0, r1	@ 00003a40 4018
.org 0x3a42
	cmp r0, #14	@ 00003a42 0e28
.org 0x3a44
	ble.n 0x39f4	@ 00003a44 d6dd
.org 0x3a46
	mov r4, r9	@ 00003a46 4c46
.org 0x3a48
	ldrb r1, [r4, #1]	@ 00003a48 6178
.org 0x3a4a
	lsls r0, r1, #2	@ 00003a4a 8800
.org 0x3a4c
	adds r0, r0, r1	@ 00003a4c 4018
.org 0x3a4e
	lsls r1, r0, #4	@ 00003a4e 0101
.org 0x3a50
	subs r1, r1, r0	@ 00003a50 091a
.org 0x3a52
	lsls r1, r1, #2	@ 00003a52 8900
.org 0x3a54
	ldr r0, [sp, #52]	@ 00003a54 0d98
.org 0x3a56
	adds r1, r0, r1	@ 00003a56 4118
.org 0x3a58
	ldr r3, [sp, #48]	@ 00003a58 0c9b
.org 0x3a5a
	asrs r2, r3, #16	@ 00003a5a 1a14
.org 0x3a5c
	lsls r0, r2, #4	@ 00003a5c 1001
.org 0x3a5e
	subs r0, r0, r2	@ 00003a5e 801a
.org 0x3a60
	lsls r0, r0, #1	@ 00003a60 4000
.org 0x3a62
	adds r5, r1, r0	@ 00003a62 0d18
.org 0x3a64
	lsls r2, r7, #16	@ 00003a64 3a04
.org 0x3a66
	asrs r0, r2, #16	@ 00003a66 1014
.org 0x3a68
	cmp r0, #19	@ 00003a68 1328
.org 0x3a6a
	bgt.n 0x3ac4	@ 00003a6a 2bdc
.org 0x3a6c
	mov r4, sp	@ 00003a6c 6c46
.org 0x3a6e
	ldrh r4, [r4, #16]	@ 00003a6e 248a
.org 0x3a70
	mov r9, r4	@ 00003a70 a146
.org 0x3a72
	ldr r7, [sp, #20]	@ 00003a72 059f
.org 0x3a74
	lsls r6, r7, #2	@ 00003a74 be00
.org 0x3a76
	movs r0, #240	@ 00003a76 f020
.org 0x3a78
	lsls r0, r0, #2	@ 00003a78 8000
.org 0x3a7a
	ands r6, r0	@ 00003a7a 0640
.org 0x3a7c
	movs r0, #128	@ 00003a7c 8020
.org 0x3a7e
	lsls r0, r0, #1	@ 00003a7e 4000
.org 0x3a80
	mov sl, r0	@ 00003a80 8246
.org 0x3a82
	mov r1, r8	@ 00003a82 4146
.org 0x3a84
	ldr r1, [r1, #12]	@ 00003a84 c968
.org 0x3a86
	mov ip, r1	@ 00003a86 8c46
.org 0x3a88
	asrs r4, r2, #16	@ 00003a88 1414
.org 0x3a8a
	lsls r2, r4, #4	@ 00003a8a 2201
.org 0x3a8c
	add r2, r9	@ 00003a8c 4a44
.org 0x3a8e
	ldrh r3, [r5, #0]	@ 00003a8e 2b88
.org 0x3a90
	lsls r3, r3, #3	@ 00003a90 db00
.org 0x3a92
	add r3, ip	@ 00003a92 6344
.org 0x3a94
	lsls r2, r2, #16	@ 00003a94 1204
.org 0x3a96
	asrs r1, r2, #19	@ 00003a96 d114
.org 0x3a98
	movs r0, #30	@ 00003a98 1e20
.org 0x3a9a
	ands r1, r0	@ 00003a9a 0140
.org 0x3a9c
	adds r1, r6, r1	@ 00003a9c 7118
.org 0x3a9e
	mov r7, sl	@ 00003a9e 5746
.org 0x3aa0
	lsls r0, r7, #16	@ 00003aa0 3804
.org 0x3aa2
	ands r0, r2	@ 00003aa2 1040
.org 0x3aa4
	asrs r0, r0, #16	@ 00003aa4 0014
.org 0x3aa6
	lsls r0, r0, #3	@ 00003aa6 c000
.org 0x3aa8
	lsls r1, r1, #1	@ 00003aa8 4900
.org 0x3aaa
	ldr r2, [sp, #4]	@ 00003aaa 019a
.org 0x3aac
	adds r1, r1, r2	@ 00003aac 8918
.org 0x3aae
	adds r0, r0, r1	@ 00003aae 4018
.org 0x3ab0
	ldr r1, [r3, #0]	@ 00003ab0 1968
.org 0x3ab2
	str r1, [r0, #0]	@ 00003ab2 0160
.org 0x3ab4
	ldr r1, [r3, #4]	@ 00003ab4 5968
.org 0x3ab6
	str r1, [r0, #64]	@ 00003ab6 0164
.org 0x3ab8
	adds r5, #2	@ 00003ab8 0235
.org 0x3aba
	adds r4, #1	@ 00003aba 0134
.org 0x3abc
	lsls r2, r4, #16	@ 00003abc 2204
.org 0x3abe
	asrs r0, r2, #16	@ 00003abe 1014
.org 0x3ac0
	cmp r0, #19	@ 00003ac0 1328
.org 0x3ac2
	ble.n 0x3a88	@ 00003ac2 e1dd
.org 0x3ac4
	ldr r4, [sp, #0]	@ 00003ac4 009c
.org 0x3ac6
	ldr r3, [r4, #0]	@ 00003ac6 2368
.org 0x3ac8
	ldr r2, [pc, #36]	@ 00003ac8 094a
.org 0x3aca
	adds r0, r3, #0	@ 00003aca 181c
.org 0x3acc
	ands r0, r2	@ 00003acc 1040
.org 0x3ace
	mov r7, r8	@ 00003ace 4746
.org 0x3ad0
	strh r0, [r7, #8]	@ 00003ad0 3881
.org 0x3ad2
	ldr r1, [r4, #4]	@ 00003ad2 6168
.org 0x3ad4
	adds r0, r1, #0	@ 00003ad4 081c
.org 0x3ad6
	ands r0, r2	@ 00003ad6 1040
.org 0x3ad8
	strh r0, [r7, #10]	@ 00003ad8 7881
.org 0x3ada
	str r3, [r7, #0]	@ 00003ada 3b60
.org 0x3adc
	str r1, [r7, #4]	@ 00003adc 7960
.org 0x3ade
	add sp, #60	@ 00003ade 0fb0
.org 0x3ae0
	pop {r3, r4, r5}	@ 00003ae0 38bc
.org 0x3ae2
	mov r8, r3	@ 00003ae2 9846
.org 0x3ae4
	mov r9, r4	@ 00003ae4 a146
.org 0x3ae6
	mov sl, r5	@ 00003ae6 aa46
.org 0x3ae8
	pop {r4, r5, r6, r7}	@ 00003ae8 f0bc
.org 0x3aea
	pop {r0}	@ 00003aea 01bc
.org 0x3aec
	bx r0	@ 00003aec 0047
