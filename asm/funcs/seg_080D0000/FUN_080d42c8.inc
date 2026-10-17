@ FUN_080d42c8  entry 0x080d42c8  size 68
.thumb
.org 0xd42c8
FUN_080d42c8:
	push {r4, lr}	@ 000d42c8 10b5
.org 0xd42ca
	adds r4, r0, #0	@ 000d42ca 041c
.org 0xd42cc
	adds r0, #52	@ 000d42cc 3430
.org 0xd42ce
	ldr r1, [pc, #60]	@ 000d42ce 0f49
.org 0xd42d0
	bl 0x2c94	@ 000d42d0 2ef7e0fc
.org 0xd42d4
	str r4, [r4, #60]	@ 000d42d4 e463
.org 0xd42d6
	ldrb r1, [r4, #10]	@ 000d42d6 a17a
.org 0xd42d8
	movs r0, #247	@ 000d42d8 f720
.org 0xd42da
	ands r0, r1	@ 000d42da 0840
.org 0xd42dc
	movs r2, #0	@ 000d42dc 0022
.org 0xd42de
	movs r1, #1	@ 000d42de 0121
.org 0xd42e0
	orrs r0, r1	@ 000d42e0 0843
.org 0xd42e2
	movs r1, #2	@ 000d42e2 0221
.org 0xd42e4
	orrs r0, r1	@ 000d42e4 0843
.org 0xd42e6
	strb r0, [r4, #10]	@ 000d42e6 a072
.org 0xd42e8
	strb r2, [r4, #18]	@ 000d42e8 a274
.org 0xd42ea
	str r2, [r4, #96]	@ 000d42ea 2266
.org 0xd42ec
	ldr r1, [pc, #32]	@ 000d42ec 0849
.org 0xd42ee
	ldrb r0, [r4, #9]	@ 000d42ee 607a
.org 0xd42f0
	lsls r0, r0, #2	@ 000d42f0 8000
.org 0xd42f2
	adds r0, r0, r1	@ 000d42f2 4018
.org 0xd42f4
	movs r1, #1	@ 000d42f4 0121
.org 0xd42f6
	str r1, [r4, #12]	@ 000d42f6 e160
.org 0xd42f8
	ldr r0, [r0, #0]	@ 000d42f8 0068
.org 0xd42fa
	ldr r0, [r0, #4]	@ 000d42fa 4068
.org 0xd42fc
	str r0, [r4, #20]	@ 000d42fc 6061
.org 0xd42fe
	strb r2, [r4, #14]	@ 000d42fe a273
.org 0xd4300
	adds r0, r4, #0	@ 000d4300 201c
.org 0xd4302
	bl 0xd3f20	@ 000d4302 fff70dfe
.org 0xd4306
	pop {r4}	@ 000d4306 10bc
.org 0xd4308
	pop {r0}	@ 000d4308 01bc
.org 0xd430a
	bx r0	@ 000d430a 0047
