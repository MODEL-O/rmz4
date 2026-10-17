@ FUN_080a5a70  entry 0x080a5a70  size 20
.thumb
.org 0xa5a70
FUN_080a5a70:
	push {lr}	@ 000a5a70 00b5
.org 0xa5a72
	ldr r2, [pc, #16]	@ 000a5a72 044a
.org 0xa5a74
	ldrb r1, [r0, #16]	@ 000a5a74 017c
.org 0xa5a76
	lsls r1, r1, #2	@ 000a5a76 8900
.org 0xa5a78
	adds r1, r1, r2	@ 000a5a78 8918
.org 0xa5a7a
	ldr r1, [r1, #0]	@ 000a5a7a 0968
.org 0xa5a7c
	bl 0x128f80	@ 000a5a7c 83f080fa
.org 0xa5a80
	pop {r0}	@ 000a5a80 01bc
.org 0xa5a82
	bx r0	@ 000a5a82 0047
