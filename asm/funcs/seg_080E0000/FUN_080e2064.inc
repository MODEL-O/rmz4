@ FUN_080e2064  entry 0x080e2064  size 80
.thumb
.org 0xe2064
FUN_080e2064:
	push {r4, r5, r6, lr}	@ 000e2064 70b5
.org 0xe2066
	adds r6, r0, #0	@ 000e2066 061c
.org 0xe2068
	lsls r1, r1, #24	@ 000e2068 0906
.org 0xe206a
	lsrs r5, r1, #24	@ 000e206a 0d0e
.org 0xe206c
	lsls r2, r2, #24	@ 000e206c 1206
.org 0xe206e
	lsrs r4, r2, #24	@ 000e206e 140e
.org 0xe2070
	ldr r0, [pc, #64]	@ 000e2070 1048
.org 0xe2072
	ldr r0, [r0, #0]	@ 000e2072 0068
.org 0xe2074
	bl 0x5500	@ 000e2074 23f744fa
.org 0xe2078
	adds r3, r0, #0	@ 000e2078 031c
.org 0xe207a
	cmp r3, #0	@ 000e207a 002b
.org 0xe207c
	beq.n 0xe20ac	@ 000e207c 16d0
.org 0xe207e
	adds r1, r3, #0	@ 000e207e 191c
.org 0xe2080
	adds r1, #37	@ 000e2080 2531
.org 0xe2082
	movs r2, #0	@ 000e2082 0022
.org 0xe2084
	movs r0, #1	@ 000e2084 0120
.org 0xe2086
	strb r0, [r1, #0]	@ 000e2086 0870
.org 0xe2088
	ldr r0, [pc, #44]	@ 000e2088 0b48
.org 0xe208a
	movs r1, #63	@ 000e208a 3f21
.org 0xe208c
	strb r1, [r3, #9]	@ 000e208c 5972
.org 0xe208e
	adds r0, #252	@ 000e208e fc30
.org 0xe2090
	ldr r0, [r0, #0]	@ 000e2090 0068
.org 0xe2092
	ldr r0, [r0, #0]	@ 000e2092 0068
.org 0xe2094
	str r0, [r3, #20]	@ 000e2094 5861
.org 0xe2096
	movs r0, #0	@ 000e2096 0020
.org 0xe2098
	strh r2, [r3, #32]	@ 000e2098 1a84
.org 0xe209a
	adds r1, r3, #0	@ 000e209a 191c
.org 0xe209c
	adds r1, #34	@ 000e209c 2231
.org 0xe209e
	strb r0, [r1, #0]	@ 000e209e 0870
.org 0xe20a0
	ldr r0, [r6, #0]	@ 000e20a0 3068
.org 0xe20a2
	ldr r1, [r6, #4]	@ 000e20a2 7168
.org 0xe20a4
	str r0, [r3, #84]	@ 000e20a4 5865
.org 0xe20a6
	str r1, [r3, #88]	@ 000e20a6 9965
.org 0xe20a8
	strb r5, [r3, #16]	@ 000e20a8 1d74
.org 0xe20aa
	strb r4, [r3, #17]	@ 000e20aa 5c74
.org 0xe20ac
	adds r0, r3, #0	@ 000e20ac 181c
.org 0xe20ae
	pop {r4, r5, r6}	@ 000e20ae 70bc
.org 0xe20b0
	pop {r1}	@ 000e20b0 02bc
.org 0xe20b2
	bx r1	@ 000e20b2 0847
