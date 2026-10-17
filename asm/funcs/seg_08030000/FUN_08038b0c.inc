@ FUN_08038b0c  entry 0x08038b0c  size 42
.thumb
.org 0x38b0c
FUN_08038b0c:
	push {lr}	@ 00038b0c 00b5
.org 0x38b0e
	adds r1, r0, #0	@ 00038b0e 011c
.org 0x38b10
	adds r0, #180	@ 00038b10 b430
.org 0x38b12
	ldrb r0, [r0, #19]	@ 00038b12 c07c
.org 0x38b14
	cmp r0, #2	@ 00038b14 0228
.org 0x38b16
	bne.n 0x38b26	@ 00038b16 06d1
.org 0x38b18
	adds r0, r1, #0	@ 00038b18 081c
.org 0x38b1a
	adds r0, #242	@ 00038b1a f230
.org 0x38b1c
	ldrb r0, [r0, #0]	@ 00038b1c 0078
.org 0x38b1e
	cmp r0, #1	@ 00038b1e 0128
.org 0x38b20
	bls.n 0x38b30	@ 00038b20 06d9
.org 0x38b22
	movs r0, #1	@ 00038b22 0120
.org 0x38b24
	b.n 0x38b32	@ 00038b24 05e0
.org 0x38b26
	adds r0, r1, #0	@ 00038b26 081c
.org 0x38b28
	adds r0, #242	@ 00038b28 f230
.org 0x38b2a
	ldrb r0, [r0, #0]	@ 00038b2a 0078
.org 0x38b2c
	cmp r0, #2	@ 00038b2c 0228
.org 0x38b2e
	beq.n 0x38b22	@ 00038b2e f8d0
.org 0x38b30
	movs r0, #0	@ 00038b30 0020
.org 0x38b32
	pop {r1}	@ 00038b32 02bc
.org 0x38b34
	bx r1	@ 00038b34 0847
