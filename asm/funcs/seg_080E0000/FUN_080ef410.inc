@ FUN_080ef410  entry 0x080ef410  size 42
.thumb
.org 0xef410
FUN_080ef410:
	push {r4, r5, r6, r7, lr}	@ 000ef410 f0b5
.org 0xef412
	sub sp, #64	@ 000ef412 90b0
.org 0xef414
	adds r4, r0, #0	@ 000ef414 041c
.org 0xef416
	ldr r1, [pc, #28]	@ 000ef416 0749
.org 0xef418
	mov r0, sp	@ 000ef418 6846
.org 0xef41a
	movs r2, #56	@ 000ef41a 3822
.org 0xef41c
	bl 0x129258	@ 000ef41c 39f01cff
.org 0xef420
	ldrb r0, [r4, #13]	@ 000ef420 607b
.org 0xef422
	cmp r0, #13	@ 000ef422 0d28
.org 0xef424
	bls.n 0xef428	@ 000ef424 00d9
.org 0xef426
	b.n 0xef774	@ 000ef426 a5e1
.org 0xef428
	lsls r0, r0, #2	@ 000ef428 8000
.org 0xef42a
	ldr r1, [pc, #12]	@ 000ef42a 0349
.org 0xef42c
	adds r0, r0, r1	@ 000ef42c 4018
.org 0xef42e
	ldr r0, [r0, #0]	@ 000ef42e 0068
.org 0xef430
	mov pc, r0	@ 000ef430 8746
.org 0xef432
	.byte 0x00	@ 000ef432 data
.org 0xef433
	.byte 0x00	@ 000ef433 data
.org 0xef434
	.byte 0x74,0xa3,0x12,0x08	@ 000ef434 data
.org 0xef438
	.byte 0x3c,0xf4,0x0e,0x08	@ 000ef438 data
