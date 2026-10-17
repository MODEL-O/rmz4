@ FUN_080d9f1c  entry 0x080d9f1c  size 150
.thumb
.org 0xd9f1c
FUN_080d9f1c:
	push {r4, r5, r6, lr}	@ 000d9f1c 70b5
.org 0xd9f1e
	adds r5, r0, #0	@ 000d9f1e 051c
.org 0xd9f20
	lsls r1, r1, #24	@ 000d9f20 0906
.org 0xd9f22
	lsrs r6, r1, #24	@ 000d9f22 0e0e
.org 0xd9f24
	ldr r0, [pc, #92]	@ 000d9f24 1748
.org 0xd9f26
	ldr r0, [r0, #0]	@ 000d9f26 0068
.org 0xd9f28
	bl 0x5500	@ 000d9f28 2bf7eafa
.org 0xd9f2c
	mov ip, r0	@ 000d9f2c 8446
.org 0xd9f2e
	cmp r0, #0	@ 000d9f2e 0028
.org 0xd9f30
	beq.n 0xd9fb2	@ 000d9f30 3fd0
.org 0xd9f32
	adds r0, #37	@ 000d9f32 2530
.org 0xd9f34
	movs r3, #0	@ 000d9f34 0023
.org 0xd9f36
	movs r4, #1	@ 000d9f36 0124
.org 0xd9f38
	strb r4, [r0, #0]	@ 000d9f38 0470
.org 0xd9f3a
	ldr r0, [pc, #76]	@ 000d9f3a 1348
.org 0xd9f3c
	movs r1, #33	@ 000d9f3c 2121
.org 0xd9f3e
	mov r2, ip	@ 000d9f3e 6246
.org 0xd9f40
	strb r1, [r2, #9]	@ 000d9f40 5172
.org 0xd9f42
	adds r0, #132	@ 000d9f42 8430
.org 0xd9f44
	ldr r0, [r0, #0]	@ 000d9f44 0068
.org 0xd9f46
	ldr r0, [r0, #0]	@ 000d9f46 0068
.org 0xd9f48
	str r0, [r2, #20]	@ 000d9f48 5061
.org 0xd9f4a
	movs r2, #0	@ 000d9f4a 0022
.org 0xd9f4c
	mov r0, ip	@ 000d9f4c 6046
.org 0xd9f4e
	strh r3, [r0, #32]	@ 000d9f4e 0384
.org 0xd9f50
	adds r0, #34	@ 000d9f50 2230
.org 0xd9f52
	strb r2, [r0, #0]	@ 000d9f52 0270
.org 0xd9f54
	ldr r0, [r5, #84]	@ 000d9f54 686d
.org 0xd9f56
	ldr r1, [r5, #88]	@ 000d9f56 a96d
.org 0xd9f58
	mov r3, ip	@ 000d9f58 6346
.org 0xd9f5a
	str r0, [r3, #84]	@ 000d9f5a 5865
.org 0xd9f5c
	str r1, [r3, #88]	@ 000d9f5c 9965
.org 0xd9f5e
	ldr r0, [r5, #92]	@ 000d9f5e e86d
.org 0xd9f60
	ldr r1, [r5, #96]	@ 000d9f60 296e
.org 0xd9f62
	str r0, [r3, #92]	@ 000d9f62 d865
.org 0xd9f64
	str r1, [r3, #96]	@ 000d9f64 1966
.org 0xd9f66
	strb r2, [r3, #16]	@ 000d9f66 1a74
.org 0xd9f68
	strb r2, [r3, #17]	@ 000d9f68 5a74
.org 0xd9f6a
	mov r0, ip	@ 000d9f6a 6046
.org 0xd9f6c
	adds r0, #124	@ 000d9f6c 7c30
.org 0xd9f6e
	strb r6, [r0, #0]	@ 000d9f6e 0670
.org 0xd9f70
	ldrb r0, [r5, #10]	@ 000d9f70 a87a
.org 0xd9f72
	lsrs r2, r0, #4	@ 000d9f72 0209
.org 0xd9f74
	ands r2, r4	@ 000d9f74 2240
.org 0xd9f76
	cmp r2, #0	@ 000d9f76 002a
.org 0xd9f78
	beq.n 0xd9f8c	@ 000d9f78 08d0
.org 0xd9f7a
	ldrb r0, [r3, #10]	@ 000d9f7a 987a
.org 0xd9f7c
	movs r1, #16	@ 000d9f7c 1021
.org 0xd9f7e
	orrs r0, r1	@ 000d9f7e 0843
.org 0xd9f80
	strb r0, [r3, #10]	@ 000d9f80 9872
.org 0xd9f82
	b.n 0xd9f98	@ 000d9f82 09e0
.org 0xd9f84
	.byte 0x9c,0xed,0x02,0x02	@ 000d9f84 data
.org 0xd9f88
	.byte 0x64,0x6f,0x86,0x08	@ 000d9f88 data
.org 0xd9f8c
	mov r0, ip	@ 000d9f8c 6046
.org 0xd9f8e
	ldrb r1, [r0, #10]	@ 000d9f8e 817a
.org 0xd9f90
	movs r0, #239	@ 000d9f90 ef20
.org 0xd9f92
	ands r0, r1	@ 000d9f92 0840
.org 0xd9f94
	mov r1, ip	@ 000d9f94 6146
.org 0xd9f96
	strb r0, [r1, #10]	@ 000d9f96 8872
.org 0xd9f98
	adds r1, r2, #0	@ 000d9f98 111c
.org 0xd9f9a
	mov r0, ip	@ 000d9f9a 6046
.org 0xd9f9c
	adds r0, #76	@ 000d9f9c 4c30
.org 0xd9f9e
	strb r1, [r0, #0]	@ 000d9f9e 0170
.org 0xd9fa0
	mov r3, ip	@ 000d9fa0 6346
.org 0xd9fa2
	adds r3, #74	@ 000d9fa2 4a33
.org 0xd9fa4
	lsls r1, r1, #4	@ 000d9fa4 0901
.org 0xd9fa6
	ldrb r2, [r3, #0]	@ 000d9fa6 1a78
.org 0xd9fa8
	movs r0, #17	@ 000d9fa8 1120
.org 0xd9faa
	negs r0, r0	@ 000d9faa 4042
.org 0xd9fac
	ands r0, r2	@ 000d9fac 1040
.org 0xd9fae
	orrs r0, r1	@ 000d9fae 0843
.org 0xd9fb0
	strb r0, [r3, #0]	@ 000d9fb0 1870
