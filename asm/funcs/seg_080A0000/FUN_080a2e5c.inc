@ FUN_080a2e5c  entry 0x080a2e5c  size 64
.thumb
.org 0xa2e5c
FUN_080a2e5c:
	push {lr}	@ 000a2e5c 00b5
.org 0xa2e5e
	adds r2, r0, #0	@ 000a2e5e 021c
.org 0xa2e60
	adds r0, #140	@ 000a2e60 8c30
.org 0xa2e62
	ldr r0, [r0, #0]	@ 000a2e62 0068
.org 0xa2e64
	movs r1, #129	@ 000a2e64 8121
.org 0xa2e66
	lsls r1, r1, #2	@ 000a2e66 8900
.org 0xa2e68
	ands r0, r1	@ 000a2e68 0840
.org 0xa2e6a
	cmp r0, #0	@ 000a2e6a 0028
.org 0xa2e6c
	beq.n 0xa2e8c	@ 000a2e6c 0ed0
.org 0xa2e6e
	ldr r1, [pc, #24]	@ 000a2e6e 0649
.org 0xa2e70
	ldrb r0, [r2, #9]	@ 000a2e70 507a
.org 0xa2e72
	lsls r0, r0, #2	@ 000a2e72 8000
.org 0xa2e74
	adds r0, r0, r1	@ 000a2e74 4018
.org 0xa2e76
	movs r1, #2	@ 000a2e76 0221
.org 0xa2e78
	str r1, [r2, #12]	@ 000a2e78 d160
.org 0xa2e7a
	ldr r0, [r0, #0]	@ 000a2e7a 0068
.org 0xa2e7c
	ldr r0, [r0, #8]	@ 000a2e7c 8068
.org 0xa2e7e
	str r0, [r2, #20]	@ 000a2e7e 5061
.org 0xa2e80
	adds r0, r2, #0	@ 000a2e80 101c
.org 0xa2e82
	bl 0xa30cc	@ 000a2e82 00f023f9
.org 0xa2e86
	b.n 0xa2e9c	@ 000a2e86 09e0
.org 0xa2e88
	.byte 0x40,0xdb,0x85,0x08	@ 000a2e88 data
.org 0xa2e8c
	ldr r0, [pc, #16]	@ 000a2e8c 0448
.org 0xa2e8e
	ldrb r1, [r2, #13]	@ 000a2e8e 517b
.org 0xa2e90
	lsls r1, r1, #2	@ 000a2e90 8900
.org 0xa2e92
	adds r1, r1, r0	@ 000a2e92 0918
.org 0xa2e94
	ldr r1, [r1, #0]	@ 000a2e94 0968
.org 0xa2e96
	adds r0, r2, #0	@ 000a2e96 101c
.org 0xa2e98
	bl 0x128f80	@ 000a2e98 86f072f8
