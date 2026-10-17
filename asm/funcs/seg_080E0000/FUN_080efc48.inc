@ FUN_080efc48  entry 0x080efc48  size 230
.thumb
.org 0xefc48
FUN_080efc48:
	push {r4, r5, lr}	@ 000efc48 30b5
.org 0xefc4a
	adds r5, r0, #0	@ 000efc4a 051c
.org 0xefc4c
	ldrb r0, [r5, #17]	@ 000efc4c 687c
.org 0xefc4e
	cmp r0, #1	@ 000efc4e 0128
.org 0xefc50
	beq.n 0xefcc8	@ 000efc50 3ad0
.org 0xefc52
	cmp r0, #1	@ 000efc52 0128
.org 0xefc54
	bgt.n 0xefc5c	@ 000efc54 02dc
.org 0xefc56
	cmp r0, #0	@ 000efc56 0028
.org 0xefc58
	beq.n 0xefc66	@ 000efc58 05d0
.org 0xefc5a
	b.n 0xefd3a	@ 000efc5a 6ee0
.org 0xefc5c
	cmp r0, #2	@ 000efc5c 0228
.org 0xefc5e
	beq.n 0xefd10	@ 000efc5e 57d0
.org 0xefc60
	cmp r0, #3	@ 000efc60 0328
.org 0xefc62
	beq.n 0xefd30	@ 000efc62 65d0
.org 0xefc64
	b.n 0xefd3a	@ 000efc64 69e0
.org 0xefc66
	ldr r1, [pc, #148]	@ 000efc66 2549
.org 0xefc68
	adds r1, #246	@ 000efc68 f631
.org 0xefc6a
	ldr r0, [pc, #148]	@ 000efc6a 2548
.org 0xefc6c
	strh r0, [r1, #0]	@ 000efc6c 0880
.org 0xefc6e
	ldr r4, [pc, #148]	@ 000efc6e 254c
.org 0xefc70
	adds r4, #246	@ 000efc70 f634
.org 0xefc72
	movs r0, #6	@ 000efc72 0620
.org 0xefc74
	strh r0, [r4, #0]	@ 000efc74 2080
.org 0xefc76
	ldr r0, [pc, #144]	@ 000efc76 2448
.org 0xefc78
	ldrh r1, [r1, #0]	@ 000efc78 0988
.org 0xefc7a
	ldrh r2, [r0, #6]	@ 000efc7a c288
.org 0xefc7c
	lsrs r2, r2, #6	@ 000efc7c 9209
.org 0xefc7e
	subs r1, r1, r2	@ 000efc7e 891a
.org 0xefc80
	lsls r1, r1, #5	@ 000efc80 4901
.org 0xefc82
	movs r2, #128	@ 000efc82 8022
.org 0xefc84
	lsls r2, r2, #9	@ 000efc84 5202
.org 0xefc86
	adds r1, r1, r2	@ 000efc86 8918
.org 0xefc88
	bl 0x1d30	@ 000efc88 12f752f8
.org 0xefc8c
	ldr r0, [pc, #124]	@ 000efc8c 1f48
.org 0xefc8e
	ldrh r1, [r4, #0]	@ 000efc8e 2188
.org 0xefc90
	ldrb r2, [r0, #7]	@ 000efc90 c279
.org 0xefc92
	subs r1, r1, r2	@ 000efc92 891a
.org 0xefc94
	lsls r1, r1, #5	@ 000efc94 4901
.org 0xefc96
	movs r2, #128	@ 000efc96 8022
.org 0xefc98
	lsls r2, r2, #2	@ 000efc98 9200
.org 0xefc9a
	adds r1, r1, r2	@ 000efc9a 8918
.org 0xefc9c
	bl 0x2208	@ 000efc9c 12f7b4fa
.org 0xefca0
	movs r1, #246	@ 000efca0 f621
.org 0xefca2
	lsls r1, r1, #7	@ 000efca2 c901
.org 0xefca4
	adds r0, r5, #0	@ 000efca4 281c
.org 0xefca6
	bl 0x1cf00	@ 000efca6 2df72bf9
.org 0xefcaa
	adds r2, r5, #0	@ 000efcaa 2a1c
.org 0xefcac
	adds r2, #73	@ 000efcac 4932
.org 0xefcae
	ldrb r1, [r2, #0]	@ 000efcae 1178
.org 0xefcb0
	movs r0, #13	@ 000efcb0 0d20
.org 0xefcb2
	negs r0, r0	@ 000efcb2 4042
.org 0xefcb4
	ands r0, r1	@ 000efcb4 0840
.org 0xefcb6
	strb r0, [r2, #0]	@ 000efcb6 1070
.org 0xefcb8
	ldr r0, [r5, #84]	@ 000efcb8 686d
.org 0xefcba
	ldr r1, [r5, #88]	@ 000efcba a96d
.org 0xefcbc
	bl 0x8534	@ 000efcbc 18f73afc
.org 0xefcc0
	str r0, [r5, #88]	@ 000efcc0 a865
.org 0xefcc2
	ldrb r0, [r5, #17]	@ 000efcc2 687c
.org 0xefcc4
	adds r0, #1	@ 000efcc4 0130
.org 0xefcc6
	strb r0, [r5, #17]	@ 000efcc6 6874
.org 0xefcc8
	ldr r0, [r5, #24]	@ 000efcc8 a869
.org 0xefcca
	ldrb r1, [r0, #9]	@ 000efcca 417a
.org 0xefccc
	movs r2, #1	@ 000efccc 0122
.org 0xefcce
	adds r0, r2, #0	@ 000efcce 101c
.org 0xefcd0
	ands r0, r1	@ 000efcd0 0840
.org 0xefcd2
	cmp r0, #0	@ 000efcd2 0028
.org 0xefcd4
	beq.n 0xefd3a	@ 000efcd4 31d0
.org 0xefcd6
	movs r0, #8	@ 000efcd6 0820
.org 0xefcd8
	strb r0, [r5, #18]	@ 000efcd8 a874
.org 0xefcda
	ldrb r1, [r5, #10]	@ 000efcda a97a
.org 0xefcdc
	movs r0, #16	@ 000efcdc 1020
.org 0xefcde
	orrs r0, r1	@ 000efcde 0843
.org 0xefce0
	strb r0, [r5, #10]	@ 000efce0 a872
.org 0xefce2
	adds r0, r5, #0	@ 000efce2 281c
.org 0xefce4
	adds r0, #76	@ 000efce4 4c30
.org 0xefce6
	strb r2, [r0, #0]	@ 000efce6 0270
.org 0xefce8
	adds r3, r5, #0	@ 000efce8 2b1c
.org 0xefcea
	adds r3, #74	@ 000efcea 4a33
.org 0xefcec
	movs r2, #16	@ 000efcec 1022
.org 0xefcee
	ldrb r1, [r3, #0]	@ 000efcee 1978
.org 0xefcf0
	movs r0, #17	@ 000efcf0 1120
.org 0xefcf2
	negs r0, r0	@ 000efcf2 4042
.org 0xefcf4
	ands r0, r1	@ 000efcf4 0840
.org 0xefcf6
	orrs r0, r2	@ 000efcf6 1043
.org 0xefcf8
	strb r0, [r3, #0]	@ 000efcf8 1870
.org 0xefcfa
	b.n 0xefd24	@ 000efcfa 13e0
.org 0xefcfc
	.byte 0x40,0xe0,0x02,0x02	@ 000efcfc data
.org 0xefd00
	.byte 0x6a,0x02,0x00,0x00	@ 000efd00 data
.org 0xefd04
	.byte 0x40,0xde,0x02,0x02	@ 000efd04 data
.org 0xefd08
	.byte 0x9c,0x49,0xc4,0x08	@ 000efd08 data
.org 0xefd0c
	.byte 0xa8,0x49,0xc4,0x08	@ 000efd0c data
.org 0xefd10
	ldrb r0, [r5, #18]	@ 000efd10 a87c
.org 0xefd12
	subs r0, #1	@ 000efd12 0138
.org 0xefd14
	strb r0, [r5, #18]	@ 000efd14 a874
.org 0xefd16
	lsls r0, r0, #24	@ 000efd16 0006
.org 0xefd18
	cmp r0, #0	@ 000efd18 0028
.org 0xefd1a
	bne.n 0xefd3a	@ 000efd1a 0ed1
.org 0xefd1c
	ldr r1, [pc, #12]	@ 000efd1c 0349
.org 0xefd1e
	adds r0, r5, #0	@ 000efd1e 281c
.org 0xefd20
	bl 0x1cf00	@ 000efd20 2df7eef8
.org 0xefd24
	ldrb r0, [r5, #17]	@ 000efd24 687c
.org 0xefd26
	adds r0, #1	@ 000efd26 0130
.org 0xefd28
	strb r0, [r5, #17]	@ 000efd28 6874
.org 0xefd2a
	b.n 0xefd3a	@ 000efd2a 06e0
.org 0xefd2c
	.byte 0x01,0x7b,0x00,0x00	@ 000efd2c data
