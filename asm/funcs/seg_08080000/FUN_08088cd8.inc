@ FUN_08088cd8  entry 0x08088cd8  size 60
.thumb
.org 0x88cd8
FUN_08088cd8:
	push {r4, r5, r6, r7, lr}	@ 00088cd8 f0b5
.org 0x88cda
	sub sp, #8	@ 00088cda 82b0
.org 0x88cdc
	ldrb r1, [r0, #10]	@ 00088cdc 817a
.org 0x88cde
	lsrs r1, r1, #4	@ 00088cde 0909
.org 0x88ce0
	movs r2, #1	@ 00088ce0 0122
.org 0x88ce2
	ands r1, r2	@ 00088ce2 1140
.org 0x88ce4
	ldr r2, [r0, #84]	@ 00088ce4 426d
.org 0x88ce6
	str r2, [sp, #0]	@ 00088ce6 0092
.org 0x88ce8
	ldr r0, [r0, #88]	@ 00088ce8 806d
.org 0x88cea
	str r0, [sp, #4]	@ 00088cea 0190
.org 0x88cec
	lsls r0, r1, #4	@ 00088cec 0801
.org 0x88cee
	orrs r1, r0	@ 00088cee 0143
.org 0x88cf0
	lsls r6, r1, #24	@ 00088cf0 0e06
.org 0x88cf2
	movs r5, #0	@ 00088cf2 0025
.org 0x88cf4
	ldr r7, [pc, #28]	@ 00088cf4 074f
.org 0x88cf6
	movs r4, #5	@ 00088cf6 0524
.org 0x88cf8
	adds r1, r5, r7	@ 00088cf8 e919
.org 0x88cfa
	mov r0, sp	@ 00088cfa 6846
.org 0x88cfc
	movs r2, #0	@ 00088cfc 0022
.org 0x88cfe
	lsrs r3, r6, #24	@ 00088cfe 330e
.org 0x88d00
	bl 0xd4c8c	@ 00088d00 4bf0c4ff
.org 0x88d04
	adds r5, #28	@ 00088d04 1c35
.org 0x88d06
	subs r4, #1	@ 00088d06 013c
.org 0x88d08
	cmp r4, #0	@ 00088d08 002c
.org 0x88d0a
	bge.n 0x88cf8	@ 00088d0a f5da
.org 0x88d0c
	add sp, #8	@ 00088d0c 02b0
.org 0x88d0e
	pop {r4, r5, r6, r7}	@ 00088d0e f0bc
.org 0x88d10
	pop {r0}	@ 00088d10 01bc
.org 0x88d12
	bx r0	@ 00088d12 0047
