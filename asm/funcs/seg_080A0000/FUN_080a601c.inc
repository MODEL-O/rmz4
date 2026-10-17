@ FUN_080a601c  entry 0x080a601c  size 64
.thumb
.org 0xa601c
FUN_080a601c:
	push {r4, lr}	@ 000a601c 10b5
.org 0xa601e
	adds r4, r0, #0	@ 000a601e 041c
.org 0xa6020
	ldrb r0, [r4, #15]	@ 000a6020 e07b
.org 0xa6022
	cmp r0, #0	@ 000a6022 0028
.org 0xa6024
	bne.n 0xa603c	@ 000a6024 0ad1
.org 0xa6026
	ldr r1, [pc, #52]	@ 000a6026 0d49
.org 0xa6028
	adds r0, r4, #0	@ 000a6028 201c
.org 0xa602a
	bl 0x1cf00	@ 000a602a 76f769ff
.org 0xa602e
	adds r0, r4, #0	@ 000a602e 201c
.org 0xa6030
	movs r1, #5	@ 000a6030 0521
.org 0xa6032
	bl 0x1d3d0	@ 000a6032 77f7cdf9
.org 0xa6036
	ldrb r0, [r4, #15]	@ 000a6036 e07b
.org 0xa6038
	adds r0, #1	@ 000a6038 0130
.org 0xa603a
	strb r0, [r4, #15]	@ 000a603a e073
.org 0xa603c
	adds r0, r4, #0	@ 000a603c 201c
.org 0xa603e
	bl 0x1cff0	@ 000a603e 76f7d7ff
.org 0xa6042
	adds r0, r4, #0	@ 000a6042 201c
.org 0xa6044
	adds r0, #115	@ 000a6044 7330
.org 0xa6046
	ldrb r0, [r0, #0]	@ 000a6046 0078
.org 0xa6048
	cmp r0, #3	@ 000a6048 0328
.org 0xa604a
	bne.n 0xa6056	@ 000a604a 04d1
.org 0xa604c
	movs r1, #0	@ 000a604c 0021
.org 0xa604e
	movs r0, #2	@ 000a604e 0220
.org 0xa6050
	strb r0, [r4, #13]	@ 000a6050 6073
.org 0xa6052
	strb r1, [r4, #14]	@ 000a6052 a173
.org 0xa6054
	strb r1, [r4, #15]	@ 000a6054 e173
.org 0xa6056
	pop {r4}	@ 000a6056 10bc
.org 0xa6058
	pop {r0}	@ 000a6058 01bc
.org 0xa605a
	bx r0	@ 000a605a 0047
