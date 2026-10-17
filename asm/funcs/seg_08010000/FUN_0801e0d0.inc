@ FUN_0801e0d0  entry 0x0801e0d0  size 160
.thumb
.org 0x1e0d0
FUN_0801e0d0:
	push {r4, r5, r6, r7, lr}	@ 0001e0d0 f0b5
.org 0x1e0d2
	mov r7, r8	@ 0001e0d2 4746
.org 0x1e0d4
	push {r7}	@ 0001e0d4 80b4
.org 0x1e0d6
	ldr r3, [pc, #152]	@ 0001e0d6 264b
.org 0x1e0d8
	ldr r4, [pc, #152]	@ 0001e0d8 264c
.org 0x1e0da
	adds r2, r3, r4	@ 0001e0da 1a19
.org 0x1e0dc
	str r0, [r2, #0]	@ 0001e0dc 1060
.org 0x1e0de
	movs r7, #140	@ 0001e0de 8c27
.org 0x1e0e0
	lsls r7, r7, #3	@ 0001e0e0 ff00
.org 0x1e0e2
	adds r0, r3, r7	@ 0001e0e2 d819
.org 0x1e0e4
	str r1, [r0, #0]	@ 0001e0e4 0160
.org 0x1e0e6
	movs r1, #139	@ 0001e0e6 8b21
.org 0x1e0e8
	lsls r1, r1, #3	@ 0001e0e8 c900
.org 0x1e0ea
	adds r0, r3, r1	@ 0001e0ea 5818
.org 0x1e0ec
	ldr r0, [r0, #0]	@ 0001e0ec 0068
.org 0x1e0ee
	mov r8, r0	@ 0001e0ee 8046
.org 0x1e0f0
	ldr r2, [pc, #132]	@ 0001e0f0 214a
.org 0x1e0f2
	adds r3, r3, r2	@ 0001e0f2 9b18
.org 0x1e0f4
	ldr r4, [r3, #0]	@ 0001e0f4 1c68
.org 0x1e0f6
	cmp r4, #0	@ 0001e0f6 002c
.org 0x1e0f8
	beq.n 0x1e166	@ 0001e0f8 35d0
.org 0x1e0fa
	ldr r6, [r4, #0]	@ 0001e0fa 2668
.org 0x1e0fc
	ldr r5, [r4, #4]	@ 0001e0fc 6568
.org 0x1e0fe
	cmp r5, #0	@ 0001e0fe 002d
.org 0x1e100
	beq.n 0x1e160	@ 0001e100 2ed0
.org 0x1e102
	ldrh r2, [r4, #10]	@ 0001e102 6289
.org 0x1e104
	movs r0, #16	@ 0001e104 1020
.org 0x1e106
	ands r0, r2	@ 0001e106 1040
.org 0x1e108
	cmp r0, #0	@ 0001e108 0028
.org 0x1e10a
	bne.n 0x1e160	@ 0001e10a 29d1
.org 0x1e10c
	movs r7, #8	@ 0001e10c 0827
.org 0x1e10e
	ldrsh r1, [r4, r7]	@ 0001e10e e15f
.org 0x1e110
	lsls r0, r1, #1	@ 0001e110 4800
.org 0x1e112
	adds r0, r0, r1	@ 0001e112 4018
.org 0x1e114
	lsls r0, r0, #2	@ 0001e114 8000
.org 0x1e116
	add r0, r8	@ 0001e116 4044
.org 0x1e118
	ldr r0, [r0, #4]	@ 0001e118 4068
.org 0x1e11a
	subs r0, #1	@ 0001e11a 0138
.org 0x1e11c
	lsls r1, r0, #8	@ 0001e11c 0102
.org 0x1e11e
	ldr r3, [pc, #80]	@ 0001e11e 144b
.org 0x1e120
	ldr r7, [pc, #80]	@ 0001e120 144f
.org 0x1e122
	adds r0, r3, r7	@ 0001e122 d819
.org 0x1e124
	ldr r0, [r0, #0]	@ 0001e124 0068
.org 0x1e126
	cmp r1, r0	@ 0001e126 8142
.org 0x1e128
	blt.n 0x1e134	@ 0001e128 04db
.org 0x1e12a
	adds r7, #4	@ 0001e12a 0437
.org 0x1e12c
	adds r0, r3, r7	@ 0001e12c d819
.org 0x1e12e
	ldr r0, [r0, #0]	@ 0001e12e 0068
.org 0x1e130
	cmp r1, r0	@ 0001e130 8142
.org 0x1e132
	ble.n 0x1e160	@ 0001e132 15dd
.org 0x1e134
	movs r0, #5	@ 0001e134 0520
.org 0x1e136
	ands r0, r2	@ 0001e136 1040
.org 0x1e138
	cmp r0, #0	@ 0001e138 0028
.org 0x1e13a
	beq.n 0x1e154	@ 0001e13a 0bd0
.org 0x1e13c
	ldrh r1, [r4, #8]	@ 0001e13c 2189
.org 0x1e13e
	lsls r2, r1, #16	@ 0001e13e 0a04
.org 0x1e140
	asrs r2, r2, #21	@ 0001e140 5215
.org 0x1e142
	lsls r2, r2, #2	@ 0001e142 9200
.org 0x1e144
	adds r2, r2, r3	@ 0001e144 d218
.org 0x1e146
	movs r0, #31	@ 0001e146 1f20
.org 0x1e148
	ands r0, r1	@ 0001e148 0840
.org 0x1e14a
	movs r1, #1	@ 0001e14a 0121
.org 0x1e14c
	lsls r1, r0	@ 0001e14c 8140
.org 0x1e14e
	ldr r0, [r2, #0]	@ 0001e14e 1068
.org 0x1e150
	orrs r0, r1	@ 0001e150 0843
.org 0x1e152
	str r0, [r2, #0]	@ 0001e152 1060
.org 0x1e154
	adds r0, r5, #0	@ 0001e154 281c
.org 0x1e156
	bl 0x1df34	@ 0001e156 fff7edfe
.org 0x1e15a
	adds r0, r4, #0	@ 0001e15a 201c
.org 0x1e15c
	bl 0x1e204	@ 0001e15c 00f052f8
.org 0x1e160
	adds r4, r6, #0	@ 0001e160 341c
.org 0x1e162
	cmp r4, #0	@ 0001e162 002c
.org 0x1e164
	bne.n 0x1e0fa	@ 0001e164 c9d1
.org 0x1e166
	pop {r3}	@ 0001e166 08bc
.org 0x1e168
	mov r8, r3	@ 0001e168 9846
.org 0x1e16a
	pop {r4, r5, r6, r7}	@ 0001e16a f0bc
.org 0x1e16c
	pop {r0}	@ 0001e16c 01bc
.org 0x1e16e
	bx r0	@ 0001e16e 0047
