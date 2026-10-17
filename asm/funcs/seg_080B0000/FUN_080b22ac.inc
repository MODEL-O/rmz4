@ FUN_080b22ac  entry 0x080b22ac  size 78
.thumb
.org 0xb22ac
FUN_080b22ac:
	push {r4, lr}	@ 000b22ac 10b5
.org 0xb22ae
	adds r4, r0, #0	@ 000b22ae 041c
.org 0xb22b0
	bl 0x1cc9c	@ 000b22b0 6af7f4fc
.org 0xb22b4
	ldrb r1, [r4, #10]	@ 000b22b4 a17a
.org 0xb22b6
	movs r0, #1	@ 000b22b6 0120
.org 0xb22b8
	movs r2, #0	@ 000b22b8 0022
.org 0xb22ba
	orrs r0, r1	@ 000b22ba 0843
.org 0xb22bc
	movs r1, #2	@ 000b22bc 0221
.org 0xb22be
	orrs r0, r1	@ 000b22be 0843
.org 0xb22c0
	strb r0, [r4, #10]	@ 000b22c0 a072
.org 0xb22c2
	ldr r1, [pc, #56]	@ 000b22c2 0e49
.org 0xb22c4
	ldrb r0, [r4, #9]	@ 000b22c4 607a
.org 0xb22c6
	lsls r0, r0, #2	@ 000b22c6 8000
.org 0xb22c8
	adds r0, r0, r1	@ 000b22c8 4018
.org 0xb22ca
	movs r1, #1	@ 000b22ca 0121
.org 0xb22cc
	str r1, [r4, #12]	@ 000b22cc e160
.org 0xb22ce
	ldr r0, [r0, #0]	@ 000b22ce 0068
.org 0xb22d0
	ldr r0, [r0, #4]	@ 000b22d0 4068
.org 0xb22d2
	str r0, [r4, #20]	@ 000b22d2 6061
.org 0xb22d4
	adds r0, r4, #0	@ 000b22d4 201c
.org 0xb22d6
	adds r0, #192	@ 000b22d6 c030
.org 0xb22d8
	str r2, [r0, #0]	@ 000b22d8 0260
.org 0xb22da
	subs r0, #12	@ 000b22da 0c38
.org 0xb22dc
	strb r2, [r0, #0]	@ 000b22dc 0270
.org 0xb22de
	ldr r1, [pc, #32]	@ 000b22de 0849
.org 0xb22e0
	ldrb r0, [r4, #16]	@ 000b22e0 207c
.org 0xb22e2
	lsls r0, r0, #2	@ 000b22e2 8000
.org 0xb22e4
	adds r0, r0, r1	@ 000b22e4 4018
.org 0xb22e6
	ldr r1, [r0, #0]	@ 000b22e6 0168
.org 0xb22e8
	adds r0, r4, #0	@ 000b22e8 201c
.org 0xb22ea
	bl 0x128f80	@ 000b22ea 76f049fe
.org 0xb22ee
	adds r0, r4, #0	@ 000b22ee 201c
.org 0xb22f0
	bl 0xb2304	@ 000b22f0 00f008f8
.org 0xb22f4
	pop {r4}	@ 000b22f4 10bc
.org 0xb22f6
	pop {r0}	@ 000b22f6 01bc
.org 0xb22f8
	bx r0	@ 000b22f8 0047
