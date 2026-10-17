@ FUN_080e3d88  entry 0x080e3d88  size 38
.thumb
.org 0xe3d88
FUN_080e3d88:
	push {r4, lr}	@ 000e3d88 10b5
.org 0xe3d8a
	adds r4, r0, #0	@ 000e3d8a 041c
.org 0xe3d8c
	bl 0xe38fc	@ 000e3d8c fff7b6fd
.org 0xe3d90
	lsls r0, r0, #24	@ 000e3d90 0006
.org 0xe3d92
	cmp r0, #0	@ 000e3d92 0028
.org 0xe3d94
	beq.n 0xe3da8	@ 000e3d94 08d0
.org 0xe3d96
	ldr r1, [pc, #24]	@ 000e3d96 0649
.org 0xe3d98
	ldrb r0, [r4, #9]	@ 000e3d98 607a
.org 0xe3d9a
	lsls r0, r0, #2	@ 000e3d9a 8000
.org 0xe3d9c
	adds r0, r0, r1	@ 000e3d9c 4018
.org 0xe3d9e
	movs r1, #2	@ 000e3d9e 0221
.org 0xe3da0
	str r1, [r4, #12]	@ 000e3da0 e160
.org 0xe3da2
	ldr r0, [r0, #0]	@ 000e3da2 0068
.org 0xe3da4
	ldr r0, [r0, #8]	@ 000e3da4 8068
.org 0xe3da6
	str r0, [r4, #20]	@ 000e3da6 6061
.org 0xe3da8
	pop {r4}	@ 000e3da8 10bc
.org 0xe3daa
	pop {r0}	@ 000e3daa 01bc
.org 0xe3dac
	bx r0	@ 000e3dac 0047
