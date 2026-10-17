@ FUN_08041fc4  entry 0x08041fc4  size 50
.thumb
.org 0x41fc4
FUN_08041fc4:
	push {r4, lr}	@ 00041fc4 10b5
.org 0x41fc6
	adds r4, r0, #0	@ 00041fc6 041c
.org 0x41fc8
	ldr r1, [pc, #44]	@ 00041fc8 0b49
.org 0x41fca
	ldrb r0, [r4, #9]	@ 00041fca 607a
.org 0x41fcc
	lsls r0, r0, #2	@ 00041fcc 8000
.org 0x41fce
	adds r0, r0, r1	@ 00041fce 4018
.org 0x41fd0
	movs r1, #1	@ 00041fd0 0121
.org 0x41fd2
	str r1, [r4, #12]	@ 00041fd2 e160
.org 0x41fd4
	ldr r0, [r0, #0]	@ 00041fd4 0068
.org 0x41fd6
	ldr r0, [r0, #4]	@ 00041fd6 4068
.org 0x41fd8
	str r0, [r4, #20]	@ 00041fd8 6061
.org 0x41fda
	ldr r1, [pc, #32]	@ 00041fda 0849
.org 0x41fdc
	ldrb r0, [r4, #16]	@ 00041fdc 207c
.org 0x41fde
	lsls r0, r0, #2	@ 00041fde 8000
.org 0x41fe0
	adds r0, r0, r1	@ 00041fe0 4018
.org 0x41fe2
	ldr r1, [r0, #0]	@ 00041fe2 0168
.org 0x41fe4
	adds r0, r4, #0	@ 00041fe4 201c
.org 0x41fe6
	bl 0x128f80	@ 00041fe6 e6f0cbff
.org 0x41fea
	adds r0, r4, #0	@ 00041fea 201c
.org 0x41fec
	bl 0x42000	@ 00041fec 00f008f8
.org 0x41ff0
	pop {r4}	@ 00041ff0 10bc
.org 0x41ff2
	pop {r0}	@ 00041ff2 01bc
.org 0x41ff4
	bx r0	@ 00041ff4 0047
