@ FUN_0809c5cc  entry 0x0809c5cc  size 50
.thumb
.org 0x9c5cc
FUN_0809c5cc:
	push {r4, lr}	@ 0009c5cc 10b5
.org 0x9c5ce
	adds r4, r0, #0	@ 0009c5ce 041c
.org 0x9c5d0
	ldr r1, [pc, #44]	@ 0009c5d0 0b49
.org 0x9c5d2
	ldrb r0, [r4, #9]	@ 0009c5d2 607a
.org 0x9c5d4
	lsls r0, r0, #2	@ 0009c5d4 8000
.org 0x9c5d6
	adds r0, r0, r1	@ 0009c5d6 4018
.org 0x9c5d8
	movs r1, #1	@ 0009c5d8 0121
.org 0x9c5da
	str r1, [r4, #12]	@ 0009c5da e160
.org 0x9c5dc
	ldr r0, [r0, #0]	@ 0009c5dc 0068
.org 0x9c5de
	ldr r0, [r0, #4]	@ 0009c5de 4068
.org 0x9c5e0
	str r0, [r4, #20]	@ 0009c5e0 6061
.org 0x9c5e2
	ldr r1, [pc, #32]	@ 0009c5e2 0849
.org 0x9c5e4
	ldrb r0, [r4, #16]	@ 0009c5e4 207c
.org 0x9c5e6
	lsls r0, r0, #2	@ 0009c5e6 8000
.org 0x9c5e8
	adds r0, r0, r1	@ 0009c5e8 4018
.org 0x9c5ea
	ldr r1, [r0, #0]	@ 0009c5ea 0168
.org 0x9c5ec
	adds r0, r4, #0	@ 0009c5ec 201c
.org 0x9c5ee
	bl 0x128f80	@ 0009c5ee 8cf0c7fc
.org 0x9c5f2
	adds r0, r4, #0	@ 0009c5f2 201c
.org 0x9c5f4
	bl 0x9c608	@ 0009c5f4 00f008f8
.org 0x9c5f8
	pop {r4}	@ 0009c5f8 10bc
.org 0x9c5fa
	pop {r0}	@ 0009c5fa 01bc
.org 0x9c5fc
	bx r0	@ 0009c5fc 0047
