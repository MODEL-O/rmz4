@ FUN_080029c0  entry 0x080029c0  size 20
.thumb
.org 0x29c0
FUN_080029c0:
	push {lr}	@ 000029c0 00b5
.org 0x29c2
	bl 0x1278e8	@ 000029c2 24f191ff
.org 0x29c6
	ldr r0, [pc, #12]	@ 000029c6 0348
.org 0x29c8
	movs r1, #0	@ 000029c8 0021
.org 0x29ca
	strh r1, [r0, #0]	@ 000029ca 0180
.org 0x29cc
	ldr r0, [pc, #8]	@ 000029cc 0248
.org 0x29ce
	strh r1, [r0, #0]	@ 000029ce 0180
.org 0x29d0
	pop {r0}	@ 000029d0 01bc
.org 0x29d2
	bx r0	@ 000029d2 0047
