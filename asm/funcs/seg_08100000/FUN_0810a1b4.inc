@ FUN_0810a1b4  entry 0x0810a1b4  size 96
.thumb
.org 0x10a1b4
FUN_0810a1b4:
	push {r4, r5, r6, r7, lr}	@ 0010a1b4 f0b5
.org 0x10a1b6
	mov r7, r8	@ 0010a1b6 4746
.org 0x10a1b8
	push {r7}	@ 0010a1b8 80b4
.org 0x10a1ba
	sub sp, #4	@ 0010a1ba 81b0
.org 0x10a1bc
	adds r7, r0, #0	@ 0010a1bc 071c
.org 0x10a1be
	adds r5, r1, #0	@ 0010a1be 0d1c
.org 0x10a1c0
	lsls r2, r2, #16	@ 0010a1c0 1204
.org 0x10a1c2
	lsrs r0, r2, #16	@ 0010a1c2 100c
.org 0x10a1c4
	mov r8, r0	@ 0010a1c4 8046
.org 0x10a1c6
	asrs r4, r2, #16	@ 0010a1c6 1414
.org 0x10a1c8
	str r4, [sp, #0]	@ 0010a1c8 0094
.org 0x10a1ca
	adds r0, r7, #0	@ 0010a1ca 381c
.org 0x10a1cc
	movs r1, #9	@ 0010a1cc 0921
.org 0x10a1ce
	adds r2, r5, #0	@ 0010a1ce 2a1c
.org 0x10a1d0
	movs r3, #132	@ 0010a1d0 8423
.org 0x10a1d2
	bl 0x5440	@ 0010a1d2 fbf635f9
.org 0x10a1d6
	movs r3, #0	@ 0010a1d6 0023
.org 0x10a1d8
	cmp r3, r4	@ 0010a1d8 a342
.org 0x10a1da
	bge.n 0x10a1fc	@ 0010a1da 0fda
.org 0x10a1dc
	ldr r6, [pc, #52]	@ 0010a1dc 0d4e
.org 0x10a1de
	lsls r2, r3, #16	@ 0010a1de 1a04
.org 0x10a1e0
	asrs r2, r2, #16	@ 0010a1e0 1214
.org 0x10a1e2
	lsls r1, r2, #5	@ 0010a1e2 5101
.org 0x10a1e4
	adds r1, r1, r2	@ 0010a1e4 8918
.org 0x10a1e6
	lsls r1, r1, #2	@ 0010a1e6 8900
.org 0x10a1e8
	adds r1, r1, r5	@ 0010a1e8 4919
.org 0x10a1ea
	ldrb r0, [r6, #0]	@ 0010a1ea 3078
.org 0x10a1ec
	adds r0, r0, r3	@ 0010a1ec c018
.org 0x10a1ee
	strb r0, [r1, #28]	@ 0010a1ee 0877
.org 0x10a1f0
	adds r2, #1	@ 0010a1f0 0132
.org 0x10a1f2
	lsls r2, r2, #16	@ 0010a1f2 1204
.org 0x10a1f4
	lsrs r3, r2, #16	@ 0010a1f4 130c
.org 0x10a1f6
	asrs r2, r2, #16	@ 0010a1f6 1214
.org 0x10a1f8
	cmp r2, r4	@ 0010a1f8 a242
.org 0x10a1fa
	blt.n 0x10a1de	@ 0010a1fa f0db
.org 0x10a1fc
	ldr r0, [pc, #20]	@ 0010a1fc 0548
.org 0x10a1fe
	ldrb r1, [r0, #0]	@ 0010a1fe 0178
.org 0x10a200
	add r1, r8	@ 0010a200 4144
.org 0x10a202
	strb r1, [r0, #0]	@ 0010a202 0170
.org 0x10a204
	ldr r0, [pc, #16]	@ 0010a204 0448
.org 0x10a206
	str r7, [r0, #0]	@ 0010a206 0760
.org 0x10a208
	add sp, #4	@ 0010a208 01b0
.org 0x10a20a
	pop {r3}	@ 0010a20a 08bc
.org 0x10a20c
	mov r8, r3	@ 0010a20c 9846
.org 0x10a20e
	pop {r4, r5, r6, r7}	@ 0010a20e f0bc
.org 0x10a210
	pop {r0}	@ 0010a210 01bc
.org 0x10a212
	bx r0	@ 0010a212 0047
