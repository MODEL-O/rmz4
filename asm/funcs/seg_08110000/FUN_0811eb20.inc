@ FUN_0811eb20  entry 0x0811eb20  size 124
.thumb
.org 0x11eb20
FUN_0811eb20:
	push {r4, r5, r6, r7, lr}	@ 0011eb20 f0b5
.org 0x11eb22
	mov r7, r9	@ 0011eb22 4f46
.org 0x11eb24
	mov r6, r8	@ 0011eb24 4646
.org 0x11eb26
	push {r6, r7}	@ 0011eb26 c0b4
.org 0x11eb28
	lsls r1, r1, #24	@ 0011eb28 0906
.org 0x11eb2a
	lsrs r5, r1, #24	@ 0011eb2a 0d0e
.org 0x11eb2c
	ldr r1, [pc, #108]	@ 0011eb2c 1b49
.org 0x11eb2e
	adds r6, r0, r1	@ 0011eb2e 4618
.org 0x11eb30
	strb r5, [r6, #6]	@ 0011eb30 b571
.org 0x11eb32
	ldr r0, [pc, #108]	@ 0011eb32 1b48
.org 0x11eb34
	ldr r1, [pc, #108]	@ 0011eb34 1b49
.org 0x11eb36
	mov r8, r1	@ 0011eb36 8846
.org 0x11eb38
	ldrh r2, [r1, #0]	@ 0011eb38 0a88
.org 0x11eb3a
	movs r1, #12	@ 0011eb3a 0c21
.org 0x11eb3c
	mov r9, r1	@ 0011eb3c 8946
.org 0x11eb3e
	ands r1, r2	@ 0011eb3e 1140
.org 0x11eb40
	lsls r1, r1, #12	@ 0011eb40 0903
.org 0x11eb42
	ldr r7, [pc, #100]	@ 0011eb42 194f
.org 0x11eb44
	ldr r2, [r7, #4]	@ 0011eb44 7a68
.org 0x11eb46
	adds r1, r1, r2	@ 0011eb46 8918
.org 0x11eb48
	bl 0x1ea4	@ 0011eb48 e3f6acf9
.org 0x11eb4c
	cmp r5, #0	@ 0011eb4c 002d
.org 0x11eb4e
	beq.n 0x11eb90	@ 0011eb4e 1fd0
.org 0x11eb50
	lsls r4, r5, #2	@ 0011eb50 ac00
.org 0x11eb52
	adds r4, r4, r5	@ 0011eb52 6419
.org 0x11eb54
	lsls r4, r4, #2	@ 0011eb54 a400
.org 0x11eb56
	ldr r1, [pc, #72]	@ 0011eb56 1249
.org 0x11eb58
	adds r0, r4, r1	@ 0011eb58 6018
.org 0x11eb5a
	mov r1, r8	@ 0011eb5a 4146
.org 0x11eb5c
	ldrh r2, [r1, #0]	@ 0011eb5c 0a88
.org 0x11eb5e
	mov r1, r9	@ 0011eb5e 4946
.org 0x11eb60
	ands r1, r2	@ 0011eb60 1140
.org 0x11eb62
	lsls r1, r1, #12	@ 0011eb62 0903
.org 0x11eb64
	ldr r2, [r7, #0]	@ 0011eb64 3a68
.org 0x11eb66
	adds r1, r1, r2	@ 0011eb66 8918
.org 0x11eb68
	bl 0x1ea4	@ 0011eb68 e3f69cf9
.org 0x11eb6c
	ldr r0, [pc, #60]	@ 0011eb6c 0f48
.org 0x11eb6e
	adds r4, r4, r0	@ 0011eb6e 2418
.org 0x11eb70
	adds r0, r4, #0	@ 0011eb70 201c
.org 0x11eb72
	movs r1, #32	@ 0011eb72 2021
.org 0x11eb74
	bl 0x2208	@ 0011eb74 e3f648fb
.org 0x11eb78
	cmp r5, #41	@ 0011eb78 292d
.org 0x11eb7a
	bne.n 0x11eb80	@ 0011eb7a 01d1
.org 0x11eb7c
	movs r0, #0	@ 0011eb7c 0020
.org 0x11eb7e
	strb r0, [r6, #8]	@ 0011eb7e 3072
.org 0x11eb80
	adds r0, r5, #0	@ 0011eb80 281c
.org 0x11eb82
	subs r0, #44	@ 0011eb82 2c38
.org 0x11eb84
	lsls r0, r0, #24	@ 0011eb84 0006
.org 0x11eb86
	lsrs r0, r0, #24	@ 0011eb86 000e
.org 0x11eb88
	cmp r0, #1	@ 0011eb88 0128
.org 0x11eb8a
	bhi.n 0x11eb90	@ 0011eb8a 01d8
.org 0x11eb8c
	movs r0, #41	@ 0011eb8c 2920
.org 0x11eb8e
	strb r0, [r6, #6]	@ 0011eb8e b071
.org 0x11eb90
	pop {r3, r4}	@ 0011eb90 18bc
.org 0x11eb92
	mov r8, r3	@ 0011eb92 9846
.org 0x11eb94
	mov r9, r4	@ 0011eb94 a146
.org 0x11eb96
	pop {r4, r5, r6, r7}	@ 0011eb96 f0bc
.org 0x11eb98
	pop {r0}	@ 0011eb98 01bc
.org 0x11eb9a
	bx r0	@ 0011eb9a 0047
