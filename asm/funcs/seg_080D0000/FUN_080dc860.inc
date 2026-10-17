@ FUN_080dc860  entry 0x080dc860  size 348
.thumb
.org 0xdc860
FUN_080dc860:
	push {r4, r5, r6, r7, lr}	@ 000dc860 f0b5
.org 0xdc862
	adds r6, r0, #0	@ 000dc862 061c
.org 0xdc864
	ldr r0, [r6, #40]	@ 000dc864 b06a
.org 0xdc866
	ldrb r0, [r0, #10]	@ 000dc866 807a
.org 0xdc868
	lsls r0, r0, #24	@ 000dc868 0006
.org 0xdc86a
	lsrs r5, r0, #28	@ 000dc86a 050f
.org 0xdc86c
	movs r1, #1	@ 000dc86c 0121
.org 0xdc86e
	ands r5, r1	@ 000dc86e 0d40
.org 0xdc870
	lsrs r4, r0, #29	@ 000dc870 440f
.org 0xdc872
	ands r4, r1	@ 000dc872 0c40
.org 0xdc874
	ldrb r7, [r6, #17]	@ 000dc874 777c
.org 0xdc876
	ldrb r0, [r6, #14]	@ 000dc876 b07b
.org 0xdc878
	cmp r0, #0	@ 000dc878 0028
.org 0xdc87a
	beq.n 0xdc882	@ 000dc87a 02d0
.org 0xdc87c
	cmp r0, #1	@ 000dc87c 0128
.org 0xdc87e
	beq.n 0xdc940	@ 000dc87e 5fd0
.org 0xdc880
	b.n 0xdc9ca	@ 000dc880 a3e0
.org 0xdc882
	ldrb r1, [r6, #10]	@ 000dc882 b17a
.org 0xdc884
	movs r0, #1	@ 000dc884 0120
.org 0xdc886
	movs r3, #0	@ 000dc886 0023
.org 0xdc888
	adds r2, r0, #0	@ 000dc888 021c
.org 0xdc88a
	orrs r2, r1	@ 000dc88a 0a43
.org 0xdc88c
	strb r2, [r6, #10]	@ 000dc88c b272
.org 0xdc88e
	adds r1, r5, #0	@ 000dc88e 291c
.org 0xdc890
	cmp r5, #0	@ 000dc890 002d
.org 0xdc892
	beq.n 0xdc89a	@ 000dc892 02d0
.org 0xdc894
	movs r0, #16	@ 000dc894 1020
.org 0xdc896
	orrs r2, r0	@ 000dc896 0243
.org 0xdc898
	b.n 0xdc89e	@ 000dc898 01e0
.org 0xdc89a
	movs r0, #239	@ 000dc89a ef20
.org 0xdc89c
	ands r2, r0	@ 000dc89c 0240
.org 0xdc89e
	strb r2, [r6, #10]	@ 000dc89e b272
.org 0xdc8a0
	adds r0, r6, #0	@ 000dc8a0 301c
.org 0xdc8a2
	adds r0, #76	@ 000dc8a2 4c30
.org 0xdc8a4
	strb r1, [r0, #0]	@ 000dc8a4 0170
.org 0xdc8a6
	adds r2, r6, #0	@ 000dc8a6 321c
.org 0xdc8a8
	adds r2, #74	@ 000dc8a8 4a32
.org 0xdc8aa
	lsls r1, r1, #4	@ 000dc8aa 0901
.org 0xdc8ac
	ldrb r3, [r2, #0]	@ 000dc8ac 1378
.org 0xdc8ae
	movs r0, #17	@ 000dc8ae 1120
.org 0xdc8b0
	negs r0, r0	@ 000dc8b0 4042
.org 0xdc8b2
	ands r0, r3	@ 000dc8b2 1840
.org 0xdc8b4
	orrs r0, r1	@ 000dc8b4 0843
.org 0xdc8b6
	strb r0, [r2, #0]	@ 000dc8b6 1070
.org 0xdc8b8
	adds r3, r4, #0	@ 000dc8b8 231c
.org 0xdc8ba
	adds r4, r2, #0	@ 000dc8ba 141c
.org 0xdc8bc
	cmp r3, #0	@ 000dc8bc 002b
.org 0xdc8be
	beq.n 0xdc8c8	@ 000dc8be 03d0
.org 0xdc8c0
	ldrb r0, [r6, #10]	@ 000dc8c0 b07a
.org 0xdc8c2
	movs r1, #32	@ 000dc8c2 2021
.org 0xdc8c4
	orrs r0, r1	@ 000dc8c4 0843
.org 0xdc8c6
	b.n 0xdc8ce	@ 000dc8c6 02e0
.org 0xdc8c8
	ldrb r1, [r6, #10]	@ 000dc8c8 b17a
.org 0xdc8ca
	movs r0, #223	@ 000dc8ca df20
.org 0xdc8cc
	ands r0, r1	@ 000dc8cc 0840
.org 0xdc8ce
	strb r0, [r6, #10]	@ 000dc8ce b072
.org 0xdc8d0
	adds r1, r3, #0	@ 000dc8d0 191c
.org 0xdc8d2
	adds r2, r6, #0	@ 000dc8d2 321c
.org 0xdc8d4
	adds r2, #77	@ 000dc8d4 4d32
.org 0xdc8d6
	strb r1, [r2, #0]	@ 000dc8d6 1170
.org 0xdc8d8
	lsls r1, r1, #5	@ 000dc8d8 4901
.org 0xdc8da
	ldrb r2, [r4, #0]	@ 000dc8da 2278
.org 0xdc8dc
	movs r0, #33	@ 000dc8dc 2120
.org 0xdc8de
	negs r0, r0	@ 000dc8de 4042
.org 0xdc8e0
	ands r0, r2	@ 000dc8e0 1040
.org 0xdc8e2
	orrs r0, r1	@ 000dc8e2 0843
.org 0xdc8e4
	strb r0, [r4, #0]	@ 000dc8e4 2070
.org 0xdc8e6
	ldr r1, [r6, #116]	@ 000dc8e6 716f
.org 0xdc8e8
	lsls r0, r7, #1	@ 000dc8e8 7800
.org 0xdc8ea
	adds r0, r0, r1	@ 000dc8ea 4018
.org 0xdc8ec
	ldrh r1, [r0, #0]	@ 000dc8ec 0188
.org 0xdc8ee
	adds r0, r6, #0	@ 000dc8ee 301c
.org 0xdc8f0
	bl 0x1cf00	@ 000dc8f0 40f706fb
.org 0xdc8f4
	cmp r5, #0	@ 000dc8f4 002d
.org 0xdc8f6
	beq.n 0xdc8fc	@ 000dc8f6 01d0
.org 0xdc8f8
	movs r0, #2	@ 000dc8f8 0220
.org 0xdc8fa
	subs r7, r0, r7	@ 000dc8fa c71b
.org 0xdc8fc
	subs r1, r7, #1	@ 000dc8fc 791e
.org 0xdc8fe
	lsls r1, r1, #8	@ 000dc8fe 0902
.org 0xdc900
	ldr r5, [pc, #80]	@ 000dc900 144d
.org 0xdc902
	ldr r0, [r5, #0]	@ 000dc902 2868
.org 0xdc904
	ldr r4, [pc, #80]	@ 000dc904 144c
.org 0xdc906
	muls r0, r4	@ 000dc906 6043
.org 0xdc908
	ldr r3, [pc, #80]	@ 000dc908 144b
.org 0xdc90a
	adds r0, r0, r3	@ 000dc90a c018
.org 0xdc90c
	lsls r0, r0, #1	@ 000dc90c 4000
.org 0xdc90e
	lsrs r2, r0, #1	@ 000dc90e 4208
.org 0xdc910
	lsls r0, r0, #6	@ 000dc910 8001
.org 0xdc912
	lsrs r0, r0, #23	@ 000dc912 c00d
.org 0xdc914
	adds r1, r1, r0	@ 000dc914 0918
.org 0xdc916
	ldr r0, [pc, #72]	@ 000dc916 1248
.org 0xdc918
	adds r1, r1, r0	@ 000dc918 0918
.org 0xdc91a
	str r1, [r6, #92]	@ 000dc91a f165
.org 0xdc91c
	adds r1, r2, #0	@ 000dc91c 111c
.org 0xdc91e
	muls r1, r4	@ 000dc91e 6143
.org 0xdc920
	adds r1, r1, r3	@ 000dc920 c918
.org 0xdc922
	lsls r1, r1, #1	@ 000dc922 4900
.org 0xdc924
	lsrs r0, r1, #1	@ 000dc924 4808
.org 0xdc926
	str r0, [r5, #0]	@ 000dc926 2860
.org 0xdc928
	lsrs r1, r1, #17	@ 000dc928 490c
.org 0xdc92a
	movs r0, #128	@ 000dc92a 8020
.org 0xdc92c
	lsls r0, r0, #1	@ 000dc92c 4000
.org 0xdc92e
	ands r1, r0	@ 000dc92e 0140
.org 0xdc930
	ldr r0, [pc, #48]	@ 000dc930 0c48
.org 0xdc932
	subs r0, r0, r1	@ 000dc932 401a
.org 0xdc934
	str r0, [r6, #96]	@ 000dc934 3066
.org 0xdc936
	movs r0, #0	@ 000dc936 0020
.org 0xdc938
	strb r0, [r6, #18]	@ 000dc938 b074
.org 0xdc93a
	ldrb r0, [r6, #14]	@ 000dc93a b07b
.org 0xdc93c
	adds r0, #1	@ 000dc93c 0130
.org 0xdc93e
	strb r0, [r6, #14]	@ 000dc93e b073
.org 0xdc940
	ldrb r0, [r6, #18]	@ 000dc940 b07c
.org 0xdc942
	adds r0, #1	@ 000dc942 0130
.org 0xdc944
	strb r0, [r6, #18]	@ 000dc944 b074
.org 0xdc946
	movs r1, #1	@ 000dc946 0121
.org 0xdc948
	ands r0, r1	@ 000dc948 0840
.org 0xdc94a
	cmp r0, #0	@ 000dc94a 0028
.org 0xdc94c
	beq.n 0xdc968	@ 000dc94c 0cd0
.org 0xdc94e
	ldrb r0, [r6, #10]	@ 000dc94e b07a
.org 0xdc950
	orrs r0, r1	@ 000dc950 0843
.org 0xdc952
	b.n 0xdc96e	@ 000dc952 0ce0
.org 0xdc954
	.byte 0x38,0xdc,0x02,0x02	@ 000dc954 data
.org 0xdc958
	.byte 0xfd,0x43,0x03,0x00	@ 000dc958 data
.org 0xdc95c
	.byte 0xc3,0x9e,0x26,0x00	@ 000dc95c data
.org 0xdc960
	.byte 0x00,0xff,0xff,0xff	@ 000dc960 data
.org 0xdc964
	.byte 0x00,0xfe,0xff,0xff	@ 000dc964 data
.org 0xdc968
	ldrb r1, [r6, #10]	@ 000dc968 b17a
.org 0xdc96a
	movs r0, #254	@ 000dc96a fe20
.org 0xdc96c
	ands r0, r1	@ 000dc96c 0840
.org 0xdc96e
	strb r0, [r6, #10]	@ 000dc96e b072
.org 0xdc970
	ldr r0, [r6, #84]	@ 000dc970 706d
.org 0xdc972
	ldr r1, [r6, #92]	@ 000dc972 f16d
.org 0xdc974
	adds r0, r0, r1	@ 000dc974 4018
.org 0xdc976
	str r0, [r6, #84]	@ 000dc976 7065
.org 0xdc978
	ldr r0, [r6, #88]	@ 000dc978 b06d
.org 0xdc97a
	ldr r1, [r6, #96]	@ 000dc97a 316e
.org 0xdc97c
	adds r0, r0, r1	@ 000dc97c 4018
.org 0xdc97e
	str r0, [r6, #88]	@ 000dc97e b065
.org 0xdc980
	adds r1, #32	@ 000dc980 2031
.org 0xdc982
	str r1, [r6, #96]	@ 000dc982 3166
.org 0xdc984
	adds r0, r6, #0	@ 000dc984 301c
.org 0xdc986
	bl 0x1d134	@ 000dc986 40f7d5fb
.org 0xdc98a
	ldr r0, [r6, #84]	@ 000dc98a 706d
.org 0xdc98c
	ldr r1, [r6, #88]	@ 000dc98c b16d
.org 0xdc98e
	bl 0x7c7c	@ 000dc98e 2bf775f9
.org 0xdc992
	lsls r0, r0, #16	@ 000dc992 0004
.org 0xdc994
	cmp r0, #0	@ 000dc994 0028
.org 0xdc996
	beq.n 0xdc9ca	@ 000dc996 18d0
.org 0xdc998
	adds r0, r6, #0	@ 000dc998 301c
.org 0xdc99a
	adds r0, #121	@ 000dc99a 7930
.org 0xdc99c
	ldrb r0, [r0, #0]	@ 000dc99c 0078
.org 0xdc99e
	cmp r0, #0	@ 000dc99e 0028
.org 0xdc9a0
	bne.n 0xdc9ae	@ 000dc9a0 05d1
.org 0xdc9a2
	adds r1, r6, #0	@ 000dc9a2 311c
.org 0xdc9a4
	adds r1, #84	@ 000dc9a4 5431
.org 0xdc9a6
	movs r0, #3	@ 000dc9a6 0320
.org 0xdc9a8
	bl 0xd0c88	@ 000dc9a8 f4f76ef9
.org 0xdc9ac
	b.n 0xdc9b8	@ 000dc9ac 04e0
.org 0xdc9ae
	adds r1, r6, #0	@ 000dc9ae 311c
.org 0xdc9b0
	adds r1, #84	@ 000dc9b0 5431
.org 0xdc9b2
	movs r0, #2	@ 000dc9b2 0220
.org 0xdc9b4
	bl 0xd0c88	@ 000dc9b4 f4f768f9
.org 0xdc9b8
	ldr r1, [pc, #20]	@ 000dc9b8 0549
.org 0xdc9ba
	ldrb r0, [r6, #9]	@ 000dc9ba 707a
