@ FUN_08081aac  entry 0x08081aac  size 20
.thumb
.org 0x81aac
FUN_08081aac:
	push {lr}	@ 00081aac 00b5
.org 0x81aae
	ldr r2, [pc, #16]	@ 00081aae 044a
.org 0x81ab0
	ldrb r1, [r0, #13]	@ 00081ab0 417b
.org 0x81ab2
	lsls r1, r1, #2	@ 00081ab2 8900
.org 0x81ab4
	adds r1, r1, r2	@ 00081ab4 8918
.org 0x81ab6
	ldr r1, [r1, #0]	@ 00081ab6 0968
.org 0x81ab8
	bl 0x128f80	@ 00081ab8 a7f062fa
.org 0x81abc
	pop {r0}	@ 00081abc 01bc
.org 0x81abe
	bx r0	@ 00081abe 0047
