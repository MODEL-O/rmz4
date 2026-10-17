@ FUN_08086408  entry 0x08086408  size 72
.thumb
.org 0x86408
FUN_08086408:
	push {r4, lr}	@ 00086408 10b5
.org 0x8640a
	adds r4, r0, #0	@ 0008640a 041c
.org 0x8640c
	ldrb r0, [r4, #15]	@ 0008640c e07b
.org 0x8640e
	cmp r0, #0	@ 0008640e 0028
.org 0x86410
	bne.n 0x8642e	@ 00086410 0dd1
.org 0x86412
	adds r0, r4, #0	@ 00086412 201c
.org 0x86414
	adds r0, #116	@ 00086414 7430
.org 0x86416
	ldr r1, [pc, #56]	@ 00086416 0e49
.org 0x86418
	bl 0x5784	@ 00086418 7ff7b4f9
.org 0x8641c
	adds r0, r4, #0	@ 0008641c 201c
.org 0x8641e
	movs r1, #0	@ 0008641e 0021
.org 0x86420
	bl 0x86a14	@ 00086420 00f0f8fa
.org 0x86424
	movs r0, #16	@ 00086424 1020
.org 0x86426
	strb r0, [r4, #18]	@ 00086426 a074
.org 0x86428
	ldrb r0, [r4, #15]	@ 00086428 e07b
.org 0x8642a
	adds r0, #1	@ 0008642a 0130
.org 0x8642c
	strb r0, [r4, #15]	@ 0008642c e073
.org 0x8642e
	adds r0, r4, #0	@ 0008642e 201c
.org 0x86430
	bl 0x86a48	@ 00086430 00f00afb
.org 0x86434
	ldrb r0, [r4, #18]	@ 00086434 a07c
.org 0x86436
	subs r0, #1	@ 00086436 0138
.org 0x86438
	strb r0, [r4, #18]	@ 00086438 a074
.org 0x8643a
	lsls r0, r0, #24	@ 0008643a 0006
.org 0x8643c
	lsrs r1, r0, #24	@ 0008643c 010e
.org 0x8643e
	cmp r1, #0	@ 0008643e 0029
.org 0x86440
	bne.n 0x8644a	@ 00086440 03d1
.org 0x86442
	movs r0, #2	@ 00086442 0220
.org 0x86444
	strb r0, [r4, #13]	@ 00086444 6073
.org 0x86446
	strb r1, [r4, #14]	@ 00086446 a173
.org 0x86448
	strb r1, [r4, #15]	@ 00086448 e173
.org 0x8644a
	pop {r4}	@ 0008644a 10bc
.org 0x8644c
	pop {r0}	@ 0008644c 01bc
.org 0x8644e
	bx r0	@ 0008644e 0047
