@ FUN_0805ace4  entry 0x0805ace4  size 20
.thumb
.org 0x5ace4
FUN_0805ace4:
	push {lr}	@ 0005ace4 00b5
.org 0x5ace6
	ldr r2, [pc, #16]	@ 0005ace6 044a
.org 0x5ace8
	ldrb r1, [r0, #14]	@ 0005ace8 817b
.org 0x5acea
	lsls r1, r1, #2	@ 0005acea 8900
.org 0x5acec
	adds r1, r1, r2	@ 0005acec 8918
.org 0x5acee
	ldr r1, [r1, #0]	@ 0005acee 0968
.org 0x5acf0
	bl 0x128f80	@ 0005acf0 cef046f9
.org 0x5acf4
	pop {r0}	@ 0005acf4 01bc
.org 0x5acf6
	bx r0	@ 0005acf6 0047
