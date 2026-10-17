@ FUN_080e4ff0  entry 0x080e4ff0  size 32
.thumb
.org 0xe4ff0
FUN_080e4ff0:
	push {r4, lr}	@ 000e4ff0 10b5
.org 0xe4ff2
	adds r4, r0, #0	@ 000e4ff2 041c
.org 0xe4ff4
	ldr r1, [pc, #24]	@ 000e4ff4 0649
.org 0xe4ff6
	ldrb r0, [r4, #13]	@ 000e4ff6 607b
.org 0xe4ff8
	lsls r0, r0, #2	@ 000e4ff8 8000
.org 0xe4ffa
	adds r0, r0, r1	@ 000e4ffa 4018
.org 0xe4ffc
	ldr r1, [r0, #0]	@ 000e4ffc 0168
.org 0xe4ffe
	adds r0, r4, #0	@ 000e4ffe 201c
.org 0xe5000
	bl 0x128f80	@ 000e5000 43f0beff
.org 0xe5004
	adds r0, r4, #0	@ 000e5004 201c
.org 0xe5006
	bl 0x1cff0	@ 000e5006 37f7f3ff
.org 0xe500a
	pop {r4}	@ 000e500a 10bc
.org 0xe500c
	pop {r0}	@ 000e500c 01bc
.org 0xe500e
	bx r0	@ 000e500e 0047
