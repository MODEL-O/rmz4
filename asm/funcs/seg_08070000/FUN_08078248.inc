@ FUN_08078248  entry 0x08078248  size 32
.thumb
.org 0x78248
FUN_08078248:
	push {r4, r5, r6, r7, lr}	@ 00078248 f0b5
.org 0x7824a
	adds r4, r0, #0	@ 0007824a 041c
.org 0x7824c
	ldrb r0, [r4, #15]	@ 0007824c e07b
.org 0x7824e
	cmp r0, #5	@ 0007824e 0528
.org 0x78250
	bls.n 0x78254	@ 00078250 00d9
.org 0x78252
	b.n 0x78476	@ 00078252 10e1
.org 0x78254
	lsls r0, r0, #2	@ 00078254 8000
.org 0x78256
	ldr r1, [pc, #12]	@ 00078256 0349
.org 0x78258
	adds r0, r0, r1	@ 00078258 4018
.org 0x7825a
	ldr r0, [r0, #0]	@ 0007825a 0068
.org 0x7825c
	adds r6, r4, #0	@ 0007825c 261c
.org 0x7825e
	adds r6, #208	@ 0007825e d036
.org 0x78260
	mov pc, r0	@ 00078260 8746
.org 0x78262
	.byte 0x00	@ 00078262 data
.org 0x78263
	.byte 0x00	@ 00078263 data
.org 0x78264
	.byte 0x68,0x82,0x07,0x08	@ 00078264 data
