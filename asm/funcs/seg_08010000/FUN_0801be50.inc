@ FUN_0801be50  entry 0x0801be50  size 196
.thumb
.org 0x1be50
FUN_0801be50:
	push {r4, r5, r6, r7, lr}	@ 0001be50 f0b5
.org 0x1be52
	mov r7, r9	@ 0001be52 4f46
.org 0x1be54
	mov r6, r8	@ 0001be54 4646
.org 0x1be56
	push {r6, r7}	@ 0001be56 c0b4
.org 0x1be58
	sub sp, #8	@ 0001be58 82b0
.org 0x1be5a
	adds r7, r0, #0	@ 0001be5a 071c
.org 0x1be5c
	ldr r0, [r7, #92]	@ 0001be5c f86d
.org 0x1be5e
	lsls r5, r0, #16	@ 0001be5e 0504
.org 0x1be60
	lsrs r0, r5, #16	@ 0001be60 280c
.org 0x1be62
	mov r9, r0	@ 0001be62 8146
.org 0x1be64
	ldr r1, [pc, #100]	@ 0001be64 1949
.org 0x1be66
	mov r8, r1	@ 0001be66 8846
.org 0x1be68
	ldr r0, [pc, #100]	@ 0001be68 1948
.org 0x1be6a
	add r0, r8	@ 0001be6a 4044
.org 0x1be6c
	ldrh r0, [r0, #0]	@ 0001be6c 0088
.org 0x1be6e
	cmp r0, #0	@ 0001be6e 0028
.org 0x1be70
	beq.n 0x1beba	@ 0001be70 23d0
.org 0x1be72
	ldr r0, [pc, #96]	@ 0001be72 1848
.org 0x1be74
	ldr r0, [r0, #0]	@ 0001be74 0068
.org 0x1be76
	ldr r1, [pc, #96]	@ 0001be76 1849
.org 0x1be78
	adds r0, r0, r1	@ 0001be78 4018
.org 0x1be7a
	lsrs r5, r5, #20	@ 0001be7a 2d0d
.org 0x1be7c
	lsls r5, r5, #1	@ 0001be7c 6d00
.org 0x1be7e
	ldr r1, [pc, #92]	@ 0001be7e 1749
.org 0x1be80
	adds r5, r5, r1	@ 0001be80 6d18
.org 0x1be82
	ldrh r2, [r5, #0]	@ 0001be82 2a88
.org 0x1be84
	movs r4, #248	@ 0001be84 f824
.org 0x1be86
	lsls r4, r4, #5	@ 0001be86 6401
.org 0x1be88
	adds r1, r4, #0	@ 0001be88 211c
.org 0x1be8a
	ands r1, r2	@ 0001be8a 1140
.org 0x1be8c
	lsls r1, r1, #3	@ 0001be8c c900
.org 0x1be8e
	movs r2, #192	@ 0001be8e c022
.org 0x1be90
	lsls r2, r2, #19	@ 0001be90 d204
.org 0x1be92
	adds r1, r1, r2	@ 0001be92 8918
.org 0x1be94
	movs r6, #128	@ 0001be94 8026
.org 0x1be96
	lsls r6, r6, #2	@ 0001be96 b600
.org 0x1be98
	adds r2, r6, #0	@ 0001be98 321c
.org 0x1be9a
	bl 0x128be0	@ 0001be9a 0cf1a1fe
.org 0x1be9e
	movs r1, #0	@ 0001be9e 0021
.org 0x1bea0
	ldrh r0, [r5, #0]	@ 0001bea0 2888
.org 0x1bea2
	ands r4, r0	@ 0001bea2 0440
.org 0x1bea4
	lsls r4, r4, #3	@ 0001bea4 e400
.org 0x1bea6
	ldr r0, [pc, #56]	@ 0001bea6 0e48
.org 0x1bea8
	adds r4, r4, r0	@ 0001bea8 2418
.org 0x1beaa
	str r1, [sp, #0]	@ 0001beaa 0091
.org 0x1beac
	movs r2, #128	@ 0001beac 8022
.org 0x1beae
	lsls r2, r2, #17	@ 0001beae 5204
.org 0x1beb0
	orrs r2, r6	@ 0001beb0 3243
.org 0x1beb2
	mov r0, sp	@ 0001beb2 6846
.org 0x1beb4
	adds r1, r4, #0	@ 0001beb4 211c
.org 0x1beb6
	bl 0x128be0	@ 0001beb6 0cf193fe
.org 0x1beba
	ldr r0, [pc, #40]	@ 0001beba 0a48
.org 0x1bebc
	add r0, r8	@ 0001bebc 4044
.org 0x1bebe
	ldrb r0, [r0, #0]	@ 0001bebe 0078
.org 0x1bec0
	cmp r0, #7	@ 0001bec0 0728
.org 0x1bec2
	bne.n 0x1bee8	@ 0001bec2 11d1
.org 0x1bec4
	ldr r0, [r7, #76]	@ 0001bec4 f86c
.org 0x1bec6
	adds r0, #2	@ 0001bec6 0230
.org 0x1bec8
	b.n 0x1bef4	@ 0001bec8 14e0
.org 0x1beca
	.byte 0x00	@ 0001beca data
.org 0x1becb
	.byte 0x00	@ 0001becb data
.org 0x1becc
	.byte 0xb0,0x0a,0x00,0x02	@ 0001becc data
.org 0x1bed0
	.byte 0x02,0xc0,0x02,0x00	@ 0001bed0 data
.org 0x1bed4
	.byte 0x60,0xc1,0xb2,0x08	@ 0001bed4 data
.org 0x1bed8
	.byte 0x68,0xc1,0xb2,0x08	@ 0001bed8 data
.org 0x1bedc
	.byte 0x04,0x0a,0x00,0x02	@ 0001bedc data
.org 0x1bee0
	.byte 0x00,0x08,0x00,0x06	@ 0001bee0 data
.org 0x1bee4
	.byte 0x25,0xd0,0x02,0x00	@ 0001bee4 data
.org 0x1bee8
	cmp r0, #11	@ 0001bee8 0b28
.org 0x1beea
	bne.n 0x1bef2	@ 0001beea 02d1
.org 0x1beec
	ldr r0, [r7, #76]	@ 0001beec f86c
.org 0x1beee
	subs r0, #2	@ 0001beee 0238
.org 0x1bef0
	b.n 0x1bef4	@ 0001bef0 00e0
.org 0x1bef2
	movs r0, #0	@ 0001bef2 0020
.org 0x1bef4
	str r0, [r7, #76]	@ 0001bef4 f864
.org 0x1bef6
	ldr r4, [r7, #80]	@ 0001bef6 3c6d
.org 0x1bef8
	subs r4, #2	@ 0001bef8 023c
.org 0x1befa
	str r4, [r7, #80]	@ 0001befa 3c65
.org 0x1befc
	mov r1, r9	@ 0001befc 4946
.org 0x1befe
	lsrs r3, r1, #4	@ 0001befe 0b09
.org 0x1bf00
	lsls r3, r3, #2	@ 0001bf00 9b00
.org 0x1bf02
	ldr r2, [pc, #48]	@ 0001bf02 0c4a
.org 0x1bf04
	adds r5, r3, r2	@ 0001bf04 9d18
.org 0x1bf06
	ldr r1, [r7, #52]	@ 0001bf06 796b
.org 0x1bf08
	ldr r0, [r7, #68]	@ 0001bf08 786c
.org 0x1bf0a
	muls r1, r0	@ 0001bf0a 4143
.org 0x1bf0c
	asrs r1, r1, #8	@ 0001bf0c 0912
.org 0x1bf0e
	ldr r0, [r7, #76]	@ 0001bf0e f86c
.org 0x1bf10
	adds r0, r0, r1	@ 0001bf10 4018
.org 0x1bf12
	strh r0, [r5, #0]	@ 0001bf12 2880
