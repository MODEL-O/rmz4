@ FUN_08100d68  entry 0x08100d68  size 28
.thumb
.org 0x100d68
FUN_08100d68:
	push {r4, r5, r6, lr}	@ 00100d68 70b5
.org 0x100d6a
	adds r6, r0, #0	@ 00100d6a 061c
.org 0x100d6c
	ldrb r0, [r6, #14]	@ 00100d6c b07b
.org 0x100d6e
	cmp r0, #4	@ 00100d6e 0428
.org 0x100d70
	bls.n 0x100d74	@ 00100d70 00d9
.org 0x100d72
	b.n 0x100f48	@ 00100d72 e9e0
.org 0x100d74
	lsls r0, r0, #2	@ 00100d74 8000
.org 0x100d76
	ldr r1, [pc, #8]	@ 00100d76 0249
.org 0x100d78
	adds r0, r0, r1	@ 00100d78 4018
.org 0x100d7a
	ldr r0, [r0, #0]	@ 00100d7a 0068
.org 0x100d7c
	mov pc, r0	@ 00100d7c 8746
.org 0x100d7e
	.byte 0x00	@ 00100d7e data
.org 0x100d7f
	.byte 0x00	@ 00100d7f data
.org 0x100d80
	.byte 0x84,0x0d,0x10,0x08	@ 00100d80 data
