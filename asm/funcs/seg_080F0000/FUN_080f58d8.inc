@ FUN_080f58d8  entry 0x080f58d8  size 50
.thumb
.org 0xf58d8
FUN_080f58d8:
	push {r4, lr}	@ 000f58d8 10b5
.org 0xf58da
	adds r4, r0, #0	@ 000f58da 041c
.org 0xf58dc
	ldr r1, [pc, #44]	@ 000f58dc 0b49
.org 0xf58de
	ldrb r0, [r4, #16]	@ 000f58de 207c
.org 0xf58e0
	lsls r0, r0, #2	@ 000f58e0 8000
.org 0xf58e2
	adds r0, r0, r1	@ 000f58e2 4018
.org 0xf58e4
	ldr r1, [r0, #0]	@ 000f58e4 0168
.org 0xf58e6
	adds r0, r4, #0	@ 000f58e6 201c
.org 0xf58e8
	bl 0x128f80	@ 000f58e8 33f04afb
.org 0xf58ec
	ldr r1, [pc, #32]	@ 000f58ec 0849
.org 0xf58ee
	ldrb r0, [r4, #9]	@ 000f58ee 607a
.org 0xf58f0
	lsls r0, r0, #2	@ 000f58f0 8000
.org 0xf58f2
	adds r0, r0, r1	@ 000f58f2 4018
.org 0xf58f4
	movs r1, #1	@ 000f58f4 0121
.org 0xf58f6
	str r1, [r4, #12]	@ 000f58f6 e160
.org 0xf58f8
	ldr r0, [r0, #0]	@ 000f58f8 0068
.org 0xf58fa
	ldr r0, [r0, #4]	@ 000f58fa 4068
.org 0xf58fc
	str r0, [r4, #20]	@ 000f58fc 6061
.org 0xf58fe
	adds r0, r4, #0	@ 000f58fe 201c
.org 0xf5900
	bl 0xf5914	@ 000f5900 00f008f8
.org 0xf5904
	pop {r4}	@ 000f5904 10bc
.org 0xf5906
	pop {r0}	@ 000f5906 01bc
.org 0xf5908
	bx r0	@ 000f5908 0047
