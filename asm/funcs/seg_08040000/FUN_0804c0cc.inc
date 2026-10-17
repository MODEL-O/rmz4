@ FUN_0804c0cc  entry 0x0804c0cc  size 82
.thumb
.org 0x4c0cc
FUN_0804c0cc:
	push {r4, r5, lr}	@ 0004c0cc 30b5
.org 0x4c0ce
	adds r4, r0, #0	@ 0004c0ce 041c
.org 0x4c0d0
	ldr r1, [pc, #76]	@ 0004c0d0 1349
.org 0x4c0d2
	ldrb r0, [r4, #9]	@ 0004c0d2 607a
.org 0x4c0d4
	lsls r0, r0, #2	@ 0004c0d4 8000
.org 0x4c0d6
	adds r0, r0, r1	@ 0004c0d6 4018
.org 0x4c0d8
	movs r1, #1	@ 0004c0d8 0121
.org 0x4c0da
	str r1, [r4, #12]	@ 0004c0da e160
.org 0x4c0dc
	ldr r0, [r0, #0]	@ 0004c0dc 0068
.org 0x4c0de
	ldr r0, [r0, #4]	@ 0004c0de 4068
.org 0x4c0e0
	str r0, [r4, #20]	@ 0004c0e0 6061
.org 0x4c0e2
	adds r0, r4, #0	@ 0004c0e2 201c
.org 0x4c0e4
	bl 0x1cc9c	@ 0004c0e4 d0f7dafd
.org 0x4c0e8
	adds r0, r4, #0	@ 0004c0e8 201c
.org 0x4c0ea
	bl 0x1ceec	@ 0004c0ea d0f7fffe
.org 0x4c0ee
	ldrb r1, [r4, #10]	@ 0004c0ee a17a
.org 0x4c0f0
	movs r0, #254	@ 0004c0f0 fe20
.org 0x4c0f2
	ands r0, r1	@ 0004c0f2 0840
.org 0x4c0f4
	movs r5, #0	@ 0004c0f4 0025
.org 0x4c0f6
	movs r1, #2	@ 0004c0f6 0221
.org 0x4c0f8
	orrs r0, r1	@ 0004c0f8 0843
.org 0x4c0fa
	strb r0, [r4, #10]	@ 0004c0fa a072
.org 0x4c0fc
	ldr r1, [pc, #36]	@ 0004c0fc 0949
.org 0x4c0fe
	adds r0, r4, #0	@ 0004c0fe 201c
.org 0x4c100
	bl 0x1cf00	@ 0004c100 d0f7fefe
.org 0x4c104
	movs r0, #8	@ 0004c104 0820
.org 0x4c106
	strb r0, [r4, #18]	@ 0004c106 a074
.org 0x4c108
	movs r0, #56	@ 0004c108 3820
.org 0x4c10a
	strb r0, [r4, #19]	@ 0004c10a e074
.org 0x4c10c
	adds r0, r4, #0	@ 0004c10c 201c
.org 0x4c10e
	adds r0, #189	@ 0004c10e bd30
.org 0x4c110
	strb r5, [r0, #0]	@ 0004c110 0570
.org 0x4c112
	adds r0, r4, #0	@ 0004c112 201c
.org 0x4c114
	bl 0x4c03c	@ 0004c114 fff792ff
.org 0x4c118
	pop {r4, r5}	@ 0004c118 30bc
.org 0x4c11a
	pop {r0}	@ 0004c11a 01bc
.org 0x4c11c
	bx r0	@ 0004c11c 0047
