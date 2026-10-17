@ FUN_080ba3ec  entry 0x080ba3ec  size 66
.thumb
.org 0xba3ec
FUN_080ba3ec:
	push {r4, lr}	@ 000ba3ec 10b5
.org 0xba3ee
	adds r4, r0, #0	@ 000ba3ee 041c
.org 0xba3f0
	ldrb r0, [r4, #15]	@ 000ba3f0 e07b
.org 0xba3f2
	cmp r0, #0	@ 000ba3f2 0028
.org 0xba3f4
	bne.n 0xba40e	@ 000ba3f4 0bd1
.org 0xba3f6
	adds r0, r4, #0	@ 000ba3f6 201c
.org 0xba3f8
	adds r0, #116	@ 000ba3f8 7430
.org 0xba3fa
	ldr r1, [pc, #52]	@ 000ba3fa 0d49
.org 0xba3fc
	bl 0x5784	@ 000ba3fc 4bf7c2f9
.org 0xba400
	ldr r1, [pc, #48]	@ 000ba400 0c49
.org 0xba402
	adds r0, r4, #0	@ 000ba402 201c
.org 0xba404
	bl 0x1cf00	@ 000ba404 62f77cfd
.org 0xba408
	ldrb r0, [r4, #15]	@ 000ba408 e07b
.org 0xba40a
	adds r0, #1	@ 000ba40a 0130
.org 0xba40c
	strb r0, [r4, #15]	@ 000ba40c e073
.org 0xba40e
	adds r0, r4, #0	@ 000ba40e 201c
.org 0xba410
	bl 0x1cff0	@ 000ba410 62f7eefd
.org 0xba414
	adds r0, r4, #0	@ 000ba414 201c
.org 0xba416
	adds r0, #115	@ 000ba416 7330
.org 0xba418
	ldrb r0, [r0, #0]	@ 000ba418 0078
.org 0xba41a
	cmp r0, #3	@ 000ba41a 0328
.org 0xba41c
	bne.n 0xba428	@ 000ba41c 04d1
.org 0xba41e
	movs r1, #0	@ 000ba41e 0021
.org 0xba420
	movs r0, #5	@ 000ba420 0520
.org 0xba422
	strb r0, [r4, #13]	@ 000ba422 6073
.org 0xba424
	strb r1, [r4, #14]	@ 000ba424 a173
.org 0xba426
	strb r1, [r4, #15]	@ 000ba426 e173
.org 0xba428
	pop {r4}	@ 000ba428 10bc
.org 0xba42a
	pop {r0}	@ 000ba42a 01bc
.org 0xba42c
	bx r0	@ 000ba42c 0047
