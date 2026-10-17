@ FUN_080dc3d0  entry 0x080dc3d0  size 128
.thumb
.org 0xdc3d0
FUN_080dc3d0:
	push {r4, r5, r6, r7, lr}	@ 000dc3d0 f0b5
.org 0xdc3d2
	mov r7, r9	@ 000dc3d2 4f46
.org 0xdc3d4
	mov r6, r8	@ 000dc3d4 4646
.org 0xdc3d6
	push {r6, r7}	@ 000dc3d6 c0b4
.org 0xdc3d8
	adds r6, r0, #0	@ 000dc3d8 061c
.org 0xdc3da
	adds r4, r1, #0	@ 000dc3da 0c1c
.org 0xdc3dc
	adds r5, r2, #0	@ 000dc3dc 151c
.org 0xdc3de
	mov r8, r3	@ 000dc3de 9846
.org 0xdc3e0
	ldr r0, [sp, #32]	@ 000dc3e0 0898
.org 0xdc3e2
	lsls r0, r0, #24	@ 000dc3e2 0006
.org 0xdc3e4
	lsrs r0, r0, #24	@ 000dc3e4 000e
.org 0xdc3e6
	mov r9, r0	@ 000dc3e6 8146
.org 0xdc3e8
	ldr r0, [pc, #100]	@ 000dc3e8 1948
.org 0xdc3ea
	ldr r0, [r0, #0]	@ 000dc3ea 0068
.org 0xdc3ec
	bl 0x5500	@ 000dc3ec 29f788f8
.org 0xdc3f0
	mov ip, r0	@ 000dc3f0 8446
.org 0xdc3f2
	cmp r0, #0	@ 000dc3f2 0028
.org 0xdc3f4
	beq.n 0xdc444	@ 000dc3f4 26d0
.org 0xdc3f6
	adds r0, #37	@ 000dc3f6 2530
.org 0xdc3f8
	movs r2, #0	@ 000dc3f8 0022
.org 0xdc3fa
	movs r3, #1	@ 000dc3fa 0123
.org 0xdc3fc
	strb r3, [r0, #0]	@ 000dc3fc 0370
.org 0xdc3fe
	ldr r0, [pc, #84]	@ 000dc3fe 1548
.org 0xdc400
	movs r1, #43	@ 000dc400 2b21
.org 0xdc402
	mov r7, ip	@ 000dc402 6746
.org 0xdc404
	strb r1, [r7, #9]	@ 000dc404 7972
.org 0xdc406
	adds r0, #172	@ 000dc406 ac30
.org 0xdc408
	ldr r0, [r0, #0]	@ 000dc408 0068
.org 0xdc40a
	ldr r0, [r0, #0]	@ 000dc40a 0068
.org 0xdc40c
	str r0, [r7, #20]	@ 000dc40c 7861
.org 0xdc40e
	movs r1, #0	@ 000dc40e 0021
.org 0xdc410
	strh r2, [r7, #32]	@ 000dc410 3a84
.org 0xdc412
	mov r0, ip	@ 000dc412 6046
.org 0xdc414
	adds r0, #34	@ 000dc414 2230
.org 0xdc416
	strb r1, [r0, #0]	@ 000dc416 0170
.org 0xdc418
	movs r0, #4	@ 000dc418 0420
.org 0xdc41a
	strb r0, [r7, #16]	@ 000dc41a 3874
.org 0xdc41c
	str r6, [r7, #40]	@ 000dc41c be62
.org 0xdc41e
	ldr r0, [sp, #28]	@ 000dc41e 0798
.org 0xdc420
	str r0, [r7, #116]	@ 000dc420 7867
.org 0xdc422
	ldr r0, [r4, #0]	@ 000dc422 2068
.org 0xdc424
	str r0, [r7, #84]	@ 000dc424 7865
.org 0xdc426
	ldr r0, [r4, #4]	@ 000dc426 6068
.org 0xdc428
	str r0, [r7, #88]	@ 000dc428 b865
.org 0xdc42a
	ldr r0, [r5, #0]	@ 000dc42a 2868
.org 0xdc42c
	str r0, [r7, #92]	@ 000dc42c f865
.org 0xdc42e
	ldr r0, [r5, #4]	@ 000dc42e 6868
.org 0xdc430
	str r0, [r7, #96]	@ 000dc430 3866
.org 0xdc432
	mov r0, r8	@ 000dc432 4046
.org 0xdc434
	str r0, [r7, #104]	@ 000dc434 b866
.org 0xdc436
	mov r2, r9	@ 000dc436 4a46
.org 0xdc438
	strb r2, [r7, #18]	@ 000dc438 ba74
.org 0xdc43a
	mov r0, ip	@ 000dc43a 6046
.org 0xdc43c
	adds r0, #120	@ 000dc43c 7830
.org 0xdc43e
	strb r3, [r0, #0]	@ 000dc43e 0370
.org 0xdc440
	adds r0, #1	@ 000dc440 0130
.org 0xdc442
	strb r1, [r0, #0]	@ 000dc442 0170
.org 0xdc444
	pop {r3, r4}	@ 000dc444 18bc
.org 0xdc446
	mov r8, r3	@ 000dc446 9846
.org 0xdc448
	mov r9, r4	@ 000dc448 a146
.org 0xdc44a
	pop {r4, r5, r6, r7}	@ 000dc44a f0bc
.org 0xdc44c
	pop {r0}	@ 000dc44c 01bc
.org 0xdc44e
	bx r0	@ 000dc44e 0047
