@ FUN_0802ffc0  entry 0x0802ffc0  size 44
.thumb
.org 0x2ffc0
FUN_0802ffc0:
	push {r4, r5, lr}	@ 0002ffc0 30b5
.org 0x2ffc2
	adds r5, r0, #0	@ 0002ffc2 051c
.org 0x2ffc4
	movs r0, #135	@ 0002ffc4 8720
.org 0x2ffc6
	lsls r0, r0, #1	@ 0002ffc6 4000
.org 0x2ffc8
	adds r4, r5, r0	@ 0002ffc8 2c18
.org 0x2ffca
	movs r0, #0	@ 0002ffca 0020
.org 0x2ffcc
	ldrsh r1, [r4, r0]	@ 0002ffcc 215e
.org 0x2ffce
	movs r0, #1	@ 0002ffce 0120
.org 0x2ffd0
	negs r0, r0	@ 0002ffd0 4042
.org 0x2ffd2
	cmp r1, r0	@ 0002ffd2 8142
.org 0x2ffd4
	beq.n 0x2ffe0	@ 0002ffd4 04d0
.org 0x2ffd6
	adds r0, r1, #0	@ 0002ffd6 081c
.org 0x2ffd8
	bl 0x2b5c	@ 0002ffd8 d2f7c0fd
.org 0x2ffdc
	ldr r0, [pc, #12]	@ 0002ffdc 0348
.org 0x2ffde
	strh r0, [r4, #0]	@ 0002ffde 2080
.org 0x2ffe0
	adds r0, r5, #0	@ 0002ffe0 281c
.org 0x2ffe2
	bl 0x2b524	@ 0002ffe2 fbf79ffa
.org 0x2ffe6
	pop {r4, r5}	@ 0002ffe6 30bc
.org 0x2ffe8
	pop {r0}	@ 0002ffe8 01bc
.org 0x2ffea
	bx r0	@ 0002ffea 0047
