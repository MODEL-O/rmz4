@ FUN_080843b4  entry 0x080843b4  size 56
.thumb
.org 0x843b4
FUN_080843b4:
	push {r4, lr}	@ 000843b4 10b5
.org 0x843b6
	adds r4, r0, #0	@ 000843b6 041c
.org 0x843b8
	ldrb r0, [r4, #14]	@ 000843b8 a07b
.org 0x843ba
	cmp r0, #0	@ 000843ba 0028
.org 0x843bc
	bne.n 0x843d0	@ 000843bc 08d1
.org 0x843be
	ldr r1, [pc, #44]	@ 000843be 0b49
.org 0x843c0
	adds r0, r4, #0	@ 000843c0 201c
.org 0x843c2
	bl 0x1cf00	@ 000843c2 98f79dfd
.org 0x843c6
	movs r0, #8	@ 000843c6 0820
.org 0x843c8
	strb r0, [r4, #18]	@ 000843c8 a074
.org 0x843ca
	ldrb r0, [r4, #14]	@ 000843ca a07b
.org 0x843cc
	adds r0, #1	@ 000843cc 0130
.org 0x843ce
	strb r0, [r4, #14]	@ 000843ce a073
.org 0x843d0
	ldrb r0, [r4, #18]	@ 000843d0 a07c
.org 0x843d2
	subs r0, #1	@ 000843d2 0138
.org 0x843d4
	strb r0, [r4, #18]	@ 000843d4 a074
.org 0x843d6
	lsls r0, r0, #24	@ 000843d6 0006
.org 0x843d8
	lsrs r0, r0, #24	@ 000843d8 000e
.org 0x843da
	cmp r0, #255	@ 000843da ff28
.org 0x843dc
	bne.n 0x843e6	@ 000843dc 03d1
.org 0x843de
	movs r0, #2	@ 000843de 0220
.org 0x843e0
	strb r0, [r4, #13]	@ 000843e0 6073
.org 0x843e2
	movs r0, #0	@ 000843e2 0020
.org 0x843e4
	strb r0, [r4, #14]	@ 000843e4 a073
.org 0x843e6
	pop {r4}	@ 000843e6 10bc
.org 0x843e8
	pop {r0}	@ 000843e8 01bc
.org 0x843ea
	bx r0	@ 000843ea 0047
