@ FUN_0805a8ac  entry 0x0805a8ac  size 20
.thumb
.org 0x5a8ac
FUN_0805a8ac:
	push {lr}	@ 0005a8ac 00b5
.org 0x5a8ae
	ldr r2, [pc, #16]	@ 0005a8ae 044a
.org 0x5a8b0
	ldrb r1, [r0, #14]	@ 0005a8b0 817b
.org 0x5a8b2
	lsls r1, r1, #2	@ 0005a8b2 8900
.org 0x5a8b4
	adds r1, r1, r2	@ 0005a8b4 8918
.org 0x5a8b6
	ldr r1, [r1, #0]	@ 0005a8b6 0968
.org 0x5a8b8
	bl 0x128f80	@ 0005a8b8 cef062fb
.org 0x5a8bc
	pop {r0}	@ 0005a8bc 01bc
.org 0x5a8be
	bx r0	@ 0005a8be 0047
