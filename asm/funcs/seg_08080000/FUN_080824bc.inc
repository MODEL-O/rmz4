@ FUN_080824bc  entry 0x080824bc  size 20
.thumb
.org 0x824bc
FUN_080824bc:
	push {lr}	@ 000824bc 00b5
.org 0x824be
	ldr r2, [pc, #16]	@ 000824be 044a
.org 0x824c0
	ldrb r1, [r0, #13]	@ 000824c0 417b
.org 0x824c2
	lsls r1, r1, #2	@ 000824c2 8900
.org 0x824c4
	adds r1, r1, r2	@ 000824c4 8918
.org 0x824c6
	ldr r1, [r1, #0]	@ 000824c6 0968
.org 0x824c8
	bl 0x128f80	@ 000824c8 a6f05afd
.org 0x824cc
	pop {r0}	@ 000824cc 01bc
.org 0x824ce
	bx r0	@ 000824ce 0047
