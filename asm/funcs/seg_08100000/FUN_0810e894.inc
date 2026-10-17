@ FUN_0810e894  entry 0x0810e894  size 990
.thumb
.org 0x10e894
FUN_0810e894:
	push {r4, r5, r6, r7, lr}	@ 0010e894 f0b5
.org 0x10e896
	mov r7, sl	@ 0010e896 5746
.org 0x10e898
	mov r6, r9	@ 0010e898 4e46
.org 0x10e89a
	mov r5, r8	@ 0010e89a 4546
.org 0x10e89c
	push {r5, r6, r7}	@ 0010e89c e0b4
.org 0x10e89e
	sub sp, #16	@ 0010e89e 84b0
.org 0x10e8a0
	mov sl, r0	@ 0010e8a0 8246
.org 0x10e8a2
	lsls r1, r1, #16	@ 0010e8a2 0904
.org 0x10e8a4
	lsrs r2, r1, #16	@ 0010e8a4 0a0c
.org 0x10e8a6
	ldrb r0, [r0, #5]	@ 0010e8a6 4079
.org 0x10e8a8
	str r0, [sp, #8]	@ 0010e8a8 0290
.org 0x10e8aa
	ldr r0, [pc, #52]	@ 0010e8aa 0d48
.org 0x10e8ac
	ldr r7, [r0, #4]	@ 0010e8ac 4768
.org 0x10e8ae
	mov r1, sl	@ 0010e8ae 5146
.org 0x10e8b0
	ldrb r0, [r1, #4]	@ 0010e8b0 0879
.org 0x10e8b2
	cmp r0, #1	@ 0010e8b2 0128
.org 0x10e8b4
	beq.n 0x10e8b8	@ 0010e8b4 00d0
.org 0x10e8b6
	b.n 0x10ea04	@ 0010e8b6 a5e0
.org 0x10e8b8
	ldr r1, [pc, #40]	@ 0010e8b8 0a49
.org 0x10e8ba
	lsls r0, r2, #24	@ 0010e8ba 1006
.org 0x10e8bc
	lsrs r0, r0, #23	@ 0010e8bc c00d
.org 0x10e8be
	adds r0, r0, r1	@ 0010e8be 4018
.org 0x10e8c0
	movs r2, #0	@ 0010e8c0 0022
.org 0x10e8c2
	ldrsh r1, [r0, r2]	@ 0010e8c2 815e
.org 0x10e8c4
	lsls r0, r1, #3	@ 0010e8c4 c800
.org 0x10e8c6
	subs r0, r0, r1	@ 0010e8c6 401a
.org 0x10e8c8
	lsls r0, r0, #10	@ 0010e8c8 8002
.org 0x10e8ca
	lsrs r0, r0, #16	@ 0010e8ca 000c
.org 0x10e8cc
	str r0, [sp, #0]	@ 0010e8cc 0090
.org 0x10e8ce
	mov r3, sl	@ 0010e8ce 5346
.org 0x10e8d0
	ldrb r0, [r3, #6]	@ 0010e8d0 9879
.org 0x10e8d2
	cmp r0, #0	@ 0010e8d2 0028
.org 0x10e8d4
	bne.n 0x10e8e8	@ 0010e8d4 08d1
.org 0x10e8d6
	movs r6, #1	@ 0010e8d6 0126
.org 0x10e8d8
	str r6, [sp, #4]	@ 0010e8d8 0196
.org 0x10e8da
	ldr r1, [sp, #0]	@ 0010e8da 0099
.org 0x10e8dc
	lsls r0, r1, #16	@ 0010e8dc 0804
.org 0x10e8de
	b.n 0x10e8fa	@ 0010e8de 0ce0
.org 0x10e8e0
	.byte 0x80,0xf3,0x02,0x02	@ 0010e8e0 data
.org 0x10e8e4
	.byte 0x0c,0x93,0x12,0x08	@ 0010e8e4 data
.org 0x10e8e8
	movs r0, #29	@ 0010e8e8 1d20
.org 0x10e8ea
	ldr r3, [sp, #0]	@ 0010e8ea 009b
.org 0x10e8ec
	lsls r2, r3, #16	@ 0010e8ec 1a04
.org 0x10e8ee
	asrs r1, r2, #16	@ 0010e8ee 1114
.org 0x10e8f0
	subs r0, r0, r1	@ 0010e8f0 401a
.org 0x10e8f2
	lsls r0, r0, #16	@ 0010e8f2 0004
.org 0x10e8f4
	lsrs r0, r0, #16	@ 0010e8f4 000c
.org 0x10e8f6
	str r0, [sp, #4]	@ 0010e8f6 0190
.org 0x10e8f8
	adds r0, r2, #0	@ 0010e8f8 101c
.org 0x10e8fa
	ldr r2, [pc, #228]	@ 0010e8fa 394a
.org 0x10e8fc
	ldr r6, [sp, #4]	@ 0010e8fc 019e
.org 0x10e8fe
	lsls r5, r6, #16	@ 0010e8fe 3504
.org 0x10e900
	asrs r5, r5, #16	@ 0010e900 2d14
.org 0x10e902
	asrs r0, r0, #16	@ 0010e902 0014
.org 0x10e904
	mov r8, r0	@ 0010e904 8046
.org 0x10e906
	adds r1, r5, r0	@ 0010e906 2918
.org 0x10e908
	lsls r1, r1, #3	@ 0010e908 c900
.org 0x10e90a
	adds r1, #3	@ 0010e90a 0331
.org 0x10e90c
	movs r0, #255	@ 0010e90c ff20
.org 0x10e90e
	ands r1, r0	@ 0010e90e 0140
.org 0x10e910
	lsls r0, r5, #11	@ 0010e910 e802
.org 0x10e912
	ldr r3, [pc, #208]	@ 0010e912 344b
.org 0x10e914
	adds r0, r0, r3	@ 0010e914 c018
.org 0x10e916
	orrs r1, r0	@ 0010e916 0143
.org 0x10e918
	strh r1, [r2, #4]	@ 0010e918 9180
.org 0x10e91a
	ldr r0, [pc, #204]	@ 0010e91a 3348
.org 0x10e91c
	ldr r6, [sp, #8]	@ 0010e91c 029e
.org 0x10e91e
	subs r4, r6, #1	@ 0010e91e 741e
.org 0x10e920
	lsls r4, r4, #5	@ 0010e920 6401
.org 0x10e922
	adds r4, r5, r4	@ 0010e922 2c19
.org 0x10e924
	lsls r4, r4, #1	@ 0010e924 6400
.org 0x10e926
	subs r4, #2	@ 0010e926 023c
.org 0x10e928
	adds r4, r7, r4	@ 0010e928 3c19
.org 0x10e92a
	mov r3, r8	@ 0010e92a 4346
.org 0x10e92c
	adds r3, #2	@ 0010e92c 0233
.org 0x10e92e
	lsls r3, r3, #1	@ 0010e92e 5b00
.org 0x10e930
	adds r1, r4, #0	@ 0010e930 211c
.org 0x10e932
	adds r2, r3, #0	@ 0010e932 1a1c
.org 0x10e934
	str r3, [sp, #12]	@ 0010e934 0393
.org 0x10e936
	bl 0xab4	@ 0010e936 f2f6bdf8
.org 0x10e93a
	ldr r0, [pc, #176]	@ 0010e93a 2c48
.org 0x10e93c
	adds r6, #6	@ 0010e93c 0636
.org 0x10e93e
	lsls r6, r6, #5	@ 0010e93e 7601
.org 0x10e940
	adds r5, r5, r6	@ 0010e940 ad19
.org 0x10e942
	lsls r5, r5, #1	@ 0010e942 6d00
.org 0x10e944
	subs r5, #2	@ 0010e944 023d
.org 0x10e946
	adds r5, r7, r5	@ 0010e946 7d19
.org 0x10e948
	adds r1, r5, #0	@ 0010e948 291c
.org 0x10e94a
	ldr r3, [sp, #12]	@ 0010e94a 039b
.org 0x10e94c
	adds r2, r3, #0	@ 0010e94c 1a1c
.org 0x10e94e
	bl 0xab4	@ 0010e94e f2f6b1f8
.org 0x10e952
	adds r7, r4, #0	@ 0010e952 271c
.org 0x10e954
	ldr r6, [pc, #152]	@ 0010e954 264e
.org 0x10e956
	adds r0, r6, #0	@ 0010e956 301c
.org 0x10e958
	strh r0, [r7, #0]	@ 0010e958 3880
.org 0x10e95a
	adds r1, r7, #0	@ 0010e95a 391c
.org 0x10e95c
	adds r1, #64	@ 0010e95c 4031
.org 0x10e95e
	ldr r2, [pc, #148]	@ 0010e95e 254a
.org 0x10e960
	adds r0, r2, #0	@ 0010e960 101c
.org 0x10e962
	strh r0, [r1, #0]	@ 0010e962 0880
.org 0x10e964
	adds r0, r7, #0	@ 0010e964 381c
.org 0x10e966
	adds r0, #128	@ 0010e966 8030
.org 0x10e968
	ldr r3, [pc, #140]	@ 0010e968 234b
.org 0x10e96a
	adds r1, r3, #0	@ 0010e96a 191c
.org 0x10e96c
	strh r1, [r0, #0]	@ 0010e96c 0180
.org 0x10e96e
	adds r0, #64	@ 0010e96e 4030
.org 0x10e970
	strh r1, [r0, #0]	@ 0010e970 0180
.org 0x10e972
	movs r5, #128	@ 0010e972 8025
.org 0x10e974
	lsls r5, r5, #1	@ 0010e974 6d00
.org 0x10e976
	adds r0, r7, r5	@ 0010e976 7819
.org 0x10e978
	strh r1, [r0, #0]	@ 0010e978 0180
.org 0x10e97a
	movs r3, #160	@ 0010e97a a023
.org 0x10e97c
	lsls r3, r3, #1	@ 0010e97c 5b00
.org 0x10e97e
	adds r0, r7, r3	@ 0010e97e f818
.org 0x10e980
	strh r1, [r0, #0]	@ 0010e980 0180
.org 0x10e982
	movs r4, #192	@ 0010e982 c024
.org 0x10e984
	lsls r4, r4, #1	@ 0010e984 6400
.org 0x10e986
	adds r1, r7, r4	@ 0010e986 3919
.org 0x10e988
	adds r6, #2	@ 0010e988 0236
.org 0x10e98a
	adds r0, r6, #0	@ 0010e98a 301c
.org 0x10e98c
	strh r0, [r1, #0]	@ 0010e98c 0880
.org 0x10e98e
	movs r2, #224	@ 0010e98e e022
.org 0x10e990
	lsls r2, r2, #1	@ 0010e990 5200
.org 0x10e992
	adds r1, r7, r2	@ 0010e992 b918
.org 0x10e994
	adds r6, #1	@ 0010e994 0136
.org 0x10e996
	adds r0, r6, #0	@ 0010e996 301c
.org 0x10e998
	strh r0, [r1, #0]	@ 0010e998 0880
.org 0x10e99a
	mov r0, r8	@ 0010e99a 4046
.org 0x10e99c
	lsls r0, r0, #1	@ 0010e99c 4000
.org 0x10e99e
	mov r8, r0	@ 0010e99e 8046
.org 0x10e9a0
	movs r1, #2	@ 0010e9a0 0221
.org 0x10e9a2
	add r8, r1	@ 0010e9a2 8844
.org 0x10e9a4
	add r7, r8	@ 0010e9a4 4744
.org 0x10e9a6
	ldr r6, [pc, #84]	@ 0010e9a6 154e
.org 0x10e9a8
	adds r0, r6, #0	@ 0010e9a8 301c
.org 0x10e9aa
	strh r0, [r7, #0]	@ 0010e9aa 3880
.org 0x10e9ac
	adds r1, r7, #0	@ 0010e9ac 391c
.org 0x10e9ae
	adds r1, #64	@ 0010e9ae 4031
.org 0x10e9b0
	adds r6, #1	@ 0010e9b0 0136
.org 0x10e9b2
	adds r0, r6, #0	@ 0010e9b2 301c
.org 0x10e9b4
	strh r0, [r1, #0]	@ 0010e9b4 0880
.org 0x10e9b6
	adds r0, r7, #0	@ 0010e9b6 381c
.org 0x10e9b8
	adds r0, #128	@ 0010e9b8 8030
.org 0x10e9ba
	adds r6, #5	@ 0010e9ba 0536
.org 0x10e9bc
	adds r1, r6, #0	@ 0010e9bc 311c
.org 0x10e9be
	strh r1, [r0, #0]	@ 0010e9be 0180
.org 0x10e9c0
	adds r0, #64	@ 0010e9c0 4030
.org 0x10e9c2
	strh r1, [r0, #0]	@ 0010e9c2 0180
.org 0x10e9c4
	adds r5, r7, r5	@ 0010e9c4 7d19
.org 0x10e9c6
	strh r1, [r5, #0]	@ 0010e9c6 2980
.org 0x10e9c8
	adds r3, r7, r3	@ 0010e9c8 fb18
.org 0x10e9ca
	strh r1, [r3, #0]	@ 0010e9ca 1980
.org 0x10e9cc
	adds r4, r7, r4	@ 0010e9cc 3c19
.org 0x10e9ce
	ldr r1, [pc, #48]	@ 0010e9ce 0c49
.org 0x10e9d0
	adds r0, r1, #0	@ 0010e9d0 081c
.org 0x10e9d2
	strh r0, [r4, #0]	@ 0010e9d2 2080
.org 0x10e9d4
	adds r2, r7, r2	@ 0010e9d4 ba18
.org 0x10e9d6
	movs r3, #218	@ 0010e9d6 da23
.org 0x10e9d8
	lsls r3, r3, #3	@ 0010e9d8 db00
.org 0x10e9da
	adds r0, r3, #0	@ 0010e9da 181c
.org 0x10e9dc
	strh r0, [r2, #0]	@ 0010e9dc 1080
.org 0x10e9de
	b.n 0x10eca0	@ 0010e9de 5fe1
.org 0x10e9e0
	.byte 0x50,0x0a,0x00,0x02	@ 0010e9e0 data
.org 0x10e9e4
	.byte 0x00,0xfd,0xff,0xff	@ 0010e9e4 data
.org 0x10e9e8
	.byte 0xd1,0x02,0x00,0x00	@ 0010e9e8 data
.org 0x10e9ec
	.byte 0xd2,0x02,0x00,0x00	@ 0010e9ec data
.org 0x10e9f0
	.byte 0xcd,0x02,0x00,0x00	@ 0010e9f0 data
.org 0x10e9f4
	.byte 0xce,0x02,0x00,0x00	@ 0010e9f4 data
.org 0x10e9f8
	.byte 0xd3,0x02,0x00,0x00	@ 0010e9f8 data
.org 0x10e9fc
	.byte 0xcd,0x06,0x00,0x00	@ 0010e9fc data
.org 0x10ea00
	.byte 0xcf,0x06,0x00,0x00	@ 0010ea00 data
.org 0x10ea04
	ldr r1, [pc, #40]	@ 0010ea04 0a49
.org 0x10ea06
	lsls r0, r2, #24	@ 0010ea06 1006
.org 0x10ea08
	lsrs r0, r0, #23	@ 0010ea08 c00d
.org 0x10ea0a
	adds r0, r0, r1	@ 0010ea0a 4018
.org 0x10ea0c
	movs r6, #0	@ 0010ea0c 0026
.org 0x10ea0e
	ldrsh r1, [r0, r6]	@ 0010ea0e 815f
.org 0x10ea10
	movs r0, #176	@ 0010ea10 b020
.org 0x10ea12
	muls r0, r1	@ 0010ea12 4843
.org 0x10ea14
	asrs r0, r0, #8	@ 0010ea14 0012
.org 0x10ea16
	adds r0, #55	@ 0010ea16 3730
.org 0x10ea18
	lsls r0, r0, #13	@ 0010ea18 4003
.org 0x10ea1a
	lsrs r0, r0, #16	@ 0010ea1a 000c
.org 0x10ea1c
	str r0, [sp, #0]	@ 0010ea1c 0090
.org 0x10ea1e
	mov r1, sl	@ 0010ea1e 5146
.org 0x10ea20
	ldrb r0, [r1, #6]	@ 0010ea20 8879
.org 0x10ea22
	cmp r0, #0	@ 0010ea22 0028
.org 0x10ea24
	bne.n 0x10ea34	@ 0010ea24 06d1
.org 0x10ea26
	movs r2, #1	@ 0010ea26 0122
.org 0x10ea28
	str r2, [sp, #4]	@ 0010ea28 0192
.org 0x10ea2a
	ldr r3, [sp, #0]	@ 0010ea2a 009b
.org 0x10ea2c
	lsls r0, r3, #16	@ 0010ea2c 1804
.org 0x10ea2e
	b.n 0x10ea46	@ 0010ea2e 0ae0
.org 0x10ea30
	.byte 0x0c,0x93,0x12,0x08	@ 0010ea30 data
.org 0x10ea34
	movs r0, #29	@ 0010ea34 1d20
.org 0x10ea36
	ldr r6, [sp, #0]	@ 0010ea36 009e
.org 0x10ea38
	lsls r2, r6, #16	@ 0010ea38 3204
.org 0x10ea3a
	asrs r1, r2, #16	@ 0010ea3a 1114
.org 0x10ea3c
	subs r0, r0, r1	@ 0010ea3c 401a
.org 0x10ea3e
	lsls r0, r0, #16	@ 0010ea3e 0004
.org 0x10ea40
	lsrs r0, r0, #16	@ 0010ea40 000c
.org 0x10ea42
	str r0, [sp, #4]	@ 0010ea42 0190
.org 0x10ea44
	adds r0, r2, #0	@ 0010ea44 101c
.org 0x10ea46
	ldr r2, [pc, #316]	@ 0010ea46 4f4a
.org 0x10ea48
	ldr r1, [sp, #4]	@ 0010ea48 0199
.org 0x10ea4a
	lsls r5, r1, #16	@ 0010ea4a 0d04
.org 0x10ea4c
	asrs r5, r5, #16	@ 0010ea4c 2d14
.org 0x10ea4e
	asrs r0, r0, #16	@ 0010ea4e 0014
.org 0x10ea50
	mov r9, r0	@ 0010ea50 8146
.org 0x10ea52
	adds r1, r5, r0	@ 0010ea52 2918
.org 0x10ea54
	lsls r1, r1, #3	@ 0010ea54 c900
.org 0x10ea56
	adds r1, #3	@ 0010ea56 0331
.org 0x10ea58
	movs r0, #255	@ 0010ea58 ff20
.org 0x10ea5a
	ands r1, r0	@ 0010ea5a 0140
.org 0x10ea5c
	lsls r0, r5, #11	@ 0010ea5c e802
.org 0x10ea5e
	ldr r3, [pc, #296]	@ 0010ea5e 4a4b
.org 0x10ea60
	adds r0, r0, r3	@ 0010ea60 c018
.org 0x10ea62
	orrs r1, r0	@ 0010ea62 0143
.org 0x10ea64
	strh r1, [r2, #4]	@ 0010ea64 9180
.org 0x10ea66
	ldr r0, [pc, #292]	@ 0010ea66 4948
.org 0x10ea68
	ldr r6, [sp, #8]	@ 0010ea68 029e
.org 0x10ea6a
	subs r4, r6, #1	@ 0010ea6a 741e
.org 0x10ea6c
	lsls r4, r4, #5	@ 0010ea6c 6401
.org 0x10ea6e
	adds r4, r5, r4	@ 0010ea6e 2c19
.org 0x10ea70
	lsls r4, r4, #1	@ 0010ea70 6400
.org 0x10ea72
	subs r4, #2	@ 0010ea72 023c
.org 0x10ea74
	adds r4, r7, r4	@ 0010ea74 3c19
.org 0x10ea76
	mov r3, r9	@ 0010ea76 4b46
.org 0x10ea78
	adds r3, #2	@ 0010ea78 0233
.org 0x10ea7a
	lsls r3, r3, #1	@ 0010ea7a 5b00
.org 0x10ea7c
	adds r1, r4, #0	@ 0010ea7c 211c
.org 0x10ea7e
	adds r2, r3, #0	@ 0010ea7e 1a1c
.org 0x10ea80
	str r3, [sp, #12]	@ 0010ea80 0393
.org 0x10ea82
	bl 0xab4	@ 0010ea82 f2f617f8
.org 0x10ea86
	ldr r0, [pc, #264]	@ 0010ea86 4248
.org 0x10ea88
	adds r6, #6	@ 0010ea88 0636
.org 0x10ea8a
	lsls r6, r6, #5	@ 0010ea8a 7601
.org 0x10ea8c
	adds r5, r5, r6	@ 0010ea8c ad19
.org 0x10ea8e
	lsls r5, r5, #1	@ 0010ea8e 6d00
.org 0x10ea90
	subs r5, #2	@ 0010ea90 023d
.org 0x10ea92
	adds r5, r7, r5	@ 0010ea92 7d19
.org 0x10ea94
	adds r1, r5, #0	@ 0010ea94 291c
.org 0x10ea96
	ldr r3, [sp, #12]	@ 0010ea96 039b
.org 0x10ea98
	adds r2, r3, #0	@ 0010ea98 1a1c
.org 0x10ea9a
	bl 0xab4	@ 0010ea9a f2f60bf8
.org 0x10ea9e
	adds r7, r4, #0	@ 0010ea9e 271c
.org 0x10eaa0
	mov r6, sl	@ 0010eaa0 5646
.org 0x10eaa2
	ldrb r0, [r6, #6]	@ 0010eaa2 b079
.org 0x10eaa4
	cmp r0, #0	@ 0010eaa4 0028
.org 0x10eaa6
	beq.n 0x10eaaa	@ 0010eaa6 00d0
.org 0x10eaa8
	b.n 0x10ebbc	@ 0010eaa8 88e0
.org 0x10eaaa
	movs r1, #181	@ 0010eaaa b521
.org 0x10eaac
	lsls r1, r1, #2	@ 0010eaac 8900
.org 0x10eaae
	adds r0, r1, #0	@ 0010eaae 081c
.org 0x10eab0
	strh r0, [r7, #0]	@ 0010eab0 3880
.org 0x10eab2
	adds r1, r7, #0	@ 0010eab2 391c
.org 0x10eab4
	adds r1, #64	@ 0010eab4 4031
.org 0x10eab6
	ldr r2, [pc, #220]	@ 0010eab6 374a
.org 0x10eab8
	adds r0, r2, #0	@ 0010eab8 101c
.org 0x10eaba
	strh r0, [r1, #0]	@ 0010eaba 0880
.org 0x10eabc
	adds r0, r7, #0	@ 0010eabc 381c
.org 0x10eabe
	adds r0, #128	@ 0010eabe 8030
.org 0x10eac0
	movs r3, #182	@ 0010eac0 b623
.org 0x10eac2
	lsls r3, r3, #2	@ 0010eac2 9b00
.org 0x10eac4
	adds r1, r3, #0	@ 0010eac4 191c
.org 0x10eac6
	strh r1, [r0, #0]	@ 0010eac6 0180
.org 0x10eac8
	adds r0, #64	@ 0010eac8 4030
.org 0x10eaca
	strh r1, [r0, #0]	@ 0010eaca 0180
.org 0x10eacc
	movs r6, #128	@ 0010eacc 8026
.org 0x10eace
	lsls r6, r6, #1	@ 0010eace 7600
.org 0x10ead0
	mov r8, r6	@ 0010ead0 b046
.org 0x10ead2
	adds r0, r7, r6	@ 0010ead2 b819
.org 0x10ead4
	strh r1, [r0, #0]	@ 0010ead4 0180
.org 0x10ead6
	movs r5, #160	@ 0010ead6 a025
.org 0x10ead8
	lsls r5, r5, #1	@ 0010ead8 6d00
.org 0x10eada
	adds r0, r7, r5	@ 0010eada 7819
.org 0x10eadc
	strh r1, [r0, #0]	@ 0010eadc 0180
.org 0x10eade
	adds r6, #128	@ 0010eade 8036
.org 0x10eae0
	adds r1, r7, r6	@ 0010eae0 b919
.org 0x10eae2
	adds r2, #1	@ 0010eae2 0132
.org 0x10eae4
	adds r0, r2, #0	@ 0010eae4 101c
.org 0x10eae6
	strh r0, [r1, #0]	@ 0010eae6 0880
.org 0x10eae8
	movs r4, #224	@ 0010eae8 e024
.org 0x10eaea
	lsls r4, r4, #1	@ 0010eaea 6400
.org 0x10eaec
	adds r1, r7, r4	@ 0010eaec 3919
.org 0x10eaee
	subs r3, #1	@ 0010eaee 013b
.org 0x10eaf0
	adds r0, r3, #0	@ 0010eaf0 181c
.org 0x10eaf2
	strh r0, [r1, #0]	@ 0010eaf2 0880
.org 0x10eaf4
	ldr r0, [pc, #160]	@ 0010eaf4 2848
.org 0x10eaf6
	adds r1, r7, #2	@ 0010eaf6 b91c
.org 0x10eaf8
	movs r2, #12	@ 0010eaf8 0c22
.org 0x10eafa
	bl 0xab4	@ 0010eafa f1f6dbff
.org 0x10eafe
	ldr r0, [pc, #156]	@ 0010eafe 2748
.org 0x10eb00
	movs r2, #225	@ 0010eb00 e122
.org 0x10eb02
	lsls r2, r2, #1	@ 0010eb02 5200
.org 0x10eb04
	adds r1, r7, r2	@ 0010eb04 b918
.org 0x10eb06
	movs r2, #12	@ 0010eb06 0c22
.org 0x10eb08
	bl 0xab4	@ 0010eb08 f1f6d4ff
.org 0x10eb0c
	ldr r3, [pc, #144]	@ 0010eb0c 244b
.org 0x10eb0e
	adds r0, r3, #0	@ 0010eb0e 181c
.org 0x10eb10
	strh r0, [r7, #14]	@ 0010eb10 f881
.org 0x10eb12
	adds r1, r7, #0	@ 0010eb12 391c
.org 0x10eb14
	adds r1, #78	@ 0010eb14 4e31
.org 0x10eb16
	ldr r2, [pc, #140]	@ 0010eb16 234a
.org 0x10eb18
	adds r0, r2, #0	@ 0010eb18 101c
.org 0x10eb1a
	strh r0, [r1, #0]	@ 0010eb1a 0880
.org 0x10eb1c
	adds r1, #64	@ 0010eb1c 4031
.org 0x10eb1e
	adds r3, #4	@ 0010eb1e 0433
.org 0x10eb20
	adds r0, r3, #0	@ 0010eb20 181c
.org 0x10eb22
	strh r0, [r1, #0]	@ 0010eb22 0880
.org 0x10eb24
	adds r1, #64	@ 0010eb24 4031
.org 0x10eb26
	strh r0, [r1, #0]	@ 0010eb26 0880
.org 0x10eb28
	movs r2, #135	@ 0010eb28 8722
.org 0x10eb2a
	lsls r2, r2, #1	@ 0010eb2a 5200
.org 0x10eb2c
	adds r1, r7, r2	@ 0010eb2c b918
.org 0x10eb2e
	strh r0, [r1, #0]	@ 0010eb2e 0880
.org 0x10eb30
	movs r3, #167	@ 0010eb30 a723
.org 0x10eb32
	lsls r3, r3, #1	@ 0010eb32 5b00
.org 0x10eb34
	adds r1, r7, r3	@ 0010eb34 f918
.org 0x10eb36
	strh r0, [r1, #0]	@ 0010eb36 0880
.org 0x10eb38
	movs r0, #199	@ 0010eb38 c720
.org 0x10eb3a
	lsls r0, r0, #1	@ 0010eb3a 4000
.org 0x10eb3c
	adds r1, r7, r0	@ 0010eb3c 3918
.org 0x10eb3e
	ldr r2, [pc, #104]	@ 0010eb3e 1a4a
.org 0x10eb40
	adds r0, r2, #0	@ 0010eb40 101c
.org 0x10eb42
	strh r0, [r1, #0]	@ 0010eb42 0880
.org 0x10eb44
	adds r3, #128	@ 0010eb44 8033
.org 0x10eb46
	adds r1, r7, r3	@ 0010eb46 f918
.org 0x10eb48
	adds r2, #1	@ 0010eb48 0132
.org 0x10eb4a
	adds r0, r2, #0	@ 0010eb4a 101c
.org 0x10eb4c
	strh r0, [r1, #0]	@ 0010eb4c 0880
.org 0x10eb4e
	mov r3, r9	@ 0010eb4e 4b46
.org 0x10eb50
	lsls r0, r3, #1	@ 0010eb50 5800
.org 0x10eb52
	adds r0, #2	@ 0010eb52 0230
.org 0x10eb54
	adds r7, r7, r0	@ 0010eb54 3f18
.org 0x10eb56
	ldr r1, [pc, #84]	@ 0010eb56 1549
.org 0x10eb58
	adds r0, r1, #0	@ 0010eb58 081c
.org 0x10eb5a
	strh r0, [r7, #0]	@ 0010eb5a 3880
.org 0x10eb5c
	adds r1, r7, #0	@ 0010eb5c 391c
.org 0x10eb5e
	adds r1, #64	@ 0010eb5e 4031
.org 0x10eb60
	ldr r2, [pc, #76]	@ 0010eb60 134a
.org 0x10eb62
	adds r0, r2, #0	@ 0010eb62 101c
.org 0x10eb64
	strh r0, [r1, #0]	@ 0010eb64 0880
.org 0x10eb66
	adds r0, r7, #0	@ 0010eb66 381c
.org 0x10eb68
	adds r0, #128	@ 0010eb68 8030
.org 0x10eb6a
	ldr r3, [pc, #72]	@ 0010eb6a 124b
.org 0x10eb6c
	adds r1, r3, #0	@ 0010eb6c 191c
.org 0x10eb6e
	strh r1, [r0, #0]	@ 0010eb6e 0180
.org 0x10eb70
	adds r0, #64	@ 0010eb70 4030
.org 0x10eb72
	strh r1, [r0, #0]	@ 0010eb72 0180
.org 0x10eb74
	add r8, r7	@ 0010eb74 b844
.org 0x10eb76
	mov r0, r8	@ 0010eb76 4046
.org 0x10eb78
	strh r1, [r0, #0]	@ 0010eb78 0180
.org 0x10eb7a
	adds r5, r7, r5	@ 0010eb7a 7d19
.org 0x10eb7c
	strh r1, [r5, #0]	@ 0010eb7c 2980
.org 0x10eb7e
	adds r6, r7, r6	@ 0010eb7e be19
.org 0x10eb80
	ldr r1, [pc, #52]	@ 0010eb80 0d49
.org 0x10eb82
	b.n 0x10ec8e	@ 0010eb82 84e0
.org 0x10eb84
	.byte 0x50,0x0a,0x00,0x02	@ 0010eb84 data
.org 0x10eb88
	.byte 0x00,0xfd,0xff,0xff	@ 0010eb88 data
.org 0x10eb8c
	.byte 0xd1,0x02,0x00,0x00	@ 0010eb8c data
.org 0x10eb90
	.byte 0xd2,0x02,0x00,0x00	@ 0010eb90 data
.org 0x10eb94
	.byte 0xd5,0x02,0x00,0x00	@ 0010eb94 data
.org 0x10eb98
	.byte 0xde,0x02,0x00,0x00	@ 0010eb98 data
.org 0x10eb9c
	.byte 0xdf,0x02,0x00,0x00	@ 0010eb9c data
.org 0x10eba0
	.byte 0xd9,0x02,0x00,0x00	@ 0010eba0 data
.org 0x10eba4
	.byte 0xda,0x02,0x00,0x00	@ 0010eba4 data
.org 0x10eba8
	.byte 0xdb,0x02,0x00,0x00	@ 0010eba8 data
.org 0x10ebac
	.byte 0xcd,0x06,0x00,0x00	@ 0010ebac data
.org 0x10ebb0
	.byte 0xce,0x06,0x00,0x00	@ 0010ebb0 data
.org 0x10ebb4
	.byte 0xd3,0x06,0x00,0x00	@ 0010ebb4 data
.org 0x10ebb8
	.byte 0xcf,0x06,0x00,0x00	@ 0010ebb8 data
.org 0x10ebbc
	mov r3, r9	@ 0010ebbc 4b46
.org 0x10ebbe
	lsls r2, r3, #1	@ 0010ebbe 5a00
.org 0x10ebc0
	subs r2, #12	@ 0010ebc0 0c3a
.org 0x10ebc2
	adds r7, r7, r2	@ 0010ebc2 bf18
.org 0x10ebc4
	ldr r6, [pc, #276]	@ 0010ebc4 454e
.org 0x10ebc6
	adds r0, r6, #0	@ 0010ebc6 301c
.org 0x10ebc8
	strh r0, [r7, #0]	@ 0010ebc8 3880
.org 0x10ebca
	adds r1, r7, #0	@ 0010ebca 391c
.org 0x10ebcc
	adds r1, #64	@ 0010ebcc 4031
.org 0x10ebce
	ldr r3, [pc, #272]	@ 0010ebce 444b
.org 0x10ebd0
	adds r0, r3, #0	@ 0010ebd0 181c
.org 0x10ebd2
	strh r0, [r1, #0]	@ 0010ebd2 0880
.org 0x10ebd4
	adds r0, r7, #0	@ 0010ebd4 381c
.org 0x10ebd6
	adds r0, #128	@ 0010ebd6 8030
.org 0x10ebd8
	adds r6, #4	@ 0010ebd8 0436
.org 0x10ebda
	adds r1, r6, #0	@ 0010ebda 311c
.org 0x10ebdc
	strh r1, [r0, #0]	@ 0010ebdc 0180
.org 0x10ebde
	adds r0, #64	@ 0010ebde 4030
.org 0x10ebe0
	strh r1, [r0, #0]	@ 0010ebe0 0180
.org 0x10ebe2
	movs r0, #128	@ 0010ebe2 8020
.org 0x10ebe4
	lsls r0, r0, #1	@ 0010ebe4 4000
.org 0x10ebe6
	mov r8, r0	@ 0010ebe6 8046
.org 0x10ebe8
	adds r0, r7, r0	@ 0010ebe8 3818
.org 0x10ebea
	strh r1, [r0, #0]	@ 0010ebea 0180
.org 0x10ebec
	movs r5, #160	@ 0010ebec a025
.org 0x10ebee
	lsls r5, r5, #1	@ 0010ebee 6d00
.org 0x10ebf0
	adds r0, r7, r5	@ 0010ebf0 7819
.org 0x10ebf2
	strh r1, [r0, #0]	@ 0010ebf2 0180
.org 0x10ebf4
	movs r6, #192	@ 0010ebf4 c026
.org 0x10ebf6
	lsls r6, r6, #1	@ 0010ebf6 7600
.org 0x10ebf8
	adds r1, r7, r6	@ 0010ebf8 b919
.org 0x10ebfa
	adds r3, #1	@ 0010ebfa 0133
.org 0x10ebfc
	adds r0, r3, #0	@ 0010ebfc 181c
.org 0x10ebfe
	strh r0, [r1, #0]	@ 0010ebfe 0880
.org 0x10ec00
	movs r4, #224	@ 0010ec00 e024
.org 0x10ec02
	lsls r4, r4, #1	@ 0010ec02 6400
.org 0x10ec04
	adds r1, r7, r4	@ 0010ec04 3919
.org 0x10ec06
	adds r3, #1	@ 0010ec06 0133
.org 0x10ec08
	adds r0, r3, #0	@ 0010ec08 181c
.org 0x10ec0a
	strh r0, [r1, #0]	@ 0010ec0a 0880
.org 0x10ec0c
	subs r7, r7, r2	@ 0010ec0c bf1a
.org 0x10ec0e
	ldr r1, [pc, #212]	@ 0010ec0e 3549
.org 0x10ec10
	adds r0, r1, #0	@ 0010ec10 081c
.org 0x10ec12
	strh r0, [r7, #0]	@ 0010ec12 3880
.org 0x10ec14
	adds r1, r7, #0	@ 0010ec14 391c
.org 0x10ec16
	adds r1, #64	@ 0010ec16 4031
.org 0x10ec18
	ldr r3, [pc, #204]	@ 0010ec18 334b
.org 0x10ec1a
	adds r0, r3, #0	@ 0010ec1a 181c
.org 0x10ec1c
	strh r0, [r1, #0]	@ 0010ec1c 0880
.org 0x10ec1e
	adds r0, r7, #0	@ 0010ec1e 381c
.org 0x10ec20
	adds r0, #128	@ 0010ec20 8030
.org 0x10ec22
	adds r3, #5	@ 0010ec22 0533
.org 0x10ec24
	adds r1, r3, #0	@ 0010ec24 191c
.org 0x10ec26
	strh r1, [r0, #0]	@ 0010ec26 0180
.org 0x10ec28
	adds r0, #64	@ 0010ec28 4030
.org 0x10ec2a
	strh r1, [r0, #0]	@ 0010ec2a 0180
.org 0x10ec2c
	mov r3, r8	@ 0010ec2c 4346
.org 0x10ec2e
	adds r0, r7, r3	@ 0010ec2e f818
.org 0x10ec30
	strh r1, [r0, #0]	@ 0010ec30 0180
.org 0x10ec32
	adds r0, r7, r5	@ 0010ec32 7819
.org 0x10ec34
	strh r1, [r0, #0]	@ 0010ec34 0180
.org 0x10ec36
	adds r1, r7, r6	@ 0010ec36 b919
.org 0x10ec38
	ldr r3, [pc, #176]	@ 0010ec38 2c4b
.org 0x10ec3a
	adds r0, r3, #0	@ 0010ec3a 181c
.org 0x10ec3c
	strh r0, [r1, #0]	@ 0010ec3c 0880
.org 0x10ec3e
	adds r1, r7, r4	@ 0010ec3e 3919
.org 0x10ec40
	adds r3, #1	@ 0010ec40 0133
.org 0x10ec42
	adds r0, r3, #0	@ 0010ec42 181c
.org 0x10ec44
	strh r0, [r1, #0]	@ 0010ec44 0880
.org 0x10ec46
	adds r7, r7, r2	@ 0010ec46 bf18
.org 0x10ec48
	ldr r0, [pc, #164]	@ 0010ec48 2948
.org 0x10ec4a
	adds r1, r7, #2	@ 0010ec4a b91c
.org 0x10ec4c
	movs r2, #12	@ 0010ec4c 0c22
.org 0x10ec4e
	bl 0xab4	@ 0010ec4e f1f631ff
.org 0x10ec52
	ldr r0, [pc, #160]	@ 0010ec52 2848
.org 0x10ec54
	movs r2, #225	@ 0010ec54 e122
.org 0x10ec56
	lsls r2, r2, #1	@ 0010ec56 5200
.org 0x10ec58
	adds r1, r7, r2	@ 0010ec58 b918
.org 0x10ec5a
	movs r2, #12	@ 0010ec5a 0c22
.org 0x10ec5c
	bl 0xab4	@ 0010ec5c f1f62aff
.org 0x10ec60
	adds r7, #14	@ 0010ec60 0e37
.org 0x10ec62
	ldr r3, [pc, #148]	@ 0010ec62 254b
.org 0x10ec64
	adds r0, r3, #0	@ 0010ec64 181c
.org 0x10ec66
	strh r0, [r7, #0]	@ 0010ec66 3880
.org 0x10ec68
	adds r1, r7, #0	@ 0010ec68 391c
.org 0x10ec6a
	adds r1, #64	@ 0010ec6a 4031
.org 0x10ec6c
	ldr r2, [pc, #140]	@ 0010ec6c 234a
.org 0x10ec6e
	adds r0, r2, #0	@ 0010ec6e 101c
.org 0x10ec70
	strh r0, [r1, #0]	@ 0010ec70 0880
