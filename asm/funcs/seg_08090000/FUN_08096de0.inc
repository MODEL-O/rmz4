@ FUN_08096de0  entry 0x08096de0  size 234
.thumb
.org 0x96de0
FUN_08096de0:
	push {r4, r5, r6, r7, lr}	@ 00096de0 f0b5
.org 0x96de2
	adds r7, r0, #0	@ 00096de2 071c
.org 0x96de4
	ldrb r0, [r7, #16]	@ 00096de4 387c
.org 0x96de6
	cmp r0, #1	@ 00096de6 0128
.org 0x96de8
	bne.n 0x96df2	@ 00096de8 03d1
.org 0x96dea
	adds r0, r7, #0	@ 00096dea 381c
.org 0x96dec
	bl 0x96edc	@ 00096dec 00f076f8
.org 0x96df0
	b.n 0x96eca	@ 00096df0 6be0
.org 0x96df2
	adds r0, r7, #0	@ 00096df2 381c
.org 0x96df4
	bl 0x1cc9c	@ 00096df4 85f752ff
.org 0x96df8
	ldrb r1, [r7, #10]	@ 00096df8 b97a
.org 0x96dfa
	movs r0, #1	@ 00096dfa 0120
.org 0x96dfc
	movs r4, #0	@ 00096dfc 0024
.org 0x96dfe
	orrs r0, r1	@ 00096dfe 0843
.org 0x96e00
	movs r1, #2	@ 00096e00 0221
.org 0x96e02
	orrs r0, r1	@ 00096e02 0843
.org 0x96e04
	strb r0, [r7, #10]	@ 00096e04 b872
.org 0x96e06
	movs r1, #160	@ 00096e06 a021
.org 0x96e08
	lsls r1, r1, #7	@ 00096e08 c901
.org 0x96e0a
	adds r0, r7, #0	@ 00096e0a 381c
.org 0x96e0c
	bl 0x1cf00	@ 00096e0c 86f778f8
.org 0x96e10
	adds r0, r7, #0	@ 00096e10 381c
.org 0x96e12
	bl 0x1cff0	@ 00096e12 86f7edf8
.org 0x96e16
	movs r2, #0	@ 00096e16 0022
.org 0x96e18
	ldr r0, [pc, #24]	@ 00096e18 0648
.org 0x96e1a
	ldr r0, [r0, #0]	@ 00096e1a 0068
.org 0x96e1c
	ldr r1, [r7, #84]	@ 00096e1c 796d
.org 0x96e1e
	ldr r0, [r0, #84]	@ 00096e1e 406d
.org 0x96e20
	cmp r1, r0	@ 00096e20 8142
.org 0x96e22
	bge.n 0x96e26	@ 00096e22 00da
.org 0x96e24
	movs r2, #1	@ 00096e24 0122
.org 0x96e26
	cmp r2, #0	@ 00096e26 002a
.org 0x96e28
	beq.n 0x96e38	@ 00096e28 06d0
.org 0x96e2a
	ldrb r0, [r7, #10]	@ 00096e2a b87a
.org 0x96e2c
	movs r1, #16	@ 00096e2c 1021
.org 0x96e2e
	orrs r0, r1	@ 00096e2e 0843
.org 0x96e30
	b.n 0x96e3e	@ 00096e30 05e0
.org 0x96e32
	.byte 0x00	@ 00096e32 data
.org 0x96e33
	.byte 0x00	@ 00096e33 data
.org 0x96e34
	.byte 0xf0,0xdb,0x02,0x02	@ 00096e34 data
.org 0x96e38
	ldrb r1, [r7, #10]	@ 00096e38 b97a
.org 0x96e3a
	movs r0, #239	@ 00096e3a ef20
.org 0x96e3c
	ands r0, r1	@ 00096e3c 0840
.org 0x96e3e
	strb r0, [r7, #10]	@ 00096e3e b872
.org 0x96e40
	movs r6, #1	@ 00096e40 0126
.org 0x96e42
	adds r1, r6, #0	@ 00096e42 311c
.org 0x96e44
	ands r1, r2	@ 00096e44 1140
.org 0x96e46
	adds r0, r7, #0	@ 00096e46 381c
.org 0x96e48
	adds r0, #76	@ 00096e48 4c30
.org 0x96e4a
	movs r5, #0	@ 00096e4a 0025
.org 0x96e4c
	strb r1, [r0, #0]	@ 00096e4c 0170
.org 0x96e4e
	adds r3, r7, #0	@ 00096e4e 3b1c
.org 0x96e50
	adds r3, #74	@ 00096e50 4a33
.org 0x96e52
	lsls r1, r1, #4	@ 00096e52 0901
.org 0x96e54
	ldrb r2, [r3, #0]	@ 00096e54 1a78
.org 0x96e56
	movs r0, #17	@ 00096e56 1120
.org 0x96e58
	negs r0, r0	@ 00096e58 4042
.org 0x96e5a
	ands r0, r2	@ 00096e5a 1040
.org 0x96e5c
	orrs r0, r1	@ 00096e5c 0843
.org 0x96e5e
	strb r0, [r3, #0]	@ 00096e5e 1870
.org 0x96e60
	ldrb r1, [r7, #10]	@ 00096e60 b97a
.org 0x96e62
	movs r0, #4	@ 00096e62 0420
.org 0x96e64
	orrs r0, r1	@ 00096e64 0843
.org 0x96e66
	strb r0, [r7, #10]	@ 00096e66 b872
.org 0x96e68
	adds r4, r7, #0	@ 00096e68 3c1c
.org 0x96e6a
	adds r4, #116	@ 00096e6a 7434
.org 0x96e6c
	ldr r1, [pc, #96]	@ 00096e6c 1849
.org 0x96e6e
	adds r2, r7, #0	@ 00096e6e 3a1c
.org 0x96e70
	adds r2, #84	@ 00096e70 5432
.org 0x96e72
	adds r0, r4, #0	@ 00096e72 201c
.org 0x96e74
	movs r3, #8	@ 00096e74 0823
.org 0x96e76
	bl 0x5760	@ 00096e76 6ef773fc
.org 0x96e7a
	str r7, [r4, #44]	@ 00096e7a e762
.org 0x96e7c
	ldr r0, [pc, #84]	@ 00096e7c 1548
.org 0x96e7e
	str r0, [r4, #36]	@ 00096e7e 6062
.org 0x96e80
	ldr r0, [r7, #84]	@ 00096e80 786d
.org 0x96e82
	ldr r1, [r7, #88]	@ 00096e82 b96d
.org 0x96e84
	bl 0x8534	@ 00096e84 71f756fb
.org 0x96e88
	str r0, [r7, #88]	@ 00096e88 b865
.org 0x96e8a
	adds r1, r7, #0	@ 00096e8a 391c
.org 0x96e8c
	adds r1, #180	@ 00096e8c b431
.org 0x96e8e
	ldr r0, [r7, #84]	@ 00096e8e 786d
.org 0x96e90
	str r0, [r1, #0]	@ 00096e90 0860
.org 0x96e92
	adds r1, #4	@ 00096e92 0431
.org 0x96e94
	ldr r0, [r7, #88]	@ 00096e94 b86d
.org 0x96e96
	str r0, [r1, #0]	@ 00096e96 0860
.org 0x96e98
	adds r0, r7, #0	@ 00096e98 381c
.org 0x96e9a
	adds r0, #190	@ 00096e9a be30
.org 0x96e9c
	strb r5, [r0, #0]	@ 00096e9c 0570
.org 0x96e9e
	adds r1, #5	@ 00096e9e 0531
.org 0x96ea0
	movs r0, #112	@ 00096ea0 7020
.org 0x96ea2
	strb r0, [r1, #0]	@ 00096ea2 0870
.org 0x96ea4
	adds r0, r7, #0	@ 00096ea4 381c
.org 0x96ea6
	adds r0, #191	@ 00096ea6 bf30
.org 0x96ea8
	strb r5, [r0, #0]	@ 00096ea8 0570
.org 0x96eaa
	adds r0, #1	@ 00096eaa 0130
.org 0x96eac
	str r5, [r0, #0]	@ 00096eac 0560
.org 0x96eae
	adds r0, r7, #0	@ 00096eae 381c
.org 0x96eb0
	bl 0x96d8c	@ 00096eb0 fff76cff
.org 0x96eb4
	ldr r1, [pc, #32]	@ 00096eb4 0849
.org 0x96eb6
	ldrb r0, [r7, #9]	@ 00096eb6 787a
.org 0x96eb8
	lsls r0, r0, #2	@ 00096eb8 8000
.org 0x96eba
	adds r0, r0, r1	@ 00096eba 4018
.org 0x96ebc
	str r6, [r7, #12]	@ 00096ebc fe60
.org 0x96ebe
	ldr r0, [r0, #0]	@ 00096ebe 0068
.org 0x96ec0
	ldr r0, [r0, #4]	@ 00096ec0 4068
.org 0x96ec2
	str r0, [r7, #20]	@ 00096ec2 7861
.org 0x96ec4
	adds r0, r7, #0	@ 00096ec4 381c
.org 0x96ec6
	bl 0x96f58	@ 00096ec6 00f047f8
