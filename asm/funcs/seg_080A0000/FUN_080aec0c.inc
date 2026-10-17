@ FUN_080aec0c  entry 0x080aec0c  size 46
.thumb
.org 0xaec0c
FUN_080aec0c:
	push {r4, lr}	@ 000aec0c 10b5
.org 0xaec0e
	adds r4, r0, #0	@ 000aec0e 041c
.org 0xaec10
	ldrb r0, [r4, #14]	@ 000aec10 a07b
.org 0xaec12
	cmp r0, #0	@ 000aec12 0028
.org 0xaec14
	bne.n 0xaec1a	@ 000aec14 01d1
.org 0xaec16
	adds r0, #1	@ 000aec16 0130
.org 0xaec18
	strb r0, [r4, #14]	@ 000aec18 a073
.org 0xaec1a
	adds r0, r4, #0	@ 000aec1a 201c
.org 0xaec1c
	bl 0x1cff0	@ 000aec1c 6ef7e8f9
.org 0xaec20
	adds r0, r4, #0	@ 000aec20 201c
.org 0xaec22
	adds r0, #115	@ 000aec22 7330
.org 0xaec24
	ldrb r0, [r0, #0]	@ 000aec24 0078
.org 0xaec26
	cmp r0, #4	@ 000aec26 0428
.org 0xaec28
	bne.n 0xaec34	@ 000aec28 04d1
.org 0xaec2a
	ldrb r0, [r4, #13]	@ 000aec2a 607b
.org 0xaec2c
	adds r0, #1	@ 000aec2c 0130
.org 0xaec2e
	movs r1, #0	@ 000aec2e 0021
.org 0xaec30
	strb r0, [r4, #13]	@ 000aec30 6073
.org 0xaec32
	strb r1, [r4, #14]	@ 000aec32 a173
.org 0xaec34
	pop {r4}	@ 000aec34 10bc
.org 0xaec36
	pop {r0}	@ 000aec36 01bc
.org 0xaec38
	bx r0	@ 000aec38 0047
