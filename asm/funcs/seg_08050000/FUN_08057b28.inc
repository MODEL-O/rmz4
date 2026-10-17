@ FUN_08057b28  entry 0x08057b28  size 120
.thumb
.org 0x57b28
FUN_08057b28:
	push {r4, lr}	@ 00057b28 10b5
.org 0x57b2a
	adds r4, r0, #0	@ 00057b2a 041c
.org 0x57b2c
	ldrb r0, [r4, #15]	@ 00057b2c e07b
.org 0x57b2e
	cmp r0, #0	@ 00057b2e 0028
.org 0x57b30
	bne.n 0x57b44	@ 00057b30 08d1
.org 0x57b32
	ldr r1, [pc, #108]	@ 00057b32 1b49
.org 0x57b34
	adds r0, r4, #0	@ 00057b34 201c
.org 0x57b36
	bl 0x1cf00	@ 00057b36 c5f7e3f9
.org 0x57b3a
	movs r0, #16	@ 00057b3a 1020
.org 0x57b3c
	strb r0, [r4, #18]	@ 00057b3c a074
.org 0x57b3e
	ldrb r0, [r4, #15]	@ 00057b3e e07b
.org 0x57b40
	adds r0, #1	@ 00057b40 0130
.org 0x57b42
	strb r0, [r4, #15]	@ 00057b42 e073
.org 0x57b44
	adds r0, r4, #0	@ 00057b44 201c
.org 0x57b46
	bl 0x1cff0	@ 00057b46 c5f753fa
.org 0x57b4a
	adds r0, r4, #0	@ 00057b4a 201c
.org 0x57b4c
	adds r0, #116	@ 00057b4c 7430
.org 0x57b4e
	ldr r3, [pc, #84]	@ 00057b4e 154b
.org 0x57b50
	ldrb r1, [r4, #30]	@ 00057b50 a17f
.org 0x57b52
	lsls r1, r1, #8	@ 00057b52 0902
.org 0x57b54
	adds r2, r4, #0	@ 00057b54 221c
.org 0x57b56
	adds r2, #112	@ 00057b56 7032
.org 0x57b58
	ldrb r2, [r2, #0]	@ 00057b58 1278
.org 0x57b5a
	orrs r1, r2	@ 00057b5a 1143
.org 0x57b5c
	ldr r2, [pc, #72]	@ 00057b5c 124a
.org 0x57b5e
	adds r1, r1, r2	@ 00057b5e 8918
.org 0x57b60
	lsls r1, r1, #2	@ 00057b60 8900
.org 0x57b62
	adds r1, r1, r3	@ 00057b62 c918
.org 0x57b64
	adds r2, r4, #0	@ 00057b64 221c
.org 0x57b66
	adds r2, #113	@ 00057b66 7132
.org 0x57b68
	ldrb r2, [r2, #0]	@ 00057b68 1278
.org 0x57b6a
	lsls r2, r2, #24	@ 00057b6a 1206
.org 0x57b6c
	asrs r2, r2, #24	@ 00057b6c 1216
.org 0x57b6e
	ldr r1, [r1, #0]	@ 00057b6e 0968
.org 0x57b70
	lsls r2, r2, #2	@ 00057b70 9200
.org 0x57b72
	adds r2, r2, r1	@ 00057b72 5218
.org 0x57b74
	ldr r1, [r2, #0]	@ 00057b74 1168
.org 0x57b76
	ldrb r2, [r1, #0]	@ 00057b76 0a78
.org 0x57b78
	lsls r1, r2, #1	@ 00057b78 5100
.org 0x57b7a
	adds r1, r1, r2	@ 00057b7a 8918
.org 0x57b7c
	lsls r1, r1, #3	@ 00057b7c c900
.org 0x57b7e
	ldr r2, [pc, #44]	@ 00057b7e 0b4a
.org 0x57b80
	adds r1, r1, r2	@ 00057b80 8918
.org 0x57b82
	bl 0x5784	@ 00057b82 adf7fffd
.org 0x57b86
	ldrb r0, [r4, #18]	@ 00057b86 a07c
.org 0x57b88
	subs r0, #1	@ 00057b88 0138
.org 0x57b8a
	strb r0, [r4, #18]	@ 00057b8a a074
.org 0x57b8c
	lsls r0, r0, #24	@ 00057b8c 0006
.org 0x57b8e
	lsrs r1, r0, #24	@ 00057b8e 010e
.org 0x57b90
	cmp r1, #0	@ 00057b90 0029
.org 0x57b92
	bne.n 0x57b9a	@ 00057b92 02d1
.org 0x57b94
	movs r0, #2	@ 00057b94 0220
.org 0x57b96
	strb r0, [r4, #14]	@ 00057b96 a073
.org 0x57b98
	strb r1, [r4, #15]	@ 00057b98 e173
.org 0x57b9a
	pop {r4}	@ 00057b9a 10bc
.org 0x57b9c
	pop {r0}	@ 00057b9c 01bc
.org 0x57b9e
	bx r0	@ 00057b9e 0047
