@ FUN_080c7ff4  entry 0x080c7ff4  size 20
.thumb
.org 0xc7ff4
FUN_080c7ff4:
	push {lr}	@ 000c7ff4 00b5
.org 0xc7ff6
	ldr r2, [pc, #16]	@ 000c7ff6 044a
.org 0xc7ff8
	ldrb r1, [r0, #16]	@ 000c7ff8 017c
.org 0xc7ffa
	lsls r1, r1, #2	@ 000c7ffa 8900
.org 0xc7ffc
	adds r1, r1, r2	@ 000c7ffc 8918
.org 0xc7ffe
	ldr r1, [r1, #0]	@ 000c7ffe 0968
.org 0xc8000
	bl 0x128f80	@ 000c8000 60f0beff
.org 0xc8004
	pop {r0}	@ 000c8004 01bc
.org 0xc8006
	bx r0	@ 000c8006 0047
