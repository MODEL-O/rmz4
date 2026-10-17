@ FUN_08035b9c  entry 0x08035b9c  size 24
.thumb
.org 0x35b9c
FUN_08035b9c:
	push {lr}	@ 00035b9c 00b5
.org 0x35b9e
	ldr r2, [pc, #20]	@ 00035b9e 054a
.org 0x35ba0
	ldr r3, [pc, #20]	@ 00035ba0 054b
.org 0x35ba2
	adds r1, r0, r3	@ 00035ba2 c118
.org 0x35ba4
	ldrb r1, [r1, #0]	@ 00035ba4 0978
.org 0x35ba6
	lsls r1, r1, #2	@ 00035ba6 8900
.org 0x35ba8
	adds r1, r1, r2	@ 00035ba8 8918
.org 0x35baa
	ldr r1, [r1, #0]	@ 00035baa 0968
.org 0x35bac
	bl 0x128f80	@ 00035bac f3f0e8f9
.org 0x35bb0
	pop {r0}	@ 00035bb0 01bc
.org 0x35bb2
	bx r0	@ 00035bb2 0047
