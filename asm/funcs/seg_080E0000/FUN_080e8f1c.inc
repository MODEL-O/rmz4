@ FUN_080e8f1c  entry 0x080e8f1c  size 138
.thumb
.org 0xe8f1c
FUN_080e8f1c:
	push {r4, r5, lr}	@ 000e8f1c 30b5
.org 0xe8f1e
	adds r4, r0, #0	@ 000e8f1e 041c
.org 0xe8f20
	bl 0x1cdbc	@ 000e8f20 33f74cff
.org 0xe8f24
	ldrb r1, [r4, #10]	@ 000e8f24 a17a
.org 0xe8f26
	movs r0, #1	@ 000e8f26 0120
.org 0xe8f28
	movs r5, #0	@ 000e8f28 0025
.org 0xe8f2a
	orrs r0, r1	@ 000e8f2a 0843
.org 0xe8f2c
	movs r1, #2	@ 000e8f2c 0221
.org 0xe8f2e
	orrs r0, r1	@ 000e8f2e 0843
.org 0xe8f30
	strb r0, [r4, #10]	@ 000e8f30 a072
.org 0xe8f32
	ldr r1, [pc, #116]	@ 000e8f32 1d49
.org 0xe8f34
	ldrb r0, [r4, #9]	@ 000e8f34 607a
.org 0xe8f36
	lsls r0, r0, #2	@ 000e8f36 8000
.org 0xe8f38
	adds r0, r0, r1	@ 000e8f38 4018
.org 0xe8f3a
	movs r1, #1	@ 000e8f3a 0121
.org 0xe8f3c
	str r1, [r4, #12]	@ 000e8f3c e160
.org 0xe8f3e
	ldr r0, [r0, #0]	@ 000e8f3e 0068
.org 0xe8f40
	ldr r0, [r0, #4]	@ 000e8f40 4068
.org 0xe8f42
	str r0, [r4, #20]	@ 000e8f42 6061
.org 0xe8f44
	ldr r1, [pc, #100]	@ 000e8f44 1949
.org 0xe8f46
	ldrb r0, [r4, #17]	@ 000e8f46 607c
.org 0xe8f48
	lsls r0, r0, #1	@ 000e8f48 4000
.org 0xe8f4a
	adds r0, r0, r1	@ 000e8f4a 4018
.org 0xe8f4c
	ldrh r1, [r0, #0]	@ 000e8f4c 0188
.org 0xe8f4e
	adds r0, r4, #0	@ 000e8f4e 201c
.org 0xe8f50
	bl 0x1cf00	@ 000e8f50 33f7d6ff
.org 0xe8f54
	ldrb r1, [r4, #17]	@ 000e8f54 617c
.org 0xe8f56
	lsls r0, r1, #4	@ 000e8f56 0801
.org 0xe8f58
	subs r0, r0, r1	@ 000e8f58 401a
.org 0xe8f5a
	subs r0, #70	@ 000e8f5a 4638
.org 0xe8f5c
	lsls r0, r0, #8	@ 000e8f5c 0002
.org 0xe8f5e
	ldr r1, [r4, #84]	@ 000e8f5e 616d
.org 0xe8f60
	adds r1, r1, r0	@ 000e8f60 0918
.org 0xe8f62
	str r1, [r4, #84]	@ 000e8f62 6165
.org 0xe8f64
	ldr r0, [r4, #88]	@ 000e8f64 a06d
.org 0xe8f66
	ldr r1, [pc, #72]	@ 000e8f66 1249
.org 0xe8f68
	adds r0, r0, r1	@ 000e8f68 4018
.org 0xe8f6a
	str r0, [r4, #88]	@ 000e8f6a a065
.org 0xe8f6c
	str r0, [r4, #120]	@ 000e8f6c a067
.org 0xe8f6e
	ldr r0, [pc, #68]	@ 000e8f6e 1148
.org 0xe8f70
	str r0, [r4, #96]	@ 000e8f70 2066
.org 0xe8f72
	adds r1, r4, #0	@ 000e8f72 211c
.org 0xe8f74
	adds r1, #80	@ 000e8f74 5031
.org 0xe8f76
	movs r2, #0	@ 000e8f76 0022
.org 0xe8f78
	movs r0, #128	@ 000e8f78 8020
.org 0xe8f7a
	lsls r0, r0, #2	@ 000e8f7a 8000
.org 0xe8f7c
	strh r0, [r1, #0]	@ 000e8f7c 0880
.org 0xe8f7e
	adds r1, #2	@ 000e8f7e 0231
.org 0xe8f80
	strh r0, [r1, #0]	@ 000e8f80 0880
.org 0xe8f82
	ldr r0, [r4, #88]	@ 000e8f82 a06d
.org 0xe8f84
	ldr r1, [r4, #96]	@ 000e8f84 216e
.org 0xe8f86
	adds r0, r0, r1	@ 000e8f86 4018
.org 0xe8f88
	str r0, [r4, #88]	@ 000e8f88 a065
.org 0xe8f8a
	adds r1, #64	@ 000e8f8a 4031
.org 0xe8f8c
	str r1, [r4, #96]	@ 000e8f8c 2166
.org 0xe8f8e
	movs r0, #255	@ 000e8f8e ff20
.org 0xe8f90
	strb r0, [r4, #18]	@ 000e8f90 a074
.org 0xe8f92
	adds r0, r4, #0	@ 000e8f92 201c
.org 0xe8f94
	adds r0, #118	@ 000e8f94 7630
.org 0xe8f96
	strh r5, [r0, #0]	@ 000e8f96 0580
.org 0xe8f98
	strb r2, [r4, #13]	@ 000e8f98 6273
.org 0xe8f9a
	adds r0, r4, #0	@ 000e8f9a 201c
.org 0xe8f9c
	bl 0xe8ebc	@ 000e8f9c fff78eff
.org 0xe8fa0
	pop {r4, r5}	@ 000e8fa0 30bc
.org 0xe8fa2
	pop {r0}	@ 000e8fa2 01bc
.org 0xe8fa4
	bx r0	@ 000e8fa4 0047
