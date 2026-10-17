@ FUN_080b05b4  entry 0x080b05b4  size 22
.thumb
.org 0xb05b4
FUN_080b05b4:
	push {lr}	@ 000b05b4 00b5
.org 0xb05b6
	ldrb r2, [r0, #16]	@ 000b05b6 027c
.org 0xb05b8
	cmp r2, #0	@ 000b05b8 002a
.org 0xb05ba
	bne.n 0xb05c2	@ 000b05ba 02d1
.org 0xb05bc
	adds r1, r0, #0	@ 000b05bc 011c
.org 0xb05be
	adds r1, #183	@ 000b05be b731
.org 0xb05c0
	strb r2, [r1, #0]	@ 000b05c0 0a70
.org 0xb05c2
	bl 0x7f8ec	@ 000b05c2 cff793f9
.org 0xb05c6
	pop {r0}	@ 000b05c6 01bc
.org 0xb05c8
	bx r0	@ 000b05c8 0047
