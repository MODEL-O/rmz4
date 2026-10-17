@ FUN_080d0b78  entry 0x080d0b78  size 96
.thumb
.org 0xd0b78
FUN_080d0b78:
	push {r4, r5, r6, r7, lr}	@ 000d0b78 f0b5
.org 0xd0b7a
	mov r7, r8	@ 000d0b7a 4746
.org 0xd0b7c
	push {r7}	@ 000d0b7c 80b4
.org 0xd0b7e
	sub sp, #4	@ 000d0b7e 81b0
.org 0xd0b80
	adds r7, r0, #0	@ 000d0b80 071c
.org 0xd0b82
	adds r5, r1, #0	@ 000d0b82 0d1c
.org 0xd0b84
	lsls r2, r2, #16	@ 000d0b84 1204
.org 0xd0b86
	lsrs r0, r2, #16	@ 000d0b86 100c
.org 0xd0b88
	mov r8, r0	@ 000d0b88 8046
.org 0xd0b8a
	asrs r4, r2, #16	@ 000d0b8a 1414
.org 0xd0b8c
	str r4, [sp, #0]	@ 000d0b8c 0094
.org 0xd0b8e
	adds r0, r7, #0	@ 000d0b8e 381c
.org 0xd0b90
	movs r1, #5	@ 000d0b90 0521
.org 0xd0b92
	adds r2, r5, #0	@ 000d0b92 2a1c
.org 0xd0b94
	movs r3, #132	@ 000d0b94 8423
.org 0xd0b96
	bl 0x5440	@ 000d0b96 34f753fc
.org 0xd0b9a
	movs r3, #0	@ 000d0b9a 0023
.org 0xd0b9c
	cmp r3, r4	@ 000d0b9c a342
.org 0xd0b9e
	bge.n 0xd0bc0	@ 000d0b9e 0fda
.org 0xd0ba0
	ldr r6, [pc, #52]	@ 000d0ba0 0d4e
.org 0xd0ba2
	lsls r2, r3, #16	@ 000d0ba2 1a04
.org 0xd0ba4
	asrs r2, r2, #16	@ 000d0ba4 1214
.org 0xd0ba6
	lsls r1, r2, #5	@ 000d0ba6 5101
.org 0xd0ba8
	adds r1, r1, r2	@ 000d0ba8 8918
.org 0xd0baa
	lsls r1, r1, #2	@ 000d0baa 8900
.org 0xd0bac
	adds r1, r1, r5	@ 000d0bac 4919
.org 0xd0bae
	ldrb r0, [r6, #0]	@ 000d0bae 3078
.org 0xd0bb0
	adds r0, r0, r3	@ 000d0bb0 c018
.org 0xd0bb2
	strb r0, [r1, #28]	@ 000d0bb2 0877
.org 0xd0bb4
	adds r2, #1	@ 000d0bb4 0132
.org 0xd0bb6
	lsls r2, r2, #16	@ 000d0bb6 1204
.org 0xd0bb8
	lsrs r3, r2, #16	@ 000d0bb8 130c
.org 0xd0bba
	asrs r2, r2, #16	@ 000d0bba 1214
.org 0xd0bbc
	cmp r2, r4	@ 000d0bbc a242
.org 0xd0bbe
	blt.n 0xd0ba2	@ 000d0bbe f0db
.org 0xd0bc0
	ldr r0, [pc, #20]	@ 000d0bc0 0548
.org 0xd0bc2
	ldrb r1, [r0, #0]	@ 000d0bc2 0178
.org 0xd0bc4
	add r1, r8	@ 000d0bc4 4144
.org 0xd0bc6
	strb r1, [r0, #0]	@ 000d0bc6 0170
.org 0xd0bc8
	ldr r0, [pc, #16]	@ 000d0bc8 0448
.org 0xd0bca
	str r7, [r0, #0]	@ 000d0bca 0760
.org 0xd0bcc
	add sp, #4	@ 000d0bcc 01b0
.org 0xd0bce
	pop {r3}	@ 000d0bce 08bc
.org 0xd0bd0
	mov r8, r3	@ 000d0bd0 9846
.org 0xd0bd2
	pop {r4, r5, r6, r7}	@ 000d0bd2 f0bc
.org 0xd0bd4
	pop {r0}	@ 000d0bd4 01bc
.org 0xd0bd6
	bx r0	@ 000d0bd6 0047
