@ FUN_08027f44  entry 0x08027f44  size 34
.thumb
.org 0x27f44
FUN_08027f44:
	push {r4, r5, lr}	@ 00027f44 30b5
.org 0x27f46
	adds r4, r0, #0	@ 00027f46 041c
.org 0x27f48
	ldr r5, [pc, #20]	@ 00027f48 054d
.org 0x27f4a
	ldr r0, [r4, #12]	@ 00027f4a e068
.org 0x27f4c
	ldrb r0, [r0, #1]	@ 00027f4c 4078
.org 0x27f4e
	cmp r0, #17	@ 00027f4e 1128
.org 0x27f50
	bls.n 0x27f54	@ 00027f50 00d9
.org 0x27f52
	b.n 0x280bc	@ 00027f52 b3e0
.org 0x27f54
	lsls r0, r0, #2	@ 00027f54 8000
.org 0x27f56
	ldr r1, [pc, #12]	@ 00027f56 0349
.org 0x27f58
	adds r0, r0, r1	@ 00027f58 4018
.org 0x27f5a
	ldr r0, [r0, #0]	@ 00027f5a 0068
.org 0x27f5c
	mov pc, r0	@ 00027f5c 8746
.org 0x27f5e
	.byte 0x00	@ 00027f5e data
.org 0x27f5f
	.byte 0x00	@ 00027f5f data
.org 0x27f60
	.byte 0xf8,0xe9,0x02,0x02	@ 00027f60 data
.org 0x27f64
	.byte 0x68,0x7f,0x02,0x08	@ 00027f64 data
