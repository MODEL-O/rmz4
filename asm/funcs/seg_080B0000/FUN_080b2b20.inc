@ FUN_080b2b20  entry 0x080b2b20  size 24
.thumb
.org 0xb2b20
FUN_080b2b20:
	push {lr}	@ 000b2b20 00b5
.org 0xb2b22
	adds r1, r0, #0	@ 000b2b22 011c
.org 0xb2b24
	ldrb r0, [r1, #18]	@ 000b2b24 887c
.org 0xb2b26
	cmp r0, #0	@ 000b2b26 0028
.org 0xb2b28
	beq.n 0xb2b32	@ 000b2b28 03d0
.org 0xb2b2a
	subs r0, #1	@ 000b2b2a 0138
.org 0xb2b2c
	strb r0, [r1, #18]	@ 000b2b2c 8874
.org 0xb2b2e
	movs r0, #0	@ 000b2b2e 0020
.org 0xb2b30
	b.n 0xb2b34	@ 000b2b30 00e0
.org 0xb2b32
	movs r0, #1	@ 000b2b32 0120
.org 0xb2b34
	pop {r1}	@ 000b2b34 02bc
.org 0xb2b36
	bx r1	@ 000b2b36 0847
