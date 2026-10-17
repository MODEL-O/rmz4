@ FUN_08056f28  entry 0x08056f28  size 114
.thumb
.org 0x56f28
FUN_08056f28:
	push {r4, lr}	@ 00056f28 10b5
.org 0x56f2a
	adds r4, r0, #0	@ 00056f2a 041c
.org 0x56f2c
	ldrb r0, [r4, #15]	@ 00056f2c e07b
.org 0x56f2e
	cmp r0, #0	@ 00056f2e 0028
.org 0x56f30
	bne.n 0x56f40	@ 00056f30 06d1
.org 0x56f32
	ldr r1, [pc, #104]	@ 00056f32 1a49
.org 0x56f34
	adds r0, r4, #0	@ 00056f34 201c
.org 0x56f36
	bl 0x1cf00	@ 00056f36 c5f7e3ff
.org 0x56f3a
	ldrb r0, [r4, #15]	@ 00056f3a e07b
.org 0x56f3c
	adds r0, #1	@ 00056f3c 0130
.org 0x56f3e
	strb r0, [r4, #15]	@ 00056f3e e073
.org 0x56f40
	adds r0, r4, #0	@ 00056f40 201c
.org 0x56f42
	bl 0x1cff0	@ 00056f42 c6f755f8
.org 0x56f46
	adds r0, r4, #0	@ 00056f46 201c
.org 0x56f48
	adds r0, #116	@ 00056f48 7430
.org 0x56f4a
	ldr r3, [pc, #84]	@ 00056f4a 154b
.org 0x56f4c
	ldrb r1, [r4, #30]	@ 00056f4c a17f
.org 0x56f4e
	lsls r1, r1, #8	@ 00056f4e 0902
.org 0x56f50
	adds r2, r4, #0	@ 00056f50 221c
.org 0x56f52
	adds r2, #112	@ 00056f52 7032
.org 0x56f54
	ldrb r2, [r2, #0]	@ 00056f54 1278
.org 0x56f56
	orrs r1, r2	@ 00056f56 1143
.org 0x56f58
	ldr r2, [pc, #72]	@ 00056f58 124a
.org 0x56f5a
	adds r1, r1, r2	@ 00056f5a 8918
.org 0x56f5c
	lsls r1, r1, #2	@ 00056f5c 8900
.org 0x56f5e
	adds r1, r1, r3	@ 00056f5e c918
.org 0x56f60
	adds r2, r4, #0	@ 00056f60 221c
.org 0x56f62
	adds r2, #113	@ 00056f62 7132
.org 0x56f64
	ldrb r2, [r2, #0]	@ 00056f64 1278
.org 0x56f66
	lsls r2, r2, #24	@ 00056f66 1206
.org 0x56f68
	asrs r2, r2, #24	@ 00056f68 1216
.org 0x56f6a
	ldr r1, [r1, #0]	@ 00056f6a 0968
.org 0x56f6c
	lsls r2, r2, #2	@ 00056f6c 9200
.org 0x56f6e
	adds r2, r2, r1	@ 00056f6e 5218
.org 0x56f70
	ldr r1, [r2, #0]	@ 00056f70 1168
.org 0x56f72
	ldrb r2, [r1, #0]	@ 00056f72 0a78
.org 0x56f74
	lsls r1, r2, #1	@ 00056f74 5100
.org 0x56f76
	adds r1, r1, r2	@ 00056f76 8918
.org 0x56f78
	lsls r1, r1, #3	@ 00056f78 c900
.org 0x56f7a
	ldr r2, [pc, #44]	@ 00056f7a 0b4a
.org 0x56f7c
	adds r1, r1, r2	@ 00056f7c 8918
.org 0x56f7e
	bl 0x5784	@ 00056f7e aef701fc
.org 0x56f82
	adds r0, r4, #0	@ 00056f82 201c
.org 0x56f84
	adds r0, #115	@ 00056f84 7330
.org 0x56f86
	ldrb r0, [r0, #0]	@ 00056f86 0078
.org 0x56f88
	cmp r0, #3	@ 00056f88 0328
.org 0x56f8a
	bne.n 0x56f94	@ 00056f8a 03d1
.org 0x56f8c
	movs r1, #0	@ 00056f8c 0021
.org 0x56f8e
	movs r0, #1	@ 00056f8e 0120
.org 0x56f90
	strb r0, [r4, #14]	@ 00056f90 a073
.org 0x56f92
	strb r1, [r4, #15]	@ 00056f92 e173
.org 0x56f94
	pop {r4}	@ 00056f94 10bc
.org 0x56f96
	pop {r0}	@ 00056f96 01bc
.org 0x56f98
	bx r0	@ 00056f98 0047
