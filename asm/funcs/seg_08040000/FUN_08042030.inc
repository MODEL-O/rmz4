@ FUN_08042030  entry 0x08042030  size 82
.thumb
.org 0x42030
FUN_08042030:
	push {r4, r5, r6, lr}	@ 00042030 70b5
.org 0x42032
	adds r4, r0, #0	@ 00042032 041c
.org 0x42034
	bl 0x1cd28	@ 00042034 daf778fe
.org 0x42038
	adds r0, r4, #0	@ 00042038 201c
.org 0x4203a
	bl 0x1ceec	@ 0004203a daf757ff
.org 0x4203e
	ldrb r1, [r4, #10]	@ 0004203e a17a
.org 0x42040
	movs r0, #1	@ 00042040 0120
.org 0x42042
	movs r6, #0	@ 00042042 0026
.org 0x42044
	orrs r0, r1	@ 00042044 0843
.org 0x42046
	movs r1, #2	@ 00042046 0221
.org 0x42048
	orrs r0, r1	@ 00042048 0843
.org 0x4204a
	strb r0, [r4, #10]	@ 0004204a a072
.org 0x4204c
	ldr r1, [pc, #52]	@ 0004204c 0d49
.org 0x4204e
	adds r0, r4, #0	@ 0004204e 201c
.org 0x42050
	bl 0x1cf00	@ 00042050 daf756ff
.org 0x42054
	ldrb r1, [r4, #10]	@ 00042054 a17a
.org 0x42056
	movs r0, #4	@ 00042056 0420
.org 0x42058
	orrs r0, r1	@ 00042058 0843
.org 0x4205a
	strb r0, [r4, #10]	@ 0004205a a072
.org 0x4205c
	adds r5, r4, #0	@ 0004205c 251c
.org 0x4205e
	adds r5, #116	@ 0004205e 7435
.org 0x42060
	ldr r1, [pc, #36]	@ 00042060 0949
.org 0x42062
	adds r2, r4, #0	@ 00042062 221c
.org 0x42064
	adds r2, #84	@ 00042064 5432
.org 0x42066
	adds r0, r5, #0	@ 00042066 281c
.org 0x42068
	movs r3, #8	@ 00042068 0823
.org 0x4206a
	bl 0x5760	@ 0004206a c3f779fb
.org 0x4206e
	str r4, [r5, #44]	@ 0004206e ec62
.org 0x42070
	ldr r0, [pc, #24]	@ 00042070 0648
.org 0x42072
	str r0, [r5, #36]	@ 00042072 6862
.org 0x42074
	movs r0, #69	@ 00042074 4520
.org 0x42076
	bl 0x2b10	@ 00042076 c0f74bfd
.org 0x4207a
	strb r6, [r4, #18]	@ 0004207a a674
.org 0x4207c
	pop {r4, r5, r6}	@ 0004207c 70bc
.org 0x4207e
	pop {r0}	@ 0004207e 01bc
.org 0x42080
	bx r0	@ 00042080 0047
