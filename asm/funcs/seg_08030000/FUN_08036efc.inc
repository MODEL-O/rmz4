@ FUN_08036efc  entry 0x08036efc  size 26
.thumb
.org 0x36efc
FUN_08036efc:
	push {lr}	@ 00036efc 00b5
.org 0x36efe
	ldr r2, [pc, #24]	@ 00036efe 064a
.org 0x36f00
	movs r3, #162	@ 00036f00 a223
.org 0x36f02
	lsls r3, r3, #1	@ 00036f02 5b00
.org 0x36f04
	adds r1, r0, r3	@ 00036f04 c118
.org 0x36f06
	ldrb r1, [r1, #0]	@ 00036f06 0978
.org 0x36f08
	lsls r1, r1, #2	@ 00036f08 8900
.org 0x36f0a
	adds r1, r1, r2	@ 00036f0a 8918
.org 0x36f0c
	ldr r1, [r1, #0]	@ 00036f0c 0968
.org 0x36f0e
	bl 0x128f80	@ 00036f0e f2f037f8
.org 0x36f12
	pop {r0}	@ 00036f12 01bc
.org 0x36f14
	bx r0	@ 00036f14 0047
