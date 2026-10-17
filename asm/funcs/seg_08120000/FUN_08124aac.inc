@ FUN_08124aac  entry 0x08124aac  size 36
.thumb
.org 0x124aac
FUN_08124aac:
	push {lr}	@ 00124aac 00b5
.org 0x124aae
	ldr r1, [pc, #32]	@ 00124aae 0849
.org 0x124ab0
	adds r2, r0, r1	@ 00124ab0 4218
.org 0x124ab2
	ldr r0, [r2, #20]	@ 00124ab2 5069
.org 0x124ab4
	cmp r0, #0	@ 00124ab4 0028
.org 0x124ab6
	beq.n 0x124ac0	@ 00124ab6 03d0
.org 0x124ab8
	subs r0, #1	@ 00124ab8 0138
.org 0x124aba
	str r0, [r2, #20]	@ 00124aba 5061
.org 0x124abc
	cmp r0, #0	@ 00124abc 0028
.org 0x124abe
	bne.n 0x124aca	@ 00124abe 04d1
.org 0x124ac0
	ldrb r0, [r2, #24]	@ 00124ac0 107e
.org 0x124ac2
	adds r0, #1	@ 00124ac2 0130
.org 0x124ac4
	movs r1, #0	@ 00124ac4 0021
.org 0x124ac6
	strb r0, [r2, #24]	@ 00124ac6 1076
.org 0x124ac8
	strb r1, [r2, #25]	@ 00124ac8 5176
.org 0x124aca
	movs r0, #1	@ 00124aca 0120
.org 0x124acc
	pop {r1}	@ 00124acc 02bc
.org 0x124ace
	bx r1	@ 00124ace 0847
