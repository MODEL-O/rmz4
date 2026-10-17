@ FUN_080b1008  entry 0x080b1008  size 94
.thumb
.org 0xb1008
FUN_080b1008:
	push {r4, r5, r6, lr}	@ 000b1008 70b5
.org 0xb100a
	adds r5, r0, #0	@ 000b100a 051c
.org 0xb100c
	lsls r4, r1, #16	@ 000b100c 0c04
.org 0xb100e
	lsrs r6, r4, #16	@ 000b100e 260c
.org 0xb1010
	ldr r0, [pc, #84]	@ 000b1010 1548
.org 0xb1012
	ldr r0, [r0, #0]	@ 000b1012 0068
.org 0xb1014
	bl 0x5500	@ 000b1014 54f774fa
.org 0xb1018
	adds r3, r0, #0	@ 000b1018 031c
.org 0xb101a
	cmp r3, #0	@ 000b101a 002b
.org 0xb101c
	beq.n 0xb105e	@ 000b101c 1fd0
.org 0xb101e
	adds r1, r3, #0	@ 000b101e 191c
.org 0xb1020
	adds r1, #37	@ 000b1020 2531
.org 0xb1022
	movs r2, #0	@ 000b1022 0022
.org 0xb1024
	movs r0, #24	@ 000b1024 1820
.org 0xb1026
	strb r0, [r1, #0]	@ 000b1026 0870
.org 0xb1028
	ldr r0, [pc, #64]	@ 000b1028 1048
.org 0xb102a
	movs r1, #87	@ 000b102a 5721
.org 0xb102c
	strb r1, [r3, #9]	@ 000b102c 5972
.org 0xb102e
	movs r1, #174	@ 000b102e ae21
.org 0xb1030
	lsls r1, r1, #1	@ 000b1030 4900
.org 0xb1032
	adds r0, r0, r1	@ 000b1032 4018
.org 0xb1034
	ldr r0, [r0, #0]	@ 000b1034 0068
.org 0xb1036
	ldr r0, [r0, #0]	@ 000b1036 0068
.org 0xb1038
	str r0, [r3, #20]	@ 000b1038 5861
.org 0xb103a
	movs r0, #0	@ 000b103a 0020
.org 0xb103c
	strh r2, [r3, #32]	@ 000b103c 1a84
.org 0xb103e
	adds r1, r3, #0	@ 000b103e 191c
.org 0xb1040
	adds r1, #34	@ 000b1040 2231
.org 0xb1042
	strb r0, [r1, #0]	@ 000b1042 0870
.org 0xb1044
	ldrb r1, [r3, #11]	@ 000b1044 d97a
.org 0xb1046
	movs r0, #16	@ 000b1046 1020
.org 0xb1048
	orrs r0, r1	@ 000b1048 0843
.org 0xb104a
	strb r0, [r3, #11]	@ 000b104a d872
.org 0xb104c
	ldrb r0, [r3, #28]	@ 000b104c 187f
.org 0xb104e
	strb r0, [r3, #29]	@ 000b104e 5877
.org 0xb1050
	ldr r0, [r5, #0]	@ 000b1050 2868
.org 0xb1052
	ldr r1, [r5, #4]	@ 000b1052 6968
.org 0xb1054
	str r0, [r3, #84]	@ 000b1054 5865
.org 0xb1056
	str r1, [r3, #88]	@ 000b1056 9965
.org 0xb1058
	lsrs r0, r4, #24	@ 000b1058 200e
.org 0xb105a
	strb r0, [r3, #16]	@ 000b105a 1874
.org 0xb105c
	strb r6, [r3, #17]	@ 000b105c 5e74
.org 0xb105e
	adds r0, r3, #0	@ 000b105e 181c
.org 0xb1060
	pop {r4, r5, r6}	@ 000b1060 70bc
.org 0xb1062
	pop {r1}	@ 000b1062 02bc
.org 0xb1064
	bx r1	@ 000b1064 0847
