@ FUN_080c7dd0  entry 0x080c7dd0  size 16
.thumb
.org 0xc7dd0
FUN_080c7dd0:
	push {lr}	@ 000c7dd0 00b5
.org 0xc7dd2
	ldr r2, [r0, #0]	@ 000c7dd2 0268
.org 0xc7dd4
	ldr r1, [r0, #4]	@ 000c7dd4 4168
.org 0xc7dd6
	adds r0, r2, #0	@ 000c7dd6 101c
.org 0xc7dd8
	bl 0x8534	@ 000c7dd8 40f7acfb
.org 0xc7ddc
	pop {r1}	@ 000c7ddc 02bc
.org 0xc7dde
	bx r1	@ 000c7dde 0847
