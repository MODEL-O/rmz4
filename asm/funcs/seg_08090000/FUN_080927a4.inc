@ FUN_080927a4  entry 0x080927a4  size 236
.thumb
.org 0x927a4
FUN_080927a4:
	push {r4, r5, lr}	@ 000927a4 30b5
.org 0x927a6
	adds r4, r0, #0	@ 000927a6 041c
.org 0x927a8
	ldrb r5, [r4, #14]	@ 000927a8 a57b
.org 0x927aa
	cmp r5, #0	@ 000927aa 002d
.org 0x927ac
	beq.n 0x927b4	@ 000927ac 02d0
.org 0x927ae
	cmp r5, #1	@ 000927ae 012d
.org 0x927b0
	beq.n 0x927ee	@ 000927b0 1dd0
.org 0x927b2
	b.n 0x9288a	@ 000927b2 6ae0
.org 0x927b4
	movs r0, #107	@ 000927b4 6b20
.org 0x927b6
	bl 0x2b10	@ 000927b6 70f7abf9
.org 0x927ba
	adds r0, r4, #0	@ 000927ba 201c
.org 0x927bc
	adds r0, #113	@ 000927bc 7130
.org 0x927be
	ldrb r2, [r0, #0]	@ 000927be 0278
.org 0x927c0
	ldr r3, [pc, #204]	@ 000927c0 334b
.org 0x927c2
	ldrb r1, [r4, #10]	@ 000927c2 a17a
.org 0x927c4
	movs r0, #16	@ 000927c4 1020
.org 0x927c6
	ands r0, r1	@ 000927c6 0840
.org 0x927c8
	lsls r0, r0, #24	@ 000927c8 0006
.org 0x927ca
	lsrs r0, r0, #24	@ 000927ca 000e
.org 0x927cc
	negs r0, r0	@ 000927cc 4042
.org 0x927ce
	asrs r0, r0, #31	@ 000927ce c017
.org 0x927d0
	movs r1, #2	@ 000927d0 0221
.org 0x927d2
	ands r0, r1	@ 000927d2 0840
.org 0x927d4
	adds r0, r0, r3	@ 000927d4 c018
.org 0x927d6
	ldrh r1, [r0, #0]	@ 000927d6 0188
.org 0x927d8
	adds r0, r4, #0	@ 000927d8 201c
.org 0x927da
	movs r3, #3	@ 000927da 0323
.org 0x927dc
	bl 0x1cfc8	@ 000927dc 8af7f4fb
.org 0x927e0
	strb r5, [r4, #18]	@ 000927e0 a574
.org 0x927e2
	adds r0, r4, #0	@ 000927e2 201c
.org 0x927e4
	adds r0, #192	@ 000927e4 c030
.org 0x927e6
	str r5, [r0, #0]	@ 000927e6 0560
.org 0x927e8
	ldrb r0, [r4, #14]	@ 000927e8 a07b
.org 0x927ea
	adds r0, #1	@ 000927ea 0130
.org 0x927ec
	strb r0, [r4, #14]	@ 000927ec a073
.org 0x927ee
	ldr r0, [r4, #84]	@ 000927ee 606d
.org 0x927f0
	ldr r1, [r4, #92]	@ 000927f0 e16d
.org 0x927f2
	adds r0, r0, r1	@ 000927f2 4018
.org 0x927f4
	str r0, [r4, #84]	@ 000927f4 6065
.org 0x927f6
	ldr r0, [r4, #88]	@ 000927f6 a06d
.org 0x927f8
	ldr r1, [r4, #96]	@ 000927f8 216e
.org 0x927fa
	adds r0, r0, r1	@ 000927fa 4018
.org 0x927fc
	str r0, [r4, #88]	@ 000927fc a065
.org 0x927fe
	ldrb r0, [r4, #16]	@ 000927fe 207c
.org 0x92800
	cmp r0, #1	@ 00092800 0128
.org 0x92802
	bne.n 0x92884	@ 00092802 3fd1
.org 0x92804
	adds r0, r4, #0	@ 00092804 201c
.org 0x92806
	adds r0, #192	@ 00092806 c030
.org 0x92808
	ldr r1, [r0, #0]	@ 00092808 0168
.org 0x9280a
	adds r1, #1	@ 0009280a 0131
.org 0x9280c
	str r1, [r0, #0]	@ 0009280c 0160
.org 0x9280e
	ldr r0, [pc, #132]	@ 0009280e 2148
.org 0x92810
	cmp r1, r0	@ 00092810 8142
.org 0x92812
	bhi.n 0x9283c	@ 00092812 13d8
.org 0x92814
	ldr r0, [pc, #128]	@ 00092814 2048
.org 0x92816
	ldr r0, [r0, #0]	@ 00092816 0068
.org 0x92818
	movs r1, #158	@ 00092818 9e21
.org 0x9281a
	lsls r1, r1, #2	@ 0009281a 8900
.org 0x9281c
	adds r0, r0, r1	@ 0009281c 4018
.org 0x9281e
	ldrb r0, [r0, #0]	@ 0009281e 0078
.org 0x92820
	cmp r0, #0	@ 00092820 0028
.org 0x92822
	beq.n 0x9283c	@ 00092822 0bd0
.org 0x92824
	ldrb r0, [r4, #18]	@ 00092824 a07c
.org 0x92826
	adds r0, #1	@ 00092826 0130
.org 0x92828
	strb r0, [r4, #18]	@ 00092828 a074
.org 0x9282a
	lsls r0, r0, #24	@ 0009282a 0006
.org 0x9282c
	lsrs r0, r0, #24	@ 0009282c 000e
.org 0x9282e
	cmp r0, #48	@ 0009282e 3028
.org 0x92830
	bls.n 0x9283c	@ 00092830 04d9
.org 0x92832
	adds r0, r4, #0	@ 00092832 201c
.org 0x92834
	bl 0x92b70	@ 00092834 00f09cf9
.org 0x92838
	movs r0, #0	@ 00092838 0020
.org 0x9283a
	strb r0, [r4, #18]	@ 0009283a a074
.org 0x9283c
	ldr r0, [pc, #92]	@ 0009283c 1748
.org 0x9283e
	adds r1, r4, #0	@ 0009283e 211c
.org 0x92840
	adds r1, #84	@ 00092840 5431
.org 0x92842
	bl 0x1fb14	@ 00092842 8df767f9
.org 0x92846
	movs r1, #128	@ 00092846 8021
.org 0x92848
	lsls r1, r1, #7	@ 00092848 c901
.org 0x9284a
	cmp r0, r1	@ 0009284a 8842
.org 0x9284c
	bls.n 0x92884	@ 0009284c 1ad9
.org 0x9284e
	ldrb r1, [r4, #10]	@ 0009284e a17a
.org 0x92850
	movs r0, #254	@ 00092850 fe20
.org 0x92852
	ands r0, r1	@ 00092852 0840
.org 0x92854
	movs r2, #0	@ 00092854 0022
.org 0x92856
	movs r1, #253	@ 00092856 fd21
.org 0x92858
	ands r0, r1	@ 00092858 0840
.org 0x9285a
	strb r0, [r4, #10]	@ 0009285a a072
.org 0x9285c
	adds r0, r4, #0	@ 0009285c 201c
.org 0x9285e
	adds r0, #140	@ 0009285e 8c30
.org 0x92860
	str r2, [r0, #0]	@ 00092860 0260
.org 0x92862
	adds r0, #4	@ 00092862 0430
.org 0x92864
	str r2, [r0, #0]	@ 00092864 0260
.org 0x92866
	adds r0, #4	@ 00092866 0430
.org 0x92868
	strb r2, [r0, #0]	@ 00092868 0270
.org 0x9286a
	ldrb r1, [r4, #10]	@ 0009286a a17a
.org 0x9286c
	movs r0, #251	@ 0009286c fb20
.org 0x9286e
	ands r0, r1	@ 0009286e 0840
.org 0x92870
	strb r0, [r4, #10]	@ 00092870 a072
.org 0x92872
	ldr r1, [pc, #44]	@ 00092872 0b49
.org 0x92874
	ldrb r0, [r4, #9]	@ 00092874 607a
.org 0x92876
	lsls r0, r0, #2	@ 00092876 8000
.org 0x92878
	adds r0, r0, r1	@ 00092878 4018
.org 0x9287a
	movs r1, #3	@ 0009287a 0321
.org 0x9287c
	str r1, [r4, #12]	@ 0009287c e160
.org 0x9287e
	ldr r0, [r0, #0]	@ 0009287e 0068
.org 0x92880
	ldr r0, [r0, #12]	@ 00092880 c068
.org 0x92882
	str r0, [r4, #20]	@ 00092882 6061
.org 0x92884
	adds r0, r4, #0	@ 00092884 201c
.org 0x92886
	bl 0x1cff0	@ 00092886 8af7b3fb
.org 0x9288a
	pop {r4, r5}	@ 0009288a 30bc
.org 0x9288c
	pop {r0}	@ 0009288c 01bc
.org 0x9288e
	bx r0	@ 0009288e 0047
