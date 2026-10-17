@ FUN_08029270  entry 0x08029270  size 42
.thumb
.org 0x29270
FUN_08029270:
	push {lr}	@ 00029270 00b5
.org 0x29272
	ldr r0, [r0, #12]	@ 00029272 c068
.org 0x29274
	ldrb r0, [r0, #1]	@ 00029274 4078
.org 0x29276
	cmp r0, #0	@ 00029276 0028
.org 0x29278
	beq.n 0x29280	@ 00029278 02d0
.org 0x2927a
	cmp r0, #1	@ 0002927a 0128
.org 0x2927c
	beq.n 0x29290	@ 0002927c 08d0
.org 0x2927e
	b.n 0x2929a	@ 0002927e 0ce0
.org 0x29280
	ldr r2, [pc, #8]	@ 00029280 024a
.org 0x29282
	ldrh r1, [r2, #8]	@ 00029282 1189
.org 0x29284
	movs r0, #64	@ 00029284 4020
.org 0x29286
	orrs r0, r1	@ 00029286 0843
.org 0x29288
	b.n 0x29298	@ 00029288 06e0
.org 0x2928a
	.byte 0x00	@ 0002928a data
.org 0x2928b
	.byte 0x00	@ 0002928b data
.org 0x2928c
	.byte 0x10,0xe9,0x02,0x02	@ 0002928c data
.org 0x29290
	ldr r2, [pc, #12]	@ 00029290 034a
.org 0x29292
	ldrh r1, [r2, #8]	@ 00029292 1189
.org 0x29294
	ldr r0, [pc, #12]	@ 00029294 0348
.org 0x29296
	ands r0, r1	@ 00029296 0840
.org 0x29298
	strh r0, [r2, #8]	@ 00029298 1081
