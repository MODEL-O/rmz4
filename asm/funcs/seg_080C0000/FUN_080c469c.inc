@ FUN_080c469c  entry 0x080c469c  size 20
.thumb
.org 0xc469c
FUN_080c469c:
	push {lr}	@ 000c469c 00b5
.org 0xc469e
	ldr r2, [pc, #16]	@ 000c469e 044a
.org 0xc46a0
	ldrb r1, [r0, #13]	@ 000c46a0 417b
.org 0xc46a2
	lsls r1, r1, #2	@ 000c46a2 8900
.org 0xc46a4
	adds r1, r1, r2	@ 000c46a4 8918
.org 0xc46a6
	ldr r1, [r1, #0]	@ 000c46a6 0968
.org 0xc46a8
	bl 0x128f80	@ 000c46a8 64f06afc
.org 0xc46ac
	pop {r0}	@ 000c46ac 01bc
.org 0xc46ae
	bx r0	@ 000c46ae 0047
