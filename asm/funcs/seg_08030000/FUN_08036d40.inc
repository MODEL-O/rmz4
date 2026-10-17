@ FUN_08036d40  entry 0x08036d40  size 80
.thumb
.org 0x36d40
FUN_08036d40:
	push {r4, r5, r6, lr}	@ 00036d40 70b5
.org 0x36d42
	adds r5, r0, #0	@ 00036d42 051c
.org 0x36d44
	movs r0, #129	@ 00036d44 8120
.org 0x36d46
	lsls r0, r0, #1	@ 00036d46 4000
.org 0x36d48
	adds r6, r5, r0	@ 00036d48 2e18
.org 0x36d4a
	ldrb r0, [r6, #0]	@ 00036d4a 3078
.org 0x36d4c
	cmp r0, #0	@ 00036d4c 0028
.org 0x36d4e
	bne.n 0x36d5e	@ 00036d4e 06d1
.org 0x36d50
	ldr r1, [pc, #60]	@ 00036d50 0f49
.org 0x36d52
	adds r0, r5, #0	@ 00036d52 281c
.org 0x36d54
	bl 0x1cf00	@ 00036d54 e6f7d4f8
.org 0x36d58
	ldrb r0, [r6, #0]	@ 00036d58 3078
.org 0x36d5a
	adds r0, #1	@ 00036d5a 0130
.org 0x36d5c
	strb r0, [r6, #0]	@ 00036d5c 3070
.org 0x36d5e
	ldr r4, [pc, #48]	@ 00036d5e 0c4c
.org 0x36d60
	adds r0, r5, #0	@ 00036d60 281c
.org 0x36d62
	adds r1, r4, #0	@ 00036d62 211c
.org 0x36d64
	bl 0x3a3b0	@ 00036d64 03f024fb
.org 0x36d68
	adds r0, r5, #0	@ 00036d68 281c
.org 0x36d6a
	adds r1, r4, #0	@ 00036d6a 211c
.org 0x36d6c
	bl 0x3a3f0	@ 00036d6c 03f040fb
.org 0x36d70
	ldr r1, [pc, #32]	@ 00036d70 0849
.org 0x36d72
	adds r0, r5, r1	@ 00036d72 6818
.org 0x36d74
	ldrb r2, [r0, #0]	@ 00036d74 0278
.org 0x36d76
	cmp r2, #3	@ 00036d76 032a
.org 0x36d78
	bne.n 0x36d8a	@ 00036d78 07d1
.org 0x36d7a
	ldr r0, [pc, #28]	@ 00036d7a 0748
.org 0x36d7c
	adds r1, r5, r0	@ 00036d7c 2918
.org 0x36d7e
	movs r0, #0	@ 00036d7e 0020
.org 0x36d80
	strb r2, [r1, #0]	@ 00036d80 0a70
.org 0x36d82
	strb r0, [r6, #0]	@ 00036d82 3070
.org 0x36d84
	adds r0, r5, #0	@ 00036d84 281c
.org 0x36d86
	bl 0x36d9c	@ 00036d86 00f009f8
.org 0x36d8a
	pop {r4, r5, r6}	@ 00036d8a 70bc
.org 0x36d8c
	pop {r0}	@ 00036d8c 01bc
.org 0x36d8e
	bx r0	@ 00036d8e 0047
