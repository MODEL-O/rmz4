@ FUN_08000edc  entry 0x08000edc  size 210
.thumb
.org 0xedc
FUN_08000edc:
	push {r4, lr}	@ 00000edc 10b5
.org 0xede
	movs r4, #4	@ 00000ede 0424
.org 0xee0
	ldr r1, [pc, #56]	@ 00000ee0 0e49
.org 0xee2
	ldrh r2, [r1, #0]	@ 00000ee2 0a88
.org 0xee4
	ldr r0, [pc, #56]	@ 00000ee4 0e48
.org 0xee6
	ands r0, r2	@ 00000ee6 1040
.org 0xee8
	strh r0, [r1, #0]	@ 00000ee8 0880
.org 0xeea
	ldrh r0, [r1, #0]	@ 00000eea 0888
.org 0xeec
	ldr r3, [pc, #52]	@ 00000eec 0d4b
.org 0xeee
	ldr r0, [pc, #56]	@ 00000eee 0e48
.org 0xef0
	str r0, [r3, #4]	@ 00000ef0 5860
.org 0xef2
	ldr r1, [pc, #56]	@ 00000ef2 0e49
.org 0xef4
	ldrh r2, [r1, #0]	@ 00000ef4 0a88
.org 0xef6
	ldr r0, [pc, #56]	@ 00000ef6 0e48
.org 0xef8
	ands r0, r2	@ 00000ef8 1040
.org 0xefa
	strh r0, [r1, #0]	@ 00000efa 0880
.org 0xefc
	ldrh r0, [r1, #0]	@ 00000efc 0888
.org 0xefe
	movs r0, #192	@ 00000efe c020
.org 0xf00
	lsls r0, r0, #1	@ 00000f00 4000
.org 0xf02
	adds r2, r3, r0	@ 00000f02 1a18
.org 0xf04
	ldr r1, [r2, #8]	@ 00000f04 9168
.org 0xf06
	cmp r1, #0	@ 00000f06 0029
.org 0xf08
	beq.n 0xf56	@ 00000f08 25d0
.org 0xf0a
	ldr r0, [r2, #0]	@ 00000f0a 1068
.org 0xf0c
	str r0, [r2, #12]	@ 00000f0c d060
.org 0xf0e
	movs r0, #128	@ 00000f0e 8020
.org 0xf10
	lsls r0, r0, #17	@ 00000f10 4004
.org 0xf12
	ands r1, r0	@ 00000f12 0140
.org 0xf14
	cmp r1, #0	@ 00000f14 0029
.org 0xf16
	beq.n 0xf34	@ 00000f16 0dd0
.org 0xf18
	movs r0, #0	@ 00000f18 0020
.org 0xf1a
	b.n 0xf36	@ 00000f1a 0ce0
.org 0xf1c
	.byte 0x04,0x00,0x00,0x04	@ 00000f1c data
.org 0xf20
	.byte 0xef,0xff,0x00,0x00	@ 00000f20 data
.org 0xf24
	.byte 0x90,0x15,0x00,0x03	@ 00000f24 data
.org 0xf28
	.byte 0x21,0x0d,0x00,0x08	@ 00000f28 data
.org 0xf2c
	.byte 0x00,0x02,0x00,0x04	@ 00000f2c data
.org 0xf30
	.byte 0xfd,0xff,0x00,0x00	@ 00000f30 data
.org 0xf34
	movs r0, #1	@ 00000f34 0120
.org 0xf36
	strh r0, [r2, #28]	@ 00000f36 9083
.org 0xf38
	movs r0, #1	@ 00000f38 0120
.org 0xf3a
	strh r0, [r2, #30]	@ 00000f3a d083
.org 0xf3c
	ldr r0, [r2, #8]	@ 00000f3c 9068
.org 0xf3e
	strh r0, [r2, #32]	@ 00000f3e 1084
.org 0xf40
	lsls r0, r0, #16	@ 00000f40 0004
.org 0xf42
	lsrs r0, r0, #16	@ 00000f42 000c
.org 0xf44
	cmp r0, #1	@ 00000f44 0128
.org 0xf46
	beq.n 0xf4c	@ 00000f46 01d0
.org 0xf48
	movs r0, #3	@ 00000f48 0320
.org 0xf4a
	ands r4, r0	@ 00000f4a 0440
.org 0xf4c
	lsls r0, r4, #16	@ 00000f4c 2004
.org 0xf4e
	movs r1, #128	@ 00000f4e 8021
.org 0xf50
	lsls r1, r1, #9	@ 00000f50 4902
.org 0xf52
	adds r0, r0, r1	@ 00000f52 4018
.org 0xf54
	lsrs r4, r0, #16	@ 00000f54 040c
.org 0xf56
	adds r2, #36	@ 00000f56 2432
.org 0xf58
	ldr r1, [r2, #8]	@ 00000f58 9168
.org 0xf5a
	cmp r1, #0	@ 00000f5a 0029
.org 0xf5c
	beq.n 0xf92	@ 00000f5c 19d0
.org 0xf5e
	ldr r0, [r2, #0]	@ 00000f5e 1068
.org 0xf60
	str r0, [r2, #12]	@ 00000f60 d060
.org 0xf62
	movs r0, #128	@ 00000f62 8020
.org 0xf64
	lsls r0, r0, #17	@ 00000f64 4004
.org 0xf66
	ands r1, r0	@ 00000f66 0140
.org 0xf68
	cmp r1, #0	@ 00000f68 0029
.org 0xf6a
	beq.n 0xf70	@ 00000f6a 01d0
.org 0xf6c
	movs r0, #0	@ 00000f6c 0020
.org 0xf6e
	b.n 0xf72	@ 00000f6e 00e0
.org 0xf70
	movs r0, #1	@ 00000f70 0120
.org 0xf72
	strh r0, [r2, #28]	@ 00000f72 9083
.org 0xf74
	movs r0, #1	@ 00000f74 0120
.org 0xf76
	strh r0, [r2, #30]	@ 00000f76 d083
.org 0xf78
	ldr r0, [r2, #8]	@ 00000f78 9068
.org 0xf7a
	strh r0, [r2, #32]	@ 00000f7a 1084
.org 0xf7c
	lsls r0, r0, #16	@ 00000f7c 0004
.org 0xf7e
	lsrs r0, r0, #16	@ 00000f7e 000c
.org 0xf80
	cmp r0, #1	@ 00000f80 0128
.org 0xf82
	beq.n 0xf88	@ 00000f82 01d0
.org 0xf84
	movs r0, #3	@ 00000f84 0320
.org 0xf86
	ands r4, r0	@ 00000f86 0440
.org 0xf88
	lsls r0, r4, #16	@ 00000f88 2004
.org 0xf8a
	movs r1, #128	@ 00000f8a 8021
.org 0xf8c
	lsls r1, r1, #10	@ 00000f8c 8902
.org 0xf8e
	adds r0, r0, r1	@ 00000f8e 4018
.org 0xf90
	lsrs r4, r0, #16	@ 00000f90 040c
.org 0xf92
	lsls r0, r4, #16	@ 00000f92 2004
.org 0xf94
	asrs r4, r0, #16	@ 00000f94 0414
.org 0xf96
	movs r0, #3	@ 00000f96 0320
.org 0xf98
	ands r0, r4	@ 00000f98 2040
.org 0xf9a
	cmp r0, #0	@ 00000f9a 0028
.org 0xf9c
	beq.n 0xfc0	@ 00000f9c 10d0
.org 0xf9e
	ldr r2, [pc, #40]	@ 00000f9e 0a4a
.org 0xfa0
	ldrh r0, [r2, #0]	@ 00000fa0 1088
.org 0xfa2
	movs r1, #16	@ 00000fa2 1021
.org 0xfa4
	orrs r0, r1	@ 00000fa4 0843
.org 0xfa6
	strh r0, [r2, #0]	@ 00000fa6 1080
.org 0xfa8
	ldrh r0, [r2, #0]	@ 00000fa8 1088
.org 0xfaa
	ldr r1, [pc, #32]	@ 00000faa 0849
.org 0xfac
	lsls r0, r4, #2	@ 00000fac a000
