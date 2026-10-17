@ FUN_0810f6d0  entry 0x0810f6d0  size 32
.thumb
.org 0x10f6d0
FUN_0810f6d0:
	push {r4, r5, lr}	@ 0010f6d0 30b5
.org 0x10f6d2
	bl 0x1430	@ 0010f6d2 f1f6adfe
.org 0x10f6d6
	ldr r5, [pc, #24]	@ 0010f6d6 064d
.org 0x10f6d8
	ldr r4, [pc, #24]	@ 0010f6d8 064c
.org 0x10f6da
	ldrb r0, [r4, #4]	@ 0010f6da 2079
.org 0x10f6dc
	lsls r0, r0, #2	@ 0010f6dc 8000
.org 0x10f6de
	adds r0, r0, r5	@ 0010f6de 4019
.org 0x10f6e0
	ldr r1, [r0, #0]	@ 0010f6e0 0168
.org 0x10f6e2
	adds r0, r4, #0	@ 0010f6e2 201c
.org 0x10f6e4
	bl 0x128f80	@ 0010f6e4 19f04cfc
.org 0x10f6e8
	movs r0, #1	@ 0010f6e8 0120
.org 0x10f6ea
	bl 0x12ec	@ 0010f6ea f1f6fffd
.org 0x10f6ee
	b.n 0x10f6da	@ 0010f6ee f4e7
