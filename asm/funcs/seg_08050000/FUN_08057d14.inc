@ FUN_08057d14  entry 0x08057d14  size 114
.thumb
.org 0x57d14
FUN_08057d14:
	push {r4, lr}	@ 00057d14 10b5
.org 0x57d16
	adds r4, r0, #0	@ 00057d16 041c
.org 0x57d18
	ldrb r0, [r4, #15]	@ 00057d18 e07b
.org 0x57d1a
	cmp r0, #0	@ 00057d1a 0028
.org 0x57d1c
	bne.n 0x57d2c	@ 00057d1c 06d1
.org 0x57d1e
	ldr r1, [pc, #104]	@ 00057d1e 1a49
.org 0x57d20
	adds r0, r4, #0	@ 00057d20 201c
.org 0x57d22
	bl 0x1cf00	@ 00057d22 c5f7edf8
.org 0x57d26
	ldrb r0, [r4, #15]	@ 00057d26 e07b
.org 0x57d28
	adds r0, #1	@ 00057d28 0130
.org 0x57d2a
	strb r0, [r4, #15]	@ 00057d2a e073
.org 0x57d2c
	adds r0, r4, #0	@ 00057d2c 201c
.org 0x57d2e
	bl 0x1cff0	@ 00057d2e c5f75ff9
.org 0x57d32
	adds r0, r4, #0	@ 00057d32 201c
.org 0x57d34
	adds r0, #116	@ 00057d34 7430
.org 0x57d36
	ldr r3, [pc, #84]	@ 00057d36 154b
.org 0x57d38
	ldrb r1, [r4, #30]	@ 00057d38 a17f
.org 0x57d3a
	lsls r1, r1, #8	@ 00057d3a 0902
.org 0x57d3c
	adds r2, r4, #0	@ 00057d3c 221c
.org 0x57d3e
	adds r2, #112	@ 00057d3e 7032
.org 0x57d40
	ldrb r2, [r2, #0]	@ 00057d40 1278
.org 0x57d42
	orrs r1, r2	@ 00057d42 1143
.org 0x57d44
	ldr r2, [pc, #72]	@ 00057d44 124a
.org 0x57d46
	adds r1, r1, r2	@ 00057d46 8918
.org 0x57d48
	lsls r1, r1, #2	@ 00057d48 8900
.org 0x57d4a
	adds r1, r1, r3	@ 00057d4a c918
.org 0x57d4c
	adds r2, r4, #0	@ 00057d4c 221c
.org 0x57d4e
	adds r2, #113	@ 00057d4e 7132
.org 0x57d50
	ldrb r2, [r2, #0]	@ 00057d50 1278
.org 0x57d52
	lsls r2, r2, #24	@ 00057d52 1206
.org 0x57d54
	asrs r2, r2, #24	@ 00057d54 1216
.org 0x57d56
	ldr r1, [r1, #0]	@ 00057d56 0968
.org 0x57d58
	lsls r2, r2, #2	@ 00057d58 9200
.org 0x57d5a
	adds r2, r2, r1	@ 00057d5a 5218
.org 0x57d5c
	ldr r1, [r2, #0]	@ 00057d5c 1168
.org 0x57d5e
	ldrb r2, [r1, #0]	@ 00057d5e 0a78
.org 0x57d60
	lsls r1, r2, #1	@ 00057d60 5100
.org 0x57d62
	adds r1, r1, r2	@ 00057d62 8918
.org 0x57d64
	lsls r1, r1, #3	@ 00057d64 c900
.org 0x57d66
	ldr r2, [pc, #44]	@ 00057d66 0b4a
.org 0x57d68
	adds r1, r1, r2	@ 00057d68 8918
.org 0x57d6a
	bl 0x5784	@ 00057d6a adf70bfd
.org 0x57d6e
	adds r0, r4, #0	@ 00057d6e 201c
.org 0x57d70
	adds r0, #115	@ 00057d70 7330
.org 0x57d72
	ldrb r0, [r0, #0]	@ 00057d72 0078
.org 0x57d74
	cmp r0, #3	@ 00057d74 0328
.org 0x57d76
	bne.n 0x57d80	@ 00057d76 03d1
.org 0x57d78
	movs r1, #0	@ 00057d78 0021
.org 0x57d7a
	movs r0, #5	@ 00057d7a 0520
.org 0x57d7c
	strb r0, [r4, #14]	@ 00057d7c a073
.org 0x57d7e
	strb r1, [r4, #15]	@ 00057d7e e173
.org 0x57d80
	pop {r4}	@ 00057d80 10bc
.org 0x57d82
	pop {r0}	@ 00057d82 01bc
.org 0x57d84
	bx r0	@ 00057d84 0047
