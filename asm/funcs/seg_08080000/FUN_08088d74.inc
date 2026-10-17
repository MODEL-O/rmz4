@ FUN_08088d74  entry 0x08088d74  size 60
.thumb
.org 0x88d74
FUN_08088d74:
	push {r4, r5, r6, r7, lr}	@ 00088d74 f0b5
.org 0x88d76
	sub sp, #8	@ 00088d76 82b0
.org 0x88d78
	ldrb r1, [r0, #10]	@ 00088d78 817a
.org 0x88d7a
	lsrs r1, r1, #4	@ 00088d7a 0909
.org 0x88d7c
	movs r2, #1	@ 00088d7c 0122
.org 0x88d7e
	ands r1, r2	@ 00088d7e 1140
.org 0x88d80
	ldr r2, [r0, #84]	@ 00088d80 426d
.org 0x88d82
	str r2, [sp, #0]	@ 00088d82 0092
.org 0x88d84
	ldr r0, [r0, #88]	@ 00088d84 806d
.org 0x88d86
	str r0, [sp, #4]	@ 00088d86 0190
.org 0x88d88
	lsls r0, r1, #4	@ 00088d88 0801
.org 0x88d8a
	orrs r1, r0	@ 00088d8a 0143
.org 0x88d8c
	lsls r6, r1, #24	@ 00088d8c 0e06
.org 0x88d8e
	movs r5, #0	@ 00088d8e 0025
.org 0x88d90
	ldr r7, [pc, #28]	@ 00088d90 074f
.org 0x88d92
	movs r4, #3	@ 00088d92 0324
.org 0x88d94
	adds r1, r5, r7	@ 00088d94 e919
.org 0x88d96
	mov r0, sp	@ 00088d96 6846
.org 0x88d98
	movs r2, #0	@ 00088d98 0022
.org 0x88d9a
	lsrs r3, r6, #24	@ 00088d9a 330e
.org 0x88d9c
	bl 0xd4c8c	@ 00088d9c 4bf076ff
.org 0x88da0
	adds r5, #28	@ 00088da0 1c35
.org 0x88da2
	subs r4, #1	@ 00088da2 013c
.org 0x88da4
	cmp r4, #0	@ 00088da4 002c
.org 0x88da6
	bge.n 0x88d94	@ 00088da6 f5da
.org 0x88da8
	add sp, #8	@ 00088da8 02b0
.org 0x88daa
	pop {r4, r5, r6, r7}	@ 00088daa f0bc
.org 0x88dac
	pop {r0}	@ 00088dac 01bc
.org 0x88dae
	bx r0	@ 00088dae 0047
