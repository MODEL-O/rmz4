@ FUN_08063f70  entry 0x08063f70  size 272
.thumb
.org 0x63f70
FUN_08063f70:
	push {r4, r5, r6, lr}	@ 00063f70 70b5
.org 0x63f72
	adds r6, r0, #0	@ 00063f72 061c
.org 0x63f74
	ldrb r0, [r6, #15]	@ 00063f74 f07b
.org 0x63f76
	cmp r0, #0	@ 00063f76 0028
.org 0x63f78
	bne.n 0x63fd0	@ 00063f78 2ad1
.org 0x63f7a
	adds r0, r6, #0	@ 00063f7a 301c
.org 0x63f7c
	movs r1, #0	@ 00063f7c 0021
.org 0x63f7e
	bl 0x65a94	@ 00063f7e 01f089fd
.org 0x63f82
	adds r0, r6, #0	@ 00063f82 301c
.org 0x63f84
	adds r0, #208	@ 00063f84 d030
.org 0x63f86
	ldr r0, [r0, #0]	@ 00063f86 0068
.org 0x63f88
	movs r1, #240	@ 00063f88 f021
.org 0x63f8a
	lsls r1, r1, #7	@ 00063f8a c901
.org 0x63f8c
	adds r4, r0, r1	@ 00063f8c 4418
.org 0x63f8e
	str r4, [r6, #100]	@ 00063f8e 7466
.org 0x63f90
	adds r0, r6, #0	@ 00063f90 301c
.org 0x63f92
	adds r0, #212	@ 00063f92 d430
.org 0x63f94
	ldr r1, [r0, #0]	@ 00063f94 0168
.org 0x63f96
	movs r2, #176	@ 00063f96 b022
.org 0x63f98
	lsls r2, r2, #7	@ 00063f98 d201
.org 0x63f9a
	adds r1, r1, r2	@ 00063f9a 8918
.org 0x63f9c
	str r1, [r6, #104]	@ 00063f9c b166
.org 0x63f9e
	ldr r2, [r6, #84]	@ 00063f9e 726d
.org 0x63fa0
	subs r3, r4, r2	@ 00063fa0 a31a
.org 0x63fa2
	str r3, [r6, #92]	@ 00063fa2 f365
.org 0x63fa4
	ldr r0, [r6, #88]	@ 00063fa4 b06d
.org 0x63fa6
	subs r3, r1, r0	@ 00063fa6 0b1a
.org 0x63fa8
	str r3, [r6, #96]	@ 00063fa8 3366
.org 0x63faa
	ldr r3, [pc, #212]	@ 00063faa 354b
.org 0x63fac
	cmp r2, r4	@ 00063fac a242
.org 0x63fae
	bge.n 0x63fb4	@ 00063fae 01da
.org 0x63fb0
	movs r3, #128	@ 00063fb0 8023
.org 0x63fb2
	lsls r3, r3, #2	@ 00063fb2 9b00
.org 0x63fb4
	subs r0, r4, r2	@ 00063fb4 a01a
.org 0x63fb6
	adds r1, r3, #0	@ 00063fb6 191c
.org 0x63fb8
	bl 0x128fb8	@ 00063fb8 c4f0feff
.org 0x63fbc
	strb r0, [r6, #19]	@ 00063fbc f074
.org 0x63fbe
	strb r0, [r6, #18]	@ 00063fbe b074
.org 0x63fc0
	lsls r0, r0, #24	@ 00063fc0 0006
.org 0x63fc2
	cmp r0, #0	@ 00063fc2 0028
.org 0x63fc4
	bne.n 0x63fca	@ 00063fc4 01d1
.org 0x63fc6
	movs r0, #1	@ 00063fc6 0120
.org 0x63fc8
	strb r0, [r6, #19]	@ 00063fc8 f074
.org 0x63fca
	ldrb r0, [r6, #15]	@ 00063fca f07b
.org 0x63fcc
	adds r0, #1	@ 00063fcc 0130
.org 0x63fce
	strb r0, [r6, #15]	@ 00063fce f073
.org 0x63fd0
	adds r0, r6, #0	@ 00063fd0 301c
.org 0x63fd2
	bl 0x1cff0	@ 00063fd2 b9f70df8
.org 0x63fd6
	adds r0, r6, #0	@ 00063fd6 301c
.org 0x63fd8
	adds r0, #116	@ 00063fd8 7430
.org 0x63fda
	ldr r4, [pc, #168]	@ 00063fda 2a4c
.org 0x63fdc
	ldr r3, [pc, #168]	@ 00063fdc 2a4b
.org 0x63fde
	adds r1, r6, #0	@ 00063fde 311c
.org 0x63fe0
	adds r1, #180	@ 00063fe0 b431
.org 0x63fe2
	ldrb r2, [r1, #0]	@ 00063fe2 0a78
.org 0x63fe4
	lsls r1, r2, #1	@ 00063fe4 5100
.org 0x63fe6
	adds r1, r1, r3	@ 00063fe6 c918
.org 0x63fe8
	ldrh r1, [r1, #0]	@ 00063fe8 0988
.org 0x63fea
	lsls r1, r1, #2	@ 00063fea 8900
.org 0x63fec
	adds r1, r1, r4	@ 00063fec 0919
.org 0x63fee
	adds r3, r6, #0	@ 00063fee 331c
.org 0x63ff0
	adds r3, #113	@ 00063ff0 7133
.org 0x63ff2
	movs r5, #0	@ 00063ff2 0025
.org 0x63ff4
	ldrsb r5, [r3, r5]	@ 00063ff4 5d57
.org 0x63ff6
	ldr r1, [r1, #0]	@ 00063ff6 0968
.org 0x63ff8
	lsls r3, r5, #2	@ 00063ff8 ab00
.org 0x63ffa
	adds r3, r3, r1	@ 00063ffa 5b18
.org 0x63ffc
	ldr r4, [pc, #140]	@ 00063ffc 234c
.org 0x63ffe
	adds r1, r6, #0	@ 00063ffe 311c
.org 0x64000
	adds r1, #181	@ 00064000 b531
.org 0x64002
	ldrb r1, [r1, #0]	@ 00064002 0978
.org 0x64004
	lsls r1, r1, #2	@ 00064004 8900
.org 0x64006
	adds r1, r1, r4	@ 00064006 0919
.org 0x64008
	ldr r1, [r1, #0]	@ 00064008 0968
.org 0x6400a
	lsls r2, r2, #2	@ 0006400a 9200
.org 0x6400c
	adds r2, r2, r1	@ 0006400c 5218
.org 0x6400e
	ldr r1, [r2, #0]	@ 0006400e 1168
.org 0x64010
	adds r1, r1, r5	@ 00064010 4919
.org 0x64012
	ldrb r1, [r1, #0]	@ 00064012 0978
.org 0x64014
	lsls r2, r1, #1	@ 00064014 4a00
.org 0x64016
	adds r2, r2, r1	@ 00064016 5218
.org 0x64018
	lsls r2, r2, #3	@ 00064018 d200
.org 0x6401a
	ldr r1, [r3, #0]	@ 0006401a 1968
.org 0x6401c
	adds r1, r1, r2	@ 0006401c 8918
.org 0x6401e
	bl 0x5784	@ 0006401e a1f7b1fb
.org 0x64022
	ldrb r0, [r6, #18]	@ 00064022 b07c
.org 0x64024
	cmp r0, #0	@ 00064024 0028
.org 0x64026
	beq.n 0x6402c	@ 00064026 01d0
.org 0x64028
	subs r0, #1	@ 00064028 0138
.org 0x6402a
	strb r0, [r6, #18]	@ 0006402a b074
.org 0x6402c
	ldr r0, [r6, #92]	@ 0006402c f06d
.org 0x6402e
	negs r0, r0	@ 0006402e 4042
.org 0x64030
	ldrb r1, [r6, #18]	@ 00064030 b17c
.org 0x64032
	muls r0, r1	@ 00064032 4843
.org 0x64034
	ldrb r1, [r6, #19]	@ 00064034 f17c
.org 0x64036
	bl 0x128fb8	@ 00064036 c4f0bfff
.org 0x6403a
	ldr r1, [r6, #100]	@ 0006403a 716e
.org 0x6403c
	adds r1, r1, r0	@ 0006403c 0918
.org 0x6403e
	str r1, [r6, #84]	@ 0006403e 7165
.org 0x64040
	ldrb r0, [r6, #18]	@ 00064040 b07c
.org 0x64042
	lsls r0, r0, #6	@ 00064042 8001
.org 0x64044
	ldrb r1, [r6, #19]	@ 00064044 f17c
.org 0x64046
	bl 0x128fb8	@ 00064046 c4f0b7ff
.org 0x6404a
	movs r1, #128	@ 0006404a 8021
.org 0x6404c
	subs r3, r1, r0	@ 0006404c 0b1a
.org 0x6404e
	ldr r1, [r6, #96]	@ 0006404e 316e
.org 0x64050
	negs r1, r1	@ 00064050 4942
.org 0x64052
	ldr r2, [pc, #60]	@ 00064052 0f4a
.org 0x64054
	lsls r0, r3, #24	@ 00064054 1806
.org 0x64056
	lsrs r0, r0, #23	@ 00064056 c00d
.org 0x64058
	adds r0, r0, r2	@ 00064058 8018
.org 0x6405a
	movs r2, #0	@ 0006405a 0022
.org 0x6405c
	ldrsh r0, [r0, r2]	@ 0006405c 805e
.org 0x6405e
	muls r0, r1	@ 0006405e 4843
.org 0x64060
	cmp r0, #0	@ 00064060 0028
.org 0x64062
	bge.n 0x64066	@ 00064062 00da
.org 0x64064
	adds r0, #255	@ 00064064 ff30
.org 0x64066
	asrs r1, r0, #8	@ 00064066 0112
.org 0x64068
	ldr r0, [r6, #104]	@ 00064068 b06e
.org 0x6406a
	adds r0, r0, r1	@ 0006406a 4018
.org 0x6406c
	str r0, [r6, #88]	@ 0006406c b065
.org 0x6406e
	ldrb r1, [r6, #18]	@ 0006406e b17c
.org 0x64070
	cmp r1, #0	@ 00064070 0029
.org 0x64072
	bne.n 0x6407a	@ 00064072 02d1
.org 0x64074
	movs r0, #1	@ 00064074 0120
.org 0x64076
	strb r0, [r6, #14]	@ 00064076 b073
.org 0x64078
	strb r1, [r6, #15]	@ 00064078 f173
.org 0x6407a
	pop {r4, r5, r6}	@ 0006407a 70bc
.org 0x6407c
	pop {r0}	@ 0006407c 01bc
.org 0x6407e
	bx r0	@ 0006407e 0047
