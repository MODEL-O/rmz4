@ FUN_08037b4c  entry 0x08037b4c  size 88
.thumb
.org 0x37b4c
FUN_08037b4c:
	push {r4, r5, lr}	@ 00037b4c 30b5
.org 0x37b4e
	adds r5, r0, #0	@ 00037b4e 051c
.org 0x37b50
	movs r0, #129	@ 00037b50 8120
.org 0x37b52
	lsls r0, r0, #1	@ 00037b52 4000
.org 0x37b54
	adds r4, r5, r0	@ 00037b54 2c18
.org 0x37b56
	ldrb r0, [r4, #0]	@ 00037b56 2078
.org 0x37b58
	cmp r0, #0	@ 00037b58 0028
.org 0x37b5a
	bne.n 0x37b6a	@ 00037b5a 06d1
.org 0x37b5c
	ldr r1, [pc, #68]	@ 00037b5c 1149
.org 0x37b5e
	adds r0, r5, #0	@ 00037b5e 281c
.org 0x37b60
	bl 0x1cf00	@ 00037b60 e5f7cef9
.org 0x37b64
	ldrb r0, [r4, #0]	@ 00037b64 2078
.org 0x37b66
	adds r0, #1	@ 00037b66 0130
.org 0x37b68
	strb r0, [r4, #0]	@ 00037b68 2070
.org 0x37b6a
	ldr r4, [pc, #56]	@ 00037b6a 0e4c
.org 0x37b6c
	adds r0, r5, #0	@ 00037b6c 281c
.org 0x37b6e
	adds r1, r4, #0	@ 00037b6e 211c
.org 0x37b70
	bl 0x3a3b0	@ 00037b70 02f01efc
.org 0x37b74
	adds r0, r5, #0	@ 00037b74 281c
.org 0x37b76
	adds r1, r4, #0	@ 00037b76 211c
.org 0x37b78
	bl 0x3a3f0	@ 00037b78 02f03afc
.org 0x37b7c
	adds r0, r5, #0	@ 00037b7c 281c
.org 0x37b7e
	adds r0, #115	@ 00037b7e 7330
.org 0x37b80
	ldrb r0, [r0, #0]	@ 00037b80 0078
.org 0x37b82
	cmp r0, #3	@ 00037b82 0328
.org 0x37b84
	bne.n 0x37b9e	@ 00037b84 0bd1
.org 0x37b86
	movs r1, #160	@ 00037b86 a021
.org 0x37b88
	lsls r1, r1, #3	@ 00037b88 c900
.org 0x37b8a
	adds r0, r5, #0	@ 00037b8a 281c
.org 0x37b8c
	movs r2, #4	@ 00037b8c 0422
.org 0x37b8e
	movs r3, #1	@ 00037b8e 0123
.org 0x37b90
	bl 0x1cfc8	@ 00037b90 e5f71afa
.org 0x37b94
	movs r0, #128	@ 00037b94 8020
.org 0x37b96
	lsls r0, r0, #1	@ 00037b96 4000
.org 0x37b98
	adds r1, r5, r0	@ 00037b98 2918
.org 0x37b9a
	movs r0, #0	@ 00037b9a 0020
.org 0x37b9c
	strb r0, [r1, #0]	@ 00037b9c 0870
.org 0x37b9e
	pop {r4, r5}	@ 00037b9e 30bc
.org 0x37ba0
	pop {r0}	@ 00037ba0 01bc
.org 0x37ba2
	bx r0	@ 00037ba2 0047
