@ FUN_08038a48  entry 0x08038a48  size 46
.thumb
.org 0x38a48
FUN_08038a48:
	push {lr}	@ 00038a48 00b5
.org 0x38a4a
	adds r1, r0, #0	@ 00038a4a 011c
.org 0x38a4c
	adds r0, #180	@ 00038a4c b430
.org 0x38a4e
	ldrb r0, [r0, #19]	@ 00038a4e c07c
.org 0x38a50
	cmp r0, #3	@ 00038a50 0328
.org 0x38a52
	beq.n 0x38a62	@ 00038a52 06d0
.org 0x38a54
	cmp r0, #2	@ 00038a54 0228
.org 0x38a56
	bne.n 0x38a66	@ 00038a56 06d1
.org 0x38a58
	adds r0, r1, #0	@ 00038a58 081c
.org 0x38a5a
	adds r0, #242	@ 00038a5a f230
.org 0x38a5c
	ldrb r0, [r0, #0]	@ 00038a5c 0078
.org 0x38a5e
	cmp r0, #5	@ 00038a5e 0528
.org 0x38a60
	bls.n 0x38a70	@ 00038a60 06d9
.org 0x38a62
	movs r0, #1	@ 00038a62 0120
.org 0x38a64
	b.n 0x38a72	@ 00038a64 05e0
.org 0x38a66
	adds r0, r1, #0	@ 00038a66 081c
.org 0x38a68
	adds r0, #242	@ 00038a68 f230
.org 0x38a6a
	ldrb r0, [r0, #0]	@ 00038a6a 0078
.org 0x38a6c
	cmp r0, #6	@ 00038a6c 0628
.org 0x38a6e
	beq.n 0x38a62	@ 00038a6e f8d0
.org 0x38a70
	movs r0, #0	@ 00038a70 0020
.org 0x38a72
	pop {r1}	@ 00038a72 02bc
.org 0x38a74
	bx r1	@ 00038a74 0847
