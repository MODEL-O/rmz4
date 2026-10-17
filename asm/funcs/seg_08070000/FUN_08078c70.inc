@ FUN_08078c70  entry 0x08078c70  size 30
.thumb
.org 0x78c70
FUN_08078c70:
	push {r4, lr}	@ 00078c70 10b5
.org 0x78c72
	adds r4, r0, #0	@ 00078c72 041c
.org 0x78c74
	bl 0x79270	@ 00078c74 00f0fcfa
.org 0x78c78
	ldr r1, [pc, #20]	@ 00078c78 0549
.org 0x78c7a
	ldrb r0, [r4, #13]	@ 00078c7a 607b
.org 0x78c7c
	lsls r0, r0, #2	@ 00078c7c 8000
.org 0x78c7e
	adds r0, r0, r1	@ 00078c7e 4018
.org 0x78c80
	ldr r1, [r0, #0]	@ 00078c80 0168
.org 0x78c82
	adds r0, r4, #0	@ 00078c82 201c
.org 0x78c84
	bl 0x128f80	@ 00078c84 b0f07cf9
.org 0x78c88
	pop {r4}	@ 00078c88 10bc
.org 0x78c8a
	pop {r0}	@ 00078c8a 01bc
.org 0x78c8c
	bx r0	@ 00078c8c 0047
