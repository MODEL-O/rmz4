@ FUN_080ba9d0  entry 0x080ba9d0  size 174
.thumb
.org 0xba9d0
FUN_080ba9d0:
	push {r4, lr}	@ 000ba9d0 10b5
.org 0xba9d2
	sub sp, #8	@ 000ba9d2 82b0
.org 0xba9d4
	adds r4, r0, #0	@ 000ba9d4 041c
.org 0xba9d6
	ldrb r0, [r4, #10]	@ 000ba9d6 a07a
.org 0xba9d8
	lsrs r1, r0, #4	@ 000ba9d8 0109
.org 0xba9da
	movs r0, #1	@ 000ba9da 0120
.org 0xba9dc
	ands r1, r0	@ 000ba9dc 0140
.org 0xba9de
	ldrb r2, [r4, #15]	@ 000ba9de e27b
.org 0xba9e0
	cmp r2, #1	@ 000ba9e0 012a
.org 0xba9e2
	beq.n 0xbaa36	@ 000ba9e2 28d0
.org 0xba9e4
	cmp r2, #1	@ 000ba9e4 012a
.org 0xba9e6
	bgt.n 0xba9ee	@ 000ba9e6 02dc
.org 0xba9e8
	cmp r2, #0	@ 000ba9e8 002a
.org 0xba9ea
	beq.n 0xba9f8	@ 000ba9ea 05d0
.org 0xba9ec
	b.n 0xbaa84	@ 000ba9ec 4ae0
.org 0xba9ee
	cmp r2, #2	@ 000ba9ee 022a
.org 0xba9f0
	beq.n 0xbaa5c	@ 000ba9f0 34d0
.org 0xba9f2
	cmp r2, #3	@ 000ba9f2 032a
.org 0xba9f4
	beq.n 0xbaa6a	@ 000ba9f4 39d0
.org 0xba9f6
	b.n 0xbaa84	@ 000ba9f6 45e0
.org 0xba9f8
	adds r0, r4, #0	@ 000ba9f8 201c
.org 0xba9fa
	adds r0, #180	@ 000ba9fa b430
.org 0xba9fc
	strb r2, [r0, #0]	@ 000ba9fc 0270
.org 0xba9fe
	lsls r1, r1, #1	@ 000ba9fe 4900
.org 0xbaa00
	subs r1, #1	@ 000baa00 0139
.org 0xbaa02
	lsls r1, r1, #11	@ 000baa02 c902
.org 0xbaa04
	ldr r0, [r4, #84]	@ 000baa04 606d
.org 0xbaa06
	adds r0, r0, r1	@ 000baa06 4018
.org 0xbaa08
	str r0, [sp, #0]	@ 000baa08 0090
.org 0xbaa0a
	ldr r0, [r4, #88]	@ 000baa0a a06d
.org 0xbaa0c
	ldr r1, [pc, #64]	@ 000baa0c 1049
.org 0xbaa0e
	adds r0, r0, r1	@ 000baa0e 4018
.org 0xbaa10
	str r0, [sp, #4]	@ 000baa10 0190
.org 0xbaa12
	adds r0, r4, #0	@ 000baa12 201c
.org 0xbaa14
	mov r1, sp	@ 000baa14 6946
.org 0xbaa16
	movs r2, #0	@ 000baa16 0022
.org 0xbaa18
	movs r3, #0	@ 000baa18 0023
.org 0xbaa1a
	bl 0xbac90	@ 000baa1a 00f039f9
.org 0xbaa1e
	adds r0, r4, #0	@ 000baa1e 201c
.org 0xbaa20
	adds r0, #116	@ 000baa20 7430
.org 0xbaa22
	ldr r1, [pc, #48]	@ 000baa22 0c49
.org 0xbaa24
	bl 0x5784	@ 000baa24 4af7aefe
.org 0xbaa28
	ldr r1, [pc, #44]	@ 000baa28 0b49
.org 0xbaa2a
	adds r0, r4, #0	@ 000baa2a 201c
.org 0xbaa2c
	bl 0x1cf00	@ 000baa2c 62f768fa
.org 0xbaa30
	ldrb r0, [r4, #15]	@ 000baa30 e07b
.org 0xbaa32
	adds r0, #1	@ 000baa32 0130
.org 0xbaa34
	strb r0, [r4, #15]	@ 000baa34 e073
.org 0xbaa36
	adds r0, r4, #0	@ 000baa36 201c
.org 0xbaa38
	bl 0x1cff0	@ 000baa38 62f7dafa
.org 0xbaa3c
	adds r0, r4, #0	@ 000baa3c 201c
.org 0xbaa3e
	adds r0, #180	@ 000baa3e b430
.org 0xbaa40
	ldrb r0, [r0, #0]	@ 000baa40 0078
.org 0xbaa42
	cmp r0, #0	@ 000baa42 0028
.org 0xbaa44
	bne.n 0xbaa84	@ 000baa44 1ed1
.org 0xbaa46
	ldrb r0, [r4, #15]	@ 000baa46 e07b
.org 0xbaa48
	adds r0, #1	@ 000baa48 0130
.org 0xbaa4a
	strb r0, [r4, #15]	@ 000baa4a e073
.org 0xbaa4c
	b.n 0xbaa84	@ 000baa4c 1ae0
.org 0xbaa4e
	.byte 0x00	@ 000baa4e data
.org 0xbaa4f
	.byte 0x00	@ 000baa4f data
.org 0xbaa50
	.byte 0x00,0xda,0xff,0xff	@ 000baa50 data
.org 0xbaa54
	.byte 0x30,0x45,0x86,0x08	@ 000baa54 data
.org 0xbaa58
	.byte 0x04,0xbd,0x00,0x00	@ 000baa58 data
.org 0xbaa5c
	ldr r1, [pc, #44]	@ 000baa5c 0b49
.org 0xbaa5e
	adds r0, r4, #0	@ 000baa5e 201c
.org 0xbaa60
	bl 0x1cf00	@ 000baa60 62f74efa
.org 0xbaa64
	ldrb r0, [r4, #15]	@ 000baa64 e07b
.org 0xbaa66
	adds r0, #1	@ 000baa66 0130
.org 0xbaa68
	strb r0, [r4, #15]	@ 000baa68 e073
.org 0xbaa6a
	adds r0, r4, #0	@ 000baa6a 201c
.org 0xbaa6c
	bl 0x1cff0	@ 000baa6c 62f7c0fa
.org 0xbaa70
	adds r0, r4, #0	@ 000baa70 201c
.org 0xbaa72
	adds r0, #115	@ 000baa72 7330
.org 0xbaa74
	ldrb r0, [r0, #0]	@ 000baa74 0078
.org 0xbaa76
	cmp r0, #3	@ 000baa76 0328
.org 0xbaa78
	bne.n 0xbaa84	@ 000baa78 04d1
.org 0xbaa7a
	movs r1, #0	@ 000baa7a 0021
.org 0xbaa7c
	movs r0, #5	@ 000baa7c 0520
