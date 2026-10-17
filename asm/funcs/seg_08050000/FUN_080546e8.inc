@ FUN_080546e8  entry 0x080546e8  size 368
.thumb
.org 0x546e8
FUN_080546e8:
	push {r4, r5, r6, r7, lr}	@ 000546e8 f0b5
.org 0x546ea
	sub sp, #16	@ 000546ea 84b0
.org 0x546ec
	adds r4, r0, #0	@ 000546ec 041c
.org 0x546ee
	ldr r1, [pc, #140]	@ 000546ee 2349
.org 0x546f0
	mov r0, sp	@ 000546f0 6846
.org 0x546f2
	movs r2, #8	@ 000546f2 0822
.org 0x546f4
	bl 0x129258	@ 000546f4 d4f0b0fd
.org 0x546f8
	ldrb r0, [r4, #15]	@ 000546f8 e07b
.org 0x546fa
	cmp r0, #0	@ 000546fa 0028
.org 0x546fc
	bne.n 0x5472c	@ 000546fc 16d1
.org 0x546fe
	movs r0, #87	@ 000546fe 5720
.org 0x54700
	bl 0x2b10	@ 00054700 aef706fa
.org 0x54704
	movs r1, #176	@ 00054704 b021
.org 0x54706
	lsls r1, r1, #6	@ 00054706 8901
.org 0x54708
	adds r0, r4, #0	@ 00054708 201c
.org 0x5470a
	bl 0x1cf00	@ 0005470a c8f7f9fb
.org 0x5470e
	adds r0, r4, #0	@ 0005470e 201c
.org 0x54710
	movs r1, #12	@ 00054710 0c21
.org 0x54712
	movs r2, #0	@ 00054712 0022
.org 0x54714
	bl 0x5516c	@ 00054714 00f02afd
.org 0x54718
	adds r1, r4, #0	@ 00054718 211c
.org 0x5471a
	adds r1, #204	@ 0005471a cc31
.org 0x5471c
	movs r0, #240	@ 0005471c f020
.org 0x5471e
	lsls r0, r0, #1	@ 0005471e 4000
.org 0x54720
	str r0, [r1, #0]	@ 00054720 0860
.org 0x54722
	movs r0, #1	@ 00054722 0120
.org 0x54724
	strb r0, [r4, #18]	@ 00054724 a074
.org 0x54726
	ldrb r0, [r4, #15]	@ 00054726 e07b
.org 0x54728
	adds r0, #1	@ 00054728 0130
.org 0x5472a
	strb r0, [r4, #15]	@ 0005472a e073
.org 0x5472c
	ldrb r1, [r4, #30]	@ 0005472c a17f
.org 0x5472e
	lsls r1, r1, #8	@ 0005472e 0902
.org 0x54730
	adds r2, r4, #0	@ 00054730 221c
.org 0x54732
	adds r2, #112	@ 00054732 7032
.org 0x54734
	ldrb r0, [r2, #0]	@ 00054734 1078
.org 0x54736
	orrs r1, r0	@ 00054736 0143
.org 0x54738
	movs r0, #176	@ 00054738 b020
.org 0x5473a
	lsls r0, r0, #6	@ 0005473a 8001
.org 0x5473c
	adds r6, r2, #0	@ 0005473c 161c
.org 0x5473e
	cmp r1, r0	@ 0005473e 8142
.org 0x54740
	bne.n 0x54750	@ 00054740 06d1
.org 0x54742
	ldrb r0, [r4, #18]	@ 00054742 a07c
.org 0x54744
	cmp r0, #0	@ 00054744 0028
.org 0x54746
	bne.n 0x54750	@ 00054746 03d1
.org 0x54748
	ldr r1, [pc, #52]	@ 00054748 0d49
.org 0x5474a
	adds r0, r4, #0	@ 0005474a 201c
.org 0x5474c
	bl 0x1cf00	@ 0005474c c8f7d8fb
.org 0x54750
	adds r0, r4, #0	@ 00054750 201c
.org 0x54752
	bl 0x1cff0	@ 00054752 c8f74dfc
.org 0x54756
	ldrb r0, [r4, #18]	@ 00054756 a07c
.org 0x54758
	cmp r0, #0	@ 00054758 0028
.org 0x5475a
	beq.n 0x54784	@ 0005475a 13d0
.org 0x5475c
	adds r5, r4, #0	@ 0005475c 251c
.org 0x5475e
	adds r5, #184	@ 0005475e b835
.org 0x54760
	ldr r1, [r5, #0]	@ 00054760 2968
.org 0x54762
	adds r0, r4, #0	@ 00054762 201c
.org 0x54764
	bl 0x55188	@ 00054764 00f010fd
.org 0x54768
	adds r2, r0, #0	@ 00054768 021c
.org 0x5476a
	cmp r2, #0	@ 0005476a 002a
.org 0x5476c
	bne.n 0x5478a	@ 0005476c 0dd1
.org 0x5476e
	ldr r0, [r5, #0]	@ 0005476e 2868
.org 0x54770
	str r0, [r4, #88]	@ 00054770 a065
.org 0x54772
	adds r0, r4, #0	@ 00054772 201c
.org 0x54774
	adds r0, #183	@ 00054774 b730
.org 0x54776
	strb r2, [r0, #0]	@ 00054776 0270
.org 0x54778
	strb r2, [r4, #18]	@ 00054778 a274
.org 0x5477a
	b.n 0x5478a	@ 0005477a 06e0
.org 0x5477c
	.byte 0xa0,0x95,0x12,0x08	@ 0005477c data
.org 0x54780
	.byte 0x06,0x2c,0x00,0x00	@ 00054780 data
.org 0x54784
	adds r0, r4, #0	@ 00054784 201c
.org 0x54786
	bl 0x54fb0	@ 00054786 00f013fc
.org 0x5478a
	ldrb r0, [r4, #30]	@ 0005478a a07f
.org 0x5478c
	lsls r0, r0, #8	@ 0005478c 0002
.org 0x5478e
	ldrb r1, [r6, #0]	@ 0005478e 3178
.org 0x54790
	orrs r0, r1	@ 00054790 0843
.org 0x54792
	ldr r1, [pc, #132]	@ 00054792 2149
.org 0x54794
	cmp r0, r1	@ 00054794 8842
.org 0x54796
	bne.n 0x54860	@ 00054796 63d1
.org 0x54798
	adds r0, r4, #0	@ 00054798 201c
.org 0x5479a
	adds r0, #115	@ 0005479a 7330
.org 0x5479c
	ldrb r0, [r0, #0]	@ 0005479c 0078
.org 0x5479e
	cmp r0, #3	@ 0005479e 0328
.org 0x547a0
	bne.n 0x54860	@ 000547a0 5ed1
.org 0x547a2
	adds r0, r4, #0	@ 000547a2 201c
.org 0x547a4
	adds r0, #204	@ 000547a4 cc30
.org 0x547a6
	ldr r1, [r0, #0]	@ 000547a6 0168
.org 0x547a8
	adds r6, r0, #0	@ 000547a8 061c
.org 0x547aa
	cmp r1, #0	@ 000547aa 0029
.org 0x547ac
	beq.n 0x5485a	@ 000547ac 55d0
.org 0x547ae
	adds r0, r1, #0	@ 000547ae 081c
.org 0x547b0
	movs r1, #24	@ 000547b0 1821
.org 0x547b2
	bl 0x129050	@ 000547b2 d4f04dfc
.org 0x547b6
	cmp r0, #0	@ 000547b6 0028
.org 0x547b8
	bne.n 0x54852	@ 000547b8 4bd1
.org 0x547ba
	movs r0, #157	@ 000547ba 9d20
.org 0x547bc
	lsls r0, r0, #1	@ 000547bc 4000
.org 0x547be
	bl 0x2b10	@ 000547be aef7a7f9
.org 0x547c2
	ldr r1, [r6, #0]	@ 000547c2 3168
.org 0x547c4
	movs r0, #240	@ 000547c4 f020
.org 0x547c6
	lsls r0, r0, #1	@ 000547c6 4000
.org 0x547c8
	adds r5, r4, #0	@ 000547c8 251c
.org 0x547ca
	adds r5, #180	@ 000547ca b435
.org 0x547cc
	cmp r1, r0	@ 000547cc 8142
.org 0x547ce
	bne.n 0x547e2	@ 000547ce 08d1
.org 0x547d0
	movs r2, #0	@ 000547d0 0022
.org 0x547d2
	ldr r0, [pc, #72]	@ 000547d2 1248
.org 0x547d4
	ldr r0, [r0, #0]	@ 000547d4 0068
.org 0x547d6
	ldr r1, [r4, #84]	@ 000547d6 616d
.org 0x547d8
	ldr r0, [r0, #84]	@ 000547d8 406d
.org 0x547da
	cmp r1, r0	@ 000547da 8142
.org 0x547dc
	bge.n 0x547e0	@ 000547dc 00da
.org 0x547de
	movs r2, #1	@ 000547de 0122
.org 0x547e0
	strb r2, [r5, #0]	@ 000547e0 2a70
.org 0x547e2
	ldr r1, [r6, #0]	@ 000547e2 3168
.org 0x547e4
	movs r0, #240	@ 000547e4 f020
.org 0x547e6
	lsls r0, r0, #1	@ 000547e6 4000
.org 0x547e8
	subs r0, r0, r1	@ 000547e8 401a
.org 0x547ea
	movs r1, #24	@ 000547ea 1821
.org 0x547ec
	bl 0x128fb8	@ 000547ec d4f0e4fb
.org 0x547f0
	lsls r0, r0, #24	@ 000547f0 0006
.org 0x547f2
	lsrs r2, r0, #24	@ 000547f2 020e
.org 0x547f4
	ldrb r1, [r5, #0]	@ 000547f4 2978
.org 0x547f6
	lsls r0, r1, #2	@ 000547f6 8800
.org 0x547f8
	adds r0, r0, r1	@ 000547f8 4018
.org 0x547fa
	lsls r0, r0, #1	@ 000547fa 4000
.org 0x547fc
	adds r0, r2, r0	@ 000547fc 1018
.org 0x547fe
	lsls r0, r0, #24	@ 000547fe 0006
.org 0x54800
	lsrs r2, r0, #24	@ 00054800 020e
.org 0x54802
	adds r0, r2, #0	@ 00054802 101c
.org 0x54804
	movs r1, #20	@ 00054804 1421
.org 0x54806
	bl 0x129198	@ 00054806 d4f0c7fc
.org 0x5480a
	lsls r0, r0, #24	@ 0005480a 0006
.org 0x5480c
	lsrs r2, r0, #24	@ 0005480c 020e
.org 0x5480e
	cmp r2, #9	@ 0005480e 092a
.org 0x54810
	bhi.n 0x54820	@ 00054810 06d8
.org 0x54812
	movs r3, #0	@ 00054812 0023
.org 0x54814
	adds r5, r2, #0	@ 00054814 151c
.org 0x54816
	b.n 0x54826	@ 00054816 06e0
.org 0x54818
	.byte 0x06,0x2c,0x00,0x00	@ 00054818 data
.org 0x5481c
	.byte 0xf0,0xdb,0x02,0x02	@ 0005481c data
.org 0x54820
	movs r3, #1	@ 00054820 0123
.org 0x54822
	adds r5, r2, #0	@ 00054822 151c
.org 0x54824
	subs r5, #10	@ 00054824 0a3d
.org 0x54826
	lsls r2, r3, #2	@ 00054826 9a00
.org 0x54828
	mov r1, sp	@ 00054828 6946
.org 0x5482a
	adds r0, r1, r2	@ 0005482a 8818
.org 0x5482c
	movs r7, #0	@ 0005482c 0027
.org 0x5482e
	ldrsh r1, [r0, r7]	@ 0005482e c15f
.org 0x54830
	ldr r0, [r4, #84]	@ 00054830 606d
.org 0x54832
	adds r0, r0, r1	@ 00054832 4018
.org 0x54834
	str r0, [sp, #8]	@ 00054834 0290
.org 0x54836
	mov r0, sp	@ 00054836 6846
.org 0x54838
	adds r0, #2	@ 00054838 0230
.org 0x5483a
	adds r0, r0, r2	@ 0005483a 8018
.org 0x5483c
	movs r2, #0	@ 0005483c 0022
.org 0x5483e
	ldrsh r1, [r0, r2]	@ 0005483e 815e
.org 0x54840
	ldr r0, [r4, #88]	@ 00054840 a06d
.org 0x54842
	adds r0, r0, r1	@ 00054842 4018
.org 0x54844
	add r1, sp, #8	@ 00054844 02a9
.org 0x54846
	str r0, [r1, #4]	@ 00054846 4860
.org 0x54848
	lsls r2, r5, #24	@ 00054848 2a06
.org 0x5484a
	lsrs r2, r2, #24	@ 0005484a 120e
.org 0x5484c
	adds r0, r4, #0	@ 0005484c 201c
.org 0x5484e
	bl 0xbfb24	@ 0005484e 6bf069f9
.org 0x54852
	ldr r0, [r6, #0]	@ 00054852 3068
.org 0x54854
	subs r0, #1	@ 00054854 0138
.org 0x54856
	str r0, [r6, #0]	@ 00054856 3060
