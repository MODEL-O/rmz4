@ FUN_08077efc  entry 0x08077efc  size 20
.thumb
.org 0x77efc
FUN_08077efc:
	push {lr}	@ 00077efc 00b5
.org 0x77efe
	ldr r2, [pc, #16]	@ 00077efe 044a
.org 0x77f00
	ldrb r1, [r0, #14]	@ 00077f00 817b
.org 0x77f02
	lsls r1, r1, #2	@ 00077f02 8900
.org 0x77f04
	adds r1, r1, r2	@ 00077f04 8918
.org 0x77f06
	ldr r1, [r1, #0]	@ 00077f06 0968
.org 0x77f08
	bl 0x128f80	@ 00077f08 b1f03af8
.org 0x77f0c
	pop {r0}	@ 00077f0c 01bc
.org 0x77f0e
	bx r0	@ 00077f0e 0047
