@ FUN_080327cc  entry 0x080327cc  size 20
.thumb
.org 0x327cc
FUN_080327cc:
	push {lr}	@ 000327cc 00b5
.org 0x327ce
	ldr r2, [pc, #16]	@ 000327ce 044a
.org 0x327d0
	ldrb r1, [r0, #14]	@ 000327d0 817b
.org 0x327d2
	lsls r1, r1, #2	@ 000327d2 8900
.org 0x327d4
	adds r1, r1, r2	@ 000327d4 8918
.org 0x327d6
	ldr r1, [r1, #0]	@ 000327d6 0968
.org 0x327d8
	bl 0x128f80	@ 000327d8 f6f0d2fb
.org 0x327dc
	pop {r0}	@ 000327dc 01bc
.org 0x327de
	bx r0	@ 000327de 0047
