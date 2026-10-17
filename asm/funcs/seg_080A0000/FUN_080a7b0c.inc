@ FUN_080a7b0c  entry 0x080a7b0c  size 28
.thumb
.org 0xa7b0c
FUN_080a7b0c:
	ldrb r2, [r0, #10]	@ 000a7b0c 827a
.org 0xa7b0e
	movs r1, #254	@ 000a7b0e fe21
.org 0xa7b10
	ands r1, r2	@ 000a7b10 1140
.org 0xa7b12
	strb r1, [r0, #10]	@ 000a7b12 8172
.org 0xa7b14
	ldr r2, [pc, #16]	@ 000a7b14 044a
.org 0xa7b16
	ldrb r1, [r0, #9]	@ 000a7b16 417a
.org 0xa7b18
	lsls r1, r1, #2	@ 000a7b18 8900
.org 0xa7b1a
	adds r1, r1, r2	@ 000a7b1a 8918
.org 0xa7b1c
	movs r2, #4	@ 000a7b1c 0422
.org 0xa7b1e
	str r2, [r0, #12]	@ 000a7b1e c260
.org 0xa7b20
	ldr r1, [r1, #0]	@ 000a7b20 0968
.org 0xa7b22
	ldr r1, [r1, #16]	@ 000a7b22 0969
.org 0xa7b24
	str r1, [r0, #20]	@ 000a7b24 4161
.org 0xa7b26
	bx lr	@ 000a7b26 7047
