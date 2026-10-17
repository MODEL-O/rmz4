@ FUN_080523fc  entry 0x080523fc  size 54
.thumb
.org 0x523fc
FUN_080523fc:
	push {r4, lr}	@ 000523fc 10b5
.org 0x523fe
	adds r4, r0, #0	@ 000523fe 041c
.org 0x52400
	ldrb r0, [r4, #14]	@ 00052400 a07b
.org 0x52402
	cmp r0, #0	@ 00052402 0028
.org 0x52404
	bne.n 0x52414	@ 00052404 06d1
.org 0x52406
	ldr r1, [pc, #44]	@ 00052406 0b49
.org 0x52408
	adds r0, r4, #0	@ 00052408 201c
.org 0x5240a
	bl 0x1cf00	@ 0005240a caf779fd
.org 0x5240e
	ldrb r0, [r4, #14]	@ 0005240e a07b
.org 0x52410
	adds r0, #1	@ 00052410 0130
.org 0x52412
	strb r0, [r4, #14]	@ 00052412 a073
.org 0x52414
	adds r0, r4, #0	@ 00052414 201c
.org 0x52416
	bl 0x1cff0	@ 00052416 caf7ebfd
.org 0x5241a
	adds r0, r4, #0	@ 0005241a 201c
.org 0x5241c
	adds r0, #115	@ 0005241c 7330
.org 0x5241e
	ldrb r0, [r0, #0]	@ 0005241e 0078
.org 0x52420
	cmp r0, #3	@ 00052420 0328
.org 0x52422
	bne.n 0x5242c	@ 00052422 03d1
.org 0x52424
	movs r1, #0	@ 00052424 0021
.org 0x52426
	movs r0, #23	@ 00052426 1720
.org 0x52428
	strb r0, [r4, #13]	@ 00052428 6073
.org 0x5242a
	strb r1, [r4, #14]	@ 0005242a a173
.org 0x5242c
	pop {r4}	@ 0005242c 10bc
.org 0x5242e
	pop {r0}	@ 0005242e 01bc
.org 0x52430
	bx r0	@ 00052430 0047
