@ FUN_08128c40  entry 0x08128c40  size 94
.thumb
.org 0x128c40
FUN_08128c40:
	push {r4, r5, r6, lr}	@ 00128c40 70b5
.org 0x128c42
	lsls r2, r2, #16	@ 00128c42 1204
.org 0x128c44
	lsrs r2, r2, #16	@ 00128c44 120c
.org 0x128c46
	ldr r4, [pc, #88]	@ 00128c46 164c
.org 0x128c48
	ldrh r3, [r4, #0]	@ 00128c48 2388
.org 0x128c4a
	adds r6, r3, #0	@ 00128c4a 1e1c
.org 0x128c4c
	movs r3, #0	@ 00128c4c 0023
.org 0x128c4e
	strh r3, [r4, #0]	@ 00128c4e 2380
.org 0x128c50
	ldr r5, [pc, #80]	@ 00128c50 144d
.org 0x128c52
	ldrh r4, [r5, #0]	@ 00128c52 2c88
.org 0x128c54
	ldr r3, [pc, #80]	@ 00128c54 144b
.org 0x128c56
	ands r4, r3	@ 00128c56 1c40
.org 0x128c58
	ldr r3, [pc, #80]	@ 00128c58 144b
.org 0x128c5a
	ldr r3, [r3, #0]	@ 00128c5a 1b68
.org 0x128c5c
	ldrh r3, [r3, #6]	@ 00128c5c db88
.org 0x128c5e
	orrs r4, r3	@ 00128c5e 1c43
.org 0x128c60
	strh r4, [r5, #0]	@ 00128c60 2c80
.org 0x128c62
	ldr r3, [pc, #76]	@ 00128c62 134b
.org 0x128c64
	str r0, [r3, #0]	@ 00128c64 1860
.org 0x128c66
	ldr r0, [pc, #76]	@ 00128c66 1348
.org 0x128c68
	str r1, [r0, #0]	@ 00128c68 0160
.org 0x128c6a
	ldr r1, [pc, #76]	@ 00128c6a 1349
.org 0x128c6c
	movs r0, #128	@ 00128c6c 8020
.org 0x128c6e
	lsls r0, r0, #24	@ 00128c6e 0006
.org 0x128c70
	orrs r2, r0	@ 00128c70 0243
.org 0x128c72
	str r2, [r1, #0]	@ 00128c72 0a60
.org 0x128c74
	adds r1, #2	@ 00128c74 0231
.org 0x128c76
	movs r2, #128	@ 00128c76 8022
.org 0x128c78
	lsls r2, r2, #8	@ 00128c78 1202
.org 0x128c7a
	adds r0, r2, #0	@ 00128c7a 101c
.org 0x128c7c
	ldrh r1, [r1, #0]	@ 00128c7c 0988
.org 0x128c7e
	ands r0, r1	@ 00128c7e 0840
.org 0x128c80
	cmp r0, #0	@ 00128c80 0028
.org 0x128c82
	beq.n 0x128c94	@ 00128c82 07d0
.org 0x128c84
	ldr r2, [pc, #52]	@ 00128c84 0d4a
.org 0x128c86
	movs r0, #128	@ 00128c86 8020
.org 0x128c88
	lsls r0, r0, #8	@ 00128c88 0002
.org 0x128c8a
	adds r1, r0, #0	@ 00128c8a 011c
.org 0x128c8c
	ldrh r0, [r2, #0]	@ 00128c8c 1088
.org 0x128c8e
	ands r0, r1	@ 00128c8e 0840
.org 0x128c90
	cmp r0, #0	@ 00128c90 0028
.org 0x128c92
	bne.n 0x128c8c	@ 00128c92 fbd1
.org 0x128c94
	ldr r0, [pc, #8]	@ 00128c94 0248
.org 0x128c96
	strh r6, [r0, #0]	@ 00128c96 0680
.org 0x128c98
	pop {r4, r5, r6}	@ 00128c98 70bc
.org 0x128c9a
	pop {r0}	@ 00128c9a 01bc
.org 0x128c9c
	bx r0	@ 00128c9c 0047
