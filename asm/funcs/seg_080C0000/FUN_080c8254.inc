@ FUN_080c8254  entry 0x080c8254  size 78
.thumb
.org 0xc8254
FUN_080c8254:
	push {r4, lr}	@ 000c8254 10b5
.org 0xc8256
	adds r4, r0, #0	@ 000c8256 041c
.org 0xc8258
	ldr r0, [r4, #40]	@ 000c8258 a06a
.org 0xc825a
	ldrb r1, [r4, #17]	@ 000c825a 617c
.org 0xc825c
	ldrb r2, [r4, #15]	@ 000c825c e27b
.org 0xc825e
	cmp r2, #0	@ 000c825e 002a
.org 0xc8260
	bne.n 0xc8274	@ 000c8260 08d1
.org 0xc8262
	adds r0, #181	@ 000c8262 b530
.org 0xc8264
	ldrb r0, [r0, #0]	@ 000c8264 0078
.org 0xc8266
	adds r1, #2	@ 000c8266 0231
.org 0xc8268
	subs r0, r0, r1	@ 000c8268 401a
.org 0xc826a
	lsls r0, r0, #2	@ 000c826a 8000
.org 0xc826c
	adds r0, #128	@ 000c826c 8030
.org 0xc826e
	str r0, [r4, #104]	@ 000c826e a066
.org 0xc8270
	adds r0, r2, #1	@ 000c8270 501c
.org 0xc8272
	strb r0, [r4, #15]	@ 000c8272 e073
.org 0xc8274
	adds r0, r4, #0	@ 000c8274 201c
.org 0xc8276
	bl 0x1cff0	@ 000c8276 54f7bbfe
.org 0xc827a
	ldr r0, [r4, #104]	@ 000c827a a06e
.org 0xc827c
	subs r0, #1	@ 000c827c 0138
.org 0xc827e
	str r0, [r4, #104]	@ 000c827e a066
.org 0xc8280
	cmp r0, #0	@ 000c8280 0028
.org 0xc8282
	bne.n 0xc829c	@ 000c8282 0bd1
.org 0xc8284
	ldr r1, [pc, #28]	@ 000c8284 0749
.org 0xc8286
	ldrb r0, [r4, #9]	@ 000c8286 607a
.org 0xc8288
	lsls r0, r0, #2	@ 000c8288 8000
.org 0xc828a
	adds r0, r0, r1	@ 000c828a 4018
.org 0xc828c
	movs r1, #2	@ 000c828c 0221
.org 0xc828e
	str r1, [r4, #12]	@ 000c828e e160
.org 0xc8290
	ldr r0, [r0, #0]	@ 000c8290 0068
.org 0xc8292
	ldr r0, [r0, #8]	@ 000c8292 8068
.org 0xc8294
	str r0, [r4, #20]	@ 000c8294 6061
.org 0xc8296
	adds r0, r4, #0	@ 000c8296 201c
.org 0xc8298
	bl 0xc82a8	@ 000c8298 00f006f8
.org 0xc829c
	pop {r4}	@ 000c829c 10bc
.org 0xc829e
	pop {r0}	@ 000c829e 01bc
.org 0xc82a0
	bx r0	@ 000c82a0 0047
