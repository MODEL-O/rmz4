@ FUN_080933c0  entry 0x080933c0  size 32
.thumb
.org 0x933c0
FUN_080933c0:
	push {r4, lr}	@ 000933c0 10b5
.org 0x933c2
	adds r4, r0, #0	@ 000933c2 041c
.org 0x933c4
	ldr r1, [r4, #84]	@ 000933c4 616d
.org 0x933c6
	ldr r2, [r4, #88]	@ 000933c6 a26d
.org 0x933c8
	bl 0x947b4	@ 000933c8 01f0f4f9
.org 0x933cc
	adds r1, r0, #0	@ 000933cc 011c
.org 0x933ce
	cmp r1, #0	@ 000933ce 0029
.org 0x933d0
	bne.n 0x933da	@ 000933d0 03d1
.org 0x933d2
	movs r0, #8	@ 000933d2 0820
.org 0x933d4
	strb r0, [r4, #13]	@ 000933d4 6073
.org 0x933d6
	strb r1, [r4, #14]	@ 000933d6 a173
.org 0x933d8
	strb r1, [r4, #15]	@ 000933d8 e173
.org 0x933da
	pop {r4}	@ 000933da 10bc
.org 0x933dc
	pop {r0}	@ 000933dc 01bc
.org 0x933de
	bx r0	@ 000933de 0047
