@ FUN_0801a880  entry 0x0801a880  size 770
.thumb
.org 0x1a880
FUN_0801a880:
	push {r4, lr}	@ 0001a880 10b5
.org 0x1a882
	adds r1, r0, #0	@ 0001a882 011c
.org 0x1a884
	ldr r0, [pc, #260]	@ 0001a884 4148
.org 0x1a886
	ldr r3, [pc, #264]	@ 0001a886 424b
.org 0x1a888
	adds r2, r0, r3	@ 0001a888 c218
.org 0x1a88a
	ldrb r0, [r2, #0]	@ 0001a88a 1078
.org 0x1a88c
	adds r0, #1	@ 0001a88c 0130
.org 0x1a88e
	strb r0, [r2, #0]	@ 0001a88e 1070
.org 0x1a890
	lsls r0, r0, #24	@ 0001a890 0006
.org 0x1a892
	lsrs r0, r0, #24	@ 0001a892 000e
.org 0x1a894
	cmp r0, #95	@ 0001a894 5f28
.org 0x1a896
	bls.n 0x1a89c	@ 0001a896 01d9
.org 0x1a898
	movs r0, #0	@ 0001a898 0020
.org 0x1a89a
	strb r0, [r2, #0]	@ 0001a89a 1070
.org 0x1a89c
	ldr r0, [r1, #0]	@ 0001a89c 0868
.org 0x1a89e
	ldr r1, [pc, #244]	@ 0001a89e 3d49
.org 0x1a8a0
	adds r0, r0, r1	@ 0001a8a0 4018
.org 0x1a8a2
	ldr r1, [pc, #244]	@ 0001a8a2 3d49
.org 0x1a8a4
	cmp r0, r1	@ 0001a8a4 8842
.org 0x1a8a6
	bhi.n 0x1a8c4	@ 0001a8a6 0dd8
.org 0x1a8a8
	movs r0, #0	@ 0001a8a8 0020
.org 0x1a8aa
	ldrsb r0, [r2, r0]	@ 0001a8aa 1056
.org 0x1a8ac
	subs r0, #4	@ 0001a8ac 0438
.org 0x1a8ae
	lsls r0, r0, #24	@ 0001a8ae 0006
.org 0x1a8b0
	asrs r0, r0, #24	@ 0001a8b0 0016
.org 0x1a8b2
	movs r1, #24	@ 0001a8b2 1821
.org 0x1a8b4
	bl 0x129050	@ 0001a8b4 0ef1ccfb
.org 0x1a8b8
	lsls r0, r0, #24	@ 0001a8b8 0006
.org 0x1a8ba
	cmp r0, #0	@ 0001a8ba 0028
.org 0x1a8bc
	bne.n 0x1a8c4	@ 0001a8bc 02d1
.org 0x1a8be
	ldr r0, [pc, #220]	@ 0001a8be 3748
.org 0x1a8c0
	bl 0x2b10	@ 0001a8c0 e8f726f9
.org 0x1a8c4
	ldr r2, [pc, #196]	@ 0001a8c4 314a
.org 0x1a8c6
	ldr r3, [pc, #216]	@ 0001a8c6 364b
.org 0x1a8c8
	adds r1, r2, r3	@ 0001a8c8 d118
.org 0x1a8ca
	ldrb r0, [r1, #0]	@ 0001a8ca 0878
.org 0x1a8cc
	adds r0, #1	@ 0001a8cc 0130
.org 0x1a8ce
	strb r0, [r1, #0]	@ 0001a8ce 0870
.org 0x1a8d0
	lsls r0, r0, #24	@ 0001a8d0 0006
.org 0x1a8d2
	lsrs r0, r0, #24	@ 0001a8d2 000e
.org 0x1a8d4
	cmp r0, #191	@ 0001a8d4 bf28
.org 0x1a8d6
	bls.n 0x1a8dc	@ 0001a8d6 01d9
.org 0x1a8d8
	movs r0, #0	@ 0001a8d8 0020
.org 0x1a8da
	strb r0, [r1, #0]	@ 0001a8da 0870
.org 0x1a8dc
	ldr r0, [pc, #196]	@ 0001a8dc 3148
.org 0x1a8de
	adds r1, r2, r0	@ 0001a8de 1118
.org 0x1a8e0
	ldr r0, [r1, #0]	@ 0001a8e0 0868
.org 0x1a8e2
	adds r0, #1	@ 0001a8e2 0130
.org 0x1a8e4
	str r0, [r1, #0]	@ 0001a8e4 0860
.org 0x1a8e6
	ldr r3, [pc, #192]	@ 0001a8e6 304b
.org 0x1a8e8
	adds r1, r2, r3	@ 0001a8e8 d118
.org 0x1a8ea
	ldrh r0, [r1, #0]	@ 0001a8ea 0888
.org 0x1a8ec
	adds r0, #1	@ 0001a8ec 0130
.org 0x1a8ee
	movs r3, #0	@ 0001a8ee 0023
.org 0x1a8f0
	strh r0, [r1, #0]	@ 0001a8f0 0880
.org 0x1a8f2
	ldr r0, [pc, #184]	@ 0001a8f2 2e48
.org 0x1a8f4
	adds r1, r2, r0	@ 0001a8f4 1118
.org 0x1a8f6
	ldrb r0, [r1, #0]	@ 0001a8f6 0878
.org 0x1a8f8
	adds r0, #1	@ 0001a8f8 0130
.org 0x1a8fa
	strb r0, [r1, #0]	@ 0001a8fa 0870
.org 0x1a8fc
	lsls r0, r0, #24	@ 0001a8fc 0006
.org 0x1a8fe
	lsrs r0, r0, #24	@ 0001a8fe 000e
.org 0x1a900
	cmp r0, #32	@ 0001a900 2028
.org 0x1a902
	bne.n 0x1a906	@ 0001a902 00d1
.org 0x1a904
	strb r3, [r1, #0]	@ 0001a904 0b70
.org 0x1a906
	ldr r0, [pc, #168]	@ 0001a906 2a48
.org 0x1a908
	adds r1, r2, r0	@ 0001a908 1118
.org 0x1a90a
	ldrb r0, [r1, #0]	@ 0001a90a 0878
.org 0x1a90c
	adds r0, #1	@ 0001a90c 0130
.org 0x1a90e
	strb r0, [r1, #0]	@ 0001a90e 0870
.org 0x1a910
	lsls r0, r0, #24	@ 0001a910 0006
.org 0x1a912
	lsrs r0, r0, #24	@ 0001a912 000e
.org 0x1a914
	cmp r0, #25	@ 0001a914 1928
.org 0x1a916
	bne.n 0x1a91a	@ 0001a916 00d1
.org 0x1a918
	strb r3, [r1, #0]	@ 0001a918 0b70
.org 0x1a91a
	ldr r1, [pc, #152]	@ 0001a91a 2649
.org 0x1a91c
	adds r0, r2, r1	@ 0001a91c 5018
.org 0x1a91e
	ldrh r1, [r0, #0]	@ 0001a91e 0188
.org 0x1a920
	lsrs r0, r1, #8	@ 0001a920 080a
.org 0x1a922
	cmp r0, #15	@ 0001a922 0f28
.org 0x1a924
	bne.n 0x1a9bc	@ 0001a924 4ad1
.org 0x1a926
	movs r0, #255	@ 0001a926 ff20
.org 0x1a928
	ands r0, r1	@ 0001a928 0840
.org 0x1a92a
	cmp r0, #0	@ 0001a92a 0028
.org 0x1a92c
	bne.n 0x1a9bc	@ 0001a92c 46d1
.org 0x1a92e
	ldr r3, [pc, #136]	@ 0001a92e 224b
.org 0x1a930
	adds r1, r2, r3	@ 0001a930 d118
.org 0x1a932
	ldrb r2, [r1, #0]	@ 0001a932 0a78
.org 0x1a934
	movs r0, #1	@ 0001a934 0120
.org 0x1a936
	ands r0, r2	@ 0001a936 1040
.org 0x1a938
	cmp r0, #0	@ 0001a938 0028
.org 0x1a93a
	bne.n 0x1a96a	@ 0001a93a 16d1
.org 0x1a93c
	movs r0, #1	@ 0001a93c 0120
.org 0x1a93e
	orrs r0, r2	@ 0001a93e 1043
.org 0x1a940
	strb r0, [r1, #0]	@ 0001a940 0870
.org 0x1a942
	movs r0, #158	@ 0001a942 9e20
.org 0x1a944
	movs r1, #0	@ 0001a944 0021
.org 0x1a946
	bl 0x249c	@ 0001a946 e7f7a9fd
.org 0x1a94a
	movs r0, #159	@ 0001a94a 9f20
.org 0x1a94c
	movs r1, #0	@ 0001a94c 0021
.org 0x1a94e
	bl 0x249c	@ 0001a94e e7f7a5fd
.org 0x1a952
	movs r0, #160	@ 0001a952 a020
.org 0x1a954
	movs r1, #0	@ 0001a954 0021
.org 0x1a956
	bl 0x249c	@ 0001a956 e7f7a1fd
.org 0x1a95a
	movs r0, #161	@ 0001a95a a120
.org 0x1a95c
	movs r1, #0	@ 0001a95c 0021
.org 0x1a95e
	bl 0x249c	@ 0001a95e e7f79dfd
.org 0x1a962
	movs r0, #175	@ 0001a962 af20
.org 0x1a964
	movs r1, #0	@ 0001a964 0021
.org 0x1a966
	bl 0x249c	@ 0001a966 e7f799fd
.org 0x1a96a
	movs r0, #158	@ 0001a96a 9e20
.org 0x1a96c
	bl 0x25d8	@ 0001a96c e7f734fe
.org 0x1a970
	movs r0, #159	@ 0001a970 9f20
.org 0x1a972
	bl 0x25d8	@ 0001a972 e7f731fe
.org 0x1a976
	movs r0, #160	@ 0001a976 a020
.org 0x1a978
	bl 0x25d8	@ 0001a978 e7f72efe
.org 0x1a97c
	movs r0, #161	@ 0001a97c a120
.org 0x1a97e
	bl 0x25d8	@ 0001a97e e7f72bfe
.org 0x1a982
	movs r0, #175	@ 0001a982 af20
.org 0x1a984
	bl 0x25d8	@ 0001a984 e7f728fe
.org 0x1a988
	b.n 0x1a9f0	@ 0001a988 32e0
.org 0x1a98a
	.byte 0x00	@ 0001a98a data
.org 0x1a98b
	.byte 0x00	@ 0001a98b data
.org 0x1a98c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001a98c data
.org 0x1a990
	.byte 0x30,0xd0,0x02,0x00	@ 0001a990 data
.org 0x1a994
	.byte 0xff,0x7f,0xe9,0xff	@ 0001a994 data
.org 0x1a998
	.byte 0xfe,0x4f,0x03,0x00	@ 0001a998 data
.org 0x1a99c
	.byte 0x81,0x01,0x00,0x00	@ 0001a99c data
.org 0x1a9a0
	.byte 0x31,0xd0,0x02,0x00	@ 0001a9a0 data
.org 0x1a9a4
	.byte 0x34,0xd0,0x02,0x00	@ 0001a9a4 data
.org 0x1a9a8
	.byte 0x2a,0xd0,0x02,0x00	@ 0001a9a8 data
.org 0x1a9ac
	.byte 0x29,0xd0,0x02,0x00	@ 0001a9ac data
.org 0x1a9b0
	.byte 0x2c,0xd0,0x02,0x00	@ 0001a9b0 data
.org 0x1a9b4
	.byte 0xd4,0x07,0x00,0x00	@ 0001a9b4 data
.org 0x1a9b8
	.byte 0x28,0xd0,0x02,0x00	@ 0001a9b8 data
.org 0x1a9bc
	ldr r0, [pc, #112]	@ 0001a9bc 1c48
.org 0x1a9be
	ldr r1, [pc, #116]	@ 0001a9be 1d49
.org 0x1a9c0
	adds r2, r0, r1	@ 0001a9c0 4218
.org 0x1a9c2
	ldrb r1, [r2, #0]	@ 0001a9c2 1178
.org 0x1a9c4
	movs r0, #1	@ 0001a9c4 0120
.org 0x1a9c6
	ands r0, r1	@ 0001a9c6 0840
.org 0x1a9c8
	cmp r0, #0	@ 0001a9c8 0028
.org 0x1a9ca
	beq.n 0x1a9f0	@ 0001a9ca 11d0
.org 0x1a9cc
	movs r0, #1	@ 0001a9cc 0120
.org 0x1a9ce
	eors r0, r1	@ 0001a9ce 4840
.org 0x1a9d0
	strb r0, [r2, #0]	@ 0001a9d0 1070
.org 0x1a9d2
	movs r0, #158	@ 0001a9d2 9e20
.org 0x1a9d4
	bl 0x2624	@ 0001a9d4 e7f726fe
.org 0x1a9d8
	movs r0, #159	@ 0001a9d8 9f20
.org 0x1a9da
	bl 0x2624	@ 0001a9da e7f723fe
.org 0x1a9de
	movs r0, #160	@ 0001a9de a020
.org 0x1a9e0
	bl 0x2624	@ 0001a9e0 e7f720fe
.org 0x1a9e4
	movs r0, #161	@ 0001a9e4 a120
.org 0x1a9e6
	bl 0x2624	@ 0001a9e6 e7f71dfe
.org 0x1a9ea
	movs r0, #175	@ 0001a9ea af20
.org 0x1a9ec
	bl 0x2624	@ 0001a9ec e7f71afe
.org 0x1a9f0
	ldr r2, [pc, #60]	@ 0001a9f0 0f4a
.org 0x1a9f2
	ldr r3, [pc, #68]	@ 0001a9f2 114b
.org 0x1a9f4
	adds r0, r2, r3	@ 0001a9f4 d018
.org 0x1a9f6
	ldrh r1, [r0, #0]	@ 0001a9f6 0188
.org 0x1a9f8
	lsrs r0, r1, #8	@ 0001a9f8 080a
.org 0x1a9fa
	cmp r0, #15	@ 0001a9fa 0f28
.org 0x1a9fc
	bne.n 0x1aa3c	@ 0001a9fc 1ed1
.org 0x1a9fe
	movs r0, #255	@ 0001a9fe ff20
.org 0x1aa00
	ands r0, r1	@ 0001aa00 0840
.org 0x1aa02
	cmp r0, #3	@ 0001aa02 0328
.org 0x1aa04
	beq.n 0x1aa0a	@ 0001aa04 01d0
.org 0x1aa06
	cmp r0, #6	@ 0001aa06 0628
.org 0x1aa08
	bne.n 0x1aa3c	@ 0001aa08 18d1
.org 0x1aa0a
	ldr r0, [pc, #40]	@ 0001aa0a 0a48
.org 0x1aa0c
	adds r2, r2, r0	@ 0001aa0c 1218
.org 0x1aa0e
	ldrb r1, [r2, #0]	@ 0001aa0e 1178
.org 0x1aa10
	movs r0, #2	@ 0001aa10 0220
.org 0x1aa12
	ands r0, r1	@ 0001aa12 0840
.org 0x1aa14
	cmp r0, #0	@ 0001aa14 0028
.org 0x1aa16
	bne.n 0x1aa26	@ 0001aa16 06d1
.org 0x1aa18
	movs r0, #2	@ 0001aa18 0220
.org 0x1aa1a
	orrs r0, r1	@ 0001aa1a 0843
.org 0x1aa1c
	strb r0, [r2, #0]	@ 0001aa1c 1070
.org 0x1aa1e
	movs r0, #176	@ 0001aa1e b020
.org 0x1aa20
	movs r1, #0	@ 0001aa20 0021
.org 0x1aa22
	bl 0x249c	@ 0001aa22 e7f73bfd
.org 0x1aa26
	movs r0, #176	@ 0001aa26 b020
.org 0x1aa28
	bl 0x25d8	@ 0001aa28 e7f7d6fd
.org 0x1aa2c
	b.n 0x1aa58	@ 0001aa2c 14e0
.org 0x1aa2e
	.byte 0x00	@ 0001aa2e data
.org 0x1aa2f
	.byte 0x00	@ 0001aa2f data
.org 0x1aa30
	.byte 0xb0,0x0a,0x00,0x02	@ 0001aa30 data
.org 0x1aa34
	.byte 0x28,0xd0,0x02,0x00	@ 0001aa34 data
.org 0x1aa38
	.byte 0xd6,0x07,0x00,0x00	@ 0001aa38 data
.org 0x1aa3c
	ldr r0, [pc, #112]	@ 0001aa3c 1c48
.org 0x1aa3e
	ldr r1, [pc, #116]	@ 0001aa3e 1d49
.org 0x1aa40
	adds r2, r0, r1	@ 0001aa40 4218
.org 0x1aa42
	ldrb r1, [r2, #0]	@ 0001aa42 1178
.org 0x1aa44
	movs r0, #2	@ 0001aa44 0220
.org 0x1aa46
	ands r0, r1	@ 0001aa46 0840
.org 0x1aa48
	cmp r0, #0	@ 0001aa48 0028
.org 0x1aa4a
	beq.n 0x1aa58	@ 0001aa4a 05d0
.org 0x1aa4c
	movs r0, #2	@ 0001aa4c 0220
.org 0x1aa4e
	eors r0, r1	@ 0001aa4e 4840
.org 0x1aa50
	strb r0, [r2, #0]	@ 0001aa50 1070
.org 0x1aa52
	movs r0, #176	@ 0001aa52 b020
.org 0x1aa54
	bl 0x2624	@ 0001aa54 e7f7e6fd
.org 0x1aa58
	ldr r2, [pc, #84]	@ 0001aa58 154a
.org 0x1aa5a
	ldr r3, [pc, #92]	@ 0001aa5a 174b
.org 0x1aa5c
	adds r0, r2, r3	@ 0001aa5c d018
.org 0x1aa5e
	ldrh r1, [r0, #0]	@ 0001aa5e 0188
.org 0x1aa60
	lsrs r0, r1, #8	@ 0001aa60 080a
.org 0x1aa62
	cmp r0, #15	@ 0001aa62 0f28
.org 0x1aa64
	bne.n 0x1aabc	@ 0001aa64 2ad1
.org 0x1aa66
	movs r0, #255	@ 0001aa66 ff20
.org 0x1aa68
	ands r0, r1	@ 0001aa68 0840
.org 0x1aa6a
	cmp r0, #3	@ 0001aa6a 0328
.org 0x1aa6c
	bne.n 0x1aabc	@ 0001aa6c 26d1
.org 0x1aa6e
	ldr r0, [pc, #68]	@ 0001aa6e 1148
.org 0x1aa70
	adds r2, r2, r0	@ 0001aa70 1218
.org 0x1aa72
	ldrb r1, [r2, #0]	@ 0001aa72 1178
.org 0x1aa74
	movs r0, #4	@ 0001aa74 0420
.org 0x1aa76
	ands r0, r1	@ 0001aa76 0840
.org 0x1aa78
	cmp r0, #0	@ 0001aa78 0028
.org 0x1aa7a
	bne.n 0x1aa9a	@ 0001aa7a 0ed1
.org 0x1aa7c
	movs r0, #4	@ 0001aa7c 0420
.org 0x1aa7e
	orrs r0, r1	@ 0001aa7e 0843
.org 0x1aa80
	strb r0, [r2, #0]	@ 0001aa80 1070
.org 0x1aa82
	movs r0, #164	@ 0001aa82 a420
.org 0x1aa84
	movs r1, #0	@ 0001aa84 0021
.org 0x1aa86
	bl 0x249c	@ 0001aa86 e7f709fd
.org 0x1aa8a
	movs r0, #165	@ 0001aa8a a520
.org 0x1aa8c
	movs r1, #0	@ 0001aa8c 0021
.org 0x1aa8e
	bl 0x249c	@ 0001aa8e e7f705fd
.org 0x1aa92
	movs r0, #177	@ 0001aa92 b120
.org 0x1aa94
	movs r1, #0	@ 0001aa94 0021
.org 0x1aa96
	bl 0x249c	@ 0001aa96 e7f701fd
.org 0x1aa9a
	movs r0, #164	@ 0001aa9a a420
.org 0x1aa9c
	bl 0x25d8	@ 0001aa9c e7f79cfd
.org 0x1aaa0
	movs r0, #165	@ 0001aaa0 a520
.org 0x1aaa2
	bl 0x25d8	@ 0001aaa2 e7f799fd
.org 0x1aaa6
	movs r0, #177	@ 0001aaa6 b120
.org 0x1aaa8
	bl 0x25d8	@ 0001aaa8 e7f796fd
.org 0x1aaac
	b.n 0x1aae4	@ 0001aaac 1ae0
.org 0x1aaae
	.byte 0x00	@ 0001aaae data
.org 0x1aaaf
	.byte 0x00	@ 0001aaaf data
.org 0x1aab0
	.byte 0xb0,0x0a,0x00,0x02	@ 0001aab0 data
.org 0x1aab4
	.byte 0x28,0xd0,0x02,0x00	@ 0001aab4 data
.org 0x1aab8
	.byte 0xd6,0x07,0x00,0x00	@ 0001aab8 data
.org 0x1aabc
	ldr r0, [pc, #136]	@ 0001aabc 2248
.org 0x1aabe
	ldr r1, [pc, #140]	@ 0001aabe 2349
.org 0x1aac0
	adds r2, r0, r1	@ 0001aac0 4218
.org 0x1aac2
	ldrb r1, [r2, #0]	@ 0001aac2 1178
.org 0x1aac4
	movs r0, #4	@ 0001aac4 0420
.org 0x1aac6
	ands r0, r1	@ 0001aac6 0840
.org 0x1aac8
	cmp r0, #0	@ 0001aac8 0028
.org 0x1aaca
	beq.n 0x1aae4	@ 0001aaca 0bd0
.org 0x1aacc
	movs r0, #4	@ 0001aacc 0420
.org 0x1aace
	eors r0, r1	@ 0001aace 4840
.org 0x1aad0
	strb r0, [r2, #0]	@ 0001aad0 1070
.org 0x1aad2
	movs r0, #164	@ 0001aad2 a420
.org 0x1aad4
	bl 0x2624	@ 0001aad4 e7f7a6fd
.org 0x1aad8
	movs r0, #165	@ 0001aad8 a520
.org 0x1aada
	bl 0x2624	@ 0001aada e7f7a3fd
.org 0x1aade
	movs r0, #177	@ 0001aade b120
.org 0x1aae0
	bl 0x2624	@ 0001aae0 e7f7a0fd
.org 0x1aae4
	ldr r2, [pc, #96]	@ 0001aae4 184a
.org 0x1aae6
	ldr r3, [pc, #104]	@ 0001aae6 1a4b
.org 0x1aae8
	adds r0, r2, r3	@ 0001aae8 d018
.org 0x1aaea
	ldrh r1, [r0, #0]	@ 0001aaea 0188
.org 0x1aaec
	lsrs r0, r1, #8	@ 0001aaec 080a
.org 0x1aaee
	cmp r0, #15	@ 0001aaee 0f28
.org 0x1aaf0
	bne.n 0x1ab54	@ 0001aaf0 30d1
.org 0x1aaf2
	movs r0, #255	@ 0001aaf2 ff20
.org 0x1aaf4
	ands r0, r1	@ 0001aaf4 0840
.org 0x1aaf6
	cmp r0, #4	@ 0001aaf6 0428
.org 0x1aaf8
	bne.n 0x1ab54	@ 0001aaf8 2cd1
.org 0x1aafa
	ldr r0, [pc, #80]	@ 0001aafa 1448
.org 0x1aafc
	adds r2, r2, r0	@ 0001aafc 1218
.org 0x1aafe
	ldrb r1, [r2, #0]	@ 0001aafe 1178
.org 0x1ab00
	movs r0, #8	@ 0001ab00 0820
.org 0x1ab02
	ands r0, r1	@ 0001ab02 0840
.org 0x1ab04
	cmp r0, #0	@ 0001ab04 0028
.org 0x1ab06
	bne.n 0x1ab2e	@ 0001ab06 12d1
.org 0x1ab08
	movs r0, #8	@ 0001ab08 0820
.org 0x1ab0a
	orrs r0, r1	@ 0001ab0a 0843
.org 0x1ab0c
	strb r0, [r2, #0]	@ 0001ab0c 1070
.org 0x1ab0e
	movs r0, #158	@ 0001ab0e 9e20
.org 0x1ab10
	movs r1, #0	@ 0001ab10 0021
.org 0x1ab12
	bl 0x249c	@ 0001ab12 e7f7c3fc
.org 0x1ab16
	movs r0, #159	@ 0001ab16 9f20
.org 0x1ab18
	movs r1, #0	@ 0001ab18 0021
.org 0x1ab1a
	bl 0x249c	@ 0001ab1a e7f7bffc
.org 0x1ab1e
	movs r0, #162	@ 0001ab1e a220
.org 0x1ab20
	movs r1, #0	@ 0001ab20 0021
.org 0x1ab22
	bl 0x249c	@ 0001ab22 e7f7bbfc
.org 0x1ab26
	movs r0, #163	@ 0001ab26 a320
.org 0x1ab28
	movs r1, #0	@ 0001ab28 0021
.org 0x1ab2a
	bl 0x249c	@ 0001ab2a e7f7b7fc
.org 0x1ab2e
	movs r0, #158	@ 0001ab2e 9e20
.org 0x1ab30
	bl 0x25d8	@ 0001ab30 e7f752fd
.org 0x1ab34
	movs r0, #159	@ 0001ab34 9f20
.org 0x1ab36
	bl 0x25d8	@ 0001ab36 e7f74ffd
.org 0x1ab3a
	movs r0, #162	@ 0001ab3a a220
.org 0x1ab3c
	bl 0x25d8	@ 0001ab3c e7f74cfd
.org 0x1ab40
	movs r0, #163	@ 0001ab40 a320
.org 0x1ab42
	bl 0x25d8	@ 0001ab42 e7f749fd
.org 0x1ab46
	b.n 0x1ab82	@ 0001ab46 1ce0
.org 0x1ab48
	.byte 0xb0,0x0a,0x00,0x02	@ 0001ab48 data
.org 0x1ab4c
	.byte 0x28,0xd0,0x02,0x00	@ 0001ab4c data
.org 0x1ab50
	.byte 0xd4,0x07,0x00,0x00	@ 0001ab50 data
.org 0x1ab54
	ldr r0, [pc, #96]	@ 0001ab54 1848
.org 0x1ab56
	ldr r1, [pc, #100]	@ 0001ab56 1949
.org 0x1ab58
	adds r2, r0, r1	@ 0001ab58 4218
.org 0x1ab5a
	ldrb r1, [r2, #0]	@ 0001ab5a 1178
.org 0x1ab5c
	movs r0, #8	@ 0001ab5c 0820
.org 0x1ab5e
	ands r0, r1	@ 0001ab5e 0840
.org 0x1ab60
	cmp r0, #0	@ 0001ab60 0028
.org 0x1ab62
	beq.n 0x1ab82	@ 0001ab62 0ed0
.org 0x1ab64
	movs r0, #8	@ 0001ab64 0820
.org 0x1ab66
	eors r0, r1	@ 0001ab66 4840
.org 0x1ab68
	strb r0, [r2, #0]	@ 0001ab68 1070
.org 0x1ab6a
	movs r0, #158	@ 0001ab6a 9e20
.org 0x1ab6c
	bl 0x2624	@ 0001ab6c e7f75afd
.org 0x1ab70
	movs r0, #159	@ 0001ab70 9f20
.org 0x1ab72
	bl 0x2624	@ 0001ab72 e7f757fd
.org 0x1ab76
	movs r0, #162	@ 0001ab76 a220
.org 0x1ab78
	bl 0x2624	@ 0001ab78 e7f754fd
.org 0x1ab7c
	movs r0, #163	@ 0001ab7c a320
.org 0x1ab7e
	bl 0x2624	@ 0001ab7e e7f751fd
