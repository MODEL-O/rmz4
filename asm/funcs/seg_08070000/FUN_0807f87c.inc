@ FUN_0807f87c  entry 0x0807f87c  size 102
.thumb
.org 0x7f87c
FUN_0807f87c:
	push {r4, r5, r6, r7, lr}	@ 0007f87c f0b5
.org 0x7f87e
	mov r7, r9	@ 0007f87e 4f46
.org 0x7f880
	mov r6, r8	@ 0007f880 4646
.org 0x7f882
	push {r6, r7}	@ 0007f882 c0b4
.org 0x7f884
	sub sp, #4	@ 0007f884 81b0
.org 0x7f886
	mov r8, r0	@ 0007f886 8046
.org 0x7f888
	adds r5, r1, #0	@ 0007f888 0d1c
.org 0x7f88a
	lsls r2, r2, #16	@ 0007f88a 1204
.org 0x7f88c
	lsrs r0, r2, #16	@ 0007f88c 100c
.org 0x7f88e
	mov r9, r0	@ 0007f88e 8146
.org 0x7f890
	asrs r4, r2, #16	@ 0007f890 1414
.org 0x7f892
	str r4, [sp, #0]	@ 0007f892 0094
.org 0x7f894
	mov r0, r8	@ 0007f894 4046
.org 0x7f896
	movs r1, #3	@ 0007f896 0321
.org 0x7f898
	adds r2, r5, #0	@ 0007f898 2a1c
.org 0x7f89a
	movs r3, #196	@ 0007f89a c423
.org 0x7f89c
	bl 0x5440	@ 0007f89c 85f7d0fd
.org 0x7f8a0
	movs r3, #0	@ 0007f8a0 0023
.org 0x7f8a2
	cmp r3, r4	@ 0007f8a2 a342
.org 0x7f8a4
	bge.n 0x7f8c6	@ 0007f8a4 0fda
.org 0x7f8a6
	movs r7, #196	@ 0007f8a6 c427
.org 0x7f8a8
	ldr r6, [pc, #56]	@ 0007f8a8 0e4e
.org 0x7f8aa
	lsls r0, r3, #16	@ 0007f8aa 1804
.org 0x7f8ac
	asrs r0, r0, #16	@ 0007f8ac 0014
.org 0x7f8ae
	adds r2, r0, #0	@ 0007f8ae 021c
.org 0x7f8b0
	muls r2, r7	@ 0007f8b0 7a43
.org 0x7f8b2
	adds r2, r2, r5	@ 0007f8b2 5219
.org 0x7f8b4
	ldrb r1, [r6, #0]	@ 0007f8b4 3178
.org 0x7f8b6
	adds r1, r1, r3	@ 0007f8b6 c918
.org 0x7f8b8
	strb r1, [r2, #28]	@ 0007f8b8 1177
.org 0x7f8ba
	adds r0, #1	@ 0007f8ba 0130
.org 0x7f8bc
	lsls r0, r0, #16	@ 0007f8bc 0004
.org 0x7f8be
	lsrs r3, r0, #16	@ 0007f8be 030c
.org 0x7f8c0
	asrs r0, r0, #16	@ 0007f8c0 0014
.org 0x7f8c2
	cmp r0, r4	@ 0007f8c2 a042
.org 0x7f8c4
	blt.n 0x7f8aa	@ 0007f8c4 f1db
.org 0x7f8c6
	ldr r0, [pc, #28]	@ 0007f8c6 0748
.org 0x7f8c8
	ldrb r1, [r0, #0]	@ 0007f8c8 0178
.org 0x7f8ca
	add r1, r9	@ 0007f8ca 4944
.org 0x7f8cc
	strb r1, [r0, #0]	@ 0007f8cc 0170
.org 0x7f8ce
	ldr r0, [pc, #24]	@ 0007f8ce 0648
.org 0x7f8d0
	mov r1, r8	@ 0007f8d0 4146
.org 0x7f8d2
	str r1, [r0, #0]	@ 0007f8d2 0160
.org 0x7f8d4
	add sp, #4	@ 0007f8d4 01b0
.org 0x7f8d6
	pop {r3, r4}	@ 0007f8d6 18bc
.org 0x7f8d8
	mov r8, r3	@ 0007f8d8 9846
.org 0x7f8da
	mov r9, r4	@ 0007f8da a146
.org 0x7f8dc
	pop {r4, r5, r6, r7}	@ 0007f8dc f0bc
.org 0x7f8de
	pop {r0}	@ 0007f8de 01bc
.org 0x7f8e0
	bx r0	@ 0007f8e0 0047
