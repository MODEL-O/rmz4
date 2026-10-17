@ FUN_080d3f58  entry 0x080d3f58  size 66
.thumb
.org 0xd3f58
FUN_080d3f58:
	push {r4, lr}	@ 000d3f58 10b5
.org 0xd3f5a
	adds r4, r0, #0	@ 000d3f5a 041c
.org 0xd3f5c
	adds r0, #52	@ 000d3f5c 3430
.org 0xd3f5e
	ldr r1, [pc, #60]	@ 000d3f5e 0f49
.org 0xd3f60
	bl 0x2c94	@ 000d3f60 2ef798fe
.org 0xd3f64
	str r4, [r4, #60]	@ 000d3f64 e463
.org 0xd3f66
	ldrb r1, [r4, #10]	@ 000d3f66 a17a
.org 0xd3f68
	movs r0, #247	@ 000d3f68 f720
.org 0xd3f6a
	ands r0, r1	@ 000d3f6a 0840
.org 0xd3f6c
	movs r2, #0	@ 000d3f6c 0022
.org 0xd3f6e
	movs r1, #1	@ 000d3f6e 0121
.org 0xd3f70
	orrs r0, r1	@ 000d3f70 0843
.org 0xd3f72
	movs r1, #2	@ 000d3f72 0221
.org 0xd3f74
	orrs r0, r1	@ 000d3f74 0843
.org 0xd3f76
	strb r0, [r4, #10]	@ 000d3f76 a072
.org 0xd3f78
	strb r2, [r4, #18]	@ 000d3f78 a274
.org 0xd3f7a
	str r2, [r4, #96]	@ 000d3f7a 2266
.org 0xd3f7c
	ldr r1, [pc, #32]	@ 000d3f7c 0849
.org 0xd3f7e
	ldrb r0, [r4, #9]	@ 000d3f7e 607a
.org 0xd3f80
	lsls r0, r0, #2	@ 000d3f80 8000
.org 0xd3f82
	adds r0, r0, r1	@ 000d3f82 4018
.org 0xd3f84
	movs r1, #1	@ 000d3f84 0121
.org 0xd3f86
	str r1, [r4, #12]	@ 000d3f86 e160
.org 0xd3f88
	ldr r0, [r0, #0]	@ 000d3f88 0068
.org 0xd3f8a
	ldr r0, [r0, #4]	@ 000d3f8a 4068
.org 0xd3f8c
	str r0, [r4, #20]	@ 000d3f8c 6061
.org 0xd3f8e
	adds r0, r4, #0	@ 000d3f8e 201c
.org 0xd3f90
	bl 0xd3f20	@ 000d3f90 fff7c6ff
.org 0xd3f94
	pop {r4}	@ 000d3f94 10bc
.org 0xd3f96
	pop {r0}	@ 000d3f96 01bc
.org 0xd3f98
	bx r0	@ 000d3f98 0047
