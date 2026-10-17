@ FUN_080e8c94  entry 0x080e8c94  size 68
.thumb
.org 0xe8c94
FUN_080e8c94:
	push {r4, lr}	@ 000e8c94 10b5
.org 0xe8c96
	adds r4, r0, #0	@ 000e8c96 041c
.org 0xe8c98
	ldr r1, [pc, #60]	@ 000e8c98 0f49
.org 0xe8c9a
	ldrb r0, [r4, #9]	@ 000e8c9a 607a
.org 0xe8c9c
	lsls r0, r0, #2	@ 000e8c9c 8000
.org 0xe8c9e
	adds r0, r0, r1	@ 000e8c9e 4018
.org 0xe8ca0
	movs r1, #1	@ 000e8ca0 0121
.org 0xe8ca2
	str r1, [r4, #12]	@ 000e8ca2 e160
.org 0xe8ca4
	ldr r0, [r0, #0]	@ 000e8ca4 0068
.org 0xe8ca6
	ldr r0, [r0, #4]	@ 000e8ca6 4068
.org 0xe8ca8
	str r0, [r4, #20]	@ 000e8ca8 6061
.org 0xe8caa
	adds r0, r4, #0	@ 000e8caa 201c
.org 0xe8cac
	bl 0x1cdbc	@ 000e8cac 34f786f8
.org 0xe8cb0
	adds r1, r4, #0	@ 000e8cb0 211c
.org 0xe8cb2
	adds r1, #37	@ 000e8cb2 2531
.org 0xe8cb4
	movs r0, #25	@ 000e8cb4 1920
.org 0xe8cb6
	strb r0, [r1, #0]	@ 000e8cb6 0870
.org 0xe8cb8
	adds r0, r4, #0	@ 000e8cb8 201c
.org 0xe8cba
	movs r1, #13	@ 000e8cba 0d21
.org 0xe8cbc
	bl 0x1d3d0	@ 000e8cbc 34f788fb
.org 0xe8cc0
	ldrb r1, [r4, #10]	@ 000e8cc0 a17a
.org 0xe8cc2
	movs r0, #1	@ 000e8cc2 0120
.org 0xe8cc4
	orrs r0, r1	@ 000e8cc4 0843
.org 0xe8cc6
	strb r0, [r4, #10]	@ 000e8cc6 a072
.org 0xe8cc8
	movs r0, #128	@ 000e8cc8 8020
.org 0xe8cca
	strb r0, [r4, #19]	@ 000e8cca e074
.org 0xe8ccc
	adds r0, r4, #0	@ 000e8ccc 201c
.org 0xe8cce
	bl 0xe8cdc	@ 000e8cce 00f005f8
.org 0xe8cd2
	pop {r4}	@ 000e8cd2 10bc
.org 0xe8cd4
	pop {r0}	@ 000e8cd4 01bc
.org 0xe8cd6
	bx r0	@ 000e8cd6 0047
