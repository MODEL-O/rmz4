@ FUN_08085f6c  entry 0x08085f6c  size 108
.thumb
.org 0x85f6c
FUN_08085f6c:
	push {r4, lr}	@ 00085f6c 10b5
.org 0x85f6e
	sub sp, #8	@ 00085f6e 82b0
.org 0x85f70
	adds r4, r0, #0	@ 00085f70 041c
.org 0x85f72
	ldrb r2, [r4, #14]	@ 00085f72 a27b
.org 0x85f74
	cmp r2, #0	@ 00085f74 002a
.org 0x85f76
	beq.n 0x85f7e	@ 00085f76 02d0
.org 0x85f78
	cmp r2, #1	@ 00085f78 012a
.org 0x85f7a
	beq.n 0x85fc4	@ 00085f7a 23d0
.org 0x85f7c
	b.n 0x85fd6	@ 00085f7c 2be0
.org 0x85f7e
	ldrb r1, [r4, #10]	@ 00085f7e a17a
.org 0x85f80
	movs r0, #254	@ 00085f80 fe20
.org 0x85f82
	ands r0, r1	@ 00085f82 0840
.org 0x85f84
	strb r0, [r4, #10]	@ 00085f84 a072
.org 0x85f86
	adds r0, r4, #0	@ 00085f86 201c
.org 0x85f88
	adds r0, #140	@ 00085f88 8c30
.org 0x85f8a
	str r2, [r0, #0]	@ 00085f8a 0260
.org 0x85f8c
	adds r0, #4	@ 00085f8c 0430
.org 0x85f8e
	str r2, [r0, #0]	@ 00085f8e 0260
.org 0x85f90
	adds r0, #4	@ 00085f90 0430
.org 0x85f92
	strb r2, [r0, #0]	@ 00085f92 0270
.org 0x85f94
	ldrb r1, [r4, #10]	@ 00085f94 a17a
.org 0x85f96
	movs r0, #251	@ 00085f96 fb20
.org 0x85f98
	ands r0, r1	@ 00085f98 0840
.org 0x85f9a
	strb r0, [r4, #10]	@ 00085f9a a072
.org 0x85f9c
	ldr r0, [r4, #84]	@ 00085f9c 606d
.org 0x85f9e
	str r0, [sp, #0]	@ 00085f9e 0090
.org 0x85fa0
	ldr r0, [r4, #88]	@ 00085fa0 a06d
.org 0x85fa2
	ldr r1, [pc, #28]	@ 00085fa2 0749
.org 0x85fa4
	adds r0, r0, r1	@ 00085fa4 4018
.org 0x85fa6
	str r0, [sp, #4]	@ 00085fa6 0190
.org 0x85fa8
	movs r0, #1	@ 00085fa8 0120
.org 0x85faa
	mov r1, sp	@ 00085faa 6946
.org 0x85fac
	bl 0xd0c88	@ 00085fac 4af06cfe
.org 0x85fb0
	movs r0, #42	@ 00085fb0 2a20
.org 0x85fb2
	bl 0x2b10	@ 00085fb2 7cf7adfd
.org 0x85fb6
	ldrb r0, [r4, #14]	@ 00085fb6 a07b
.org 0x85fb8
	adds r0, #1	@ 00085fb8 0130
.org 0x85fba
	strb r0, [r4, #14]	@ 00085fba a073
.org 0x85fbc
	b.n 0x85fd6	@ 00085fbc 0be0
.org 0x85fbe
	.byte 0x00	@ 00085fbe data
.org 0x85fbf
	.byte 0x00	@ 00085fbf data
.org 0x85fc0
	.byte 0x00,0xf8,0xff,0xff	@ 00085fc0 data
.org 0x85fc4
	ldr r1, [pc, #24]	@ 00085fc4 0649
.org 0x85fc6
	ldrb r0, [r4, #9]	@ 00085fc6 607a
.org 0x85fc8
	lsls r0, r0, #2	@ 00085fc8 8000
.org 0x85fca
	adds r0, r0, r1	@ 00085fca 4018
.org 0x85fcc
	movs r1, #4	@ 00085fcc 0421
.org 0x85fce
	str r1, [r4, #12]	@ 00085fce e160
.org 0x85fd0
	ldr r0, [r0, #0]	@ 00085fd0 0068
.org 0x85fd2
	ldr r0, [r0, #16]	@ 00085fd2 0069
.org 0x85fd4
	str r0, [r4, #20]	@ 00085fd4 6061
.org 0x85fd6
	add sp, #8	@ 00085fd6 02b0
