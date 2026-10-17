@ FUN_0801192c  entry 0x0801192c  size 138
.thumb
.org 0x1192c
FUN_0801192c:
	push {r4, lr}	@ 0001192c 10b5
.org 0x1192e
	adds r3, r0, #0	@ 0001192e 031c
.org 0x11930
	adds r2, r3, #0	@ 00011930 1a1c
.org 0x11932
	adds r2, #104	@ 00011932 6832
.org 0x11934
	ldrh r0, [r2, #0]	@ 00011934 1088
.org 0x11936
	subs r0, #1	@ 00011936 0138
.org 0x11938
	strh r0, [r2, #0]	@ 00011938 1080
.org 0x1193a
	lsls r0, r0, #16	@ 0001193a 0004
.org 0x1193c
	lsrs r0, r0, #16	@ 0001193c 000c
.org 0x1193e
	cmp r0, #63	@ 0001193e 3f28
.org 0x11940
	bhi.n 0x11968	@ 00011940 12d8
.org 0x11942
	adds r1, r3, #0	@ 00011942 191c
.org 0x11944
	adds r1, #106	@ 00011944 6a31
.org 0x11946
	ldrh r0, [r1, #0]	@ 00011946 0888
.org 0x11948
	subs r0, #4	@ 00011948 0438
.org 0x1194a
	strh r0, [r1, #0]	@ 0001194a 0880
.org 0x1194c
	ldrh r0, [r2, #0]	@ 0001194c 1088
.org 0x1194e
	cmp r0, #0	@ 0001194e 0028
.org 0x11950
	bne.n 0x1197a	@ 00011950 13d1
.org 0x11952
	ldr r0, [pc, #12]	@ 00011952 0348
.org 0x11954
	ldr r1, [pc, #12]	@ 00011954 0349
.org 0x11956
	adds r0, r0, r1	@ 00011956 4018
.org 0x11958
	movs r1, #4	@ 00011958 0421
.org 0x1195a
	strb r1, [r0, #0]	@ 0001195a 0170
.org 0x1195c
	b.n 0x1197a	@ 0001195c 0de0
.org 0x1195e
	.byte 0x00	@ 0001195e data
.org 0x1195f
	.byte 0x00	@ 0001195f data
.org 0x11960
	.byte 0xb0,0x0a,0x00,0x02	@ 00011960 data
.org 0x11964
	.byte 0x24,0xd0,0x02,0x00	@ 00011964 data
.org 0x11968
	adds r1, r3, #0	@ 00011968 191c
.org 0x1196a
	adds r1, #106	@ 0001196a 6a31
.org 0x1196c
	ldrh r2, [r1, #0]	@ 0001196c 0a88
.org 0x1196e
	movs r4, #0	@ 0001196e 0024
.org 0x11970
	ldrsh r0, [r1, r4]	@ 00011970 085f
.org 0x11972
	cmp r0, #255	@ 00011972 ff28
.org 0x11974
	bgt.n 0x1197a	@ 00011974 01dc
.org 0x11976
	adds r0, r2, #4	@ 00011976 101d
.org 0x11978
	strh r0, [r1, #0]	@ 00011978 0880
.org 0x1197a
	adds r0, r3, #0	@ 0001197a 181c
.org 0x1197c
	adds r0, #104	@ 0001197c 6830
.org 0x1197e
	ldrh r0, [r0, #0]	@ 0001197e 0088
.org 0x11980
	cmp r0, #3	@ 00011980 0328
.org 0x11982
	bhi.n 0x119a0	@ 00011982 0dd8
.org 0x11984
	ldrh r0, [r3, #18]	@ 00011984 588a
.org 0x11986
	subs r0, #1	@ 00011986 0138
.org 0x11988
	strh r0, [r3, #18]	@ 00011988 5882
.org 0x1198a
	ldr r2, [pc, #16]	@ 0001198a 044a
.org 0x1198c
	lsls r0, r0, #16	@ 0001198c 0004
.org 0x1198e
	lsrs r0, r0, #17	@ 0001198e 400c
.org 0x11990
	movs r1, #31	@ 00011990 1f21
.org 0x11992
	ands r0, r1	@ 00011992 0840
.org 0x11994
	movs r3, #128	@ 00011994 8023
.org 0x11996
	lsls r3, r3, #5	@ 00011996 5b01
.org 0x11998
	adds r1, r3, #0	@ 00011998 191c
.org 0x1199a
	b.n 0x119ba	@ 0001199a 0ee0
.org 0x1199c
	.byte 0x40,0x0a,0x00,0x02	@ 0001199c data
.org 0x119a0
	ldrh r0, [r3, #18]	@ 000119a0 588a
.org 0x119a2
	cmp r0, #7	@ 000119a2 0728
.org 0x119a4
	bhi.n 0x119be	@ 000119a4 0bd8
.org 0x119a6
	adds r0, #1	@ 000119a6 0130
.org 0x119a8
	strh r0, [r3, #18]	@ 000119a8 5882
.org 0x119aa
	ldr r2, [pc, #24]	@ 000119aa 064a
.org 0x119ac
	lsls r0, r0, #16	@ 000119ac 0004
.org 0x119ae
	lsrs r0, r0, #17	@ 000119ae 400c
.org 0x119b0
	movs r1, #31	@ 000119b0 1f21
.org 0x119b2
	ands r0, r1	@ 000119b2 0840
.org 0x119b4
	movs r4, #128	@ 000119b4 8024
