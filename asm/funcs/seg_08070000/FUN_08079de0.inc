@ FUN_08079de0  entry 0x08079de0  size 28
.thumb
.org 0x79de0
FUN_08079de0:
	push {lr}	@ 00079de0 00b5
.org 0x79de2
	adds r2, r0, #0	@ 00079de2 021c
.org 0x79de4
	ldr r0, [r2, #24]	@ 00079de4 9069
.org 0x79de6
	ldrb r1, [r0, #9]	@ 00079de6 417a
.org 0x79de8
	movs r3, #1	@ 00079de8 0123
.org 0x79dea
	adds r0, r3, #0	@ 00079dea 181c
.org 0x79dec
	ands r0, r1	@ 00079dec 0840
.org 0x79dee
	cmp r0, #0	@ 00079dee 0028
.org 0x79df0
	beq.n 0x79df8	@ 00079df0 02d0
.org 0x79df2
	movs r0, #0	@ 00079df2 0020
.org 0x79df4
	strb r3, [r2, #13]	@ 00079df4 5373
.org 0x79df6
	strb r0, [r2, #14]	@ 00079df6 9073
.org 0x79df8
	pop {r0}	@ 00079df8 01bc
.org 0x79dfa
	bx r0	@ 00079dfa 0047
