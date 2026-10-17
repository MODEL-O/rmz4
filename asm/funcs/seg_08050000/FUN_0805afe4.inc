@ FUN_0805afe4  entry 0x0805afe4  size 20
.thumb
.org 0x5afe4
FUN_0805afe4:
	push {lr}	@ 0005afe4 00b5
.org 0x5afe6
	ldr r2, [pc, #16]	@ 0005afe6 044a
.org 0x5afe8
	ldrb r1, [r0, #14]	@ 0005afe8 817b
.org 0x5afea
	lsls r1, r1, #2	@ 0005afea 8900
.org 0x5afec
	adds r1, r1, r2	@ 0005afec 8918
.org 0x5afee
	ldr r1, [r1, #0]	@ 0005afee 0968
.org 0x5aff0
	bl 0x128f80	@ 0005aff0 cdf0c6ff
.org 0x5aff4
	pop {r0}	@ 0005aff4 01bc
.org 0x5aff6
	bx r0	@ 0005aff6 0047
