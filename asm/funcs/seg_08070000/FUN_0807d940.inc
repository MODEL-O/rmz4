@ FUN_0807d940  entry 0x0807d940  size 128
.thumb
.org 0x7d940
FUN_0807d940:
	push {r4, r5, lr}	@ 0007d940 30b5
.org 0x7d942
	adds r4, r0, #0	@ 0007d942 041c
.org 0x7d944
	ldrb r0, [r4, #15]	@ 0007d944 e07b
.org 0x7d946
	cmp r0, #0	@ 0007d946 0028
.org 0x7d948
	bne.n 0x7d95c	@ 0007d948 08d1
.org 0x7d94a
	adds r0, r4, #0	@ 0007d94a 201c
.org 0x7d94c
	movs r1, #18	@ 0007d94c 1221
.org 0x7d94e
	bl 0x7e8c8	@ 0007d94e 00f0bbff
.org 0x7d952
	movs r0, #24	@ 0007d952 1820
.org 0x7d954
	strb r0, [r4, #18]	@ 0007d954 a074
.org 0x7d956
	ldrb r0, [r4, #15]	@ 0007d956 e07b
.org 0x7d958
	adds r0, #1	@ 0007d958 0130
.org 0x7d95a
	strb r0, [r4, #15]	@ 0007d95a e073
.org 0x7d95c
	adds r5, r4, #0	@ 0007d95c 251c
.org 0x7d95e
	adds r5, #188	@ 0007d95e bc35
.org 0x7d960
	ldrb r0, [r5, #0]	@ 0007d960 2878
.org 0x7d962
	cmp r0, #0	@ 0007d962 0028
.org 0x7d964
	beq.n 0x7d96c	@ 0007d964 02d0
.org 0x7d966
	adds r0, r4, #0	@ 0007d966 201c
.org 0x7d968
	bl 0x1cff0	@ 0007d968 9ff742fb
.org 0x7d96c
	adds r0, r4, #0	@ 0007d96c 201c
.org 0x7d96e
	adds r0, #116	@ 0007d96e 7430
.org 0x7d970
	ldr r3, [pc, #76]	@ 0007d970 134b
.org 0x7d972
	ldr r2, [pc, #80]	@ 0007d972 144a
.org 0x7d974
	ldrb r1, [r5, #0]	@ 0007d974 2978
.org 0x7d976
	lsls r1, r1, #1	@ 0007d976 4900
.org 0x7d978
	adds r1, r1, r2	@ 0007d978 8918
.org 0x7d97a
	ldrh r2, [r1, #0]	@ 0007d97a 0a88
.org 0x7d97c
	lsls r2, r2, #2	@ 0007d97c 9200
.org 0x7d97e
	adds r2, r2, r3	@ 0007d97e d218
.org 0x7d980
	adds r1, r4, #0	@ 0007d980 211c
.org 0x7d982
	adds r1, #113	@ 0007d982 7131
.org 0x7d984
	ldrb r1, [r1, #0]	@ 0007d984 0978
.org 0x7d986
	lsls r1, r1, #24	@ 0007d986 0906
.org 0x7d988
	asrs r1, r1, #24	@ 0007d988 0916
.org 0x7d98a
	ldr r2, [r2, #0]	@ 0007d98a 1268
.org 0x7d98c
	lsls r1, r1, #2	@ 0007d98c 8900
.org 0x7d98e
	adds r1, r1, r2	@ 0007d98e 8918
.org 0x7d990
	ldr r1, [r1, #0]	@ 0007d990 0968
.org 0x7d992
	bl 0x5784	@ 0007d992 87f7f7fe
.org 0x7d996
	ldrb r0, [r4, #18]	@ 0007d996 a07c
.org 0x7d998
	cmp r0, #0	@ 0007d998 0028
.org 0x7d99a
	beq.n 0x7d9a6	@ 0007d99a 04d0
.org 0x7d99c
	subs r0, #1	@ 0007d99c 0138
.org 0x7d99e
	strb r0, [r4, #18]	@ 0007d99e a074
.org 0x7d9a0
	lsls r0, r0, #24	@ 0007d9a0 0006
.org 0x7d9a2
	cmp r0, #0	@ 0007d9a2 0028
.org 0x7d9a4
	bne.n 0x7d9ba	@ 0007d9a4 09d1
.org 0x7d9a6
	adds r0, r4, #0	@ 0007d9a6 201c
.org 0x7d9a8
	adds r0, #115	@ 0007d9a8 7330
.org 0x7d9aa
	ldrb r0, [r0, #0]	@ 0007d9aa 0078
.org 0x7d9ac
	cmp r0, #3	@ 0007d9ac 0328
.org 0x7d9ae
	bne.n 0x7d9ba	@ 0007d9ae 04d1
.org 0x7d9b0
	ldrb r0, [r4, #14]	@ 0007d9b0 a07b
.org 0x7d9b2
	adds r0, #1	@ 0007d9b2 0130
.org 0x7d9b4
	movs r1, #0	@ 0007d9b4 0021
.org 0x7d9b6
	strb r0, [r4, #14]	@ 0007d9b6 a073
.org 0x7d9b8
	strb r1, [r4, #15]	@ 0007d9b8 e173
.org 0x7d9ba
	pop {r4, r5}	@ 0007d9ba 30bc
.org 0x7d9bc
	pop {r0}	@ 0007d9bc 01bc
.org 0x7d9be
	bx r0	@ 0007d9be 0047
