@ FUN_080bf8f4  entry 0x080bf8f4  size 20
.thumb
.org 0xbf8f4
FUN_080bf8f4:
	push {lr}	@ 000bf8f4 00b5
.org 0xbf8f6
	ldr r2, [pc, #16]	@ 000bf8f6 044a
.org 0xbf8f8
	ldrb r1, [r0, #13]	@ 000bf8f8 417b
.org 0xbf8fa
	lsls r1, r1, #2	@ 000bf8fa 8900
.org 0xbf8fc
	adds r1, r1, r2	@ 000bf8fc 8918
.org 0xbf8fe
	ldr r1, [r1, #0]	@ 000bf8fe 0968
.org 0xbf900
	bl 0x128f80	@ 000bf900 69f03efb
.org 0xbf904
	pop {r0}	@ 000bf904 01bc
.org 0xbf906
	bx r0	@ 000bf906 0047
