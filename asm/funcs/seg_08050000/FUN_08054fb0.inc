@ FUN_08054fb0  entry 0x08054fb0  size 56
.thumb
.org 0x54fb0
FUN_08054fb0:
	push {lr}	@ 00054fb0 00b5
.org 0x54fb2
	mov ip, r0	@ 00054fb2 8446
.org 0x54fb4
	mov r3, ip	@ 00054fb4 6346
.org 0x54fb6
	adds r3, #183	@ 00054fb6 b733
.org 0x54fb8
	ldrb r0, [r3, #0]	@ 00054fb8 1878
.org 0x54fba
	adds r0, #1	@ 00054fba 0130
.org 0x54fbc
	strb r0, [r3, #0]	@ 00054fbc 1870
.org 0x54fbe
	mov r2, ip	@ 00054fbe 6246
.org 0x54fc0
	adds r2, #184	@ 00054fc0 b832
.org 0x54fc2
	ldr r1, [pc, #32]	@ 00054fc2 0849
.org 0x54fc4
	ldrb r0, [r3, #0]	@ 00054fc4 1878
.org 0x54fc6
	lsls r0, r0, #1	@ 00054fc6 4000
.org 0x54fc8
	adds r0, r0, r1	@ 00054fc8 4018
.org 0x54fca
	movs r1, #0	@ 00054fca 0021
.org 0x54fcc
	ldrsh r0, [r0, r1]	@ 00054fcc 405e
.org 0x54fce
	lsls r0, r0, #4	@ 00054fce 0001
.org 0x54fd0
	ldr r1, [r2, #0]	@ 00054fd0 1168
.org 0x54fd2
	adds r1, r1, r0	@ 00054fd2 0918
.org 0x54fd4
	mov r0, ip	@ 00054fd4 6046
.org 0x54fd6
	str r1, [r0, #88]	@ 00054fd6 8165
.org 0x54fd8
	ldr r0, [r2, #0]	@ 00054fd8 1068
.org 0x54fda
	cmp r1, r0	@ 00054fda 8142
.org 0x54fdc
	beq.n 0x54fe8	@ 00054fdc 04d0
.org 0x54fde
	movs r0, #0	@ 00054fde 0020
.org 0x54fe0
	b.n 0x54fea	@ 00054fe0 03e0
.org 0x54fe2
	.byte 0x00	@ 00054fe2 data
.org 0x54fe3
	.byte 0x00	@ 00054fe3 data
.org 0x54fe4
	.byte 0x0c,0x93,0x12,0x08	@ 00054fe4 data
