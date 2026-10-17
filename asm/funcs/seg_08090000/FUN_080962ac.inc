@ FUN_080962ac  entry 0x080962ac  size 20
.thumb
.org 0x962ac
FUN_080962ac:
	push {lr}	@ 000962ac 00b5
.org 0x962ae
	ldr r2, [pc, #16]	@ 000962ae 044a
.org 0x962b0
	ldrb r1, [r0, #16]	@ 000962b0 017c
.org 0x962b2
	lsls r1, r1, #2	@ 000962b2 8900
.org 0x962b4
	adds r1, r1, r2	@ 000962b4 8918
.org 0x962b6
	ldr r1, [r1, #0]	@ 000962b6 0968
.org 0x962b8
	bl 0x128f80	@ 000962b8 92f062fe
.org 0x962bc
	pop {r0}	@ 000962bc 01bc
.org 0x962be
	bx r0	@ 000962be 0047
