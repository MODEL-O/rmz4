@ FUN_080c9b28  entry 0x080c9b28  size 90
.thumb
.org 0xc9b28
FUN_080c9b28:
	push {r4, lr}	@ 000c9b28 10b5
.org 0xc9b2a
	adds r4, r0, #0	@ 000c9b2a 041c
.org 0xc9b2c
	bl 0x1cff0	@ 000c9b2c 53f760fa
.org 0xc9b30
	adds r0, r4, #0	@ 000c9b30 201c
.org 0xc9b32
	adds r0, #116	@ 000c9b32 7430
.org 0xc9b34
	ldr r2, [pc, #76]	@ 000c9b34 134a
.org 0xc9b36
	adds r1, r4, #0	@ 000c9b36 211c
.org 0xc9b38
	adds r1, #113	@ 000c9b38 7131
.org 0xc9b3a
	ldrb r1, [r1, #0]	@ 000c9b3a 0978
.org 0xc9b3c
	lsls r1, r1, #24	@ 000c9b3c 0906
.org 0xc9b3e
	asrs r1, r1, #24	@ 000c9b3e 0916
.org 0xc9b40
	lsls r1, r1, #2	@ 000c9b40 8900
.org 0xc9b42
	adds r1, r1, r2	@ 000c9b42 8918
.org 0xc9b44
	ldr r1, [r1, #0]	@ 000c9b44 0968
.org 0xc9b46
	bl 0x5784	@ 000c9b46 3bf71dfe
.org 0xc9b4a
	ldr r0, [r4, #84]	@ 000c9b4a 606d
.org 0xc9b4c
	ldr r1, [r4, #92]	@ 000c9b4c e16d
.org 0xc9b4e
	adds r0, r0, r1	@ 000c9b4e 4018
.org 0xc9b50
	str r0, [r4, #84]	@ 000c9b50 6065
.org 0xc9b52
	ldr r0, [r4, #88]	@ 000c9b52 a06d
.org 0xc9b54
	ldr r1, [r4, #96]	@ 000c9b54 216e
.org 0xc9b56
	adds r0, r0, r1	@ 000c9b56 4018
.org 0xc9b58
	str r0, [r4, #88]	@ 000c9b58 a065
.org 0xc9b5a
	adds r0, r4, #0	@ 000c9b5a 201c
.org 0xc9b5c
	adds r0, #115	@ 000c9b5c 7330
.org 0xc9b5e
	ldrb r0, [r0, #0]	@ 000c9b5e 0078
.org 0xc9b60
	cmp r0, #3	@ 000c9b60 0328
.org 0xc9b62
	bne.n 0xc9b7c	@ 000c9b62 0bd1
.org 0xc9b64
	ldr r1, [pc, #32]	@ 000c9b64 0849
.org 0xc9b66
	ldrb r0, [r4, #9]	@ 000c9b66 607a
.org 0xc9b68
	lsls r0, r0, #2	@ 000c9b68 8000
.org 0xc9b6a
	adds r0, r0, r1	@ 000c9b6a 4018
.org 0xc9b6c
	movs r1, #2	@ 000c9b6c 0221
.org 0xc9b6e
	str r1, [r4, #12]	@ 000c9b6e e160
.org 0xc9b70
	ldr r0, [r0, #0]	@ 000c9b70 0068
.org 0xc9b72
	ldr r0, [r0, #8]	@ 000c9b72 8068
.org 0xc9b74
	str r0, [r4, #20]	@ 000c9b74 6061
.org 0xc9b76
	adds r0, r4, #0	@ 000c9b76 201c
.org 0xc9b78
	bl 0xc9b8c	@ 000c9b78 00f008f8
.org 0xc9b7c
	pop {r4}	@ 000c9b7c 10bc
.org 0xc9b7e
	pop {r0}	@ 000c9b7e 01bc
.org 0xc9b80
	bx r0	@ 000c9b80 0047
