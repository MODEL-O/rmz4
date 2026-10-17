@ FUN_0809eaf8  entry 0x0809eaf8  size 60
.thumb
.org 0x9eaf8
FUN_0809eaf8:
	push {r4, r5, lr}	@ 0009eaf8 30b5
.org 0x9eafa
	adds r4, r0, #0	@ 0009eafa 041c
.org 0x9eafc
	ldr r5, [r4, #40]	@ 0009eafc a56a
.org 0x9eafe
	ldr r1, [pc, #52]	@ 0009eafe 0d49
.org 0x9eb00
	ldrb r0, [r4, #9]	@ 0009eb00 607a
.org 0x9eb02
	lsls r0, r0, #2	@ 0009eb02 8000
.org 0x9eb04
	adds r0, r0, r1	@ 0009eb04 4018
.org 0x9eb06
	movs r1, #1	@ 0009eb06 0121
.org 0x9eb08
	str r1, [r4, #12]	@ 0009eb08 e160
.org 0x9eb0a
	ldr r0, [r0, #0]	@ 0009eb0a 0068
.org 0x9eb0c
	ldr r0, [r0, #4]	@ 0009eb0c 4068
.org 0x9eb0e
	str r0, [r4, #20]	@ 0009eb0e 6061
.org 0x9eb10
	ldrb r1, [r4, #10]	@ 0009eb10 a17a
.org 0x9eb12
	movs r0, #1	@ 0009eb12 0120
.org 0x9eb14
	orrs r0, r1	@ 0009eb14 0843
.org 0x9eb16
	movs r1, #2	@ 0009eb16 0221
.org 0x9eb18
	orrs r0, r1	@ 0009eb18 0843
.org 0x9eb1a
	strb r0, [r4, #10]	@ 0009eb1a a072
.org 0x9eb1c
	adds r0, r4, #0	@ 0009eb1c 201c
.org 0x9eb1e
	bl 0x1cc9c	@ 0009eb1e 7ef7bdf8
.org 0x9eb22
	ldrb r1, [r4, #11]	@ 0009eb22 e17a
.org 0x9eb24
	movs r0, #16	@ 0009eb24 1020
.org 0x9eb26
	orrs r0, r1	@ 0009eb26 0843
.org 0x9eb28
	strb r0, [r4, #11]	@ 0009eb28 e072
.org 0x9eb2a
	ldrb r0, [r5, #28]	@ 0009eb2a 287f
.org 0x9eb2c
	strb r0, [r4, #29]	@ 0009eb2c 6077
.org 0x9eb2e
	pop {r4, r5}	@ 0009eb2e 30bc
.org 0x9eb30
	pop {r0}	@ 0009eb30 01bc
.org 0x9eb32
	bx r0	@ 0009eb32 0047
