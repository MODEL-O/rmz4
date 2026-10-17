@ FUN_08036e34  entry 0x08036e34  size 20
.thumb
.org 0x36e34
FUN_08036e34:
	push {lr}	@ 00036e34 00b5
.org 0x36e36
	movs r1, #128	@ 00036e36 8021
.org 0x36e38
	lsls r1, r1, #1	@ 00036e38 4900
.org 0x36e3a
	adds r2, r0, r1	@ 00036e3a 4218
.org 0x36e3c
	movs r1, #1	@ 00036e3c 0121
.org 0x36e3e
	strb r1, [r2, #0]	@ 00036e3e 1170
.org 0x36e40
	bl 0x36e48	@ 00036e40 00f002f8
.org 0x36e44
	pop {r0}	@ 00036e44 01bc
.org 0x36e46
	bx r0	@ 00036e46 0047
