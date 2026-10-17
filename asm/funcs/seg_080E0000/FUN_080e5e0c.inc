@ FUN_080e5e0c  entry 0x080e5e0c  size 32
.thumb
.org 0xe5e0c
FUN_080e5e0c:
	push {r4, lr}	@ 000e5e0c 10b5
.org 0xe5e0e
	adds r4, r0, #0	@ 000e5e0e 041c
.org 0xe5e10
	ldr r1, [pc, #24]	@ 000e5e10 0649
.org 0xe5e12
	ldrb r0, [r4, #13]	@ 000e5e12 607b
.org 0xe5e14
	lsls r0, r0, #2	@ 000e5e14 8000
.org 0xe5e16
	adds r0, r0, r1	@ 000e5e16 4018
.org 0xe5e18
	ldr r1, [r0, #0]	@ 000e5e18 0168
.org 0xe5e1a
	adds r0, r4, #0	@ 000e5e1a 201c
.org 0xe5e1c
	bl 0x128f80	@ 000e5e1c 43f0b0f8
.org 0xe5e20
	adds r0, r4, #0	@ 000e5e20 201c
.org 0xe5e22
	bl 0x1cff0	@ 000e5e22 37f7e5f8
.org 0xe5e26
	pop {r4}	@ 000e5e26 10bc
.org 0xe5e28
	pop {r0}	@ 000e5e28 01bc
.org 0xe5e2a
	bx r0	@ 000e5e2a 0047
