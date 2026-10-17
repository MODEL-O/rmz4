@ FUN_0801f8c0  entry 0x0801f8c0  size 12
.thumb
.org 0x1f8c0
FUN_0801f8c0:
	push {lr}	@ 0001f8c0 00b5
.org 0x1f8c2
	ldr r1, [r0, #20]	@ 0001f8c2 4169
.org 0x1f8c4
	bl 0x128f80	@ 0001f8c4 09f15cfb
.org 0x1f8c8
	pop {r0}	@ 0001f8c8 01bc
.org 0x1f8ca
	bx r0	@ 0001f8ca 0047
