@ FUN_080bf90c  entry 0x080bf90c  size 106
.thumb
.org 0xbf90c
FUN_080bf90c:
	push {r4, lr}	@ 000bf90c 10b5
.org 0xbf90e
	adds r4, r0, #0	@ 000bf90e 041c
.org 0xbf910
	ldrb r1, [r4, #15]	@ 000bf910 e17b
.org 0xbf912
	cmp r1, #0	@ 000bf912 0029
.org 0xbf914
	bne.n 0xbf91e	@ 000bf914 03d1
.org 0xbf916
	movs r0, #32	@ 000bf916 2020
.org 0xbf918
	strb r0, [r4, #18]	@ 000bf918 a074
.org 0xbf91a
	adds r0, r1, #1	@ 000bf91a 481c
.org 0xbf91c
	strb r0, [r4, #15]	@ 000bf91c e073
.org 0xbf91e
	adds r0, r4, #0	@ 000bf91e 201c
.org 0xbf920
	bl 0x1cff0	@ 000bf920 5df766fb
.org 0xbf924
	ldrb r0, [r4, #18]	@ 000bf924 a07c
.org 0xbf926
	subs r0, #1	@ 000bf926 0138
.org 0xbf928
	strb r0, [r4, #18]	@ 000bf928 a074
.org 0xbf92a
	ldrb r0, [r4, #18]	@ 000bf92a a07c
.org 0xbf92c
	lsls r0, r0, #1	@ 000bf92c 4000
.org 0xbf92e
	movs r2, #128	@ 000bf92e 8022
.org 0xbf930
	ldr r1, [pc, #68]	@ 000bf930 1149
.org 0xbf932
	subs r0, r2, r0	@ 000bf932 101a
.org 0xbf934
	lsls r0, r0, #24	@ 000bf934 0006
.org 0xbf936
	lsrs r0, r0, #23	@ 000bf936 c00d
.org 0xbf938
	adds r0, r0, r1	@ 000bf938 4018
.org 0xbf93a
	movs r2, #0	@ 000bf93a 0022
.org 0xbf93c
	ldrsh r1, [r0, r2]	@ 000bf93c 815e
.org 0xbf93e
	movs r0, #128	@ 000bf93e 8020
.org 0xbf940
	lsls r0, r0, #1	@ 000bf940 4000
.org 0xbf942
	subs r2, r0, r1	@ 000bf942 421a
.org 0xbf944
	adds r0, r4, #0	@ 000bf944 201c
.org 0xbf946
	adds r0, #80	@ 000bf946 5030
.org 0xbf948
	movs r3, #0	@ 000bf948 0023
.org 0xbf94a
	strh r2, [r0, #0]	@ 000bf94a 0280
.org 0xbf94c
	adds r1, r4, #0	@ 000bf94c 211c
.org 0xbf94e
	adds r1, #180	@ 000bf94e b431
.org 0xbf950
	lsls r0, r2, #13	@ 000bf950 5003
.org 0xbf952
	negs r0, r0	@ 000bf952 4042
.org 0xbf954
	cmp r0, #0	@ 000bf954 0028
.org 0xbf956
	bge.n 0xbf95a	@ 000bf956 00da
.org 0xbf958
	adds r0, #255	@ 000bf958 ff30
.org 0xbf95a
	asrs r0, r0, #8	@ 000bf95a 0012
.org 0xbf95c
	ldr r1, [r1, #0]	@ 000bf95c 0968
.org 0xbf95e
	adds r1, r1, r0	@ 000bf95e 0918
.org 0xbf960
	str r1, [r4, #84]	@ 000bf960 6165
.org 0xbf962
	ldrb r0, [r4, #18]	@ 000bf962 a07c
.org 0xbf964
	cmp r0, #0	@ 000bf964 0028
.org 0xbf966
	bne.n 0xbf970	@ 000bf966 03d1
.org 0xbf968
	movs r0, #1	@ 000bf968 0120
.org 0xbf96a
	strb r0, [r4, #13]	@ 000bf96a 6073
.org 0xbf96c
	strb r3, [r4, #14]	@ 000bf96c a373
.org 0xbf96e
	strb r3, [r4, #15]	@ 000bf96e e373
.org 0xbf970
	pop {r4}	@ 000bf970 10bc
.org 0xbf972
	pop {r0}	@ 000bf972 01bc
.org 0xbf974
	bx r0	@ 000bf974 0047
