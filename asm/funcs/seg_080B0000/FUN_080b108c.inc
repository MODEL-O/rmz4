@ FUN_080b108c  entry 0x080b108c  size 28
.thumb
.org 0xb108c
FUN_080b108c:
	push {lr}	@ 000b108c 00b5
.org 0xb108e
	adds r1, r0, #0	@ 000b108e 011c
.org 0xb1090
	ldrb r0, [r1, #17]	@ 000b1090 487c
.org 0xb1092
	cmp r0, #0	@ 000b1092 0028
.org 0xb1094
	bne.n 0xb109e	@ 000b1094 03d1
.org 0xb1096
	adds r0, r1, #0	@ 000b1096 081c
.org 0xb1098
	bl 0xb1370	@ 000b1098 00f06af9
.org 0xb109c
	b.n 0xb10a4	@ 000b109c 02e0
.org 0xb109e
	adds r0, r1, #0	@ 000b109e 081c
.org 0xb10a0
	bl 0xb13e4	@ 000b10a0 00f0a0f9
.org 0xb10a4
	pop {r0}	@ 000b10a4 01bc
.org 0xb10a6
	bx r0	@ 000b10a6 0047
