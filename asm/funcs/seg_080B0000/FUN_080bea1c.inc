@ FUN_080bea1c  entry 0x080bea1c  size 20
.thumb
.org 0xbea1c
FUN_080bea1c:
	push {lr}	@ 000bea1c 00b5
.org 0xbea1e
	ldr r2, [pc, #16]	@ 000bea1e 044a
.org 0xbea20
	ldrb r1, [r0, #13]	@ 000bea20 417b
.org 0xbea22
	lsls r1, r1, #2	@ 000bea22 8900
.org 0xbea24
	adds r1, r1, r2	@ 000bea24 8918
.org 0xbea26
	ldr r1, [r1, #0]	@ 000bea26 0968
.org 0xbea28
	bl 0x128f80	@ 000bea28 6af0aafa
.org 0xbea2c
	pop {r0}	@ 000bea2c 01bc
.org 0xbea2e
	bx r0	@ 000bea2e 0047
