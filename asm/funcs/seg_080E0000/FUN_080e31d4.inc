@ FUN_080e31d4  entry 0x080e31d4  size 32
.thumb
.org 0xe31d4
FUN_080e31d4:
	push {r4, lr}	@ 000e31d4 10b5
.org 0xe31d6
	adds r4, r0, #0	@ 000e31d6 041c
.org 0xe31d8
	ldr r1, [pc, #24]	@ 000e31d8 0649
.org 0xe31da
	ldrb r0, [r4, #13]	@ 000e31da 607b
.org 0xe31dc
	lsls r0, r0, #2	@ 000e31dc 8000
.org 0xe31de
	adds r0, r0, r1	@ 000e31de 4018
.org 0xe31e0
	ldr r1, [r0, #0]	@ 000e31e0 0168
.org 0xe31e2
	adds r0, r4, #0	@ 000e31e2 201c
.org 0xe31e4
	bl 0x128f80	@ 000e31e4 45f0ccfe
.org 0xe31e8
	adds r0, r4, #0	@ 000e31e8 201c
.org 0xe31ea
	bl 0x1cff0	@ 000e31ea 39f701ff
.org 0xe31ee
	pop {r4}	@ 000e31ee 10bc
.org 0xe31f0
	pop {r0}	@ 000e31f0 01bc
.org 0xe31f2
	bx r0	@ 000e31f2 0047
