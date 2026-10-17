@ FUN_08111998  entry 0x08111998  size 64
.thumb
.org 0x111998
FUN_08111998:
	push {r4, r5, lr}	@ 00111998 30b5
.org 0x11199a
	sub sp, #8	@ 0011199a 82b0
.org 0x11199c
	adds r5, r0, #0	@ 0011199c 051c
.org 0x11199e
	adds r5, #20	@ 0011199e 1435
.org 0x1119a0
	adds r0, r5, #0	@ 001119a0 281c
.org 0x1119a2
	bl 0x3470	@ 001119a2 f1f665fd
.org 0x1119a6
	ldr r1, [pc, #48]	@ 001119a6 0c49
.org 0x1119a8
	movs r0, #0	@ 001119a8 0020
.org 0x1119aa
	strb r0, [r1, #0]	@ 001119aa 0870
.org 0x1119ac
	movs r0, #0	@ 001119ac 0020
.org 0x1119ae
	ldr r1, [pc, #44]	@ 001119ae 0b49
.org 0x1119b0
	str r0, [sp, #0]	@ 001119b0 0090
.org 0x1119b2
	ldr r2, [pc, #44]	@ 001119b2 0b4a
.org 0x1119b4
	mov r0, sp	@ 001119b4 6846
.org 0x1119b6
	bl 0x128be0	@ 001119b6 17f013f9
.org 0x1119ba
	ldr r4, [pc, #40]	@ 001119ba 0a4c
.org 0x1119bc
	ldr r0, [r4, #0]	@ 001119bc 2068
.org 0x1119be
	bl 0x1c79c	@ 001119be 0af7edfe
.org 0x1119c2
	ldr r0, [r4, #0]	@ 001119c2 2068
.org 0x1119c4
	adds r1, r5, #0	@ 001119c4 291c
.org 0x1119c6
	bl 0x1c924	@ 001119c6 0af7adff
.org 0x1119ca
	adds r0, r5, #0	@ 001119ca 281c
.org 0x1119cc
	bl 0x3420	@ 001119cc f1f628fd
.org 0x1119d0
	add sp, #8	@ 001119d0 02b0
.org 0x1119d2
	pop {r4, r5}	@ 001119d2 30bc
.org 0x1119d4
	pop {r0}	@ 001119d4 01bc
.org 0x1119d6
	bx r0	@ 001119d6 0047
