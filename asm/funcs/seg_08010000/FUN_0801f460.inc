@ FUN_0801f460  entry 0x0801f460  size 64
.thumb
.org 0x1f460
FUN_0801f460:
	push {r4, r5, r6, lr}	@ 0001f460 70b5
.org 0x1f462
	lsls r0, r0, #24	@ 0001f462 0006
.org 0x1f464
	ldr r4, [pc, #56]	@ 0001f464 0e4c
.org 0x1f466
	movs r2, #188	@ 0001f466 bc22
.org 0x1f468
	lsls r2, r2, #1	@ 0001f468 5200
.org 0x1f46a
	adds r1, r4, r2	@ 0001f46a a118
.org 0x1f46c
	ldr r5, [r1, #0]	@ 0001f46c 0d68
.org 0x1f46e
	cmp r0, #0	@ 0001f46e 0028
.org 0x1f470
	bne.n 0x1f47a	@ 0001f470 03d1
.org 0x1f472
	adds r0, r4, #0	@ 0001f472 201c
.org 0x1f474
	adds r0, #232	@ 0001f474 e830
.org 0x1f476
	bl 0x1f8cc	@ 0001f476 00f029fa
.org 0x1f47a
	adds r6, r4, #0	@ 0001f47a 261c
.org 0x1f47c
	adds r6, #232	@ 0001f47c e836
.org 0x1f47e
	movs r0, #24	@ 0001f47e 1820
.org 0x1f480
	ldrsb r0, [r6, r0]	@ 0001f480 3056
.org 0x1f482
	cmp r0, #0	@ 0001f482 0028
.org 0x1f484
	beq.n 0x1f48c	@ 0001f484 02d0
.org 0x1f486
	adds r0, r5, #0	@ 0001f486 281c
.org 0x1f488
	bl 0x6d2c	@ 0001f488 e7f750fc
.org 0x1f48c
	adds r0, r4, #0	@ 0001f48c 201c
.org 0x1f48e
	adds r0, #16	@ 0001f48e 1030
.org 0x1f490
	bl 0x27690	@ 0001f490 08f0fef8
.org 0x1f494
	adds r0, r6, #0	@ 0001f494 301c
.org 0x1f496
	bl 0x1f8e8	@ 0001f496 00f027fa
.org 0x1f49a
	pop {r4, r5, r6}	@ 0001f49a 70bc
.org 0x1f49c
	pop {r0}	@ 0001f49c 01bc
.org 0x1f49e
	bx r0	@ 0001f49e 0047
