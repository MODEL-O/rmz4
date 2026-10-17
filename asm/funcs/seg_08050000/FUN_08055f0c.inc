@ FUN_08055f0c  entry 0x08055f0c  size 114
.thumb
.org 0x55f0c
FUN_08055f0c:
	push {r4, lr}	@ 00055f0c 10b5
.org 0x55f0e
	adds r4, r0, #0	@ 00055f0e 041c
.org 0x55f10
	ldrb r0, [r4, #15]	@ 00055f10 e07b
.org 0x55f12
	cmp r0, #0	@ 00055f12 0028
.org 0x55f14
	bne.n 0x55f24	@ 00055f14 06d1
.org 0x55f16
	ldr r1, [pc, #104]	@ 00055f16 1a49
.org 0x55f18
	adds r0, r4, #0	@ 00055f18 201c
.org 0x55f1a
	bl 0x1cf00	@ 00055f1a c6f7f1ff
.org 0x55f1e
	ldrb r0, [r4, #15]	@ 00055f1e e07b
.org 0x55f20
	adds r0, #1	@ 00055f20 0130
.org 0x55f22
	strb r0, [r4, #15]	@ 00055f22 e073
.org 0x55f24
	adds r0, r4, #0	@ 00055f24 201c
.org 0x55f26
	bl 0x1cff0	@ 00055f26 c7f763f8
.org 0x55f2a
	adds r0, r4, #0	@ 00055f2a 201c
.org 0x55f2c
	adds r0, #116	@ 00055f2c 7430
.org 0x55f2e
	ldr r3, [pc, #84]	@ 00055f2e 154b
.org 0x55f30
	ldrb r1, [r4, #30]	@ 00055f30 a17f
.org 0x55f32
	lsls r1, r1, #8	@ 00055f32 0902
.org 0x55f34
	adds r2, r4, #0	@ 00055f34 221c
.org 0x55f36
	adds r2, #112	@ 00055f36 7032
.org 0x55f38
	ldrb r2, [r2, #0]	@ 00055f38 1278
.org 0x55f3a
	orrs r1, r2	@ 00055f3a 1143
.org 0x55f3c
	ldr r2, [pc, #72]	@ 00055f3c 124a
.org 0x55f3e
	adds r1, r1, r2	@ 00055f3e 8918
.org 0x55f40
	lsls r1, r1, #2	@ 00055f40 8900
.org 0x55f42
	adds r1, r1, r3	@ 00055f42 c918
.org 0x55f44
	adds r2, r4, #0	@ 00055f44 221c
.org 0x55f46
	adds r2, #113	@ 00055f46 7132
.org 0x55f48
	ldrb r2, [r2, #0]	@ 00055f48 1278
.org 0x55f4a
	lsls r2, r2, #24	@ 00055f4a 1206
.org 0x55f4c
	asrs r2, r2, #24	@ 00055f4c 1216
.org 0x55f4e
	ldr r1, [r1, #0]	@ 00055f4e 0968
.org 0x55f50
	lsls r2, r2, #2	@ 00055f50 9200
.org 0x55f52
	adds r2, r2, r1	@ 00055f52 5218
.org 0x55f54
	ldr r1, [r2, #0]	@ 00055f54 1168
.org 0x55f56
	ldrb r2, [r1, #0]	@ 00055f56 0a78
.org 0x55f58
	lsls r1, r2, #1	@ 00055f58 5100
.org 0x55f5a
	adds r1, r1, r2	@ 00055f5a 8918
.org 0x55f5c
	lsls r1, r1, #3	@ 00055f5c c900
.org 0x55f5e
	ldr r2, [pc, #44]	@ 00055f5e 0b4a
.org 0x55f60
	adds r1, r1, r2	@ 00055f60 8918
.org 0x55f62
	bl 0x5784	@ 00055f62 aff70ffc
.org 0x55f66
	adds r0, r4, #0	@ 00055f66 201c
.org 0x55f68
	adds r0, #115	@ 00055f68 7330
.org 0x55f6a
	ldrb r0, [r0, #0]	@ 00055f6a 0078
.org 0x55f6c
	cmp r0, #3	@ 00055f6c 0328
.org 0x55f6e
	bne.n 0x55f78	@ 00055f6e 03d1
.org 0x55f70
	movs r1, #0	@ 00055f70 0021
.org 0x55f72
	movs r0, #1	@ 00055f72 0120
.org 0x55f74
	strb r0, [r4, #14]	@ 00055f74 a073
.org 0x55f76
	strb r1, [r4, #15]	@ 00055f76 e173
.org 0x55f78
	pop {r4}	@ 00055f78 10bc
.org 0x55f7a
	pop {r0}	@ 00055f7a 01bc
.org 0x55f7c
	bx r0	@ 00055f7c 0047
