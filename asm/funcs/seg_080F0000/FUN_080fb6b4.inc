@ FUN_080fb6b4  entry 0x080fb6b4  size 46
.thumb
.org 0xfb6b4
FUN_080fb6b4:
	push {r4, r5, lr}	@ 000fb6b4 30b5
.org 0xfb6b6
	adds r4, r0, #0	@ 000fb6b6 041c
.org 0xfb6b8
	adds r5, r4, #0	@ 000fb6b8 251c
.org 0xfb6ba
	adds r5, #192	@ 000fb6ba c035
.org 0xfb6bc
	ldr r0, [r5, #0]	@ 000fb6bc 2868
.org 0xfb6be
	bl 0x2b3e4	@ 000fb6be 2ff791fe
.org 0xfb6c2
	cmp r0, #0	@ 000fb6c2 0028
.org 0xfb6c4
	beq.n 0xfb6dc	@ 000fb6c4 0ad0
.org 0xfb6c6
	adds r0, r4, #0	@ 000fb6c6 201c
.org 0xfb6c8
	adds r0, #116	@ 000fb6c8 7430
.org 0xfb6ca
	ldr r1, [pc, #24]	@ 000fb6ca 0649
.org 0xfb6cc
	bl 0x5784	@ 000fb6cc 0af75af8
.org 0xfb6d0
	movs r1, #0	@ 000fb6d0 0021
.org 0xfb6d2
	str r1, [r5, #0]	@ 000fb6d2 2960
.org 0xfb6d4
	ldrb r0, [r4, #13]	@ 000fb6d4 607b
.org 0xfb6d6
	cmp r0, #1	@ 000fb6d6 0128
.org 0xfb6d8
	bne.n 0xfb6dc	@ 000fb6d8 00d1
.org 0xfb6da
	strb r1, [r4, #14]	@ 000fb6da a173
.org 0xfb6dc
	pop {r4, r5}	@ 000fb6dc 30bc
.org 0xfb6de
	pop {r0}	@ 000fb6de 01bc
.org 0xfb6e0
	bx r0	@ 000fb6e0 0047
