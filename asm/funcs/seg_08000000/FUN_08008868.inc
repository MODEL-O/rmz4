@ FUN_08008868  entry 0x08008868  size 244
.thumb
.org 0x8868
FUN_08008868:
	push {r4, r5, r6, r7, lr}	@ 00008868 f0b5
.org 0x886a
	mov r7, sl	@ 0000886a 5746
.org 0x886c
	mov r6, r9	@ 0000886c 4e46
.org 0x886e
	mov r5, r8	@ 0000886e 4546
.org 0x8870
	push {r5, r6, r7}	@ 00008870 e0b4
.org 0x8872
	adds r4, r0, #0	@ 00008872 041c
.org 0x8874
	adds r6, r1, #0	@ 00008874 0e1c
.org 0x8876
	mov r9, r4	@ 00008876 a146
.org 0x8878
	movs r0, #0	@ 00008878 0020
.org 0x887a
	mov sl, r0	@ 0000887a 8246
.org 0x887c
	ldr r1, [pc, #56]	@ 0000887c 0e49
.org 0x887e
	mov r8, r1	@ 0000887e 8846
.org 0x8880
	movs r0, #232	@ 00008880 e820
.org 0x8882
	lsls r0, r0, #1	@ 00008882 4000
.org 0x8884
	add r0, r8	@ 00008884 4044
.org 0x8886
	ldrh r0, [r0, #0]	@ 00008886 0088
.org 0x8888
	cmp r0, #4	@ 00008888 0428
.org 0x888a
	bne.n 0x88a6	@ 0000888a 0cd1
.org 0x888c
	ldr r0, [pc, #44]	@ 0000888c 0b48
.org 0x888e
	add r0, r9	@ 0000888e 4844
.org 0x8890
	movs r1, #240	@ 00008890 f021
.org 0x8892
	lsls r1, r1, #10	@ 00008892 8902
.org 0x8894
	bl 0x129050	@ 00008894 20f1dcfb
.org 0x8898
	movs r2, #240	@ 00008898 f022
.org 0x889a
	lsls r2, r2, #8	@ 0000889a 1202
.org 0x889c
	adds r4, r0, r2	@ 0000889c 8418
.org 0x889e
	mov r0, r9	@ 0000889e 4846
.org 0x88a0
	subs r0, r0, r4	@ 000088a0 001b
.org 0x88a2
	mov sl, r0	@ 000088a2 8246
.org 0x88a4
	mov r9, r4	@ 000088a4 a146
.org 0x88a6
	asrs r1, r4, #12	@ 000088a6 2113
.org 0x88a8
	asrs r7, r6, #12	@ 000088a8 3713
.org 0x88aa
	ldr r0, [pc, #20]	@ 000088aa 0548
.org 0x88ac
	cmp r7, r0	@ 000088ac 8742
.org 0x88ae
	bls.n 0x88c4	@ 000088ae 09d9
.org 0x88b0
	movs r0, #1	@ 000088b0 0120
.org 0x88b2
	negs r0, r0	@ 000088b2 4042
.org 0x88b4
	b.n 0x897a	@ 000088b4 61e0
.org 0x88b6
	.byte 0x00	@ 000088b6 data
.org 0x88b7
	.byte 0x00	@ 000088b7 data
.org 0x88b8
	.byte 0xb0,0x0a,0x00,0x02	@ 000088b8 data
.org 0x88bc
	.byte 0x00,0x10,0xff,0xff	@ 000088bc data
.org 0x88c0
	.byte 0xff,0x04,0x00,0x00	@ 000088c0 data
.org 0x88c4
	movs r5, #0	@ 000088c4 0025
.org 0x88c6
	ldr r0, [pc, #84]	@ 000088c6 1548
.org 0x88c8
	cmp r1, r0	@ 000088c8 8142
.org 0x88ca
	bhi.n 0x894a	@ 000088ca 3ed8
.org 0x88cc
	movs r2, #252	@ 000088cc fc22
.org 0x88ce
	lsls r2, r2, #3	@ 000088ce d200
.org 0x88d0
	add r8, r2	@ 000088d0 9044
.org 0x88d2
	mov r2, r8	@ 000088d2 4246
.org 0x88d4
	ldrh r0, [r2, #0]	@ 000088d4 1088
.org 0x88d6
	muls r0, r7	@ 000088d6 7843
.org 0x88d8
	adds r0, r0, r1	@ 000088d8 4018
.org 0x88da
	adds r0, #2	@ 000088da 0230
.org 0x88dc
	lsls r0, r0, #1	@ 000088dc 4000
.org 0x88de
	add r0, r8	@ 000088de 4044
.org 0x88e0
	ldrh r0, [r0, #0]	@ 000088e0 0088
.org 0x88e2
	ldr r2, [pc, #60]	@ 000088e2 0f4a
.org 0x88e4
	ldr r1, [r2, #0]	@ 000088e4 1168
.org 0x88e6
	lsls r0, r0, #1	@ 000088e6 4000
.org 0x88e8
	adds r0, r0, r1	@ 000088e8 4018
.org 0x88ea
	ldrh r2, [r0, #0]	@ 000088ea 0288
.org 0x88ec
	ldr r0, [pc, #52]	@ 000088ec 0d48
.org 0x88ee
	cmp r2, r0	@ 000088ee 8242
.org 0x88f0
	beq.n 0x8910	@ 000088f0 0ed0
.org 0x88f2
	ldr r1, [pc, #52]	@ 000088f2 0d49
.org 0x88f4
	movs r0, #15	@ 000088f4 0f20
.org 0x88f6
	ands r2, r0	@ 000088f6 0240
.org 0x88f8
	lsls r0, r2, #2	@ 000088f8 9000
.org 0x88fa
	adds r0, r0, r1	@ 000088fa 4018
.org 0x88fc
	ldr r2, [pc, #44]	@ 000088fc 0b4a
.org 0x88fe
	adds r1, r4, #0	@ 000088fe 211c
.org 0x8900
	ands r1, r2	@ 00008900 1140
.org 0x8902
	ldr r3, [r0, #0]	@ 00008902 0368
.org 0x8904
	adds r0, r6, #0	@ 00008904 301c
.org 0x8906
	ands r0, r2	@ 00008906 1040
.org 0x8908
	bl 0x128f88	@ 00008908 20f13efb
.org 0x890c
	cmp r0, #0	@ 0000890c 0028
.org 0x890e
	bne.n 0x894a	@ 0000890e 1cd1
.org 0x8910
	movs r0, #1	@ 00008910 0120
.org 0x8912
	ands r0, r5	@ 00008912 2840
.org 0x8914
	cmp r0, #0	@ 00008914 0028
.org 0x8916
	beq.n 0x8930	@ 00008916 0bd0
.org 0x8918
	adds r4, #1	@ 00008918 0134
.org 0x891a
	b.n 0x893c	@ 0000891a 0fe0
.org 0x891c
	.byte 0x7f,0x07,0x00,0x00	@ 0000891c data
.org 0x8920
	.byte 0x68,0x0c,0x00,0x02	@ 00008920 data
.org 0x8924
	.byte 0x0f,0x80,0x00,0x00	@ 00008924 data
.org 0x8928
	.byte 0x54,0xb1,0x82,0x08	@ 00008928 data
.org 0x892c
	.byte 0xff,0x0f,0x00,0x00	@ 0000892c data
.org 0x8930
	movs r1, #128	@ 00008930 8021
.org 0x8932
	lsls r1, r1, #5	@ 00008932 4901
.org 0x8934
	adds r0, r4, r1	@ 00008934 6018
.org 0x8936
	asrs r0, r0, #12	@ 00008936 0013
.org 0x8938
	lsls r0, r0, #12	@ 00008938 0003
.org 0x893a
	subs r4, r0, #1	@ 0000893a 441e
.org 0x893c
	asrs r1, r4, #12	@ 0000893c 2113
.org 0x893e
	adds r5, #1	@ 0000893e 0135
.org 0x8940
	cmp r5, #127	@ 00008940 7f2d
.org 0x8942
	bgt.n 0x894e	@ 00008942 04dc
.org 0x8944
	ldr r0, [pc, #12]	@ 00008944 0348
.org 0x8946
	cmp r1, r0	@ 00008946 8142
.org 0x8948
	bls.n 0x88d2	@ 00008948 c3d9
.org 0x894a
	cmp r5, #127	@ 0000894a 7f2d
.org 0x894c
	ble.n 0x895c	@ 0000894c 06dd
.org 0x894e
	ldr r2, [pc, #8]	@ 0000894e 024a
.org 0x8950
	b.n 0x896c	@ 00008950 0ce0
.org 0x8952
	.byte 0x00	@ 00008952 data
.org 0x8953
	.byte 0x00	@ 00008953 data
.org 0x8954
	.byte 0x7f,0x07,0x00,0x00	@ 00008954 data
.org 0x8958
	.byte 0xff,0xff,0xff,0x7f	@ 00008958 data
