@ FUN_080a2cd8  entry 0x080a2cd8  size 30
.thumb
.org 0xa2cd8
FUN_080a2cd8:
	push {lr}	@ 000a2cd8 00b5
.org 0xa2cda
	adds r2, r0, #0	@ 000a2cda 021c
.org 0xa2cdc
	ldr r0, [pc, #24]	@ 000a2cdc 0648
.org 0xa2cde
	adds r1, r0, #0	@ 000a2cde 011c
.org 0xa2ce0
	adds r1, #38	@ 000a2ce0 2631
.org 0xa2ce2
	ldrb r0, [r1, #0]	@ 000a2ce2 0878
.org 0xa2ce4
	cmp r0, #0	@ 000a2ce4 0028
.org 0xa2ce6
	beq.n 0xa2cec	@ 000a2ce6 01d0
.org 0xa2ce8
	adds r0, #255	@ 000a2ce8 ff30
.org 0xa2cea
	strb r0, [r1, #0]	@ 000a2cea 0870
.org 0xa2cec
	adds r0, r2, #0	@ 000a2cec 101c
.org 0xa2cee
	bl 0x7f8ec	@ 000a2cee dcf7fdfd
.org 0xa2cf2
	pop {r0}	@ 000a2cf2 01bc
.org 0xa2cf4
	bx r0	@ 000a2cf4 0047
