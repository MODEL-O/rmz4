@ FUN_0808c8b8  entry 0x0808c8b8  size 62
.thumb
.org 0x8c8b8
FUN_0808c8b8:
	push {r4, lr}	@ 0008c8b8 10b5
.org 0x8c8ba
	adds r4, r0, #0	@ 0008c8ba 041c
.org 0x8c8bc
	ldrb r0, [r4, #15]	@ 0008c8bc e07b
.org 0x8c8be
	cmp r0, #0	@ 0008c8be 0028
.org 0x8c8c0
	bne.n 0x8c8d6	@ 0008c8c0 09d1
.org 0x8c8c2
	movs r1, #144	@ 0008c8c2 9021
.org 0x8c8c4
	lsls r1, r1, #6	@ 0008c8c4 8901
.org 0x8c8c6
	adds r0, r4, #0	@ 0008c8c6 201c
.org 0x8c8c8
	bl 0x1cf00	@ 0008c8c8 90f71afb
.org 0x8c8cc
	movs r0, #48	@ 0008c8cc 3020
.org 0x8c8ce
	strb r0, [r4, #18]	@ 0008c8ce a074
.org 0x8c8d0
	ldrb r0, [r4, #15]	@ 0008c8d0 e07b
.org 0x8c8d2
	adds r0, #1	@ 0008c8d2 0130
.org 0x8c8d4
	strb r0, [r4, #15]	@ 0008c8d4 e073
.org 0x8c8d6
	adds r0, r4, #0	@ 0008c8d6 201c
.org 0x8c8d8
	bl 0x1cff0	@ 0008c8d8 90f78afb
.org 0x8c8dc
	ldrb r0, [r4, #18]	@ 0008c8dc a07c
.org 0x8c8de
	subs r0, #1	@ 0008c8de 0138
.org 0x8c8e0
	strb r0, [r4, #18]	@ 0008c8e0 a074
.org 0x8c8e2
	lsls r0, r0, #24	@ 0008c8e2 0006
.org 0x8c8e4
	lsrs r0, r0, #24	@ 0008c8e4 000e
.org 0x8c8e6
	cmp r0, #0	@ 0008c8e6 0028
.org 0x8c8e8
	bne.n 0x8c8f0	@ 0008c8e8 02d1
.org 0x8c8ea
	strb r0, [r4, #13]	@ 0008c8ea 6073
.org 0x8c8ec
	strb r0, [r4, #14]	@ 0008c8ec a073
.org 0x8c8ee
	strb r0, [r4, #15]	@ 0008c8ee e073
.org 0x8c8f0
	pop {r4}	@ 0008c8f0 10bc
.org 0x8c8f2
	pop {r0}	@ 0008c8f2 01bc
.org 0x8c8f4
	bx r0	@ 0008c8f4 0047
