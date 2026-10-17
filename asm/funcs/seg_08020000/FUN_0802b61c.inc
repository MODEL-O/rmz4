@ FUN_0802b61c  entry 0x0802b61c  size 12
.thumb
.org 0x2b61c
FUN_0802b61c:
	ldr r1, [pc, #8]	@ 0002b61c 0249
.org 0x2b61e
	adds r0, #241	@ 0002b61e f130
.org 0x2b620
	ldrb r0, [r0, #0]	@ 0002b620 0078
.org 0x2b622
	adds r0, r0, r1	@ 0002b622 4018
.org 0x2b624
	ldrb r0, [r0, #0]	@ 0002b624 0078
.org 0x2b626
	bx lr	@ 0002b626 7047
