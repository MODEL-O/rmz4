@ FUN_08066160  entry 0x08066160  size 42
.thumb
.org 0x66160
FUN_08066160:
	push {r4, lr}	@ 00066160 10b5
.org 0x66162
	sub sp, #8	@ 00066162 82b0
.org 0x66164
	adds r4, r0, #0	@ 00066164 041c
.org 0x66166
	ldr r1, [pc, #36]	@ 00066166 0949
.org 0x66168
	mov r0, sp	@ 00066168 6846
.org 0x6616a
	movs r2, #5	@ 0006616a 0522
.org 0x6616c
	bl 0x129258	@ 0006616c c3f074f8
.org 0x66170
	adds r4, #164	@ 00066170 a434
.org 0x66172
	movs r1, #0	@ 00066172 0021
.org 0x66174
	ldrsh r0, [r4, r1]	@ 00066174 605e
.org 0x66176
	cmp r0, #0	@ 00066176 0028
.org 0x66178
	bge.n 0x6617c	@ 00066178 00da
.org 0x6617a
	adds r0, #15	@ 0006617a 0f30
.org 0x6617c
	asrs r0, r0, #4	@ 0006617c 0011
.org 0x6617e
	add r0, sp	@ 0006617e 6844
.org 0x66180
	ldrb r0, [r0, #0]	@ 00066180 0078
.org 0x66182
	add sp, #8	@ 00066182 02b0
.org 0x66184
	pop {r4}	@ 00066184 10bc
.org 0x66186
	pop {r1}	@ 00066186 02bc
.org 0x66188
	bx r1	@ 00066188 0847
