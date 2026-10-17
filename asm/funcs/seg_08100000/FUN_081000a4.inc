@ FUN_081000a4  entry 0x081000a4  size 100
.thumb
.org 0x1000a4
FUN_081000a4:
	push {r4, r5, lr}	@ 001000a4 30b5
.org 0x1000a6
	adds r4, r0, #0	@ 001000a6 041c
.org 0x1000a8
	bl 0x1cc9c	@ 001000a8 1cf7f8fd
.org 0x1000ac
	adds r2, r4, #0	@ 001000ac 221c
.org 0x1000ae
	adds r2, #73	@ 001000ae 4932
.org 0x1000b0
	ldrb r1, [r2, #0]	@ 001000b0 1178
.org 0x1000b2
	movs r0, #13	@ 001000b2 0d20
.org 0x1000b4
	negs r0, r0	@ 001000b4 4042
.org 0x1000b6
	ands r0, r1	@ 001000b6 0840
.org 0x1000b8
	movs r1, #4	@ 001000b8 0421
.org 0x1000ba
	orrs r0, r1	@ 001000ba 0843
.org 0x1000bc
	strb r0, [r2, #0]	@ 001000bc 1070
.org 0x1000be
	ldrb r1, [r4, #10]	@ 001000be a17a
.org 0x1000c0
	movs r0, #1	@ 001000c0 0120
.org 0x1000c2
	movs r5, #0	@ 001000c2 0025
.org 0x1000c4
	orrs r0, r1	@ 001000c4 0843
.org 0x1000c6
	movs r1, #2	@ 001000c6 0221
.org 0x1000c8
	orrs r0, r1	@ 001000c8 0843
.org 0x1000ca
	strb r0, [r4, #10]	@ 001000ca a072
.org 0x1000cc
	ldr r0, [r4, #84]	@ 001000cc 606d
.org 0x1000ce
	movs r1, #128	@ 001000ce 8021
.org 0x1000d0
	lsls r1, r1, #4	@ 001000d0 0901
.org 0x1000d2
	adds r0, r0, r1	@ 001000d2 4018
.org 0x1000d4
	str r0, [r4, #84]	@ 001000d4 6065
.org 0x1000d6
	ldr r1, [r4, #88]	@ 001000d6 a16d
.org 0x1000d8
	bl 0x8534	@ 001000d8 08f72cfa
.org 0x1000dc
	movs r1, #128	@ 001000dc 8021
.org 0x1000de
	lsls r1, r1, #1	@ 001000de 4900
.org 0x1000e0
	adds r0, r0, r1	@ 001000e0 4018
.org 0x1000e2
	str r0, [r4, #88]	@ 001000e2 a065
.org 0x1000e4
	ldr r1, [pc, #32]	@ 001000e4 0849
.org 0x1000e6
	ldrb r0, [r4, #9]	@ 001000e6 607a
.org 0x1000e8
	lsls r0, r0, #2	@ 001000e8 8000
.org 0x1000ea
	adds r0, r0, r1	@ 001000ea 4018
.org 0x1000ec
	movs r1, #1	@ 001000ec 0121
.org 0x1000ee
	str r1, [r4, #12]	@ 001000ee e160
.org 0x1000f0
	ldr r0, [r0, #0]	@ 001000f0 0068
.org 0x1000f2
	ldr r0, [r0, #4]	@ 001000f2 4068
.org 0x1000f4
	str r0, [r4, #20]	@ 001000f4 6061
.org 0x1000f6
	strb r5, [r4, #13]	@ 001000f6 6573
.org 0x1000f8
	strb r5, [r4, #15]	@ 001000f8 e573
.org 0x1000fa
	strb r5, [r4, #14]	@ 001000fa a573
.org 0x1000fc
	adds r0, r4, #0	@ 001000fc 201c
.org 0x1000fe
	bl 0x10010c	@ 001000fe 00f005f8
.org 0x100102
	pop {r4, r5}	@ 00100102 30bc
.org 0x100104
	pop {r0}	@ 00100104 01bc
.org 0x100106
	bx r0	@ 00100106 0047
