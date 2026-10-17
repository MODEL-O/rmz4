@ FUN_080ef8ac  entry 0x080ef8ac  size 34
.thumb
.org 0xef8ac
FUN_080ef8ac:
	push {r4, lr}	@ 000ef8ac 10b5
.org 0xef8ae
	adds r4, r0, #0	@ 000ef8ae 041c
.org 0xef8b0
	ldrb r0, [r4, #17]	@ 000ef8b0 607c
.org 0xef8b2
	cmp r0, #17	@ 000ef8b2 1128
.org 0xef8b4
	bls.n 0xef8b8	@ 000ef8b4 00d9
.org 0xef8b6
	b.n 0xefb42	@ 000ef8b6 44e1
.org 0xef8b8
	lsls r0, r0, #2	@ 000ef8b8 8000
.org 0xef8ba
	ldr r1, [pc, #8]	@ 000ef8ba 0249
.org 0xef8bc
	adds r0, r0, r1	@ 000ef8bc 4018
.org 0xef8be
	ldr r0, [r0, #0]	@ 000ef8be 0068
.org 0xef8c0
	mov pc, r0	@ 000ef8c0 8746
.org 0xef8c2
	.byte 0x00	@ 000ef8c2 data
.org 0xef8c3
	.byte 0x00	@ 000ef8c3 data
.org 0xef8c4
	.byte 0xc8,0xf8,0x0e,0x08	@ 000ef8c4 data
.org 0xef8c8
	.byte 0x10,0xf9,0x0e,0x08	@ 000ef8c8 data
.org 0xef8cc
	.byte 0x4c,0xf9,0x0e,0x08	@ 000ef8cc data
