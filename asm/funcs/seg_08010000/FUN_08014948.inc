@ FUN_08014948  entry 0x08014948  size 116
.thumb
.org 0x14948
FUN_08014948:
	push {r4, lr}	@ 00014948 10b5
.org 0x1494a
	adds r3, r0, #0	@ 0001494a 031c
.org 0x1494c
	ldr r0, [pc, #48]	@ 0001494c 0c48
.org 0x1494e
	ldr r1, [pc, #52]	@ 0001494e 0d49
.org 0x14950
	adds r0, r0, r1	@ 00014950 4018
.org 0x14952
	ldrb r1, [r0, #0]	@ 00014952 0178
.org 0x14954
	movs r0, #15	@ 00014954 0f20
.org 0x14956
	ands r0, r1	@ 00014956 0840
.org 0x14958
	cmp r0, #1	@ 00014958 0128
.org 0x1495a
	bne.n 0x149b4	@ 0001495a 2bd1
.org 0x1495c
	ldr r2, [r3, #0]	@ 0001495c 1a68
.org 0x1495e
	ldr r4, [pc, #40]	@ 0001495e 0a4c
.org 0x14960
	adds r0, r2, r4	@ 00014960 1019
.org 0x14962
	ldr r1, [pc, #40]	@ 00014962 0a49
.org 0x14964
	cmp r0, r1	@ 00014964 8842
.org 0x14966
	bls.n 0x1497a	@ 00014966 08d9
.org 0x14968
	ldr r4, [pc, #36]	@ 00014968 094c
.org 0x1496a
	adds r0, r2, r4	@ 0001496a 1019
.org 0x1496c
	cmp r0, r1	@ 0001496c 8842
.org 0x1496e
	bls.n 0x1497a	@ 0001496e 04d9
.org 0x14970
	ldr r0, [pc, #32]	@ 00014970 0848
.org 0x14972
	adds r1, r2, r0	@ 00014972 1118
.org 0x14974
	ldr r0, [pc, #32]	@ 00014974 0848
.org 0x14976
	cmp r1, r0	@ 00014976 8142
.org 0x14978
	bhi.n 0x1499c	@ 00014978 10d8
.org 0x1497a
	movs r0, #1	@ 0001497a 0120
.org 0x1497c
	b.n 0x149fa	@ 0001497c 3de0
.org 0x1497e
	.byte 0x00	@ 0001497e data
.org 0x1497f
	.byte 0x00	@ 0001497f data
.org 0x14980
	.byte 0xb0,0x0a,0x00,0x02	@ 00014980 data
.org 0x14984
	.byte 0x10,0xc0,0x02,0x00	@ 00014984 data
.org 0x14988
	.byte 0x00,0x40,0xfc,0xff	@ 00014988 data
.org 0x1498c
	.byte 0xff,0x5f,0x02,0x00	@ 0001498c data
.org 0x14990
	.byte 0x00,0xc0,0xf4,0xff	@ 00014990 data
.org 0x14994
	.byte 0x00,0x00,0xe2,0xff	@ 00014994 data
.org 0x14998
	.byte 0xff,0x2f,0x0c,0x00	@ 00014998 data
.org 0x1499c
	ldr r4, [pc, #12]	@ 0001499c 034c
.org 0x1499e
	adds r1, r2, r4	@ 0001499e 1119
.org 0x149a0
	ldr r0, [pc, #12]	@ 000149a0 0348
.org 0x149a2
	cmp r1, r0	@ 000149a2 8142
.org 0x149a4
	bhi.n 0x149b4	@ 000149a4 06d8
.org 0x149a6
	movs r0, #2	@ 000149a6 0220
.org 0x149a8
	b.n 0x149fa	@ 000149a8 27e0
.org 0x149aa
	.byte 0x00	@ 000149aa data
.org 0x149ab
	.byte 0x00	@ 000149ab data
.org 0x149ac
	.byte 0x00,0x90,0xf8,0xff	@ 000149ac data
.org 0x149b0
	.byte 0xff,0x6f,0x02,0x00	@ 000149b0 data
.org 0x149b4
	ldr r2, [r3, #0]	@ 000149b4 1a68
.org 0x149b6
	ldr r0, [pc, #24]	@ 000149b6 0648
.org 0x149b8
	adds r1, r2, r0	@ 000149b8 1118
.org 0x149ba
	ldr r0, [pc, #24]	@ 000149ba 0648
