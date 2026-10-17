@ FUN_080c8f20  entry 0x080c8f20  size 154
.thumb
.org 0xc8f20
FUN_080c8f20:
	push {r4, r5, r6, lr}	@ 000c8f20 70b5
.org 0xc8f22
	adds r4, r0, #0	@ 000c8f22 041c
.org 0xc8f24
	ldr r0, [r4, #40]	@ 000c8f24 a06a
.org 0xc8f26
	mov ip, r0	@ 000c8f26 8446
.org 0xc8f28
	ldr r0, [pc, #68]	@ 000c8f28 1148
.org 0xc8f2a
	ldr r5, [r0, #0]	@ 000c8f2a 0568
.org 0xc8f2c
	mov r1, ip	@ 000c8f2c 6146
.org 0xc8f2e
	ldrb r0, [r1, #13]	@ 000c8f2e 487b
.org 0xc8f30
	cmp r0, #13	@ 000c8f30 0d28
.org 0xc8f32
	bls.n 0xc8f38	@ 000c8f32 01d9
.org 0xc8f34
	cmp r0, #15	@ 000c8f34 0f28
.org 0xc8f36
	bne.n 0xc8f78	@ 000c8f36 1fd1
.org 0xc8f38
	ldrb r1, [r4, #10]	@ 000c8f38 a17a
.org 0xc8f3a
	movs r0, #254	@ 000c8f3a fe20
.org 0xc8f3c
	ands r0, r1	@ 000c8f3c 0840
.org 0xc8f3e
	movs r2, #0	@ 000c8f3e 0022
.org 0xc8f40
	movs r1, #253	@ 000c8f40 fd21
.org 0xc8f42
	ands r0, r1	@ 000c8f42 0840
.org 0xc8f44
	strb r0, [r4, #10]	@ 000c8f44 a072
.org 0xc8f46
	adds r0, r4, #0	@ 000c8f46 201c
.org 0xc8f48
	adds r0, #140	@ 000c8f48 8c30
.org 0xc8f4a
	str r2, [r0, #0]	@ 000c8f4a 0260
.org 0xc8f4c
	adds r0, #4	@ 000c8f4c 0430
.org 0xc8f4e
	str r2, [r0, #0]	@ 000c8f4e 0260
.org 0xc8f50
	adds r0, #4	@ 000c8f50 0430
.org 0xc8f52
	strb r2, [r0, #0]	@ 000c8f52 0270
.org 0xc8f54
	ldrb r1, [r4, #10]	@ 000c8f54 a17a
.org 0xc8f56
	movs r0, #251	@ 000c8f56 fb20
.org 0xc8f58
	ands r0, r1	@ 000c8f58 0840
.org 0xc8f5a
	strb r0, [r4, #10]	@ 000c8f5a a072
.org 0xc8f5c
	ldr r1, [pc, #20]	@ 000c8f5c 0549
.org 0xc8f5e
	ldrb r0, [r4, #9]	@ 000c8f5e 607a
.org 0xc8f60
	lsls r0, r0, #2	@ 000c8f60 8000
.org 0xc8f62
	adds r0, r0, r1	@ 000c8f62 4018
.org 0xc8f64
	movs r1, #3	@ 000c8f64 0321
.org 0xc8f66
	str r1, [r4, #12]	@ 000c8f66 e160
.org 0xc8f68
	ldr r0, [r0, #0]	@ 000c8f68 0068
.org 0xc8f6a
	ldr r0, [r0, #12]	@ 000c8f6a c068
.org 0xc8f6c
	str r0, [r4, #20]	@ 000c8f6c 6061
.org 0xc8f6e
	b.n 0xc925e	@ 000c8f6e 76e1
.org 0xc8f70
	.byte 0xf0,0xdb,0x02,0x02	@ 000c8f70 data
.org 0xc8f74
	.byte 0xf4,0x49,0x86,0x08	@ 000c8f74 data
.org 0xc8f78
	mov r2, ip	@ 000c8f78 6246
.org 0xc8f7a
	ldrb r0, [r2, #10]	@ 000c8f7a 907a
.org 0xc8f7c
	lsrs r2, r0, #4	@ 000c8f7c 0209
.org 0xc8f7e
	movs r0, #1	@ 000c8f7e 0120
.org 0xc8f80
	ands r2, r0	@ 000c8f80 0240
.org 0xc8f82
	cmp r2, #0	@ 000c8f82 002a
.org 0xc8f84
	beq.n 0xc8f8e	@ 000c8f84 03d0
.org 0xc8f86
	ldrb r1, [r4, #10]	@ 000c8f86 a17a
.org 0xc8f88
	movs r0, #16	@ 000c8f88 1020
.org 0xc8f8a
	orrs r0, r1	@ 000c8f8a 0843
.org 0xc8f8c
	b.n 0xc8f94	@ 000c8f8c 02e0
.org 0xc8f8e
	ldrb r1, [r4, #10]	@ 000c8f8e a17a
.org 0xc8f90
	movs r0, #239	@ 000c8f90 ef20
.org 0xc8f92
	ands r0, r1	@ 000c8f92 0840
.org 0xc8f94
	strb r0, [r4, #10]	@ 000c8f94 a072
.org 0xc8f96
	adds r1, r2, #0	@ 000c8f96 111c
.org 0xc8f98
	adds r0, r4, #0	@ 000c8f98 201c
.org 0xc8f9a
	adds r0, #76	@ 000c8f9a 4c30
.org 0xc8f9c
	strb r1, [r0, #0]	@ 000c8f9c 0170
.org 0xc8f9e
	adds r3, r4, #0	@ 000c8f9e 231c
.org 0xc8fa0
	adds r3, #74	@ 000c8fa0 4a33
.org 0xc8fa2
	lsls r1, r1, #4	@ 000c8fa2 0901
.org 0xc8fa4
	ldrb r2, [r3, #0]	@ 000c8fa4 1a78
.org 0xc8fa6
	movs r0, #17	@ 000c8fa6 1120
.org 0xc8fa8
	negs r0, r0	@ 000c8fa8 4042
.org 0xc8faa
	ands r0, r2	@ 000c8faa 1040
.org 0xc8fac
	orrs r0, r1	@ 000c8fac 0843
.org 0xc8fae
	strb r0, [r3, #0]	@ 000c8fae 1870
.org 0xc8fb0
	ldrb r0, [r4, #13]	@ 000c8fb0 607b
.org 0xc8fb2
	cmp r0, #5	@ 000c8fb2 0528
.org 0xc8fb4
	bls.n 0xc8fb8	@ 000c8fb4 00d9
.org 0xc8fb6
	b.n 0xc9246	@ 000c8fb6 46e1
.org 0xc8fb8
	lsls r0, r0, #2	@ 000c8fb8 8000
