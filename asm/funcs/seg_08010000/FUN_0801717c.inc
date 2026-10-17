@ FUN_0801717c  entry 0x0801717c  size 60
.thumb
.org 0x1717c
FUN_0801717c:
	push {lr}	@ 0001717c 00b5
.org 0x1717e
	adds r2, r0, #0	@ 0001717e 021c
.org 0x17180
	ldrb r3, [r2, #14]	@ 00017180 937b
.org 0x17182
	cmp r3, #0	@ 00017182 002b
.org 0x17184
	bne.n 0x17194	@ 00017184 06d1
.org 0x17186
	ldr r1, [pc, #32]	@ 00017186 0849
.org 0x17188
	ldr r0, [pc, #32]	@ 00017188 0848
.org 0x1718a
	strh r0, [r1, #0]	@ 0001718a 0880
.org 0x1718c
	ldr r0, [pc, #32]	@ 0001718c 0848
.org 0x1718e
	strh r0, [r1, #2]	@ 0001718e 4880
.org 0x17190
	adds r0, r3, #1	@ 00017190 581c
.org 0x17192
	strb r0, [r2, #14]	@ 00017192 9073
.org 0x17194
	ldr r1, [r2, #52]	@ 00017194 516b
.org 0x17196
	ldr r0, [pc, #28]	@ 00017196 0748
.org 0x17198
	cmp r1, r0	@ 00017198 8142
.org 0x1719a
	bgt.n 0x171c0	@ 0001719a 11dc
.org 0x1719c
	ldr r0, [pc, #24]	@ 0001719c 0648
.org 0x1719e
	ldr r1, [pc, #28]	@ 0001719e 0749
.org 0x171a0
	adds r0, r0, r1	@ 000171a0 4018
.org 0x171a2
	movs r1, #148	@ 000171a2 9421
.org 0x171a4
	lsls r1, r1, #10	@ 000171a4 8902
.org 0x171a6
	b.n 0x171ca	@ 000171a6 10e0
.org 0x171a8
	.byte 0x40,0x0a,0x00,0x02	@ 000171a8 data
.org 0x171ac
	.byte 0x44,0x3b,0x00,0x00	@ 000171ac data
.org 0x171b0
	.byte 0x07,0x0c,0x00,0x00	@ 000171b0 data
.org 0x171b4
	.byte 0x7f,0x0f,0x00,0x00	@ 000171b4 data
