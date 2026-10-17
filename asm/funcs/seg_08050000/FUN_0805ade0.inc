@ FUN_0805ade0  entry 0x0805ade0  size 478
.thumb
.org 0x5ade0
FUN_0805ade0:
	push {r4, r5, r6, r7, lr}	@ 0005ade0 f0b5
.org 0x5ade2
	sub sp, #8	@ 0005ade2 82b0
.org 0x5ade4
	adds r4, r0, #0	@ 0005ade4 041c
.org 0x5ade6
	ldrb r0, [r4, #10]	@ 0005ade6 a07a
.org 0x5ade8
	lsrs r7, r0, #4	@ 0005ade8 0709
.org 0x5adea
	movs r0, #1	@ 0005adea 0120
.org 0x5adec
	ands r7, r0	@ 0005adec 0740
.org 0x5adee
	ldrb r0, [r4, #15]	@ 0005adee e07b
.org 0x5adf0
	cmp r0, #0	@ 0005adf0 0028
.org 0x5adf2
	bne.n 0x5ae9e	@ 0005adf2 54d1
.org 0x5adf4
	ldr r0, [pc, #456]	@ 0005adf4 7248
.org 0x5adf6
	ldr r1, [pc, #460]	@ 0005adf6 7349
.org 0x5adf8
	adds r1, #138	@ 0005adf8 8a31
.org 0x5adfa
	ldrh r1, [r1, #0]	@ 0005adfa 0988
.org 0x5adfc
	ldrh r2, [r0, #6]	@ 0005adfc c288
.org 0x5adfe
	lsrs r2, r2, #6	@ 0005adfe 9209
.org 0x5ae00
	subs r1, r1, r2	@ 0005ae00 891a
.org 0x5ae02
	lsls r1, r1, #5	@ 0005ae02 4901
.org 0x5ae04
	movs r2, #128	@ 0005ae04 8022
.org 0x5ae06
	lsls r2, r2, #9	@ 0005ae06 5202
.org 0x5ae08
	adds r1, r1, r2	@ 0005ae08 8918
.org 0x5ae0a
	bl 0x1d30	@ 0005ae0a a6f791ff
.org 0x5ae0e
	ldr r0, [pc, #440]	@ 0005ae0e 6e48
.org 0x5ae10
	ldr r1, [pc, #440]	@ 0005ae10 6e49
.org 0x5ae12
	adds r1, #138	@ 0005ae12 8a31
.org 0x5ae14
	ldrh r1, [r1, #0]	@ 0005ae14 0988
.org 0x5ae16
	ldrb r2, [r0, #7]	@ 0005ae16 c279
.org 0x5ae18
	subs r1, r1, r2	@ 0005ae18 891a
.org 0x5ae1a
	lsls r1, r1, #5	@ 0005ae1a 4901
.org 0x5ae1c
	movs r2, #128	@ 0005ae1c 8022
.org 0x5ae1e
	lsls r2, r2, #2	@ 0005ae1e 9200
.org 0x5ae20
	adds r1, r1, r2	@ 0005ae20 8918
.org 0x5ae22
	bl 0x2208	@ 0005ae22 a7f7f1f9
.org 0x5ae26
	adds r5, r4, #0	@ 0005ae26 251c
.org 0x5ae28
	adds r5, #200	@ 0005ae28 c835
.org 0x5ae2a
	ldr r0, [r5, #0]	@ 0005ae2a 2868
.org 0x5ae2c
	adds r6, r4, #0	@ 0005ae2c 261c
.org 0x5ae2e
	adds r6, #191	@ 0005ae2e bf36
.org 0x5ae30
	cmp r0, #0	@ 0005ae30 0028
.org 0x5ae32
	beq.n 0x5ae3a	@ 0005ae32 02d0
.org 0x5ae34
	ldrb r0, [r6, #0]	@ 0005ae34 3078
.org 0x5ae36
	cmp r0, #3	@ 0005ae36 0328
.org 0x5ae38
	beq.n 0x5ae4c	@ 0005ae38 08d0
.org 0x5ae3a
	adds r0, r4, #0	@ 0005ae3a 201c
.org 0x5ae3c
	bl 0x95dfc	@ 0005ae3c 3af0deff
.org 0x5ae40
	str r0, [r5, #0]	@ 0005ae40 2860
.org 0x5ae42
	movs r1, #255	@ 0005ae42 ff21
.org 0x5ae44
	cmp r0, #0	@ 0005ae44 0028
.org 0x5ae46
	beq.n 0x5ae4a	@ 0005ae46 00d0
.org 0x5ae48
	movs r1, #3	@ 0005ae48 0321
.org 0x5ae4a
	strb r1, [r6, #0]	@ 0005ae4a 3170
.org 0x5ae4c
	adds r0, r4, #0	@ 0005ae4c 201c
.org 0x5ae4e
	adds r0, #116	@ 0005ae4e 7430
.org 0x5ae50
	ldr r1, [pc, #380]	@ 0005ae50 5f49
.org 0x5ae52
	bl 0x5784	@ 0005ae52 aaf797fc
.org 0x5ae56
	ldrb r0, [r4, #30]	@ 0005ae56 a07f
.org 0x5ae58
	lsls r0, r0, #8	@ 0005ae58 0002
.org 0x5ae5a
	adds r1, r4, #0	@ 0005ae5a 211c
.org 0x5ae5c
	adds r1, #112	@ 0005ae5c 7031
.org 0x5ae5e
	ldrb r1, [r1, #0]	@ 0005ae5e 0978
.org 0x5ae60
	orrs r0, r1	@ 0005ae60 0843
.org 0x5ae62
	ldr r1, [pc, #368]	@ 0005ae62 5c49
.org 0x5ae64
	cmp r0, r1	@ 0005ae64 8842
.org 0x5ae66
	beq.n 0x5ae76	@ 0005ae66 06d0
.org 0x5ae68
	adds r0, r4, #0	@ 0005ae68 201c
.org 0x5ae6a
	bl 0x1cf00	@ 0005ae6a c2f749f8
.org 0x5ae6e
	adds r1, r4, #0	@ 0005ae6e 211c
.org 0x5ae70
	adds r1, #189	@ 0005ae70 bd31
.org 0x5ae72
	movs r0, #1	@ 0005ae72 0120
.org 0x5ae74
	strb r0, [r1, #0]	@ 0005ae74 0870
.org 0x5ae76
	lsls r0, r7, #1	@ 0005ae76 7800
.org 0x5ae78
	subs r0, #1	@ 0005ae78 0138
.org 0x5ae7a
	str r0, [r4, #96]	@ 0005ae7a 2066
.org 0x5ae7c
	lsls r0, r0, #8	@ 0005ae7c 0002
.org 0x5ae7e
	str r0, [r4, #92]	@ 0005ae7e e065
.org 0x5ae80
	ldr r0, [r4, #84]	@ 0005ae80 606d
.org 0x5ae82
	str r0, [r4, #100]	@ 0005ae82 6066
.org 0x5ae84
	ldr r0, [r4, #88]	@ 0005ae84 a06d
.org 0x5ae86
	str r0, [r4, #104]	@ 0005ae86 a066
.org 0x5ae88
	movs r0, #1	@ 0005ae88 0120
.org 0x5ae8a
	strb r0, [r4, #18]	@ 0005ae8a a074
.org 0x5ae8c
	movs r0, #3	@ 0005ae8c 0320
.org 0x5ae8e
	strb r0, [r4, #19]	@ 0005ae8e e074
.org 0x5ae90
	adds r1, r4, #0	@ 0005ae90 211c
.org 0x5ae92
	adds r1, #192	@ 0005ae92 c031
.org 0x5ae94
	movs r0, #148	@ 0005ae94 9420
.org 0x5ae96
	str r0, [r1, #0]	@ 0005ae96 0860
.org 0x5ae98
	ldrb r0, [r4, #15]	@ 0005ae98 e07b
.org 0x5ae9a
	adds r0, #1	@ 0005ae9a 0130
.org 0x5ae9c
	strb r0, [r4, #15]	@ 0005ae9c e073
.org 0x5ae9e
	adds r0, r4, #0	@ 0005ae9e 201c
.org 0x5aea0
	bl 0x1cff0	@ 0005aea0 c2f7a6f8
.org 0x5aea4
	adds r1, r4, #0	@ 0005aea4 211c
.org 0x5aea6
	adds r1, #192	@ 0005aea6 c031
.org 0x5aea8
	ldr r0, [r1, #0]	@ 0005aea8 0868
.org 0x5aeaa
	cmp r0, #0	@ 0005aeaa 0028
.org 0x5aeac
	beq.n 0x5aebc	@ 0005aeac 06d0
.org 0x5aeae
	subs r0, #1	@ 0005aeae 0138
.org 0x5aeb0
	str r0, [r1, #0]	@ 0005aeb0 0860
.org 0x5aeb2
	cmp r0, #0	@ 0005aeb2 0028
.org 0x5aeb4
	bgt.n 0x5aebc	@ 0005aeb4 02dc
.org 0x5aeb6
	movs r0, #190	@ 0005aeb6 be20
.org 0x5aeb8
	bl 0x2b10	@ 0005aeb8 a7f72afe
.org 0x5aebc
	ldr r0, [r4, #84]	@ 0005aebc 606d
.org 0x5aebe
	ldr r1, [r4, #92]	@ 0005aebe e16d
.org 0x5aec0
	adds r0, r0, r1	@ 0005aec0 4018
.org 0x5aec2
	str r0, [r4, #84]	@ 0005aec2 6065
.org 0x5aec4
	ldr r6, [r4, #100]	@ 0005aec4 666e
.org 0x5aec6
	subs r0, r0, r6	@ 0005aec6 801b
.org 0x5aec8
	ldr r3, [r4, #96]	@ 0005aec8 236e
.org 0x5aeca
	adds r5, r0, #0	@ 0005aeca 051c
.org 0x5aecc
	muls r5, r3	@ 0005aecc 5d43
.org 0x5aece
	adds r0, r5, #0	@ 0005aece 281c
.org 0x5aed0
	cmp r5, #0	@ 0005aed0 002d
.org 0x5aed2
	bge.n 0x5aed8	@ 0005aed2 01da
.org 0x5aed4
	ldr r1, [pc, #256]	@ 0005aed4 4049
.org 0x5aed6
	adds r0, r5, r1	@ 0005aed6 6818
.org 0x5aed8
	asrs r0, r0, #14	@ 0005aed8 8013
.org 0x5aeda
	lsls r0, r0, #14	@ 0005aeda 8003
.org 0x5aedc
	subs r0, r5, r0	@ 0005aedc 281a
.org 0x5aede
	cmp r0, #0	@ 0005aede 0028
.org 0x5aee0
	bge.n 0x5aee4	@ 0005aee0 00da
.org 0x5aee2
	adds r0, #63	@ 0005aee2 3f30
.org 0x5aee4
	asrs r0, r0, #6	@ 0005aee4 8011
.org 0x5aee6
	lsls r0, r0, #24	@ 0005aee6 0006
.org 0x5aee8
	movs r2, #128	@ 0005aee8 8022
.org 0x5aeea
	lsls r2, r2, #23	@ 0005aeea d205
.org 0x5aeec
	adds r0, r0, r2	@ 0005aeec 8018
.org 0x5aeee
	ldr r1, [pc, #236]	@ 0005aeee 3b49
.org 0x5aef0
	lsrs r0, r0, #23	@ 0005aef0 c00d
.org 0x5aef2
	adds r0, r0, r1	@ 0005aef2 4018
.org 0x5aef4
	movs r2, #0	@ 0005aef4 0022
.org 0x5aef6
	ldrsh r1, [r0, r2]	@ 0005aef6 815e
.org 0x5aef8
	movs r0, #44	@ 0005aef8 2c20
.org 0x5aefa
	muls r0, r1	@ 0005aefa 4843
.org 0x5aefc
	ldr r1, [pc, #224]	@ 0005aefc 3849
.org 0x5aefe
	adds r0, r0, r1	@ 0005aefe 4018
.org 0x5af00
	ldr r1, [r4, #104]	@ 0005af00 a16e
.org 0x5af02
	adds r2, r1, r0	@ 0005af02 0a18
.org 0x5af04
	str r2, [r4, #88]	@ 0005af04 a265
.org 0x5af06
	ldrb r0, [r4, #19]	@ 0005af06 e07c
.org 0x5af08
	cmp r0, #0	@ 0005af08 0028
.org 0x5af0a
	beq.n 0x5af94	@ 0005af0a 43d0
.org 0x5af0c
	adds r1, r0, #0	@ 0005af0c 011c
.org 0x5af0e
	movs r0, #3	@ 0005af0e 0320
.org 0x5af10
	subs r0, r0, r1	@ 0005af10 401a
.org 0x5af12
	lsls r0, r0, #14	@ 0005af12 8003
.org 0x5af14
	cmp r5, r0	@ 0005af14 8542
.org 0x5af16
	blt.n 0x5af7c	@ 0005af16 31db
.org 0x5af18
	muls r0, r3	@ 0005af18 5843
.org 0x5af1a
	adds r0, r6, r0	@ 0005af1a 3018
.org 0x5af1c
	str r0, [sp, #0]	@ 0005af1c 0090
.org 0x5af1e
	str r2, [sp, #4]	@ 0005af1e 0192
.org 0x5af20
	adds r0, r4, #0	@ 0005af20 201c
.org 0x5af22
	adds r0, #200	@ 0005af22 c830
.org 0x5af24
	ldr r1, [r0, #0]	@ 0005af24 0168
.org 0x5af26
	adds r6, r0, #0	@ 0005af26 061c
.org 0x5af28
	cmp r1, #0	@ 0005af28 0029
.org 0x5af2a
	beq.n 0x5af5a	@ 0005af2a 16d0
.org 0x5af2c
	subs r0, #9	@ 0005af2c 0938
.org 0x5af2e
	ldrb r0, [r0, #0]	@ 0005af2e 0078
.org 0x5af30
	cmp r0, #3	@ 0005af30 0328
.org 0x5af32
	bne.n 0x5af5a	@ 0005af32 12d1
.org 0x5af34
	adds r0, r1, #0	@ 0005af34 081c
.org 0x5af36
	adds r0, #181	@ 0005af36 b530
.org 0x5af38
	ldrb r0, [r0, #0]	@ 0005af38 0078
.org 0x5af3a
	cmp r0, #0	@ 0005af3a 0028
.org 0x5af3c
	bne.n 0x5af5a	@ 0005af3c 0dd1
.org 0x5af3e
	adds r0, r1, #0	@ 0005af3e 081c
.org 0x5af40
	adds r0, #180	@ 0005af40 b430
.org 0x5af42
	ldrb r2, [r0, #0]	@ 0005af42 0278
.org 0x5af44
	adds r0, r1, #0	@ 0005af44 081c
.org 0x5af46
	mov r1, sp	@ 0005af46 6946
.org 0x5af48
	bl 0x95e60	@ 0005af48 3af08aff
.org 0x5af4c
	cmp r0, #0	@ 0005af4c 0028
.org 0x5af4e
	beq.n 0x5af5a	@ 0005af4e 04d0
.org 0x5af50
	ldr r1, [r6, #0]	@ 0005af50 3168
.org 0x5af52
	adds r1, #180	@ 0005af52 b431
.org 0x5af54
	ldrb r0, [r1, #0]	@ 0005af54 0878
.org 0x5af56
	adds r0, #1	@ 0005af56 0130
.org 0x5af58
	strb r0, [r1, #0]	@ 0005af58 0870
.org 0x5af5a
	ldrb r0, [r4, #19]	@ 0005af5a e07c
.org 0x5af5c
	subs r0, #1	@ 0005af5c 0138
.org 0x5af5e
	strb r0, [r4, #19]	@ 0005af5e e074
.org 0x5af60
	lsls r0, r0, #24	@ 0005af60 0006
.org 0x5af62
	cmp r0, #0	@ 0005af62 0028
.org 0x5af64
	bne.n 0x5af7c	@ 0005af64 0ad1
.org 0x5af66
	ldr r1, [r6, #0]	@ 0005af66 3168
.org 0x5af68
	cmp r1, #0	@ 0005af68 0029
.org 0x5af6a
	beq.n 0x5af7c	@ 0005af6a 07d0
.org 0x5af6c
	adds r0, r4, #0	@ 0005af6c 201c
.org 0x5af6e
	adds r0, #191	@ 0005af6e bf30
.org 0x5af70
	ldrb r0, [r0, #0]	@ 0005af70 0078
.org 0x5af72
	cmp r0, #3	@ 0005af72 0328
.org 0x5af74
	bne.n 0x5af7c	@ 0005af74 02d1
.org 0x5af76
	adds r1, #181	@ 0005af76 b531
.org 0x5af78
	movs r0, #1	@ 0005af78 0120
.org 0x5af7a
	strb r0, [r1, #0]	@ 0005af7a 0870
.org 0x5af7c
	ldrb r0, [r4, #18]	@ 0005af7c a07c
.org 0x5af7e
	cmp r0, #0	@ 0005af7e 0028
.org 0x5af80
	beq.n 0x5af94	@ 0005af80 08d0
.org 0x5af82
	movs r0, #128	@ 0005af82 8020
.org 0x5af84
	lsls r0, r0, #6	@ 0005af84 8001
.org 0x5af86
	cmp r5, r0	@ 0005af86 8542
.org 0x5af88
	blt.n 0x5af94	@ 0005af88 04db
.org 0x5af8a
	movs r0, #189	@ 0005af8a bd20
.org 0x5af8c
	bl 0x2b10	@ 0005af8c a7f7c0fd
.org 0x5af90
	movs r0, #0	@ 0005af90 0020
.org 0x5af92
	strb r0, [r4, #18]	@ 0005af92 a074
.org 0x5af94
	adds r0, r4, #0	@ 0005af94 201c
.org 0x5af96
	bl 0x5c3a8	@ 0005af96 01f007fa
.org 0x5af9a
	ldr r1, [r4, #84]	@ 0005af9a 616d
.org 0x5af9c
	subs r0, r0, r1	@ 0005af9c 401a
.org 0x5af9e
	movs r2, #180	@ 0005af9e b422
.org 0x5afa0
	lsls r2, r2, #9	@ 0005afa0 5202
.org 0x5afa2
	adds r0, r0, r2	@ 0005afa2 8018
.org 0x5afa4
	movs r1, #240	@ 0005afa4 f021
.org 0x5afa6
	lsls r1, r1, #9	@ 0005afa6 4902
.org 0x5afa8
	cmp r0, r1	@ 0005afa8 8842
.org 0x5afaa
	bls.n 0x5afb6	@ 0005afaa 04d9
.org 0x5afac
	movs r1, #0	@ 0005afac 0021
.org 0x5afae
	movs r0, #11	@ 0005afae 0b20
.org 0x5afb0
	strb r0, [r4, #13]	@ 0005afb0 6073
.org 0x5afb2
	strb r1, [r4, #14]	@ 0005afb2 a173
.org 0x5afb4
	strb r1, [r4, #15]	@ 0005afb4 e173
.org 0x5afb6
	add sp, #8	@ 0005afb6 02b0
.org 0x5afb8
	pop {r4, r5, r6, r7}	@ 0005afb8 f0bc
.org 0x5afba
	pop {r0}	@ 0005afba 01bc
.org 0x5afbc
	bx r0	@ 0005afbc 0047
