@ FUN_08036e14  entry 0x08036e14  size 26
.thumb
.org 0x36e14
FUN_08036e14:
	push {lr}	@ 00036e14 00b5
.org 0x36e16
	ldr r2, [pc, #24]	@ 00036e16 064a
.org 0x36e18
	movs r3, #128	@ 00036e18 8023
.org 0x36e1a
	lsls r3, r3, #1	@ 00036e1a 5b00
.org 0x36e1c
	adds r1, r0, r3	@ 00036e1c c118
.org 0x36e1e
	ldrb r1, [r1, #0]	@ 00036e1e 0978
.org 0x36e20
	lsls r1, r1, #2	@ 00036e20 8900
.org 0x36e22
	adds r1, r1, r2	@ 00036e22 8918
.org 0x36e24
	ldr r1, [r1, #0]	@ 00036e24 0968
.org 0x36e26
	bl 0x128f80	@ 00036e26 f2f0abf8
.org 0x36e2a
	pop {r0}	@ 00036e2a 01bc
.org 0x36e2c
	bx r0	@ 00036e2c 0047
