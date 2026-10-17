@ FUN_080b6160  entry 0x080b6160  size 122
.thumb
.org 0xb6160
FUN_080b6160:
	push {r4, r5, r6, lr}	@ 000b6160 70b5
.org 0xb6162
	adds r4, r0, #0	@ 000b6162 041c
.org 0xb6164
	adds r5, r1, #0	@ 000b6164 0d1c
.org 0xb6166
	lsls r2, r2, #24	@ 000b6166 1206
.org 0xb6168
	lsrs r6, r2, #24	@ 000b6168 160e
.org 0xb616a
	ldr r0, [pc, #112]	@ 000b616a 1c48
.org 0xb616c
	ldr r0, [r0, #0]	@ 000b616c 0068
.org 0xb616e
	bl 0x5500	@ 000b616e 4ff7c7f9
.org 0xb6172
	adds r3, r0, #0	@ 000b6172 031c
.org 0xb6174
	cmp r3, #0	@ 000b6174 002b
.org 0xb6176
	beq.n 0xb61d2	@ 000b6176 2cd0
.org 0xb6178
	adds r1, r3, #0	@ 000b6178 191c
.org 0xb617a
	adds r1, #37	@ 000b617a 2531
.org 0xb617c
	movs r2, #0	@ 000b617c 0022
.org 0xb617e
	movs r0, #24	@ 000b617e 1820
.org 0xb6180
	strb r0, [r1, #0]	@ 000b6180 0870
.org 0xb6182
	ldr r0, [pc, #92]	@ 000b6182 1748
.org 0xb6184
	movs r1, #98	@ 000b6184 6221
.org 0xb6186
	strb r1, [r3, #9]	@ 000b6186 5972
.org 0xb6188
	movs r1, #196	@ 000b6188 c421
.org 0xb618a
	lsls r1, r1, #1	@ 000b618a 4900
.org 0xb618c
	adds r0, r0, r1	@ 000b618c 4018
.org 0xb618e
	ldr r0, [r0, #0]	@ 000b618e 0068
.org 0xb6190
	ldr r0, [r0, #0]	@ 000b6190 0068
.org 0xb6192
	str r0, [r3, #20]	@ 000b6192 5861
.org 0xb6194
	movs r0, #0	@ 000b6194 0020
.org 0xb6196
	strh r2, [r3, #32]	@ 000b6196 1a84
.org 0xb6198
	adds r1, r3, #0	@ 000b6198 191c
.org 0xb619a
	adds r1, #34	@ 000b619a 2231
.org 0xb619c
	strb r0, [r1, #0]	@ 000b619c 0870
.org 0xb619e
	ldrb r1, [r3, #11]	@ 000b619e d97a
.org 0xb61a0
	movs r0, #16	@ 000b61a0 1020
.org 0xb61a2
	orrs r0, r1	@ 000b61a2 0843
.org 0xb61a4
	strb r0, [r3, #11]	@ 000b61a4 d872
.org 0xb61a6
	ldrb r0, [r3, #28]	@ 000b61a6 187f
.org 0xb61a8
	strb r0, [r3, #29]	@ 000b61a8 5877
.org 0xb61aa
	str r4, [r3, #40]	@ 000b61aa 9c62
.org 0xb61ac
	ldr r0, [r5, #0]	@ 000b61ac 2868
.org 0xb61ae
	ldr r1, [r5, #4]	@ 000b61ae 6968
.org 0xb61b0
	str r0, [r3, #84]	@ 000b61b0 5865
.org 0xb61b2
	str r1, [r3, #88]	@ 000b61b2 9965
.org 0xb61b4
	movs r4, #181	@ 000b61b4 b524
.org 0xb61b6
	strb r6, [r4, r3]	@ 000b61b6 e654
.org 0xb61b8
	ldr r1, [r3, #40]	@ 000b61b8 996a
.org 0xb61ba
	adds r1, #204	@ 000b61ba cc31
.org 0xb61bc
	ldrh r0, [r1, #0]	@ 000b61bc 0888
.org 0xb61be
	adds r0, #1	@ 000b61be 0130
.org 0xb61c0
	strh r0, [r1, #0]	@ 000b61c0 0880
.org 0xb61c2
	ldr r2, [r3, #40]	@ 000b61c2 9a6a
.org 0xb61c4
	adds r2, #206	@ 000b61c4 ce32
.org 0xb61c6
	movs r0, #1	@ 000b61c6 0120
.org 0xb61c8
	ldrb r1, [r4, r3]	@ 000b61c8 e15c
.org 0xb61ca
	lsls r0, r1	@ 000b61ca 8840
.org 0xb61cc
	ldrb r1, [r2, #0]	@ 000b61cc 1178
.org 0xb61ce
	orrs r0, r1	@ 000b61ce 0843
.org 0xb61d0
	strb r0, [r2, #0]	@ 000b61d0 1070
.org 0xb61d2
	adds r0, r3, #0	@ 000b61d2 181c
.org 0xb61d4
	pop {r4, r5, r6}	@ 000b61d4 70bc
.org 0xb61d6
	pop {r1}	@ 000b61d6 02bc
.org 0xb61d8
	bx r1	@ 000b61d8 0847
