@ FUN_080d25a8  entry 0x080d25a8  size 42
.thumb
.org 0xd25a8
FUN_080d25a8:
	push {r4, lr}	@ 000d25a8 10b5
.org 0xd25aa
	adds r4, r0, #0	@ 000d25aa 041c
.org 0xd25ac
	bl 0x1cff0	@ 000d25ac 4af720fd
.org 0xd25b0
	adds r0, r4, #0	@ 000d25b0 201c
.org 0xd25b2
	adds r0, #115	@ 000d25b2 7330
.org 0xd25b4
	ldrb r0, [r0, #0]	@ 000d25b4 0078
.org 0xd25b6
	cmp r0, #3	@ 000d25b6 0328
.org 0xd25b8
	bne.n 0xd25cc	@ 000d25b8 08d1
.org 0xd25ba
	ldr r1, [pc, #24]	@ 000d25ba 0649
.org 0xd25bc
	ldrb r0, [r4, #9]	@ 000d25bc 607a
.org 0xd25be
	lsls r0, r0, #2	@ 000d25be 8000
.org 0xd25c0
	adds r0, r0, r1	@ 000d25c0 4018
.org 0xd25c2
	movs r1, #2	@ 000d25c2 0221
.org 0xd25c4
	str r1, [r4, #12]	@ 000d25c4 e160
.org 0xd25c6
	ldr r0, [r0, #0]	@ 000d25c6 0068
.org 0xd25c8
	ldr r0, [r0, #8]	@ 000d25c8 8068
.org 0xd25ca
	str r0, [r4, #20]	@ 000d25ca 6061
.org 0xd25cc
	pop {r4}	@ 000d25cc 10bc
.org 0xd25ce
	pop {r0}	@ 000d25ce 01bc
.org 0xd25d0
	bx r0	@ 000d25d0 0047
