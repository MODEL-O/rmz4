@ FUN_08051224  entry 0x08051224  size 78
.thumb
.org 0x51224
FUN_08051224:
	push {r4, lr}	@ 00051224 10b5
.org 0x51226
	adds r4, r0, #0	@ 00051226 041c
.org 0x51228
	ldrb r0, [r4, #14]	@ 00051228 a07b
.org 0x5122a
	cmp r0, #0	@ 0005122a 0028
.org 0x5122c
	bne.n 0x51242	@ 0005122c 09d1
.org 0x5122e
	ldr r1, [pc, #68]	@ 0005122e 1149
.org 0x51230
	adds r0, r4, #0	@ 00051230 201c
.org 0x51232
	bl 0x1cf00	@ 00051232 cbf765fe
.org 0x51236
	movs r0, #228	@ 00051236 e420
.org 0x51238
	bl 0x2b10	@ 00051238 b1f76afc
.org 0x5123c
	ldrb r0, [r4, #14]	@ 0005123c a07b
.org 0x5123e
	adds r0, #1	@ 0005123e 0130
.org 0x51240
	strb r0, [r4, #14]	@ 00051240 a073
.org 0x51242
	adds r0, r4, #0	@ 00051242 201c
.org 0x51244
	bl 0x1cff0	@ 00051244 cbf7d4fe
.org 0x51248
	adds r0, r4, #0	@ 00051248 201c
.org 0x5124a
	adds r0, #113	@ 0005124a 7130
.org 0x5124c
	ldrb r0, [r0, #0]	@ 0005124c 0078
.org 0x5124e
	lsls r0, r0, #24	@ 0005124e 0006
.org 0x51250
	asrs r0, r0, #24	@ 00051250 0016
.org 0x51252
	cmp r0, #7	@ 00051252 0728
.org 0x51254
	ble.n 0x5126c	@ 00051254 0add
.org 0x51256
	adds r0, r4, #0	@ 00051256 201c
.org 0x51258
	adds r0, #114	@ 00051258 7230
.org 0x5125a
	ldrb r0, [r0, #0]	@ 0005125a 0078
.org 0x5125c
	lsls r0, r0, #24	@ 0005125c 0006
.org 0x5125e
	asrs r0, r0, #24	@ 0005125e 0016
.org 0x51260
	cmp r0, #1	@ 00051260 0128
.org 0x51262
	bgt.n 0x5126c	@ 00051262 03dc
.org 0x51264
	movs r1, #0	@ 00051264 0021
.org 0x51266
	movs r0, #6	@ 00051266 0620
.org 0x51268
	strb r0, [r4, #13]	@ 00051268 6073
.org 0x5126a
	strb r1, [r4, #14]	@ 0005126a a173
.org 0x5126c
	pop {r4}	@ 0005126c 10bc
.org 0x5126e
	pop {r0}	@ 0005126e 01bc
.org 0x51270
	bx r0	@ 00051270 0047
