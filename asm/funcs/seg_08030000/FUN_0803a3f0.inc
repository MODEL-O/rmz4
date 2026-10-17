@ FUN_0803a3f0  entry 0x0803a3f0  size 50
.thumb
.org 0x3a3f0
FUN_0803a3f0:
	push {r4, lr}	@ 0003a3f0 10b5
.org 0x3a3f2
	mov ip, r0	@ 0003a3f2 8446
.org 0x3a3f4
	lsls r1, r1, #16	@ 0003a3f4 0904
.org 0x3a3f6
	lsrs r4, r1, #16	@ 0003a3f6 0c0c
.org 0x3a3f8
	ldrb r1, [r0, #30]	@ 0003a3f8 817f
.org 0x3a3fa
	lsls r1, r1, #8	@ 0003a3fa 0902
.org 0x3a3fc
	adds r0, #112	@ 0003a3fc 7030
.org 0x3a3fe
	ldrb r0, [r0, #0]	@ 0003a3fe 0078
.org 0x3a400
	orrs r0, r1	@ 0003a400 0843
.org 0x3a402
	cmp r0, r4	@ 0003a402 a042
.org 0x3a404
	beq.n 0x3a41c	@ 0003a404 0ad0
.org 0x3a406
	movs r0, #183	@ 0003a406 b720
.org 0x3a408
	lsls r0, r0, #1	@ 0003a408 4000
.org 0x3a40a
	add r0, ip	@ 0003a40a 6044
.org 0x3a40c
	ldrb r2, [r0, #0]	@ 0003a40c 0278
.org 0x3a40e
	ldr r0, [pc, #20]	@ 0003a40e 0548
.org 0x3a410
	add r0, ip	@ 0003a410 6044
.org 0x3a412
	ldrb r3, [r0, #0]	@ 0003a412 0378
.org 0x3a414
	mov r0, ip	@ 0003a414 6046
.org 0x3a416
	adds r1, r4, #0	@ 0003a416 211c
.org 0x3a418
	bl 0x1cfc8	@ 0003a418 e2f7d6fd
.org 0x3a41c
	pop {r4}	@ 0003a41c 10bc
.org 0x3a41e
	pop {r0}	@ 0003a41e 01bc
.org 0x3a420
	bx r0	@ 0003a420 0047
