@ FUN_080fad64  entry 0x080fad64  size 20
.thumb
.org 0xfad64
FUN_080fad64:
	push {lr}	@ 000fad64 00b5
.org 0xfad66
	ldr r2, [pc, #16]	@ 000fad66 044a
.org 0xfad68
	ldrb r1, [r0, #16]	@ 000fad68 017c
.org 0xfad6a
	lsls r1, r1, #2	@ 000fad6a 8900
.org 0xfad6c
	adds r1, r1, r2	@ 000fad6c 8918
.org 0xfad6e
	ldr r1, [r1, #0]	@ 000fad6e 0968
.org 0xfad70
	bl 0x128f80	@ 000fad70 2ef006f9
.org 0xfad74
	pop {r0}	@ 000fad74 01bc
.org 0xfad76
	bx r0	@ 000fad76 0047
