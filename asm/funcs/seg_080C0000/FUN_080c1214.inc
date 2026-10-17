@ FUN_080c1214  entry 0x080c1214  size 80
.thumb
.org 0xc1214
FUN_080c1214:
	push {r4, lr}	@ 000c1214 10b5
.org 0xc1216
	adds r4, r0, #0	@ 000c1216 041c
.org 0xc1218
	ldrb r0, [r4, #15]	@ 000c1218 e07b
.org 0xc121a
	cmp r0, #0	@ 000c121a 0028
.org 0xc121c
	bne.n 0xc1236	@ 000c121c 0bd1
.org 0xc121e
	adds r0, r4, #0	@ 000c121e 201c
.org 0xc1220
	adds r0, #116	@ 000c1220 7430
.org 0xc1222
	ldr r1, [pc, #64]	@ 000c1222 1049
.org 0xc1224
	bl 0x5784	@ 000c1224 44f7aefa
.org 0xc1228
	ldr r1, [pc, #60]	@ 000c1228 0f49
.org 0xc122a
	adds r0, r4, #0	@ 000c122a 201c
.org 0xc122c
	bl 0x1cf00	@ 000c122c 5bf768fe
.org 0xc1230
	ldrb r0, [r4, #15]	@ 000c1230 e07b
.org 0xc1232
	adds r0, #1	@ 000c1232 0130
.org 0xc1234
	strb r0, [r4, #15]	@ 000c1234 e073
.org 0xc1236
	adds r0, r4, #0	@ 000c1236 201c
.org 0xc1238
	bl 0x1cff0	@ 000c1238 5bf7dafe
.org 0xc123c
	adds r0, r4, #0	@ 000c123c 201c
.org 0xc123e
	adds r0, #115	@ 000c123e 7330
.org 0xc1240
	ldrb r0, [r0, #0]	@ 000c1240 0078
.org 0xc1242
	cmp r0, #3	@ 000c1242 0328
.org 0xc1244
	bne.n 0xc125e	@ 000c1244 0bd1
.org 0xc1246
	ldr r1, [pc, #36]	@ 000c1246 0949
.org 0xc1248
	ldrb r0, [r4, #9]	@ 000c1248 607a
.org 0xc124a
	lsls r0, r0, #2	@ 000c124a 8000
.org 0xc124c
	adds r0, r0, r1	@ 000c124c 4018
.org 0xc124e
	movs r1, #2	@ 000c124e 0221
.org 0xc1250
	str r1, [r4, #12]	@ 000c1250 e160
.org 0xc1252
	ldr r0, [r0, #0]	@ 000c1252 0068
.org 0xc1254
	ldr r0, [r0, #8]	@ 000c1254 8068
.org 0xc1256
	str r0, [r4, #20]	@ 000c1256 6061
.org 0xc1258
	adds r0, r4, #0	@ 000c1258 201c
.org 0xc125a
	bl 0xc1370	@ 000c125a 00f089f8
.org 0xc125e
	pop {r4}	@ 000c125e 10bc
.org 0xc1260
	pop {r0}	@ 000c1260 01bc
.org 0xc1262
	bx r0	@ 000c1262 0047
