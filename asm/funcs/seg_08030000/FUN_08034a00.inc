@ FUN_08034a00  entry 0x08034a00  size 92
.thumb
.org 0x34a00
FUN_08034a00:
	push {r4, r5, lr}	@ 00034a00 30b5
.org 0x34a02
	adds r5, r0, #0	@ 00034a02 051c
.org 0x34a04
	movs r0, #129	@ 00034a04 8120
.org 0x34a06
	lsls r0, r0, #1	@ 00034a06 4000
.org 0x34a08
	adds r4, r5, r0	@ 00034a08 2c18
.org 0x34a0a
	ldrb r0, [r4, #0]	@ 00034a0a 2078
.org 0x34a0c
	cmp r0, #0	@ 00034a0c 0028
.org 0x34a0e
	bne.n 0x34a1e	@ 00034a0e 06d1
.org 0x34a10
	ldr r1, [pc, #72]	@ 00034a10 1249
.org 0x34a12
	adds r0, r5, #0	@ 00034a12 281c
.org 0x34a14
	bl 0x1cf00	@ 00034a14 e8f774fa
.org 0x34a18
	ldrb r0, [r4, #0]	@ 00034a18 2078
.org 0x34a1a
	adds r0, #1	@ 00034a1a 0130
.org 0x34a1c
	strb r0, [r4, #0]	@ 00034a1c 2070
.org 0x34a1e
	ldr r4, [pc, #60]	@ 00034a1e 0f4c
.org 0x34a20
	adds r0, r5, #0	@ 00034a20 281c
.org 0x34a22
	adds r1, r4, #0	@ 00034a22 211c
.org 0x34a24
	bl 0x3a3b0	@ 00034a24 05f0c4fc
.org 0x34a28
	adds r0, r5, #0	@ 00034a28 281c
.org 0x34a2a
	adds r1, r4, #0	@ 00034a2a 211c
.org 0x34a2c
	bl 0x3a3f0	@ 00034a2c 05f0e0fc
.org 0x34a30
	adds r0, r5, #0	@ 00034a30 281c
.org 0x34a32
	adds r0, #115	@ 00034a32 7330
.org 0x34a34
	ldrb r0, [r0, #0]	@ 00034a34 0078
.org 0x34a36
	cmp r0, #3	@ 00034a36 0328
.org 0x34a38
	bne.n 0x34a56	@ 00034a38 0dd1
.org 0x34a3a
	movs r0, #128	@ 00034a3a 8020
.org 0x34a3c
	lsls r0, r0, #1	@ 00034a3c 4000
.org 0x34a3e
	adds r1, r5, r0	@ 00034a3e 2918
.org 0x34a40
	movs r0, #0	@ 00034a40 0020
.org 0x34a42
	strb r0, [r1, #0]	@ 00034a42 0870
.org 0x34a44
	adds r0, r5, #0	@ 00034a44 281c
.org 0x34a46
	bl 0x2b7d8	@ 00034a46 f6f7c7fe
.org 0x34a4a
	adds r1, r0, #0	@ 00034a4a 011c
.org 0x34a4c
	lsls r1, r1, #16	@ 00034a4c 0904
.org 0x34a4e
	lsrs r1, r1, #16	@ 00034a4e 090c
.org 0x34a50
	adds r0, r5, #0	@ 00034a50 281c
.org 0x34a52
	bl 0x1cf00	@ 00034a52 e8f755fa
.org 0x34a56
	pop {r4, r5}	@ 00034a56 30bc
.org 0x34a58
	pop {r0}	@ 00034a58 01bc
.org 0x34a5a
	bx r0	@ 00034a5a 0047
