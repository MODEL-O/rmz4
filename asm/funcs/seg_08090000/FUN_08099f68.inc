@ FUN_08099f68  entry 0x08099f68  size 50
.thumb
.org 0x99f68
FUN_08099f68:
	push {r4, lr}	@ 00099f68 10b5
.org 0x99f6a
	adds r4, r0, #0	@ 00099f6a 041c
.org 0x99f6c
	ldr r1, [pc, #44]	@ 00099f6c 0b49
.org 0x99f6e
	ldrb r0, [r4, #16]	@ 00099f6e 207c
.org 0x99f70
	lsls r0, r0, #2	@ 00099f70 8000
.org 0x99f72
	adds r0, r0, r1	@ 00099f72 4018
.org 0x99f74
	ldr r1, [r0, #0]	@ 00099f74 0168
.org 0x99f76
	adds r0, r4, #0	@ 00099f76 201c
.org 0x99f78
	bl 0x128f80	@ 00099f78 8ff002f8
.org 0x99f7c
	ldr r1, [pc, #32]	@ 00099f7c 0849
.org 0x99f7e
	ldrb r0, [r4, #9]	@ 00099f7e 607a
.org 0x99f80
	lsls r0, r0, #2	@ 00099f80 8000
.org 0x99f82
	adds r0, r0, r1	@ 00099f82 4018
.org 0x99f84
	movs r1, #1	@ 00099f84 0121
.org 0x99f86
	str r1, [r4, #12]	@ 00099f86 e160
.org 0x99f88
	ldr r0, [r0, #0]	@ 00099f88 0068
.org 0x99f8a
	ldr r0, [r0, #4]	@ 00099f8a 4068
.org 0x99f8c
	str r0, [r4, #20]	@ 00099f8c 6061
.org 0x99f8e
	adds r0, r4, #0	@ 00099f8e 201c
.org 0x99f90
	bl 0x99fa4	@ 00099f90 00f008f8
.org 0x99f94
	pop {r4}	@ 00099f94 10bc
.org 0x99f96
	pop {r0}	@ 00099f96 01bc
.org 0x99f98
	bx r0	@ 00099f98 0047
