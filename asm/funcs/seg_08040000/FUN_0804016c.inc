@ FUN_0804016c  entry 0x0804016c  size 20
.thumb
.org 0x4016c
FUN_0804016c:
	push {lr}	@ 0004016c 00b5
.org 0x4016e
	ldr r2, [pc, #16]	@ 0004016e 044a
.org 0x40170
	ldrb r1, [r0, #16]	@ 00040170 017c
.org 0x40172
	lsls r1, r1, #2	@ 00040172 8900
.org 0x40174
	adds r1, r1, r2	@ 00040174 8918
.org 0x40176
	ldr r1, [r1, #0]	@ 00040176 0968
.org 0x40178
	bl 0x128f80	@ 00040178 e8f002ff
.org 0x4017c
	pop {r0}	@ 0004017c 01bc
.org 0x4017e
	bx r0	@ 0004017e 0047
