@ FUN_080b0fe4  entry 0x080b0fe4  size 28
.thumb
.org 0xb0fe4
FUN_080b0fe4:
	ldrb r2, [r0, #10]	@ 000b0fe4 827a
.org 0xb0fe6
	movs r1, #254	@ 000b0fe6 fe21
.org 0xb0fe8
	ands r1, r2	@ 000b0fe8 1140
.org 0xb0fea
	strb r1, [r0, #10]	@ 000b0fea 8172
.org 0xb0fec
	ldr r2, [pc, #16]	@ 000b0fec 044a
.org 0xb0fee
	ldrb r1, [r0, #9]	@ 000b0fee 417a
.org 0xb0ff0
	lsls r1, r1, #2	@ 000b0ff0 8900
.org 0xb0ff2
	adds r1, r1, r2	@ 000b0ff2 8918
.org 0xb0ff4
	movs r2, #4	@ 000b0ff4 0422
.org 0xb0ff6
	str r2, [r0, #12]	@ 000b0ff6 c260
.org 0xb0ff8
	ldr r1, [r1, #0]	@ 000b0ff8 0968
.org 0xb0ffa
	ldr r1, [r1, #16]	@ 000b0ffa 0969
.org 0xb0ffc
	str r1, [r0, #20]	@ 000b0ffc 4161
.org 0xb0ffe
	bx lr	@ 000b0ffe 7047
