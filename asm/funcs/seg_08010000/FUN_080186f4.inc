@ FUN_080186f4  entry 0x080186f4  size 172
.thumb
.org 0x186f4
FUN_080186f4:
	push {r4, r5, r6, lr}	@ 000186f4 70b5
.org 0x186f6
	adds r5, r0, #0	@ 000186f6 051c
.org 0x186f8
	ldrb r6, [r5, #14]	@ 000186f8 ae7b
.org 0x186fa
	cmp r6, #0	@ 000186fa 002e
.org 0x186fc
	bne.n 0x1875a	@ 000186fc 2dd1
.org 0x186fe
	ldr r0, [r5, #92]	@ 000186fe e86d
.org 0x18700
	lsls r0, r0, #16	@ 00018700 0004
.org 0x18702
	lsrs r0, r0, #20	@ 00018702 000d
.org 0x18704
	lsls r3, r0, #1	@ 00018704 4300
.org 0x18706
	ldr r4, [pc, #152]	@ 00018706 264c
.org 0x18708
	adds r3, r3, r4	@ 00018708 1b19
.org 0x1870a
	ldr r1, [r5, #100]	@ 0001870a 696e
.org 0x1870c
	movs r2, #69	@ 0001870c 4522
.org 0x1870e
	orrs r1, r2	@ 0001870e 1143
.org 0x18710
	strh r1, [r3, #0]	@ 00018710 1980
.org 0x18712
	lsls r0, r0, #2	@ 00018712 8000
.org 0x18714
	adds r4, #8	@ 00018714 0834
.org 0x18716
	adds r0, r0, r4	@ 00018716 0019
.org 0x18718
	str r6, [r0, #0]	@ 00018718 0660
.org 0x1871a
	ldr r0, [pc, #136]	@ 0001871a 2248
.org 0x1871c
	ldr r0, [r0, #0]	@ 0001871c 0068
.org 0x1871e
	ldr r2, [pc, #136]	@ 0001871e 224a
.org 0x18720
	adds r0, r0, r2	@ 00018720 8018
.org 0x18722
	movs r2, #248	@ 00018722 f822
.org 0x18724
	lsls r2, r2, #5	@ 00018724 5201
.org 0x18726
	ands r1, r2	@ 00018726 1140
.org 0x18728
	lsls r1, r1, #3	@ 00018728 c900
.org 0x1872a
	movs r2, #192	@ 0001872a c022
.org 0x1872c
	lsls r2, r2, #19	@ 0001872c d204
.org 0x1872e
	adds r1, r1, r2	@ 0001872e 8918
.org 0x18730
	movs r2, #128	@ 00018730 8022
.org 0x18732
	lsls r2, r2, #2	@ 00018732 9200
.org 0x18734
	bl 0x128be0	@ 00018734 10f154fa
.org 0x18738
	adds r0, r5, #0	@ 00018738 281c
.org 0x1873a
	adds r0, #110	@ 0001873a 6e30
.org 0x1873c
	strh r6, [r0, #0]	@ 0001873c 0680
.org 0x1873e
	subs r0, #2	@ 0001873e 0238
.org 0x18740
	strh r6, [r0, #0]	@ 00018740 0680
.org 0x18742
	subs r0, #2	@ 00018742 0238
.org 0x18744
	strh r6, [r0, #0]	@ 00018744 0680
.org 0x18746
	subs r0, #2	@ 00018746 0238
.org 0x18748
	strh r6, [r0, #0]	@ 00018748 0680
.org 0x1874a
	ldr r1, [pc, #96]	@ 0001874a 1849
.org 0x1874c
	ldr r0, [pc, #96]	@ 0001874c 1848
.org 0x1874e
	strh r0, [r1, #0]	@ 0001874e 0880
.org 0x18750
	ldr r0, [pc, #96]	@ 00018750 1848
.org 0x18752
	strh r0, [r1, #2]	@ 00018752 4880
.org 0x18754
	ldrb r0, [r5, #14]	@ 00018754 a87b
.org 0x18756
	adds r0, #1	@ 00018756 0130
.org 0x18758
	strb r0, [r5, #14]	@ 00018758 a873
.org 0x1875a
	adds r3, r5, #0	@ 0001875a 2b1c
.org 0x1875c
	adds r3, #104	@ 0001875c 6833
.org 0x1875e
	ldrh r0, [r3, #0]	@ 0001875e 1888
.org 0x18760
	ldr r1, [r5, #112]	@ 00018760 296f
.org 0x18762
	ldr r2, [r5, #52]	@ 00018762 6a6b
.org 0x18764
	subs r1, r1, r2	@ 00018764 891a
.org 0x18766
	lsls r1, r1, #4	@ 00018766 0901
.org 0x18768
	movs r2, #128	@ 00018768 8022
.org 0x1876a
	lsls r2, r2, #5	@ 0001876a 5201
.org 0x1876c
	adds r1, r1, r2	@ 0001876c 8918
.org 0x1876e
	cmp r0, r1	@ 0001876e 8842
.org 0x18770
	ble.n 0x1877a	@ 00018770 03dd
.org 0x18772
	movs r0, #0	@ 00018772 0020
.org 0x18774
	strh r0, [r3, #0]	@ 00018774 1880
.org 0x18776
	ldr r0, [r5, #52]	@ 00018776 686b
.org 0x18778
	str r0, [r5, #112]	@ 00018778 2867
.org 0x1877a
	ldrh r0, [r3, #0]	@ 0001877a 1888
.org 0x1877c
	adds r0, #8	@ 0001877c 0830
.org 0x1877e
	strh r0, [r3, #0]	@ 0001877e 1880
.org 0x18780
	adds r1, r5, #0	@ 00018780 291c
.org 0x18782
	adds r1, #106	@ 00018782 6a31
.org 0x18784
	ldrh r0, [r1, #0]	@ 00018784 0888
.org 0x18786
	adds r0, #4	@ 00018786 0430
.org 0x18788
	strh r0, [r1, #0]	@ 00018788 0880
.org 0x1878a
	adds r1, #2	@ 0001878a 0231
.org 0x1878c
	ldrh r0, [r1, #0]	@ 0001878c 0888
.org 0x1878e
	adds r0, #8	@ 0001878e 0830
.org 0x18790
	strh r0, [r1, #0]	@ 00018790 0880
.org 0x18792
	adds r1, #2	@ 00018792 0231
.org 0x18794
	ldrh r0, [r1, #0]	@ 00018794 0888
.org 0x18796
	adds r0, #12	@ 00018796 0c30
.org 0x18798
	strh r0, [r1, #0]	@ 00018798 0880
.org 0x1879a
	pop {r4, r5, r6}	@ 0001879a 70bc
.org 0x1879c
	pop {r0}	@ 0001879c 01bc
.org 0x1879e
	bx r0	@ 0001879e 0047
