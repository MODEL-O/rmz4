@ FUN_08107420  entry 0x08107420  size 26
.thumb
.org 0x107420
FUN_08107420:
	push {r4, lr}	@ 00107420 10b5
.org 0x107422
	adds r4, r0, #0	@ 00107422 041c
.org 0x107424
	ldrb r0, [r4, #13]	@ 00107424 607b
.org 0x107426
	cmp r0, #5	@ 00107426 0528
.org 0x107428
	bhi.n 0x1074ee	@ 00107428 61d8
.org 0x10742a
	lsls r0, r0, #2	@ 0010742a 8000
.org 0x10742c
	ldr r1, [pc, #4]	@ 0010742c 0149
.org 0x10742e
	adds r0, r0, r1	@ 0010742e 4018
.org 0x107430
	ldr r0, [r0, #0]	@ 00107430 0068
.org 0x107432
	mov pc, r0	@ 00107432 8746
.org 0x107434
	.byte 0x38,0x74,0x10,0x08	@ 00107434 data
.org 0x107438
	.byte 0x50,0x74,0x10,0x08	@ 00107438 data
