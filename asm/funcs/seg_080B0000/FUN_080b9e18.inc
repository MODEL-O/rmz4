@ FUN_080b9e18  entry 0x080b9e18  size 24
.thumb
.org 0xb9e18
FUN_080b9e18:
	push {lr}	@ 000b9e18 00b5
.org 0xb9e1a
	adds r1, r0, #0	@ 000b9e1a 011c
.org 0xb9e1c
	ldrb r0, [r1, #19]	@ 000b9e1c c87c
.org 0xb9e1e
	cmp r0, #0	@ 000b9e1e 0028
.org 0xb9e20
	beq.n 0xb9e2a	@ 000b9e20 03d0
.org 0xb9e22
	subs r0, #1	@ 000b9e22 0138
.org 0xb9e24
	strb r0, [r1, #19]	@ 000b9e24 c874
.org 0xb9e26
	movs r0, #0	@ 000b9e26 0020
.org 0xb9e28
	b.n 0xb9e2c	@ 000b9e28 00e0
.org 0xb9e2a
	movs r0, #1	@ 000b9e2a 0120
.org 0xb9e2c
	pop {r1}	@ 000b9e2c 02bc
.org 0xb9e2e
	bx r1	@ 000b9e2e 0847
