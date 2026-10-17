@ FUN_081223fa  entry 0x081223fa  size 80
.thumb
.org 0x1223fa
FUN_081223fa:
	movs r0, #51	@ 001223fa 3320
.org 0x1223fc
	bl 0x25d8	@ 001223fc e0f6ecf8
.org 0x122400
	movs r0, #121	@ 00122400 7920
.org 0x122402
	bl 0x25d8	@ 00122402 e0f6e9f8
.org 0x122406
	ldrb r0, [r6, #2]	@ 00122406 b078
.org 0x122408
	subs r0, #17	@ 00122408 1138
.org 0x12240a
	lsls r0, r0, #24	@ 0012240a 0006
.org 0x12240c
	lsrs r0, r0, #24	@ 0012240c 000e
.org 0x12240e
	cmp r0, #6	@ 0012240e 0628
.org 0x122410
	bhi.n 0x122440	@ 00122410 16d8
.org 0x122412
	ldr r0, [pc, #28]	@ 00122412 0748
.org 0x122414
	ldr r3, [pc, #36]	@ 00122414 094b
.org 0x122416
	adds r0, r0, r3	@ 00122416 c018
.org 0x122418
	ldrh r0, [r0, #0]	@ 00122418 0088
.org 0x12241a
	ldr r1, [pc, #28]	@ 0012241a 0749
.org 0x12241c
	adds r0, r0, r1	@ 0012241c 4018
.org 0x12241e
	movs r1, #1	@ 0012241e 0121
.org 0x122420
	movs r2, #18	@ 00122420 1222
.org 0x122422
	bl 0x10d85c	@ 00122422 ebf71bfa
.org 0x122426
	b.n 0x122456	@ 00122426 16e0
.org 0x122428
	.byte 0x40	@ 00122428 data
.org 0x122429
	.byte 0x0a	@ 00122429 data
.org 0x12242a
	.byte 0x00	@ 0012242a data
.org 0x12242b
	.byte 0x02	@ 0012242b data
.org 0x12242c
	.byte 0xcc	@ 0012242c data
.org 0x12242d
	.byte 0x0d	@ 0012242d data
.org 0x12242e
	.byte 0x00	@ 0012242e data
.org 0x12242f
	.byte 0x00	@ 0012242f data
.org 0x122430
	.byte 0xf8,0xcf,0x86,0x08	@ 00122430 data
.org 0x122434
	.byte 0x7a	@ 00122434 data
.org 0x122435
	.byte 0x06	@ 00122435 data
.org 0x122436
	.byte 0x00	@ 00122436 data
.org 0x122437
	.byte 0x00	@ 00122437 data
.org 0x122438
	.byte 0x5f,0x0e,0x01,0x09	@ 00122438 data
.org 0x12243c
	.byte 0x86,0x06,0x00,0x00	@ 0012243c data
.org 0x122440
	ldr r0, [pc, #32]	@ 00122440 0848
.org 0x122442
	movs r4, #210	@ 00122442 d224
.org 0x122444
	lsls r4, r4, #3	@ 00122444 e400
.org 0x122446
	adds r0, r0, r4	@ 00122446 0019
.org 0x122448
	ldrh r0, [r0, #0]	@ 00122448 0088
