@ FUN_0812877c  entry 0x0812877c  size 112
.thumb
.org 0x12877c
FUN_0812877c:
	push {r4, r5, r6, r7, lr}	@ 0012877c f0b5
.org 0x12877e
	mov r7, sl	@ 0012877e 5746
.org 0x128780
	mov r6, r9	@ 00128780 4e46
.org 0x128782
	mov r5, r8	@ 00128782 4546
.org 0x128784
	push {r5, r6, r7}	@ 00128784 e0b4
.org 0x128786
	adds r4, r0, #0	@ 00128786 041c
.org 0x128788
	lsls r1, r1, #16	@ 00128788 0904
.org 0x12878a
	lsrs r1, r1, #16	@ 0012878a 090c
.org 0x12878c
	mov ip, r1	@ 0012878c 8c46
.org 0x12878e
	lsls r2, r2, #16	@ 0012878e 1204
.org 0x128790
	lsrs r6, r2, #16	@ 00128790 160c
.org 0x128792
	ldr r3, [r4, #52]	@ 00128792 636b
.org 0x128794
	ldr r0, [pc, #84]	@ 00128794 1548
.org 0x128796
	cmp r3, r0	@ 00128796 8342
.org 0x128798
	bne.n 0x1287de	@ 00128798 21d1
.org 0x12879a
	adds r0, r3, #1	@ 0012879a 581c
.org 0x12879c
	str r0, [r4, #52]	@ 0012879c 6063
.org 0x12879e
	ldrb r2, [r4, #8]	@ 0012879e 227a
.org 0x1287a0
	ldr r3, [r4, #44]	@ 001287a0 e36a
.org 0x1287a2
	movs r5, #1	@ 001287a2 0125
.org 0x1287a4
	cmp r2, #0	@ 001287a4 002a
.org 0x1287a6
	ble.n 0x1287da	@ 001287a6 18dd
.org 0x1287a8
	movs r0, #128	@ 001287a8 8020
.org 0x1287aa
	mov r9, r0	@ 001287aa 8146
.org 0x1287ac
	lsls r0, r6, #16	@ 001287ac 3004
.org 0x1287ae
	asrs r7, r0, #24	@ 001287ae 0716
.org 0x1287b0
	movs r0, #12	@ 001287b0 0c20
.org 0x1287b2
	mov r8, r0	@ 001287b2 8046
.org 0x1287b4
	mov r0, ip	@ 001287b4 6046
.org 0x1287b6
	ands r0, r5	@ 001287b6 2840
.org 0x1287b8
	cmp r0, #0	@ 001287b8 0028
.org 0x1287ba
	beq.n 0x1287d0	@ 001287ba 09d0
.org 0x1287bc
	ldrb r1, [r3, #0]	@ 001287bc 1978
.org 0x1287be
	mov r0, r9	@ 001287be 4846
.org 0x1287c0
	ands r0, r1	@ 001287c0 0840
.org 0x1287c2
	cmp r0, #0	@ 001287c2 0028
.org 0x1287c4
	beq.n 0x1287d0	@ 001287c4 04d0
.org 0x1287c6
	strb r7, [r3, #11]	@ 001287c6 df72
.org 0x1287c8
	strb r6, [r3, #13]	@ 001287c8 5e73
.org 0x1287ca
	mov r0, r8	@ 001287ca 4046
.org 0x1287cc
	orrs r0, r1	@ 001287cc 0843
.org 0x1287ce
	strb r0, [r3, #0]	@ 001287ce 1870
.org 0x1287d0
	subs r2, #1	@ 001287d0 013a
.org 0x1287d2
	adds r3, #80	@ 001287d2 5033
.org 0x1287d4
	lsls r5, r5, #1	@ 001287d4 6d00
.org 0x1287d6
	cmp r2, #0	@ 001287d6 002a
.org 0x1287d8
	bgt.n 0x1287b4	@ 001287d8 ecdc
.org 0x1287da
	ldr r0, [pc, #16]	@ 001287da 0448
.org 0x1287dc
	str r0, [r4, #52]	@ 001287dc 6063
.org 0x1287de
	pop {r3, r4, r5}	@ 001287de 38bc
.org 0x1287e0
	mov r8, r3	@ 001287e0 9846
.org 0x1287e2
	mov r9, r4	@ 001287e2 a146
.org 0x1287e4
	mov sl, r5	@ 001287e4 aa46
.org 0x1287e6
	pop {r4, r5, r6, r7}	@ 001287e6 f0bc
.org 0x1287e8
	pop {r0}	@ 001287e8 01bc
.org 0x1287ea
	bx r0	@ 001287ea 0047
