@ FUN_08036270  entry 0x08036270  size 40
.thumb
.org 0x36270
FUN_08036270:
	push {lr}	@ 00036270 00b5
.org 0x36272
	ldr r1, [pc, #36]	@ 00036272 0949
.org 0x36274
	adds r3, r0, r1	@ 00036274 4318
.org 0x36276
	ldrb r1, [r3, #0]	@ 00036276 1978
.org 0x36278
	movs r2, #4	@ 00036278 0422
.org 0x3627a
	orrs r1, r2	@ 0003627a 1143
.org 0x3627c
	movs r2, #2	@ 0003627c 0222
.org 0x3627e
	orrs r1, r2	@ 0003627e 1143
.org 0x36280
	strb r1, [r3, #0]	@ 00036280 1970
.org 0x36282
	ldr r2, [pc, #24]	@ 00036282 064a
.org 0x36284
	ldr r3, [pc, #24]	@ 00036284 064b
.org 0x36286
	adds r1, r0, r3	@ 00036286 c118
.org 0x36288
	ldrb r1, [r1, #0]	@ 00036288 0978
.org 0x3628a
	lsls r1, r1, #2	@ 0003628a 8900
.org 0x3628c
	adds r1, r1, r2	@ 0003628c 8918
.org 0x3628e
	ldr r1, [r1, #0]	@ 0003628e 0968
.org 0x36290
	bl 0x128f80	@ 00036290 f2f076fe
.org 0x36294
	pop {r0}	@ 00036294 01bc
.org 0x36296
	bx r0	@ 00036296 0047
