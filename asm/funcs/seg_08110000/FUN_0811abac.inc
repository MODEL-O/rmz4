@ FUN_0811abac  entry 0x0811abac  size 348
.thumb
.org 0x11abac
FUN_0811abac:
	push {r4, r5, r6, r7, lr}	@ 0011abac f0b5
.org 0x11abae
	mov r7, r8	@ 0011abae 4746
.org 0x11abb0
	push {r7}	@ 0011abb0 80b4
.org 0x11abb2
	sub sp, #4	@ 0011abb2 81b0
.org 0x11abb4
	adds r5, r0, #0	@ 0011abb4 051c
.org 0x11abb6
	ldr r0, [pc, #104]	@ 0011abb6 1a48
.org 0x11abb8
	adds r6, r5, r0	@ 0011abb8 2e18
.org 0x11abba
	ldrb r1, [r6, #0]	@ 0011abba 3178
.org 0x11abbc
	cmp r1, #0	@ 0011abbc 0029
.org 0x11abbe
	bne.n 0x11abd0	@ 0011abbe 07d1
.org 0x11abc0
	movs r2, #221	@ 0011abc0 dd22
.org 0x11abc2
	lsls r2, r2, #4	@ 0011abc2 1201
.org 0x11abc4
	adds r0, r5, r2	@ 0011abc4 a818
.org 0x11abc6
	strb r1, [r0, #3]	@ 0011abc6 c170
.org 0x11abc8
	strb r1, [r0, #11]	@ 0011abc8 c172
.org 0x11abca
	ldrb r0, [r6, #0]	@ 0011abca 3078
.org 0x11abcc
	adds r0, #1	@ 0011abcc 0130
.org 0x11abce
	strb r0, [r6, #0]	@ 0011abce 3070
.org 0x11abd0
	movs r0, #22	@ 0011abd0 1620
.org 0x11abd2
	bl 0x25d8	@ 0011abd2 e7f601fd
.org 0x11abd6
	adds r0, r5, #0	@ 0011abd6 281c
.org 0x11abd8
	bl 0x11b0a8	@ 0011abd8 00f066fa
.org 0x11abdc
	ldr r2, [pc, #68]	@ 0011abdc 114a
.org 0x11abde
	ldrh r1, [r2, #4]	@ 0011abde 9188
.org 0x11abe0
	movs r0, #2	@ 0011abe0 0220
.org 0x11abe2
	ands r0, r1	@ 0011abe2 0840
.org 0x11abe4
	cmp r0, #0	@ 0011abe4 0028
.org 0x11abe6
	beq.n 0x11ac38	@ 0011abe6 27d0
.org 0x11abe8
	ldr r1, [pc, #60]	@ 0011abe8 0f49
.org 0x11abea
	adds r0, r5, r1	@ 0011abea 6818
.org 0x11abec
	ldr r1, [pc, #60]	@ 0011abec 0f49
.org 0x11abee
	movs r4, #0	@ 0011abee 0024
.org 0x11abf0
	str r4, [sp, #0]	@ 0011abf0 0094
.org 0x11abf2
	movs r2, #21	@ 0011abf2 1522
.org 0x11abf4
	movs r3, #0	@ 0011abf4 0023
.org 0x11abf6
	bl 0x27b8	@ 0011abf6 e7f6dffd
.org 0x11abfa
	ldr r2, [pc, #52]	@ 0011abfa 0d4a
.org 0x11abfc
	adds r0, r5, r2	@ 0011abfc a818
.org 0x11abfe
	ldr r1, [pc, #52]	@ 0011abfe 0d49
.org 0x11ac00
	ldrh r2, [r1, #0]	@ 0011ac00 0a88
.org 0x11ac02
	movs r1, #248	@ 0011ac02 f821
.org 0x11ac04
	lsls r1, r1, #5	@ 0011ac04 4901
.org 0x11ac06
	ands r1, r2	@ 0011ac06 1140
.org 0x11ac08
	lsls r1, r1, #3	@ 0011ac08 c900
.org 0x11ac0a
	movs r2, #128	@ 0011ac0a 8022
.org 0x11ac0c
	lsls r2, r2, #5	@ 0011ac0c 5201
.org 0x11ac0e
	bl 0x1f1c	@ 0011ac0e e7f685f9
.org 0x11ac12
	movs r0, #3	@ 0011ac12 0320
.org 0x11ac14
	bl 0x2b10	@ 0011ac14 e7f67cff
.org 0x11ac18
	movs r0, #2	@ 0011ac18 0220
.org 0x11ac1a
	strb r0, [r5, #3]	@ 0011ac1a e870
.org 0x11ac1c
	strb r4, [r6, #0]	@ 0011ac1c 3470
.org 0x11ac1e
	b.n 0x11ad22	@ 0011ac1e 80e0
.org 0x11ac20
	.byte 0xf7,0x0d,0x00,0x00	@ 0011ac20 data
.org 0x11ac24
	.byte 0x60,0x07,0x00,0x02	@ 0011ac24 data
.org 0x11ac28
	.byte 0xd8,0x16,0x00,0x00	@ 0011ac28 data
.org 0x11ac2c
	.byte 0x00,0xc0,0xb2,0x08	@ 0011ac2c data
.org 0x11ac30
	.byte 0xd8,0x0e,0x00,0x00	@ 0011ac30 data
.org 0x11ac34
	.byte 0x06,0x0a,0x00,0x02	@ 0011ac34 data
.org 0x11ac38
	ldrh r1, [r2, #6]	@ 0011ac38 d188
.org 0x11ac3a
	movs r0, #64	@ 0011ac3a 4020
.org 0x11ac3c
	ands r0, r1	@ 0011ac3c 0840
.org 0x11ac3e
	cmp r0, #0	@ 0011ac3e 0028
.org 0x11ac40
	beq.n 0x11ac6e	@ 0011ac40 15d0
.org 0x11ac42
	movs r0, #221	@ 0011ac42 dd20
.org 0x11ac44
	lsls r0, r0, #4	@ 0011ac44 0001
.org 0x11ac46
	adds r4, r5, r0	@ 0011ac46 2c18
.org 0x11ac48
	ldrb r0, [r4, #3]	@ 0011ac48 e078
.org 0x11ac4a
	cmp r0, #0	@ 0011ac4a 0028
.org 0x11ac4c
	beq.n 0x11ac5c	@ 0011ac4c 06d0
.org 0x11ac4e
	movs r0, #1	@ 0011ac4e 0120
.org 0x11ac50
	bl 0x2b10	@ 0011ac50 e7f65eff
.org 0x11ac54
	ldrb r0, [r4, #3]	@ 0011ac54 e078
.org 0x11ac56
	subs r0, #1	@ 0011ac56 0138
.org 0x11ac58
	strb r0, [r4, #3]	@ 0011ac58 e070
.org 0x11ac5a
	b.n 0x11aca6	@ 0011ac5a 24e0
.org 0x11ac5c
	ldrb r0, [r4, #12]	@ 0011ac5c 207b
.org 0x11ac5e
	cmp r0, #0	@ 0011ac5e 0028
.org 0x11ac60
	beq.n 0x11aca6	@ 0011ac60 21d0
.org 0x11ac62
	movs r0, #1	@ 0011ac62 0120
.org 0x11ac64
	bl 0x2b10	@ 0011ac64 e7f654ff
.org 0x11ac68
	ldrb r0, [r4, #11]	@ 0011ac68 e07a
.org 0x11ac6a
	subs r0, #1	@ 0011ac6a 0138
.org 0x11ac6c
	b.n 0x11aca4	@ 0011ac6c 1ae0
.org 0x11ac6e
	movs r0, #128	@ 0011ac6e 8020
.org 0x11ac70
	ands r0, r1	@ 0011ac70 0840
.org 0x11ac72
	cmp r0, #0	@ 0011ac72 0028
.org 0x11ac74
	beq.n 0x11aca6	@ 0011ac74 17d0
.org 0x11ac76
	movs r1, #221	@ 0011ac76 dd21
.org 0x11ac78
	lsls r1, r1, #4	@ 0011ac78 0901
.org 0x11ac7a
	adds r4, r5, r1	@ 0011ac7a 6c18
.org 0x11ac7c
	ldrb r0, [r4, #3]	@ 0011ac7c e078
.org 0x11ac7e
	adds r0, #1	@ 0011ac7e 0130
.org 0x11ac80
	ldrb r2, [r4, #10]	@ 0011ac80 a27a
.org 0x11ac82
	cmp r0, r2	@ 0011ac82 9042
.org 0x11ac84
	bge.n 0x11ac94	@ 0011ac84 06da
.org 0x11ac86
	movs r0, #1	@ 0011ac86 0120
.org 0x11ac88
	bl 0x2b10	@ 0011ac88 e7f642ff
.org 0x11ac8c
	ldrb r0, [r4, #3]	@ 0011ac8c e078
.org 0x11ac8e
	adds r0, #1	@ 0011ac8e 0130
.org 0x11ac90
	strb r0, [r4, #3]	@ 0011ac90 e070
.org 0x11ac92
	b.n 0x11aca6	@ 0011ac92 08e0
.org 0x11ac94
	ldrb r0, [r4, #13]	@ 0011ac94 607b
.org 0x11ac96
	cmp r0, #0	@ 0011ac96 0028
.org 0x11ac98
	beq.n 0x11aca6	@ 0011ac98 05d0
.org 0x11ac9a
	movs r0, #1	@ 0011ac9a 0120
.org 0x11ac9c
	bl 0x2b10	@ 0011ac9c e7f638ff
.org 0x11aca0
	ldrb r0, [r4, #11]	@ 0011aca0 e07a
.org 0x11aca2
	adds r0, #1	@ 0011aca2 0130
.org 0x11aca4
	strb r0, [r4, #11]	@ 0011aca4 e072
.org 0x11aca6
	adds r0, r5, #0	@ 0011aca6 281c
.org 0x11aca8
	bl 0x11b0a8	@ 0011aca8 00f0fef9
.org 0x11acac
	movs r4, #0	@ 0011acac 0024
.org 0x11acae
	ldr r7, [pc, #12]	@ 0011acae 034f
.org 0x11acb0
	ldr r0, [pc, #12]	@ 0011acb0 0348
.org 0x11acb2
	adds r0, r0, r7	@ 0011acb2 c019
.org 0x11acb4
	mov r8, r0	@ 0011acb4 8046
.org 0x11acb6
	ldr r6, [pc, #12]	@ 0011acb6 034e
.org 0x11acb8
	b.n 0x11ace8	@ 0011acb8 16e0
.org 0x11acba
	.byte 0x00	@ 0011acba data
.org 0x11acbb
	.byte 0x00	@ 0011acbb data
.org 0x11acbc
	.byte 0xf8,0xcf,0x86,0x08	@ 0011acbc data
.org 0x11acc0
	.byte 0xbe,0x03,0x00,0x00	@ 0011acc0 data
.org 0x11acc4
	.byte 0x5f,0x0e,0x01,0x09	@ 0011acc4 data
.org 0x11acc8
	ldrb r0, [r1, #0]	@ 0011acc8 0878
.org 0x11acca
	movs r1, #140	@ 0011acca 8c21
.org 0x11accc
	lsls r1, r1, #1	@ 0011accc 4900
.org 0x11acce
	adds r0, r0, r1	@ 0011acce 4018
.org 0x11acd0
	lsls r0, r0, #1	@ 0011acd0 4000
.org 0x11acd2
	adds r0, r0, r7	@ 0011acd2 c019
.org 0x11acd4
	ldrh r0, [r0, #0]	@ 0011acd4 0088
.org 0x11acd6
	adds r0, r0, r6	@ 0011acd6 8019
.org 0x11acd8
	lsls r2, r4, #1	@ 0011acd8 6200
.org 0x11acda
	adds r2, #2	@ 0011acda 0232
.org 0x11acdc
	movs r1, #3	@ 0011acdc 0321
.org 0x11acde
	bl 0x10d85c	@ 0011acde f2f7bdfd
.org 0x11ace2
	adds r0, r4, #1	@ 0011ace2 601c
.org 0x11ace4
	lsls r0, r0, #24	@ 0011ace4 0006
.org 0x11ace6
	lsrs r4, r0, #24	@ 0011ace6 040e
.org 0x11ace8
	cmp r4, #5	@ 0011ace8 052c
.org 0x11acea
	bhi.n 0x11ad0a	@ 0011acea 0ed8
.org 0x11acec
	ldr r2, [pc, #64]	@ 0011acec 104a
.org 0x11acee
	adds r0, r5, r2	@ 0011acee a818
.org 0x11acf0
	adds r1, r0, r4	@ 0011acf0 0119
.org 0x11acf2
	ldrb r0, [r1, #0]	@ 0011acf2 0878
.org 0x11acf4
	cmp r0, #255	@ 0011acf4 ff28
.org 0x11acf6
	bne.n 0x11acc8	@ 0011acf6 e7d1
.org 0x11acf8
	cmp r4, #0	@ 0011acf8 002c
.org 0x11acfa
	bne.n 0x11ad0a	@ 0011acfa 06d1
.org 0x11acfc
	mov r1, r8	@ 0011acfc 4146
.org 0x11acfe
	ldrh r0, [r1, #0]	@ 0011acfe 0888
.org 0x11ad00
	adds r0, r0, r6	@ 0011ad00 8019
.org 0x11ad02
	movs r1, #3	@ 0011ad02 0321
.org 0x11ad04
	movs r2, #2	@ 0011ad04 0222
.org 0x11ad06
	bl 0x10d85c	@ 0011ad06 f2f7a9fd
