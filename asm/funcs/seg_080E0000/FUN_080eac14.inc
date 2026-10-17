@ FUN_080eac14  entry 0x080eac14  size 28
.thumb
.org 0xeac14
FUN_080eac14:
	push {r4, r5, r6, lr}	@ 000eac14 70b5
.org 0xeac16
	adds r5, r0, #0	@ 000eac16 051c
.org 0xeac18
	ldrb r0, [r5, #14]	@ 000eac18 a87b
.org 0xeac1a
	cmp r0, #4	@ 000eac1a 0428
.org 0xeac1c
	bls.n 0xeac20	@ 000eac1c 00d9
.org 0xeac1e
	b.n 0xeadf8	@ 000eac1e ebe0
.org 0xeac20
	lsls r0, r0, #2	@ 000eac20 8000
.org 0xeac22
	ldr r1, [pc, #8]	@ 000eac22 0249
.org 0xeac24
	adds r0, r0, r1	@ 000eac24 4018
.org 0xeac26
	ldr r0, [r0, #0]	@ 000eac26 0068
.org 0xeac28
	mov pc, r0	@ 000eac28 8746
.org 0xeac2a
	.byte 0x00	@ 000eac2a data
.org 0xeac2b
	.byte 0x00	@ 000eac2b data
.org 0xeac2c
	.byte 0x30,0xac,0x0e,0x08	@ 000eac2c data
