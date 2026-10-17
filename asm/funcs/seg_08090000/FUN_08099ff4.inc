@ FUN_08099ff4  entry 0x08099ff4  size 20
.thumb
.org 0x99ff4
FUN_08099ff4:
	push {lr}	@ 00099ff4 00b5
.org 0x99ff6
	ldr r2, [pc, #16]	@ 00099ff6 044a
.org 0x99ff8
	ldrb r1, [r0, #16]	@ 00099ff8 017c
.org 0x99ffa
	lsls r1, r1, #2	@ 00099ffa 8900
.org 0x99ffc
	adds r1, r1, r2	@ 00099ffc 8918
.org 0x99ffe
	ldr r1, [r1, #0]	@ 00099ffe 0968
.org 0x9a000
	bl 0x128f80	@ 0009a000 8ef0beff
.org 0x9a004
	pop {r0}	@ 0009a004 01bc
.org 0x9a006
	bx r0	@ 0009a006 0047
