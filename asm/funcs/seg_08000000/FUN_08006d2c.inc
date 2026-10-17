@ FUN_08006d2c  entry 0x08006d2c  size 12
.thumb
.org 0x6d2c
FUN_08006d2c:
	push {lr}	@ 00006d2c 00b5
.org 0x6d2e
	ldr r1, [pc, #8]	@ 00006d2e 0249
.org 0x6d30
	bl 0x33d4	@ 00006d30 fcf750fb
.org 0x6d34
	pop {r0}	@ 00006d34 01bc
.org 0x6d36
	bx r0	@ 00006d36 0047
