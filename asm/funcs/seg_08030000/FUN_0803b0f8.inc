@ FUN_0803b0f8  entry 0x0803b0f8  size 28
.thumb
.org 0x3b0f8
FUN_0803b0f8:
	push {lr}	@ 0003b0f8 00b5
.org 0x3b0fa
	adds r2, r0, #0	@ 0003b0fa 021c
.org 0x3b0fc
	ldrb r0, [r2, #17]	@ 0003b0fc 507c
.org 0x3b0fe
	cmp r0, #0	@ 0003b0fe 0028
.org 0x3b100
	beq.n 0x3b10e	@ 0003b100 05d0
.org 0x3b102
	ldr r0, [r2, #84]	@ 0003b102 506d
.org 0x3b104
	str r0, [r1, #0]	@ 0003b104 0860
.org 0x3b106
	ldr r0, [r2, #88]	@ 0003b106 906d
.org 0x3b108
	str r0, [r1, #4]	@ 0003b108 4860
.org 0x3b10a
	movs r0, #1	@ 0003b10a 0120
.org 0x3b10c
	b.n 0x3b110	@ 0003b10c 00e0
.org 0x3b10e
	movs r0, #0	@ 0003b10e 0020
.org 0x3b110
	pop {r1}	@ 0003b110 02bc
.org 0x3b112
	bx r1	@ 0003b112 0847
