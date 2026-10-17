@ FUN_080eb198  entry 0x080eb198  size 20
.thumb
.org 0xeb198
FUN_080eb198:
	push {lr}	@ 000eb198 00b5
.org 0xeb19a
	adds r1, r0, #0	@ 000eb19a 011c
.org 0xeb19c
	ldrb r0, [r1, #9]	@ 000eb19c 487a
.org 0xeb19e
	cmp r0, #3	@ 000eb19e 0328
.org 0xeb1a0
	bne.n 0xeb1a8	@ 000eb1a0 02d1
.org 0xeb1a2
	adds r1, #186	@ 000eb1a2 ba31
.org 0xeb1a4
	ldr r0, [pc, #4]	@ 000eb1a4 0148
.org 0xeb1a6
	strh r0, [r1, #0]	@ 000eb1a6 0880
.org 0xeb1a8
	pop {r0}	@ 000eb1a8 01bc
.org 0xeb1aa
	bx r0	@ 000eb1aa 0047
