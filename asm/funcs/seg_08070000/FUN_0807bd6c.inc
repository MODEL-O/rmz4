@ FUN_0807bd6c  entry 0x0807bd6c  size 20
.thumb
.org 0x7bd6c
FUN_0807bd6c:
	push {lr}	@ 0007bd6c 00b5
.org 0x7bd6e
	ldr r2, [pc, #16]	@ 0007bd6e 044a
.org 0x7bd70
	ldrb r1, [r0, #14]	@ 0007bd70 817b
.org 0x7bd72
	lsls r1, r1, #2	@ 0007bd72 8900
.org 0x7bd74
	adds r1, r1, r2	@ 0007bd74 8918
.org 0x7bd76
	ldr r1, [r1, #0]	@ 0007bd76 0968
.org 0x7bd78
	bl 0x128f80	@ 0007bd78 adf002f9
.org 0x7bd7c
	pop {r0}	@ 0007bd7c 01bc
.org 0x7bd7e
	bx r0	@ 0007bd7e 0047
