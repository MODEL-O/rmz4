@ FUN_080e1000  entry 0x080e1000  size 30
.thumb
.org 0xe1000
FUN_080e1000:
	push {lr}	@ 000e1000 00b5
.org 0xe1002
	adds r2, r0, #0	@ 000e1002 021c
.org 0xe1004
	ldr r0, [pc, #24]	@ 000e1004 0648
.org 0xe1006
	adds r1, r0, #0	@ 000e1006 011c
.org 0xe1008
	adds r1, #38	@ 000e1008 2631
.org 0xe100a
	ldrb r0, [r1, #0]	@ 000e100a 0878
.org 0xe100c
	cmp r0, #0	@ 000e100c 0028
.org 0xe100e
	beq.n 0xe1014	@ 000e100e 01d0
.org 0xe1010
	adds r0, #255	@ 000e1010 ff30
.org 0xe1012
	strb r0, [r1, #0]	@ 000e1012 0870
.org 0xe1014
	adds r0, r2, #0	@ 000e1014 101c
.org 0xe1016
	bl 0xd0c30	@ 000e1016 eff70bfe
.org 0xe101a
	pop {r0}	@ 000e101a 01bc
.org 0xe101c
	bx r0	@ 000e101c 0047
