@ FUN_0806dc68  entry 0x0806dc68  size 28
.thumb
.org 0x6dc68
FUN_0806dc68:
	push {r4, r5, r6, lr}	@ 0006dc68 70b5
.org 0x6dc6a
	adds r6, r0, #0	@ 0006dc6a 061c
.org 0x6dc6c
	ldrb r0, [r6, #15]	@ 0006dc6c f07b
.org 0x6dc6e
	cmp r0, #5	@ 0006dc6e 0528
.org 0x6dc70
	bls.n 0x6dc74	@ 0006dc70 00d9
.org 0x6dc72
	b.n 0x6ddc0	@ 0006dc72 a5e0
.org 0x6dc74
	lsls r0, r0, #2	@ 0006dc74 8000
.org 0x6dc76
	ldr r1, [pc, #8]	@ 0006dc76 0249
.org 0x6dc78
	adds r0, r0, r1	@ 0006dc78 4018
.org 0x6dc7a
	ldr r0, [r0, #0]	@ 0006dc7a 0068
.org 0x6dc7c
	mov pc, r0	@ 0006dc7c 8746
.org 0x6dc7e
	.byte 0x00	@ 0006dc7e data
.org 0x6dc7f
	.byte 0x00	@ 0006dc7f data
.org 0x6dc80
	.byte 0x84,0xdc,0x06,0x08	@ 0006dc80 data
