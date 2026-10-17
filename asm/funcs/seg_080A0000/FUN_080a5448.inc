@ FUN_080a5448  entry 0x080a5448  size 204
.thumb
.org 0xa5448
FUN_080a5448:
	push {r4, r5, r6, r7, lr}	@ 000a5448 f0b5
.org 0xa544a
	mov r7, sl	@ 000a544a 5746
.org 0xa544c
	mov r6, r9	@ 000a544c 4e46
.org 0xa544e
	mov r5, r8	@ 000a544e 4546
.org 0xa5450
	push {r5, r6, r7}	@ 000a5450 e0b4
.org 0xa5452
	sub sp, #52	@ 000a5452 8db0
.org 0xa5454
	ldr r1, [pc, #188]	@ 000a5454 2f49
.org 0xa5456
	mov r0, sp	@ 000a5456 6846
.org 0xa5458
	movs r2, #32	@ 000a5458 2022
.org 0xa545a
	bl 0x129258	@ 000a545a 83f0fdfe
.org 0xa545e
	ldr r0, [pc, #184]	@ 000a545e 2e48
.org 0xa5460
	ldr r0, [r0, #0]	@ 000a5460 0068
.org 0xa5462
	ldr r5, [r0, #84]	@ 000a5462 456d
.org 0xa5464
	ldr r6, [r0, #88]	@ 000a5464 866d
.org 0xa5466
	ldr r2, [pc, #180]	@ 000a5466 2d4a
.org 0xa5468
	ldr r0, [r2, #0]	@ 000a5468 1068
.org 0xa546a
	ldr r7, [pc, #180]	@ 000a546a 2d4f
.org 0xa546c
	muls r0, r7	@ 000a546c 7843
.org 0xa546e
	ldr r3, [pc, #180]	@ 000a546e 2d4b
.org 0xa5470
	adds r0, r0, r3	@ 000a5470 c018
.org 0xa5472
	lsls r0, r0, #1	@ 000a5472 4000
.org 0xa5474
	lsrs r1, r0, #1	@ 000a5474 4108
.org 0xa5476
	str r1, [r2, #0]	@ 000a5476 1160
.org 0xa5478
	lsrs r0, r0, #17	@ 000a5478 400c
.org 0xa547a
	movs r1, #1	@ 000a547a 0121
.org 0xa547c
	ands r0, r1	@ 000a547c 0840
.org 0xa547e
	adds r4, r0, #5	@ 000a547e 441d
.org 0xa5480
	cmp r4, #0	@ 000a5480 002c
.org 0xa5482
	beq.n 0xa5504	@ 000a5482 3fd0
.org 0xa5484
	movs r0, #7	@ 000a5484 0720
.org 0xa5486
	mov r8, r0	@ 000a5486 8046
.org 0xa5488
	mov sl, r7	@ 000a5488 ba46
.org 0xa548a
	mov r9, r3	@ 000a548a 9946
.org 0xa548c
	mov r1, sp	@ 000a548c 6946
.org 0xa548e
	adds r1, #32	@ 000a548e 2031
.org 0xa5490
	str r1, [sp, #48]	@ 000a5490 0c91
.org 0xa5492
	adds r2, r4, #0	@ 000a5492 221c
.org 0xa5494
	mov r3, r8	@ 000a5494 4346
.org 0xa5496
	ands r2, r3	@ 000a5496 1a40
.org 0xa5498
	lsls r2, r2, #2	@ 000a5498 9200
.org 0xa549a
	mov r7, sp	@ 000a549a 6f46
.org 0xa549c
	adds r0, r7, r2	@ 000a549c b818
.org 0xa549e
	movs r3, #0	@ 000a549e 0023
.org 0xa54a0
	ldrsh r1, [r0, r3]	@ 000a54a0 c15e
.org 0xa54a2
	adds r1, r1, r5	@ 000a54a2 4919
.org 0xa54a4
	ldr r7, [pc, #116]	@ 000a54a4 1d4f
.org 0xa54a6
	ldr r0, [r7, #0]	@ 000a54a6 3868
.org 0xa54a8
	mov r3, sl	@ 000a54a8 5346
.org 0xa54aa
	muls r3, r0	@ 000a54aa 4343
.org 0xa54ac
	adds r0, r3, #0	@ 000a54ac 181c
.org 0xa54ae
	add r0, r9	@ 000a54ae 4844
.org 0xa54b0
	lsls r0, r0, #1	@ 000a54b0 4000
.org 0xa54b2
	lsrs r3, r0, #1	@ 000a54b2 4308
.org 0xa54b4
	lsrs r0, r0, #17	@ 000a54b4 400c
.org 0xa54b6
	mov r7, r8	@ 000a54b6 4746
.org 0xa54b8
	ands r0, r7	@ 000a54b8 3840
.org 0xa54ba
	subs r0, #3	@ 000a54ba 0338
.org 0xa54bc
	lsls r0, r0, #8	@ 000a54bc 0002
.org 0xa54be
	adds r1, r1, r0	@ 000a54be 0918
.org 0xa54c0
	str r1, [sp, #32]	@ 000a54c0 0891
.org 0xa54c2
	mov r0, sp	@ 000a54c2 6846
.org 0xa54c4
	adds r0, #2	@ 000a54c4 0230
.org 0xa54c6
	adds r0, r0, r2	@ 000a54c6 8018
.org 0xa54c8
	movs r1, #0	@ 000a54c8 0021
.org 0xa54ca
	ldrsh r2, [r0, r1]	@ 000a54ca 425e
.org 0xa54cc
	adds r2, r2, r6	@ 000a54cc 9219
.org 0xa54ce
	mov r0, sl	@ 000a54ce 5046
.org 0xa54d0
	muls r0, r3	@ 000a54d0 5843
.org 0xa54d2
	add r0, r9	@ 000a54d2 4844
.org 0xa54d4
	lsls r0, r0, #1	@ 000a54d4 4000
.org 0xa54d6
	lsrs r1, r0, #1	@ 000a54d6 4108
.org 0xa54d8
	ldr r3, [pc, #64]	@ 000a54d8 104b
.org 0xa54da
	str r1, [r3, #0]	@ 000a54da 1960
.org 0xa54dc
	lsrs r0, r0, #17	@ 000a54dc 400c
.org 0xa54de
	ands r0, r7	@ 000a54de 3840
.org 0xa54e0
	subs r0, #3	@ 000a54e0 0338
.org 0xa54e2
	lsls r0, r0, #8	@ 000a54e2 0002
.org 0xa54e4
	adds r2, r2, r0	@ 000a54e4 1218
.org 0xa54e6
	ldr r7, [sp, #48]	@ 000a54e6 0c9f
.org 0xa54e8
	str r2, [r7, #4]	@ 000a54e8 7a60
.org 0xa54ea
	movs r0, #0	@ 000a54ea 0020
.org 0xa54ec
	str r0, [sp, #40]	@ 000a54ec 0a90
.org 0xa54ee
	ldr r0, [pc, #56]	@ 000a54ee 0e48
.org 0xa54f0
	add r1, sp, #40	@ 000a54f0 0aa9
.org 0xa54f2
	str r0, [r1, #4]	@ 000a54f2 4860
.org 0xa54f4
	ldr r0, [sp, #48]	@ 000a54f4 0c98
.org 0xa54f6
	movs r2, #0	@ 000a54f6 0022
.org 0xa54f8
	movs r3, #0	@ 000a54f8 0023
.org 0xa54fa
	bl 0xd9b9c	@ 000a54fa 34f04ffb
.org 0xa54fe
	subs r4, #1	@ 000a54fe 013c
.org 0xa5500
	cmp r4, #0	@ 000a5500 002c
.org 0xa5502
	bne.n 0xa5492	@ 000a5502 c6d1
.org 0xa5504
	add sp, #52	@ 000a5504 0db0
.org 0xa5506
	pop {r3, r4, r5}	@ 000a5506 38bc
.org 0xa5508
	mov r8, r3	@ 000a5508 9846
.org 0xa550a
	mov r9, r4	@ 000a550a a146
.org 0xa550c
	mov sl, r5	@ 000a550c aa46
.org 0xa550e
	pop {r4, r5, r6, r7}	@ 000a550e f0bc
.org 0xa5510
	pop {r0}	@ 000a5510 01bc
.org 0xa5512
	bx r0	@ 000a5512 0047
