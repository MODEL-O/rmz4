@ FUN_08031970  entry 0x08031970  size 110
.thumb
.org 0x31970
FUN_08031970:
	push {r4, r5, lr}	@ 00031970 30b5
.org 0x31972
	adds r5, r0, #0	@ 00031972 051c
.org 0x31974
	movs r1, #161	@ 00031974 a121
.org 0x31976
	lsls r1, r1, #1	@ 00031976 4900
.org 0x31978
	adds r0, r5, r1	@ 00031978 6818
.org 0x3197a
	ldrb r1, [r0, #0]	@ 0003197a 0178
.org 0x3197c
	movs r0, #2	@ 0003197c 0220
.org 0x3197e
	ands r0, r1	@ 0003197e 0840
.org 0x31980
	cmp r0, #0	@ 00031980 0028
.org 0x31982
	bne.n 0x319a4	@ 00031982 0fd1
.org 0x31984
	ldrb r0, [r5, #30]	@ 00031984 a87f
.org 0x31986
	lsls r0, r0, #8	@ 00031986 0002
.org 0x31988
	adds r1, r5, #0	@ 00031988 291c
.org 0x3198a
	adds r1, #112	@ 0003198a 7031
.org 0x3198c
	ldrb r1, [r1, #0]	@ 0003198c 0978
.org 0x3198e
	orrs r1, r0	@ 0003198e 0143
.org 0x31990
	ldr r2, [pc, #12]	@ 00031990 034a
.org 0x31992
	cmp r1, r2	@ 00031992 9142
.org 0x31994
	beq.n 0x319ac	@ 00031994 0ad0
.org 0x31996
	adds r0, r5, #0	@ 00031996 281c
.org 0x31998
	adds r1, r2, #0	@ 00031998 111c
.org 0x3199a
	bl 0x1cf00	@ 0003199a ebf7b1fa
.org 0x3199e
	b.n 0x319ac	@ 0003199e 05e0
.org 0x319a0
	.byte 0x04,0x04,0x00,0x00	@ 000319a0 data
.org 0x319a4
	ldr r1, [pc, #60]	@ 000319a4 0f49
.org 0x319a6
	adds r0, r5, #0	@ 000319a6 281c
.org 0x319a8
	bl 0x1cf00	@ 000319a8 ebf7aafa
.org 0x319ac
	ldr r4, [r5, #92]	@ 000319ac ec6d
.org 0x319ae
	cmp r4, #0	@ 000319ae 002c
.org 0x319b0
	bge.n 0x319b4	@ 000319b0 00da
.org 0x319b2
	negs r4, r4	@ 000319b2 6442
.org 0x319b4
	adds r0, r5, #0	@ 000319b4 281c
.org 0x319b6
	bl 0x386d4	@ 000319b6 06f08dfe
.org 0x319ba
	lsls r0, r0, #16	@ 000319ba 0004
.org 0x319bc
	asrs r0, r0, #16	@ 000319bc 0014
.org 0x319be
	cmp r4, r0	@ 000319be 8442
.org 0x319c0
	bge.n 0x319ce	@ 000319c0 05da
.org 0x319c2
	adds r0, r5, #0	@ 000319c2 281c
.org 0x319c4
	bl 0x386d4	@ 000319c4 06f086fe
.org 0x319c8
	lsls r0, r0, #16	@ 000319c8 0004
.org 0x319ca
	asrs r0, r0, #16	@ 000319ca 0014
.org 0x319cc
	str r0, [r5, #92]	@ 000319cc e865
.org 0x319ce
	movs r0, #0	@ 000319ce 0020
.org 0x319d0
	str r0, [r5, #96]	@ 000319d0 2866
.org 0x319d2
	movs r0, #1	@ 000319d2 0120
.org 0x319d4
	strb r0, [r5, #15]	@ 000319d4 e873
.org 0x319d6
	adds r0, r5, #0	@ 000319d6 281c
.org 0x319d8
	bl 0x319e8	@ 000319d8 00f006f8
.org 0x319dc
	pop {r4, r5}	@ 000319dc 30bc
