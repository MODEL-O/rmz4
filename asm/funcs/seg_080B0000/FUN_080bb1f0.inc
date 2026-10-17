@ FUN_080bb1f0  entry 0x080bb1f0  size 20
.thumb
.org 0xbb1f0
FUN_080bb1f0:
	push {lr}	@ 000bb1f0 00b5
.org 0xbb1f2
	ldr r2, [pc, #16]	@ 000bb1f2 044a
.org 0xbb1f4
	ldrb r1, [r0, #13]	@ 000bb1f4 417b
.org 0xbb1f6
	lsls r1, r1, #2	@ 000bb1f6 8900
.org 0xbb1f8
	adds r1, r1, r2	@ 000bb1f8 8918
.org 0xbb1fa
	ldr r1, [r1, #0]	@ 000bb1fa 0968
.org 0xbb1fc
	bl 0x128f80	@ 000bb1fc 6df0c0fe
.org 0xbb200
	pop {r0}	@ 000bb200 01bc
.org 0xbb202
	bx r0	@ 000bb202 0047
