@ FUN_080efd48  entry 0x080efd48  size 34
.thumb
.org 0xefd48
FUN_080efd48:
	push {r4, r5, lr}	@ 000efd48 30b5
.org 0xefd4a
	adds r4, r0, #0	@ 000efd4a 041c
.org 0xefd4c
	ldrb r0, [r4, #17]	@ 000efd4c 607c
.org 0xefd4e
	cmp r0, #15	@ 000efd4e 0f28
.org 0xefd50
	bls.n 0xefd54	@ 000efd50 00d9
.org 0xefd52
	b.n 0xeff94	@ 000efd52 1fe1
.org 0xefd54
	lsls r0, r0, #2	@ 000efd54 8000
.org 0xefd56
	ldr r1, [pc, #8]	@ 000efd56 0249
.org 0xefd58
	adds r0, r0, r1	@ 000efd58 4018
.org 0xefd5a
	ldr r0, [r0, #0]	@ 000efd5a 0068
.org 0xefd5c
	mov pc, r0	@ 000efd5c 8746
.org 0xefd5e
	.byte 0x00	@ 000efd5e data
.org 0xefd5f
	.byte 0x00	@ 000efd5f data
.org 0xefd60
	.byte 0x64,0xfd,0x0e,0x08	@ 000efd60 data
.org 0xefd64
	.byte 0xa4,0xfd,0x0e,0x08	@ 000efd64 data
.org 0xefd68
	.byte 0xe0,0xfd,0x0e,0x08	@ 000efd68 data
