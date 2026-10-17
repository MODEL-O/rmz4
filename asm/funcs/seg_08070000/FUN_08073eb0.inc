@ FUN_08073eb0  entry 0x08073eb0  size 358
.thumb
.org 0x73eb0
FUN_08073eb0:
	push {r4, r5, r6, r7, lr}	@ 00073eb0 f0b5
.org 0x73eb2
	adds r7, r0, #0	@ 00073eb2 071c
.org 0x73eb4
	ldr r0, [pc, #352]	@ 00073eb4 5848
.org 0x73eb6
	ldr r1, [pc, #356]	@ 00073eb6 5949
.org 0x73eb8
	movs r4, #147	@ 00073eb8 9324
.org 0x73eba
	lsls r4, r4, #1	@ 00073eba 6400
.org 0x73ebc
	adds r1, r1, r4	@ 00073ebc 0919
.org 0x73ebe
	ldrh r1, [r1, #0]	@ 00073ebe 0988
.org 0x73ec0
	ldrh r2, [r0, #6]	@ 00073ec0 c288
.org 0x73ec2
	lsrs r2, r2, #6	@ 00073ec2 9209
.org 0x73ec4
	subs r1, r1, r2	@ 00073ec4 891a
.org 0x73ec6
	lsls r1, r1, #5	@ 00073ec6 4901
.org 0x73ec8
	movs r2, #128	@ 00073ec8 8022
.org 0x73eca
	lsls r2, r2, #9	@ 00073eca 5202
.org 0x73ecc
	adds r1, r1, r2	@ 00073ecc 8918
.org 0x73ece
	bl 0x1d30	@ 00073ece 8df72fff
.org 0x73ed2
	ldr r0, [pc, #332]	@ 00073ed2 5348
.org 0x73ed4
	ldr r1, [pc, #332]	@ 00073ed4 5349
.org 0x73ed6
	adds r1, r1, r4	@ 00073ed6 0919
.org 0x73ed8
	ldrh r1, [r1, #0]	@ 00073ed8 0988
.org 0x73eda
	ldrb r2, [r0, #7]	@ 00073eda c279
.org 0x73edc
	subs r1, r1, r2	@ 00073edc 891a
.org 0x73ede
	lsls r1, r1, #5	@ 00073ede 4901
.org 0x73ee0
	movs r2, #128	@ 00073ee0 8022
.org 0x73ee2
	lsls r2, r2, #2	@ 00073ee2 9200
.org 0x73ee4
	adds r1, r1, r2	@ 00073ee4 8918
.org 0x73ee6
	bl 0x2208	@ 00073ee6 8ef78ff9
.org 0x73eea
	adds r0, r7, #0	@ 00073eea 381c
.org 0x73eec
	bl 0x1cc9c	@ 00073eec a8f7d6fe
.org 0x73ef0
	ldrb r1, [r7, #10]	@ 00073ef0 b97a
.org 0x73ef2
	movs r0, #1	@ 00073ef2 0120
.org 0x73ef4
	movs r6, #0	@ 00073ef4 0026
.org 0x73ef6
	orrs r0, r1	@ 00073ef6 0843
.org 0x73ef8
	movs r1, #2	@ 00073ef8 0221
.org 0x73efa
	orrs r0, r1	@ 00073efa 0843
.org 0x73efc
	strb r0, [r7, #10]	@ 00073efc b872
.org 0x73efe
	movs r1, #147	@ 00073efe 9321
.org 0x73f00
	lsls r1, r1, #8	@ 00073f00 0902
.org 0x73f02
	adds r0, r7, #0	@ 00073f02 381c
.org 0x73f04
	bl 0x1cf00	@ 00073f04 a8f7fcff
.org 0x73f08
	adds r0, r7, #0	@ 00073f08 381c
.org 0x73f0a
	bl 0x1cff0	@ 00073f0a a9f771f8
.org 0x73f0e
	adds r0, r7, #0	@ 00073f0e 381c
.org 0x73f10
	adds r0, #76	@ 00073f10 4c30
.org 0x73f12
	strb r6, [r0, #0]	@ 00073f12 0670
.org 0x73f14
	adds r2, r7, #0	@ 00073f14 3a1c
.org 0x73f16
	adds r2, #74	@ 00073f16 4a32
.org 0x73f18
	ldrb r1, [r2, #0]	@ 00073f18 1178
.org 0x73f1a
	movs r0, #17	@ 00073f1a 1120
.org 0x73f1c
	negs r0, r0	@ 00073f1c 4042
.org 0x73f1e
	ands r0, r1	@ 00073f1e 0840
.org 0x73f20
	strb r0, [r2, #0]	@ 00073f20 1070
.org 0x73f22
	ldrb r1, [r7, #10]	@ 00073f22 b97a
.org 0x73f24
	movs r0, #239	@ 00073f24 ef20
.org 0x73f26
	ands r0, r1	@ 00073f26 0840
.org 0x73f28
	strb r0, [r7, #10]	@ 00073f28 b872
.org 0x73f2a
	ldr r1, [pc, #252]	@ 00073f2a 3f49
.org 0x73f2c
	adds r0, r7, #0	@ 00073f2c 381c
.org 0x73f2e
	movs r2, #96	@ 00073f2e 6022
.org 0x73f30
	bl 0x503cc	@ 00073f30 dcf74cfa
.org 0x73f34
	ldr r1, [pc, #244]	@ 00073f34 3d49
.org 0x73f36
	adds r0, r7, #0	@ 00073f36 381c
.org 0x73f38
	adds r0, #116	@ 00073f38 7430
.org 0x73f3a
	str r1, [r0, #36]	@ 00073f3a 4162
.org 0x73f3c
	ldr r0, [r7, #84]	@ 00073f3c 786d
.org 0x73f3e
	ldr r1, [r7, #88]	@ 00073f3e b96d
.org 0x73f40
	bl 0x8988	@ 00073f40 94f722fd
.org 0x73f44
	adds r5, r0, #0	@ 00073f44 051c
.org 0x73f46
	ldr r0, [r7, #84]	@ 00073f46 786d
.org 0x73f48
	ldr r1, [r7, #88]	@ 00073f48 b96d
.org 0x73f4a
	bl 0x8868	@ 00073f4a 94f78dfc
.org 0x73f4e
	adds r4, r0, #0	@ 00073f4e 041c
.org 0x73f50
	ldr r0, [r7, #84]	@ 00073f50 786d
.org 0x73f52
	ldr r1, [r7, #88]	@ 00073f52 b96d
.org 0x73f54
	bl 0x8988	@ 00073f54 94f718fd
.org 0x73f58
	subs r4, r4, r0	@ 00073f58 241a
.org 0x73f5a
	asrs r4, r4, #1	@ 00073f5a 6410
.org 0x73f5c
	adds r5, r5, r4	@ 00073f5c 2d19
.org 0x73f5e
	str r5, [r7, #84]	@ 00073f5e 7d65
.org 0x73f60
	ldr r1, [r7, #88]	@ 00073f60 b96d
.org 0x73f62
	adds r0, r5, #0	@ 00073f62 281c
.org 0x73f64
	bl 0x8748	@ 00073f64 94f7f0fb
.org 0x73f68
	adds r5, r0, #0	@ 00073f68 051c
.org 0x73f6a
	ldr r0, [r7, #84]	@ 00073f6a 786d
.org 0x73f6c
	ldr r1, [r7, #88]	@ 00073f6c b96d
.org 0x73f6e
	bl 0x8534	@ 00073f6e 94f7e1fa
.org 0x73f72
	adds r4, r0, #0	@ 00073f72 041c
.org 0x73f74
	ldr r0, [r7, #84]	@ 00073f74 786d
.org 0x73f76
	ldr r1, [r7, #88]	@ 00073f76 b96d
.org 0x73f78
	bl 0x8748	@ 00073f78 94f7e6fb
.org 0x73f7c
	subs r4, r4, r0	@ 00073f7c 241a
.org 0x73f7e
	asrs r4, r4, #1	@ 00073f7e 6410
.org 0x73f80
	adds r5, r5, r4	@ 00073f80 2d19
.org 0x73f82
	str r5, [r7, #88]	@ 00073f82 bd65
.org 0x73f84
	ldr r0, [r7, #84]	@ 00073f84 786d
.org 0x73f86
	movs r1, #192	@ 00073f86 c021
.org 0x73f88
	lsls r1, r1, #6	@ 00073f88 8901
.org 0x73f8a
	adds r0, r0, r1	@ 00073f8a 4018
.org 0x73f8c
	str r0, [r7, #84]	@ 00073f8c 7865
.org 0x73f8e
	adds r1, r7, #0	@ 00073f8e 391c
.org 0x73f90
	adds r1, #180	@ 00073f90 b431
.org 0x73f92
	str r0, [r1, #0]	@ 00073f92 0860
.org 0x73f94
	ldr r0, [r7, #88]	@ 00073f94 b86d
.org 0x73f96
	str r0, [r1, #4]	@ 00073f96 4860
.org 0x73f98
	movs r2, #0	@ 00073f98 0022
.org 0x73f9a
	movs r0, #128	@ 00073f9a 8020
.org 0x73f9c
	lsls r0, r0, #6	@ 00073f9c 8001
.org 0x73f9e
	strh r0, [r1, #12]	@ 00073f9e 8881
.org 0x73fa0
	strh r0, [r1, #14]	@ 00073fa0 c881
.org 0x73fa2
	strh r6, [r1, #16]	@ 00073fa2 0e82
.org 0x73fa4
	strh r6, [r1, #18]	@ 00073fa4 4e82
.org 0x73fa6
	strh r6, [r1, #20]	@ 00073fa6 8e82
.org 0x73fa8
	strh r6, [r1, #22]	@ 00073fa8 ce82
.org 0x73faa
	adds r0, r7, #0	@ 00073faa 381c
.org 0x73fac
	adds r0, #224	@ 00073fac e030
.org 0x73fae
	strb r2, [r0, #0]	@ 00073fae 0270
.org 0x73fb0
	adds r0, #1	@ 00073fb0 0130
.org 0x73fb2
	strb r2, [r0, #0]	@ 00073fb2 0270
.org 0x73fb4
	adds r0, #1	@ 00073fb4 0130
.org 0x73fb6
	strb r2, [r0, #0]	@ 00073fb6 0270
.org 0x73fb8
	movs r4, #0	@ 00073fb8 0024
.org 0x73fba
	movs r5, #0	@ 00073fba 0025
.org 0x73fbc
	adds r0, r7, #0	@ 00073fbc 381c
.org 0x73fbe
	adds r1, r4, #0	@ 00073fbe 211c
.org 0x73fc0
	movs r2, #0	@ 00073fc0 0022
.org 0x73fc2
	bl 0xa8f00	@ 00073fc2 34f09dff
.org 0x73fc6
	adds r0, r7, #0	@ 00073fc6 381c
.org 0x73fc8
	adds r0, #204	@ 00073fc8 cc30
.org 0x73fca
	adds r0, r0, r4	@ 00073fca 0019
.org 0x73fcc
	strb r5, [r0, #0]	@ 00073fcc 0570
.org 0x73fce
	adds r0, r7, #0	@ 00073fce 381c
.org 0x73fd0
	adds r0, #212	@ 00073fd0 d430
.org 0x73fd2
	adds r0, r0, r4	@ 00073fd2 0019
.org 0x73fd4
	strb r5, [r0, #0]	@ 00073fd4 0570
.org 0x73fd6
	adds r0, r4, #1	@ 00073fd6 601c
.org 0x73fd8
	lsls r0, r0, #24	@ 00073fd8 0006
.org 0x73fda
	lsrs r4, r0, #24	@ 00073fda 040e
.org 0x73fdc
	cmp r4, #7	@ 00073fdc 072c
.org 0x73fde
	bls.n 0x73fbc	@ 00073fde edd9
.org 0x73fe0
	adds r1, r7, #0	@ 00073fe0 391c
.org 0x73fe2
	adds r1, #227	@ 00073fe2 e331
.org 0x73fe4
	movs r2, #0	@ 00073fe4 0022
.org 0x73fe6
	movs r0, #8	@ 00073fe6 0820
.org 0x73fe8
	strb r0, [r1, #0]	@ 00073fe8 0870
.org 0x73fea
	adds r0, r7, #0	@ 00073fea 381c
.org 0x73fec
	adds r0, #222	@ 00073fec de30
.org 0x73fee
	strb r2, [r0, #0]	@ 00073fee 0270
.org 0x73ff0
	adds r0, #1	@ 00073ff0 0130
.org 0x73ff2
	strb r2, [r0, #0]	@ 00073ff2 0270
.org 0x73ff4
	str r2, [r7, #44]	@ 00073ff4 fa62
.org 0x73ff6
	ldr r1, [pc, #56]	@ 00073ff6 0e49
.org 0x73ff8
	ldrb r0, [r7, #9]	@ 00073ff8 787a
.org 0x73ffa
	lsls r0, r0, #2	@ 00073ffa 8000
.org 0x73ffc
	adds r0, r0, r1	@ 00073ffc 4018
.org 0x73ffe
	movs r1, #1	@ 00073ffe 0121
.org 0x74000
	str r1, [r7, #12]	@ 00074000 f960
.org 0x74002
	ldr r0, [r0, #0]	@ 00074002 0068
.org 0x74004
	ldr r0, [r0, #4]	@ 00074004 4068
.org 0x74006
	str r0, [r7, #20]	@ 00074006 7861
.org 0x74008
	strb r2, [r7, #13]	@ 00074008 7a73
.org 0x7400a
	adds r0, r7, #0	@ 0007400a 381c
.org 0x7400c
	bl 0x74034	@ 0007400c 00f012f8
.org 0x74010
	pop {r4, r5, r6, r7}	@ 00074010 f0bc
.org 0x74012
	pop {r0}	@ 00074012 01bc
.org 0x74014
	bx r0	@ 00074014 0047
