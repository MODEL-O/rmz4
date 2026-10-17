@ FUN_08128878  entry 0x08128878  size 110
.thumb
.org 0x128878
FUN_08128878:
	push {r4, r5, r6, r7, lr}	@ 00128878 f0b5
.org 0x12887a
	mov r7, sl	@ 0012887a 5746
.org 0x12887c
	mov r6, r9	@ 0012887c 4e46
.org 0x12887e
	mov r5, r8	@ 0012887e 4546
.org 0x128880
	push {r5, r6, r7}	@ 00128880 e0b4
.org 0x128882
	adds r6, r0, #0	@ 00128882 061c
.org 0x128884
	lsls r1, r1, #16	@ 00128884 0904
.org 0x128886
	lsrs r1, r1, #16	@ 00128886 090c
.org 0x128888
	mov sl, r1	@ 00128888 8a46
.org 0x12888a
	lsls r2, r2, #24	@ 0012888a 1206
.org 0x12888c
	lsrs r2, r2, #24	@ 0012888c 120e
.org 0x12888e
	mov r8, r2	@ 0012888e 9046
.org 0x128890
	ldr r1, [r6, #52]	@ 00128890 716b
.org 0x128892
	ldr r0, [pc, #84]	@ 00128892 1548
.org 0x128894
	cmp r1, r0	@ 00128894 8142
.org 0x128896
	bne.n 0x1288d8	@ 00128896 1fd1
.org 0x128898
	adds r0, r1, #1	@ 00128898 481c
.org 0x12889a
	str r0, [r6, #52]	@ 0012889a 7063
.org 0x12889c
	ldrb r5, [r6, #8]	@ 0012889c 357a
.org 0x12889e
	ldr r4, [r6, #44]	@ 0012889e f46a
.org 0x1288a0
	movs r7, #1	@ 001288a0 0127
.org 0x1288a2
	cmp r5, #0	@ 001288a2 002d
.org 0x1288a4
	ble.n 0x1288d4	@ 001288a4 16dd
.org 0x1288a6
	mov r9, r8	@ 001288a6 c146
.org 0x1288a8
	mov r0, sl	@ 001288a8 5046
.org 0x1288aa
	ands r0, r7	@ 001288aa 3840
.org 0x1288ac
	cmp r0, #0	@ 001288ac 0028
.org 0x1288ae
	beq.n 0x1288ca	@ 001288ae 0cd0
.org 0x1288b0
	movs r0, #128	@ 001288b0 8020
.org 0x1288b2
	ldrb r1, [r4, #0]	@ 001288b2 2178
.org 0x1288b4
	ands r0, r1	@ 001288b4 0840
.org 0x1288b6
	cmp r0, #0	@ 001288b6 0028
.org 0x1288b8
	beq.n 0x1288ca	@ 001288b8 07d0
.org 0x1288ba
	mov r0, r8	@ 001288ba 4046
.org 0x1288bc
	strb r0, [r4, #23]	@ 001288bc e075
.org 0x1288be
	mov r1, r9	@ 001288be 4946
.org 0x1288c0
	cmp r1, #0	@ 001288c0 0029
.org 0x1288c2
	bne.n 0x1288ca	@ 001288c2 02d1
.org 0x1288c4
	adds r0, r4, #0	@ 001288c4 201c
.org 0x1288c6
	bl 0x128858	@ 001288c6 fff7c7ff
.org 0x1288ca
	subs r5, #1	@ 001288ca 013d
.org 0x1288cc
	adds r4, #80	@ 001288cc 5034
.org 0x1288ce
	lsls r7, r7, #1	@ 001288ce 7f00
.org 0x1288d0
	cmp r5, #0	@ 001288d0 002d
.org 0x1288d2
	bgt.n 0x1288a8	@ 001288d2 e9dc
.org 0x1288d4
	ldr r0, [pc, #16]	@ 001288d4 0448
.org 0x1288d6
	str r0, [r6, #52]	@ 001288d6 7063
.org 0x1288d8
	pop {r3, r4, r5}	@ 001288d8 38bc
.org 0x1288da
	mov r8, r3	@ 001288da 9846
.org 0x1288dc
	mov r9, r4	@ 001288dc a146
.org 0x1288de
	mov sl, r5	@ 001288de aa46
.org 0x1288e0
	pop {r4, r5, r6, r7}	@ 001288e0 f0bc
.org 0x1288e2
	pop {r0}	@ 001288e2 01bc
.org 0x1288e4
	bx r0	@ 001288e4 0047
