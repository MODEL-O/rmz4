@ FUN_08007830  entry 0x08007830  size 288
.thumb
.org 0x7830
FUN_08007830:
	push {r4, r5, r6, r7, lr}	@ 00007830 f0b5
.org 0x7832
	mov r7, r9	@ 00007832 4f46
.org 0x7834
	mov r6, r8	@ 00007834 4646
.org 0x7836
	push {r6, r7}	@ 00007836 c0b4
.org 0x7838
	ldr r4, [pc, #108]	@ 00007838 1b4c
.org 0x783a
	movs r2, #232	@ 0000783a e822
.org 0x783c
	lsls r2, r2, #1	@ 0000783c 5200
.org 0x783e
	adds r1, r4, r2	@ 0000783e a118
.org 0x7840
	ldrh r1, [r1, #0]	@ 00007840 0988
.org 0x7842
	movs r3, #127	@ 00007842 7f23
.org 0x7844
	mov r8, r3	@ 00007844 9846
.org 0x7846
	mov r5, r8	@ 00007846 4546
.org 0x7848
	ands r5, r1	@ 00007848 0d40
.org 0x784a
	mov r8, r5	@ 0000784a a846
.org 0x784c
	ldr r3, [pc, #92]	@ 0000784c 174b
.org 0x784e
	ldr r2, [pc, #96]	@ 0000784e 184a
.org 0x7850
	adds r1, r4, r2	@ 00007850 a118
.org 0x7852
	ldrb r1, [r1, #0]	@ 00007852 0978
.org 0x7854
	lsrs r1, r1, #4	@ 00007854 0909
.org 0x7856
	lsls r1, r1, #2	@ 00007856 8900
.org 0x7858
	lsls r2, r5, #3	@ 00007858 ea00
.org 0x785a
	adds r1, r1, r2	@ 0000785a 8918
.org 0x785c
	adds r1, r1, r3	@ 0000785c c918
.org 0x785e
	ldr r1, [r1, #0]	@ 0000785e 0968
.org 0x7860
	mov r9, r1	@ 00007860 8946
.org 0x7862
	ldr r1, [r0, #0]	@ 00007862 0168
.org 0x7864
	ldr r0, [r0, #4]	@ 00007864 4068
.org 0x7866
	ldr r2, [pc, #76]	@ 00007866 134a
.org 0x7868
	asrs r1, r1, #12	@ 00007868 0913
.org 0x786a
	adds r1, r1, r2	@ 0000786a 8918
.org 0x786c
	ldrb r2, [r1, #0]	@ 0000786c 0a78
.org 0x786e
	ldr r1, [pc, #72]	@ 0000786e 1249
.org 0x7870
	asrs r0, r0, #12	@ 00007870 0013
.org 0x7872
	adds r0, r0, r1	@ 00007872 4018
.org 0x7874
	ldrb r0, [r0, #0]	@ 00007874 0078
.org 0x7876
	mov r3, r9	@ 00007876 4b46
.org 0x7878
	ldr r1, [r3, #108]	@ 00007878 d96e
.org 0x787a
	ldrb r5, [r1, #2]	@ 0000787a 8d78
.org 0x787c
	cmp r2, r5	@ 0000787c aa42
.org 0x787e
	bcs.n 0x796c	@ 0000787e 75d2
.org 0x7880
	ldrb r3, [r1, #3]	@ 00007880 cb78
.org 0x7882
	cmp r0, r3	@ 00007882 9842
.org 0x7884
	bcs.n 0x796c	@ 00007884 72d2
.org 0x7886
	ldrb r5, [r1, #0]	@ 00007886 0d78
.org 0x7888
	lsls r0, r5	@ 00007888 a840
.org 0x788a
	adds r0, r0, r2	@ 0000788a 8018
.org 0x788c
	adds r0, r0, r1	@ 0000788c 4018
.org 0x788e
	ldrb r7, [r0, #4]	@ 0000788e 0779
.org 0x7890
	lsrs r2, r7, #4	@ 00007890 3a09
.org 0x7892
	ldr r1, [pc, #40]	@ 00007892 0a49
.org 0x7894
	adds r0, r4, r1	@ 00007894 6018
.org 0x7896
	ldrh r1, [r0, #0]	@ 00007896 0188
.org 0x7898
	lsrs r0, r1, #8	@ 00007898 080a
.org 0x789a
	cmp r0, r8	@ 0000789a 4045
.org 0x789c
	bne.n 0x78c0	@ 0000789c 10d1
.org 0x789e
	movs r0, #255	@ 0000789e ff20
.org 0x78a0
	ands r0, r1	@ 000078a0 0840
.org 0x78a2
	cmp r2, r0	@ 000078a2 8242
.org 0x78a4
	bne.n 0x78c4	@ 000078a4 0ed1
.org 0x78a6
	b.n 0x78fe	@ 000078a6 2ae0
.org 0x78a8
	.byte 0xb0,0x0a,0x00,0x02	@ 000078a8 data
.org 0x78ac
	.byte 0xd4,0xc5,0x82,0x08	@ 000078ac data
.org 0x78b0
	.byte 0x10,0xc0,0x02,0x00	@ 000078b0 data
.org 0x78b4
	.byte 0xd4,0xb9,0x82,0x08	@ 000078b4 data
.org 0x78b8
	.byte 0xd4,0xb1,0x82,0x08	@ 000078b8 data
.org 0x78bc
	.byte 0xd4,0x07,0x00,0x00	@ 000078bc data
.org 0x78c0
	cmp r2, #255	@ 000078c0 ff2a
.org 0x78c2
	beq.n 0x78fe	@ 000078c2 1cd0
.org 0x78c4
	mov r2, r8	@ 000078c4 4246
.org 0x78c6
	lsls r5, r2, #2	@ 000078c6 9500
.org 0x78c8
	ldr r0, [pc, #80]	@ 000078c8 1448
.org 0x78ca
	adds r5, r5, r0	@ 000078ca 2d18
.org 0x78cc
	ldr r0, [r5, #0]	@ 000078cc 2868
.org 0x78ce
	adds r0, r0, r5	@ 000078ce 4019
.org 0x78d0
	lsrs r6, r7, #4	@ 000078d0 3e09
.org 0x78d2
	lsls r4, r6, #2	@ 000078d2 b400
.org 0x78d4
	adds r4, r4, r6	@ 000078d4 a419
.org 0x78d6
	lsls r4, r4, #2	@ 000078d6 a400
.org 0x78d8
	adds r0, r0, r4	@ 000078d8 0019
.org 0x78da
	movs r1, #128	@ 000078da 8021
.org 0x78dc
	lsls r1, r1, #7	@ 000078dc c901
.org 0x78de
	bl 0x1ea4	@ 000078de faf7e1fa
.org 0x78e2
	ldr r0, [r5, #0]	@ 000078e2 2868
.org 0x78e4
	adds r0, r0, r5	@ 000078e4 4019
.org 0x78e6
	adds r0, r0, r4	@ 000078e6 0019
.org 0x78e8
	adds r0, #12	@ 000078e8 0c30
.org 0x78ea
	movs r1, #0	@ 000078ea 0021
.org 0x78ec
	bl 0x2208	@ 000078ec faf78cfc
.org 0x78f0
	ldr r0, [pc, #44]	@ 000078f0 0b48
.org 0x78f2
	mov r3, r8	@ 000078f2 4346
.org 0x78f4
	lsls r1, r3, #8	@ 000078f4 1902
.org 0x78f6
	orrs r6, r1	@ 000078f6 0e43
.org 0x78f8
	ldr r5, [pc, #40]	@ 000078f8 0a4d
.org 0x78fa
	adds r0, r0, r5	@ 000078fa 4019
.org 0x78fc
	strh r6, [r0, #0]	@ 000078fc 0680
.org 0x78fe
	movs r2, #15	@ 000078fe 0f22
.org 0x7900
	ands r2, r7	@ 00007900 3a40
.org 0x7902
	ldr r0, [pc, #28]	@ 00007902 0748
.org 0x7904
	ldr r1, [pc, #32]	@ 00007904 0849
.org 0x7906
	adds r0, r0, r1	@ 00007906 4018
.org 0x7908
	ldrh r1, [r0, #0]	@ 00007908 0188
.org 0x790a
	lsrs r0, r1, #8	@ 0000790a 080a
.org 0x790c
	cmp r0, r8	@ 0000790c 4045
.org 0x790e
	bne.n 0x792c	@ 0000790e 0dd1
.org 0x7910
	movs r0, #255	@ 00007910 ff20
.org 0x7912
	ands r0, r1	@ 00007912 0840
.org 0x7914
	cmp r2, r0	@ 00007914 8242
.org 0x7916
	bne.n 0x7930	@ 00007916 0bd1
.org 0x7918
	b.n 0x796c	@ 00007918 28e0
.org 0x791a
	.byte 0x00	@ 0000791a data
.org 0x791b
	.byte 0x00	@ 0000791b data
.org 0x791c
	.byte 0x00,0x20,0xdf,0x08	@ 0000791c data
.org 0x7920
	.byte 0xb0,0x0a,0x00,0x02	@ 00007920 data
.org 0x7924
	.byte 0xd4,0x07,0x00,0x00	@ 00007924 data
.org 0x7928
	.byte 0xd6,0x07,0x00,0x00	@ 00007928 data
.org 0x792c
	cmp r2, #255	@ 0000792c ff2a
.org 0x792e
	beq.n 0x796c	@ 0000792e 1dd0
.org 0x7930
	mov r2, r8	@ 00007930 4246
.org 0x7932
	lsls r6, r2, #2	@ 00007932 9600
.org 0x7934
	ldr r0, [pc, #68]	@ 00007934 1148
.org 0x7936
	adds r6, r6, r0	@ 00007936 3618
.org 0x7938
	ldr r0, [r6, #0]	@ 00007938 3068
.org 0x793a
	adds r0, r0, r6	@ 0000793a 8019
.org 0x793c
	movs r5, #15	@ 0000793c 0f25
.org 0x793e
	ands r5, r7	@ 0000793e 3d40
.org 0x7940
	lsls r4, r5, #2	@ 00007940 ac00
.org 0x7942
	adds r4, r4, r5	@ 00007942 6419
.org 0x7944
	lsls r4, r4, #2	@ 00007944 a400
.org 0x7946
	adds r0, r0, r4	@ 00007946 0019
.org 0x7948
	movs r1, #128	@ 00007948 8021
.org 0x794a
	lsls r1, r1, #7	@ 0000794a c901
.org 0x794c
	bl 0x1ea4	@ 0000794c faf7aafa
