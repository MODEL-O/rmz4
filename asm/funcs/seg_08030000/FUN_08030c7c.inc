@ FUN_08030c7c  entry 0x08030c7c  size 20
.thumb
.org 0x30c7c
FUN_08030c7c:
	push {lr}	@ 00030c7c 00b5
.org 0x30c7e
	ldr r2, [pc, #16]	@ 00030c7e 044a
.org 0x30c80
	ldrb r1, [r0, #15]	@ 00030c80 c17b
.org 0x30c82
	lsls r1, r1, #2	@ 00030c82 8900
.org 0x30c84
	adds r1, r1, r2	@ 00030c84 8918
.org 0x30c86
	ldr r1, [r1, #0]	@ 00030c86 0968
.org 0x30c88
	bl 0x128f80	@ 00030c88 f8f07af9
.org 0x30c8c
	pop {r0}	@ 00030c8c 01bc
.org 0x30c8e
	bx r0	@ 00030c8e 0047
