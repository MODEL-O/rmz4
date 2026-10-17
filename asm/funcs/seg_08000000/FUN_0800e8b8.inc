@ FUN_0800e8b8  entry 0x0800e8b8  size 100
.thumb
.org 0xe8b8
FUN_0800e8b8:
	push {r4, r5, r6, lr}	@ 0000e8b8 70b5
.org 0xe8ba
	sub sp, #8	@ 0000e8ba 82b0
.org 0xe8bc
	ldr r0, [r0, #92]	@ 0000e8bc c06d
.org 0xe8be
	lsls r5, r0, #16	@ 0000e8be 0504
.org 0xe8c0
	ldr r0, [pc, #88]	@ 0000e8c0 1648
.org 0xe8c2
	ldr r1, [pc, #92]	@ 0000e8c2 1749
.org 0xe8c4
	adds r0, r0, r1	@ 0000e8c4 4018
.org 0xe8c6
	ldrh r0, [r0, #0]	@ 0000e8c6 0088
.org 0xe8c8
	cmp r0, #0	@ 0000e8c8 0028
.org 0xe8ca
	beq.n 0xe914	@ 0000e8ca 23d0
.org 0xe8cc
	ldr r0, [pc, #84]	@ 0000e8cc 1548
.org 0xe8ce
	ldr r0, [r0, #0]	@ 0000e8ce 0068
.org 0xe8d0
	ldr r1, [pc, #84]	@ 0000e8d0 1549
.org 0xe8d2
	adds r0, r0, r1	@ 0000e8d2 4018
.org 0xe8d4
	lsrs r5, r5, #20	@ 0000e8d4 2d0d
.org 0xe8d6
	lsls r5, r5, #1	@ 0000e8d6 6d00
.org 0xe8d8
	ldr r1, [pc, #80]	@ 0000e8d8 1449
.org 0xe8da
	adds r5, r5, r1	@ 0000e8da 6d18
.org 0xe8dc
	ldrh r2, [r5, #0]	@ 0000e8dc 2a88
.org 0xe8de
	movs r4, #248	@ 0000e8de f824
.org 0xe8e0
	lsls r4, r4, #5	@ 0000e8e0 6401
.org 0xe8e2
	adds r1, r4, #0	@ 0000e8e2 211c
.org 0xe8e4
	ands r1, r2	@ 0000e8e4 1140
.org 0xe8e6
	lsls r1, r1, #3	@ 0000e8e6 c900
.org 0xe8e8
	movs r2, #192	@ 0000e8e8 c022
.org 0xe8ea
	lsls r2, r2, #19	@ 0000e8ea d204
.org 0xe8ec
	adds r1, r1, r2	@ 0000e8ec 8918
.org 0xe8ee
	movs r6, #128	@ 0000e8ee 8026
.org 0xe8f0
	lsls r6, r6, #2	@ 0000e8f0 b600
.org 0xe8f2
	adds r2, r6, #0	@ 0000e8f2 321c
.org 0xe8f4
	bl 0x128be0	@ 0000e8f4 1af174f9
.org 0xe8f8
	movs r1, #0	@ 0000e8f8 0021
.org 0xe8fa
	ldrh r0, [r5, #0]	@ 0000e8fa 2888
.org 0xe8fc
	ands r4, r0	@ 0000e8fc 0440
.org 0xe8fe
	lsls r4, r4, #3	@ 0000e8fe e400
.org 0xe900
	ldr r0, [pc, #44]	@ 0000e900 0b48
.org 0xe902
	adds r4, r4, r0	@ 0000e902 2418
.org 0xe904
	str r1, [sp, #0]	@ 0000e904 0091
.org 0xe906
	movs r2, #128	@ 0000e906 8022
.org 0xe908
	lsls r2, r2, #17	@ 0000e908 5204
.org 0xe90a
	orrs r2, r6	@ 0000e90a 3243
.org 0xe90c
	mov r0, sp	@ 0000e90c 6846
.org 0xe90e
	adds r1, r4, #0	@ 0000e90e 211c
.org 0xe910
	bl 0x128be0	@ 0000e910 1af166f9
.org 0xe914
	add sp, #8	@ 0000e914 02b0
.org 0xe916
	pop {r4, r5, r6}	@ 0000e916 70bc
.org 0xe918
	pop {r0}	@ 0000e918 01bc
.org 0xe91a
	bx r0	@ 0000e91a 0047
