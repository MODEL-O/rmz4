@ FUN_0805a8c4  entry 0x0805a8c4  size 182
.thumb
.org 0x5a8c4
FUN_0805a8c4:
	push {r4, r5, r6, lr}	@ 0005a8c4 70b5
.org 0x5a8c6
	adds r4, r0, #0	@ 0005a8c6 041c
.org 0x5a8c8
	ldrb r0, [r4, #15]	@ 0005a8c8 e07b
.org 0x5a8ca
	cmp r0, #0	@ 0005a8ca 0028
.org 0x5a8cc
	bne.n 0x5a94c	@ 0005a8cc 3ed1
.org 0x5a8ce
	ldr r0, [pc, #172]	@ 0005a8ce 2b48
.org 0x5a8d0
	ldr r1, [pc, #172]	@ 0005a8d0 2b49
.org 0x5a8d2
	adds r1, #142	@ 0005a8d2 8e31
.org 0x5a8d4
	ldrh r1, [r1, #0]	@ 0005a8d4 0988
.org 0x5a8d6
	ldrh r2, [r0, #6]	@ 0005a8d6 c288
.org 0x5a8d8
	lsrs r2, r2, #6	@ 0005a8d8 9209
.org 0x5a8da
	subs r1, r1, r2	@ 0005a8da 891a
.org 0x5a8dc
	lsls r1, r1, #5	@ 0005a8dc 4901
.org 0x5a8de
	movs r2, #128	@ 0005a8de 8022
.org 0x5a8e0
	lsls r2, r2, #9	@ 0005a8e0 5202
.org 0x5a8e2
	adds r1, r1, r2	@ 0005a8e2 8918
.org 0x5a8e4
	bl 0x1d30	@ 0005a8e4 a7f724fa
.org 0x5a8e8
	ldr r0, [pc, #152]	@ 0005a8e8 2648
.org 0x5a8ea
	ldr r1, [pc, #156]	@ 0005a8ea 2749
.org 0x5a8ec
	adds r1, #142	@ 0005a8ec 8e31
.org 0x5a8ee
	ldrh r1, [r1, #0]	@ 0005a8ee 0988
.org 0x5a8f0
	ldrb r2, [r0, #7]	@ 0005a8f0 c279
.org 0x5a8f2
	subs r1, r1, r2	@ 0005a8f2 891a
.org 0x5a8f4
	lsls r1, r1, #5	@ 0005a8f4 4901
.org 0x5a8f6
	movs r2, #128	@ 0005a8f6 8022
.org 0x5a8f8
	lsls r2, r2, #2	@ 0005a8f8 9200
.org 0x5a8fa
	adds r1, r1, r2	@ 0005a8fa 8918
.org 0x5a8fc
	bl 0x2208	@ 0005a8fc a7f784fc
.org 0x5a900
	adds r5, r4, #0	@ 0005a900 251c
.org 0x5a902
	adds r5, #200	@ 0005a902 c835
.org 0x5a904
	ldr r0, [r5, #0]	@ 0005a904 2868
.org 0x5a906
	adds r6, r4, #0	@ 0005a906 261c
.org 0x5a908
	adds r6, #191	@ 0005a908 bf36
.org 0x5a90a
	cmp r0, #0	@ 0005a90a 0028
.org 0x5a90c
	beq.n 0x5a914	@ 0005a90c 02d0
.org 0x5a90e
	ldrb r0, [r6, #0]	@ 0005a90e 3078
.org 0x5a910
	cmp r0, #1	@ 0005a910 0128
.org 0x5a912
	beq.n 0x5a928	@ 0005a912 09d0
.org 0x5a914
	adds r0, r4, #0	@ 0005a914 201c
.org 0x5a916
	movs r1, #0	@ 0005a916 0021
.org 0x5a918
	bl 0x95120	@ 0005a918 3af002fc
.org 0x5a91c
	str r0, [r5, #0]	@ 0005a91c 2860
.org 0x5a91e
	movs r1, #255	@ 0005a91e ff21
.org 0x5a920
	cmp r0, #0	@ 0005a920 0028
.org 0x5a922
	beq.n 0x5a926	@ 0005a922 00d0
.org 0x5a924
	movs r1, #1	@ 0005a924 0121
.org 0x5a926
	strb r1, [r6, #0]	@ 0005a926 3170
.org 0x5a928
	adds r0, r4, #0	@ 0005a928 201c
.org 0x5a92a
	adds r0, #116	@ 0005a92a 7430
.org 0x5a92c
	ldr r1, [pc, #92]	@ 0005a92c 1749
.org 0x5a92e
	bl 0x5784	@ 0005a92e aaf729ff
.org 0x5a932
	ldr r1, [pc, #92]	@ 0005a932 1749
.org 0x5a934
	adds r0, r4, #0	@ 0005a934 201c
.org 0x5a936
	bl 0x1cf00	@ 0005a936 c2f7e3fa
.org 0x5a93a
	adds r1, r4, #0	@ 0005a93a 211c
.org 0x5a93c
	adds r1, #189	@ 0005a93c bd31
.org 0x5a93e
	movs r0, #1	@ 0005a93e 0120
.org 0x5a940
	strb r0, [r1, #0]	@ 0005a940 0870
.org 0x5a942
	movs r0, #48	@ 0005a942 3020
.org 0x5a944
	strb r0, [r4, #18]	@ 0005a944 a074
.org 0x5a946
	ldrb r0, [r4, #15]	@ 0005a946 e07b
.org 0x5a948
	adds r0, #1	@ 0005a948 0130
.org 0x5a94a
	strb r0, [r4, #15]	@ 0005a94a e073
.org 0x5a94c
	adds r0, r4, #0	@ 0005a94c 201c
.org 0x5a94e
	bl 0x1cff0	@ 0005a94e c2f74ffb
.org 0x5a952
	ldrb r0, [r4, #18]	@ 0005a952 a07c
.org 0x5a954
	cmp r0, #0	@ 0005a954 0028
.org 0x5a956
	beq.n 0x5a962	@ 0005a956 04d0
.org 0x5a958
	subs r0, #1	@ 0005a958 0138
.org 0x5a95a
	strb r0, [r4, #18]	@ 0005a95a a074
.org 0x5a95c
	lsls r0, r0, #24	@ 0005a95c 0006
.org 0x5a95e
	cmp r0, #0	@ 0005a95e 0028
.org 0x5a960
	bne.n 0x5a974	@ 0005a960 08d1
.org 0x5a962
	adds r0, r4, #0	@ 0005a962 201c
.org 0x5a964
	adds r0, #115	@ 0005a964 7330
.org 0x5a966
	ldrb r0, [r0, #0]	@ 0005a966 0078
.org 0x5a968
	cmp r0, #3	@ 0005a968 0328
.org 0x5a96a
	bne.n 0x5a974	@ 0005a96a 03d1
.org 0x5a96c
	movs r1, #0	@ 0005a96c 0021
.org 0x5a96e
	movs r0, #1	@ 0005a96e 0120
.org 0x5a970
	strb r0, [r4, #14]	@ 0005a970 a073
.org 0x5a972
	strb r1, [r4, #15]	@ 0005a972 e173
.org 0x5a974
	pop {r4, r5, r6}	@ 0005a974 70bc
.org 0x5a976
	pop {r0}	@ 0005a976 01bc
.org 0x5a978
	bx r0	@ 0005a978 0047
