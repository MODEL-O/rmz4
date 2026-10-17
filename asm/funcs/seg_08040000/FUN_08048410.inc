@ FUN_08048410  entry 0x08048410  size 64
.thumb
.org 0x48410
FUN_08048410:
	push {lr}	@ 00048410 00b5
.org 0x48412
	adds r2, r0, #0	@ 00048412 021c
.org 0x48414
	adds r0, #140	@ 00048414 8c30
.org 0x48416
	ldr r0, [r0, #0]	@ 00048416 0068
.org 0x48418
	movs r1, #128	@ 00048418 8021
.org 0x4841a
	lsls r1, r1, #2	@ 0004841a 8900
.org 0x4841c
	ands r0, r1	@ 0004841c 0840
.org 0x4841e
	cmp r0, #0	@ 0004841e 0028
.org 0x48420
	beq.n 0x48440	@ 00048420 0ed0
.org 0x48422
	ldr r1, [pc, #24]	@ 00048422 0649
.org 0x48424
	ldrb r0, [r2, #9]	@ 00048424 507a
.org 0x48426
	lsls r0, r0, #2	@ 00048426 8000
.org 0x48428
	adds r0, r0, r1	@ 00048428 4018
.org 0x4842a
	movs r1, #2	@ 0004842a 0221
.org 0x4842c
	str r1, [r2, #12]	@ 0004842c d160
.org 0x4842e
	ldr r0, [r0, #0]	@ 0004842e 0068
.org 0x48430
	ldr r0, [r0, #8]	@ 00048430 8068
.org 0x48432
	str r0, [r2, #20]	@ 00048432 5061
.org 0x48434
	adds r0, r2, #0	@ 00048434 101c
.org 0x48436
	bl 0x48458	@ 00048436 00f00ff8
.org 0x4843a
	b.n 0x48450	@ 0004843a 09e0
.org 0x4843c
	.byte 0xf8,0x39,0x85,0x08	@ 0004843c data
.org 0x48440
	ldr r0, [pc, #16]	@ 00048440 0448
.org 0x48442
	ldrb r1, [r2, #16]	@ 00048442 117c
.org 0x48444
	lsls r1, r1, #2	@ 00048444 8900
.org 0x48446
	adds r1, r1, r0	@ 00048446 0918
.org 0x48448
	ldr r1, [r1, #0]	@ 00048448 0968
.org 0x4844a
	adds r0, r2, #0	@ 0004844a 101c
.org 0x4844c
	bl 0x128f80	@ 0004844c e0f098fd
