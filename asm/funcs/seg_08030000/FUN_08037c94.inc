@ FUN_08037c94  entry 0x08037c94  size 24
.thumb
.org 0x37c94
FUN_08037c94:
	push {lr}	@ 00037c94 00b5
.org 0x37c96
	ldr r2, [pc, #20]	@ 00037c96 054a
.org 0x37c98
	ldr r3, [pc, #20]	@ 00037c98 054b
.org 0x37c9a
	adds r1, r0, r3	@ 00037c9a c118
.org 0x37c9c
	ldrb r1, [r1, #0]	@ 00037c9c 0978
.org 0x37c9e
	lsls r1, r1, #2	@ 00037c9e 8900
.org 0x37ca0
	adds r1, r1, r2	@ 00037ca0 8918
.org 0x37ca2
	ldr r1, [r1, #0]	@ 00037ca2 0968
.org 0x37ca4
	bl 0x128f80	@ 00037ca4 f1f06cf9
.org 0x37ca8
	pop {r0}	@ 00037ca8 01bc
.org 0x37caa
	bx r0	@ 00037caa 0047
