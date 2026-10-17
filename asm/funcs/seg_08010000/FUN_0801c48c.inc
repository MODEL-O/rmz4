@ FUN_0801c48c  entry 0x0801c48c  size 100
.thumb
.org 0x1c48c
FUN_0801c48c:
	push {r4, r5, r6, lr}	@ 0001c48c 70b5
.org 0x1c48e
	sub sp, #8	@ 0001c48e 82b0
.org 0x1c490
	ldr r0, [r0, #92]	@ 0001c490 c06d
.org 0x1c492
	lsls r5, r0, #16	@ 0001c492 0504
.org 0x1c494
	ldr r0, [pc, #88]	@ 0001c494 1648
.org 0x1c496
	ldr r1, [pc, #92]	@ 0001c496 1749
.org 0x1c498
	adds r0, r0, r1	@ 0001c498 4018
.org 0x1c49a
	ldrh r0, [r0, #0]	@ 0001c49a 0088
.org 0x1c49c
	cmp r0, #0	@ 0001c49c 0028
.org 0x1c49e
	beq.n 0x1c4e8	@ 0001c49e 23d0
.org 0x1c4a0
	ldr r0, [pc, #84]	@ 0001c4a0 1548
.org 0x1c4a2
	ldr r0, [r0, #0]	@ 0001c4a2 0068
.org 0x1c4a4
	ldr r1, [pc, #84]	@ 0001c4a4 1549
.org 0x1c4a6
	adds r0, r0, r1	@ 0001c4a6 4018
.org 0x1c4a8
	lsrs r5, r5, #20	@ 0001c4a8 2d0d
.org 0x1c4aa
	lsls r5, r5, #1	@ 0001c4aa 6d00
.org 0x1c4ac
	ldr r1, [pc, #80]	@ 0001c4ac 1449
.org 0x1c4ae
	adds r5, r5, r1	@ 0001c4ae 6d18
.org 0x1c4b0
	ldrh r2, [r5, #0]	@ 0001c4b0 2a88
.org 0x1c4b2
	movs r4, #248	@ 0001c4b2 f824
.org 0x1c4b4
	lsls r4, r4, #5	@ 0001c4b4 6401
.org 0x1c4b6
	adds r1, r4, #0	@ 0001c4b6 211c
.org 0x1c4b8
	ands r1, r2	@ 0001c4b8 1140
.org 0x1c4ba
	lsls r1, r1, #3	@ 0001c4ba c900
.org 0x1c4bc
	movs r2, #192	@ 0001c4bc c022
.org 0x1c4be
	lsls r2, r2, #19	@ 0001c4be d204
.org 0x1c4c0
	adds r1, r1, r2	@ 0001c4c0 8918
.org 0x1c4c2
	movs r6, #128	@ 0001c4c2 8026
.org 0x1c4c4
	lsls r6, r6, #2	@ 0001c4c4 b600
.org 0x1c4c6
	adds r2, r6, #0	@ 0001c4c6 321c
.org 0x1c4c8
	bl 0x128be0	@ 0001c4c8 0cf18afb
.org 0x1c4cc
	movs r1, #0	@ 0001c4cc 0021
.org 0x1c4ce
	ldrh r0, [r5, #0]	@ 0001c4ce 2888
.org 0x1c4d0
	ands r4, r0	@ 0001c4d0 0440
.org 0x1c4d2
	lsls r4, r4, #3	@ 0001c4d2 e400
.org 0x1c4d4
	ldr r0, [pc, #44]	@ 0001c4d4 0b48
.org 0x1c4d6
	adds r4, r4, r0	@ 0001c4d6 2418
.org 0x1c4d8
	str r1, [sp, #0]	@ 0001c4d8 0091
.org 0x1c4da
	movs r2, #128	@ 0001c4da 8022
.org 0x1c4dc
	lsls r2, r2, #17	@ 0001c4dc 5204
.org 0x1c4de
	orrs r2, r6	@ 0001c4de 3243
.org 0x1c4e0
	mov r0, sp	@ 0001c4e0 6846
.org 0x1c4e2
	adds r1, r4, #0	@ 0001c4e2 211c
.org 0x1c4e4
	bl 0x128be0	@ 0001c4e4 0cf17cfb
.org 0x1c4e8
	add sp, #8	@ 0001c4e8 02b0
.org 0x1c4ea
	pop {r4, r5, r6}	@ 0001c4ea 70bc
.org 0x1c4ec
	pop {r0}	@ 0001c4ec 01bc
.org 0x1c4ee
	bx r0	@ 0001c4ee 0047
