@ FUN_08019de4  entry 0x08019de4  size 28
.thumb
.org 0x19de4
FUN_08019de4:
	push {lr}	@ 00019de4 00b5
.org 0x19de6
	adds r1, r0, #0	@ 00019de6 011c
.org 0x19de8
	ldrb r2, [r1, #14]	@ 00019de8 8a7b
.org 0x19dea
	cmp r2, #0	@ 00019dea 002a
.org 0x19dec
	bne.n 0x19dfc	@ 00019dec 06d1
.org 0x19dee
	movs r0, #255	@ 00019dee ff20
.org 0x19df0
	lsls r0, r0, #2	@ 00019df0 8000
.org 0x19df2
	str r0, [r1, #76]	@ 00019df2 c864
.org 0x19df4
	movs r0, #192	@ 00019df4 c020
.org 0x19df6
	str r0, [r1, #68]	@ 00019df6 4864
.org 0x19df8
	adds r0, r2, #1	@ 00019df8 501c
.org 0x19dfa
	strb r0, [r1, #14]	@ 00019dfa 8873
.org 0x19dfc
	pop {r0}	@ 00019dfc 01bc
.org 0x19dfe
	bx r0	@ 00019dfe 0047
