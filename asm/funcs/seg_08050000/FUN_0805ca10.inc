@ FUN_0805ca10  entry 0x0805ca10  size 20
.thumb
.org 0x5ca10
FUN_0805ca10:
	push {lr}	@ 0005ca10 00b5
.org 0x5ca12
	ldr r2, [pc, #16]	@ 0005ca12 044a
.org 0x5ca14
	ldrb r1, [r0, #14]	@ 0005ca14 817b
.org 0x5ca16
	lsls r1, r1, #2	@ 0005ca16 8900
.org 0x5ca18
	adds r1, r1, r2	@ 0005ca18 8918
.org 0x5ca1a
	ldr r1, [r1, #0]	@ 0005ca1a 0968
.org 0x5ca1c
	bl 0x128f80	@ 0005ca1c ccf0b0fa
.org 0x5ca20
	pop {r0}	@ 0005ca20 01bc
.org 0x5ca22
	bx r0	@ 0005ca22 0047
