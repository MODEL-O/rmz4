@ FUN_080357e4  entry 0x080357e4  size 346
.thumb
.org 0x357e4
FUN_080357e4:
	push {r4, r5, r6, r7, lr}	@ 000357e4 f0b5
.org 0x357e6
	mov r7, r8	@ 000357e6 4746
.org 0x357e8
	push {r7}	@ 000357e8 80b4
.org 0x357ea
	adds r6, r0, #0	@ 000357ea 061c
.org 0x357ec
	movs r0, #129	@ 000357ec 8120
.org 0x357ee
	lsls r0, r0, #1	@ 000357ee 4000
.org 0x357f0
	adds r4, r6, r0	@ 000357f0 3418
.org 0x357f2
	ldrb r0, [r4, #0]	@ 000357f2 2078
.org 0x357f4
	cmp r0, #1	@ 000357f4 0128
.org 0x357f6
	beq.n 0x35838	@ 000357f6 1fd0
.org 0x357f8
	cmp r0, #1	@ 000357f8 0128
.org 0x357fa
	bgt.n 0x3580c	@ 000357fa 07dc
.org 0x357fc
	cmp r0, #0	@ 000357fc 0028
.org 0x357fe
	beq.n 0x35820	@ 000357fe 0fd0
.org 0x35800
	ldr r1, [pc, #4]	@ 00035800 0149
.org 0x35802
	adds r1, r1, r6	@ 00035802 8919
.org 0x35804
	mov r8, r1	@ 00035804 8846
.org 0x35806
	b.n 0x358ce	@ 00035806 62e0
.org 0x35808
	.byte 0x45,0x01,0x00,0x00	@ 00035808 data
.org 0x3580c
	cmp r0, #2	@ 0003580c 0228
.org 0x3580e
	beq.n 0x35870	@ 0003580e 2fd0
.org 0x35810
	cmp r0, #3	@ 00035810 0328
.org 0x35812
	beq.n 0x358a0	@ 00035812 45d0
.org 0x35814
	ldr r2, [pc, #4]	@ 00035814 014a
.org 0x35816
	adds r2, r2, r6	@ 00035816 9219
.org 0x35818
	mov r8, r2	@ 00035818 9046
.org 0x3581a
	b.n 0x358ce	@ 0003581a 58e0
.org 0x3581c
	.byte 0x45,0x01,0x00,0x00	@ 0003581c data
.org 0x35820
	movs r1, #192	@ 00035820 c021
.org 0x35822
	lsls r1, r1, #5	@ 00035822 4901
.org 0x35824
	adds r0, r6, #0	@ 00035824 301c
.org 0x35826
	bl 0x1cf00	@ 00035826 e7f76bfb
.org 0x3582a
	ldr r0, [pc, #64]	@ 0003582a 1048
.org 0x3582c
	adds r1, r6, r0	@ 0003582c 3118
.org 0x3582e
	movs r0, #24	@ 0003582e 1820
.org 0x35830
	strb r0, [r1, #0]	@ 00035830 0870
.org 0x35832
	ldrb r0, [r4, #0]	@ 00035832 2078
.org 0x35834
	adds r0, #1	@ 00035834 0130
.org 0x35836
	strb r0, [r4, #0]	@ 00035836 2070
.org 0x35838
	movs r1, #192	@ 00035838 c021
.org 0x3583a
	lsls r1, r1, #5	@ 0003583a 4901
.org 0x3583c
	adds r0, r6, #0	@ 0003583c 301c
.org 0x3583e
	bl 0x3a3b0	@ 0003583e 04f0b7fd
.org 0x35842
	adds r0, r6, #0	@ 00035842 301c
.org 0x35844
	adds r0, #114	@ 00035844 7230
.org 0x35846
	ldrb r0, [r0, #0]	@ 00035846 0078
.org 0x35848
	lsls r0, r0, #24	@ 00035848 0006
.org 0x3584a
	asrs r0, r0, #24	@ 0003584a 0016
.org 0x3584c
	ldr r1, [pc, #28]	@ 0003584c 0749
.org 0x3584e
	adds r1, r1, r6	@ 0003584e 8919
.org 0x35850
	mov r8, r1	@ 00035850 8846
.org 0x35852
	cmp r0, #1	@ 00035852 0128
.org 0x35854
	bgt.n 0x358ce	@ 00035854 3bdc
.org 0x35856
	adds r0, r6, #0	@ 00035856 301c
.org 0x35858
	movs r1, #19	@ 00035858 1321
.org 0x3585a
	bl 0x3c464	@ 0003585a 06f003fe
.org 0x3585e
	movs r2, #129	@ 0003585e 8122
.org 0x35860
	lsls r2, r2, #1	@ 00035860 5200
.org 0x35862
	adds r1, r6, r2	@ 00035862 b118
.org 0x35864
	ldrb r0, [r1, #0]	@ 00035864 0878
.org 0x35866
	adds r0, #1	@ 00035866 0130
.org 0x35868
	b.n 0x358cc	@ 00035868 30e0
.org 0x3586a
	.byte 0x00	@ 0003586a data
.org 0x3586b
	.byte 0x00	@ 0003586b data
.org 0x3586c
	.byte 0x45,0x01,0x00,0x00	@ 0003586c data
.org 0x35870
	movs r1, #192	@ 00035870 c021
.org 0x35872
	lsls r1, r1, #5	@ 00035872 4901
.org 0x35874
	adds r0, r6, #0	@ 00035874 301c
.org 0x35876
	bl 0x3a3b0	@ 00035876 04f09bfd
.org 0x3587a
	ldr r0, [pc, #28]	@ 0003587a 0748
.org 0x3587c
	adds r1, r6, r0	@ 0003587c 3118
.org 0x3587e
	ldrb r0, [r1, #0]	@ 0003587e 0878
.org 0x35880
	mov r8, r1	@ 00035880 8846
.org 0x35882
	cmp r0, #8	@ 00035882 0828
.org 0x35884
	bhi.n 0x358ce	@ 00035884 23d8
.org 0x35886
	ldr r1, [pc, #20]	@ 00035886 0549
.org 0x35888
	adds r0, r6, #0	@ 00035888 301c
.org 0x3588a
	bl 0x1cf00	@ 0003588a e7f739fb
.org 0x3588e
	ldrb r0, [r4, #0]	@ 0003588e 2078
.org 0x35890
	adds r0, #1	@ 00035890 0130
.org 0x35892
	strb r0, [r4, #0]	@ 00035892 2070
.org 0x35894
	b.n 0x358ce	@ 00035894 1be0
.org 0x35896
	.byte 0x00	@ 00035896 data
.org 0x35897
	.byte 0x00	@ 00035897 data
.org 0x35898
	.byte 0x45,0x01,0x00,0x00	@ 00035898 data
.org 0x3589c
	.byte 0x01,0x18,0x00,0x00	@ 0003589c data
.org 0x358a0
	adds r0, r6, #0	@ 000358a0 301c
.org 0x358a2
	adds r0, #115	@ 000358a2 7330
.org 0x358a4
	ldrb r0, [r0, #0]	@ 000358a4 0078
.org 0x358a6
	ldr r1, [pc, #112]	@ 000358a6 1c49
.org 0x358a8
	adds r1, r1, r6	@ 000358a8 8919
.org 0x358aa
	mov r8, r1	@ 000358aa 8846
.org 0x358ac
	cmp r0, #3	@ 000358ac 0328
.org 0x358ae
	bne.n 0x358ce	@ 000358ae 0ed1
.org 0x358b0
	ldr r0, [pc, #104]	@ 000358b0 1a48
.org 0x358b2
	adds r2, r6, r0	@ 000358b2 3218
.org 0x358b4
	ldrb r1, [r2, #0]	@ 000358b4 1178
.org 0x358b6
	movs r0, #3	@ 000358b6 0320
.org 0x358b8
	negs r0, r0	@ 000358b8 4042
.org 0x358ba
	ands r0, r1	@ 000358ba 0840
.org 0x358bc
	strb r0, [r2, #0]	@ 000358bc 1070
.org 0x358be
	movs r0, #0	@ 000358be 0020
.org 0x358c0
	strb r0, [r6, #13]	@ 000358c0 7073
.org 0x358c2
	strb r0, [r6, #14]	@ 000358c2 b073
.org 0x358c4
	strb r0, [r6, #15]	@ 000358c4 f073
.org 0x358c6
	movs r2, #128	@ 000358c6 8022
.org 0x358c8
	lsls r2, r2, #1	@ 000358c8 5200
.org 0x358ca
	adds r1, r6, r2	@ 000358ca b118
.org 0x358cc
	strb r0, [r1, #0]	@ 000358cc 0870
.org 0x358ce
	mov r7, r8	@ 000358ce 4746
.org 0x358d0
	ldrb r0, [r7, #0]	@ 000358d0 3878
.org 0x358d2
	cmp r0, #0	@ 000358d2 0028
.org 0x358d4
	beq.n 0x35956	@ 000358d4 3fd0
.org 0x358d6
	subs r0, #1	@ 000358d6 0138
.org 0x358d8
	strb r0, [r7, #0]	@ 000358d8 3870
.org 0x358da
	ldrb r1, [r6, #10]	@ 000358da b17a
.org 0x358dc
	movs r0, #16	@ 000358dc 1020
.org 0x358de
	ands r0, r1	@ 000358de 0840
.org 0x358e0
	cmp r0, #0	@ 000358e0 0028
.org 0x358e2
	beq.n 0x35920	@ 000358e2 1dd0
.org 0x358e4
	adds r0, r6, #0	@ 000358e4 301c
.org 0x358e6
	bl 0x386d4	@ 000358e6 02f0f5fe
.org 0x358ea
	adds r5, r0, #0	@ 000358ea 051c
.org 0x358ec
	adds r0, r6, #0	@ 000358ec 301c
.org 0x358ee
	bl 0x38790	@ 000358ee 02f04fff
.org 0x358f2
	adds r4, r0, #0	@ 000358f2 041c
.org 0x358f4
	adds r0, r6, #0	@ 000358f4 301c
.org 0x358f6
	bl 0x386d4	@ 000358f6 02f0edfe
.org 0x358fa
	lsls r5, r5, #16	@ 000358fa 2d04
.org 0x358fc
	asrs r5, r5, #16	@ 000358fc 2d14
.org 0x358fe
	lsls r4, r4, #16	@ 000358fe 2404
.org 0x35900
	asrs r4, r4, #16	@ 00035900 2414
.org 0x35902
	lsls r0, r0, #16	@ 00035902 0004
.org 0x35904
	asrs r0, r0, #16	@ 00035904 0014
.org 0x35906
	subs r4, r4, r0	@ 00035906 241a
.org 0x35908
	ldrb r0, [r7, #0]	@ 00035908 3878
.org 0x3590a
	muls r0, r4	@ 0003590a 6043
.org 0x3590c
	movs r1, #24	@ 0003590c 1821
.org 0x3590e
	bl 0x128fb8	@ 0003590e f3f053fb
.org 0x35912
	adds r5, r5, r0	@ 00035912 2d18
.org 0x35914
	b.n 0x35954	@ 00035914 1ee0
.org 0x35916
	.byte 0x00	@ 00035916 data
.org 0x35917
	.byte 0x00	@ 00035917 data
.org 0x35918
	.byte 0x45,0x01,0x00,0x00	@ 00035918 data
.org 0x3591c
	.byte 0x53,0x01,0x00,0x00	@ 0003591c data
.org 0x35920
	adds r0, r6, #0	@ 00035920 301c
.org 0x35922
	bl 0x386d4	@ 00035922 02f0d7fe
.org 0x35926
	adds r5, r0, #0	@ 00035926 051c
.org 0x35928
	adds r0, r6, #0	@ 00035928 301c
.org 0x3592a
	bl 0x38790	@ 0003592a 02f031ff
.org 0x3592e
	adds r4, r0, #0	@ 0003592e 041c
.org 0x35930
	adds r0, r6, #0	@ 00035930 301c
.org 0x35932
	bl 0x386d4	@ 00035932 02f0cffe
.org 0x35936
	lsls r5, r5, #16	@ 00035936 2d04
.org 0x35938
	asrs r5, r5, #16	@ 00035938 2d14
.org 0x3593a
	negs r5, r5	@ 0003593a 6d42
.org 0x3593c
	lsls r4, r4, #16	@ 0003593c 2404
