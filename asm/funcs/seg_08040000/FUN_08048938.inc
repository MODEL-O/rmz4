@ FUN_08048938  entry 0x08048938  size 196
.thumb
.org 0x48938
FUN_08048938:
	push {r4, r5, r6, r7, lr}	@ 00048938 f0b5
.org 0x4893a
	mov r7, sl	@ 0004893a 5746
.org 0x4893c
	mov r6, r9	@ 0004893c 4e46
.org 0x4893e
	mov r5, r8	@ 0004893e 4546
.org 0x48940
	push {r5, r6, r7}	@ 00048940 e0b4
.org 0x48942
	sub sp, #8	@ 00048942 82b0
.org 0x48944
	str r0, [sp, #0]	@ 00048944 0090
.org 0x48946
	lsls r1, r1, #24	@ 00048946 0906
.org 0x48948
	lsrs r1, r1, #24	@ 00048948 090e
.org 0x4894a
	str r1, [sp, #4]	@ 0004894a 0191
.org 0x4894c
	ldr r0, [pc, #112]	@ 0004894c 1c48
.org 0x4894e
	ldr r0, [r0, #0]	@ 0004894e 0068
.org 0x48950
	bl 0x5500	@ 00048950 bcf7d6fd
.org 0x48954
	adds r2, r0, #0	@ 00048954 021c
.org 0x48956
	cmp r2, #0	@ 00048956 002a
.org 0x48958
	beq.n 0x489fc	@ 00048958 50d0
.org 0x4895a
	ldr r0, [pc, #104]	@ 0004895a 1a48
.org 0x4895c
	movs r6, #32	@ 0004895c 2026
.org 0x4895e
	strb r6, [r2, #9]	@ 0004895e 5672
.org 0x48960
	adds r7, r0, #0	@ 00048960 071c
.org 0x48962
	adds r7, #128	@ 00048962 8037
.org 0x48964
	ldr r0, [r7, #0]	@ 00048964 3868
.org 0x48966
	ldr r0, [r0, #0]	@ 00048966 0068
.org 0x48968
	str r0, [r2, #20]	@ 00048968 5061
.org 0x4896a
	ldrb r1, [r2, #11]	@ 0004896a d17a
.org 0x4896c
	movs r0, #191	@ 0004896c bf20
.org 0x4896e
	mov r9, r0	@ 0004896e 8146
.org 0x48970
	ands r0, r1	@ 00048970 0840
.org 0x48972
	strb r0, [r2, #11]	@ 00048972 d072
.org 0x48974
	adds r3, r2, #0	@ 00048974 131c
.org 0x48976
	adds r3, #37	@ 00048976 2533
.org 0x48978
	movs r1, #16	@ 00048978 1021
.org 0x4897a
	mov r8, r1	@ 0004897a 8846
.org 0x4897c
	mov r0, r8	@ 0004897c 4046
.org 0x4897e
	strb r0, [r3, #0]	@ 0004897e 1870
.org 0x48980
	ldr r5, [pc, #68]	@ 00048980 114d
.org 0x48982
	ldrh r0, [r5, #0]	@ 00048982 2888
.org 0x48984
	strh r0, [r2, #32]	@ 00048984 1084
.org 0x48986
	ldr r4, [pc, #68]	@ 00048986 114c
.org 0x48988
	ldrb r0, [r4, #0]	@ 00048988 2078
.org 0x4898a
	movs r1, #34	@ 0004898a 2221
.org 0x4898c
	adds r1, r1, r2	@ 0004898c 8918
.org 0x4898e
	mov ip, r1	@ 0004898e 8c46
.org 0x48990
	strb r0, [r1, #0]	@ 00048990 0870
.org 0x48992
	ldr r0, [sp, #0]	@ 00048992 0098
.org 0x48994
	adds r0, #248	@ 00048994 f830
.org 0x48996
	ldrb r0, [r0, #0]	@ 00048996 0078
.org 0x48998
	cmp r0, #2	@ 00048998 0228
.org 0x4899a
	bne.n 0x489d0	@ 0004899a 19d1
.org 0x4899c
	strb r6, [r2, #9]	@ 0004899c 5672
.org 0x4899e
	ldr r0, [r7, #0]	@ 0004899e 3868
.org 0x489a0
	ldr r0, [r0, #0]	@ 000489a0 0068
.org 0x489a2
	str r0, [r2, #20]	@ 000489a2 5061
.org 0x489a4
	ldrb r1, [r2, #11]	@ 000489a4 d17a
.org 0x489a6
	mov r0, r9	@ 000489a6 4846
.org 0x489a8
	ands r0, r1	@ 000489a8 0840
.org 0x489aa
	strb r0, [r2, #11]	@ 000489aa d072
.org 0x489ac
	mov r0, r8	@ 000489ac 4046
.org 0x489ae
	strb r0, [r3, #0]	@ 000489ae 1870
.org 0x489b0
	ldrh r0, [r5, #0]	@ 000489b0 2888
.org 0x489b2
	strh r0, [r2, #32]	@ 000489b2 1084
.org 0x489b4
	adds r1, r4, #0	@ 000489b4 211c
.org 0x489b6
	ldrb r0, [r1, #0]	@ 000489b6 0878
.org 0x489b8
	mov r3, ip	@ 000489b8 6346
.org 0x489ba
	strb r0, [r3, #0]	@ 000489ba 1870
.org 0x489bc
	b.n 0x489ee	@ 000489bc 17e0
.org 0x489be
	.byte 0x00	@ 000489be data
.org 0x489bf
	.byte 0x00	@ 000489bf data
.org 0x489c0
	.byte 0x88,0xed,0x02,0x02	@ 000489c0 data
.org 0x489c4
	.byte 0xf8,0x39,0x85,0x08	@ 000489c4 data
.org 0x489c8
	.byte 0xfc,0x36,0x85,0x08	@ 000489c8 data
.org 0x489cc
	.byte 0x04,0x37,0x85,0x08	@ 000489cc data
.org 0x489d0
	strb r6, [r2, #9]	@ 000489d0 5672
.org 0x489d2
	ldr r0, [r7, #0]	@ 000489d2 3868
.org 0x489d4
	ldr r0, [r0, #0]	@ 000489d4 0068
.org 0x489d6
	str r0, [r2, #20]	@ 000489d6 5061
.org 0x489d8
	ldrb r1, [r2, #11]	@ 000489d8 d17a
.org 0x489da
	mov r0, r9	@ 000489da 4846
.org 0x489dc
	ands r0, r1	@ 000489dc 0840
.org 0x489de
	strb r0, [r2, #11]	@ 000489de d072
.org 0x489e0
	mov r0, r8	@ 000489e0 4046
.org 0x489e2
	strb r0, [r3, #0]	@ 000489e2 1870
.org 0x489e4
	ldrh r0, [r5, #2]	@ 000489e4 6888
.org 0x489e6
	strh r0, [r2, #32]	@ 000489e6 1084
.org 0x489e8
	ldrb r0, [r4, #1]	@ 000489e8 6078
.org 0x489ea
	mov r1, ip	@ 000489ea 6146
.org 0x489ec
	strb r0, [r1, #0]	@ 000489ec 0870
.org 0x489ee
	ldr r3, [sp, #0]	@ 000489ee 009b
.org 0x489f0
	str r3, [r2, #40]	@ 000489f0 9362
.org 0x489f2
	movs r0, #0	@ 000489f2 0020
.org 0x489f4
	mov r1, sp	@ 000489f4 6946
.org 0x489f6
	ldrb r1, [r1, #4]	@ 000489f6 0979
.org 0x489f8
	strb r1, [r2, #16]	@ 000489f8 1174
.org 0x489fa
	strb r0, [r2, #17]	@ 000489fa 5074
