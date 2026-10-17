@ FUN_0801cb30  entry 0x0801cb30  size 154
.thumb
.org 0x1cb30
FUN_0801cb30:
	push {r4, r5, r6, r7, lr}	@ 0001cb30 f0b5
.org 0x1cb32
	mov r7, r9	@ 0001cb32 4f46
.org 0x1cb34
	mov r6, r8	@ 0001cb34 4646
.org 0x1cb36
	push {r6, r7}	@ 0001cb36 c0b4
.org 0x1cb38
	adds r5, r0, #0	@ 0001cb38 051c
.org 0x1cb3a
	adds r7, r1, #0	@ 0001cb3a 0f1c
.org 0x1cb3c
	movs r0, #0	@ 0001cb3c 0020
.org 0x1cb3e
	mov r9, r0	@ 0001cb3e 8146
.org 0x1cb40
	movs r2, #1	@ 0001cb40 0122
.org 0x1cb42
	negs r2, r2	@ 0001cb42 5242
.org 0x1cb44
	mov r8, r2	@ 0001cb44 9046
.org 0x1cb46
	movs r0, #8	@ 0001cb46 0820
.org 0x1cb48
	ldrsh r1, [r5, r0]	@ 0001cb48 295e
.org 0x1cb4a
	movs r2, #10	@ 0001cb4a 0a22
.org 0x1cb4c
	ldrsh r0, [r5, r2]	@ 0001cb4c a85e
.org 0x1cb4e
	cmp r1, r0	@ 0001cb4e 8142
.org 0x1cb50
	bne.n 0x1cb56	@ 0001cb50 01d1
.org 0x1cb52
	movs r0, #0	@ 0001cb52 0020
.org 0x1cb54
	b.n 0x1cbbe	@ 0001cb54 33e0
.org 0x1cb56
	adds r0, r5, #0	@ 0001cb56 281c
.org 0x1cb58
	bl 0x54c4	@ 0001cb58 e8f7b4fc
.org 0x1cb5c
	ldr r0, [r5, #12]	@ 0001cb5c e868
.org 0x1cb5e
	ldr r0, [r0, #4]	@ 0001cb5e 4068
.org 0x1cb60
	str r0, [r5, #12]	@ 0001cb60 e860
.org 0x1cb62
	adds r4, r0, #0	@ 0001cb62 041c
.org 0x1cb64
	adds r6, r5, #0	@ 0001cb64 2e1c
.org 0x1cb66
	adds r6, #20	@ 0001cb66 1436
.org 0x1cb68
	cmp r4, r6	@ 0001cb68 b442
.org 0x1cb6a
	beq.n 0x1cbbc	@ 0001cb6a 27d0
.org 0x1cb6c
	ldrb r1, [r4, #10]	@ 0001cb6c a17a
.org 0x1cb6e
	movs r0, #1	@ 0001cb6e 0120
.org 0x1cb70
	ands r0, r1	@ 0001cb70 0840
.org 0x1cb72
	cmp r0, #0	@ 0001cb72 0028
.org 0x1cb74
	beq.n 0x1cbb0	@ 0001cb74 1cd0
.org 0x1cb76
	movs r0, #4	@ 0001cb76 0420
.org 0x1cb78
	ands r0, r1	@ 0001cb78 0840
.org 0x1cb7a
	cmp r0, #0	@ 0001cb7a 0028
.org 0x1cb7c
	beq.n 0x1cbb0	@ 0001cb7c 18d0
.org 0x1cb7e
	adds r1, r4, #0	@ 0001cb7e 211c
.org 0x1cb80
	adds r1, #84	@ 0001cb80 5431
.org 0x1cb82
	ldr r0, [pc, #72]	@ 0001cb82 1248
.org 0x1cb84
	bl 0x1fb14	@ 0001cb84 02f0c6ff
.org 0x1cb88
	cmp r0, #0	@ 0001cb88 0028
.org 0x1cb8a
	bne.n 0x1cbb0	@ 0001cb8a 11d1
.org 0x1cb8c
	ldr r2, [r4, #84]	@ 0001cb8c 626d
.org 0x1cb8e
	ldr r0, [r7, #0]	@ 0001cb8e 3868
.org 0x1cb90
	subs r2, r2, r0	@ 0001cb90 121a
.org 0x1cb92
	asrs r2, r2, #8	@ 0001cb92 1212
.org 0x1cb94
	ldr r0, [r4, #88]	@ 0001cb94 a06d
.org 0x1cb96
	ldr r1, [r7, #4]	@ 0001cb96 7968
.org 0x1cb98
	subs r0, r0, r1	@ 0001cb98 401a
.org 0x1cb9a
	asrs r0, r0, #8	@ 0001cb9a 0012
.org 0x1cb9c
	adds r1, r2, #0	@ 0001cb9c 111c
.org 0x1cb9e
	muls r1, r2	@ 0001cb9e 5143
.org 0x1cba0
	adds r2, r0, #0	@ 0001cba0 021c
.org 0x1cba2
	muls r2, r0	@ 0001cba2 4243
.org 0x1cba4
	adds r0, r2, #0	@ 0001cba4 101c
.org 0x1cba6
	adds r1, r1, r0	@ 0001cba6 0918
.org 0x1cba8
	cmp r1, r8	@ 0001cba8 4145
.org 0x1cbaa
	bcs.n 0x1cbb0	@ 0001cbaa 01d2
.org 0x1cbac
	mov r8, r1	@ 0001cbac 8846
.org 0x1cbae
	mov r9, r4	@ 0001cbae a146
.org 0x1cbb0
	ldr r0, [r5, #12]	@ 0001cbb0 e868
.org 0x1cbb2
	ldr r0, [r0, #4]	@ 0001cbb2 4068
.org 0x1cbb4
	str r0, [r5, #12]	@ 0001cbb4 e860
.org 0x1cbb6
	adds r4, r0, #0	@ 0001cbb6 041c
.org 0x1cbb8
	cmp r4, r6	@ 0001cbb8 b442
.org 0x1cbba
	bne.n 0x1cb6c	@ 0001cbba d7d1
.org 0x1cbbc
	mov r0, r9	@ 0001cbbc 4846
.org 0x1cbbe
	pop {r3, r4}	@ 0001cbbe 18bc
.org 0x1cbc0
	mov r8, r3	@ 0001cbc0 9846
.org 0x1cbc2
	mov r9, r4	@ 0001cbc2 a146
.org 0x1cbc4
	pop {r4, r5, r6, r7}	@ 0001cbc4 f0bc
.org 0x1cbc6
	pop {r1}	@ 0001cbc6 02bc
.org 0x1cbc8
	bx r1	@ 0001cbc8 0847
