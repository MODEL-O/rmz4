@ FUN_080d0be0  entry 0x080d0be0  size 68
.thumb
.org 0xd0be0
FUN_080d0be0:
	push {r4, lr}	@ 000d0be0 10b5
.org 0xd0be2
	ldr r0, [pc, #12]	@ 000d0be2 0348
.org 0xd0be4
	ldr r4, [r0, #0]	@ 000d0be4 0468
.org 0xd0be6
	adds r0, r4, #0	@ 000d0be6 201c
.org 0xd0be8
	bl 0x54b4	@ 000d0be8 34f764fc
.org 0xd0bec
	b.n 0xd0c18	@ 000d0bec 14e0
.org 0xd0bee
	.byte 0x00	@ 000d0bee data
.org 0xd0bef
	.byte 0x00	@ 000d0bef data
.org 0xd0bf0
	.byte 0x9c,0xed,0x02,0x02	@ 000d0bf0 data
.org 0xd0bf4
	ldr r0, [pc, #20]	@ 000d0bf4 0548
.org 0xd0bf6
	ldrb r0, [r0, #0]	@ 000d0bf6 0078
.org 0xd0bf8
	cmp r0, #0	@ 000d0bf8 0028
.org 0xd0bfa
	beq.n 0xd0c10	@ 000d0bfa 09d0
.org 0xd0bfc
	ldrb r0, [r2, #9]	@ 000d0bfc 507a
.org 0xd0bfe
	cmp r0, #48	@ 000d0bfe 3028
.org 0xd0c00
	bne.n 0xd0c18	@ 000d0c00 0ad1
.org 0xd0c02
	ldr r1, [r2, #20]	@ 000d0c02 5169
.org 0xd0c04
	adds r0, r2, #0	@ 000d0c04 101c
.org 0xd0c06
	bl 0x128f80	@ 000d0c06 58f0bbf9
.org 0xd0c0a
	b.n 0xd0c18	@ 000d0c0a 05e0
.org 0xd0c0c
	.byte 0x00,0xdc,0x02,0x02	@ 000d0c0c data
.org 0xd0c10
	ldr r1, [r2, #20]	@ 000d0c10 5169
.org 0xd0c12
	adds r0, r2, #0	@ 000d0c12 101c
.org 0xd0c14
	bl 0x128f80	@ 000d0c14 58f0b4f9
.org 0xd0c18
	ldr r0, [r4, #12]	@ 000d0c18 e068
.org 0xd0c1a
	ldr r0, [r0, #4]	@ 000d0c1a 4068
.org 0xd0c1c
	str r0, [r4, #12]	@ 000d0c1c e060
.org 0xd0c1e
	adds r2, r0, #0	@ 000d0c1e 021c
.org 0xd0c20
	adds r0, r4, #0	@ 000d0c20 201c
.org 0xd0c22
	adds r0, #20	@ 000d0c22 1430
