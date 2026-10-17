@ FUN_0807ee80  entry 0x0807ee80  size 772
.thumb
.org 0x7ee80
FUN_0807ee80:
	push {r4, r5, r6, r7, lr}	@ 0007ee80 f0b5
.org 0x7ee82
	mov r7, r9	@ 0007ee82 4f46
.org 0x7ee84
	mov r6, r8	@ 0007ee84 4646
.org 0x7ee86
	push {r6, r7}	@ 0007ee86 c0b4
.org 0x7ee88
	sub sp, #24	@ 0007ee88 86b0
.org 0x7ee8a
	adds r7, r0, #0	@ 0007ee8a 071c
.org 0x7ee8c
	ldrb r4, [r7, #14]	@ 0007ee8c bc7b
.org 0x7ee8e
	cmp r4, #0	@ 0007ee8e 002c
.org 0x7ee90
	bne.n 0x7eedc	@ 0007ee90 24d1
.org 0x7ee92
	ldr r1, [pc, #160]	@ 0007ee92 2849
.org 0x7ee94
	bl 0x1cf00	@ 0007ee94 9ef734f8
.org 0x7ee98
	adds r0, r7, #0	@ 0007ee98 381c
.org 0x7ee9a
	adds r0, #140	@ 0007ee9a 8c30
.org 0x7ee9c
	str r4, [r0, #0]	@ 0007ee9c 0460
.org 0x7ee9e
	adds r0, #4	@ 0007ee9e 0430
.org 0x7eea0
	str r4, [r0, #0]	@ 0007eea0 0460
.org 0x7eea2
	adds r0, #4	@ 0007eea2 0430
.org 0x7eea4
	strb r4, [r0, #0]	@ 0007eea4 0470
.org 0x7eea6
	ldrb r1, [r7, #10]	@ 0007eea6 b97a
.org 0x7eea8
	movs r0, #251	@ 0007eea8 fb20
.org 0x7eeaa
	ands r0, r1	@ 0007eeaa 0840
.org 0x7eeac
	strb r0, [r7, #10]	@ 0007eeac b872
.org 0x7eeae
	ldr r3, [pc, #136]	@ 0007eeae 224b
.org 0x7eeb0
	ldrh r2, [r3, #8]	@ 0007eeb0 1a89
.org 0x7eeb2
	movs r4, #1	@ 0007eeb2 0124
.org 0x7eeb4
	adds r0, r4, #0	@ 0007eeb4 201c
.org 0x7eeb6
	ands r0, r2	@ 0007eeb6 1040
.org 0x7eeb8
	cmp r0, #0	@ 0007eeb8 0028
.org 0x7eeba
	beq.n 0x7eed0	@ 0007eeba 09d0
.org 0x7eebc
	ldrb r1, [r3, #18]	@ 0007eebc 997c
.org 0x7eebe
	adds r0, r4, #0	@ 0007eebe 201c
.org 0x7eec0
	ands r0, r1	@ 0007eec0 0840
.org 0x7eec2
	cmp r0, #0	@ 0007eec2 0028
.org 0x7eec4
	bne.n 0x7eed0	@ 0007eec4 04d1
.org 0x7eec6
	ldr r0, [pc, #116]	@ 0007eec6 1d48
.org 0x7eec8
	ands r0, r2	@ 0007eec8 1040
.org 0x7eeca
	movs r1, #16	@ 0007eeca 1021
.org 0x7eecc
	orrs r0, r1	@ 0007eecc 0843
.org 0x7eece
	strh r0, [r3, #8]	@ 0007eece 1881
.org 0x7eed0
	movs r0, #16	@ 0007eed0 1020
.org 0x7eed2
	strb r0, [r7, #18]	@ 0007eed2 b874
.org 0x7eed4
	strb r0, [r7, #19]	@ 0007eed4 f874
.org 0x7eed6
	ldrb r0, [r7, #14]	@ 0007eed6 b87b
.org 0x7eed8
	adds r0, #1	@ 0007eed8 0130
.org 0x7eeda
	strb r0, [r7, #14]	@ 0007eeda b873
.org 0x7eedc
	adds r0, r7, #0	@ 0007eedc 381c
.org 0x7eede
	bl 0x1cff0	@ 0007eede 9ef787f8
.org 0x7eee2
	ldrb r4, [r7, #13]	@ 0007eee2 7c7b
.org 0x7eee4
	cmp r4, #0	@ 0007eee4 002c
.org 0x7eee6
	bne.n 0x7ef5a	@ 0007eee6 38d1
.org 0x7eee8
	adds r6, r7, #0	@ 0007eee8 3e1c
.org 0x7eeea
	adds r6, #140	@ 0007eeea 8c36
.org 0x7eeec
	ldr r0, [r6, #0]	@ 0007eeec 3068
.org 0x7eeee
	movs r1, #2	@ 0007eeee 0221
.org 0x7eef0
	negs r1, r1	@ 0007eef0 4942
.org 0x7eef2
	ands r0, r1	@ 0007eef2 0840
.org 0x7eef4
	str r0, [r6, #0]	@ 0007eef4 3060
.org 0x7eef6
	adds r5, r7, #0	@ 0007eef6 3d1c
.org 0x7eef8
	adds r5, #144	@ 0007eef8 9035
.org 0x7eefa
	ldr r0, [r5, #0]	@ 0007eefa 2868
.org 0x7eefc
	ands r0, r1	@ 0007eefc 0840
.org 0x7eefe
	str r0, [r5, #0]	@ 0007eefe 2860
.org 0x7ef00
	adds r0, r7, #0	@ 0007ef00 381c
.org 0x7ef02
	bl 0x1d330	@ 0007ef02 9ef715fa
.org 0x7ef06
	ldrb r0, [r7, #19]	@ 0007ef06 f87c
.org 0x7ef08
	subs r0, #1	@ 0007ef08 0138
.org 0x7ef0a
	strb r0, [r7, #19]	@ 0007ef0a f874
.org 0x7ef0c
	movs r1, #255	@ 0007ef0c ff21
.org 0x7ef0e
	lsls r0, r0, #24	@ 0007ef0e 0006
.org 0x7ef10
	lsrs r0, r0, #24	@ 0007ef10 000e
.org 0x7ef12
	cmp r0, #255	@ 0007ef12 ff28
.org 0x7ef14
	beq.n 0x7ef18	@ 0007ef14 00d0
.org 0x7ef16
	b.n 0x7f182	@ 0007ef16 34e1
.org 0x7ef18
	ldrb r0, [r7, #18]	@ 0007ef18 b87c
.org 0x7ef1a
	subs r0, #1	@ 0007ef1a 0138
.org 0x7ef1c
	strb r0, [r7, #18]	@ 0007ef1c b874
.org 0x7ef1e
	ands r0, r1	@ 0007ef1e 0840
.org 0x7ef20
	cmp r0, #0	@ 0007ef20 0028
.org 0x7ef22
	bne.n 0x7ef40	@ 0007ef22 0dd1
.org 0x7ef24
	movs r0, #180	@ 0007ef24 b420
.org 0x7ef26
	strb r0, [r7, #18]	@ 0007ef26 b874
.org 0x7ef28
	strb r4, [r7, #19]	@ 0007ef28 fc74
.org 0x7ef2a
	adds r1, r7, #0	@ 0007ef2a 391c
.org 0x7ef2c
	adds r1, #180	@ 0007ef2c b431
.org 0x7ef2e
	movs r0, #16	@ 0007ef2e 1020
.org 0x7ef30
	strh r0, [r1, #28]	@ 0007ef30 8883
.org 0x7ef32
	b.n 0x7f17c	@ 0007ef32 23e1
.org 0x7ef34
	.byte 0x09,0xc8,0x00,0x00	@ 0007ef34 data
.org 0x7ef38
	.byte 0x10,0xe9,0x02,0x02	@ 0007ef38 data
.org 0x7ef3c
	.byte 0xfe,0xff,0x00,0x00	@ 0007ef3c data
.org 0x7ef40
	ldr r0, [r6, #0]	@ 0007ef40 3068
.org 0x7ef42
	movs r1, #1	@ 0007ef42 0121
.org 0x7ef44
	orrs r0, r1	@ 0007ef44 0843
.org 0x7ef46
	str r0, [r6, #0]	@ 0007ef46 3060
.org 0x7ef48
	ldr r0, [r5, #0]	@ 0007ef48 2868
.org 0x7ef4a
	orrs r0, r1	@ 0007ef4a 0843
.org 0x7ef4c
	str r0, [r5, #0]	@ 0007ef4c 2860
.org 0x7ef4e
	adds r0, r7, #0	@ 0007ef4e 381c
.org 0x7ef50
	bl 0x1d3fc	@ 0007ef50 9ef754fa
.org 0x7ef54
	ldrb r0, [r7, #18]	@ 0007ef54 b87c
.org 0x7ef56
	strb r0, [r7, #19]	@ 0007ef56 f874
.org 0x7ef58
	b.n 0x7f182	@ 0007ef58 13e1
.org 0x7ef5a
	cmp r4, #1	@ 0007ef5a 012c
.org 0x7ef5c
	beq.n 0x7ef60	@ 0007ef5c 00d0
.org 0x7ef5e
	b.n 0x7f182	@ 0007ef5e 10e1
.org 0x7ef60
	ldrb r1, [r7, #18]	@ 0007ef60 b97c
.org 0x7ef62
	cmp r1, #119	@ 0007ef62 7729
.org 0x7ef64
	bhi.n 0x7efb2	@ 0007ef64 25d8
.org 0x7ef66
	adds r2, r7, #0	@ 0007ef66 3a1c
.org 0x7ef68
	adds r2, #180	@ 0007ef68 b432
.org 0x7ef6a
	movs r0, #8	@ 0007ef6a 0820
.org 0x7ef6c
	strh r0, [r2, #28]	@ 0007ef6c 9083
.org 0x7ef6e
	ldrb r1, [r7, #18]	@ 0007ef6e b97c
.org 0x7ef70
	adds r0, r4, #0	@ 0007ef70 201c
.org 0x7ef72
	ands r0, r1	@ 0007ef72 0840
.org 0x7ef74
	mov r9, r2	@ 0007ef74 9146
.org 0x7ef76
	cmp r0, #0	@ 0007ef76 0028
.org 0x7ef78
	beq.n 0x7ef98	@ 0007ef78 0ed0
.org 0x7ef7a
	adds r1, r7, #0	@ 0007ef7a 391c
.org 0x7ef7c
	adds r1, #140	@ 0007ef7c 8c31
.org 0x7ef7e
	ldr r0, [r1, #0]	@ 0007ef7e 0868
.org 0x7ef80
	movs r2, #2	@ 0007ef80 0222
.org 0x7ef82
	negs r2, r2	@ 0007ef82 5242
.org 0x7ef84
	ands r0, r2	@ 0007ef84 1040
.org 0x7ef86
	str r0, [r1, #0]	@ 0007ef86 0860
.org 0x7ef88
	adds r1, #4	@ 0007ef88 0431
.org 0x7ef8a
	ldr r0, [r1, #0]	@ 0007ef8a 0868
.org 0x7ef8c
	ands r0, r2	@ 0007ef8c 1040
.org 0x7ef8e
	str r0, [r1, #0]	@ 0007ef8e 0860
.org 0x7ef90
	adds r0, r7, #0	@ 0007ef90 381c
.org 0x7ef92
	bl 0x1d330	@ 0007ef92 9ef7cdf9
.org 0x7ef96
	b.n 0x7effc	@ 0007ef96 31e0
.org 0x7ef98
	adds r1, r7, #0	@ 0007ef98 391c
.org 0x7ef9a
	adds r1, #140	@ 0007ef9a 8c31
.org 0x7ef9c
	ldr r0, [r1, #0]	@ 0007ef9c 0868
.org 0x7ef9e
	orrs r0, r4	@ 0007ef9e 2043
.org 0x7efa0
	str r0, [r1, #0]	@ 0007efa0 0860
.org 0x7efa2
	adds r1, #4	@ 0007efa2 0431
.org 0x7efa4
	ldr r0, [r1, #0]	@ 0007efa4 0868
.org 0x7efa6
	orrs r0, r4	@ 0007efa6 2043
.org 0x7efa8
	str r0, [r1, #0]	@ 0007efa8 0860
.org 0x7efaa
	adds r0, r7, #0	@ 0007efaa 381c
.org 0x7efac
	bl 0x1d3fc	@ 0007efac 9ef726fa
.org 0x7efb0
	b.n 0x7effc	@ 0007efb0 24e0
.org 0x7efb2
	movs r0, #3	@ 0007efb2 0320
.org 0x7efb4
	ands r0, r1	@ 0007efb4 0840
.org 0x7efb6
	cmp r0, #0	@ 0007efb6 0028
.org 0x7efb8
	beq.n 0x7efde	@ 0007efb8 11d0
.org 0x7efba
	adds r1, r7, #0	@ 0007efba 391c
.org 0x7efbc
	adds r1, #140	@ 0007efbc 8c31
.org 0x7efbe
	ldr r0, [r1, #0]	@ 0007efbe 0868
.org 0x7efc0
	movs r2, #2	@ 0007efc0 0222
.org 0x7efc2
	negs r2, r2	@ 0007efc2 5242
.org 0x7efc4
	ands r0, r2	@ 0007efc4 1040
.org 0x7efc6
	str r0, [r1, #0]	@ 0007efc6 0860
.org 0x7efc8
	adds r1, #4	@ 0007efc8 0431
.org 0x7efca
	ldr r0, [r1, #0]	@ 0007efca 0868
.org 0x7efcc
	ands r0, r2	@ 0007efcc 1040
.org 0x7efce
	str r0, [r1, #0]	@ 0007efce 0860
.org 0x7efd0
	adds r0, r7, #0	@ 0007efd0 381c
.org 0x7efd2
	bl 0x1d330	@ 0007efd2 9ef7adf9
.org 0x7efd6
	movs r0, #180	@ 0007efd6 b420
.org 0x7efd8
	adds r0, r0, r7	@ 0007efd8 c019
.org 0x7efda
	mov r9, r0	@ 0007efda 8146
.org 0x7efdc
	b.n 0x7effc	@ 0007efdc 0ee0
.org 0x7efde
	adds r1, r7, #0	@ 0007efde 391c
.org 0x7efe0
	adds r1, #140	@ 0007efe0 8c31
.org 0x7efe2
	ldr r0, [r1, #0]	@ 0007efe2 0868
.org 0x7efe4
	orrs r0, r4	@ 0007efe4 2043
.org 0x7efe6
	str r0, [r1, #0]	@ 0007efe6 0860
.org 0x7efe8
	adds r1, #4	@ 0007efe8 0431
.org 0x7efea
	ldr r0, [r1, #0]	@ 0007efea 0868
.org 0x7efec
	orrs r0, r4	@ 0007efec 2043
.org 0x7efee
	str r0, [r1, #0]	@ 0007efee 0860
.org 0x7eff0
	adds r0, r7, #0	@ 0007eff0 381c
.org 0x7eff2
	bl 0x1d3fc	@ 0007eff2 9ef703fa
.org 0x7eff6
	movs r1, #180	@ 0007eff6 b421
.org 0x7eff8
	adds r1, r1, r7	@ 0007eff8 c919
.org 0x7effa
	mov r9, r1	@ 0007effa 8946
.org 0x7effc
	ldrb r0, [r7, #18]	@ 0007effc b87c
.org 0x7effe
	mov r2, r9	@ 0007effe 4a46
.org 0x7f000
	ldrh r1, [r2, #28]	@ 0007f000 918b
.org 0x7f002
	bl 0x129050	@ 0007f002 aaf025f8
.org 0x7f006
	cmp r0, #0	@ 0007f006 0028
.org 0x7f008
	bne.n 0x7f082	@ 0007f008 3bd1
.org 0x7f00a
	ldr r5, [pc, #388]	@ 0007f00a 614d
.org 0x7f00c
	ldr r0, [r5, #0]	@ 0007f00c 2868
.org 0x7f00e
	ldr r1, [pc, #388]	@ 0007f00e 6149
.org 0x7f010
	mov r8, r1	@ 0007f010 8846
.org 0x7f012
	mov r2, r8	@ 0007f012 4246
.org 0x7f014
	muls r2, r0	@ 0007f014 4243
.org 0x7f016
	adds r0, r2, #0	@ 0007f016 101c
.org 0x7f018
	ldr r6, [pc, #380]	@ 0007f018 5f4e
.org 0x7f01a
	adds r0, r0, r6	@ 0007f01a 8019
.org 0x7f01c
	lsls r0, r0, #1	@ 0007f01c 4000
.org 0x7f01e
	lsrs r4, r0, #1	@ 0007f01e 4408
.org 0x7f020
	str r4, [r5, #0]	@ 0007f020 2c60
.org 0x7f022
	lsrs r0, r0, #17	@ 0007f022 400c
.org 0x7f024
	movs r1, #48	@ 0007f024 3021
.org 0x7f026
	bl 0x129198	@ 0007f026 aaf0b7f8
.org 0x7f02a
	movs r1, #24	@ 0007f02a 1821
.org 0x7f02c
	subs r1, r1, r0	@ 0007f02c 091a
.org 0x7f02e
	lsls r1, r1, #8	@ 0007f02e 0902
.org 0x7f030
	ldr r0, [r7, #84]	@ 0007f030 786d
.org 0x7f032
	adds r0, r0, r1	@ 0007f032 4018
.org 0x7f034
	str r0, [sp, #0]	@ 0007f034 0090
.org 0x7f036
	mov r0, r8	@ 0007f036 4046
.org 0x7f038
	muls r0, r4	@ 0007f038 6043
.org 0x7f03a
	adds r0, r0, r6	@ 0007f03a 8019
.org 0x7f03c
	lsls r0, r0, #1	@ 0007f03c 4000
.org 0x7f03e
	lsrs r4, r0, #1	@ 0007f03e 4408
.org 0x7f040
	str r4, [r5, #0]	@ 0007f040 2c60
.org 0x7f042
	lsrs r0, r0, #17	@ 0007f042 400c
.org 0x7f044
	movs r1, #48	@ 0007f044 3021
.org 0x7f046
	bl 0x129198	@ 0007f046 aaf0a7f8
.org 0x7f04a
	lsls r0, r0, #8	@ 0007f04a 0002
.org 0x7f04c
	ldr r1, [r7, #88]	@ 0007f04c b96d
.org 0x7f04e
	adds r1, r1, r0	@ 0007f04e 0918
.org 0x7f050
	str r1, [sp, #4]	@ 0007f050 0191
.org 0x7f052
	mov r1, r8	@ 0007f052 4146
.org 0x7f054
	muls r1, r4	@ 0007f054 6143
.org 0x7f056
	adds r1, r1, r6	@ 0007f056 8919
.org 0x7f058
	lsls r1, r1, #1	@ 0007f058 4900
.org 0x7f05a
	lsrs r0, r1, #1	@ 0007f05a 4808
.org 0x7f05c
	str r0, [r5, #0]	@ 0007f05c 2860
.org 0x7f05e
	lsrs r1, r1, #17	@ 0007f05e 490c
.org 0x7f060
	movs r0, #63	@ 0007f060 3f20
.org 0x7f062
	ands r1, r0	@ 0007f062 0140
.org 0x7f064
	ldrb r0, [r7, #19]	@ 0007f064 f87c
.org 0x7f066
	adds r1, r1, r0	@ 0007f066 0918
.org 0x7f068
	lsls r1, r1, #24	@ 0007f068 0906
.org 0x7f06a
	lsrs r1, r1, #24	@ 0007f06a 090e
.org 0x7f06c
	movs r2, #224	@ 0007f06c e022
.org 0x7f06e
	lsls r2, r2, #1	@ 0007f06e 5200
.org 0x7f070
	mov r0, sp	@ 0007f070 6846
.org 0x7f072
	bl 0xe1b14	@ 0007f072 62f04ffd
.org 0x7f076
	movs r0, #42	@ 0007f076 2a20
.org 0x7f078
	bl 0x2b10	@ 0007f078 83f74afd
.org 0x7f07c
	ldrb r0, [r7, #19]	@ 0007f07c f87c
.org 0x7f07e
	adds r0, #64	@ 0007f07e 4030
.org 0x7f080
	strb r0, [r7, #19]	@ 0007f080 f874
.org 0x7f082
	ldrb r0, [r7, #18]	@ 0007f082 b87c
.org 0x7f084
	mov r1, r9	@ 0007f084 4946
.org 0x7f086
	ldrh r4, [r1, #28]	@ 0007f086 8c8b
.org 0x7f088
	adds r1, r4, #0	@ 0007f088 211c
.org 0x7f08a
	bl 0x129050	@ 0007f08a a9f0e1ff
.org 0x7f08e
	lsrs r4, r4, #1	@ 0007f08e 6408
.org 0x7f090
	cmp r0, r4	@ 0007f090 a042
.org 0x7f092
	bne.n 0x7f0f0	@ 0007f092 2dd1
.org 0x7f094
	ldr r4, [pc, #248]	@ 0007f094 3e4c
.org 0x7f096
	ldr r0, [r4, #0]	@ 0007f096 2068
.org 0x7f098
	ldr r2, [pc, #248]	@ 0007f098 3e4a
.org 0x7f09a
	mov r8, r2	@ 0007f09a 9046
.org 0x7f09c
	mov r1, r8	@ 0007f09c 4146
.org 0x7f09e
	muls r1, r0	@ 0007f09e 4143
.org 0x7f0a0
	adds r0, r1, #0	@ 0007f0a0 081c
.org 0x7f0a2
	ldr r6, [pc, #244]	@ 0007f0a2 3d4e
.org 0x7f0a4
	adds r0, r0, r6	@ 0007f0a4 8019
.org 0x7f0a6
	lsls r0, r0, #1	@ 0007f0a6 4000
.org 0x7f0a8
	lsrs r5, r0, #1	@ 0007f0a8 4508
.org 0x7f0aa
	str r5, [r4, #0]	@ 0007f0aa 2560
.org 0x7f0ac
	lsrs r0, r0, #17	@ 0007f0ac 400c
.org 0x7f0ae
	movs r1, #48	@ 0007f0ae 3021
.org 0x7f0b0
	bl 0x129198	@ 0007f0b0 aaf072f8
.org 0x7f0b4
	movs r1, #24	@ 0007f0b4 1821
.org 0x7f0b6
	subs r1, r1, r0	@ 0007f0b6 091a
.org 0x7f0b8
	lsls r1, r1, #8	@ 0007f0b8 0902
.org 0x7f0ba
	ldr r0, [r7, #84]	@ 0007f0ba 786d
.org 0x7f0bc
	adds r0, r0, r1	@ 0007f0bc 4018
.org 0x7f0be
	str r0, [sp, #8]	@ 0007f0be 0290
.org 0x7f0c0
	mov r0, r8	@ 0007f0c0 4046
.org 0x7f0c2
	muls r0, r5	@ 0007f0c2 6843
.org 0x7f0c4
	adds r0, r0, r6	@ 0007f0c4 8019
.org 0x7f0c6
	lsls r0, r0, #1	@ 0007f0c6 4000
.org 0x7f0c8
	lsrs r1, r0, #1	@ 0007f0c8 4108
.org 0x7f0ca
	str r1, [r4, #0]	@ 0007f0ca 2160
.org 0x7f0cc
	lsrs r0, r0, #17	@ 0007f0cc 400c
.org 0x7f0ce
	movs r1, #48	@ 0007f0ce 3021
.org 0x7f0d0
	bl 0x129198	@ 0007f0d0 aaf062f8
.org 0x7f0d4
	lsls r0, r0, #8	@ 0007f0d4 0002
.org 0x7f0d6
	ldr r2, [r7, #88]	@ 0007f0d6 ba6d
.org 0x7f0d8
	adds r2, r2, r0	@ 0007f0d8 1218
.org 0x7f0da
	add r1, sp, #8	@ 0007f0da 02a9
.org 0x7f0dc
	str r2, [r1, #4]	@ 0007f0dc 4a60
.org 0x7f0de
	movs r0, #1	@ 0007f0de 0120
.org 0x7f0e0
	bl 0xd0c88	@ 0007f0e0 51f0d2fd
.org 0x7f0e4
	ldrb r0, [r7, #18]	@ 0007f0e4 b87c
.org 0x7f0e6
	cmp r0, #111	@ 0007f0e6 6f28
.org 0x7f0e8
	bhi.n 0x7f0f0	@ 0007f0e8 02d8
.org 0x7f0ea
	movs r0, #42	@ 0007f0ea 2a20
.org 0x7f0ec
	bl 0x2b10	@ 0007f0ec 83f710fd
.org 0x7f0f0
	ldrb r0, [r7, #18]	@ 0007f0f0 b87c
.org 0x7f0f2
	mov r2, r9	@ 0007f0f2 4a46
.org 0x7f0f4
	ldrh r4, [r2, #28]	@ 0007f0f4 948b
.org 0x7f0f6
	adds r1, r4, #0	@ 0007f0f6 211c
.org 0x7f0f8
	bl 0x129050	@ 0007f0f8 a9f0aaff
.org 0x7f0fc
	adds r1, r0, #0	@ 0007f0fc 011c
.org 0x7f0fe
	lsrs r2, r4, #2	@ 0007f0fe a208
.org 0x7f100
	cmp r1, r2	@ 0007f100 9142
.org 0x7f102
	beq.n 0x7f10c	@ 0007f102 03d0
.org 0x7f104
	lsls r0, r2, #1	@ 0007f104 5000
.org 0x7f106
	adds r0, r0, r2	@ 0007f106 8018
.org 0x7f108
	cmp r1, r0	@ 0007f108 8142
.org 0x7f10a
	bne.n 0x7f15c	@ 0007f10a 27d1
.org 0x7f10c
	ldr r4, [pc, #128]	@ 0007f10c 204c
.org 0x7f10e
	ldr r0, [r4, #0]	@ 0007f10e 2068
.org 0x7f110
	ldr r1, [pc, #128]	@ 0007f110 2049
.org 0x7f112
	mov r8, r1	@ 0007f112 8846
.org 0x7f114
	mov r2, r8	@ 0007f114 4246
.org 0x7f116
	muls r2, r0	@ 0007f116 4243
.org 0x7f118
	adds r0, r2, #0	@ 0007f118 101c
.org 0x7f11a
	ldr r6, [pc, #124]	@ 0007f11a 1f4e
.org 0x7f11c
	adds r0, r0, r6	@ 0007f11c 8019
.org 0x7f11e
	lsls r0, r0, #1	@ 0007f11e 4000
.org 0x7f120
	lsrs r5, r0, #1	@ 0007f120 4508
.org 0x7f122
	str r5, [r4, #0]	@ 0007f122 2560
.org 0x7f124
	lsrs r0, r0, #17	@ 0007f124 400c
.org 0x7f126
	movs r1, #48	@ 0007f126 3021
.org 0x7f128
	bl 0x129198	@ 0007f128 aaf036f8
.org 0x7f12c
	movs r1, #24	@ 0007f12c 1821
.org 0x7f12e
	subs r1, r1, r0	@ 0007f12e 091a
.org 0x7f130
	lsls r1, r1, #8	@ 0007f130 0902
.org 0x7f132
	ldr r0, [r7, #84]	@ 0007f132 786d
.org 0x7f134
	adds r0, r0, r1	@ 0007f134 4018
.org 0x7f136
	str r0, [sp, #16]	@ 0007f136 0490
.org 0x7f138
	mov r0, r8	@ 0007f138 4046
.org 0x7f13a
	muls r0, r5	@ 0007f13a 6843
.org 0x7f13c
	adds r0, r0, r6	@ 0007f13c 8019
.org 0x7f13e
	lsls r0, r0, #1	@ 0007f13e 4000
.org 0x7f140
	lsrs r1, r0, #1	@ 0007f140 4108
.org 0x7f142
	str r1, [r4, #0]	@ 0007f142 2160
.org 0x7f144
	lsrs r0, r0, #17	@ 0007f144 400c
.org 0x7f146
	movs r1, #48	@ 0007f146 3021
.org 0x7f148
	bl 0x129198	@ 0007f148 aaf026f8
.org 0x7f14c
	lsls r0, r0, #8	@ 0007f14c 0002
.org 0x7f14e
	ldr r2, [r7, #88]	@ 0007f14e ba6d
.org 0x7f150
	adds r2, r2, r0	@ 0007f150 1218
.org 0x7f152
	add r1, sp, #16	@ 0007f152 04a9
.org 0x7f154
	str r2, [r1, #4]	@ 0007f154 4a60
.org 0x7f156
	movs r0, #2	@ 0007f156 0220
.org 0x7f158
	bl 0xd0c88	@ 0007f158 51f096fd
.org 0x7f15c
	ldrb r0, [r7, #18]	@ 0007f15c b87c
.org 0x7f15e
	subs r0, #1	@ 0007f15e 0138
.org 0x7f160
	strb r0, [r7, #18]	@ 0007f160 b874
.org 0x7f162
	lsls r0, r0, #24	@ 0007f162 0006
.org 0x7f164
	lsrs r0, r0, #24	@ 0007f164 000e
.org 0x7f166
	cmp r0, #255	@ 0007f166 ff28
.org 0x7f168
	bne.n 0x7f182	@ 0007f168 0bd1
.org 0x7f16a
	ldrb r1, [r7, #10]	@ 0007f16a b97a
.org 0x7f16c
	movs r0, #254	@ 0007f16c fe20
.org 0x7f16e
	ands r0, r1	@ 0007f16e 0840
.org 0x7f170
	strb r0, [r7, #10]	@ 0007f170 b872
.org 0x7f172
	ldr r2, [pc, #40]	@ 0007f172 0a4a
.org 0x7f174
	ldrb r0, [r2, #18]	@ 0007f174 907c
.org 0x7f176
	movs r1, #2	@ 0007f176 0221
.org 0x7f178
	orrs r0, r1	@ 0007f178 0843
.org 0x7f17a
	strb r0, [r2, #18]	@ 0007f17a 9074
.org 0x7f17c
	ldrb r0, [r7, #13]	@ 0007f17c 787b
.org 0x7f17e
	adds r0, #1	@ 0007f17e 0130
.org 0x7f180
	strb r0, [r7, #13]	@ 0007f180 7873
.org 0x7f182
	add sp, #24	@ 0007f182 06b0
