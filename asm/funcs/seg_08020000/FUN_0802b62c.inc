@ FUN_0802b62c  entry 0x0802b62c  size 12
.thumb
.org 0x2b62c
FUN_0802b62c:
	ldr r1, [pc, #8]	@ 0002b62c 0249
.org 0x2b62e
	adds r0, #241	@ 0002b62e f130
.org 0x2b630
	ldrb r0, [r0, #0]	@ 0002b630 0078
.org 0x2b632
	adds r0, r0, r1	@ 0002b632 4018
.org 0x2b634
	ldrb r0, [r0, #0]	@ 0002b634 0078
.org 0x2b636
	bx lr	@ 0002b636 7047
