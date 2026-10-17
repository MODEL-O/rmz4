@ FUN_080bd94c  entry 0x080bd94c  size 82
.thumb
.org 0xbd94c
FUN_080bd94c:
	push {r4, r5, r6, r7, lr}	@ 000bd94c f0b5
.org 0xbd94e
	adds r6, r0, #0	@ 000bd94e 061c
.org 0xbd950
	adds r7, r1, #0	@ 000bd950 0f1c
.org 0xbd952
	lsls r2, r2, #24	@ 000bd952 1206
.org 0xbd954
	lsrs r5, r2, #24	@ 000bd954 150e
.org 0xbd956
	lsls r3, r3, #24	@ 000bd956 1b06
.org 0xbd958
	lsrs r4, r3, #24	@ 000bd958 1c0e
.org 0xbd95a
	ldr r0, [pc, #68]	@ 000bd95a 1148
.org 0xbd95c
	ldr r0, [r0, #0]	@ 000bd95c 0068
.org 0xbd95e
	bl 0x5500	@ 000bd95e 47f7cffd
.org 0xbd962
	adds r3, r0, #0	@ 000bd962 031c
.org 0xbd964
	cmp r3, #0	@ 000bd964 002b
.org 0xbd966
	beq.n 0xbd996	@ 000bd966 16d0
.org 0xbd968
	adds r1, r3, #0	@ 000bd968 191c
.org 0xbd96a
	adds r1, #37	@ 000bd96a 2531
.org 0xbd96c
	movs r2, #0	@ 000bd96c 0022
.org 0xbd96e
	movs r0, #8	@ 000bd96e 0820
.org 0xbd970
	strb r0, [r1, #0]	@ 000bd970 0870
.org 0xbd972
	ldr r1, [pc, #48]	@ 000bd972 0c49
.org 0xbd974
	movs r0, #1	@ 000bd974 0120
.org 0xbd976
	strb r0, [r3, #9]	@ 000bd976 5872
.org 0xbd978
	ldr r0, [r1, #4]	@ 000bd978 4868
.org 0xbd97a
	ldr r0, [r0, #0]	@ 000bd97a 0068
.org 0xbd97c
	str r0, [r3, #20]	@ 000bd97c 5861
.org 0xbd97e
	movs r0, #0	@ 000bd97e 0020
.org 0xbd980
	strh r2, [r3, #32]	@ 000bd980 1a84
.org 0xbd982
	adds r1, r3, #0	@ 000bd982 191c
.org 0xbd984
	adds r1, #34	@ 000bd984 2231
.org 0xbd986
	strb r0, [r1, #0]	@ 000bd986 0870
.org 0xbd988
	str r6, [r3, #40]	@ 000bd988 9e62
.org 0xbd98a
	ldr r0, [r7, #0]	@ 000bd98a 3868
.org 0xbd98c
	ldr r1, [r7, #4]	@ 000bd98c 7968
.org 0xbd98e
	str r0, [r3, #84]	@ 000bd98e 5865
.org 0xbd990
	str r1, [r3, #88]	@ 000bd990 9965
.org 0xbd992
	strb r5, [r3, #16]	@ 000bd992 1d74
.org 0xbd994
	strb r4, [r3, #17]	@ 000bd994 5c74
.org 0xbd996
	adds r0, r3, #0	@ 000bd996 181c
.org 0xbd998
	pop {r4, r5, r6, r7}	@ 000bd998 f0bc
.org 0xbd99a
	pop {r1}	@ 000bd99a 02bc
.org 0xbd99c
	bx r1	@ 000bd99c 0847
