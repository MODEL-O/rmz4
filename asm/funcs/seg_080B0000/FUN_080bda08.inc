@ FUN_080bda08  entry 0x080bda08  size 20
.thumb
.org 0xbda08
FUN_080bda08:
	push {lr}	@ 000bda08 00b5
.org 0xbda0a
	ldr r2, [pc, #16]	@ 000bda0a 044a
.org 0xbda0c
	ldrb r1, [r0, #16]	@ 000bda0c 017c
.org 0xbda0e
	lsls r1, r1, #2	@ 000bda0e 8900
.org 0xbda10
	adds r1, r1, r2	@ 000bda10 8918
.org 0xbda12
	ldr r1, [r1, #0]	@ 000bda12 0968
.org 0xbda14
	bl 0x128f80	@ 000bda14 6bf0b4fa
.org 0xbda18
	pop {r0}	@ 000bda18 01bc
.org 0xbda1a
	bx r0	@ 000bda1a 0047
