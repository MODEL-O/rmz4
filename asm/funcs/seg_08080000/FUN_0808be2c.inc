@ FUN_0808be2c  entry 0x0808be2c  size 386
.thumb
.org 0x8be2c
FUN_0808be2c:
	push {r4, r5, r6, r7, lr}	@ 0008be2c f0b5
.org 0x8be2e
	mov r7, sl	@ 0008be2e 5746
.org 0x8be30
	mov r6, r9	@ 0008be30 4e46
.org 0x8be32
	mov r5, r8	@ 0008be32 4546
.org 0x8be34
	push {r5, r6, r7}	@ 0008be34 e0b4
.org 0x8be36
	sub sp, #60	@ 0008be36 8fb0
.org 0x8be38
	adds r7, r0, #0	@ 0008be38 071c
.org 0x8be3a
	ldr r1, [pc, #372]	@ 0008be3a 5d49
.org 0x8be3c
	mov r0, sp	@ 0008be3c 6846
.org 0x8be3e
	movs r2, #3	@ 0008be3e 0322
.org 0x8be40
	bl 0x129258	@ 0008be40 9df00afa
.org 0x8be44
	add r6, sp, #4	@ 0008be44 01ae
.org 0x8be46
	movs r4, #160	@ 0008be46 a024
.org 0x8be48
	lsls r4, r4, #12	@ 0008be48 2403
.org 0x8be4a
	adds r0, r4, #0	@ 0008be4a 201c
.org 0x8be4c
	bl 0x128bf4	@ 0008be4c 9cf0d2fe
.org 0x8be50
	lsls r0, r0, #16	@ 0008be50 0004
.org 0x8be52
	lsrs r0, r0, #16	@ 0008be52 000c
.org 0x8be54
	negs r0, r0	@ 0008be54 4042
.org 0x8be56
	cmp r0, #0	@ 0008be56 0028
.org 0x8be58
	bge.n 0x8be5c	@ 0008be58 00da
.org 0x8be5a
	adds r0, #31	@ 0008be5a 1f30
.org 0x8be5c
	asrs r1, r0, #5	@ 0008be5c 4111
.org 0x8be5e
	negs r1, r1	@ 0008be5e 4942
.org 0x8be60
	movs r0, #192	@ 0008be60 c020
.org 0x8be62
	lsls r0, r0, #6	@ 0008be62 8001
.org 0x8be64
	bl 0x128fb8	@ 0008be64 9df0a8f8
.org 0x8be68
	str r0, [sp, #20]	@ 0008be68 0590
.org 0x8be6a
	adds r0, r4, #0	@ 0008be6a 201c
.org 0x8be6c
	bl 0x128bf4	@ 0008be6c 9cf0c2fe
.org 0x8be70
	lsls r0, r0, #16	@ 0008be70 0004
.org 0x8be72
	lsrs r0, r0, #16	@ 0008be72 000c
.org 0x8be74
	negs r0, r0	@ 0008be74 4042
.org 0x8be76
	str r0, [sp, #24]	@ 0008be76 0690
.org 0x8be78
	add r4, sp, #28	@ 0008be78 07ac
.org 0x8be7a
	movs r5, #160	@ 0008be7a a025
.org 0x8be7c
	lsls r5, r5, #13	@ 0008be7c 6d03
.org 0x8be7e
	adds r0, r5, #0	@ 0008be7e 281c
.org 0x8be80
	bl 0x128bf4	@ 0008be80 9cf0b8fe
.org 0x8be84
	lsls r0, r0, #16	@ 0008be84 0004
.org 0x8be86
	lsrs r0, r0, #16	@ 0008be86 000c
.org 0x8be88
	negs r0, r0	@ 0008be88 4042
.org 0x8be8a
	cmp r0, #0	@ 0008be8a 0028
.org 0x8be8c
	bge.n 0x8be90	@ 0008be8c 00da
.org 0x8be8e
	adds r0, #31	@ 0008be8e 1f30
.org 0x8be90
	asrs r1, r0, #5	@ 0008be90 4111
.org 0x8be92
	negs r1, r1	@ 0008be92 4942
.org 0x8be94
	movs r0, #192	@ 0008be94 c020
.org 0x8be96
	lsls r0, r0, #7	@ 0008be96 c001
.org 0x8be98
	bl 0x128fb8	@ 0008be98 9df08ef8
.org 0x8be9c
	str r0, [sp, #28]	@ 0008be9c 0790
.org 0x8be9e
	adds r0, r5, #0	@ 0008be9e 281c
.org 0x8bea0
	bl 0x128bf4	@ 0008bea0 9cf0a8fe
.org 0x8bea4
	lsls r0, r0, #16	@ 0008bea4 0004
.org 0x8bea6
	lsrs r0, r0, #16	@ 0008bea6 000c
.org 0x8bea8
	negs r0, r0	@ 0008bea8 4042
.org 0x8beaa
	str r0, [r4, #4]	@ 0008beaa 6060
.org 0x8beac
	add r1, sp, #20	@ 0008beac 05a9
.org 0x8beae
	adds r0, r6, #0	@ 0008beae 301c
.org 0x8beb0
	movs r2, #16	@ 0008beb0 1022
.org 0x8beb2
	bl 0x129258	@ 0008beb2 9df0d1f9
.org 0x8beb6
	ldr r0, [pc, #252]	@ 0008beb6 3f48
.org 0x8beb8
	ldr r1, [r0, #4]	@ 0008beb8 4168
.org 0x8beba
	ldr r0, [r0, #0]	@ 0008beba 0068
.org 0x8bebc
	str r0, [sp, #52]	@ 0008bebc 0d90
.org 0x8bebe
	str r1, [sp, #56]	@ 0008bebe 0e91
.org 0x8bec0
	movs r0, #0	@ 0008bec0 0020
.org 0x8bec2
	mov r9, r0	@ 0008bec2 8146
.org 0x8bec4
	ldr r0, [pc, #240]	@ 0008bec4 3c48
.org 0x8bec6
	ldr r1, [pc, #244]	@ 0008bec6 3d49
.org 0x8bec8
	adds r0, r0, r1	@ 0008bec8 4018
.org 0x8beca
	ldrb r1, [r0, #0]	@ 0008beca 0178
.org 0x8becc
	movs r0, #15	@ 0008becc 0f20
.org 0x8bece
	ands r0, r1	@ 0008bece 0840
.org 0x8bed0
	cmp r0, #2	@ 0008bed0 0228
.org 0x8bed2
	bne.n 0x8bed8	@ 0008bed2 01d1
.org 0x8bed4
	movs r2, #1	@ 0008bed4 0122
.org 0x8bed6
	mov r9, r2	@ 0008bed6 9146
.org 0x8bed8
	ldrb r2, [r7, #10]	@ 0008bed8 ba7a
.org 0x8beda
	lsrs r2, r2, #4	@ 0008beda 1209
.org 0x8bedc
	movs r0, #1	@ 0008bedc 0120
.org 0x8bede
	ands r2, r0	@ 0008bede 0240
.org 0x8bee0
	mov r3, r9	@ 0008bee0 4b46
.org 0x8bee2
	lsls r5, r3, #3	@ 0008bee2 dd00
.org 0x8bee4
	adds r0, r6, r5	@ 0008bee4 7019
.org 0x8bee6
	mov r8, r0	@ 0008bee6 8046
.org 0x8bee8
	ldr r1, [r0, #0]	@ 0008bee8 0168
.org 0x8beea
	movs r0, #128	@ 0008beea 8020
.org 0x8beec
	lsls r0, r0, #5	@ 0008beec 4001
.org 0x8beee
	subs r0, r0, r1	@ 0008beee 401a
.org 0x8bef0
	lsls r4, r2, #1	@ 0008bef0 5400
.org 0x8bef2
	subs r4, #1	@ 0008bef2 013c
.org 0x8bef4
	adds r1, r0, #0	@ 0008bef4 011c
.org 0x8bef6
	muls r1, r4	@ 0008bef6 6143
.org 0x8bef8
	ldr r0, [r7, #84]	@ 0008bef8 786d
.org 0x8befa
	adds r0, r0, r1	@ 0008befa 4018
.org 0x8befc
	str r0, [sp, #36]	@ 0008befc 0990
.org 0x8befe
	adds r3, r6, #4	@ 0008befe 331d
.org 0x8bf00
	adds r3, r3, r5	@ 0008bf00 5b19
.org 0x8bf02
	ldr r0, [r3, #0]	@ 0008bf02 1868
.org 0x8bf04
	movs r1, #144	@ 0008bf04 9021
.org 0x8bf06
	lsls r1, r1, #6	@ 0008bf06 8901
.org 0x8bf08
	adds r0, r0, r1	@ 0008bf08 4018
.org 0x8bf0a
	ldr r1, [r7, #88]	@ 0008bf0a b96d
.org 0x8bf0c
	subs r1, r1, r0	@ 0008bf0c 091a
.org 0x8bf0e
	add r6, sp, #36	@ 0008bf0e 09ae
.org 0x8bf10
	str r1, [r6, #4]	@ 0008bf10 7160
.org 0x8bf12
	mov r1, r8	@ 0008bf12 4146
.org 0x8bf14
	ldr r0, [r1, #0]	@ 0008bf14 0868
.org 0x8bf16
	muls r0, r4	@ 0008bf16 6043
.org 0x8bf18
	str r0, [sp, #44]	@ 0008bf18 0b90
.org 0x8bf1a
	ldr r0, [r3, #0]	@ 0008bf1a 1868
.org 0x8bf1c
	add r5, sp, #44	@ 0008bf1c 0bad
.org 0x8bf1e
	str r0, [r5, #4]	@ 0008bf1e 6860
.org 0x8bf20
	adds r0, r6, #0	@ 0008bf20 301c
.org 0x8bf22
	adds r1, r5, #0	@ 0008bf22 291c
.org 0x8bf24
	bl 0xa47a4	@ 0008bf24 18f03efc
.org 0x8bf28
	lsls r1, r4, #1	@ 0008bf28 6100
.org 0x8bf2a
	adds r1, r1, r4	@ 0008bf2a 0919
.org 0x8bf2c
	lsls r1, r1, #9	@ 0008bf2c 4902
.org 0x8bf2e
	ldr r0, [r7, #84]	@ 0008bf2e 786d
.org 0x8bf30
	adds r0, r0, r1	@ 0008bf30 4018
.org 0x8bf32
	str r0, [sp, #36]	@ 0008bf32 0990
.org 0x8bf34
	ldr r0, [r7, #88]	@ 0008bf34 b86d
.org 0x8bf36
	ldr r2, [pc, #136]	@ 0008bf36 224a
.org 0x8bf38
	adds r0, r0, r2	@ 0008bf38 8018
.org 0x8bf3a
	str r0, [r6, #4]	@ 0008bf3a 7060
.org 0x8bf3c
	movs r7, #0	@ 0008bf3c 0027
.org 0x8bf3e
	mov sl, r6	@ 0008bf3e b246
.org 0x8bf40
	mov r8, r5	@ 0008bf40 a846
.org 0x8bf42
	add r1, sp, #52	@ 0008bf42 0da9
.org 0x8bf44
	mov r3, r9	@ 0008bf44 4b46
.org 0x8bf46
	lsls r0, r3, #2	@ 0008bf46 9800
.org 0x8bf48
	adds r5, r0, r1	@ 0008bf48 4518
.org 0x8bf4a
	ldr r6, [pc, #120]	@ 0008bf4a 1e4e
.org 0x8bf4c
	mov r0, sp	@ 0008bf4c 6846
.org 0x8bf4e
	adds r2, r0, r7	@ 0008bf4e c219
.org 0x8bf50
	ldrb r0, [r2, #0]	@ 0008bf50 1078
.org 0x8bf52
	adds r0, #64	@ 0008bf52 4030
.org 0x8bf54
	lsls r0, r0, #24	@ 0008bf54 0006
.org 0x8bf56
	lsrs r0, r0, #23	@ 0008bf56 c00d
.org 0x8bf58
	adds r0, r0, r6	@ 0008bf58 8019
.org 0x8bf5a
	movs r3, #0	@ 0008bf5a 0023
.org 0x8bf5c
	ldrsh r1, [r0, r3]	@ 0008bf5c c15e
.org 0x8bf5e
	ldr r0, [r5, #0]	@ 0008bf5e 2868
.org 0x8bf60
	muls r0, r1	@ 0008bf60 4843
.org 0x8bf62
	cmp r0, #0	@ 0008bf62 0028
.org 0x8bf64
	bge.n 0x8bf68	@ 0008bf64 00da
.org 0x8bf66
	adds r0, #255	@ 0008bf66 ff30
.org 0x8bf68
	asrs r0, r0, #8	@ 0008bf68 0012
.org 0x8bf6a
	str r0, [sp, #44]	@ 0008bf6a 0b90
.org 0x8bf6c
	ldrb r0, [r2, #0]	@ 0008bf6c 1078
.org 0x8bf6e
	lsls r0, r0, #1	@ 0008bf6e 4000
.org 0x8bf70
	adds r0, r0, r6	@ 0008bf70 8019
.org 0x8bf72
	movs r2, #0	@ 0008bf72 0022
.org 0x8bf74
	ldrsh r1, [r0, r2]	@ 0008bf74 815e
.org 0x8bf76
	ldr r0, [r5, #0]	@ 0008bf76 2868
.org 0x8bf78
	muls r0, r1	@ 0008bf78 4843
.org 0x8bf7a
	cmp r0, #0	@ 0008bf7a 0028
.org 0x8bf7c
	bge.n 0x8bf80	@ 0008bf7c 00da
.org 0x8bf7e
	adds r0, #255	@ 0008bf7e ff30
.org 0x8bf80
	asrs r0, r0, #8	@ 0008bf80 0012
.org 0x8bf82
	mov r3, r8	@ 0008bf82 4346
.org 0x8bf84
	str r0, [r3, #4]	@ 0008bf84 5860
.org 0x8bf86
	ldr r0, [sp, #44]	@ 0008bf86 0b98
.org 0x8bf88
	muls r0, r4	@ 0008bf88 6043
.org 0x8bf8a
	str r0, [sp, #44]	@ 0008bf8a 0b90
.org 0x8bf8c
	mov r0, sl	@ 0008bf8c 5046
.org 0x8bf8e
	mov r1, r8	@ 0008bf8e 4146
.org 0x8bf90
	movs r2, #0	@ 0008bf90 0022
.org 0x8bf92
	movs r3, #0	@ 0008bf92 0023
.org 0x8bf94
	bl 0xd9b9c	@ 0008bf94 4df002fe
.org 0x8bf98
	adds r7, #1	@ 0008bf98 0137
.org 0x8bf9a
	cmp r7, #2	@ 0008bf9a 022f
.org 0x8bf9c
	ble.n 0x8bf4c	@ 0008bf9c d6dd
.org 0x8bf9e
	add sp, #60	@ 0008bf9e 0fb0
.org 0x8bfa0
	pop {r3, r4, r5}	@ 0008bfa0 38bc
.org 0x8bfa2
	mov r8, r3	@ 0008bfa2 9846
.org 0x8bfa4
	mov r9, r4	@ 0008bfa4 a146
.org 0x8bfa6
	mov sl, r5	@ 0008bfa6 aa46
.org 0x8bfa8
	pop {r4, r5, r6, r7}	@ 0008bfa8 f0bc
.org 0x8bfaa
	pop {r0}	@ 0008bfaa 01bc
.org 0x8bfac
	bx r0	@ 0008bfac 0047
