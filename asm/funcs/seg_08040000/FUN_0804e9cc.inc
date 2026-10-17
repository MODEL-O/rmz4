@ FUN_0804e9cc  entry 0x0804e9cc  size 80
.thumb
.org 0x4e9cc
FUN_0804e9cc:
	push {r4, r5, lr}	@ 0004e9cc 30b5
.org 0x4e9ce
	adds r4, r0, #0	@ 0004e9ce 041c
.org 0x4e9d0
	ldr r1, [pc, #72]	@ 0004e9d0 1249
.org 0x4e9d2
	ldrb r0, [r4, #9]	@ 0004e9d2 607a
.org 0x4e9d4
	lsls r0, r0, #2	@ 0004e9d4 8000
.org 0x4e9d6
	adds r0, r0, r1	@ 0004e9d6 4018
.org 0x4e9d8
	movs r1, #1	@ 0004e9d8 0121
.org 0x4e9da
	str r1, [r4, #12]	@ 0004e9da e160
.org 0x4e9dc
	ldr r0, [r0, #0]	@ 0004e9dc 0068
.org 0x4e9de
	ldr r0, [r0, #4]	@ 0004e9de 4068
.org 0x4e9e0
	str r0, [r4, #20]	@ 0004e9e0 6061
.org 0x4e9e2
	adds r0, r4, #0	@ 0004e9e2 201c
.org 0x4e9e4
	bl 0x1cc9c	@ 0004e9e4 cef75af9
.org 0x4e9e8
	adds r0, r4, #0	@ 0004e9e8 201c
.org 0x4e9ea
	bl 0x1ceec	@ 0004e9ea cef77ffa
.org 0x4e9ee
	ldrb r1, [r4, #10]	@ 0004e9ee a17a
.org 0x4e9f0
	movs r0, #254	@ 0004e9f0 fe20
.org 0x4e9f2
	ands r0, r1	@ 0004e9f2 0840
.org 0x4e9f4
	movs r5, #0	@ 0004e9f4 0025
.org 0x4e9f6
	movs r1, #2	@ 0004e9f6 0221
.org 0x4e9f8
	orrs r0, r1	@ 0004e9f8 0843
.org 0x4e9fa
	strb r0, [r4, #10]	@ 0004e9fa a072
.org 0x4e9fc
	ldr r1, [pc, #32]	@ 0004e9fc 0849
.org 0x4e9fe
	adds r0, r4, #0	@ 0004e9fe 201c
.org 0x4ea00
	bl 0x1cf00	@ 0004ea00 cef77efa
.org 0x4ea04
	movs r0, #8	@ 0004ea04 0820
.org 0x4ea06
	strb r0, [r4, #18]	@ 0004ea06 a074
.org 0x4ea08
	strb r5, [r4, #19]	@ 0004ea08 e574
.org 0x4ea0a
	adds r0, r4, #0	@ 0004ea0a 201c
.org 0x4ea0c
	adds r0, #189	@ 0004ea0c bd30
.org 0x4ea0e
	strb r5, [r0, #0]	@ 0004ea0e 0570
.org 0x4ea10
	adds r0, r4, #0	@ 0004ea10 201c
.org 0x4ea12
	bl 0x4ea24	@ 0004ea12 00f007f8
.org 0x4ea16
	pop {r4, r5}	@ 0004ea16 30bc
.org 0x4ea18
	pop {r0}	@ 0004ea18 01bc
.org 0x4ea1a
	bx r0	@ 0004ea1a 0047
