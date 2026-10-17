@ FUN_080ca948  entry 0x080ca948  size 78
.thumb
.org 0xca948
FUN_080ca948:
	push {r4, r5, r6, lr}	@ 000ca948 70b5
.org 0xca94a
	adds r6, r0, #0	@ 000ca94a 061c
.org 0xca94c
	lsls r1, r1, #24	@ 000ca94c 0906
.org 0xca94e
	lsrs r5, r1, #24	@ 000ca94e 0d0e
.org 0xca950
	lsls r2, r2, #24	@ 000ca950 1206
.org 0xca952
	lsrs r4, r2, #24	@ 000ca952 140e
.org 0xca954
	ldr r0, [pc, #64]	@ 000ca954 1048
.org 0xca956
	ldr r0, [r0, #0]	@ 000ca956 0068
.org 0xca958
	bl 0x5500	@ 000ca958 3af7d2fd
.org 0xca95c
	adds r3, r0, #0	@ 000ca95c 031c
.org 0xca95e
	cmp r3, #0	@ 000ca95e 002b
.org 0xca960
	beq.n 0xca990	@ 000ca960 16d0
.org 0xca962
	adds r1, r3, #0	@ 000ca962 191c
.org 0xca964
	adds r1, #37	@ 000ca964 2531
.org 0xca966
	movs r2, #0	@ 000ca966 0022
.org 0xca968
	movs r0, #8	@ 000ca968 0820
.org 0xca96a
	strb r0, [r1, #0]	@ 000ca96a 0870
.org 0xca96c
	ldr r0, [pc, #44]	@ 000ca96c 0b48
.org 0xca96e
	movs r1, #36	@ 000ca96e 2421
.org 0xca970
	strb r1, [r3, #9]	@ 000ca970 5972
.org 0xca972
	adds r0, #144	@ 000ca972 9030
.org 0xca974
	ldr r0, [r0, #0]	@ 000ca974 0068
.org 0xca976
	ldr r0, [r0, #0]	@ 000ca976 0068
.org 0xca978
	str r0, [r3, #20]	@ 000ca978 5861
.org 0xca97a
	movs r0, #0	@ 000ca97a 0020
.org 0xca97c
	strh r2, [r3, #32]	@ 000ca97c 1a84
.org 0xca97e
	adds r1, r3, #0	@ 000ca97e 191c
.org 0xca980
	adds r1, #34	@ 000ca980 2231
.org 0xca982
	strb r0, [r1, #0]	@ 000ca982 0870
.org 0xca984
	ldr r0, [r6, #0]	@ 000ca984 3068
.org 0xca986
	ldr r1, [r6, #4]	@ 000ca986 7168
.org 0xca988
	str r0, [r3, #84]	@ 000ca988 5865
.org 0xca98a
	str r1, [r3, #88]	@ 000ca98a 9965
.org 0xca98c
	strb r5, [r3, #16]	@ 000ca98c 1d74
.org 0xca98e
	strb r4, [r3, #17]	@ 000ca98e 5c74
.org 0xca990
	pop {r4, r5, r6}	@ 000ca990 70bc
.org 0xca992
	pop {r0}	@ 000ca992 01bc
.org 0xca994
	bx r0	@ 000ca994 0047
