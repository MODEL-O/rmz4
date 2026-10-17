@ FUN_0803a92c  entry 0x0803a92c  size 22
.thumb
.org 0x3a92c
FUN_0803a92c:
	push {lr}	@ 0003a92c 00b5
.org 0x3a92e
	adds r1, r0, #0	@ 0003a92e 011c
.org 0x3a930
	ldr r0, [pc, #16]	@ 0003a930 0448
.org 0x3a932
	ldr r0, [r0, #0]	@ 0003a932 0068
.org 0x3a934
	bl 0x1cb30	@ 0003a934 e2f7fcf8
.org 0x3a938
	cmp r0, #0	@ 0003a938 0028
.org 0x3a93a
	bne.n 0x3a93e	@ 0003a93a 00d1
.org 0x3a93c
	movs r0, #0	@ 0003a93c 0020
.org 0x3a93e
	pop {r1}	@ 0003a93e 02bc
.org 0x3a940
	bx r1	@ 0003a940 0847
