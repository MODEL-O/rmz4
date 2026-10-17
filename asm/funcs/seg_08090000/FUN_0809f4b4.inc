@ FUN_0809f4b4  entry 0x0809f4b4  size 58
.thumb
.org 0x9f4b4
FUN_0809f4b4:
	push {r4, lr}	@ 0009f4b4 10b5
.org 0x9f4b6
	adds r4, r0, #0	@ 0009f4b6 041c
.org 0x9f4b8
	ldr r1, [pc, #52]	@ 0009f4b8 0d49
.org 0x9f4ba
	ldrb r0, [r4, #9]	@ 0009f4ba 607a
.org 0x9f4bc
	lsls r0, r0, #2	@ 0009f4bc 8000
.org 0x9f4be
	adds r0, r0, r1	@ 0009f4be 4018
.org 0x9f4c0
	movs r1, #1	@ 0009f4c0 0121
.org 0x9f4c2
	str r1, [r4, #12]	@ 0009f4c2 e160
.org 0x9f4c4
	ldr r0, [r0, #0]	@ 0009f4c4 0068
.org 0x9f4c6
	ldr r0, [r0, #4]	@ 0009f4c6 4068
.org 0x9f4c8
	str r0, [r4, #20]	@ 0009f4c8 6061
.org 0x9f4ca
	adds r1, r4, #0	@ 0009f4ca 211c
.org 0x9f4cc
	adds r1, #192	@ 0009f4cc c031
.org 0x9f4ce
	movs r0, #0	@ 0009f4ce 0020
.org 0x9f4d0
	strb r0, [r1, #0]	@ 0009f4d0 0870
.org 0x9f4d2
	ldr r1, [pc, #32]	@ 0009f4d2 0849
.org 0x9f4d4
	ldrb r0, [r4, #16]	@ 0009f4d4 207c
.org 0x9f4d6
	lsls r0, r0, #2	@ 0009f4d6 8000
.org 0x9f4d8
	adds r0, r0, r1	@ 0009f4d8 4018
.org 0x9f4da
	ldr r1, [r0, #0]	@ 0009f4da 0168
.org 0x9f4dc
	adds r0, r4, #0	@ 0009f4dc 201c
.org 0x9f4de
	bl 0x128f80	@ 0009f4de 89f04ffd
.org 0x9f4e2
	adds r0, r4, #0	@ 0009f4e2 201c
.org 0x9f4e4
	bl 0x9f4f8	@ 0009f4e4 00f008f8
.org 0x9f4e8
	pop {r4}	@ 0009f4e8 10bc
.org 0x9f4ea
	pop {r0}	@ 0009f4ea 01bc
.org 0x9f4ec
	bx r0	@ 0009f4ec 0047
