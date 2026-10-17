@ FUN_08095ca8  entry 0x08095ca8  size 32
.thumb
.org 0x95ca8
FUN_08095ca8:
	push {r4, lr}	@ 00095ca8 10b5
.org 0x95caa
	adds r4, r0, #0	@ 00095caa 041c
.org 0x95cac
	ldrb r0, [r4, #17]	@ 00095cac 607c
.org 0x95cae
	ldr r1, [pc, #24]	@ 00095cae 0649
.org 0x95cb0
	lsls r0, r0, #2	@ 00095cb0 8000
.org 0x95cb2
	adds r0, r0, r1	@ 00095cb2 4018
.org 0x95cb4
	movs r1, #0	@ 00095cb4 0021
.org 0x95cb6
	ldrsh r0, [r0, r1]	@ 00095cb6 405e
.org 0x95cb8
	bl 0x2b5c	@ 00095cb8 6cf750ff
.org 0x95cbc
	adds r0, r4, #0	@ 00095cbc 201c
.org 0x95cbe
	bl 0x7f8ec	@ 00095cbe e9f715fe
.org 0x95cc2
	pop {r4}	@ 00095cc2 10bc
.org 0x95cc4
	pop {r0}	@ 00095cc4 01bc
.org 0x95cc6
	bx r0	@ 00095cc6 0047
