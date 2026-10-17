@ FUN_080c48e0  entry 0x080c48e0  size 146
.thumb
.org 0xc48e0
FUN_080c48e0:
	push {r4, r5, r6, lr}	@ 000c48e0 70b5
.org 0xc48e2
	adds r4, r0, #0	@ 000c48e2 041c
.org 0xc48e4
	ldr r6, [r4, #40]	@ 000c48e4 a66a
.org 0xc48e6
	ldrb r0, [r4, #10]	@ 000c48e6 a07a
.org 0xc48e8
	lsrs r5, r0, #4	@ 000c48e8 0509
.org 0xc48ea
	movs r1, #1	@ 000c48ea 0121
.org 0xc48ec
	ands r5, r1	@ 000c48ec 0d40
.org 0xc48ee
	ldrb r0, [r4, #15]	@ 000c48ee e07b
.org 0xc48f0
	cmp r0, #0	@ 000c48f0 0028
.org 0xc48f2
	bne.n 0xc4952	@ 000c48f2 2ed1
.org 0xc48f4
	adds r0, r4, #0	@ 000c48f4 201c
.org 0xc48f6
	adds r0, #185	@ 000c48f6 b930
.org 0xc48f8
	strb r1, [r0, #0]	@ 000c48f8 0170
.org 0xc48fa
	subs r0, #69	@ 000c48fa 4538
.org 0xc48fc
	ldr r1, [pc, #24]	@ 000c48fc 0649
.org 0xc48fe
	bl 0x5784	@ 000c48fe 40f741ff
.org 0xc4902
	adds r0, r4, #0	@ 000c4902 201c
.org 0xc4904
	bl 0x1cc9c	@ 000c4904 58f7caf9
.org 0xc4908
	adds r2, r5, #0	@ 000c4908 2a1c
.org 0xc490a
	cmp r2, #0	@ 000c490a 002a
.org 0xc490c
	beq.n 0xc491c	@ 000c490c 06d0
.org 0xc490e
	ldrb r0, [r4, #10]	@ 000c490e a07a
.org 0xc4910
	movs r1, #16	@ 000c4910 1021
.org 0xc4912
	orrs r0, r1	@ 000c4912 0843
.org 0xc4914
	b.n 0xc4922	@ 000c4914 05e0
.org 0xc4916
	.byte 0x00	@ 000c4916 data
.org 0xc4917
	.byte 0x00	@ 000c4917 data
.org 0xc4918
	.byte 0x30,0x57,0x86,0x08	@ 000c4918 data
.org 0xc491c
	ldrb r1, [r4, #10]	@ 000c491c a17a
.org 0xc491e
	movs r0, #239	@ 000c491e ef20
.org 0xc4920
	ands r0, r1	@ 000c4920 0840
.org 0xc4922
	strb r0, [r4, #10]	@ 000c4922 a072
.org 0xc4924
	adds r1, r2, #0	@ 000c4924 111c
.org 0xc4926
	adds r0, r4, #0	@ 000c4926 201c
.org 0xc4928
	adds r0, #76	@ 000c4928 4c30
.org 0xc492a
	strb r1, [r0, #0]	@ 000c492a 0170
.org 0xc492c
	adds r3, r4, #0	@ 000c492c 231c
.org 0xc492e
	adds r3, #74	@ 000c492e 4a33
.org 0xc4930
	lsls r1, r1, #4	@ 000c4930 0901
.org 0xc4932
	ldrb r2, [r3, #0]	@ 000c4932 1a78
.org 0xc4934
	movs r0, #17	@ 000c4934 1120
.org 0xc4936
	negs r0, r0	@ 000c4936 4042
.org 0xc4938
	ands r0, r2	@ 000c4938 1040
.org 0xc493a
	orrs r0, r1	@ 000c493a 0843
.org 0xc493c
	strb r0, [r3, #0]	@ 000c493c 1870
.org 0xc493e
	ldr r1, [pc, #56]	@ 000c493e 0e49
.org 0xc4940
	adds r0, r4, #0	@ 000c4940 201c
.org 0xc4942
	bl 0x1cf00	@ 000c4942 58f7ddfa
.org 0xc4946
	movs r0, #160	@ 000c4946 a020
.org 0xc4948
	lsls r0, r0, #1	@ 000c4948 4000
.org 0xc494a
	str r0, [r4, #92]	@ 000c494a e065
.org 0xc494c
	ldrb r0, [r4, #15]	@ 000c494c e07b
.org 0xc494e
	adds r0, #1	@ 000c494e 0130
.org 0xc4950
	strb r0, [r4, #15]	@ 000c4950 e073
.org 0xc4952
	adds r0, r4, #0	@ 000c4952 201c
.org 0xc4954
	bl 0x1cff0	@ 000c4954 58f74cfb
.org 0xc4958
	ldr r0, [r4, #92]	@ 000c4958 e06d
.org 0xc495a
	subs r0, #1	@ 000c495a 0138
.org 0xc495c
	str r0, [r4, #92]	@ 000c495c e065
.org 0xc495e
	cmp r0, #0	@ 000c495e 0028
.org 0xc4960
	beq.n 0xc4968	@ 000c4960 02d0
.org 0xc4962
	ldrb r0, [r6, #12]	@ 000c4962 307b
.org 0xc4964
	cmp r0, #1	@ 000c4964 0128
.org 0xc4966
	bls.n 0xc4972	@ 000c4966 04d9
.org 0xc4968
	movs r1, #0	@ 000c4968 0021
.org 0xc496a
	movs r0, #4	@ 000c496a 0420
.org 0xc496c
	strb r0, [r4, #13]	@ 000c496c 6073
.org 0xc496e
	strb r1, [r4, #14]	@ 000c496e a173
.org 0xc4970
	strb r1, [r4, #15]	@ 000c4970 e173
