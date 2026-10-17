@ FUN_08084368  entry 0x08084368  size 70
.thumb
.org 0x84368
FUN_08084368:
	push {r4, lr}	@ 00084368 10b5
.org 0x8436a
	adds r4, r0, #0	@ 0008436a 041c
.org 0x8436c
	ldrb r0, [r4, #14]	@ 0008436c a07b
.org 0x8436e
	cmp r0, #0	@ 0008436e 0028
.org 0x84370
	bne.n 0x84384	@ 00084370 08d1
.org 0x84372
	ldr r1, [pc, #60]	@ 00084372 0f49
.org 0x84374
	adds r0, r4, #0	@ 00084374 201c
.org 0x84376
	bl 0x1cf00	@ 00084376 98f7c3fd
.org 0x8437a
	movs r0, #8	@ 0008437a 0820
.org 0x8437c
	strb r0, [r4, #18]	@ 0008437c a074
.org 0x8437e
	ldrb r0, [r4, #14]	@ 0008437e a07b
.org 0x84380
	adds r0, #1	@ 00084380 0130
.org 0x84382
	strb r0, [r4, #14]	@ 00084382 a073
.org 0x84384
	ldrb r0, [r4, #18]	@ 00084384 a07c
.org 0x84386
	subs r0, #1	@ 00084386 0138
.org 0x84388
	strb r0, [r4, #18]	@ 00084388 a074
.org 0x8438a
	lsls r0, r0, #24	@ 0008438a 0006
.org 0x8438c
	lsrs r0, r0, #24	@ 0008438c 000e
.org 0x8438e
	cmp r0, #255	@ 0008438e ff28
.org 0x84390
	bne.n 0x843a8	@ 00084390 0ad1
.org 0x84392
	ldr r0, [r4, #84]	@ 00084392 606d
.org 0x84394
	ldr r1, [r4, #88]	@ 00084394 a16d
.org 0x84396
	movs r2, #192	@ 00084396 c022
.org 0x84398
	lsls r2, r2, #4	@ 00084398 1201
.org 0x8439a
	adds r1, r1, r2	@ 0008439a 8918
.org 0x8439c
	bl 0xbdfec	@ 0008439c 39f026fe
.org 0x843a0
	movs r0, #6	@ 000843a0 0620
.org 0x843a2
	strb r0, [r4, #13]	@ 000843a2 6073
.org 0x843a4
	movs r0, #0	@ 000843a4 0020
.org 0x843a6
	strb r0, [r4, #14]	@ 000843a6 a073
.org 0x843a8
	pop {r4}	@ 000843a8 10bc
.org 0x843aa
	pop {r0}	@ 000843aa 01bc
.org 0x843ac
	bx r0	@ 000843ac 0047
