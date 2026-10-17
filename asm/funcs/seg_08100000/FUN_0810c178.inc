@ FUN_0810c178  entry 0x0810c178  size 20
.thumb
.org 0x10c178
FUN_0810c178:
	push {lr}	@ 0010c178 00b5
.org 0x10c17a
	ldr r2, [pc, #16]	@ 0010c17a 044a
.org 0x10c17c
	ldrb r1, [r0, #16]	@ 0010c17c 017c
.org 0x10c17e
	lsls r1, r1, #2	@ 0010c17e 8900
.org 0x10c180
	adds r1, r1, r2	@ 0010c180 8918
.org 0x10c182
	ldr r1, [r1, #0]	@ 0010c182 0968
.org 0x10c184
	bl 0x128f80	@ 0010c184 1cf0fcfe
.org 0x10c188
	pop {r0}	@ 0010c188 01bc
.org 0x10c18a
	bx r0	@ 0010c18a 0047
