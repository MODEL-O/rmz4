@ FUN_080c7890  entry 0x080c7890  size 292
.thumb
.org 0xc7890
FUN_080c7890:
	push {r4, r5, r6, r7, lr}	@ 000c7890 f0b5
.org 0xc7892
	mov r7, r8	@ 000c7892 4746
.org 0xc7894
	push {r7}	@ 000c7894 80b4
.org 0xc7896
	sub sp, #8	@ 000c7896 82b0
.org 0xc7898
	adds r5, r0, #0	@ 000c7898 051c
.org 0xc789a
	adds r0, #180	@ 000c789a b430
.org 0xc789c
	ldrb r6, [r0, #0]	@ 000c789c 0678
.org 0xc789e
	ldrb r0, [r5, #10]	@ 000c789e a87a
.org 0xc78a0
	lsrs r7, r0, #4	@ 000c78a0 0709
.org 0xc78a2
	movs r0, #1	@ 000c78a2 0120
.org 0xc78a4
	mov r8, r0	@ 000c78a4 8046
.org 0xc78a6
	ands r7, r0	@ 000c78a6 0740
.org 0xc78a8
	adds r0, r5, #0	@ 000c78a8 281c
.org 0xc78aa
	bl 0x1cff0	@ 000c78aa 55f7a1fb
.org 0xc78ae
	ldr r0, [r5, #84]	@ 000c78ae 686d
.org 0xc78b0
	ldr r1, [r5, #92]	@ 000c78b0 e96d
.org 0xc78b2
	adds r0, r0, r1	@ 000c78b2 4018
.org 0xc78b4
	str r0, [sp, #0]	@ 000c78b4 0090
.org 0xc78b6
	ldr r1, [r5, #88]	@ 000c78b6 a96d
.org 0xc78b8
	ldr r2, [r5, #96]	@ 000c78b8 2a6e
.org 0xc78ba
	adds r1, r1, r2	@ 000c78ba 8918
.org 0xc78bc
	str r1, [sp, #4]	@ 000c78bc 0191
.org 0xc78be
	bl 0x7c7c	@ 000c78be 40f7ddf9
.org 0xc78c2
	lsls r0, r0, #16	@ 000c78c2 0004
.org 0xc78c4
	cmp r0, #0	@ 000c78c4 0028
.org 0xc78c6
	beq.n 0xc79a0	@ 000c78c6 6bd0
.org 0xc78c8
	ldr r1, [r5, #88]	@ 000c78c8 a96d
.org 0xc78ca
	ldr r0, [sp, #0]	@ 000c78ca 0098
.org 0xc78cc
	bl 0x7c7c	@ 000c78cc 40f7d6f9
.org 0xc78d0
	lsls r0, r0, #16	@ 000c78d0 0004
.org 0xc78d2
	lsrs r0, r0, #16	@ 000c78d2 000c
.org 0xc78d4
	negs r4, r0	@ 000c78d4 4442
.org 0xc78d6
	orrs r4, r0	@ 000c78d6 0443
.org 0xc78d8
	lsrs r4, r4, #31	@ 000c78d8 e40f
.org 0xc78da
	ldr r0, [r5, #84]	@ 000c78da 686d
.org 0xc78dc
	ldr r1, [sp, #4]	@ 000c78dc 0199
.org 0xc78de
	bl 0x7c7c	@ 000c78de 40f7cdf9
.org 0xc78e2
	lsls r0, r0, #16	@ 000c78e2 0004
.org 0xc78e4
	lsrs r0, r0, #16	@ 000c78e4 000c
.org 0xc78e6
	negs r1, r0	@ 000c78e6 4142
.org 0xc78e8
	orrs r1, r0	@ 000c78e8 0143
.org 0xc78ea
	lsrs r1, r1, #31	@ 000c78ea c90f
.org 0xc78ec
	subs r4, r4, r1	@ 000c78ec 641a
.org 0xc78ee
	cmp r4, #1	@ 000c78ee 012c
.org 0xc78f0
	bne.n 0xc7910	@ 000c78f0 0ed1
.org 0xc78f2
	adds r0, r6, #0	@ 000c78f2 301c
.org 0xc78f4
	subs r0, #64	@ 000c78f4 4038
.org 0xc78f6
	lsls r0, r0, #24	@ 000c78f6 0006
.org 0xc78f8
	lsrs r4, r0, #31	@ 000c78f8 c40f
.org 0xc78fa
	mov r0, sp	@ 000c78fa 6846
.org 0xc78fc
	adds r1, r4, #0	@ 000c78fc 211c
.org 0xc78fe
	bl 0xc7d88	@ 000c78fe 00f043fa
.org 0xc7902
	lsls r4, r4, #1	@ 000c7902 6400
.org 0xc7904
	subs r4, #1	@ 000c7904 013c
.org 0xc7906
	lsls r4, r4, #10	@ 000c7906 a402
.org 0xc7908
	subs r0, r0, r4	@ 000c7908 001b
.org 0xc790a
	str r0, [sp, #0]	@ 000c790a 0090
.org 0xc790c
	movs r6, #192	@ 000c790c c026
.org 0xc790e
	b.n 0xc7932	@ 000c790e 10e0
.org 0xc7910
	adds r0, r6, #0	@ 000c7910 301c
.org 0xc7912
	adds r0, #128	@ 000c7912 8030
.org 0xc7914
	lsls r0, r0, #24	@ 000c7914 0006
.org 0xc7916
	lsrs r4, r0, #31	@ 000c7916 c40f
.org 0xc7918
	adds r1, r4, #2	@ 000c7918 a11c
.org 0xc791a
	mov r0, sp	@ 000c791a 6846
.org 0xc791c
	bl 0xc7d88	@ 000c791c 00f034fa
.org 0xc7920
	lsls r1, r4, #1	@ 000c7920 6100
.org 0xc7922
	subs r1, #1	@ 000c7922 0139
.org 0xc7924
	lsls r1, r1, #10	@ 000c7924 8902
.org 0xc7926
	subs r0, r0, r1	@ 000c7926 401a
.org 0xc7928
	str r0, [sp, #4]	@ 000c7928 0190
.org 0xc792a
	adds r0, r7, #1	@ 000c792a 781c
.org 0xc792c
	mov r1, r8	@ 000c792c 4146
.org 0xc792e
	ands r0, r1	@ 000c792e 0840
.org 0xc7930
	lsls r6, r0, #7	@ 000c7930 c601
.org 0xc7932
	adds r0, r5, #0	@ 000c7932 281c
.org 0xc7934
	adds r0, #180	@ 000c7934 b430
.org 0xc7936
	strb r6, [r0, #0]	@ 000c7936 0670
.org 0xc7938
	ldrb r1, [r5, #10]	@ 000c7938 a97a
.org 0xc793a
	movs r0, #16	@ 000c793a 1020
.org 0xc793c
	ands r0, r1	@ 000c793c 0840
.org 0xc793e
	cmp r0, #0	@ 000c793e 0028
.org 0xc7940
	beq.n 0xc7954	@ 000c7940 08d0
.org 0xc7942
	movs r0, #160	@ 000c7942 a020
.org 0xc7944
	lsls r0, r0, #1	@ 000c7944 4000
.org 0xc7946
	subs r0, r0, r6	@ 000c7946 801b
.org 0xc7948
	lsls r0, r0, #1	@ 000c7948 4000
.org 0xc794a
	adds r0, r6, r0	@ 000c794a 3018
.org 0xc794c
	lsls r0, r0, #24	@ 000c794c 0006
.org 0xc794e
	lsrs r0, r0, #24	@ 000c794e 000e
.org 0xc7950
	adds r1, r0, #0	@ 000c7950 011c
.org 0xc7952
	b.n 0xc7956	@ 000c7952 00e0
.org 0xc7954
	adds r1, r6, #0	@ 000c7954 311c
.org 0xc7956
	subs r1, #128	@ 000c7956 8039
.org 0xc7958
	adds r0, r5, #0	@ 000c7958 281c
.org 0xc795a
	adds r0, #36	@ 000c795a 2430
.org 0xc795c
	movs r4, #0	@ 000c795c 0024
.org 0xc795e
	strb r1, [r0, #0]	@ 000c795e 0170
.org 0xc7960
	adds r2, r5, #0	@ 000c7960 2a1c
.org 0xc7962
	adds r2, #184	@ 000c7962 b832
.org 0xc7964
	ldr r3, [pc, #76]	@ 000c7964 134b
.org 0xc7966
	adds r0, r6, #0	@ 000c7966 301c
.org 0xc7968
	adds r0, #64	@ 000c7968 4030
.org 0xc796a
	lsls r0, r0, #24	@ 000c796a 0006
.org 0xc796c
	lsrs r0, r0, #23	@ 000c796c c00d
.org 0xc796e
	adds r0, r0, r3	@ 000c796e c018
.org 0xc7970
	movs r7, #0	@ 000c7970 0027
.org 0xc7972
	ldrsh r1, [r0, r7]	@ 000c7972 c15f
.org 0xc7974
	ldr r0, [r2, #0]	@ 000c7974 1068
.org 0xc7976
	muls r0, r1	@ 000c7976 4843
.org 0xc7978
	cmp r0, #0	@ 000c7978 0028
.org 0xc797a
	bge.n 0xc797e	@ 000c797a 00da
.org 0xc797c
	adds r0, #255	@ 000c797c ff30
.org 0xc797e
	asrs r0, r0, #8	@ 000c797e 0012
.org 0xc7980
	str r0, [r5, #92]	@ 000c7980 e865
.org 0xc7982
	lsls r0, r6, #1	@ 000c7982 7000
.org 0xc7984
	adds r0, r0, r3	@ 000c7984 c018
.org 0xc7986
	movs r3, #0	@ 000c7986 0023
.org 0xc7988
	ldrsh r1, [r0, r3]	@ 000c7988 c15e
.org 0xc798a
	ldr r0, [r2, #0]	@ 000c798a 1068
.org 0xc798c
	muls r0, r1	@ 000c798c 4843
.org 0xc798e
	cmp r0, #0	@ 000c798e 0028
.org 0xc7990
	bge.n 0xc7994	@ 000c7990 00da
.org 0xc7992
	adds r0, #255	@ 000c7992 ff30
.org 0xc7994
	asrs r0, r0, #8	@ 000c7994 0012
.org 0xc7996
	str r0, [r5, #96]	@ 000c7996 2866
.org 0xc7998
	movs r0, #1	@ 000c7998 0120
.org 0xc799a
	strb r0, [r5, #13]	@ 000c799a 6873
.org 0xc799c
	strb r4, [r5, #14]	@ 000c799c ac73
.org 0xc799e
	strb r4, [r5, #15]	@ 000c799e ec73
.org 0xc79a0
	ldr r0, [sp, #0]	@ 000c79a0 0098
.org 0xc79a2
	ldr r1, [sp, #4]	@ 000c79a2 0199
.org 0xc79a4
	str r0, [r5, #84]	@ 000c79a4 6865
.org 0xc79a6
	str r1, [r5, #88]	@ 000c79a6 a965
.org 0xc79a8
	add sp, #8	@ 000c79a8 02b0
.org 0xc79aa
	pop {r3}	@ 000c79aa 08bc
.org 0xc79ac
	mov r8, r3	@ 000c79ac 9846
.org 0xc79ae
	pop {r4, r5, r6, r7}	@ 000c79ae f0bc
.org 0xc79b0
	pop {r0}	@ 000c79b0 01bc
.org 0xc79b2
	bx r0	@ 000c79b2 0047
