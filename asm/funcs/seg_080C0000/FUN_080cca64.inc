@ FUN_080cca64  entry 0x080cca64  size 32
.thumb
.org 0xcca64
FUN_080cca64:
	push {r4, lr}	@ 000cca64 10b5
.org 0xcca66
	adds r4, r0, #0	@ 000cca66 041c
.org 0xcca68
	ldr r1, [pc, #24]	@ 000cca68 0649
.org 0xcca6a
	ldrb r0, [r4, #16]	@ 000cca6a 207c
.org 0xcca6c
	lsls r0, r0, #2	@ 000cca6c 8000
.org 0xcca6e
	adds r0, r0, r1	@ 000cca6e 4018
.org 0xcca70
	ldr r1, [r0, #0]	@ 000cca70 0168
.org 0xcca72
	adds r0, r4, #0	@ 000cca72 201c
.org 0xcca74
	bl 0x128f80	@ 000cca74 5cf084fa
.org 0xcca78
	adds r0, r4, #0	@ 000cca78 201c
.org 0xcca7a
	bl 0x1cff0	@ 000cca7a 50f7b9fa
.org 0xcca7e
	pop {r4}	@ 000cca7e 10bc
.org 0xcca80
	pop {r0}	@ 000cca80 01bc
.org 0xcca82
	bx r0	@ 000cca82 0047
