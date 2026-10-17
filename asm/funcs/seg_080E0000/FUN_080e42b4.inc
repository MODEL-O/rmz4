@ FUN_080e42b4  entry 0x080e42b4  size 96
.thumb
.org 0xe42b4
FUN_080e42b4:
	push {r4, lr}	@ 000e42b4 10b5
.org 0xe42b6
	adds r4, r0, #0	@ 000e42b6 041c
.org 0xe42b8
	bl 0x1cc9c	@ 000e42b8 38f7f0fc
.org 0xe42bc
	ldrb r1, [r4, #10]	@ 000e42bc a17a
.org 0xe42be
	movs r0, #1	@ 000e42be 0120
.org 0xe42c0
	orrs r0, r1	@ 000e42c0 0843
.org 0xe42c2
	movs r1, #2	@ 000e42c2 0221
.org 0xe42c4
	orrs r0, r1	@ 000e42c4 0843
.org 0xe42c6
	strb r0, [r4, #10]	@ 000e42c6 a072
.org 0xe42c8
	movs r1, #215	@ 000e42c8 d721
.org 0xe42ca
	lsls r1, r1, #8	@ 000e42ca 0902
.org 0xe42cc
	adds r0, r4, #0	@ 000e42cc 201c
.org 0xe42ce
	bl 0x1cf00	@ 000e42ce 38f717fe
.org 0xe42d2
	adds r0, r4, #0	@ 000e42d2 201c
.org 0xe42d4
	bl 0x1cff0	@ 000e42d4 38f78cfe
.org 0xe42d8
	movs r2, #0	@ 000e42d8 0022
.org 0xe42da
	ldrb r1, [r4, #10]	@ 000e42da a17a
.org 0xe42dc
	movs r0, #239	@ 000e42dc ef20
.org 0xe42de
	ands r0, r1	@ 000e42de 0840
.org 0xe42e0
	strb r0, [r4, #10]	@ 000e42e0 a072
.org 0xe42e2
	movs r3, #1	@ 000e42e2 0123
.org 0xe42e4
	adds r0, r4, #0	@ 000e42e4 201c
.org 0xe42e6
	adds r0, #76	@ 000e42e6 4c30
.org 0xe42e8
	strb r2, [r0, #0]	@ 000e42e8 0270
.org 0xe42ea
	adds r2, r4, #0	@ 000e42ea 221c
.org 0xe42ec
	adds r2, #74	@ 000e42ec 4a32
.org 0xe42ee
	ldrb r1, [r2, #0]	@ 000e42ee 1178
.org 0xe42f0
	movs r0, #17	@ 000e42f0 1120
.org 0xe42f2
	negs r0, r0	@ 000e42f2 4042
.org 0xe42f4
	ands r0, r1	@ 000e42f4 0840
.org 0xe42f6
	strb r0, [r2, #0]	@ 000e42f6 1070
.org 0xe42f8
	ldr r1, [pc, #24]	@ 000e42f8 0649
.org 0xe42fa
	ldrb r0, [r4, #9]	@ 000e42fa 607a
.org 0xe42fc
	lsls r0, r0, #2	@ 000e42fc 8000
.org 0xe42fe
	adds r0, r0, r1	@ 000e42fe 4018
.org 0xe4300
	str r3, [r4, #12]	@ 000e4300 e360
.org 0xe4302
	ldr r0, [r0, #0]	@ 000e4302 0068
.org 0xe4304
	ldr r0, [r0, #4]	@ 000e4304 4068
.org 0xe4306
	str r0, [r4, #20]	@ 000e4306 6061
.org 0xe4308
	adds r0, r4, #0	@ 000e4308 201c
.org 0xe430a
	bl 0xe4284	@ 000e430a fff7bbff
.org 0xe430e
	pop {r4}	@ 000e430e 10bc
.org 0xe4310
	pop {r0}	@ 000e4310 01bc
.org 0xe4312
	bx r0	@ 000e4312 0047
