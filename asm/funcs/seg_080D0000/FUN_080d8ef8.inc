@ FUN_080d8ef8  entry 0x080d8ef8  size 158
.thumb
.org 0xd8ef8
FUN_080d8ef8:
	push {r4, r5, r6, r7, lr}	@ 000d8ef8 f0b5
.org 0xd8efa
	mov r7, r9	@ 000d8efa 4f46
.org 0xd8efc
	mov r6, r8	@ 000d8efc 4646
.org 0xd8efe
	push {r6, r7}	@ 000d8efe c0b4
.org 0xd8f00
	adds r5, r0, #0	@ 000d8f00 051c
.org 0xd8f02
	mov r8, r3	@ 000d8f02 9846
.org 0xd8f04
	ldr r0, [sp, #28]	@ 000d8f04 0798
.org 0xd8f06
	lsls r1, r1, #24	@ 000d8f06 0906
.org 0xd8f08
	lsrs r1, r1, #24	@ 000d8f08 090e
.org 0xd8f0a
	mov r9, r1	@ 000d8f0a 8946
.org 0xd8f0c
	lsls r2, r2, #16	@ 000d8f0c 1204
.org 0xd8f0e
	lsrs r6, r2, #16	@ 000d8f0e 160c
.org 0xd8f10
	lsls r0, r0, #24	@ 000d8f10 0006
.org 0xd8f12
	lsrs r4, r0, #24	@ 000d8f12 040e
.org 0xd8f14
	ldr r0, [pc, #76]	@ 000d8f14 1348
.org 0xd8f16
	ldr r0, [r0, #0]	@ 000d8f16 0068
.org 0xd8f18
	bl 0x5500	@ 000d8f18 2cf7f2fa
.org 0xd8f1c
	mov ip, r0	@ 000d8f1c 8446
.org 0xd8f1e
	cmp r0, #0	@ 000d8f1e 0028
.org 0xd8f20
	beq.n 0xd8f92	@ 000d8f20 37d0
.org 0xd8f22
	adds r0, #37	@ 000d8f22 2530
.org 0xd8f24
	movs r3, #0	@ 000d8f24 0023
.org 0xd8f26
	movs r2, #1	@ 000d8f26 0122
.org 0xd8f28
	strb r2, [r0, #0]	@ 000d8f28 0270
.org 0xd8f2a
	ldr r1, [pc, #60]	@ 000d8f2a 0f49
.org 0xd8f2c
	movs r0, #28	@ 000d8f2c 1c20
.org 0xd8f2e
	mov r7, ip	@ 000d8f2e 6746
.org 0xd8f30
	strb r0, [r7, #9]	@ 000d8f30 7872
.org 0xd8f32
	ldr r0, [r1, #112]	@ 000d8f32 086f
.org 0xd8f34
	ldr r0, [r0, #0]	@ 000d8f34 0068
.org 0xd8f36
	str r0, [r7, #20]	@ 000d8f36 7861
.org 0xd8f38
	movs r0, #0	@ 000d8f38 0020
.org 0xd8f3a
	strh r3, [r7, #32]	@ 000d8f3a 3b84
.org 0xd8f3c
	mov r1, ip	@ 000d8f3c 6146
.org 0xd8f3e
	adds r1, #34	@ 000d8f3e 2231
.org 0xd8f40
	strb r0, [r1, #0]	@ 000d8f40 0870
.org 0xd8f42
	strb r4, [r7, #16]	@ 000d8f42 3c74
.org 0xd8f44
	strb r2, [r7, #17]	@ 000d8f44 7a74
.org 0xd8f46
	ldr r0, [r5, #0]	@ 000d8f46 2868
.org 0xd8f48
	str r0, [r7, #84]	@ 000d8f48 7865
.org 0xd8f4a
	ldr r0, [r5, #4]	@ 000d8f4a 6868
.org 0xd8f4c
	str r0, [r7, #88]	@ 000d8f4c b865
.org 0xd8f4e
	str r6, [r7, #116]	@ 000d8f4e 7e67
.org 0xd8f50
	mov r0, r8	@ 000d8f50 4046
.org 0xd8f52
	str r0, [r7, #120]	@ 000d8f52 b867
.org 0xd8f54
	mov r2, r9	@ 000d8f54 4a46
.org 0xd8f56
	cmp r2, #0	@ 000d8f56 002a
.org 0xd8f58
	beq.n 0xd8f6c	@ 000d8f58 08d0
.org 0xd8f5a
	ldrb r0, [r7, #10]	@ 000d8f5a b87a
.org 0xd8f5c
	movs r1, #16	@ 000d8f5c 1021
.org 0xd8f5e
	orrs r0, r1	@ 000d8f5e 0843
.org 0xd8f60
	b.n 0xd8f74	@ 000d8f60 08e0
.org 0xd8f62
	.byte 0x00	@ 000d8f62 data
.org 0xd8f63
	.byte 0x00	@ 000d8f63 data
.org 0xd8f64
	.byte 0x9c,0xed,0x02,0x02	@ 000d8f64 data
.org 0xd8f68
	.byte 0x64,0x6f,0x86,0x08	@ 000d8f68 data
.org 0xd8f6c
	mov r7, ip	@ 000d8f6c 6746
.org 0xd8f6e
	ldrb r1, [r7, #10]	@ 000d8f6e b97a
.org 0xd8f70
	movs r0, #239	@ 000d8f70 ef20
.org 0xd8f72
	ands r0, r1	@ 000d8f72 0840
.org 0xd8f74
	strb r0, [r7, #10]	@ 000d8f74 b872
.org 0xd8f76
	movs r1, #1	@ 000d8f76 0121
.org 0xd8f78
	ands r1, r2	@ 000d8f78 1140
.org 0xd8f7a
	mov r0, ip	@ 000d8f7a 6046
.org 0xd8f7c
	adds r0, #76	@ 000d8f7c 4c30
.org 0xd8f7e
	strb r1, [r0, #0]	@ 000d8f7e 0170
.org 0xd8f80
	mov r3, ip	@ 000d8f80 6346
.org 0xd8f82
	adds r3, #74	@ 000d8f82 4a33
.org 0xd8f84
	lsls r1, r1, #4	@ 000d8f84 0901
.org 0xd8f86
	ldrb r2, [r3, #0]	@ 000d8f86 1a78
.org 0xd8f88
	movs r0, #17	@ 000d8f88 1120
.org 0xd8f8a
	negs r0, r0	@ 000d8f8a 4042
.org 0xd8f8c
	ands r0, r2	@ 000d8f8c 1040
.org 0xd8f8e
	orrs r0, r1	@ 000d8f8e 0843
.org 0xd8f90
	strb r0, [r3, #0]	@ 000d8f90 1870
.org 0xd8f92
	mov r0, ip	@ 000d8f92 6046
.org 0xd8f94
	pop {r3, r4}	@ 000d8f94 18bc
