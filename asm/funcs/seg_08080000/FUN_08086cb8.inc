@ FUN_08086cb8  entry 0x08086cb8  size 82
.thumb
.org 0x86cb8
FUN_08086cb8:
	push {r4, r5, r6, lr}	@ 00086cb8 70b5
.org 0x86cba
	adds r6, r0, #0	@ 00086cba 061c
.org 0x86cbc
	ldrb r2, [r6, #17]	@ 00086cbc 727c
.org 0x86cbe
	ldr r1, [pc, #76]	@ 00086cbe 1349
.org 0x86cc0
	ldrb r0, [r6, #9]	@ 00086cc0 707a
.org 0x86cc2
	lsls r0, r0, #2	@ 00086cc2 8000
.org 0x86cc4
	adds r0, r0, r1	@ 00086cc4 4018
.org 0x86cc6
	movs r1, #1	@ 00086cc6 0121
.org 0x86cc8
	str r1, [r6, #12]	@ 00086cc8 f160
.org 0x86cca
	ldr r0, [r0, #0]	@ 00086cca 0068
.org 0x86ccc
	ldr r0, [r0, #4]	@ 00086ccc 4068
.org 0x86cce
	str r0, [r6, #20]	@ 00086cce 7061
.org 0x86cd0
	adds r0, r6, #0	@ 00086cd0 301c
.org 0x86cd2
	adds r0, #180	@ 00086cd2 b430
.org 0x86cd4
	movs r5, #0	@ 00086cd4 0025
.org 0x86cd6
	strb r2, [r0, #0]	@ 00086cd6 0270
.org 0x86cd8
	adds r1, r6, #0	@ 00086cd8 311c
.org 0x86cda
	adds r1, #184	@ 00086cda b831
.org 0x86cdc
	movs r0, #240	@ 00086cdc f020
.org 0x86cde
	str r0, [r1, #0]	@ 00086cde 0860
.org 0x86ce0
	ldrb r1, [r6, #10]	@ 00086ce0 b17a
.org 0x86ce2
	movs r0, #4	@ 00086ce2 0420
.org 0x86ce4
	orrs r0, r1	@ 00086ce4 0843
.org 0x86ce6
	strb r0, [r6, #10]	@ 00086ce6 b072
.org 0x86ce8
	adds r4, r6, #0	@ 00086ce8 341c
.org 0x86cea
	adds r4, #116	@ 00086cea 7434
.org 0x86cec
	ldr r1, [pc, #32]	@ 00086cec 0849
.org 0x86cee
	adds r2, r6, #0	@ 00086cee 321c
.org 0x86cf0
	adds r2, #84	@ 00086cf0 5432
.org 0x86cf2
	adds r0, r4, #0	@ 00086cf2 201c
.org 0x86cf4
	movs r3, #64	@ 00086cf4 4023
.org 0x86cf6
	bl 0x5760	@ 00086cf6 7ef733fd
.org 0x86cfa
	str r6, [r4, #44]	@ 00086cfa e662
.org 0x86cfc
	str r5, [r4, #36]	@ 00086cfc 6562
.org 0x86cfe
	adds r0, r6, #0	@ 00086cfe 301c
.org 0x86d00
	bl 0x86d14	@ 00086d00 00f008f8
.org 0x86d04
	pop {r4, r5, r6}	@ 00086d04 70bc
.org 0x86d06
	pop {r0}	@ 00086d06 01bc
.org 0x86d08
	bx r0	@ 00086d08 0047
