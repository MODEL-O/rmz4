@ FUN_080db8f0  entry 0x080db8f0  size 234
.thumb
.org 0xdb8f0
FUN_080db8f0:
	push {r4, r5, r6, lr}	@ 000db8f0 70b5
.org 0xdb8f2
	adds r4, r0, #0	@ 000db8f2 041c
.org 0xdb8f4
	adds r0, #116	@ 000db8f4 7430
.org 0xdb8f6
	ldrb r6, [r0, #0]	@ 000db8f6 0678
.org 0xdb8f8
	ldrb r5, [r4, #15]	@ 000db8f8 e57b
.org 0xdb8fa
	cmp r5, #0	@ 000db8fa 002d
.org 0xdb8fc
	bne.n 0xdb91a	@ 000db8fc 0dd1
.org 0xdb8fe
	ldr r1, [pc, #72]	@ 000db8fe 1249
.org 0xdb900
	adds r0, r4, #0	@ 000db900 201c
.org 0xdb902
	bl 0x1cf00	@ 000db902 41f7fdfa
.org 0xdb906
	movs r0, #28	@ 000db906 1c20
.org 0xdb908
	strb r0, [r4, #18]	@ 000db908 a074
.org 0xdb90a
	strb r5, [r4, #19]	@ 000db90a e574
.org 0xdb90c
	ldr r0, [r4, #84]	@ 000db90c 606d
.org 0xdb90e
	str r0, [r4, #100]	@ 000db90e 6066
.org 0xdb910
	ldr r0, [r4, #88]	@ 000db910 a06d
.org 0xdb912
	str r0, [r4, #104]	@ 000db912 a066
.org 0xdb914
	ldrb r0, [r4, #15]	@ 000db914 e07b
.org 0xdb916
	adds r0, #1	@ 000db916 0130
.org 0xdb918
	strb r0, [r4, #15]	@ 000db918 e073
.org 0xdb91a
	adds r0, r4, #0	@ 000db91a 201c
.org 0xdb91c
	bl 0x1cff0	@ 000db91c 41f768fb
.org 0xdb920
	ldrb r0, [r4, #18]	@ 000db920 a07c
.org 0xdb922
	subs r0, #1	@ 000db922 0138
.org 0xdb924
	strb r0, [r4, #18]	@ 000db924 a074
.org 0xdb926
	lsls r0, r0, #24	@ 000db926 0006
.org 0xdb928
	cmp r0, #0	@ 000db928 0028
.org 0xdb92a
	bne.n 0xdb950	@ 000db92a 11d1
.org 0xdb92c
	ldr r1, [pc, #28]	@ 000db92c 0749
.org 0xdb92e
	ldrb r0, [r4, #9]	@ 000db92e 607a
.org 0xdb930
	lsls r0, r0, #2	@ 000db930 8000
.org 0xdb932
	adds r0, r0, r1	@ 000db932 4018
.org 0xdb934
	movs r1, #2	@ 000db934 0221
.org 0xdb936
	str r1, [r4, #12]	@ 000db936 e160
.org 0xdb938
	ldr r0, [r0, #0]	@ 000db938 0068
.org 0xdb93a
	ldr r0, [r0, #8]	@ 000db93a 8068
.org 0xdb93c
	str r0, [r4, #20]	@ 000db93c 6061
.org 0xdb93e
	adds r0, r4, #0	@ 000db93e 201c
.org 0xdb940
	bl 0xdbba4	@ 000db940 00f030f9
.org 0xdb944
	b.n 0xdb9e4	@ 000db944 4ee0
.org 0xdb946
	.byte 0x00	@ 000db946 data
.org 0xdb947
	.byte 0x00	@ 000db947 data
.org 0xdb948
	.byte 0x0d,0x40,0x00,0x00	@ 000db948 data
.org 0xdb94c
	.byte 0x64,0x6f,0x86,0x08	@ 000db94c data
.org 0xdb950
	ldrb r5, [r4, #19]	@ 000db950 e57c
.org 0xdb952
	cmp r5, #0	@ 000db952 002d
.org 0xdb954
	bne.n 0xdb9a4	@ 000db954 26d1
.org 0xdb956
	ldrb r0, [r4, #18]	@ 000db956 a07c
.org 0xdb958
	adds r3, r0, #0	@ 000db958 031c
.org 0xdb95a
	subs r3, #12	@ 000db95a 0c3b
.org 0xdb95c
	ldr r1, [pc, #64]	@ 000db95c 1049
.org 0xdb95e
	lsls r0, r3, #26	@ 000db95e 9806
.org 0xdb960
	lsrs r0, r0, #23	@ 000db960 c00d
.org 0xdb962
	adds r0, r0, r1	@ 000db962 4018
.org 0xdb964
	movs r1, #0	@ 000db964 0021
.org 0xdb966
	ldrsh r3, [r0, r1]	@ 000db966 435e
.org 0xdb968
	lsls r1, r6, #1	@ 000db968 7100
.org 0xdb96a
	subs r1, #1	@ 000db96a 0139
.org 0xdb96c
	lsls r2, r1, #10	@ 000db96c 8a02
.org 0xdb96e
	ldr r0, [r4, #100]	@ 000db96e 606e
.org 0xdb970
	subs r0, r0, r2	@ 000db970 801a
.org 0xdb972
	lsls r1, r1, #2	@ 000db972 8900
.org 0xdb974
	muls r1, r3	@ 000db974 5943
.org 0xdb976
	adds r0, r0, r1	@ 000db976 4018
.org 0xdb978
	str r0, [r4, #84]	@ 000db978 6065
.org 0xdb97a
	lsls r0, r3, #10	@ 000db97a 9802
.org 0xdb97c
	negs r0, r0	@ 000db97c 4042
.org 0xdb97e
	cmp r0, #0	@ 000db97e 0028
.org 0xdb980
	bge.n 0xdb984	@ 000db980 00da
.org 0xdb982
	adds r0, #255	@ 000db982 ff30
.org 0xdb984
	asrs r1, r0, #8	@ 000db984 0112
.org 0xdb986
	movs r2, #128	@ 000db986 8022
.org 0xdb988
	lsls r2, r2, #3	@ 000db988 d200
.org 0xdb98a
	adds r1, r1, r2	@ 000db98a 8918
.org 0xdb98c
	ldr r0, [r4, #104]	@ 000db98c a06e
.org 0xdb98e
	adds r0, r0, r1	@ 000db98e 4018
.org 0xdb990
	str r0, [r4, #88]	@ 000db990 a065
.org 0xdb992
	cmp r3, #0	@ 000db992 002b
.org 0xdb994
	bgt.n 0xdb9e4	@ 000db994 26dc
.org 0xdb996
	movs r0, #1	@ 000db996 0120
.org 0xdb998
	strb r0, [r4, #19]	@ 000db998 e074
.org 0xdb99a
	str r5, [r4, #96]	@ 000db99a 2566
.org 0xdb99c
	b.n 0xdb9e4	@ 000db99c 22e0
.org 0xdb99e
	.byte 0x00	@ 000db99e data
.org 0xdb99f
	.byte 0x00	@ 000db99f data
.org 0xdb9a0
	.byte 0x0c,0x93,0x12,0x08	@ 000db9a0 data
.org 0xdb9a4
	ldr r0, [r4, #96]	@ 000db9a4 206e
.org 0xdb9a6
	adds r0, #64	@ 000db9a6 4030
.org 0xdb9a8
	str r0, [r4, #96]	@ 000db9a8 2066
.org 0xdb9aa
	movs r1, #224	@ 000db9aa e021
.org 0xdb9ac
	lsls r1, r1, #3	@ 000db9ac c900
.org 0xdb9ae
	cmp r0, r1	@ 000db9ae 8842
.org 0xdb9b0
	ble.n 0xdb9b4	@ 000db9b0 00dd
.org 0xdb9b2
	str r1, [r4, #96]	@ 000db9b2 2166
.org 0xdb9b4
	ldr r1, [r4, #88]	@ 000db9b4 a16d
.org 0xdb9b6
	ldr r0, [r4, #96]	@ 000db9b6 206e
.org 0xdb9b8
	adds r1, r1, r0	@ 000db9b8 0918
.org 0xdb9ba
	str r1, [r4, #88]	@ 000db9ba a165
.org 0xdb9bc
	ldr r0, [r4, #84]	@ 000db9bc 606d
.org 0xdb9be
	ldr r2, [pc, #44]	@ 000db9be 0b4a
.org 0xdb9c0
	adds r1, r1, r2	@ 000db9c0 8918
.org 0xdb9c2
	bl 0x7c7c	@ 000db9c2 2cf75bf9
.org 0xdb9c6
	lsls r0, r0, #16	@ 000db9c6 0004
.org 0xdb9c8
	cmp r0, #0	@ 000db9c8 0028
.org 0xdb9ca
	beq.n 0xdb9e4	@ 000db9ca 0bd0
.org 0xdb9cc
	ldr r1, [pc, #32]	@ 000db9cc 0849
.org 0xdb9ce
	ldrb r0, [r4, #9]	@ 000db9ce 607a
.org 0xdb9d0
	lsls r0, r0, #2	@ 000db9d0 8000
.org 0xdb9d2
	adds r0, r0, r1	@ 000db9d2 4018
.org 0xdb9d4
	movs r1, #2	@ 000db9d4 0221
.org 0xdb9d6
	str r1, [r4, #12]	@ 000db9d6 e160
.org 0xdb9d8
	ldr r0, [r0, #0]	@ 000db9d8 0068
