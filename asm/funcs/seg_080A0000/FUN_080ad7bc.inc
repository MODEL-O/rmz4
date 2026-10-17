@ FUN_080ad7bc  entry 0x080ad7bc  size 20
.thumb
.org 0xad7bc
FUN_080ad7bc:
	push {lr}	@ 000ad7bc 00b5
.org 0xad7be
	ldr r2, [pc, #16]	@ 000ad7be 044a
.org 0xad7c0
	ldrb r1, [r0, #16]	@ 000ad7c0 017c
.org 0xad7c2
	lsls r1, r1, #2	@ 000ad7c2 8900
.org 0xad7c4
	adds r1, r1, r2	@ 000ad7c4 8918
.org 0xad7c6
	ldr r1, [r1, #0]	@ 000ad7c6 0968
.org 0xad7c8
	bl 0x128f80	@ 000ad7c8 7bf0dafb
.org 0xad7cc
	pop {r0}	@ 000ad7cc 01bc
.org 0xad7ce
	bx r0	@ 000ad7ce 0047
