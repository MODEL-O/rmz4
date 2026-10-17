@ FUN_080e2f2c  entry 0x080e2f2c  size 140
.thumb
.org 0xe2f2c
FUN_080e2f2c:
	push {r4, r5, r6, lr}	@ 000e2f2c 70b5
.org 0xe2f2e
	adds r5, r0, #0	@ 000e2f2e 051c
.org 0xe2f30
	bl 0x1cc9c	@ 000e2f30 39f7b4fe
.org 0xe2f34
	ldrb r0, [r5, #10]	@ 000e2f34 a87a
.org 0xe2f36
	movs r4, #1	@ 000e2f36 0124
.org 0xe2f38
	movs r6, #0	@ 000e2f38 0026
.org 0xe2f3a
	orrs r0, r4	@ 000e2f3a 2043
.org 0xe2f3c
	movs r1, #2	@ 000e2f3c 0221
.org 0xe2f3e
	orrs r0, r1	@ 000e2f3e 0843
.org 0xe2f40
	strb r0, [r5, #10]	@ 000e2f40 a872
.org 0xe2f42
	ldr r1, [pc, #48]	@ 000e2f42 0c49
.org 0xe2f44
	adds r0, r5, #0	@ 000e2f44 281c
.org 0xe2f46
	bl 0x1cf00	@ 000e2f46 39f7dbff
.org 0xe2f4a
	adds r0, r5, #0	@ 000e2f4a 281c
.org 0xe2f4c
	bl 0x1cff0	@ 000e2f4c 3af750f8
.org 0xe2f50
	ldr r2, [pc, #36]	@ 000e2f50 094a
.org 0xe2f52
	ldr r1, [r2, #0]	@ 000e2f52 1168
.org 0xe2f54
	ldr r0, [pc, #36]	@ 000e2f54 0948
.org 0xe2f56
	muls r0, r1	@ 000e2f56 4843
.org 0xe2f58
	ldr r1, [pc, #36]	@ 000e2f58 0949
.org 0xe2f5a
	adds r0, r0, r1	@ 000e2f5a 4018
.org 0xe2f5c
	lsls r0, r0, #1	@ 000e2f5c 4000
.org 0xe2f5e
	lsrs r1, r0, #1	@ 000e2f5e 4108
.org 0xe2f60
	str r1, [r2, #0]	@ 000e2f60 1160
.org 0xe2f62
	lsrs r2, r0, #17	@ 000e2f62 420c
.org 0xe2f64
	ands r2, r4	@ 000e2f64 2240
.org 0xe2f66
	cmp r2, #0	@ 000e2f66 002a
.org 0xe2f68
	beq.n 0xe2f84	@ 000e2f68 0cd0
.org 0xe2f6a
	ldrb r0, [r5, #10]	@ 000e2f6a a87a
.org 0xe2f6c
	movs r1, #16	@ 000e2f6c 1021
.org 0xe2f6e
	orrs r0, r1	@ 000e2f6e 0843
.org 0xe2f70
	b.n 0xe2f8a	@ 000e2f70 0be0
.org 0xe2f72
	.byte 0x00	@ 000e2f72 data
.org 0xe2f73
	.byte 0x00	@ 000e2f73 data
.org 0xe2f74
	.byte 0x06,0x95,0x00,0x00	@ 000e2f74 data
.org 0xe2f78
	.byte 0x38,0xdc,0x02,0x02	@ 000e2f78 data
.org 0xe2f7c
	.byte 0xfd,0x43,0x03,0x00	@ 000e2f7c data
.org 0xe2f80
	.byte 0xc3,0x9e,0x26,0x00	@ 000e2f80 data
.org 0xe2f84
	ldrb r1, [r5, #10]	@ 000e2f84 a97a
.org 0xe2f86
	movs r0, #239	@ 000e2f86 ef20
.org 0xe2f88
	ands r0, r1	@ 000e2f88 0840
.org 0xe2f8a
	strb r0, [r5, #10]	@ 000e2f8a a872
.org 0xe2f8c
	movs r3, #1	@ 000e2f8c 0123
.org 0xe2f8e
	adds r1, r3, #0	@ 000e2f8e 191c
.org 0xe2f90
	ands r1, r2	@ 000e2f90 1140
.org 0xe2f92
	adds r0, r5, #0	@ 000e2f92 281c
.org 0xe2f94
	adds r0, #76	@ 000e2f94 4c30
.org 0xe2f96
	strb r1, [r0, #0]	@ 000e2f96 0170
.org 0xe2f98
	adds r4, r5, #0	@ 000e2f98 2c1c
.org 0xe2f9a
	adds r4, #74	@ 000e2f9a 4a34
.org 0xe2f9c
	lsls r1, r1, #4	@ 000e2f9c 0901
.org 0xe2f9e
	ldrb r2, [r4, #0]	@ 000e2f9e 2278
.org 0xe2fa0
	movs r0, #17	@ 000e2fa0 1120
.org 0xe2fa2
	negs r0, r0	@ 000e2fa2 4042
.org 0xe2fa4
	ands r0, r2	@ 000e2fa4 1040
.org 0xe2fa6
	orrs r0, r1	@ 000e2fa6 0843
.org 0xe2fa8
	strb r0, [r4, #0]	@ 000e2fa8 2070
.org 0xe2faa
	movs r0, #6	@ 000e2faa 0620
.org 0xe2fac
	strb r0, [r5, #18]	@ 000e2fac a874
.org 0xe2fae
	ldr r1, [pc, #28]	@ 000e2fae 0749
.org 0xe2fb0
	ldrb r0, [r5, #9]	@ 000e2fb0 687a
.org 0xe2fb2
	lsls r0, r0, #2	@ 000e2fb2 8000
.org 0xe2fb4
	adds r0, r0, r1	@ 000e2fb4 4018
.org 0xe2fb6
	str r3, [r5, #12]	@ 000e2fb6 eb60
