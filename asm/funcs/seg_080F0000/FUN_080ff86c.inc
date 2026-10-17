@ FUN_080ff86c  entry 0x080ff86c  size 192
.thumb
.org 0xff86c
FUN_080ff86c:
	push {r4, r5, lr}	@ 000ff86c 30b5
.org 0xff86e
	adds r4, r0, #0	@ 000ff86e 041c
.org 0xff870
	adds r0, #140	@ 000ff870 8c30
.org 0xff872
	ldr r0, [r0, #0]	@ 000ff872 0068
.org 0xff874
	movs r1, #128	@ 000ff874 8021
.org 0xff876
	lsls r1, r1, #2	@ 000ff876 8900
.org 0xff878
	ands r0, r1	@ 000ff878 0840
.org 0xff87a
	cmp r0, #0	@ 000ff87a 0028
.org 0xff87c
	beq.n 0xff89c	@ 000ff87c 0ed0
.org 0xff87e
	ldr r1, [pc, #24]	@ 000ff87e 0649
.org 0xff880
	ldrb r0, [r4, #9]	@ 000ff880 607a
.org 0xff882
	lsls r0, r0, #2	@ 000ff882 8000
.org 0xff884
	adds r0, r0, r1	@ 000ff884 4018
.org 0xff886
	movs r1, #2	@ 000ff886 0221
.org 0xff888
	str r1, [r4, #12]	@ 000ff888 e160
.org 0xff88a
	ldr r0, [r0, #0]	@ 000ff88a 0068
.org 0xff88c
	ldr r0, [r0, #8]	@ 000ff88c 8068
.org 0xff88e
	str r0, [r4, #20]	@ 000ff88e 6061
.org 0xff890
	adds r0, r4, #0	@ 000ff890 201c
.org 0xff892
	bl 0xff168	@ 000ff892 fff769fc
.org 0xff896
	b.n 0xff950	@ 000ff896 5be0
.org 0xff898
	.byte 0xfc,0x92,0x86,0x08	@ 000ff898 data
.org 0xff89c
	adds r0, r4, #0	@ 000ff89c 201c
.org 0xff89e
	bl 0x1cff0	@ 000ff89e 1df7a7fb
.org 0xff8a2
	ldr r5, [r4, #88]	@ 000ff8a2 a56d
.org 0xff8a4
	ldrb r1, [r4, #10]	@ 000ff8a4 a17a
.org 0xff8a6
	movs r0, #32	@ 000ff8a6 2020
.org 0xff8a8
	ands r0, r1	@ 000ff8a8 0840
.org 0xff8aa
	cmp r0, #0	@ 000ff8aa 0028
.org 0xff8ac
	beq.n 0xff8cc	@ 000ff8ac 0ed0
.org 0xff8ae
	adds r3, r4, #0	@ 000ff8ae 231c
.org 0xff8b0
	adds r3, #184	@ 000ff8b0 b833
.org 0xff8b2
	ldr r2, [pc, #16]	@ 000ff8b2 044a
.org 0xff8b4
	ldr r1, [pc, #16]	@ 000ff8b4 0449
.org 0xff8b6
	adds r0, r2, r1	@ 000ff8b6 5018
.org 0xff8b8
	ldrh r1, [r0, #0]	@ 000ff8b8 0188
.org 0xff8ba
	lsls r1, r1, #8	@ 000ff8ba 0902
.org 0xff8bc
	ldr r0, [r3, #0]	@ 000ff8bc 1868
.org 0xff8be
	subs r0, r0, r1	@ 000ff8be 401a
.org 0xff8c0
	b.n 0xff8de	@ 000ff8c0 0de0
.org 0xff8c2
	.byte 0x00	@ 000ff8c2 data
.org 0xff8c3
	.byte 0x00	@ 000ff8c3 data
.org 0xff8c4
	.byte 0xb0,0x0a,0x00,0x02	@ 000ff8c4 data
.org 0xff8c8
	.byte 0x3c,0xd0,0x02,0x00	@ 000ff8c8 data
.org 0xff8cc
	adds r3, r4, #0	@ 000ff8cc 231c
.org 0xff8ce
	adds r3, #184	@ 000ff8ce b833
.org 0xff8d0
	ldr r2, [pc, #28]	@ 000ff8d0 074a
.org 0xff8d2
	ldr r1, [pc, #32]	@ 000ff8d2 0849
.org 0xff8d4
	adds r0, r2, r1	@ 000ff8d4 5018
.org 0xff8d6
	ldrh r1, [r0, #0]	@ 000ff8d6 0188
.org 0xff8d8
	lsls r1, r1, #8	@ 000ff8d8 0902
.org 0xff8da
	ldr r0, [r3, #0]	@ 000ff8da 1868
.org 0xff8dc
	adds r0, r0, r1	@ 000ff8dc 4018
.org 0xff8de
	str r0, [r4, #88]	@ 000ff8de a065
.org 0xff8e0
	ldr r1, [pc, #16]	@ 000ff8e0 0449
.org 0xff8e2
	adds r0, r2, r1	@ 000ff8e2 5018
.org 0xff8e4
	ldrh r0, [r0, #0]	@ 000ff8e4 0088
.org 0xff8e6
	cmp r0, #15	@ 000ff8e6 0f28
.org 0xff8e8
	bhi.n 0xff8fc	@ 000ff8e8 08d8
.org 0xff8ea
	ldr r1, [pc, #12]	@ 000ff8ea 0349
.org 0xff8ec
	b.n 0xff90e	@ 000ff8ec 0fe0
.org 0xff8ee
	.byte 0x00	@ 000ff8ee data
.org 0xff8ef
	.byte 0x00	@ 000ff8ef data
.org 0xff8f0
	.byte 0xb0,0x0a,0x00,0x02	@ 000ff8f0 data
.org 0xff8f4
	.byte 0x3c,0xd0,0x02,0x00	@ 000ff8f4 data
.org 0xff8f8
	.byte 0x05,0xaa,0x00,0x00	@ 000ff8f8 data
.org 0xff8fc
	cmp r0, #31	@ 000ff8fc 1f28
.org 0xff8fe
	bhi.n 0xff908	@ 000ff8fe 03d8
.org 0xff900
	ldr r1, [pc, #0]	@ 000ff900 0049
.org 0xff902
	b.n 0xff90e	@ 000ff902 04e0
.org 0xff904
	.byte 0x04,0xaa,0x00,0x00	@ 000ff904 data
.org 0xff908
	cmp r0, #47	@ 000ff908 2f28
.org 0xff90a
	bhi.n 0xff91c	@ 000ff90a 07d8
.org 0xff90c
	ldr r1, [pc, #8]	@ 000ff90c 0249
.org 0xff90e
	adds r0, r4, #0	@ 000ff90e 201c
.org 0xff910
	bl 0x1cf00	@ 000ff910 1df7f6fa
.org 0xff914
	b.n 0xff924	@ 000ff914 06e0
.org 0xff916
	.byte 0x00	@ 000ff916 data
.org 0xff917
	.byte 0x00	@ 000ff917 data
.org 0xff918
	.byte 0x03,0xaa,0x00,0x00	@ 000ff918 data
.org 0xff91c
	ldr r1, [pc, #36]	@ 000ff91c 0949
.org 0xff91e
	adds r0, r4, #0	@ 000ff91e 201c
.org 0xff920
	bl 0x1cf00	@ 000ff920 1df7eefa
.org 0xff924
	adds r0, r4, #0	@ 000ff924 201c
.org 0xff926
	bl 0x1cff0	@ 000ff926 1df763fb
.org 0xff92a
	ldr r0, [r4, #88]	@ 000ff92a a06d
