@ FUN_08018cb4  entry 0x08018cb4  size 102
.thumb
.org 0x18cb4
FUN_08018cb4:
	push {r4, r5, r6, r7, lr}	@ 00018cb4 f0b5
.org 0x18cb6
	sub sp, #8	@ 00018cb6 82b0
.org 0x18cb8
	adds r7, r0, #0	@ 00018cb8 071c
.org 0x18cba
	ldr r0, [r7, #92]	@ 00018cba f86d
.org 0x18cbc
	lsls r0, r0, #16	@ 00018cbc 0004
.org 0x18cbe
	ldrb r2, [r7, #14]	@ 00018cbe ba7b
.org 0x18cc0
	cmp r2, #0	@ 00018cc0 002a
.org 0x18cc2
	bne.n 0x18d12	@ 00018cc2 26d1
.org 0x18cc4
	lsrs r5, r0, #20	@ 00018cc4 050d
.org 0x18cc6
	lsls r5, r5, #1	@ 00018cc6 6d00
.org 0x18cc8
	ldr r0, [pc, #80]	@ 00018cc8 1448
.org 0x18cca
	adds r5, r5, r0	@ 00018cca 2d18
.org 0x18ccc
	ldr r1, [r7, #100]	@ 00018ccc 796e
.org 0x18cce
	ldr r3, [pc, #80]	@ 00018cce 144b
.org 0x18cd0
	adds r0, r3, #0	@ 00018cd0 181c
.org 0x18cd2
	orrs r1, r0	@ 00018cd2 0143
.org 0x18cd4
	strh r1, [r5, #0]	@ 00018cd4 2980
.org 0x18cd6
	movs r4, #248	@ 00018cd6 f824
.org 0x18cd8
	lsls r4, r4, #5	@ 00018cd8 6401
.org 0x18cda
	ands r1, r4	@ 00018cda 2140
.org 0x18cdc
	lsls r1, r1, #3	@ 00018cdc c900
.org 0x18cde
	movs r0, #192	@ 00018cde c020
.org 0x18ce0
	lsls r0, r0, #19	@ 00018ce0 c004
.org 0x18ce2
	adds r1, r1, r0	@ 00018ce2 0918
.org 0x18ce4
	str r2, [sp, #0]	@ 00018ce4 0092
.org 0x18ce6
	movs r6, #128	@ 00018ce6 8026
.org 0x18ce8
	lsls r6, r6, #2	@ 00018ce8 b600
.org 0x18cea
	ldr r2, [pc, #56]	@ 00018cea 0e4a
.org 0x18cec
	mov r0, sp	@ 00018cec 6846
.org 0x18cee
	bl 0x128be0	@ 00018cee 0ff177ff
.org 0x18cf2
	ldr r0, [pc, #52]	@ 00018cf2 0d48
.org 0x18cf4
	ldr r0, [r0, #0]	@ 00018cf4 0068
.org 0x18cf6
	ldr r1, [pc, #52]	@ 00018cf6 0d49
.org 0x18cf8
	adds r0, r0, r1	@ 00018cf8 4018
.org 0x18cfa
	ldrh r1, [r5, #0]	@ 00018cfa 2988
.org 0x18cfc
	ands r4, r1	@ 00018cfc 0c40
.org 0x18cfe
	lsls r4, r4, #3	@ 00018cfe e400
.org 0x18d00
	ldr r3, [pc, #44]	@ 00018d00 0b4b
.org 0x18d02
	adds r4, r4, r3	@ 00018d02 e418
.org 0x18d04
	adds r1, r4, #0	@ 00018d04 211c
.org 0x18d06
	adds r2, r6, #0	@ 00018d06 321c
.org 0x18d08
	bl 0x128be0	@ 00018d08 0ff16aff
.org 0x18d0c
	ldrb r0, [r7, #14]	@ 00018d0c b87b
.org 0x18d0e
	adds r0, #1	@ 00018d0e 0130
.org 0x18d10
	strb r0, [r7, #14]	@ 00018d10 b873
.org 0x18d12
	add sp, #8	@ 00018d12 02b0
.org 0x18d14
	pop {r4, r5, r6, r7}	@ 00018d14 f0bc
.org 0x18d16
	pop {r0}	@ 00018d16 01bc
.org 0x18d18
	bx r0	@ 00018d18 0047
