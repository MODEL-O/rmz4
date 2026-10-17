@ FUN_081227dc  entry 0x081227dc  size 206
.thumb
.org 0x1227dc
FUN_081227dc:
	push {r4, lr}	@ 001227dc 10b5
.org 0x1227de
	adds r4, r0, #0	@ 001227de 041c
.org 0x1227e0
	movs r1, #10	@ 001227e0 0a21
.org 0x1227e2
	ldrsh r0, [r4, r1]	@ 001227e2 605e
.org 0x1227e4
	cmp r0, #3	@ 001227e4 0328
.org 0x1227e6
	bgt.n 0x122800	@ 001227e6 0bdc
.org 0x1227e8
	ldr r0, [pc, #100]	@ 001227e8 1948
.org 0x1227ea
	ldrh r1, [r0, #6]	@ 001227ea c188
.org 0x1227ec
	movs r0, #128	@ 001227ec 8020
.org 0x1227ee
	ands r0, r1	@ 001227ee 0840
.org 0x1227f0
	cmp r0, #0	@ 001227f0 0028
.org 0x1227f2
	beq.n 0x122800	@ 001227f2 05d0
.org 0x1227f4
	movs r0, #1	@ 001227f4 0120
.org 0x1227f6
	bl 0x2b10	@ 001227f6 e0f68bf9
.org 0x1227fa
	ldrh r0, [r4, #10]	@ 001227fa 6089
.org 0x1227fc
	adds r0, #1	@ 001227fc 0130
.org 0x1227fe
	strh r0, [r4, #10]	@ 001227fe 6081
.org 0x122800
	movs r2, #10	@ 00122800 0a22
.org 0x122802
	ldrsh r0, [r4, r2]	@ 00122802 a05e
.org 0x122804
	cmp r0, #0	@ 00122804 0028
.org 0x122806
	ble.n 0x122820	@ 00122806 0bdd
.org 0x122808
	ldr r0, [pc, #68]	@ 00122808 1148
.org 0x12280a
	ldrh r1, [r0, #6]	@ 0012280a c188
.org 0x12280c
	movs r0, #64	@ 0012280c 4020
.org 0x12280e
	ands r0, r1	@ 0012280e 0840
.org 0x122810
	cmp r0, #0	@ 00122810 0028
.org 0x122812
	beq.n 0x122820	@ 00122812 05d0
.org 0x122814
	movs r0, #1	@ 00122814 0120
.org 0x122816
	bl 0x2b10	@ 00122816 e0f67bf9
.org 0x12281a
	ldrh r0, [r4, #10]	@ 0012281a 6089
.org 0x12281c
	subs r0, #1	@ 0012281c 0138
.org 0x12281e
	strh r0, [r4, #10]	@ 0012281e 6081
.org 0x122820
	ldr r0, [pc, #48]	@ 00122820 0c48
.org 0x122822
	ldrh r0, [r0, #0]	@ 00122822 0088
.org 0x122824
	ldr r1, [pc, #48]	@ 00122824 0c49
.org 0x122826
	adds r0, r0, r1	@ 00122826 4018
.org 0x122828
	movs r1, #10	@ 00122828 0a21
.org 0x12282a
	ldrsh r2, [r4, r1]	@ 0012282a 625e
.org 0x12282c
	lsls r2, r2, #1	@ 0012282c 5200
.org 0x12282e
	adds r2, #4	@ 0012282e 0432
.org 0x122830
	movs r1, #3	@ 00122830 0321
.org 0x122832
	bl 0x10d85c	@ 00122832 ebf713f8
.org 0x122836
	ldr r0, [pc, #24]	@ 00122836 0648
.org 0x122838
	ldrh r1, [r0, #4]	@ 00122838 8188
.org 0x12283a
	movs r0, #2	@ 0012283a 0220
.org 0x12283c
	ands r0, r1	@ 0012283c 0840
.org 0x12283e
	cmp r0, #0	@ 0012283e 0028
.org 0x122840
	beq.n 0x12285c	@ 00122840 0cd0
.org 0x122842
	movs r0, #3	@ 00122842 0320
.org 0x122844
	bl 0x2b10	@ 00122844 e0f664f9
.org 0x122848
	movs r0, #2	@ 00122848 0220
.org 0x12284a
	negs r0, r0	@ 0012284a 4042
.org 0x12284c
	b.n 0x1228c2	@ 0012284c 39e0
.org 0x12284e
	.byte 0x00	@ 0012284e data
.org 0x12284f
	.byte 0x00	@ 0012284f data
.org 0x122850
	.byte 0x60,0x07,0x00,0x02	@ 00122850 data
.org 0x122854
	.byte 0xf8,0xcf,0x86,0x08	@ 00122854 data
.org 0x122858
	.byte 0x5f,0x0e,0x01,0x09	@ 00122858 data
.org 0x12285c
	movs r0, #1	@ 0012285c 0120
.org 0x12285e
	ands r0, r1	@ 0012285e 0840
.org 0x122860
	cmp r0, #0	@ 00122860 0028
.org 0x122862
	beq.n 0x1228c0	@ 00122862 2dd0
.org 0x122864
	ldr r2, [pc, #32]	@ 00122864 084a
.org 0x122866
	adds r0, r4, r2	@ 00122866 a018
.org 0x122868
	ldrb r0, [r0, #1]	@ 00122868 4078
.org 0x12286a
	cmp r0, #1	@ 0012286a 0128
.org 0x12286c
	bne.n 0x12288c	@ 0012286c 0ed1
.org 0x12286e
	movs r1, #10	@ 0012286e 0a21
.org 0x122870
	ldrsh r0, [r4, r1]	@ 00122870 605e
.org 0x122872
	adds r2, #13	@ 00122872 0d32
.org 0x122874
	adds r1, r4, r2	@ 00122874 a118
.org 0x122876
	adds r1, r1, r0	@ 00122876 0918
.org 0x122878
	ldrb r0, [r1, #0]	@ 00122878 0878
.org 0x12287a
	cmp r0, #1	@ 0012287a 0128
.org 0x12287c
	beq.n 0x12288c	@ 0012287c 06d0
.org 0x12287e
	movs r0, #4	@ 0012287e 0420
.org 0x122880
	bl 0x2b10	@ 00122880 e0f646f9
.org 0x122884
	b.n 0x1228c0	@ 00122884 1ce0
.org 0x122886
	.byte 0x00	@ 00122886 data
.org 0x122887
	.byte 0x00	@ 00122887 data
.org 0x122888
	.byte 0xcc,0x0d,0x00,0x00	@ 00122888 data
.org 0x12288c
	ldr r1, [pc, #40]	@ 0012288c 0a49
.org 0x12288e
	adds r0, r4, r1	@ 0012288e 6018
.org 0x122890
	ldrb r0, [r0, #1]	@ 00122890 4078
.org 0x122892
	cmp r0, #2	@ 00122892 0228
.org 0x122894
	bne.n 0x1228a6	@ 00122894 07d1
.org 0x122896
	movs r2, #10	@ 00122896 0a22
.org 0x122898
	ldrsh r0, [r4, r2]	@ 00122898 a05e
.org 0x12289a
	ldr r2, [pc, #32]	@ 0012289a 084a
.org 0x12289c
	adds r1, r4, r2	@ 0012289c a118
.org 0x12289e
	adds r1, r1, r0	@ 0012289e 0918
.org 0x1228a0
	ldrb r0, [r1, #0]	@ 001228a0 0878
.org 0x1228a2
	cmp r0, #0	@ 001228a2 0028
.org 0x1228a4
	beq.n 0x12287e	@ 001228a4 ebd0
.org 0x1228a6
	movs r0, #2	@ 001228a6 0220
.org 0x1228a8
	bl 0x2b10	@ 001228a8 e0f632f9
