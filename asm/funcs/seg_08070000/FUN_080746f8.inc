@ FUN_080746f8  entry 0x080746f8  size 176
.thumb
.org 0x746f8
FUN_080746f8:
	push {r4, r5, r6, lr}	@ 000746f8 70b5
.org 0x746fa
	adds r4, r0, #0	@ 000746fa 041c
.org 0x746fc
	ldrb r0, [r4, #14]	@ 000746fc a07b
.org 0x746fe
	cmp r0, #0	@ 000746fe 0028
.org 0x74700
	bne.n 0x74716	@ 00074700 09d1
.org 0x74702
	movs r1, #147	@ 00074702 9321
.org 0x74704
	lsls r1, r1, #8	@ 00074704 0902
.org 0x74706
	adds r0, r4, #0	@ 00074706 201c
.org 0x74708
	bl 0x1cf00	@ 00074708 a8f7fafb
.org 0x7470c
	movs r0, #64	@ 0007470c 4020
.org 0x7470e
	strb r0, [r4, #18]	@ 0007470e a074
.org 0x74710
	ldrb r0, [r4, #14]	@ 00074710 a07b
.org 0x74712
	adds r0, #1	@ 00074712 0130
.org 0x74714
	strb r0, [r4, #14]	@ 00074714 a073
.org 0x74716
	adds r0, r4, #0	@ 00074716 201c
.org 0x74718
	bl 0x1cff0	@ 00074718 a8f76afc
.org 0x7471c
	adds r3, r4, #0	@ 0007471c 231c
.org 0x7471e
	adds r3, #180	@ 0007471e b433
.org 0x74720
	ldr r1, [pc, #108]	@ 00074720 1b49
.org 0x74722
	adds r2, r4, #0	@ 00074722 221c
.org 0x74724
	adds r2, #224	@ 00074724 e032
.org 0x74726
	ldrb r0, [r2, #0]	@ 00074726 1078
.org 0x74728
	lsls r0, r0, #1	@ 00074728 4000
.org 0x7472a
	adds r0, r0, r1	@ 0007472a 4018
.org 0x7472c
	movs r5, #0	@ 0007472c 0025
.org 0x7472e
	ldrsh r1, [r0, r5]	@ 0007472e 415f
.org 0x74730
	lsls r1, r1, #2	@ 00074730 8900
.org 0x74732
	ldr r0, [r3, #4]	@ 00074732 5868
.org 0x74734
	adds r0, r0, r1	@ 00074734 4018
.org 0x74736
	str r0, [r4, #88]	@ 00074736 a065
.org 0x74738
	ldrb r0, [r2, #0]	@ 00074738 1078
.org 0x7473a
	adds r0, #1	@ 0007473a 0130
.org 0x7473c
	strb r0, [r2, #0]	@ 0007473c 1070
.org 0x7473e
	ldrh r2, [r3, #20]	@ 0007473e 9a8a
.org 0x74740
	ldrh r6, [r3, #16]	@ 00074740 1e8a
.org 0x74742
	adds r0, r2, r6	@ 00074742 9019
.org 0x74744
	movs r5, #0	@ 00074744 0025
.org 0x74746
	strh r0, [r3, #16]	@ 00074746 1882
.org 0x74748
	ldrh r1, [r3, #22]	@ 00074748 d98a
.org 0x7474a
	ldrh r6, [r3, #18]	@ 0007474a 5e8a
.org 0x7474c
	adds r0, r1, r6	@ 0007474c 8819
.org 0x7474e
	strh r0, [r3, #18]	@ 0007474e 5882
.org 0x74750
	ldrb r0, [r4, #15]	@ 00074750 e07b
.org 0x74752
	cmp r0, #0	@ 00074752 0028
.org 0x74754
	bne.n 0x74794	@ 00074754 1ed1
.org 0x74756
	adds r0, r2, #0	@ 00074756 101c
.org 0x74758
	adds r0, #128	@ 00074758 8030
.org 0x7475a
	strh r0, [r3, #20]	@ 0007475a 9882
.org 0x7475c
	adds r1, #128	@ 0007475c 8031
.org 0x7475e
	strh r1, [r3, #22]	@ 0007475e d982
.org 0x74760
	lsls r0, r0, #16	@ 00074760 0004
.org 0x74762
	asrs r0, r0, #16	@ 00074762 0014
.org 0x74764
	movs r1, #128	@ 00074764 8021
.org 0x74766
	lsls r1, r1, #2	@ 00074766 8900
.org 0x74768
	cmp r0, r1	@ 00074768 8842
.org 0x7476a
	ble.n 0x74770	@ 0007476a 01dd
.org 0x7476c
	strh r1, [r3, #20]	@ 0007476c 9982
.org 0x7476e
	strh r1, [r3, #22]	@ 0007476e d982
.org 0x74770
	ldrh r1, [r3, #12]	@ 00074770 9989
.org 0x74772
	adds r1, #128	@ 00074772 8031
.org 0x74774
	strh r1, [r3, #12]	@ 00074774 9981
.org 0x74776
	ldrh r0, [r3, #14]	@ 00074776 d889
.org 0x74778
	adds r0, #128	@ 00074778 8030
.org 0x7477a
	strh r0, [r3, #14]	@ 0007477a d881
.org 0x7477c
	lsls r1, r1, #16	@ 0007477c 0904
.org 0x7477e
	asrs r1, r1, #16	@ 0007477e 0914
.org 0x74780
	movs r0, #192	@ 00074780 c020
.org 0x74782
	lsls r0, r0, #6	@ 00074782 8001
.org 0x74784
	cmp r1, r0	@ 00074784 8142
.org 0x74786
	ble.n 0x747a8	@ 00074786 0fdd
.org 0x74788
	strh r0, [r3, #12]	@ 00074788 9881
.org 0x7478a
	strh r0, [r3, #14]	@ 0007478a d881
.org 0x7478c
	b.n 0x747a2	@ 0007478c 09e0
.org 0x7478e
	.byte 0x00	@ 0007478e data
.org 0x7478f
	.byte 0x00	@ 0007478f data
.org 0x74790
	.byte 0x0c,0x93,0x12,0x08	@ 00074790 data
.org 0x74794
	ldrb r0, [r4, #18]	@ 00074794 a07c
.org 0x74796
	subs r0, #1	@ 00074796 0138
.org 0x74798
	strb r0, [r4, #18]	@ 00074798 a074
.org 0x7479a
	lsls r0, r0, #24	@ 0007479a 0006
.org 0x7479c
	lsrs r0, r0, #24	@ 0007479c 000e
.org 0x7479e
	cmp r0, #255	@ 0007479e ff28
.org 0x747a0
	bne.n 0x747a8	@ 000747a0 02d1
.org 0x747a2
	movs r0, #2	@ 000747a2 0220
.org 0x747a4
	strb r0, [r4, #13]	@ 000747a4 6073
.org 0x747a6
	strb r5, [r4, #14]	@ 000747a6 a573
