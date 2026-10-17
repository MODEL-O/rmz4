@ FUN_080d4314  entry 0x080d4314  size 30
.thumb
.org 0xd4314
FUN_080d4314:
	push {lr}	@ 000d4314 00b5
.org 0xd4316
	adds r2, r0, #0	@ 000d4316 021c
.org 0xd4318
	ldrb r0, [r2, #18]	@ 000d4318 907c
.org 0xd431a
	adds r0, #1	@ 000d431a 0130
.org 0xd431c
	strb r0, [r2, #18]	@ 000d431c 9074
.org 0xd431e
	ldrb r0, [r2, #14]	@ 000d431e 907b
.org 0xd4320
	cmp r0, #4	@ 000d4320 0428
.org 0xd4322
	bhi.n 0xd4390	@ 000d4322 35d8
.org 0xd4324
	lsls r0, r0, #2	@ 000d4324 8000
.org 0xd4326
	ldr r1, [pc, #8]	@ 000d4326 0249
.org 0xd4328
	adds r0, r0, r1	@ 000d4328 4018
.org 0xd432a
	ldr r0, [r0, #0]	@ 000d432a 0068
.org 0xd432c
	mov pc, r0	@ 000d432c 8746
.org 0xd432e
	.byte 0x00	@ 000d432e data
.org 0xd432f
	.byte 0x00	@ 000d432f data
.org 0xd4330
	.byte 0x34,0x43,0x0d,0x08	@ 000d4330 data
