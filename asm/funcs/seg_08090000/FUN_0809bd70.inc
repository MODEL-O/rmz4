@ FUN_0809bd70  entry 0x0809bd70  size 20
.thumb
.org 0x9bd70
FUN_0809bd70:
	push {lr}	@ 0009bd70 00b5
.org 0x9bd72
	ldr r2, [pc, #16]	@ 0009bd72 044a
.org 0x9bd74
	ldrb r1, [r0, #13]	@ 0009bd74 417b
.org 0x9bd76
	lsls r1, r1, #2	@ 0009bd76 8900
.org 0x9bd78
	adds r1, r1, r2	@ 0009bd78 8918
.org 0x9bd7a
	ldr r1, [r1, #0]	@ 0009bd7a 0968
.org 0x9bd7c
	bl 0x128f80	@ 0009bd7c 8df000f9
.org 0x9bd80
	pop {r0}	@ 0009bd80 01bc
.org 0x9bd82
	bx r0	@ 0009bd82 0047
