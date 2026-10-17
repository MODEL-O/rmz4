@ FUN_081238c8  entry 0x081238c8  size 228
.thumb
.org 0x1238c8
FUN_081238c8:
	push {r4, r5, r6, r7, lr}	@ 001238c8 f0b5
.org 0x1238ca
	adds r6, r0, #0	@ 001238ca 061c
.org 0x1238cc
	ldr r0, [pc, #40]	@ 001238cc 0a48
.org 0x1238ce
	ldr r1, [pc, #44]	@ 001238ce 0b49
.org 0x1238d0
	adds r4, r6, r1	@ 001238d0 7418
.org 0x1238d2
	ldrb r1, [r4, #24]	@ 001238d2 217e
.org 0x1238d4
	lsls r1, r1, #2	@ 001238d4 8900
.org 0x1238d6
	adds r1, r1, r0	@ 001238d6 0918
.org 0x1238d8
	ldr r1, [r1, #0]	@ 001238d8 0968
.org 0x1238da
	adds r0, r6, #0	@ 001238da 301c
.org 0x1238dc
	bl 0x128f80	@ 001238dc 05f050fb
.org 0x1238e0
	adds r7, r0, #0	@ 001238e0 071c
.org 0x1238e2
	ldr r1, [r4, #12]	@ 001238e2 e168
.org 0x1238e4
	ldr r2, [r4, #8]	@ 001238e4 a268
.org 0x1238e6
	cmp r1, r2	@ 001238e6 9142
.org 0x1238e8
	bge.n 0x12390a	@ 001238e8 0fda
.org 0x1238ea
	subs r0, r2, r1	@ 001238ea 501a
.org 0x1238ec
	cmp r0, #9	@ 001238ec 0928
.org 0x1238ee
	bgt.n 0x123900	@ 001238ee 07dc
.org 0x1238f0
	adds r0, r1, #1	@ 001238f0 481c
.org 0x1238f2
	str r0, [r4, #12]	@ 001238f2 e060
.org 0x1238f4
	b.n 0x12390a	@ 001238f4 09e0
.org 0x1238f6
	.byte 0x00	@ 001238f6 data
.org 0x1238f7
	.byte 0x00	@ 001238f7 data
.org 0x1238f8
	.byte 0x84,0x23,0x88,0x08	@ 001238f8 data
.org 0x1238fc
	.byte 0xcc,0x0d,0x00,0x00	@ 001238fc data
.org 0x123900
	adds r0, r1, #2	@ 00123900 881c
.org 0x123902
	str r0, [r4, #12]	@ 00123902 e060
.org 0x123904
	cmp r0, r2	@ 00123904 9042
.org 0x123906
	ble.n 0x12390a	@ 00123906 00dd
.org 0x123908
	str r2, [r4, #12]	@ 00123908 e260
.org 0x12390a
	ldr r0, [pc, #160]	@ 0012390a 2848
.org 0x12390c
	adds r5, r6, r0	@ 0012390c 3518
.org 0x12390e
	ldr r0, [r5, #16]	@ 0012390e 2869
.org 0x123910
	ldr r1, [r5, #8]	@ 00123910 a968
.org 0x123912
	cmp r0, r1	@ 00123912 8842
.org 0x123914
	bge.n 0x123918	@ 00123914 00da
.org 0x123916
	str r1, [r5, #16]	@ 00123916 2961
.org 0x123918
	ldr r0, [pc, #148]	@ 00123918 2548
.org 0x12391a
	movs r1, #1	@ 0012391a 0121
.org 0x12391c
	movs r2, #0	@ 0012391c 0022
.org 0x12391e
	bl 0x10da2c	@ 0012391e eaf785f8
.org 0x123922
	ldr r0, [r5, #12]	@ 00123922 e868
.org 0x123924
	movs r1, #11	@ 00123924 0b21
.org 0x123926
	movs r2, #0	@ 00123926 0022
.org 0x123928
	bl 0x10dae0	@ 00123928 eaf7daf8
.org 0x12392c
	ldr r0, [pc, #132]	@ 0012392c 2148
.org 0x12392e
	movs r1, #15	@ 0012392e 0f21
.org 0x123930
	movs r2, #0	@ 00123930 0022
.org 0x123932
	bl 0x10da2c	@ 00123932 eaf77bf8
.org 0x123936
	ldr r0, [r5, #16]	@ 00123936 2869
.org 0x123938
	movs r1, #28	@ 00123938 1c21
.org 0x12393a
	movs r2, #0	@ 0012393a 0022
.org 0x12393c
	bl 0x10dae0	@ 0012393c eaf7d0f8
.org 0x123940
	ldr r0, [pc, #116]	@ 00123940 1d48
.org 0x123942
	movs r1, #9	@ 00123942 0921
.org 0x123944
	movs r2, #18	@ 00123944 1222
.org 0x123946
	bl 0x10da2c	@ 00123946 eaf771f8
.org 0x12394a
	ldr r0, [r5, #20]	@ 0012394a 6869
.org 0x12394c
	movs r1, #60	@ 0012394c 3c21
.org 0x12394e
	bl 0x128fb8	@ 0012394e 05f033fb
.org 0x123952
	movs r1, #15	@ 00123952 0f21
.org 0x123954
	movs r2, #18	@ 00123954 1222
.org 0x123956
	bl 0x10dae0	@ 00123956 eaf7c3f8
.org 0x12395a
	ldr r0, [pc, #96]	@ 0012395a 1848
.org 0x12395c
	movs r1, #16	@ 0012395c 1021
.org 0x12395e
	movs r2, #18	@ 0012395e 1222
.org 0x123960
	bl 0x10da2c	@ 00123960 eaf764f8
.org 0x123964
	ldr r0, [r5, #20]	@ 00123964 6869
.org 0x123966
	movs r1, #60	@ 00123966 3c21
.org 0x123968
	bl 0x129050	@ 00123968 05f072fb
.org 0x12396c
	movs r1, #166	@ 0012396c a621
.org 0x12396e
	muls r0, r1	@ 0012396e 4843
.org 0x123970
	movs r1, #100	@ 00123970 6421
.org 0x123972
	bl 0x128fb8	@ 00123972 05f021fb
.org 0x123976
	adds r4, r0, #0	@ 00123976 041c
.org 0x123978
	lsls r4, r4, #24	@ 00123978 2406
.org 0x12397a
	lsrs r4, r4, #24	@ 0012397a 240e
.org 0x12397c
	adds r0, r4, #0	@ 0012397c 201c
.org 0x12397e
	movs r1, #18	@ 0012397e 1221
.org 0x123980
	movs r2, #18	@ 00123980 1222
.org 0x123982
	bl 0x10dae0	@ 00123982 eaf7adf8
.org 0x123986
	cmp r4, #9	@ 00123986 092c
.org 0x123988
	bhi.n 0x123994	@ 00123988 04d8
.org 0x12398a
	movs r0, #0	@ 0012398a 0020
.org 0x12398c
	movs r1, #17	@ 0012398c 1121
.org 0x12398e
	movs r2, #18	@ 0012398e 1222
.org 0x123990
	bl 0x10dae0	@ 00123990 eaf7a6f8
.org 0x123994
	ldr r0, [r5, #48]	@ 00123994 286b
.org 0x123996
	cmp r0, #0	@ 00123996 0028
.org 0x123998
	bne.n 0x1239c0	@ 00123998 12d1
.org 0x12399a
	ldr r0, [r5, #52]	@ 0012399a 686b
.org 0x12399c
	cmp r0, #3	@ 0012399c 0328
.org 0x12399e
	bhi.n 0x1239c4	@ 0012399e 11d8
.org 0x1239a0
	adds r0, r6, #0	@ 001239a0 301c
.org 0x1239a2
	bl 0x1239cc	@ 001239a2 00f013f8
.org 0x1239a6
	ldr r0, [r5, #44]	@ 001239a6 e86a
.org 0x1239a8
	b.n 0x1239c2	@ 001239a8 0be0
.org 0x1239aa
	.byte 0x00	@ 001239aa data
.org 0x1239ab
	.byte 0x00	@ 001239ab data
