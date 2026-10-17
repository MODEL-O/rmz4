@ FUN_080f9d88  entry 0x080f9d88  size 30
.thumb
.org 0xf9d88
FUN_080f9d88:
	push {lr}	@ 000f9d88 00b5
.org 0xf9d8a
	adds r2, r0, #0	@ 000f9d8a 021c
.org 0xf9d8c
	ldr r0, [pc, #24]	@ 000f9d8c 0648
.org 0xf9d8e
	adds r1, r0, #0	@ 000f9d8e 011c
.org 0xf9d90
	adds r1, #38	@ 000f9d90 2631
.org 0xf9d92
	ldrb r0, [r1, #0]	@ 000f9d92 0878
.org 0xf9d94
	cmp r0, #0	@ 000f9d94 0028
.org 0xf9d96
	beq.n 0xf9d9c	@ 000f9d96 01d0
.org 0xf9d98
	adds r0, #255	@ 000f9d98 ff30
.org 0xf9d9a
	strb r0, [r1, #0]	@ 000f9d9a 0870
.org 0xf9d9c
	adds r0, r2, #0	@ 000f9d9c 101c
.org 0xf9d9e
	bl 0xe954c	@ 000f9d9e eff7d5fb
.org 0xf9da2
	pop {r0}	@ 000f9da2 01bc
.org 0xf9da4
	bx r0	@ 000f9da4 0047
