@ FUN_080c1bd8  entry 0x080c1bd8  size 20
.thumb
.org 0xc1bd8
FUN_080c1bd8:
	push {lr}	@ 000c1bd8 00b5
.org 0xc1bda
	ldr r2, [pc, #16]	@ 000c1bda 044a
.org 0xc1bdc
	ldrb r1, [r0, #16]	@ 000c1bdc 017c
.org 0xc1bde
	lsls r1, r1, #2	@ 000c1bde 8900
.org 0xc1be0
	adds r1, r1, r2	@ 000c1be0 8918
.org 0xc1be2
	ldr r1, [r1, #0]	@ 000c1be2 0968
.org 0xc1be4
	bl 0x128f80	@ 000c1be4 67f0ccf9
.org 0xc1be8
	pop {r0}	@ 000c1be8 01bc
.org 0xc1bea
	bx r0	@ 000c1bea 0047
