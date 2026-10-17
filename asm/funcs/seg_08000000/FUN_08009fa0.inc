@ FUN_08009fa0  entry 0x08009fa0  size 118
.thumb
.org 0x9fa0
FUN_08009fa0:
	push {r4, r5, r6, r7, lr}	@ 00009fa0 f0b5
.org 0x9fa2
	mov r7, r8	@ 00009fa2 4746
.org 0x9fa4
	push {r7}	@ 00009fa4 80b4
.org 0x9fa6
	sub sp, #8	@ 00009fa6 82b0
.org 0x9fa8
	adds r7, r0, #0	@ 00009fa8 071c
.org 0x9faa
	ldr r0, [r7, #92]	@ 00009faa f86d
.org 0x9fac
	lsls r0, r0, #16	@ 00009fac 0004
.org 0x9fae
	ldrb r1, [r7, #14]	@ 00009fae b97b
.org 0x9fb0
	mov r8, r1	@ 00009fb0 8846
.org 0x9fb2
	cmp r1, #0	@ 00009fb2 0029
.org 0x9fb4
	bne.n 0xa00a	@ 00009fb4 29d1
.org 0x9fb6
	lsrs r5, r0, #20	@ 00009fb6 050d
.org 0x9fb8
	lsls r5, r5, #1	@ 00009fb8 6d00
.org 0x9fba
	ldr r0, [pc, #92]	@ 00009fba 1748
.org 0x9fbc
	adds r5, r5, r0	@ 00009fbc 2d18
.org 0x9fbe
	ldr r1, [r7, #100]	@ 00009fbe 796e
.org 0x9fc0
	ldr r2, [pc, #88]	@ 00009fc0 164a
.org 0x9fc2
	adds r0, r2, #0	@ 00009fc2 101c
.org 0x9fc4
	orrs r1, r0	@ 00009fc4 0143
.org 0x9fc6
	strh r1, [r5, #0]	@ 00009fc6 2980
.org 0x9fc8
	ldr r0, [pc, #84]	@ 00009fc8 1548
.org 0x9fca
	ldr r0, [r0, #0]	@ 00009fca 0068
.org 0x9fcc
	ldr r2, [pc, #84]	@ 00009fcc 154a
.org 0x9fce
	adds r0, r0, r2	@ 00009fce 8018
.org 0x9fd0
	movs r4, #248	@ 00009fd0 f824
.org 0x9fd2
	lsls r4, r4, #5	@ 00009fd2 6401
.org 0x9fd4
	ands r1, r4	@ 00009fd4 2140
.org 0x9fd6
	lsls r1, r1, #3	@ 00009fd6 c900
.org 0x9fd8
	movs r2, #192	@ 00009fd8 c022
.org 0x9fda
	lsls r2, r2, #19	@ 00009fda d204
.org 0x9fdc
	adds r1, r1, r2	@ 00009fdc 8918
.org 0x9fde
	movs r6, #128	@ 00009fde 8026
.org 0x9fe0
	lsls r6, r6, #2	@ 00009fe0 b600
.org 0x9fe2
	adds r2, r6, #0	@ 00009fe2 321c
.org 0x9fe4
	bl 0x128be0	@ 00009fe4 1ef1fcfd
.org 0x9fe8
	ldrh r0, [r5, #0]	@ 00009fe8 2888
.org 0x9fea
	ands r4, r0	@ 00009fea 0440
.org 0x9fec
	lsls r4, r4, #3	@ 00009fec e400
.org 0x9fee
	ldr r0, [pc, #56]	@ 00009fee 0e48
.org 0x9ff0
	adds r4, r4, r0	@ 00009ff0 2418
.org 0x9ff2
	mov r1, r8	@ 00009ff2 4146
.org 0x9ff4
	str r1, [sp, #0]	@ 00009ff4 0091
.org 0x9ff6
	movs r2, #128	@ 00009ff6 8022
.org 0x9ff8
	lsls r2, r2, #17	@ 00009ff8 5204
.org 0x9ffa
	orrs r2, r6	@ 00009ffa 3243
.org 0x9ffc
	mov r0, sp	@ 00009ffc 6846
.org 0x9ffe
	adds r1, r4, #0	@ 00009ffe 211c
.org 0xa000
	bl 0x128be0	@ 0000a000 1ef1eefd
.org 0xa004
	ldrb r0, [r7, #14]	@ 0000a004 b87b
.org 0xa006
	adds r0, #1	@ 0000a006 0130
.org 0xa008
	strb r0, [r7, #14]	@ 0000a008 b873
.org 0xa00a
	add sp, #8	@ 0000a00a 02b0
.org 0xa00c
	pop {r3}	@ 0000a00c 08bc
.org 0xa00e
	mov r8, r3	@ 0000a00e 9846
.org 0xa010
	pop {r4, r5, r6, r7}	@ 0000a010 f0bc
.org 0xa012
	pop {r0}	@ 0000a012 01bc
.org 0xa014
	bx r0	@ 0000a014 0047
