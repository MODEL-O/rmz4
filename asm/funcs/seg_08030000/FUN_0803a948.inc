@ FUN_0803a948  entry 0x0803a948  size 22
.thumb
.org 0x3a948
FUN_0803a948:
	push {lr}	@ 0003a948 00b5
.org 0x3a94a
	adds r1, r0, #0	@ 0003a94a 011c
.org 0x3a94c
	ldr r0, [pc, #16]	@ 0003a94c 0448
.org 0x3a94e
	ldr r0, [r0, #0]	@ 0003a94e 0068
.org 0x3a950
	bl 0x1cb30	@ 0003a950 e2f7eef8
.org 0x3a954
	cmp r0, #0	@ 0003a954 0028
.org 0x3a956
	bne.n 0x3a95a	@ 0003a956 00d1
.org 0x3a958
	movs r0, #0	@ 0003a958 0020
.org 0x3a95a
	pop {r1}	@ 0003a95a 02bc
.org 0x3a95c
	bx r1	@ 0003a95c 0847
