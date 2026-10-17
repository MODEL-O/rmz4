@ FUN_080b4f38  entry 0x080b4f38  size 316
.thumb
.org 0xb4f38
FUN_080b4f38:
	push {r4, r5, lr}	@ 000b4f38 30b5
.org 0xb4f3a
	adds r5, r0, #0	@ 000b4f3a 051c
.org 0xb4f3c
	ldrb r4, [r5, #14]	@ 000b4f3c ac7b
.org 0xb4f3e
	cmp r4, #0	@ 000b4f3e 002c
.org 0xb4f40
	bne.n 0xb4f6a	@ 000b4f40 13d1
.org 0xb4f42
	adds r0, #182	@ 000b4f42 b630
.org 0xb4f44
	ldrb r0, [r0, #0]	@ 000b4f44 0078
.org 0xb4f46
	lsls r1, r0, #1	@ 000b4f46 4100
.org 0xb4f48
	adds r1, r1, r0	@ 000b4f48 0918
.org 0xb4f4a
	ldr r0, [pc, #280]	@ 000b4f4a 4648
.org 0xb4f4c
	adds r1, r1, r0	@ 000b4f4c 0918
.org 0xb4f4e
	lsls r1, r1, #16	@ 000b4f4e 0904
.org 0xb4f50
	lsrs r1, r1, #16	@ 000b4f50 090c
.org 0xb4f52
	adds r0, r5, #0	@ 000b4f52 281c
.org 0xb4f54
	bl 0x1cf00	@ 000b4f54 67f7d4ff
.org 0xb4f58
	str r4, [r5, #92]	@ 000b4f58 ec65
.org 0xb4f5a
	str r4, [r5, #96]	@ 000b4f5a 2c66
.org 0xb4f5c
	str r4, [r5, #104]	@ 000b4f5c ac66
.org 0xb4f5e
	ldr r0, [pc, #264]	@ 000b4f5e 4248
.org 0xb4f60
	bl 0x2b10	@ 000b4f60 4df7d6fd
.org 0xb4f64
	ldrb r0, [r5, #14]	@ 000b4f64 a87b
.org 0xb4f66
	adds r0, #1	@ 000b4f66 0130
.org 0xb4f68
	strb r0, [r5, #14]	@ 000b4f68 a873
.org 0xb4f6a
	adds r0, r5, #0	@ 000b4f6a 281c
.org 0xb4f6c
	bl 0xb55f8	@ 000b4f6c 00f044fb
.org 0xb4f70
	lsls r0, r0, #24	@ 000b4f70 0006
.org 0xb4f72
	cmp r0, #0	@ 000b4f72 0028
.org 0xb4f74
	bne.n 0xb4f7e	@ 000b4f74 03d1
.org 0xb4f76
	ldr r0, [r5, #84]	@ 000b4f76 686d
.org 0xb4f78
	ldr r1, [r5, #92]	@ 000b4f78 e96d
.org 0xb4f7a
	adds r0, r0, r1	@ 000b4f7a 4018
.org 0xb4f7c
	str r0, [r5, #84]	@ 000b4f7c 6865
.org 0xb4f7e
	ldr r1, [r5, #88]	@ 000b4f7e a96d
.org 0xb4f80
	ldr r0, [r5, #96]	@ 000b4f80 286e
.org 0xb4f82
	adds r2, r1, r0	@ 000b4f82 0a18
.org 0xb4f84
	str r2, [r5, #88]	@ 000b4f84 aa65
.org 0xb4f86
	ldr r1, [r5, #104]	@ 000b4f86 a96e
.org 0xb4f88
	adds r0, r0, r1	@ 000b4f88 4018
.org 0xb4f8a
	str r0, [r5, #96]	@ 000b4f8a 2866
.org 0xb4f8c
	ldrb r0, [r5, #14]	@ 000b4f8c a87b
.org 0xb4f8e
	cmp r0, #2	@ 000b4f8e 0228
.org 0xb4f90
	bne.n 0xb4fd0	@ 000b4f90 1ed1
.org 0xb4f92
	ldr r0, [r5, #84]	@ 000b4f92 686d
.org 0xb4f94
	adds r1, r2, #0	@ 000b4f94 111c
.org 0xb4f96
	bl 0x7c7c	@ 000b4f96 52f771fe
.org 0xb4f9a
	lsls r0, r0, #16	@ 000b4f9a 0004
.org 0xb4f9c
	cmp r0, #0	@ 000b4f9c 0028
.org 0xb4f9e
	beq.n 0xb4fd0	@ 000b4f9e 17d0
.org 0xb4fa0
	adds r0, r5, #0	@ 000b4fa0 281c
.org 0xb4fa2
	adds r0, #182	@ 000b4fa2 b630
.org 0xb4fa4
	ldrb r0, [r0, #0]	@ 000b4fa4 0078
.org 0xb4fa6
	lsls r1, r0, #1	@ 000b4fa6 4100
.org 0xb4fa8
	adds r1, r1, r0	@ 000b4fa8 0918
.org 0xb4faa
	ldr r2, [pc, #192]	@ 000b4faa 304a
.org 0xb4fac
	adds r1, r1, r2	@ 000b4fac 8918
.org 0xb4fae
	lsls r1, r1, #16	@ 000b4fae 0904
.org 0xb4fb0
	lsrs r1, r1, #16	@ 000b4fb0 090c
.org 0xb4fb2
	adds r0, r5, #0	@ 000b4fb2 281c
.org 0xb4fb4
	bl 0x1cf00	@ 000b4fb4 67f7a4ff
.org 0xb4fb8
	ldr r0, [r5, #84]	@ 000b4fb8 686d
.org 0xb4fba
	ldr r1, [r5, #88]	@ 000b4fba a96d
.org 0xb4fbc
	bl 0x8534	@ 000b4fbc 53f7bafa
.org 0xb4fc0
	str r0, [r5, #88]	@ 000b4fc0 a865
.org 0xb4fc2
	movs r0, #0	@ 000b4fc2 0020
.org 0xb4fc4
	str r0, [r5, #92]	@ 000b4fc4 e865
.org 0xb4fc6
	str r0, [r5, #96]	@ 000b4fc6 2866
.org 0xb4fc8
	str r0, [r5, #104]	@ 000b4fc8 a866
.org 0xb4fca
	ldrb r0, [r5, #14]	@ 000b4fca a87b
.org 0xb4fcc
	adds r0, #1	@ 000b4fcc 0130
.org 0xb4fce
	strb r0, [r5, #14]	@ 000b4fce a873
.org 0xb4fd0
	adds r0, r5, #0	@ 000b4fd0 281c
.org 0xb4fd2
	adds r0, #115	@ 000b4fd2 7330
.org 0xb4fd4
	ldrb r0, [r0, #0]	@ 000b4fd4 0078
.org 0xb4fd6
	cmp r0, #3	@ 000b4fd6 0328
.org 0xb4fd8
	bne.n 0xb5084	@ 000b4fd8 54d1
.org 0xb4fda
	ldrb r0, [r5, #14]	@ 000b4fda a87b
.org 0xb4fdc
	cmp r0, #1	@ 000b4fdc 0128
.org 0xb4fde
	bne.n 0xb5078	@ 000b4fde 4bd1
.org 0xb4fe0
	adds r4, r5, #0	@ 000b4fe0 2c1c
.org 0xb4fe2
	adds r4, #182	@ 000b4fe2 b634
.org 0xb4fe4
	ldrb r0, [r4, #0]	@ 000b4fe4 2078
.org 0xb4fe6
	lsls r1, r0, #1	@ 000b4fe6 4100
.org 0xb4fe8
	adds r1, r1, r0	@ 000b4fe8 0918
.org 0xb4fea
	ldr r3, [pc, #132]	@ 000b4fea 214b
.org 0xb4fec
	adds r1, r1, r3	@ 000b4fec c918
.org 0xb4fee
	lsls r1, r1, #16	@ 000b4fee 0904
.org 0xb4ff0
	lsrs r1, r1, #16	@ 000b4ff0 090c
.org 0xb4ff2
	adds r0, r5, #0	@ 000b4ff2 281c
.org 0xb4ff4
	bl 0x1cf00	@ 000b4ff4 67f784ff
.org 0xb4ff8
	ldr r2, [pc, #120]	@ 000b4ff8 1e4a
.org 0xb4ffa
	movs r1, #208	@ 000b4ffa d021
.org 0xb4ffc
	lsls r1, r1, #1	@ 000b4ffc 4900
.org 0xb4ffe
	adds r0, r2, r1	@ 000b4ffe 5018
.org 0xb5000
	movs r3, #0	@ 000b5000 0023
.org 0xb5002
	ldrsh r1, [r0, r3]	@ 000b5002 c15e
.org 0xb5004
	lsls r0, r1, #3	@ 000b5004 c800
.org 0xb5006
	adds r0, r0, r1	@ 000b5006 4018
.org 0xb5008
	lsls r0, r0, #7	@ 000b5008 c001
.org 0xb500a
	cmp r0, #0	@ 000b500a 0028
.org 0xb500c
	bge.n 0xb5010	@ 000b500c 00da
.org 0xb500e
	adds r0, #255	@ 000b500e ff30
.org 0xb5010
	asrs r3, r0, #8	@ 000b5010 0312
.org 0xb5012
	str r3, [r5, #92]	@ 000b5012 eb65
.org 0xb5014
	movs r1, #144	@ 000b5014 9021
.org 0xb5016
	lsls r1, r1, #1	@ 000b5016 4900
.org 0xb5018
	adds r0, r2, r1	@ 000b5018 5018
.org 0xb501a
	movs r2, #0	@ 000b501a 0022
.org 0xb501c
	ldrsh r1, [r0, r2]	@ 000b501c 815e
.org 0xb501e
	lsls r0, r1, #3	@ 000b501e c800
.org 0xb5020
	adds r0, r0, r1	@ 000b5020 4018
.org 0xb5022
	lsls r0, r0, #7	@ 000b5022 c001
.org 0xb5024
	cmp r0, #0	@ 000b5024 0028
.org 0xb5026
	bge.n 0xb502a	@ 000b5026 00da
.org 0xb5028
	adds r0, #255	@ 000b5028 ff30
.org 0xb502a
	asrs r0, r0, #8	@ 000b502a 0012
.org 0xb502c
	str r0, [r5, #96]	@ 000b502c 2866
.org 0xb502e
	movs r0, #64	@ 000b502e 4020
.org 0xb5030
	str r0, [r5, #104]	@ 000b5030 a866
.org 0xb5032
	ldrb r1, [r5, #10]	@ 000b5032 a97a
.org 0xb5034
	movs r0, #16	@ 000b5034 1020
.org 0xb5036
	ands r0, r1	@ 000b5036 0840
.org 0xb5038
	cmp r0, #0	@ 000b5038 0028
.org 0xb503a
	beq.n 0xb504a	@ 000b503a 06d0
.org 0xb503c
	lsls r0, r3, #8	@ 000b503c 1802
.org 0xb503e
	negs r0, r0	@ 000b503e 4042
.org 0xb5040
	cmp r0, #0	@ 000b5040 0028
.org 0xb5042
	bge.n 0xb5046	@ 000b5042 00da
.org 0xb5044
	adds r0, #255	@ 000b5044 ff30
.org 0xb5046
	asrs r0, r0, #8	@ 000b5046 0012
.org 0xb5048
	str r0, [r5, #92]	@ 000b5048 e865
.org 0xb504a
	ldrb r0, [r4, #0]	@ 000b504a 2078
.org 0xb504c
	cmp r0, #0	@ 000b504c 0028
.org 0xb504e
	beq.n 0xb507e	@ 000b504e 16d0
.org 0xb5050
	ldr r0, [r5, #92]	@ 000b5050 e86d
.org 0xb5052
	lsls r0, r0, #8	@ 000b5052 0002
.org 0xb5054
	negs r0, r0	@ 000b5054 4042
.org 0xb5056
	cmp r0, #0	@ 000b5056 0028
.org 0xb5058
	bge.n 0xb505c	@ 000b5058 00da
.org 0xb505a
	adds r0, #255	@ 000b505a ff30
.org 0xb505c
	asrs r0, r0, #8	@ 000b505c 0012
.org 0xb505e
	str r0, [r5, #92]	@ 000b505e e865
.org 0xb5060
	b.n 0xb507e	@ 000b5060 0de0
.org 0xb5062
	.byte 0x00	@ 000b5062 data
.org 0xb5063
	.byte 0x00	@ 000b5063 data
.org 0xb5064
	.byte 0x05,0xca,0xff,0xff	@ 000b5064 data
.org 0xb5068
	.byte 0x6f,0x01,0x00,0x00	@ 000b5068 data
.org 0xb506c
	.byte 0x07,0xca,0xff,0xff	@ 000b506c data
.org 0xb5070
	.byte 0x06,0xca,0xff,0xff	@ 000b5070 data
