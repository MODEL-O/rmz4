@ FUN_0804e8f4  entry 0x0804e8f4  size 196
.thumb
.org 0x4e8f4
FUN_0804e8f4:
	push {r4, r5, r6, r7, lr}	@ 0004e8f4 f0b5
.org 0x4e8f6
	mov r7, sl	@ 0004e8f6 5746
.org 0x4e8f8
	mov r6, r9	@ 0004e8f8 4e46
.org 0x4e8fa
	mov r5, r8	@ 0004e8fa 4546
.org 0x4e8fc
	push {r5, r6, r7}	@ 0004e8fc e0b4
.org 0x4e8fe
	sub sp, #8	@ 0004e8fe 82b0
.org 0x4e900
	str r0, [sp, #0]	@ 0004e900 0090
.org 0x4e902
	lsls r1, r1, #24	@ 0004e902 0906
.org 0x4e904
	lsrs r1, r1, #24	@ 0004e904 090e
.org 0x4e906
	str r1, [sp, #4]	@ 0004e906 0191
.org 0x4e908
	ldr r0, [pc, #112]	@ 0004e908 1c48
.org 0x4e90a
	ldr r0, [r0, #0]	@ 0004e90a 0068
.org 0x4e90c
	bl 0x5500	@ 0004e90c b6f7f8fd
.org 0x4e910
	adds r2, r0, #0	@ 0004e910 021c
.org 0x4e912
	cmp r2, #0	@ 0004e912 002a
.org 0x4e914
	beq.n 0x4e9b8	@ 0004e914 50d0
.org 0x4e916
	ldr r0, [pc, #104]	@ 0004e916 1a48
.org 0x4e918
	movs r6, #54	@ 0004e918 3626
.org 0x4e91a
	strb r6, [r2, #9]	@ 0004e91a 5672
.org 0x4e91c
	adds r7, r0, #0	@ 0004e91c 071c
.org 0x4e91e
	adds r7, #216	@ 0004e91e d837
.org 0x4e920
	ldr r0, [r7, #0]	@ 0004e920 3868
.org 0x4e922
	ldr r0, [r0, #0]	@ 0004e922 0068
.org 0x4e924
	str r0, [r2, #20]	@ 0004e924 5061
.org 0x4e926
	ldrb r1, [r2, #11]	@ 0004e926 d17a
.org 0x4e928
	movs r0, #191	@ 0004e928 bf20
.org 0x4e92a
	mov r9, r0	@ 0004e92a 8146
.org 0x4e92c
	ands r0, r1	@ 0004e92c 0840
.org 0x4e92e
	strb r0, [r2, #11]	@ 0004e92e d072
.org 0x4e930
	adds r3, r2, #0	@ 0004e930 131c
.org 0x4e932
	adds r3, #37	@ 0004e932 2533
.org 0x4e934
	movs r1, #16	@ 0004e934 1021
.org 0x4e936
	mov r8, r1	@ 0004e936 8846
.org 0x4e938
	mov r0, r8	@ 0004e938 4046
.org 0x4e93a
	strb r0, [r3, #0]	@ 0004e93a 1870
.org 0x4e93c
	ldr r5, [pc, #68]	@ 0004e93c 114d
.org 0x4e93e
	ldrh r0, [r5, #0]	@ 0004e93e 2888
.org 0x4e940
	strh r0, [r2, #32]	@ 0004e940 1084
.org 0x4e942
	ldr r4, [pc, #68]	@ 0004e942 114c
.org 0x4e944
	ldrb r0, [r4, #0]	@ 0004e944 2078
.org 0x4e946
	movs r1, #34	@ 0004e946 2221
.org 0x4e948
	adds r1, r1, r2	@ 0004e948 8918
.org 0x4e94a
	mov ip, r1	@ 0004e94a 8c46
.org 0x4e94c
	strb r0, [r1, #0]	@ 0004e94c 0870
.org 0x4e94e
	ldr r0, [sp, #0]	@ 0004e94e 0098
.org 0x4e950
	adds r0, #248	@ 0004e950 f830
.org 0x4e952
	ldrb r0, [r0, #0]	@ 0004e952 0078
.org 0x4e954
	cmp r0, #2	@ 0004e954 0228
.org 0x4e956
	bne.n 0x4e98c	@ 0004e956 19d1
.org 0x4e958
	strb r6, [r2, #9]	@ 0004e958 5672
.org 0x4e95a
	ldr r0, [r7, #0]	@ 0004e95a 3868
.org 0x4e95c
	ldr r0, [r0, #0]	@ 0004e95c 0068
.org 0x4e95e
	str r0, [r2, #20]	@ 0004e95e 5061
.org 0x4e960
	ldrb r1, [r2, #11]	@ 0004e960 d17a
.org 0x4e962
	mov r0, r9	@ 0004e962 4846
.org 0x4e964
	ands r0, r1	@ 0004e964 0840
.org 0x4e966
	strb r0, [r2, #11]	@ 0004e966 d072
.org 0x4e968
	mov r0, r8	@ 0004e968 4046
.org 0x4e96a
	strb r0, [r3, #0]	@ 0004e96a 1870
.org 0x4e96c
	ldrh r0, [r5, #0]	@ 0004e96c 2888
.org 0x4e96e
	strh r0, [r2, #32]	@ 0004e96e 1084
.org 0x4e970
	adds r1, r4, #0	@ 0004e970 211c
.org 0x4e972
	ldrb r0, [r1, #0]	@ 0004e972 0878
.org 0x4e974
	mov r3, ip	@ 0004e974 6346
.org 0x4e976
	strb r0, [r3, #0]	@ 0004e976 1870
.org 0x4e978
	b.n 0x4e9aa	@ 0004e978 17e0
.org 0x4e97a
	.byte 0x00	@ 0004e97a data
.org 0x4e97b
	.byte 0x00	@ 0004e97b data
.org 0x4e97c
	.byte 0x88,0xed,0x02,0x02	@ 0004e97c data
.org 0x4e980
	.byte 0xf8,0x39,0x85,0x08	@ 0004e980 data
.org 0x4e984
	.byte 0xfc,0x36,0x85,0x08	@ 0004e984 data
.org 0x4e988
	.byte 0x04,0x37,0x85,0x08	@ 0004e988 data
.org 0x4e98c
	strb r6, [r2, #9]	@ 0004e98c 5672
.org 0x4e98e
	ldr r0, [r7, #0]	@ 0004e98e 3868
.org 0x4e990
	ldr r0, [r0, #0]	@ 0004e990 0068
.org 0x4e992
	str r0, [r2, #20]	@ 0004e992 5061
.org 0x4e994
	ldrb r1, [r2, #11]	@ 0004e994 d17a
.org 0x4e996
	mov r0, r9	@ 0004e996 4846
.org 0x4e998
	ands r0, r1	@ 0004e998 0840
.org 0x4e99a
	strb r0, [r2, #11]	@ 0004e99a d072
.org 0x4e99c
	mov r0, r8	@ 0004e99c 4046
.org 0x4e99e
	strb r0, [r3, #0]	@ 0004e99e 1870
.org 0x4e9a0
	ldrh r0, [r5, #2]	@ 0004e9a0 6888
.org 0x4e9a2
	strh r0, [r2, #32]	@ 0004e9a2 1084
.org 0x4e9a4
	ldrb r0, [r4, #1]	@ 0004e9a4 6078
.org 0x4e9a6
	mov r1, ip	@ 0004e9a6 6146
.org 0x4e9a8
	strb r0, [r1, #0]	@ 0004e9a8 0870
.org 0x4e9aa
	ldr r3, [sp, #0]	@ 0004e9aa 009b
.org 0x4e9ac
	str r3, [r2, #40]	@ 0004e9ac 9362
.org 0x4e9ae
	movs r0, #0	@ 0004e9ae 0020
.org 0x4e9b0
	mov r1, sp	@ 0004e9b0 6946
.org 0x4e9b2
	ldrb r1, [r1, #4]	@ 0004e9b2 0979
.org 0x4e9b4
	strb r1, [r2, #16]	@ 0004e9b4 1174
.org 0x4e9b6
	strb r0, [r2, #17]	@ 0004e9b6 5074
