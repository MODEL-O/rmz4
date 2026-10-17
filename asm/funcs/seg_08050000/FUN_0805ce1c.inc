@ FUN_0805ce1c  entry 0x0805ce1c  size 20
.thumb
.org 0x5ce1c
FUN_0805ce1c:
	push {lr}	@ 0005ce1c 00b5
.org 0x5ce1e
	ldr r2, [pc, #16]	@ 0005ce1e 044a
.org 0x5ce20
	ldrb r1, [r0, #14]	@ 0005ce20 817b
.org 0x5ce22
	lsls r1, r1, #2	@ 0005ce22 8900
.org 0x5ce24
	adds r1, r1, r2	@ 0005ce24 8918
.org 0x5ce26
	ldr r1, [r1, #0]	@ 0005ce26 0968
.org 0x5ce28
	bl 0x128f80	@ 0005ce28 ccf0aaf8
.org 0x5ce2c
	pop {r0}	@ 0005ce2c 01bc
.org 0x5ce2e
	bx r0	@ 0005ce2e 0047
