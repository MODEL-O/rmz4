@ FUN_080136f8  entry 0x080136f8  size 1008
.thumb
.org 0x136f8
FUN_080136f8:
	push {r4, r5, r6, lr}	@ 000136f8 70b5
.org 0x136fa
	ldr r0, [pc, #72]	@ 000136fa 1248
.org 0x136fc
	ldr r1, [pc, #72]	@ 000136fc 1249
.org 0x136fe
	adds r0, r0, r1	@ 000136fe 4018
.org 0x13700
	ldr r0, [r0, #0]	@ 00013700 0068
.org 0x13702
	ldr r6, [r0, #84]	@ 00013702 466d
.org 0x13704
	ldr r5, [r0, #88]	@ 00013704 856d
.org 0x13706
	ldr r0, [pc, #68]	@ 00013706 1148
.org 0x13708
	ldr r2, [pc, #68]	@ 00013708 114a
.org 0x1370a
	adds r4, r0, r2	@ 0001370a 8418
.org 0x1370c
	ldr r0, [r4, #0]	@ 0001370c 2068
.org 0x1370e
	cmp r0, #0	@ 0001370e 0028
.org 0x13710
	bne.n 0x1376c	@ 00013710 2cd1
.org 0x13712
	ldr r3, [pc, #64]	@ 00013712 104b
.org 0x13714
	adds r1, r6, r3	@ 00013714 f118
.org 0x13716
	ldr r0, [pc, #64]	@ 00013716 1048
.org 0x13718
	cmp r1, r0	@ 00013718 8142
.org 0x1371a
	bhi.n 0x137a6	@ 0001371a 44d8
.org 0x1371c
	movs r0, #240	@ 0001371c f020
.org 0x1371e
	lsls r0, r0, #9	@ 0001371e 4002
.org 0x13720
	cmp r5, r0	@ 00013720 8542
.org 0x13722
	ble.n 0x137a6	@ 00013722 40dd
.org 0x13724
	ldr r0, [pc, #52]	@ 00013724 0d48
.org 0x13726
	cmp r5, r0	@ 00013726 8542
.org 0x13728
	bgt.n 0x137a6	@ 00013728 3ddc
.org 0x1372a
	ldr r0, [pc, #52]	@ 0001372a 0d48
.org 0x1372c
	adds r0, #228	@ 0001372c e430
.org 0x1372e
	ldr r1, [pc, #52]	@ 0001372e 0d49
.org 0x13730
	strh r1, [r0, #0]	@ 00013730 0180
.org 0x13732
	ldr r0, [pc, #52]	@ 00013732 0d48
.org 0x13734
	adds r0, #228	@ 00013734 e430
.org 0x13736
	movs r1, #5	@ 00013736 0521
.org 0x13738
	strh r1, [r0, #0]	@ 00013738 0180
.org 0x1373a
	movs r0, #2	@ 0001373a 0220
.org 0x1373c
	movs r1, #0	@ 0001373c 0021
.org 0x1373e
	bl 0xf7f1c	@ 0001373e e4f0edfb
.org 0x13742
	b.n 0x137a4	@ 00013742 2fe0
.org 0x13744
	.byte 0x10,0xf6,0x02,0x02	@ 00013744 data
.org 0x13748
	.byte 0xa8,0x63,0x00,0x00	@ 00013748 data
.org 0x1374c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001374c data
.org 0x13750
	.byte 0x48,0xd0,0x02,0x00	@ 00013750 data
.org 0x13754
	.byte 0xff,0xbf,0xf9,0xff	@ 00013754 data
.org 0x13758
	.byte 0xfe,0x7f,0x01,0x00	@ 00013758 data
.org 0x1375c
	.byte 0xff,0xff,0x04,0x00	@ 0001375c data
.org 0x13760
	.byte 0x40,0xe0,0x02,0x02	@ 00013760 data
.org 0x13764
	.byte 0x66,0x02,0x00,0x00	@ 00013764 data
.org 0x13768
	.byte 0x40,0xde,0x02,0x02	@ 00013768 data
.org 0x1376c
	ldr r0, [pc, #100]	@ 0001376c 1948
.org 0x1376e
	adds r1, r6, r0	@ 0001376e 3118
.org 0x13770
	movs r0, #192	@ 00013770 c020
.org 0x13772
	lsls r0, r0, #9	@ 00013772 4002
.org 0x13774
	cmp r1, r0	@ 00013774 8142
.org 0x13776
	bhi.n 0x13786	@ 00013776 06d8
.org 0x13778
	ldr r0, [pc, #92]	@ 00013778 1748
.org 0x1377a
	cmp r5, r0	@ 0001377a 8542
.org 0x1377c
	ble.n 0x13786	@ 0001377c 03dd
.org 0x1377e
	movs r0, #160	@ 0001377e a020
.org 0x13780
	lsls r0, r0, #11	@ 00013780 c002
.org 0x13782
	cmp r5, r0	@ 00013782 8542
.org 0x13784
	ble.n 0x137a6	@ 00013784 0fdd
.org 0x13786
	movs r0, #117	@ 00013786 7520
.org 0x13788
	bl 0x2bb4	@ 00013788 eff714fa
.org 0x1378c
	cmp r0, #0	@ 0001378c 0028
.org 0x1378e
	beq.n 0x13796	@ 0001378e 02d0
.org 0x13790
	movs r0, #117	@ 00013790 7520
.org 0x13792
	bl 0x2b5c	@ 00013792 eff7e3f9
.org 0x13796
	ldr r4, [pc, #68]	@ 00013796 114c
.org 0x13798
	ldr r1, [pc, #68]	@ 00013798 1149
.org 0x1379a
	adds r4, r4, r1	@ 0001379a 6418
.org 0x1379c
	ldr r0, [r4, #0]	@ 0001379c 2068
.org 0x1379e
	bl 0xe954c	@ 0001379e d5f0d5fe
.org 0x137a2
	movs r0, #0	@ 000137a2 0020
.org 0x137a4
	str r0, [r4, #0]	@ 000137a4 2060
.org 0x137a6
	ldr r0, [pc, #52]	@ 000137a6 0d48
.org 0x137a8
	ldr r2, [pc, #56]	@ 000137a8 0e4a
.org 0x137aa
	adds r4, r0, r2	@ 000137aa 8418
.org 0x137ac
	ldr r0, [r4, #0]	@ 000137ac 2068
.org 0x137ae
	cmp r0, #0	@ 000137ae 0028
.org 0x137b0
	bne.n 0x137f4	@ 000137b0 20d1
.org 0x137b2
	ldr r3, [pc, #52]	@ 000137b2 0d4b
.org 0x137b4
	adds r1, r6, r3	@ 000137b4 f118
.org 0x137b6
	ldr r0, [pc, #52]	@ 000137b6 0d48
.org 0x137b8
	cmp r1, r0	@ 000137b8 8142
.org 0x137ba
	bhi.n 0x1382e	@ 000137ba 38d8
.org 0x137bc
	movs r0, #240	@ 000137bc f020
.org 0x137be
	lsls r0, r0, #10	@ 000137be 8002
.org 0x137c0
	cmp r5, r0	@ 000137c0 8542
.org 0x137c2
	ble.n 0x1382e	@ 000137c2 34dd
.org 0x137c4
	ldr r0, [pc, #40]	@ 000137c4 0a48
.org 0x137c6
	cmp r5, r0	@ 000137c6 8542
.org 0x137c8
	bgt.n 0x1382e	@ 000137c8 31dc
.org 0x137ca
	movs r0, #2	@ 000137ca 0220
.org 0x137cc
	movs r1, #1	@ 000137cc 0121
.org 0x137ce
	bl 0xf7f1c	@ 000137ce e4f0a5fb
.org 0x137d2
	b.n 0x1382c	@ 000137d2 2be0
.org 0x137d4
	.byte 0x00,0xc0,0xf9,0xff	@ 000137d4 data
.org 0x137d8
	.byte 0xff,0xdf,0x01,0x00	@ 000137d8 data
.org 0x137dc
	.byte 0xb0,0x0a,0x00,0x02	@ 000137dc data
.org 0x137e0
	.byte 0x48,0xd0,0x02,0x00	@ 000137e0 data
.org 0x137e4
	.byte 0x4c,0xd0,0x02,0x00	@ 000137e4 data
.org 0x137e8
	.byte 0xff,0x0f,0xf0,0xff	@ 000137e8 data
.org 0x137ec
	.byte 0xfe,0xef,0x00,0x00	@ 000137ec data
.org 0x137f0
	.byte 0xff,0x7f,0x07,0x00	@ 000137f0 data
.org 0x137f4
	ldr r0, [pc, #680]	@ 000137f4 aa48
.org 0x137f6
	adds r1, r6, r0	@ 000137f6 3118
.org 0x137f8
	movs r0, #240	@ 000137f8 f020
.org 0x137fa
	lsls r0, r0, #8	@ 000137fa 0002
.org 0x137fc
	cmp r1, r0	@ 000137fc 8142
.org 0x137fe
	bhi.n 0x1380e	@ 000137fe 06d8
.org 0x13800
	ldr r0, [pc, #672]	@ 00013800 a848
.org 0x13802
	cmp r5, r0	@ 00013802 8542
.org 0x13804
	ble.n 0x1380e	@ 00013804 03dd
.org 0x13806
	movs r0, #240	@ 00013806 f020
.org 0x13808
	lsls r0, r0, #11	@ 00013808 c002
.org 0x1380a
	cmp r5, r0	@ 0001380a 8542
.org 0x1380c
	ble.n 0x1382e	@ 0001380c 0fdd
.org 0x1380e
	movs r0, #117	@ 0001380e 7520
.org 0x13810
	bl 0x2bb4	@ 00013810 eff7d0f9
.org 0x13814
	cmp r0, #0	@ 00013814 0028
.org 0x13816
	beq.n 0x1381e	@ 00013816 02d0
.org 0x13818
	movs r0, #117	@ 00013818 7520
.org 0x1381a
	bl 0x2b5c	@ 0001381a eff79ff9
.org 0x1381e
	ldr r4, [pc, #648]	@ 0001381e a24c
.org 0x13820
	ldr r1, [pc, #648]	@ 00013820 a249
.org 0x13822
	adds r4, r4, r1	@ 00013822 6418
.org 0x13824
	ldr r0, [r4, #0]	@ 00013824 2068
.org 0x13826
	bl 0xe954c	@ 00013826 d5f091fe
.org 0x1382a
	movs r0, #0	@ 0001382a 0020
.org 0x1382c
	str r0, [r4, #0]	@ 0001382c 2060
.org 0x1382e
	ldr r5, [pc, #632]	@ 0001382e 9e4d
.org 0x13830
	ldr r2, [pc, #636]	@ 00013830 9f4a
.org 0x13832
	adds r4, r5, r2	@ 00013832 ac18
.org 0x13834
	ldr r0, [r4, #0]	@ 00013834 2068
.org 0x13836
	cmp r0, #0	@ 00013836 0028
.org 0x13838
	bne.n 0x13840	@ 00013838 02d1
.org 0x1383a
	bl 0xfdfd4	@ 0001383a eaf0cbfb
.org 0x1383e
	str r0, [r4, #0]	@ 0001383e 2060
.org 0x13840
	ldr r3, [pc, #624]	@ 00013840 9c4b
.org 0x13842
	adds r0, r5, r3	@ 00013842 e818
.org 0x13844
	ldrh r1, [r0, #0]	@ 00013844 0188
.org 0x13846
	lsrs r0, r1, #8	@ 00013846 080a
.org 0x13848
	cmp r0, #8	@ 00013848 0828
.org 0x1384a
	bne.n 0x1386a	@ 0001384a 0ed1
.org 0x1384c
	movs r0, #255	@ 0001384c ff20
.org 0x1384e
	ands r0, r1	@ 0001384e 0840
.org 0x13850
	cmp r0, #2	@ 00013850 0228
.org 0x13852
	bne.n 0x1386a	@ 00013852 0ad1
.org 0x13854
	ldr r0, [pc, #608]	@ 00013854 9848
.org 0x13856
	adds r1, r5, r0	@ 00013856 2918
.org 0x13858
	ldrb r0, [r1, #0]	@ 00013858 0878
.org 0x1385a
	adds r0, #1	@ 0001385a 0130
.org 0x1385c
	strb r0, [r1, #0]	@ 0001385c 0870
.org 0x1385e
	lsls r0, r0, #24	@ 0001385e 0006
.org 0x13860
	lsrs r0, r0, #24	@ 00013860 000e
.org 0x13862
	cmp r0, #8	@ 00013862 0828
.org 0x13864
	bne.n 0x1386a	@ 00013864 01d1
.org 0x13866
	movs r0, #0	@ 00013866 0020
.org 0x13868
	strb r0, [r1, #0]	@ 00013868 0870
.org 0x1386a
	ldr r2, [pc, #572]	@ 0001386a 8f4a
.org 0x1386c
	ldr r1, [pc, #588]	@ 0001386c 9349
.org 0x1386e
	adds r0, r2, r1	@ 0001386e 5018
.org 0x13870
	ldrb r1, [r0, #0]	@ 00013870 0178
.org 0x13872
	movs r0, #15	@ 00013872 0f20
.org 0x13874
	ands r0, r1	@ 00013874 0840
.org 0x13876
	cmp r0, #3	@ 00013876 0328
.org 0x13878
	beq.n 0x1387c	@ 00013878 00d0
.org 0x1387a
	b.n 0x13b1c	@ 0001387a 4fe1
.org 0x1387c
	ldr r3, [pc, #564]	@ 0001387c 8d4b
.org 0x1387e
	adds r0, r2, r3	@ 0001387e d018
.org 0x13880
	ldrh r1, [r0, #0]	@ 00013880 0188
.org 0x13882
	lsrs r0, r1, #8	@ 00013882 080a
.org 0x13884
	cmp r0, #8	@ 00013884 0828
.org 0x13886
	bne.n 0x138f0	@ 00013886 33d1
.org 0x13888
	movs r0, #255	@ 00013888 ff20
.org 0x1388a
	ands r0, r1	@ 0001388a 0840
.org 0x1388c
	cmp r0, #6	@ 0001388c 0628
.org 0x1388e
	bne.n 0x138f0	@ 0001388e 2fd1
.org 0x13890
	ldr r0, [pc, #556]	@ 00013890 8b48
.org 0x13892
	adds r5, r2, r0	@ 00013892 1518
.org 0x13894
	ldrb r0, [r5, #0]	@ 00013894 2878
.org 0x13896
	adds r0, #1	@ 00013896 0130
.org 0x13898
	movs r6, #0	@ 00013898 0026
.org 0x1389a
	strb r0, [r5, #0]	@ 0001389a 2870
.org 0x1389c
	ldr r1, [pc, #548]	@ 0001389c 8949
.org 0x1389e
	ldr r3, [pc, #552]	@ 0001389e 8a4b
.org 0x138a0
	adds r4, r2, r3	@ 000138a0 d418
.org 0x138a2
	ldrb r3, [r4, #0]	@ 000138a2 2378
.org 0x138a4
	adds r1, r3, r1	@ 000138a4 5918
.org 0x138a6
	ldrb r1, [r1, #0]	@ 000138a6 0978
.org 0x138a8
	lsls r0, r0, #24	@ 000138a8 0006
.org 0x138aa
	lsrs r0, r0, #24	@ 000138aa 000e
.org 0x138ac
	cmp r1, r0	@ 000138ac 8142
.org 0x138ae
	bcs.n 0x138c0	@ 000138ae 07d2
.org 0x138b0
	adds r0, r3, #1	@ 000138b0 581c
.org 0x138b2
	strb r0, [r4, #0]	@ 000138b2 2070
.org 0x138b4
	lsls r0, r0, #24	@ 000138b4 0006
.org 0x138b6
	lsrs r0, r0, #24	@ 000138b6 000e
.org 0x138b8
	cmp r0, #9	@ 000138b8 0928
.org 0x138ba
	bls.n 0x138be	@ 000138ba 00d9
.org 0x138bc
	strb r6, [r4, #0]	@ 000138bc 2670
.org 0x138be
	strb r6, [r5, #0]	@ 000138be 2e70
.org 0x138c0
	ldr r0, [pc, #520]	@ 000138c0 8248
.org 0x138c2
	adds r5, r2, r0	@ 000138c2 1518
.org 0x138c4
	ldrb r0, [r5, #0]	@ 000138c4 2878
.org 0x138c6
	adds r0, #1	@ 000138c6 0130
.org 0x138c8
	movs r6, #0	@ 000138c8 0026
.org 0x138ca
	strb r0, [r5, #0]	@ 000138ca 2870
.org 0x138cc
	ldr r1, [pc, #512]	@ 000138cc 8049
.org 0x138ce
	ldr r3, [pc, #516]	@ 000138ce 814b
.org 0x138d0
	adds r4, r2, r3	@ 000138d0 d418
.org 0x138d2
	ldrb r3, [r4, #0]	@ 000138d2 2378
.org 0x138d4
	adds r1, r3, r1	@ 000138d4 5918
.org 0x138d6
	ldrb r1, [r1, #0]	@ 000138d6 0978
.org 0x138d8
	lsls r0, r0, #24	@ 000138d8 0006
.org 0x138da
	lsrs r0, r0, #24	@ 000138da 000e
.org 0x138dc
	cmp r1, r0	@ 000138dc 8142
.org 0x138de
	bcs.n 0x138f0	@ 000138de 07d2
.org 0x138e0
	adds r0, r3, #1	@ 000138e0 581c
.org 0x138e2
	strb r0, [r4, #0]	@ 000138e2 2070
.org 0x138e4
	lsls r0, r0, #24	@ 000138e4 0006
.org 0x138e6
	lsrs r0, r0, #24	@ 000138e6 000e
.org 0x138e8
	cmp r0, #9	@ 000138e8 0928
.org 0x138ea
	bls.n 0x138ee	@ 000138ea 00d9
.org 0x138ec
	strb r6, [r4, #0]	@ 000138ec 2670
.org 0x138ee
	strb r6, [r5, #0]	@ 000138ee 2e70
.org 0x138f0
	ldr r1, [pc, #484]	@ 000138f0 7949
.org 0x138f2
	adds r0, r2, r1	@ 000138f2 5018
.org 0x138f4
	ldrh r1, [r0, #0]	@ 000138f4 0188
.org 0x138f6
	lsrs r0, r1, #8	@ 000138f6 080a
.org 0x138f8
	cmp r0, #8	@ 000138f8 0828
.org 0x138fa
	bne.n 0x13994	@ 000138fa 4bd1
.org 0x138fc
	movs r0, #255	@ 000138fc ff20
.org 0x138fe
	ands r0, r1	@ 000138fe 0840
.org 0x13900
	cmp r0, #7	@ 00013900 0728
.org 0x13902
	bne.n 0x13994	@ 00013902 47d1
.org 0x13904
	ldr r3, [pc, #468]	@ 00013904 754b
.org 0x13906
	adds r5, r2, r3	@ 00013906 d518
.org 0x13908
	ldrb r0, [r5, #0]	@ 00013908 2878
.org 0x1390a
	adds r0, #1	@ 0001390a 0130
.org 0x1390c
	movs r6, #0	@ 0001390c 0026
.org 0x1390e
	strb r0, [r5, #0]	@ 0001390e 2870
.org 0x13910
	ldr r1, [pc, #460]	@ 00013910 7349
.org 0x13912
	subs r3, #8	@ 00013912 083b
.org 0x13914
	adds r4, r2, r3	@ 00013914 d418
.org 0x13916
	ldrb r3, [r4, #0]	@ 00013916 2378
.org 0x13918
	adds r1, r3, r1	@ 00013918 5918
.org 0x1391a
	ldrb r1, [r1, #0]	@ 0001391a 0978
.org 0x1391c
	lsls r0, r0, #24	@ 0001391c 0006
.org 0x1391e
	lsrs r0, r0, #24	@ 0001391e 000e
.org 0x13920
	cmp r1, r0	@ 00013920 8142
.org 0x13922
	bcs.n 0x13934	@ 00013922 07d2
.org 0x13924
	adds r0, r3, #1	@ 00013924 581c
.org 0x13926
	strb r0, [r4, #0]	@ 00013926 2070
.org 0x13928
	lsls r0, r0, #24	@ 00013928 0006
.org 0x1392a
	lsrs r0, r0, #24	@ 0001392a 000e
.org 0x1392c
	cmp r0, #9	@ 0001392c 0928
.org 0x1392e
	bls.n 0x13932	@ 0001392e 00d9
.org 0x13930
	strb r6, [r4, #0]	@ 00013930 2670
.org 0x13932
	strb r6, [r5, #0]	@ 00013932 2e70
.org 0x13934
	ldr r0, [pc, #428]	@ 00013934 6b48
.org 0x13936
	adds r5, r2, r0	@ 00013936 1518
.org 0x13938
	ldrb r0, [r5, #0]	@ 00013938 2878
.org 0x1393a
	adds r0, #1	@ 0001393a 0130
.org 0x1393c
	movs r6, #0	@ 0001393c 0026
.org 0x1393e
	strb r0, [r5, #0]	@ 0001393e 2870
.org 0x13940
	ldr r1, [pc, #420]	@ 00013940 6949
.org 0x13942
	ldr r3, [pc, #424]	@ 00013942 6a4b
.org 0x13944
	adds r4, r2, r3	@ 00013944 d418
.org 0x13946
	ldrb r3, [r4, #0]	@ 00013946 2378
.org 0x13948
	adds r1, r3, r1	@ 00013948 5918
.org 0x1394a
	ldrb r1, [r1, #0]	@ 0001394a 0978
.org 0x1394c
	lsls r0, r0, #24	@ 0001394c 0006
.org 0x1394e
	lsrs r0, r0, #24	@ 0001394e 000e
.org 0x13950
	cmp r1, r0	@ 00013950 8142
.org 0x13952
	bcs.n 0x13964	@ 00013952 07d2
.org 0x13954
	adds r0, r3, #1	@ 00013954 581c
.org 0x13956
	strb r0, [r4, #0]	@ 00013956 2070
.org 0x13958
	lsls r0, r0, #24	@ 00013958 0006
.org 0x1395a
	lsrs r0, r0, #24	@ 0001395a 000e
.org 0x1395c
	cmp r0, #9	@ 0001395c 0928
.org 0x1395e
	bls.n 0x13962	@ 0001395e 00d9
.org 0x13960
	strb r6, [r4, #0]	@ 00013960 2670
.org 0x13962
	strb r6, [r5, #0]	@ 00013962 2e70
.org 0x13964
	ldr r0, [pc, #392]	@ 00013964 6248
.org 0x13966
	adds r5, r2, r0	@ 00013966 1518
.org 0x13968
	ldrb r0, [r5, #0]	@ 00013968 2878
.org 0x1396a
	adds r0, #1	@ 0001396a 0130
.org 0x1396c
	movs r6, #0	@ 0001396c 0026
.org 0x1396e
	strb r0, [r5, #0]	@ 0001396e 2870
.org 0x13970
	ldr r1, [pc, #384]	@ 00013970 6049
.org 0x13972
	ldr r3, [pc, #388]	@ 00013972 614b
.org 0x13974
	adds r4, r2, r3	@ 00013974 d418
.org 0x13976
	ldrb r3, [r4, #0]	@ 00013976 2378
.org 0x13978
	adds r1, r3, r1	@ 00013978 5918
.org 0x1397a
	ldrb r1, [r1, #0]	@ 0001397a 0978
.org 0x1397c
	lsls r0, r0, #24	@ 0001397c 0006
.org 0x1397e
	lsrs r0, r0, #24	@ 0001397e 000e
.org 0x13980
	cmp r1, r0	@ 00013980 8142
.org 0x13982
	bcs.n 0x13994	@ 00013982 07d2
.org 0x13984
	adds r0, r3, #1	@ 00013984 581c
.org 0x13986
	strb r0, [r4, #0]	@ 00013986 2070
.org 0x13988
	lsls r0, r0, #24	@ 00013988 0006
.org 0x1398a
	lsrs r0, r0, #24	@ 0001398a 000e
.org 0x1398c
	cmp r0, #9	@ 0001398c 0928
.org 0x1398e
	bls.n 0x13992	@ 0001398e 00d9
.org 0x13990
	strb r6, [r4, #0]	@ 00013990 2670
.org 0x13992
	strb r6, [r5, #0]	@ 00013992 2e70
.org 0x13994
	ldr r1, [pc, #284]	@ 00013994 4749
.org 0x13996
	adds r0, r2, r1	@ 00013996 5018
.org 0x13998
	ldrh r1, [r0, #0]	@ 00013998 0188
.org 0x1399a
	lsrs r0, r1, #8	@ 0001399a 080a
.org 0x1399c
	cmp r0, #8	@ 0001399c 0828
.org 0x1399e
	bne.n 0x139d8	@ 0001399e 1bd1
.org 0x139a0
	movs r0, #255	@ 000139a0 ff20
.org 0x139a2
	ands r0, r1	@ 000139a2 0840
.org 0x139a4
	cmp r0, #8	@ 000139a4 0828
.org 0x139a6
	bne.n 0x139d8	@ 000139a6 17d1
.org 0x139a8
	ldr r3, [pc, #336]	@ 000139a8 544b
.org 0x139aa
	adds r5, r2, r3	@ 000139aa d518
.org 0x139ac
	ldrb r0, [r5, #0]	@ 000139ac 2878
.org 0x139ae
	adds r0, #1	@ 000139ae 0130
.org 0x139b0
	movs r6, #0	@ 000139b0 0026
.org 0x139b2
	strb r0, [r5, #0]	@ 000139b2 2870
.org 0x139b4
	ldr r1, [pc, #328]	@ 000139b4 5249
.org 0x139b6
	subs r3, #8	@ 000139b6 083b
.org 0x139b8
	adds r4, r2, r3	@ 000139b8 d418
.org 0x139ba
	ldrb r3, [r4, #0]	@ 000139ba 2378
.org 0x139bc
	adds r1, r3, r1	@ 000139bc 5918
.org 0x139be
	ldrb r1, [r1, #0]	@ 000139be 0978
.org 0x139c0
	lsls r0, r0, #24	@ 000139c0 0006
.org 0x139c2
	lsrs r0, r0, #24	@ 000139c2 000e
.org 0x139c4
	cmp r1, r0	@ 000139c4 8142
.org 0x139c6
	bcs.n 0x139d8	@ 000139c6 07d2
.org 0x139c8
	adds r0, r3, #1	@ 000139c8 581c
.org 0x139ca
	strb r0, [r4, #0]	@ 000139ca 2070
.org 0x139cc
	lsls r0, r0, #24	@ 000139cc 0006
.org 0x139ce
	lsrs r0, r0, #24	@ 000139ce 000e
.org 0x139d0
	cmp r0, #9	@ 000139d0 0928
.org 0x139d2
	bls.n 0x139d6	@ 000139d2 00d9
.org 0x139d4
	strb r6, [r4, #0]	@ 000139d4 2670
.org 0x139d6
	strb r6, [r5, #0]	@ 000139d6 2e70
.org 0x139d8
	ldr r1, [pc, #252]	@ 000139d8 3f49
.org 0x139da
	adds r0, r2, r1	@ 000139da 5018
.org 0x139dc
	ldrh r1, [r0, #0]	@ 000139dc 0188
.org 0x139de
	lsrs r0, r1, #8	@ 000139de 080a
.org 0x139e0
	cmp r0, #8	@ 000139e0 0828
.org 0x139e2
	bne.n 0x13a4c	@ 000139e2 33d1
.org 0x139e4
	movs r0, #255	@ 000139e4 ff20
.org 0x139e6
	ands r0, r1	@ 000139e6 0840
.org 0x139e8
	cmp r0, #11	@ 000139e8 0b28
.org 0x139ea
	bne.n 0x13a4c	@ 000139ea 2fd1
.org 0x139ec
	ldr r3, [pc, #276]	@ 000139ec 454b
.org 0x139ee
	adds r5, r2, r3	@ 000139ee d518
.org 0x139f0
	ldrb r0, [r5, #0]	@ 000139f0 2878
.org 0x139f2
	adds r0, #1	@ 000139f2 0130
.org 0x139f4
	movs r6, #0	@ 000139f4 0026
.org 0x139f6
	strb r0, [r5, #0]	@ 000139f6 2870
.org 0x139f8
	ldr r1, [pc, #268]	@ 000139f8 4349
.org 0x139fa
	subs r3, #8	@ 000139fa 083b
.org 0x139fc
	adds r4, r2, r3	@ 000139fc d418
.org 0x139fe
	ldrb r3, [r4, #0]	@ 000139fe 2378
.org 0x13a00
	adds r1, r3, r1	@ 00013a00 5918
.org 0x13a02
	ldrb r1, [r1, #0]	@ 00013a02 0978
.org 0x13a04
	lsls r0, r0, #24	@ 00013a04 0006
.org 0x13a06
	lsrs r0, r0, #24	@ 00013a06 000e
.org 0x13a08
	cmp r1, r0	@ 00013a08 8142
.org 0x13a0a
	bcs.n 0x13a1c	@ 00013a0a 07d2
.org 0x13a0c
	adds r0, r3, #1	@ 00013a0c 581c
.org 0x13a0e
	strb r0, [r4, #0]	@ 00013a0e 2070
.org 0x13a10
	lsls r0, r0, #24	@ 00013a10 0006
.org 0x13a12
	lsrs r0, r0, #24	@ 00013a12 000e
.org 0x13a14
	cmp r0, #9	@ 00013a14 0928
.org 0x13a16
	bls.n 0x13a1a	@ 00013a16 00d9
.org 0x13a18
	strb r6, [r4, #0]	@ 00013a18 2670
.org 0x13a1a
	strb r6, [r5, #0]	@ 00013a1a 2e70
.org 0x13a1c
	ldr r0, [pc, #236]	@ 00013a1c 3b48
.org 0x13a1e
	adds r5, r2, r0	@ 00013a1e 1518
.org 0x13a20
	ldrb r0, [r5, #0]	@ 00013a20 2878
.org 0x13a22
	adds r0, #1	@ 00013a22 0130
.org 0x13a24
	movs r6, #0	@ 00013a24 0026
.org 0x13a26
	strb r0, [r5, #0]	@ 00013a26 2870
.org 0x13a28
	ldr r1, [pc, #228]	@ 00013a28 3949
.org 0x13a2a
	ldr r3, [pc, #232]	@ 00013a2a 3a4b
.org 0x13a2c
	adds r4, r2, r3	@ 00013a2c d418
.org 0x13a2e
	ldrb r3, [r4, #0]	@ 00013a2e 2378
.org 0x13a30
	adds r1, r3, r1	@ 00013a30 5918
.org 0x13a32
	ldrb r1, [r1, #0]	@ 00013a32 0978
.org 0x13a34
	lsls r0, r0, #24	@ 00013a34 0006
.org 0x13a36
	lsrs r0, r0, #24	@ 00013a36 000e
.org 0x13a38
	cmp r1, r0	@ 00013a38 8142
.org 0x13a3a
	bcs.n 0x13a4c	@ 00013a3a 07d2
.org 0x13a3c
	adds r0, r3, #1	@ 00013a3c 581c
.org 0x13a3e
	strb r0, [r4, #0]	@ 00013a3e 2070
.org 0x13a40
	lsls r0, r0, #24	@ 00013a40 0006
.org 0x13a42
	lsrs r0, r0, #24	@ 00013a42 000e
.org 0x13a44
	cmp r0, #9	@ 00013a44 0928
.org 0x13a46
	bls.n 0x13a4a	@ 00013a46 00d9
.org 0x13a48
	strb r6, [r4, #0]	@ 00013a48 2670
.org 0x13a4a
	strb r6, [r5, #0]	@ 00013a4a 2e70
.org 0x13a4c
	ldr r1, [pc, #108]	@ 00013a4c 1b49
.org 0x13a4e
	adds r0, r2, r1	@ 00013a4e 5018
.org 0x13a50
	ldrb r1, [r0, #0]	@ 00013a50 0178
.org 0x13a52
	movs r0, #15	@ 00013a52 0f20
.org 0x13a54
	ands r0, r1	@ 00013a54 0840
.org 0x13a56
	cmp r0, #3	@ 00013a56 0328
.org 0x13a58
	bne.n 0x13b1c	@ 00013a58 60d1
.org 0x13a5a
	ldr r3, [pc, #88]	@ 00013a5a 164b
.org 0x13a5c
	adds r0, r2, r3	@ 00013a5c d018
.org 0x13a5e
	ldrh r1, [r0, #0]	@ 00013a5e 0188
.org 0x13a60
	lsrs r0, r1, #8	@ 00013a60 080a
.org 0x13a62
	cmp r0, #8	@ 00013a62 0828
.org 0x13a64
	bne.n 0x13b1c	@ 00013a64 5ad1
.org 0x13a66
	movs r0, #255	@ 00013a66 ff20
.org 0x13a68
	ands r0, r1	@ 00013a68 0840
.org 0x13a6a
	cmp r0, #0	@ 00013a6a 0028
.org 0x13a6c
	bne.n 0x13b1c	@ 00013a6c 56d1
.org 0x13a6e
	ldr r0, [pc, #168]	@ 00013a6e 2a48
.org 0x13a70
	adds r2, r2, r0	@ 00013a70 1218
.org 0x13a72
	ldrb r1, [r2, #0]	@ 00013a72 1178
.org 0x13a74
	movs r0, #1	@ 00013a74 0120
.org 0x13a76
	ands r0, r1	@ 00013a76 0840
.org 0x13a78
	cmp r0, #0	@ 00013a78 0028
.org 0x13a7a
	bne.n 0x13a92	@ 00013a7a 0ad1
.org 0x13a7c
	movs r0, #1	@ 00013a7c 0120
.org 0x13a7e
	orrs r0, r1	@ 00013a7e 0843
.org 0x13a80
	strb r0, [r2, #0]	@ 00013a80 1070
.org 0x13a82
	movs r0, #84	@ 00013a82 5420
.org 0x13a84
	movs r1, #0	@ 00013a84 0021
.org 0x13a86
	bl 0x249c	@ 00013a86 eef709fd
.org 0x13a8a
	movs r0, #85	@ 00013a8a 5520
.org 0x13a8c
	movs r1, #0	@ 00013a8c 0021
.org 0x13a8e
	bl 0x249c	@ 00013a8e eef705fd
.org 0x13a92
	movs r0, #84	@ 00013a92 5420
.org 0x13a94
	bl 0x25d8	@ 00013a94 eef7a0fd
.org 0x13a98
	movs r0, #85	@ 00013a98 5520
.org 0x13a9a
	bl 0x25d8	@ 00013a9a eef79dfd
.org 0x13a9e
	b.n 0x13b3e	@ 00013a9e 4ee0
.org 0x13aa0
	.byte 0x00,0x10,0xf0,0xff	@ 00013aa0 data
.org 0x13aa4
	.byte 0xff,0xbf,0x03,0x00	@ 00013aa4 data
.org 0x13aa8
	.byte 0xb0,0x0a,0x00,0x02	@ 00013aa8 data
.org 0x13aac
	.byte 0x4c,0xd0,0x02,0x00	@ 00013aac data
.org 0x13ab0
	.byte 0x44,0xd0,0x02,0x00	@ 00013ab0 data
.org 0x13ab4
	.byte 0xd4,0x07,0x00,0x00	@ 00013ab4 data
.org 0x13ab8
	.byte 0x2c,0xd0,0x02,0x00	@ 00013ab8 data
.org 0x13abc
	.byte 0x10,0xc0,0x02,0x00	@ 00013abc data
.org 0x13ac0
	.byte 0x35,0xd0,0x02,0x00	@ 00013ac0 data
.org 0x13ac4
	.byte 0x8a,0x45,0x83,0x08	@ 00013ac4 data
.org 0x13ac8
	.byte 0x2d,0xd0,0x02,0x00	@ 00013ac8 data
.org 0x13acc
	.byte 0x36,0xd0,0x02,0x00	@ 00013acc data
.org 0x13ad0
	.byte 0x94,0x45,0x83,0x08	@ 00013ad0 data
.org 0x13ad4
	.byte 0x2e,0xd0,0x02,0x00	@ 00013ad4 data
.org 0x13ad8
	.byte 0xd6,0x07,0x00,0x00	@ 00013ad8 data
.org 0x13adc
	.byte 0x37,0xd0,0x02,0x00	@ 00013adc data
.org 0x13ae0
	.byte 0x9e,0x45,0x83,0x08	@ 00013ae0 data
.org 0x13ae4
	.byte 0x38,0xd0,0x02,0x00	@ 00013ae4 data
