@ FUN_08087d64  entry 0x08087d64  size 20
.thumb
.org 0x87d64
FUN_08087d64:
	push {lr}	@ 00087d64 00b5
.org 0x87d66
	ldr r2, [pc, #16]	@ 00087d66 044a
.org 0x87d68
	ldrb r1, [r0, #14]	@ 00087d68 817b
.org 0x87d6a
	lsls r1, r1, #2	@ 00087d6a 8900
.org 0x87d6c
	adds r1, r1, r2	@ 00087d6c 8918
.org 0x87d6e
	ldr r1, [r1, #0]	@ 00087d6e 0968
.org 0x87d70
	bl 0x128f80	@ 00087d70 a1f006f9
.org 0x87d74
	pop {r0}	@ 00087d74 01bc
.org 0x87d76
	bx r0	@ 00087d76 0047
