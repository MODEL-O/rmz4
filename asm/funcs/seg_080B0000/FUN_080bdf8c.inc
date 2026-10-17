@ FUN_080bdf8c  entry 0x080bdf8c  size 20
.thumb
.org 0xbdf8c
FUN_080bdf8c:
	push {lr}	@ 000bdf8c 00b5
.org 0xbdf8e
	ldr r2, [pc, #16]	@ 000bdf8e 044a
.org 0xbdf90
	ldrb r1, [r0, #16]	@ 000bdf90 017c
.org 0xbdf92
	lsls r1, r1, #2	@ 000bdf92 8900
.org 0xbdf94
	adds r1, r1, r2	@ 000bdf94 8918
.org 0xbdf96
	ldr r1, [r1, #0]	@ 000bdf96 0968
.org 0xbdf98
	bl 0x128f80	@ 000bdf98 6af0f2ff
.org 0xbdf9c
	pop {r0}	@ 000bdf9c 01bc
.org 0xbdf9e
	bx r0	@ 000bdf9e 0047
