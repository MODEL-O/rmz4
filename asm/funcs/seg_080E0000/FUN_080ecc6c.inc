@ FUN_080ecc6c  entry 0x080ecc6c  size 26
.thumb
.org 0xecc6c
FUN_080ecc6c:
	push {r4, lr}	@ 000ecc6c 10b5
.org 0xecc6e
	adds r4, r0, #0	@ 000ecc6e 041c
.org 0xecc70
	ldrb r0, [r4, #13]	@ 000ecc70 607b
.org 0xecc72
	cmp r0, #7	@ 000ecc72 0728
.org 0xecc74
	bhi.n 0xecd48	@ 000ecc74 68d8
.org 0xecc76
	lsls r0, r0, #2	@ 000ecc76 8000
.org 0xecc78
	ldr r1, [pc, #4]	@ 000ecc78 0149
.org 0xecc7a
	adds r0, r0, r1	@ 000ecc7a 4018
.org 0xecc7c
	ldr r0, [r0, #0]	@ 000ecc7c 0068
.org 0xecc7e
	mov pc, r0	@ 000ecc7e 8746
.org 0xecc80
	.byte 0x84,0xcc,0x0e,0x08	@ 000ecc80 data
.org 0xecc84
	.byte 0xb2,0xcc,0x0e,0x08	@ 000ecc84 data
