@ FUN_080598f4  entry 0x080598f4  size 160
.thumb
.org 0x598f4
FUN_080598f4:
	push {r4, r5, r6, r7, lr}	@ 000598f4 f0b5
.org 0x598f6
	mov r7, r8	@ 000598f6 4746
.org 0x598f8
	push {r7}	@ 000598f8 80b4
.org 0x598fa
	sub sp, #20	@ 000598fa 85b0
.org 0x598fc
	mov r2, sp	@ 000598fc 6a46
.org 0x598fe
	ldr r1, [pc, #116]	@ 000598fe 1d49
.org 0x59900
	ldmia r1!, {r5, r6, r7}	@ 00059900 e0c9
.org 0x59902
	stmia r2!, {r5, r6, r7}	@ 00059902 e0c2
.org 0x59904
	ldrb r1, [r0, #10]	@ 00059904 817a
.org 0x59906
	lsrs r1, r1, #4	@ 00059906 0909
.org 0x59908
	mov r8, r1	@ 00059908 8846
.org 0x5990a
	movs r1, #1	@ 0005990a 0121
.org 0x5990c
	mov r2, r8	@ 0005990c 4246
.org 0x5990e
	ands r2, r1	@ 0005990e 0a40
.org 0x59910
	mov r8, r2	@ 00059910 9046
.org 0x59912
	ldr r3, [r0, #84]	@ 00059912 436d
.org 0x59914
	adds r0, #188	@ 00059914 bc30
.org 0x59916
	ldr r4, [r0, #0]	@ 00059916 0468
.org 0x59918
	ldr r0, [pc, #92]	@ 00059918 1748
.org 0x5991a
	ldr r0, [r0, #0]	@ 0005991a 0068
.org 0x5991c
	ldr r5, [r0, #84]	@ 0005991c 456d
.org 0x5991e
	str r5, [sp, #12]	@ 0005991e 0395
.org 0x59920
	ldr r0, [r0, #88]	@ 00059920 806d
.org 0x59922
	ldr r6, [pc, #88]	@ 00059922 164e
.org 0x59924
	adds r6, r0, r6	@ 00059924 8619
.org 0x59926
	str r6, [sp, #16]	@ 00059926 0496
.org 0x59928
	adds r7, r5, #0	@ 00059928 2f1c
.org 0x5992a
	subs r5, r7, r3	@ 0005992a fd1a
.org 0x5992c
	lsls r0, r2, #1	@ 0005992c 5000
.org 0x5992e
	subs r1, r1, r0	@ 0005992e 091a
.org 0x59930
	muls r5, r1	@ 00059930 4d43
.org 0x59932
	subs r1, r6, r4	@ 00059932 311b
.org 0x59934
	adds r0, r5, #0	@ 00059934 281c
.org 0x59936
	bl 0x10d338	@ 00059936 b3f0fffc
.org 0x5993a
	adds r5, r0, #0	@ 0005993a 051c
.org 0x5993c
	lsls r0, r5, #24	@ 0005993c 2806
.org 0x5993e
	movs r1, #128	@ 0005993e 8021
.org 0x59940
	lsls r1, r1, #23	@ 00059940 c905
.org 0x59942
	adds r0, r0, r1	@ 00059942 4018
.org 0x59944
	lsrs r5, r0, #24	@ 00059944 050e
.org 0x59946
	ldr r6, [sp, #0]	@ 00059946 009e
.org 0x59948
	movs r1, #0	@ 00059948 0021
.org 0x5994a
	lsls r0, r1, #2	@ 0005994a 8800
.org 0x5994c
	add r0, sp	@ 0005994c 6844
.org 0x5994e
	ldr r3, [r0, #0]	@ 0005994e 0368
.org 0x59950
	adds r2, r3, #0	@ 00059950 1a1c
.org 0x59952
	subs r2, #128	@ 00059952 803a
.org 0x59954
	adds r4, r1, #1	@ 00059954 4c1c
.org 0x59956
	lsls r0, r4, #2	@ 00059956 a000
.org 0x59958
	add r0, sp	@ 00059958 6844
.org 0x5995a
	ldr r0, [r0, #0]	@ 0005995a 0068
.org 0x5995c
	subs r0, r0, r3	@ 0005995c c01a
.org 0x5995e
	lsrs r1, r0, #31	@ 0005995e c10f
.org 0x59960
	adds r0, r0, r1	@ 00059960 4018
.org 0x59962
	asrs r0, r0, #1	@ 00059962 4010
.org 0x59964
	adds r2, r2, r0	@ 00059964 1218
.org 0x59966
	lsls r2, r2, #24	@ 00059966 1206
.org 0x59968
	lsrs r1, r2, #24	@ 00059968 110e
.org 0x5996a
	cmp r1, r5	@ 0005996a a942
.org 0x5996c
	blt.n 0x59980	@ 0005996c 08db
.org 0x5996e
	adds r6, r3, #0	@ 0005996e 1e1c
.org 0x59970
	b.n 0x59986	@ 00059970 09e0
.org 0x59972
	.byte 0x00	@ 00059972 data
.org 0x59973
	.byte 0x00	@ 00059973 data
.org 0x59974
	.byte 0x9c,0x96,0x12,0x08	@ 00059974 data
.org 0x59978
	.byte 0xf0,0xdb,0x02,0x02	@ 00059978 data
.org 0x5997c
	.byte 0x00,0xf0,0xff,0xff	@ 0005997c data
.org 0x59980
	adds r1, r4, #0	@ 00059980 211c
.org 0x59982
	cmp r1, #1	@ 00059982 0129
.org 0x59984
	ble.n 0x5994a	@ 00059984 e1dd
.org 0x59986
	mov r2, r8	@ 00059986 4246
.org 0x59988
	lsls r1, r2, #1	@ 00059988 5100
.org 0x5998a
	movs r0, #1	@ 0005998a 0120
.org 0x5998c
	subs r0, r0, r1	@ 0005998c 401a
.org 0x5998e
	muls r0, r6	@ 0005998e 7043
.org 0x59990
	adds r0, #64	@ 00059990 4030
.org 0x59992
	lsls r0, r0, #24	@ 00059992 0006
