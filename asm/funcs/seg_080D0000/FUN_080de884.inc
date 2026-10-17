@ FUN_080de884  entry 0x080de884  size 140
.thumb
.org 0xde884
FUN_080de884:
	push {r4, r5, r6, lr}	@ 000de884 70b5
.org 0xde886
	adds r5, r0, #0	@ 000de886 051c
.org 0xde888
	ldr r2, [pc, #80]	@ 000de888 144a
.org 0xde88a
	ldr r1, [r2, #0]	@ 000de88a 1168
.org 0xde88c
	ldr r0, [pc, #80]	@ 000de88c 1448
.org 0xde88e
	adds r4, r1, #0	@ 000de88e 0c1c
.org 0xde890
	muls r4, r0	@ 000de890 4443
.org 0xde892
	ldr r0, [pc, #80]	@ 000de892 1448
.org 0xde894
	adds r4, r4, r0	@ 000de894 2418
.org 0xde896
	lsls r4, r4, #1	@ 000de896 6400
.org 0xde898
	lsrs r0, r4, #1	@ 000de898 6008
.org 0xde89a
	str r0, [r2, #0]	@ 000de89a 1060
.org 0xde89c
	lsrs r4, r4, #17	@ 000de89c 640c
.org 0xde89e
	movs r2, #1	@ 000de89e 0122
.org 0xde8a0
	ands r4, r2	@ 000de8a0 1440
.org 0xde8a2
	ldr r1, [pc, #68]	@ 000de8a2 1149
.org 0xde8a4
	ldrb r0, [r5, #9]	@ 000de8a4 687a
.org 0xde8a6
	lsls r0, r0, #2	@ 000de8a6 8000
.org 0xde8a8
	adds r0, r0, r1	@ 000de8a8 4018
.org 0xde8aa
	movs r1, #1	@ 000de8aa 0121
.org 0xde8ac
	str r1, [r5, #12]	@ 000de8ac e960
.org 0xde8ae
	ldr r0, [r0, #0]	@ 000de8ae 0068
.org 0xde8b0
	ldr r0, [r0, #4]	@ 000de8b0 4068
.org 0xde8b2
	str r0, [r5, #20]	@ 000de8b2 6861
.org 0xde8b4
	ldrb r0, [r5, #10]	@ 000de8b4 a87a
.org 0xde8b6
	movs r6, #0	@ 000de8b6 0026
.org 0xde8b8
	orrs r2, r0	@ 000de8b8 0243
.org 0xde8ba
	movs r0, #2	@ 000de8ba 0220
.org 0xde8bc
	orrs r2, r0	@ 000de8bc 0243
.org 0xde8be
	strb r2, [r5, #10]	@ 000de8be aa72
.org 0xde8c0
	movs r0, #128	@ 000de8c0 8020
.org 0xde8c2
	str r0, [r5, #96]	@ 000de8c2 2866
.org 0xde8c4
	movs r0, #64	@ 000de8c4 4020
.org 0xde8c6
	strb r0, [r5, #18]	@ 000de8c6 a874
.org 0xde8c8
	adds r0, r5, #0	@ 000de8c8 281c
.org 0xde8ca
	bl 0x1cc9c	@ 000de8ca 3ef7e7f9
.org 0xde8ce
	cmp r4, #0	@ 000de8ce 002c
.org 0xde8d0
	beq.n 0xde8ec	@ 000de8d0 0cd0
.org 0xde8d2
	ldrb r0, [r5, #10]	@ 000de8d2 a87a
.org 0xde8d4
	movs r1, #16	@ 000de8d4 1021
.org 0xde8d6
	orrs r0, r1	@ 000de8d6 0843
.org 0xde8d8
	b.n 0xde8f2	@ 000de8d8 0be0
.org 0xde8da
	.byte 0x00	@ 000de8da data
.org 0xde8db
	.byte 0x00	@ 000de8db data
.org 0xde8dc
	.byte 0x38,0xdc,0x02,0x02	@ 000de8dc data
.org 0xde8e0
	.byte 0xfd,0x43,0x03,0x00	@ 000de8e0 data
.org 0xde8e4
	.byte 0xc3,0x9e,0x26,0x00	@ 000de8e4 data
.org 0xde8e8
	.byte 0x64,0x6f,0x86,0x08	@ 000de8e8 data
.org 0xde8ec
	ldrb r1, [r5, #10]	@ 000de8ec a97a
.org 0xde8ee
	movs r0, #239	@ 000de8ee ef20
.org 0xde8f0
	ands r0, r1	@ 000de8f0 0840
.org 0xde8f2
	strb r0, [r5, #10]	@ 000de8f2 a872
.org 0xde8f4
	adds r1, r4, #0	@ 000de8f4 211c
.org 0xde8f6
	adds r0, r5, #0	@ 000de8f6 281c
.org 0xde8f8
	adds r0, #76	@ 000de8f8 4c30
.org 0xde8fa
	strb r1, [r0, #0]	@ 000de8fa 0170
.org 0xde8fc
	adds r3, r5, #0	@ 000de8fc 2b1c
.org 0xde8fe
	adds r3, #74	@ 000de8fe 4a33
.org 0xde900
	lsls r1, r1, #4	@ 000de900 0901
.org 0xde902
	ldrb r2, [r3, #0]	@ 000de902 1a78
.org 0xde904
	movs r0, #17	@ 000de904 1120
.org 0xde906
	negs r0, r0	@ 000de906 4042
.org 0xde908
	ands r0, r2	@ 000de908 1040
.org 0xde90a
	orrs r0, r1	@ 000de90a 0843
.org 0xde90c
	strb r0, [r3, #0]	@ 000de90c 1870
.org 0xde90e
	ldr r1, [pc, #20]	@ 000de90e 0549
