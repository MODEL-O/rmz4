@ FUN_0811edc8  entry 0x0811edc8  size 504
.thumb
.org 0x11edc8
FUN_0811edc8:
	push {r4, r5, r6, r7, lr}	@ 0011edc8 f0b5
.org 0x11edca
	mov r7, sl	@ 0011edca 5746
.org 0x11edcc
	mov r6, r9	@ 0011edcc 4e46
.org 0x11edce
	mov r5, r8	@ 0011edce 4546
.org 0x11edd0
	push {r5, r6, r7}	@ 0011edd0 e0b4
.org 0x11edd2
	sub sp, #12	@ 0011edd2 83b0
.org 0x11edd4
	adds r7, r0, #0	@ 0011edd4 071c
.org 0x11edd6
	ldr r1, [pc, #488]	@ 0011edd6 7a49
.org 0x11edd8
	adds r0, r7, r1	@ 0011edd8 7818
.org 0x11edda
	ldr r0, [r0, #0]	@ 0011edda 0068
.org 0x11eddc
	str r0, [sp, #4]	@ 0011eddc 0190
.org 0x11edde
	movs r4, #0	@ 0011edde 0024
.org 0x11ede0
	strh r4, [r7, #4]	@ 0011ede0 bc80
.org 0x11ede2
	ldr r3, [pc, #480]	@ 0011ede2 784b
.org 0x11ede4
	adds r2, r7, r3	@ 0011ede4 fa18
.org 0x11ede6
	strb r4, [r2, #2]	@ 0011ede6 9470
.org 0x11ede8
	strb r4, [r2, #3]	@ 0011ede8 d470
.org 0x11edea
	strb r4, [r2, #4]	@ 0011edea 1471
.org 0x11edec
	adds r0, #241	@ 0011edec f130
.org 0x11edee
	ldr r1, [sp, #4]	@ 0011edee 0199
.org 0x11edf0
	adds r1, #242	@ 0011edf0 f231
.org 0x11edf2
	ldrb r1, [r1, #0]	@ 0011edf2 0978
.org 0x11edf4
	ldrb r0, [r0, #0]	@ 0011edf4 0078
.org 0x11edf6
	adds r1, r1, r0	@ 0011edf6 0918
.org 0x11edf8
	ldr r0, [sp, #4]	@ 0011edf8 0198
.org 0x11edfa
	adds r0, #243	@ 0011edfa f330
.org 0x11edfc
	ldrb r0, [r0, #0]	@ 0011edfc 0078
.org 0x11edfe
	adds r0, r0, r1	@ 0011edfe 4018
.org 0x11ee00
	strb r0, [r2, #5]	@ 0011ee00 5071
.org 0x11ee02
	adds r0, r7, #0	@ 0011ee02 381c
.org 0x11ee04
	bl 0x11f20c	@ 0011ee04 00f002fa
.org 0x11ee08
	ldr r5, [pc, #444]	@ 0011ee08 6f4d
.org 0x11ee0a
	ldrh r1, [r5, #0]	@ 0011ee0a 2988
.org 0x11ee0c
	ldr r0, [pc, #444]	@ 0011ee0c 6f48
.org 0x11ee0e
	ands r0, r1	@ 0011ee0e 0840
.org 0x11ee10
	ldr r1, [pc, #444]	@ 0011ee10 6f49
.org 0x11ee12
	ands r0, r1	@ 0011ee12 0840
.org 0x11ee14
	movs r2, #152	@ 0011ee14 9822
.org 0x11ee16
	lsls r2, r2, #5	@ 0011ee16 5201
.org 0x11ee18
	adds r1, r2, #0	@ 0011ee18 111c
.org 0x11ee1a
	orrs r0, r1	@ 0011ee1a 0843
.org 0x11ee1c
	strh r0, [r5, #0]	@ 0011ee1c 2880
.org 0x11ee1e
	ldr r3, [pc, #436]	@ 0011ee1e 6d4b
.org 0x11ee20
	adds r0, r3, #0	@ 0011ee20 181c
.org 0x11ee22
	strh r0, [r5, #6]	@ 0011ee22 e880
.org 0x11ee24
	movs r1, #128	@ 0011ee24 8021
.org 0x11ee26
	lsls r1, r1, #1	@ 0011ee26 4900
.org 0x11ee28
	adds r0, r1, #0	@ 0011ee28 081c
.org 0x11ee2a
	strh r0, [r5, #16]	@ 0011ee2a 2882
.org 0x11ee2c
	strh r4, [r5, #18]	@ 0011ee2c 6c82
.org 0x11ee2e
	ldr r0, [pc, #424]	@ 0011ee2e 6a48
.org 0x11ee30
	movs r4, #12	@ 0011ee30 0c24
.org 0x11ee32
	movs r1, #128	@ 0011ee32 8021
.org 0x11ee34
	lsls r1, r1, #7	@ 0011ee34 c901
.org 0x11ee36
	bl 0x1d30	@ 0011ee36 e2f67bff
.org 0x11ee3a
	ldr r0, [pc, #416]	@ 0011ee3a 6848
.org 0x11ee3c
	movs r1, #0	@ 0011ee3c 0021
.org 0x11ee3e
	bl 0x2208	@ 0011ee3e e3f6e3f9
.org 0x11ee42
	ldr r0, [pc, #412]	@ 0011ee42 6748
.org 0x11ee44
	ldrh r1, [r5, #6]	@ 0011ee44 e988
.org 0x11ee46
	ands r4, r1	@ 0011ee46 0c40
.org 0x11ee48
	lsls r4, r4, #12	@ 0011ee48 2403
.org 0x11ee4a
	adds r1, r4, #0	@ 0011ee4a 211c
.org 0x11ee4c
	bl 0x1d30	@ 0011ee4c e2f670ff
.org 0x11ee50
	ldr r0, [pc, #400]	@ 0011ee50 6448
.org 0x11ee52
	movs r1, #0	@ 0011ee52 0021
.org 0x11ee54
	bl 0x2208	@ 0011ee54 e3f6d8f9
.org 0x11ee58
	ldr r2, [pc, #396]	@ 0011ee58 634a
.org 0x11ee5a
	adds r0, r7, r2	@ 0011ee5a b818
.org 0x11ee5c
	ldr r1, [pc, #396]	@ 0011ee5c 6349
.org 0x11ee5e
	ldr r3, [sp, #4]	@ 0011ee5e 019b
.org 0x11ee60
	adds r3, #240	@ 0011ee60 f033
.org 0x11ee62
	str r3, [sp, #8]	@ 0011ee62 0293
.org 0x11ee64
	ldrb r2, [r3, #0]	@ 0011ee64 1a78
.org 0x11ee66
	adds r2, #104	@ 0011ee66 6832
.org 0x11ee68
	lsls r2, r2, #24	@ 0011ee68 1206
.org 0x11ee6a
	lsrs r2, r2, #24	@ 0011ee6a 120e
.org 0x11ee6c
	movs r3, #0	@ 0011ee6c 0023
.org 0x11ee6e
	str r3, [sp, #0]	@ 0011ee6e 0093
.org 0x11ee70
	bl 0x27b8	@ 0011ee70 e3f6a2fc
.org 0x11ee74
	movs r4, #165	@ 0011ee74 a524
.org 0x11ee76
	lsls r4, r4, #3	@ 0011ee76 e400
.org 0x11ee78
	ldr r0, [pc, #372]	@ 0011ee78 5d48
.org 0x11ee7a
	mov r8, r0	@ 0011ee7a 8046
.org 0x11ee7c
	adds r0, r4, r0	@ 0011ee7c 2018
.org 0x11ee7e
	ldr r1, [pc, #372]	@ 0011ee7e 5d49
.org 0x11ee80
	adds r1, #132	@ 0011ee80 8431
.org 0x11ee82
	ldrh r1, [r1, #0]	@ 0011ee82 0988
.org 0x11ee84
	ldrh r2, [r0, #6]	@ 0011ee84 c288
.org 0x11ee86
	lsrs r2, r2, #6	@ 0011ee86 9209
.org 0x11ee88
	subs r1, r1, r2	@ 0011ee88 891a
.org 0x11ee8a
	lsls r1, r1, #5	@ 0011ee8a 4901
.org 0x11ee8c
	movs r6, #128	@ 0011ee8c 8026
.org 0x11ee8e
	lsls r6, r6, #9	@ 0011ee8e 7602
.org 0x11ee90
	adds r1, r1, r6	@ 0011ee90 8919
.org 0x11ee92
	bl 0x1d30	@ 0011ee92 e2f64dff
.org 0x11ee96
	ldr r1, [pc, #352]	@ 0011ee96 5849
.org 0x11ee98
	mov sl, r1	@ 0011ee98 8a46
.org 0x11ee9a
	add r4, sl	@ 0011ee9a 5444
.org 0x11ee9c
	ldr r5, [pc, #348]	@ 0011ee9c 574d
.org 0x11ee9e
	adds r0, r5, #0	@ 0011ee9e 281c
.org 0x11eea0
	adds r0, #132	@ 0011eea0 8430
.org 0x11eea2
	ldrh r1, [r0, #0]	@ 0011eea2 0188
.org 0x11eea4
	ldrb r0, [r4, #7]	@ 0011eea4 e079
.org 0x11eea6
	subs r1, r1, r0	@ 0011eea6 091a
.org 0x11eea8
	lsls r1, r1, #5	@ 0011eea8 4901
.org 0x11eeaa
	movs r2, #128	@ 0011eeaa 8022
.org 0x11eeac
	lsls r2, r2, #2	@ 0011eeac 9200
.org 0x11eeae
	mov r9, r2	@ 0011eeae 9146
.org 0x11eeb0
	add r1, r9	@ 0011eeb0 4944
.org 0x11eeb2
	adds r0, r4, #0	@ 0011eeb2 201c
.org 0x11eeb4
	bl 0x2208	@ 0011eeb4 e3f6a8f9
.org 0x11eeb8
	ldr r4, [pc, #324]	@ 0011eeb8 514c
.org 0x11eeba
	add r8, r4	@ 0011eeba a044
.org 0x11eebc
	ldr r3, [pc, #324]	@ 0011eebc 514b
.org 0x11eebe
	ldrh r1, [r3, #0]	@ 0011eebe 1988
.org 0x11eec0
	mov r2, r8	@ 0011eec0 4246
.org 0x11eec2
	ldrh r0, [r2, #6]	@ 0011eec2 d088
.org 0x11eec4
	lsrs r0, r0, #6	@ 0011eec4 8009
.org 0x11eec6
	subs r1, r1, r0	@ 0011eec6 091a
.org 0x11eec8
	lsls r1, r1, #5	@ 0011eec8 4901
.org 0x11eeca
	adds r1, r1, r6	@ 0011eeca 8919
.org 0x11eecc
	mov r0, r8	@ 0011eecc 4046
.org 0x11eece
	bl 0x1d30	@ 0011eece e2f62fff
.org 0x11eed2
	add r4, sl	@ 0011eed2 5444
.org 0x11eed4
	adds r5, #134	@ 0011eed4 8635
.org 0x11eed6
	ldrh r1, [r5, #0]	@ 0011eed6 2988
.org 0x11eed8
	ldrb r0, [r4, #7]	@ 0011eed8 e079
.org 0x11eeda
	subs r1, r1, r0	@ 0011eeda 091a
.org 0x11eedc
	lsls r1, r1, #5	@ 0011eedc 4901
.org 0x11eede
	add r1, r9	@ 0011eede 4944
.org 0x11eee0
	adds r0, r4, #0	@ 0011eee0 201c
.org 0x11eee2
	bl 0x2208	@ 0011eee2 e3f691f9
.org 0x11eee6
	movs r3, #221	@ 0011eee6 dd23
.org 0x11eee8
	lsls r3, r3, #4	@ 0011eee8 1b01
.org 0x11eeea
	adds r4, r7, r3	@ 0011eeea fc18
.org 0x11eeec
	adds r0, r7, #0	@ 0011eeec 381c
.org 0x11eeee
	adds r1, r4, #0	@ 0011eeee 211c
.org 0x11eef0
	movs r2, #0	@ 0011eef0 0022
.org 0x11eef2
	movs r3, #0	@ 0011eef2 0023
.org 0x11eef4
	bl 0x10b708	@ 0011eef4 ecf708fc
.org 0x11eef8
	adds r0, r7, #0	@ 0011eef8 381c
.org 0x11eefa
	adds r1, r4, #0	@ 0011eefa 211c
.org 0x11eefc
	movs r2, #0	@ 0011eefc 0022
.org 0x11eefe
	movs r3, #1	@ 0011eefe 0123
.org 0x11ef00
	bl 0x10b708	@ 0011ef00 ecf702fc
.org 0x11ef04
	adds r0, r7, #0	@ 0011ef04 381c
.org 0x11ef06
	adds r1, r4, #0	@ 0011ef06 211c
.org 0x11ef08
	movs r2, #0	@ 0011ef08 0022
.org 0x11ef0a
	movs r3, #2	@ 0011ef0a 0223
.org 0x11ef0c
	bl 0x10b708	@ 0011ef0c ecf7fcfb
.org 0x11ef10
	movs r4, #0	@ 0011ef10 0024
.org 0x11ef12
	ldr r0, [sp, #8]	@ 0011ef12 0298
.org 0x11ef14
	ldrb r0, [r0, #0]	@ 0011ef14 0078
.org 0x11ef16
	cmp r4, r0	@ 0011ef16 8442
.org 0x11ef18
	bcs.n 0x11ef5c	@ 0011ef18 20d2
.org 0x11ef1a
	movs r1, #221	@ 0011ef1a dd21
.org 0x11ef1c
	lsls r1, r1, #4	@ 0011ef1c 0901
.org 0x11ef1e
	adds r5, r7, r1	@ 0011ef1e 7d18
.org 0x11ef20
	adds r0, r7, #0	@ 0011ef20 381c
.org 0x11ef22
	adds r1, r5, #0	@ 0011ef22 291c
.org 0x11ef24
	movs r2, #1	@ 0011ef24 0122
.org 0x11ef26
	adds r3, r4, #0	@ 0011ef26 231c
.org 0x11ef28
	bl 0x10b708	@ 0011ef28 ecf7eefb
.org 0x11ef2c
	movs r0, #16	@ 0011ef2c 1020
.org 0x11ef2e
	adds r3, r4, #0	@ 0011ef2e 231c
.org 0x11ef30
	orrs r3, r0	@ 0011ef30 0343
.org 0x11ef32
	adds r0, r7, #0	@ 0011ef32 381c
.org 0x11ef34
	adds r1, r5, #0	@ 0011ef34 291c
.org 0x11ef36
	movs r2, #1	@ 0011ef36 0122
.org 0x11ef38
	bl 0x10b708	@ 0011ef38 ecf7e6fb
.org 0x11ef3c
	movs r0, #32	@ 0011ef3c 2020
.org 0x11ef3e
	adds r3, r4, #0	@ 0011ef3e 231c
.org 0x11ef40
	orrs r3, r0	@ 0011ef40 0343
.org 0x11ef42
	adds r0, r7, #0	@ 0011ef42 381c
.org 0x11ef44
	adds r1, r5, #0	@ 0011ef44 291c
.org 0x11ef46
	movs r2, #1	@ 0011ef46 0122
.org 0x11ef48
	bl 0x10b708	@ 0011ef48 ecf7defb
.org 0x11ef4c
	adds r0, r4, #1	@ 0011ef4c 601c
.org 0x11ef4e
	lsls r0, r0, #24	@ 0011ef4e 0006
.org 0x11ef50
	lsrs r4, r0, #24	@ 0011ef50 040e
.org 0x11ef52
	ldr r0, [sp, #4]	@ 0011ef52 0198
.org 0x11ef54
	adds r0, #240	@ 0011ef54 f030
.org 0x11ef56
	ldrb r0, [r0, #0]	@ 0011ef56 0078
.org 0x11ef58
	cmp r4, r0	@ 0011ef58 8442
.org 0x11ef5a
	bcc.n 0x11ef20	@ 0011ef5a e1d3
.org 0x11ef5c
	movs r2, #221	@ 0011ef5c dd22
.org 0x11ef5e
	lsls r2, r2, #4	@ 0011ef5e 1201
.org 0x11ef60
	adds r4, r7, r2	@ 0011ef60 bc18
.org 0x11ef62
	adds r0, r7, #0	@ 0011ef62 381c
.org 0x11ef64
	adds r1, r4, #0	@ 0011ef64 211c
.org 0x11ef66
	movs r2, #2	@ 0011ef66 0222
.org 0x11ef68
	movs r3, #1	@ 0011ef68 0123
.org 0x11ef6a
	bl 0x10b708	@ 0011ef6a ecf7cdfb
.org 0x11ef6e
	adds r0, r7, #0	@ 0011ef6e 381c
.org 0x11ef70
	adds r1, r4, #0	@ 0011ef70 211c
.org 0x11ef72
	movs r2, #4	@ 0011ef72 0422
.org 0x11ef74
	movs r3, #0	@ 0011ef74 0023
.org 0x11ef76
	bl 0x10b708	@ 0011ef76 ecf7c7fb
.org 0x11ef7a
	adds r0, r7, #0	@ 0011ef7a 381c
.org 0x11ef7c
	adds r1, r4, #0	@ 0011ef7c 211c
.org 0x11ef7e
	movs r2, #3	@ 0011ef7e 0322
.org 0x11ef80
	movs r3, #0	@ 0011ef80 0023
.org 0x11ef82
	bl 0x10b708	@ 0011ef82 ecf7c1fb
.org 0x11ef86
	movs r0, #65	@ 0011ef86 4120
.org 0x11ef88
	movs r1, #0	@ 0011ef88 0021
.org 0x11ef8a
	bl 0x249c	@ 0011ef8a e3f687fa
.org 0x11ef8e
	ldr r3, [pc, #120]	@ 0011ef8e 1e4b
.org 0x11ef90
	adds r0, r7, r3	@ 0011ef90 f818
.org 0x11ef92
	ldr r1, [pc, #120]	@ 0011ef92 1e49
.org 0x11ef94
	ldrh r2, [r1, #0]	@ 0011ef94 0a88
.org 0x11ef96
	movs r1, #248	@ 0011ef96 f821
.org 0x11ef98
	lsls r1, r1, #5	@ 0011ef98 4901
.org 0x11ef9a
	ands r1, r2	@ 0011ef9a 1140
.org 0x11ef9c
	lsls r1, r1, #3	@ 0011ef9c c900
.org 0x11ef9e
	movs r2, #128	@ 0011ef9e 8022
.org 0x11efa0
	lsls r2, r2, #5	@ 0011efa0 5201
.org 0x11efa2
	bl 0x1f1c	@ 0011efa2 e2f6bbff
.org 0x11efa6
	movs r0, #1	@ 0011efa6 0120
.org 0x11efa8
	strb r0, [r7, #1]	@ 0011efa8 7870
.org 0x11efaa
	adds r0, r7, #0	@ 0011efaa 381c
.org 0x11efac
	bl 0x11f010	@ 0011efac 00f030f8
.org 0x11efb0
	add sp, #12	@ 0011efb0 03b0
.org 0x11efb2
	pop {r3, r4, r5}	@ 0011efb2 38bc
.org 0x11efb4
	mov r8, r3	@ 0011efb4 9846
.org 0x11efb6
	mov r9, r4	@ 0011efb6 a146
.org 0x11efb8
	mov sl, r5	@ 0011efb8 aa46
.org 0x11efba
	pop {r4, r5, r6, r7}	@ 0011efba f0bc
.org 0x11efbc
	pop {r0}	@ 0011efbc 01bc
.org 0x11efbe
	bx r0	@ 0011efbe 0047
