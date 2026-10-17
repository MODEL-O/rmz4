@ FUN_080294b0  entry 0x080294b0  size 36
.thumb
.org 0x294b0
FUN_080294b0:
	push {r4, r5, lr}	@ 000294b0 30b5
.org 0x294b2
	ldr r5, [pc, #32]	@ 000294b2 084d
.org 0x294b4
	ldrh r0, [r5, #0]	@ 000294b4 2888
.org 0x294b6
	cmp r0, #0	@ 000294b6 0028
.org 0x294b8
	beq.n 0x294cc	@ 000294b8 08d0
.org 0x294ba
	ldr r2, [pc, #28]	@ 000294ba 074a
.org 0x294bc
	ldrb r1, [r2, #8]	@ 000294bc 117a
.org 0x294be
	movs r0, #127	@ 000294be 7f20
.org 0x294c0
	ands r0, r1	@ 000294c0 0840
.org 0x294c2
	movs r4, #0	@ 000294c2 0024
.org 0x294c4
	strb r0, [r2, #8]	@ 000294c4 1072
.org 0x294c6
	bl 0x2a50	@ 000294c6 d9f7c3fa
.org 0x294ca
	strh r4, [r5, #0]	@ 000294ca 2c80
.org 0x294cc
	movs r0, #0	@ 000294cc 0020
.org 0x294ce
	pop {r4, r5}	@ 000294ce 30bc
.org 0x294d0
	pop {r1}	@ 000294d0 02bc
.org 0x294d2
	bx r1	@ 000294d2 0847
