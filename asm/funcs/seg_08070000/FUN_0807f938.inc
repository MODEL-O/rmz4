@ FUN_0807f938  entry 0x0807f938  size 24
.thumb
.org 0x7f938
FUN_0807f938:
	push {lr}	@ 0007f938 00b5
.org 0x7f93a
	adds r1, r0, #0	@ 0007f93a 011c
.org 0x7f93c
	ldr r0, [pc, #16]	@ 0007f93c 0448
.org 0x7f93e
	ldr r0, [r0, #0]	@ 0007f93e 0068
.org 0x7f940
	adds r1, #84	@ 0007f940 5431
.org 0x7f942
	bl 0x1cb30	@ 0007f942 9df7f5f8
.org 0x7f946
	cmp r0, #0	@ 0007f946 0028
.org 0x7f948
	bne.n 0x7f94c	@ 0007f948 00d1
.org 0x7f94a
	movs r0, #0	@ 0007f94a 0020
.org 0x7f94c
	pop {r1}	@ 0007f94c 02bc
.org 0x7f94e
	bx r1	@ 0007f94e 0847
