@ FUN_0800a9d8  entry 0x0800a9d8  size 136
.thumb
.org 0xa9d8
FUN_0800a9d8:
	push {r4, r5, r6, r7, lr}	@ 0000a9d8 f0b5
.org 0xa9da
	mov r7, r8	@ 0000a9da 4746
.org 0xa9dc
	push {r7}	@ 0000a9dc 80b4
.org 0xa9de
	sub sp, #8	@ 0000a9de 82b0
.org 0xa9e0
	adds r7, r0, #0	@ 0000a9e0 071c
.org 0xa9e2
	ldr r0, [r7, #92]	@ 0000a9e2 f86d
.org 0xa9e4
	lsls r0, r0, #16	@ 0000a9e4 0004
.org 0xa9e6
	mov r8, r0	@ 0000a9e6 8046
.org 0xa9e8
	ldr r0, [pc, #116]	@ 0000a9e8 1d48
.org 0xa9ea
	ldr r1, [pc, #120]	@ 0000a9ea 1e49
.org 0xa9ec
	adds r0, r0, r1	@ 0000a9ec 4018
.org 0xa9ee
	ldrh r0, [r0, #0]	@ 0000a9ee 0088
.org 0xa9f0
	cmp r0, #0	@ 0000a9f0 0028
.org 0xa9f2
	beq.n 0xaa3e	@ 0000a9f2 24d0
.org 0xa9f4
	ldr r0, [pc, #112]	@ 0000a9f4 1c48
.org 0xa9f6
	ldr r0, [r0, #0]	@ 0000a9f6 0068
.org 0xa9f8
	ldr r1, [pc, #112]	@ 0000a9f8 1c49
.org 0xa9fa
	adds r0, r0, r1	@ 0000a9fa 4018
.org 0xa9fc
	mov r1, r8	@ 0000a9fc 4146
.org 0xa9fe
	lsrs r5, r1, #20	@ 0000a9fe 0d0d
.org 0xaa00
	lsls r5, r5, #1	@ 0000aa00 6d00
.org 0xaa02
	ldr r1, [pc, #108]	@ 0000aa02 1b49
.org 0xaa04
	adds r5, r5, r1	@ 0000aa04 6d18
.org 0xaa06
	ldrh r2, [r5, #0]	@ 0000aa06 2a88
.org 0xaa08
	movs r4, #248	@ 0000aa08 f824
.org 0xaa0a
	lsls r4, r4, #5	@ 0000aa0a 6401
.org 0xaa0c
	adds r1, r4, #0	@ 0000aa0c 211c
.org 0xaa0e
	ands r1, r2	@ 0000aa0e 1140
.org 0xaa10
	lsls r1, r1, #3	@ 0000aa10 c900
.org 0xaa12
	movs r2, #192	@ 0000aa12 c022
.org 0xaa14
	lsls r2, r2, #19	@ 0000aa14 d204
.org 0xaa16
	adds r1, r1, r2	@ 0000aa16 8918
.org 0xaa18
	movs r6, #128	@ 0000aa18 8026
.org 0xaa1a
	lsls r6, r6, #2	@ 0000aa1a b600
.org 0xaa1c
	adds r2, r6, #0	@ 0000aa1c 321c
.org 0xaa1e
	bl 0x128be0	@ 0000aa1e 1ef1dff8
.org 0xaa22
	movs r1, #0	@ 0000aa22 0021
.org 0xaa24
	ldrh r0, [r5, #0]	@ 0000aa24 2888
.org 0xaa26
	ands r4, r0	@ 0000aa26 0440
.org 0xaa28
	lsls r4, r4, #3	@ 0000aa28 e400
.org 0xaa2a
	ldr r0, [pc, #72]	@ 0000aa2a 1248
.org 0xaa2c
	adds r4, r4, r0	@ 0000aa2c 2418
.org 0xaa2e
	str r1, [sp, #0]	@ 0000aa2e 0091
.org 0xaa30
	movs r2, #128	@ 0000aa30 8022
.org 0xaa32
	lsls r2, r2, #17	@ 0000aa32 5204
.org 0xaa34
	orrs r2, r6	@ 0000aa34 3243
.org 0xaa36
	mov r0, sp	@ 0000aa36 6846
.org 0xaa38
	adds r1, r4, #0	@ 0000aa38 211c
.org 0xaa3a
	bl 0x128be0	@ 0000aa3a 1ef1d1f8
.org 0xaa3e
	mov r1, r8	@ 0000aa3e 4146
.org 0xaa40
	lsrs r2, r1, #20	@ 0000aa40 0a0d
.org 0xaa42
	lsls r2, r2, #2	@ 0000aa42 9200
.org 0xaa44
	ldr r0, [pc, #48]	@ 0000aa44 0c48
.org 0xaa46
	adds r3, r2, r0	@ 0000aa46 1318
.org 0xaa48
	ldr r1, [r7, #52]	@ 0000aa48 796b
.org 0xaa4a
	strh r1, [r3, #0]	@ 0000aa4a 1980
.org 0xaa4c
	adds r0, #2	@ 0000aa4c 0230
.org 0xaa4e
	adds r2, r2, r0	@ 0000aa4e 1218
.org 0xaa50
	ldr r0, [r7, #56]	@ 0000aa50 b86b
.org 0xaa52
	strh r0, [r2, #0]	@ 0000aa52 1080
.org 0xaa54
	add sp, #8	@ 0000aa54 02b0
.org 0xaa56
	pop {r3}	@ 0000aa56 08bc
.org 0xaa58
	mov r8, r3	@ 0000aa58 9846
.org 0xaa5a
	pop {r4, r5, r6, r7}	@ 0000aa5a f0bc
.org 0xaa5c
	pop {r0}	@ 0000aa5c 01bc
.org 0xaa5e
	bx r0	@ 0000aa5e 0047
