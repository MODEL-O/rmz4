@ FUN_08086924  entry 0x08086924  size 222
.thumb
.org 0x86924
FUN_08086924:
	push {r4, r5, r6, r7, lr}	@ 00086924 f0b5
.org 0x86926
	mov r7, r8	@ 00086926 4746
.org 0x86928
	push {r7}	@ 00086928 80b4
.org 0x8692a
	adds r2, r0, #0	@ 0008692a 021c
.org 0x8692c
	ldr r5, [r2, #44]	@ 0008692c d56a
.org 0x8692e
	ldr r0, [r2, #12]	@ 0008692e d068
.org 0x86930
	ldr r6, [r0, #44]	@ 00086930 c66a
.org 0x86932
	ldrb r0, [r6, #9]	@ 00086932 707a
.org 0x86934
	mov r8, r0	@ 00086934 8046
.org 0x86936
	ldrb r0, [r5, #13]	@ 00086936 687b
.org 0x86938
	cmp r0, #4	@ 00086938 0428
.org 0x8693a
	beq.n 0x86a04	@ 0008693a 63d0
.org 0x8693c
	ldrb r0, [r5, #12]	@ 0008693c 287b
.org 0x8693e
	cmp r0, #1	@ 0008693e 0128
.org 0x86940
	bhi.n 0x86a04	@ 00086940 60d8
.org 0x86942
	ldr r0, [r2, #20]	@ 00086942 5069
.org 0x86944
	movs r1, #4	@ 00086944 0421
.org 0x86946
	ands r0, r1	@ 00086946 0840
.org 0x86948
	cmp r0, #0	@ 00086948 0028
.org 0x8694a
	beq.n 0x86962	@ 0008694a 0ad0
.org 0x8694c
	movs r0, #8	@ 0008694c 0820
.org 0x8694e
	ldrsb r0, [r6, r0]	@ 0008694e 3056
.org 0x86950
	cmp r0, #0	@ 00086950 0028
.org 0x86952
	bne.n 0x86962	@ 00086952 06d1
.org 0x86954
	mov r1, r8	@ 00086954 4146
.org 0x86956
	cmp r1, #0	@ 00086956 0029
.org 0x86958
	bne.n 0x86962	@ 00086958 03d1
.org 0x8695a
	adds r1, r5, #0	@ 0008695a 291c
.org 0x8695c
	adds r1, #188	@ 0008695c bc31
.org 0x8695e
	movs r0, #1	@ 0008695e 0120
.org 0x86960
	strb r0, [r1, #0]	@ 00086960 0870
.org 0x86962
	ldr r0, [r2, #20]	@ 00086962 5069
.org 0x86964
	movs r1, #1	@ 00086964 0121
.org 0x86966
	mov ip, r1	@ 00086966 8c46
.org 0x86968
	ands r0, r1	@ 00086968 0840
.org 0x8696a
	cmp r0, #0	@ 0008696a 0028
.org 0x8696c
	beq.n 0x86a04	@ 0008696c 4ad0
.org 0x8696e
	ldr r0, [pc, #36]	@ 0008696e 0948
.org 0x86970
	ldr r1, [r0, #0]	@ 00086970 0168
.org 0x86972
	movs r2, #0	@ 00086972 0022
.org 0x86974
	ldr r1, [r1, #84]	@ 00086974 496d
.org 0x86976
	ldr r7, [r5, #84]	@ 00086976 6f6d
.org 0x86978
	cmp r7, r1	@ 00086978 8f42
.org 0x8697a
	bge.n 0x8697e	@ 0008697a 00da
.org 0x8697c
	movs r2, #1	@ 0008697c 0122
.org 0x8697e
	lsls r2, r2, #7	@ 0008697e d201
.org 0x86980
	movs r1, #8	@ 00086980 0821
.org 0x86982
	ldrsb r1, [r6, r1]	@ 00086982 7156
.org 0x86984
	cmp r1, #4	@ 00086984 0429
.org 0x86986
	beq.n 0x869b4	@ 00086986 15d0
.org 0x86988
	cmp r1, #4	@ 00086988 0429
.org 0x8698a
	bgt.n 0x86998	@ 0008698a 05dc
.org 0x8698c
	cmp r1, #1	@ 0008698c 0129
.org 0x8698e
	beq.n 0x8699c	@ 0008698e 05d0
.org 0x86990
	b.n 0x869da	@ 00086990 23e0
.org 0x86992
	.byte 0x00	@ 00086992 data
.org 0x86993
	.byte 0x00	@ 00086993 data
.org 0x86994
	.byte 0xf0,0xdb,0x02,0x02	@ 00086994 data
.org 0x86998
	cmp r1, #8	@ 00086998 0829
.org 0x8699a
	bne.n 0x869da	@ 0008699a 1ed1
.org 0x8699c
	ldr r0, [r0, #0]	@ 0008699c 0068
.org 0x8699e
	ldr r3, [r0, #84]	@ 0008699e 436d
.org 0x869a0
	ldr r0, [r0, #88]	@ 000869a0 806d
.org 0x869a2
	ldr r1, [pc, #12]	@ 000869a2 0349
.org 0x869a4
	adds r4, r0, r1	@ 000869a4 4418
.org 0x869a6
	subs r0, r7, r3	@ 000869a6 f81a
.org 0x869a8
	ldr r1, [r5, #88]	@ 000869a8 a96d
.org 0x869aa
	subs r1, r1, r4	@ 000869aa 091b
.org 0x869ac
	b.n 0x869c6	@ 000869ac 0be0
.org 0x869ae
	.byte 0x00	@ 000869ae data
.org 0x869af
	.byte 0x00	@ 000869af data
.org 0x869b0
	.byte 0x00,0xdc,0xff,0xff	@ 000869b0 data
.org 0x869b4
	mov r3, r8	@ 000869b4 4346
.org 0x869b6
	cmp r3, #0	@ 000869b6 002b
.org 0x869b8
	bne.n 0x869d0	@ 000869b8 0ad1
.org 0x869ba
	ldr r0, [r6, #92]	@ 000869ba f06d
.org 0x869bc
	ldr r1, [r6, #96]	@ 000869bc 316e
.org 0x869be
	cmp r0, #0	@ 000869be 0028
.org 0x869c0
	bne.n 0x869c6	@ 000869c0 01d1
.org 0x869c2
	cmp r1, #0	@ 000869c2 0029
.org 0x869c4
	beq.n 0x869e4	@ 000869c4 0ed0
.org 0x869c6
	bl 0x10d338	@ 000869c6 86f0b7fc
.org 0x869ca
	lsls r0, r0, #24	@ 000869ca 0006
.org 0x869cc
	lsrs r2, r0, #24	@ 000869cc 020e
.org 0x869ce
	b.n 0x869e4	@ 000869ce 09e0
.org 0x869d0
	adds r0, r5, #0	@ 000869d0 281c
.org 0x869d2
	adds r0, #183	@ 000869d2 b730
.org 0x869d4
	mov r1, ip	@ 000869d4 6146
.org 0x869d6
	strb r1, [r0, #0]	@ 000869d6 0170
.org 0x869d8
	b.n 0x86a04	@ 000869d8 14e0
.org 0x869da
	adds r1, r5, #0	@ 000869da 291c
.org 0x869dc
	adds r1, #183	@ 000869dc b731
.org 0x869de
	movs r0, #1	@ 000869de 0120
.org 0x869e0
	strb r0, [r1, #0]	@ 000869e0 0870
.org 0x869e2
	b.n 0x86a04	@ 000869e2 0fe0
.org 0x869e4
	ldr r1, [pc, #40]	@ 000869e4 0a49
.org 0x869e6
	adds r0, r2, #0	@ 000869e6 101c
.org 0x869e8
	adds r0, #64	@ 000869e8 4030
.org 0x869ea
	lsls r0, r0, #24	@ 000869ea 0006
.org 0x869ec
	lsrs r0, r0, #23	@ 000869ec c00d
.org 0x869ee
	adds r0, r0, r1	@ 000869ee 4018
.org 0x869f0
	movs r3, #0	@ 000869f0 0023
.org 0x869f2
	ldrsh r0, [r0, r3]	@ 000869f2 c05e
.org 0x869f4
	lsls r0, r0, #2	@ 000869f4 8000
.org 0x869f6
	str r0, [r5, #92]	@ 000869f6 e865
.org 0x869f8
	lsls r0, r2, #1	@ 000869f8 5000
.org 0x869fa
	adds r0, r0, r1	@ 000869fa 4018
.org 0x869fc
	movs r1, #0	@ 000869fc 0021
.org 0x869fe
	ldrsh r0, [r0, r1]	@ 000869fe 405e
.org 0x86a00
	lsls r0, r0, #2	@ 00086a00 8000
