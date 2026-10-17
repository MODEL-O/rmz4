@ FUN_080df924  entry 0x080df924  size 162
.thumb
.org 0xdf924
FUN_080df924:
	push {r4, r5, r6, r7, lr}	@ 000df924 f0b5
.org 0xdf926
	mov r7, sl	@ 000df926 5746
.org 0xdf928
	mov r6, r9	@ 000df928 4e46
.org 0xdf92a
	mov r5, r8	@ 000df92a 4546
.org 0xdf92c
	push {r5, r6, r7}	@ 000df92c e0b4
.org 0xdf92e
	mov sl, r0	@ 000df92e 8246
.org 0xdf930
	lsls r1, r1, #24	@ 000df930 0906
.org 0xdf932
	lsrs r1, r1, #24	@ 000df932 090e
.org 0xdf934
	mov r9, r1	@ 000df934 8946
.org 0xdf936
	movs r4, #0	@ 000df936 0024
.org 0xdf938
	ldr r0, [pc, #20]	@ 000df938 0548
.org 0xdf93a
	ldr r0, [r0, #0]	@ 000df93a 0068
.org 0xdf93c
	ldrh r1, [r0, #10]	@ 000df93c 4189
.org 0xdf93e
	movs r2, #10	@ 000df93e 0a22
.org 0xdf940
	ldrsh r0, [r0, r2]	@ 000df940 805e
.org 0xdf942
	cmp r0, #4	@ 000df942 0428
.org 0xdf944
	bgt.n 0xdf954	@ 000df944 06dc
.org 0xdf946
	subs r0, r1, #1	@ 000df946 481e
.org 0xdf948
	lsls r0, r0, #24	@ 000df948 0006
.org 0xdf94a
	lsrs r6, r0, #24	@ 000df94a 060e
.org 0xdf94c
	b.n 0xdf956	@ 000df94c 03e0
.org 0xdf94e
	.byte 0x00	@ 000df94e data
.org 0xdf94f
	.byte 0x00	@ 000df94f data
.org 0xdf950
	.byte 0x9c,0xed,0x02,0x02	@ 000df950 data
.org 0xdf954
	movs r6, #5	@ 000df954 0526
.org 0xdf956
	movs r5, #0	@ 000df956 0025
.org 0xdf958
	cmp r5, r6	@ 000df958 b542
.org 0xdf95a
	bcs.n 0xdf9bc	@ 000df95a 2fd2
.org 0xdf95c
	movs r7, #0	@ 000df95c 0027
.org 0xdf95e
	movs r0, #1	@ 000df95e 0120
.org 0xdf960
	mov r8, r0	@ 000df960 8046
.org 0xdf962
	ldr r0, [pc, #104]	@ 000df962 1a48
.org 0xdf964
	ldr r0, [r0, #0]	@ 000df964 0068
.org 0xdf966
	bl 0x5500	@ 000df966 25f7cbfd
.org 0xdf96a
	adds r4, r0, #0	@ 000df96a 041c
.org 0xdf96c
	cmp r4, #0	@ 000df96c 002c
.org 0xdf96e
	beq.n 0xdf9b2	@ 000df96e 20d0
.org 0xdf970
	adds r0, #37	@ 000df970 2530
.org 0xdf972
	mov r1, r8	@ 000df972 4146
.org 0xdf974
	strb r1, [r0, #0]	@ 000df974 0170
.org 0xdf976
	movs r0, #53	@ 000df976 3520
.org 0xdf978
	strb r0, [r4, #9]	@ 000df978 6072
.org 0xdf97a
	ldr r2, [pc, #84]	@ 000df97a 154a
.org 0xdf97c
	ldr r0, [r2, #0]	@ 000df97c 1068
.org 0xdf97e
	ldr r0, [r0, #0]	@ 000df97e 0068
.org 0xdf980
	str r0, [r4, #20]	@ 000df980 6061
.org 0xdf982
	strh r7, [r4, #32]	@ 000df982 2784
.org 0xdf984
	adds r0, r4, #0	@ 000df984 201c
.org 0xdf986
	adds r0, #34	@ 000df986 2230
.org 0xdf988
	strb r7, [r0, #0]	@ 000df988 0770
.org 0xdf98a
	mov r2, sl	@ 000df98a 5246
.org 0xdf98c
	ldr r0, [r2, #0]	@ 000df98c 1068
.org 0xdf98e
	ldr r1, [r2, #4]	@ 000df98e 5168
.org 0xdf990
	str r0, [r4, #84]	@ 000df990 6065
.org 0xdf992
	str r1, [r4, #88]	@ 000df992 a165
.org 0xdf994
	mov r0, r8	@ 000df994 4046
.org 0xdf996
	strb r0, [r4, #16]	@ 000df996 2074
.org 0xdf998
	mov r1, r9	@ 000df998 4946
.org 0xdf99a
	strb r1, [r4, #17]	@ 000df99a 6174
.org 0xdf99c
	adds r0, r4, #0	@ 000df99c 201c
.org 0xdf99e
	adds r0, #119	@ 000df99e 7730
.org 0xdf9a0
	strb r7, [r0, #0]	@ 000df9a0 0770
.org 0xdf9a2
	lsls r0, r5, #8	@ 000df9a2 2802
.org 0xdf9a4
	adds r1, r6, #0	@ 000df9a4 311c
.org 0xdf9a6
	bl 0x128fb8	@ 000df9a6 49f007fb
.org 0xdf9aa
	subs r0, #64	@ 000df9aa 4038
.org 0xdf9ac
	adds r1, r4, #0	@ 000df9ac 211c
.org 0xdf9ae
	adds r1, #117	@ 000df9ae 7531
.org 0xdf9b0
	strb r0, [r1, #0]	@ 000df9b0 0870
.org 0xdf9b2
	adds r0, r5, #1	@ 000df9b2 681c
.org 0xdf9b4
	lsls r0, r0, #24	@ 000df9b4 0006
.org 0xdf9b6
	lsrs r5, r0, #24	@ 000df9b6 050e
.org 0xdf9b8
	cmp r5, r6	@ 000df9b8 b542
.org 0xdf9ba
	bcc.n 0xdf962	@ 000df9ba d2d3
.org 0xdf9bc
	adds r0, r4, #0	@ 000df9bc 201c
.org 0xdf9be
	pop {r3, r4, r5}	@ 000df9be 38bc
.org 0xdf9c0
	mov r8, r3	@ 000df9c0 9846
.org 0xdf9c2
	mov r9, r4	@ 000df9c2 a146
.org 0xdf9c4
	mov sl, r5	@ 000df9c4 aa46
