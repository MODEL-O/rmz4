@ FUN_08027408  entry 0x08027408  size 60
.thumb
.org 0x27408
FUN_08027408:
	push {r4, r5, lr}	@ 00027408 30b5
.org 0x2740a
	ldr r5, [pc, #56]	@ 0002740a 0e4d
.org 0x2740c
	ldr r2, [r5, #72]	@ 0002740c aa6c
.org 0x2740e
	movs r4, #1	@ 0002740e 0124
.org 0x27410
	negs r4, r4	@ 00027410 6442
.org 0x27412
	cmp r2, r4	@ 00027412 a242
.org 0x27414
	beq.n 0x2743e	@ 00027414 13d0
.org 0x27416
	ldr r0, [r5, #0]	@ 00027416 2868
.org 0x27418
	ldr r1, [pc, #44]	@ 00027418 0b49
.org 0x2741a
	adds r0, r0, r1	@ 0002741a 4018
.org 0x2741c
	ldr r1, [pc, #44]	@ 0002741c 0b49
.org 0x2741e
	cmp r0, r1	@ 0002741e 8842
.org 0x27420
	bls.n 0x2743e	@ 00027420 0dd9
.org 0x27422
	cmp r2, #147	@ 00027422 932a
.org 0x27424
	beq.n 0x2743e	@ 00027424 0bd0
.org 0x27426
	cmp r2, r4	@ 00027426 a242
.org 0x27428
	beq.n 0x27434	@ 00027428 04d0
.org 0x2742a
	lsls r0, r2, #16	@ 0002742a 1004
.org 0x2742c
	lsrs r0, r0, #16	@ 0002742c 000c
.org 0x2742e
	bl 0x2a98	@ 0002742e dbf733fb
.org 0x27432
	str r4, [r5, #72]	@ 00027432 ac64
.org 0x27434
	movs r0, #147	@ 00027434 9320
.org 0x27436
	bl 0x2a88	@ 00027436 dbf727fb
.org 0x2743a
	movs r0, #147	@ 0002743a 9320
.org 0x2743c
	str r0, [r5, #72]	@ 0002743c a864
.org 0x2743e
	pop {r4, r5}	@ 0002743e 30bc
.org 0x27440
	pop {r0}	@ 00027440 01bc
.org 0x27442
	bx r0	@ 00027442 0047
