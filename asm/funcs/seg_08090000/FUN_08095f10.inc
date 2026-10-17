@ FUN_08095f10  entry 0x08095f10  size 162
.thumb
.org 0x95f10
FUN_08095f10:
	push {r4, r5, r6, lr}	@ 00095f10 70b5
.org 0x95f12
	sub sp, #12	@ 00095f12 83b0
.org 0x95f14
	adds r4, r0, #0	@ 00095f14 041c
.org 0x95f16
	mov r1, sp	@ 00095f16 6946
.org 0x95f18
	ldr r0, [pc, #152]	@ 00095f18 2648
.org 0x95f1a
	ldmia r0!, {r2, r3, r5}	@ 00095f1a 2cc8
.org 0x95f1c
	stmia r1!, {r2, r3, r5}	@ 00095f1c 2cc1
.org 0x95f1e
	ldrb r2, [r4, #17]	@ 00095f1e 627c
.org 0x95f20
	ldr r1, [pc, #148]	@ 00095f20 2549
.org 0x95f22
	ldrb r0, [r4, #9]	@ 00095f22 607a
.org 0x95f24
	lsls r0, r0, #2	@ 00095f24 8000
.org 0x95f26
	adds r0, r0, r1	@ 00095f26 4018
.org 0x95f28
	movs r1, #1	@ 00095f28 0121
.org 0x95f2a
	str r1, [r4, #12]	@ 00095f2a e160
.org 0x95f2c
	ldr r0, [r0, #0]	@ 00095f2c 0068
.org 0x95f2e
	ldr r0, [r0, #4]	@ 00095f2e 4068
.org 0x95f30
	str r0, [r4, #20]	@ 00095f30 6061
.org 0x95f32
	ldrb r1, [r4, #10]	@ 00095f32 a17a
.org 0x95f34
	movs r0, #1	@ 00095f34 0120
.org 0x95f36
	orrs r0, r1	@ 00095f36 0843
.org 0x95f38
	movs r1, #2	@ 00095f38 0221
.org 0x95f3a
	orrs r0, r1	@ 00095f3a 0843
.org 0x95f3c
	strb r0, [r4, #10]	@ 00095f3c a072
.org 0x95f3e
	adds r1, r4, #0	@ 00095f3e 211c
.org 0x95f40
	adds r1, #184	@ 00095f40 b831
.org 0x95f42
	lsls r2, r2, #2	@ 00095f42 9200
.org 0x95f44
	mov r3, sp	@ 00095f44 6b46
.org 0x95f46
	adds r0, r3, r2	@ 00095f46 9818
.org 0x95f48
	ldr r0, [r0, #0]	@ 00095f48 0068
.org 0x95f4a
	str r0, [r1, #0]	@ 00095f4a 0860
.org 0x95f4c
	adds r0, r4, #0	@ 00095f4c 201c
.org 0x95f4e
	bl 0x1cc9c	@ 00095f4e 86f7a5fe
.org 0x95f52
	adds r1, r4, #0	@ 00095f52 211c
.org 0x95f54
	adds r1, #37	@ 00095f54 2531
.org 0x95f56
	movs r0, #25	@ 00095f56 1920
.org 0x95f58
	strb r0, [r1, #0]	@ 00095f58 0870
.org 0x95f5a
	movs r6, #0	@ 00095f5a 0026
.org 0x95f5c
	ldrb r1, [r4, #10]	@ 00095f5c a17a
.org 0x95f5e
	movs r0, #239	@ 00095f5e ef20
.org 0x95f60
	ands r0, r1	@ 00095f60 0840
.org 0x95f62
	strb r0, [r4, #10]	@ 00095f62 a072
.org 0x95f64
	adds r0, r4, #0	@ 00095f64 201c
.org 0x95f66
	adds r0, #76	@ 00095f66 4c30
.org 0x95f68
	strb r6, [r0, #0]	@ 00095f68 0670
.org 0x95f6a
	adds r2, r4, #0	@ 00095f6a 221c
.org 0x95f6c
	adds r2, #74	@ 00095f6c 4a32
.org 0x95f6e
	ldrb r1, [r2, #0]	@ 00095f6e 1178
.org 0x95f70
	movs r0, #17	@ 00095f70 1120
.org 0x95f72
	negs r0, r0	@ 00095f72 4042
.org 0x95f74
	ands r0, r1	@ 00095f74 0840
.org 0x95f76
	strb r0, [r2, #0]	@ 00095f76 1070
.org 0x95f78
	ldr r1, [pc, #64]	@ 00095f78 1049
.org 0x95f7a
	adds r0, r4, #0	@ 00095f7a 201c
.org 0x95f7c
	bl 0x1cf00	@ 00095f7c 86f7c0ff
.org 0x95f80
	adds r0, r4, #0	@ 00095f80 201c
.org 0x95f82
	bl 0x1cff0	@ 00095f82 87f735f8
.org 0x95f86
	ldrb r1, [r4, #10]	@ 00095f86 a17a
.org 0x95f88
	movs r0, #4	@ 00095f88 0420
.org 0x95f8a
	orrs r0, r1	@ 00095f8a 0843
.org 0x95f8c
	strb r0, [r4, #10]	@ 00095f8c a072
.org 0x95f8e
	adds r5, r4, #0	@ 00095f8e 251c
.org 0x95f90
	adds r5, #116	@ 00095f90 7435
.org 0x95f92
	ldr r1, [pc, #44]	@ 00095f92 0b49
.org 0x95f94
	adds r2, r4, #0	@ 00095f94 221c
.org 0x95f96
	adds r2, #84	@ 00095f96 5432
.org 0x95f98
	adds r0, r5, #0	@ 00095f98 281c
.org 0x95f9a
	movs r3, #18	@ 00095f9a 1223
.org 0x95f9c
	bl 0x5760	@ 00095f9c 6ff7e0fb
.org 0x95fa0
	str r4, [r5, #44]	@ 00095fa0 ec62
.org 0x95fa2
	str r6, [r5, #36]	@ 00095fa2 6e62
.org 0x95fa4
	adds r0, r4, #0	@ 00095fa4 201c
.org 0x95fa6
	bl 0x95fc4	@ 00095fa6 00f00df8
.org 0x95faa
	add sp, #12	@ 00095faa 03b0
.org 0x95fac
	pop {r4, r5, r6}	@ 00095fac 70bc
.org 0x95fae
	pop {r0}	@ 00095fae 01bc
.org 0x95fb0
	bx r0	@ 00095fb0 0047
