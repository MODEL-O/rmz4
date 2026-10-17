@ FUN_080cef3c  entry 0x080cef3c  size 20
.thumb
.org 0xcef3c
FUN_080cef3c:
	push {lr}	@ 000cef3c 00b5
.org 0xcef3e
	ldr r2, [pc, #16]	@ 000cef3e 044a
.org 0xcef40
	ldrb r1, [r0, #16]	@ 000cef40 017c
.org 0xcef42
	lsls r1, r1, #2	@ 000cef42 8900
.org 0xcef44
	adds r1, r1, r2	@ 000cef44 8918
.org 0xcef46
	ldr r1, [r1, #0]	@ 000cef46 0968
.org 0xcef48
	bl 0x128f80	@ 000cef48 5af01af8
.org 0xcef4c
	pop {r0}	@ 000cef4c 01bc
.org 0xcef4e
	bx r0	@ 000cef4e 0047
