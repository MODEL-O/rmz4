@ FUN_0801df34  entry 0x0801df34  size 28
.thumb
.org 0x1df34
FUN_0801df34:
	push {lr}	@ 0001df34 00b5
.org 0x1df36
	adds r3, r0, #0	@ 0001df36 031c
.org 0x1df38
	movs r0, #8	@ 0001df38 0820
.org 0x1df3a
	ldrsb r0, [r3, r0]	@ 0001df3a 1856
.org 0x1df3c
	cmp r0, #8	@ 0001df3c 0828
.org 0x1df3e
	bls.n 0x1df42	@ 0001df3e 00d9
.org 0x1df40
	b.n 0x1e0c6	@ 0001df40 c1e0
.org 0x1df42
	lsls r0, r0, #2	@ 0001df42 8000
.org 0x1df44
	ldr r1, [pc, #4]	@ 0001df44 0149
.org 0x1df46
	adds r0, r0, r1	@ 0001df46 4018
.org 0x1df48
	ldr r0, [r0, #0]	@ 0001df48 0068
.org 0x1df4a
	mov pc, r0	@ 0001df4a 8746
.org 0x1df4c
	.byte 0x50,0xdf,0x01,0x08	@ 0001df4c data
