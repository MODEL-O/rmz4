@ FUN_080d0afc  entry 0x080d0afc  size 84
.thumb
.org 0xd0afc
FUN_080d0afc:
	push {r4, lr}	@ 000d0afc 10b5
.org 0xd0afe
	adds r4, r0, #0	@ 000d0afe 041c
.org 0xd0b00
	ldr r0, [pc, #76]	@ 000d0b00 1348
.org 0xd0b02
	ldr r2, [r0, #0]	@ 000d0b02 0268
.org 0xd0b04
	ldr r3, [pc, #76]	@ 000d0b04 134b
.org 0xd0b06
	ldrb r1, [r2, #10]	@ 000d0b06 917a
.org 0xd0b08
	movs r0, #16	@ 000d0b08 1020
.org 0xd0b0a
	ands r0, r1	@ 000d0b0a 0840
.org 0xd0b0c
	lsls r0, r0, #24	@ 000d0b0c 0006
.org 0xd0b0e
	lsrs r0, r0, #24	@ 000d0b0e 000e
.org 0xd0b10
	negs r0, r0	@ 000d0b10 4042
.org 0xd0b12
	asrs r0, r0, #31	@ 000d0b12 c017
.org 0xd0b14
	movs r1, #4	@ 000d0b14 0421
.org 0xd0b16
	ands r0, r1	@ 000d0b16 0840
.org 0xd0b18
	adds r0, r0, r3	@ 000d0b18 c018
.org 0xd0b1a
	ldr r1, [r0, #0]	@ 000d0b1a 0168
.org 0xd0b1c
	lsls r1, r1, #8	@ 000d0b1c 0902
.org 0xd0b1e
	ldr r0, [r2, #84]	@ 000d0b1e 506d
.org 0xd0b20
	adds r0, r0, r1	@ 000d0b20 4018
.org 0xd0b22
	str r0, [r4, #84]	@ 000d0b22 6065
.org 0xd0b24
	ldr r0, [r2, #88]	@ 000d0b24 906d
.org 0xd0b26
	ldr r1, [pc, #48]	@ 000d0b26 0c49
.org 0xd0b28
	adds r0, r0, r1	@ 000d0b28 4018
.org 0xd0b2a
	str r0, [r4, #88]	@ 000d0b2a a065
.org 0xd0b2c
	ldrb r0, [r4, #18]	@ 000d0b2c a07c
.org 0xd0b2e
	cmp r0, #0	@ 000d0b2e 0028
.org 0xd0b30
	bne.n 0xd0b44	@ 000d0b30 08d1
.org 0xd0b32
	ldr r1, [pc, #40]	@ 000d0b32 0a49
.org 0xd0b34
	ldrb r0, [r4, #9]	@ 000d0b34 607a
.org 0xd0b36
	lsls r0, r0, #2	@ 000d0b36 8000
.org 0xd0b38
	adds r0, r0, r1	@ 000d0b38 4018
.org 0xd0b3a
	movs r1, #2	@ 000d0b3a 0221
.org 0xd0b3c
	str r1, [r4, #12]	@ 000d0b3c e160
.org 0xd0b3e
	ldr r0, [r0, #0]	@ 000d0b3e 0068
.org 0xd0b40
	ldr r0, [r0, #8]	@ 000d0b40 8068
.org 0xd0b42
	str r0, [r4, #20]	@ 000d0b42 6061
.org 0xd0b44
	ldrb r0, [r4, #18]	@ 000d0b44 a07c
.org 0xd0b46
	subs r0, #1	@ 000d0b46 0138
.org 0xd0b48
	strb r0, [r4, #18]	@ 000d0b48 a074
.org 0xd0b4a
	pop {r4}	@ 000d0b4a 10bc
.org 0xd0b4c
	pop {r0}	@ 000d0b4c 01bc
.org 0xd0b4e
	bx r0	@ 000d0b4e 0047
