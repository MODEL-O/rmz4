@ FUN_080430cc  entry 0x080430cc  size 80
.thumb
.org 0x430cc
FUN_080430cc:
	push {r4, r5, lr}	@ 000430cc 30b5
.org 0x430ce
	adds r4, r0, #0	@ 000430ce 041c
.org 0x430d0
	ldr r1, [pc, #72]	@ 000430d0 1249
.org 0x430d2
	ldrb r0, [r4, #9]	@ 000430d2 607a
.org 0x430d4
	lsls r0, r0, #2	@ 000430d4 8000
.org 0x430d6
	adds r0, r0, r1	@ 000430d6 4018
.org 0x430d8
	movs r1, #1	@ 000430d8 0121
.org 0x430da
	str r1, [r4, #12]	@ 000430da e160
.org 0x430dc
	ldr r0, [r0, #0]	@ 000430dc 0068
.org 0x430de
	ldr r0, [r0, #4]	@ 000430de 4068
.org 0x430e0
	str r0, [r4, #20]	@ 000430e0 6061
.org 0x430e2
	adds r0, r4, #0	@ 000430e2 201c
.org 0x430e4
	bl 0x1cc9c	@ 000430e4 d9f7dafd
.org 0x430e8
	adds r0, r4, #0	@ 000430e8 201c
.org 0x430ea
	bl 0x1ceec	@ 000430ea d9f7fffe
.org 0x430ee
	ldrb r1, [r4, #10]	@ 000430ee a17a
.org 0x430f0
	movs r0, #254	@ 000430f0 fe20
.org 0x430f2
	ands r0, r1	@ 000430f2 0840
.org 0x430f4
	movs r5, #0	@ 000430f4 0025
.org 0x430f6
	movs r1, #2	@ 000430f6 0221
.org 0x430f8
	orrs r0, r1	@ 000430f8 0843
.org 0x430fa
	strb r0, [r4, #10]	@ 000430fa a072
.org 0x430fc
	ldr r1, [pc, #32]	@ 000430fc 0849
.org 0x430fe
	adds r0, r4, #0	@ 000430fe 201c
.org 0x43100
	bl 0x1cf00	@ 00043100 d9f7fefe
.org 0x43104
	movs r0, #8	@ 00043104 0820
.org 0x43106
	strb r0, [r4, #18]	@ 00043106 a074
.org 0x43108
	strb r5, [r4, #19]	@ 00043108 e574
.org 0x4310a
	adds r0, r4, #0	@ 0004310a 201c
.org 0x4310c
	adds r0, #189	@ 0004310c bd30
.org 0x4310e
	strb r5, [r0, #0]	@ 0004310e 0570
.org 0x43110
	adds r0, r4, #0	@ 00043110 201c
.org 0x43112
	bl 0x43124	@ 00043112 00f007f8
.org 0x43116
	pop {r4, r5}	@ 00043116 30bc
.org 0x43118
	pop {r0}	@ 00043118 01bc
.org 0x4311a
	bx r0	@ 0004311a 0047
