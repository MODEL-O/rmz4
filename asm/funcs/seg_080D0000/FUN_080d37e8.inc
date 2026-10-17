@ FUN_080d37e8  entry 0x080d37e8  size 32
.thumb
.org 0xd37e8
FUN_080d37e8:
	push {lr}	@ 000d37e8 00b5
.org 0xd37ea
	adds r2, r0, #0	@ 000d37ea 021c
.org 0xd37ec
	ldrb r3, [r2, #16]	@ 000d37ec 137c
.org 0xd37ee
	cmp r3, #0	@ 000d37ee 002b
.org 0xd37f0
	bne.n 0xd37fe	@ 000d37f0 05d1
.org 0xd37f2
	ldr r1, [pc, #20]	@ 000d37f2 0549
.org 0xd37f4
	ldrb r0, [r2, #17]	@ 000d37f4 507c
.org 0xd37f6
	lsls r0, r0, #2	@ 000d37f6 8000
.org 0xd37f8
	adds r1, #4	@ 000d37f8 0431
.org 0xd37fa
	adds r0, r0, r1	@ 000d37fa 4018
.org 0xd37fc
	str r3, [r0, #0]	@ 000d37fc 0360
.org 0xd37fe
	adds r0, r2, #0	@ 000d37fe 101c
.org 0xd3800
	bl 0xd0c30	@ 000d3800 fdf716fa
.org 0xd3804
	pop {r0}	@ 000d3804 01bc
.org 0xd3806
	bx r0	@ 000d3806 0047
