@ FUN_080094a8  entry 0x080094a8  size 150
.thumb
.org 0x94a8
FUN_080094a8:
	push {r4, r5, r6, r7, lr}	@ 000094a8 f0b5
.org 0x94aa
	mov r7, sl	@ 000094aa 5746
.org 0x94ac
	mov r6, r9	@ 000094ac 4e46
.org 0x94ae
	mov r5, r8	@ 000094ae 4546
.org 0x94b0
	push {r5, r6, r7}	@ 000094b0 e0b4
.org 0x94b2
	mov sl, r0	@ 000094b2 8246
.org 0x94b4
	adds r6, r1, #0	@ 000094b4 0e1c
.org 0x94b6
	ldr r0, [pc, #104]	@ 000094b6 1a48
.org 0x94b8
	mov ip, r0	@ 000094b8 8446
.org 0x94ba
	movs r5, #0	@ 000094ba 0025
.org 0x94bc
	movs r0, #233	@ 000094bc e920
.org 0x94be
	lsls r0, r0, #1	@ 000094be 4000
.org 0x94c0
	add r0, ip	@ 000094c0 6044
.org 0x94c2
	ldrb r0, [r0, #0]	@ 000094c2 0078
.org 0x94c4
	cmp r5, r0	@ 000094c4 8542
.org 0x94c6
	bge.n 0x9532	@ 000094c6 34da
.org 0x94c8
	movs r1, #240	@ 000094c8 f021
.org 0x94ca
	lsls r1, r1, #1	@ 000094ca 4900
.org 0x94cc
	add r1, ip	@ 000094cc 6144
.org 0x94ce
	mov r8, r1	@ 000094ce 8846
.org 0x94d0
	movs r7, #238	@ 000094d0 ee27
.org 0x94d2
	lsls r7, r7, #1	@ 000094d2 7f00
.org 0x94d4
	add r7, ip	@ 000094d4 6744
.org 0x94d6
	mov r3, ip	@ 000094d6 6346
.org 0x94d8
	mov r9, r0	@ 000094d8 8146
.org 0x94da
	movs r4, #236	@ 000094da ec24
.org 0x94dc
	lsls r4, r4, #1	@ 000094dc 6400
.org 0x94de
	adds r0, r3, r4	@ 000094de 1819
.org 0x94e0
	ldrh r1, [r0, #0]	@ 000094e0 0188
.org 0x94e2
	lsls r2, r1, #1	@ 000094e2 4a00
.org 0x94e4
	ldr r0, [r7, #0]	@ 000094e4 3868
.org 0x94e6
	mov r4, sl	@ 000094e6 5446
.org 0x94e8
	subs r0, r4, r0	@ 000094e8 201a
.org 0x94ea
	adds r0, r0, r1	@ 000094ea 4018
.org 0x94ec
	cmp r2, r0	@ 000094ec 8242
.org 0x94ee
	bls.n 0x9524	@ 000094ee 19d9
.org 0x94f0
	movs r1, #237	@ 000094f0 ed21
.org 0x94f2
	lsls r1, r1, #1	@ 000094f2 4900
.org 0x94f4
	adds r0, r3, r1	@ 000094f4 5818
.org 0x94f6
	ldrh r2, [r0, #0]	@ 000094f6 0288
.org 0x94f8
	lsls r1, r2, #1	@ 000094f8 5100
.org 0x94fa
	mov r0, r8	@ 000094fa 4046
.org 0x94fc
	ldr r4, [r0, #0]	@ 000094fc 0468
.org 0x94fe
	subs r0, r6, r4	@ 000094fe 301b
.org 0x9500
	adds r0, r0, r2	@ 00009500 8018
.org 0x9502
	subs r0, #1	@ 00009502 0138
.org 0x9504
	cmp r1, r0	@ 00009504 8142
.org 0x9506
	bls.n 0x9524	@ 00009506 0dd9
.org 0x9508
	movs r1, #235	@ 00009508 eb21
.org 0x950a
	lsls r1, r1, #1	@ 0000950a 4900
.org 0x950c
	adds r0, r3, r1	@ 0000950c 5818
.org 0x950e
	ldrh r1, [r0, #0]	@ 0000950e 0188
.org 0x9510
	movs r0, #132	@ 00009510 8420
.org 0x9512
	lsls r0, r0, #8	@ 00009512 0002
.org 0x9514
	ands r0, r1	@ 00009514 0840
.org 0x9516
	cmp r0, #0	@ 00009516 0028
.org 0x9518
	bne.n 0x9524	@ 00009518 04d1
.org 0x951a
	adds r0, r4, r2	@ 0000951a a018
.org 0x951c
	adds r6, r0, #1	@ 0000951c 461c
.org 0x951e
	b.n 0x94ba	@ 0000951e cce7
.org 0x9520
	.byte 0xb0,0x0a,0x00,0x02	@ 00009520 data
.org 0x9524
	movs r4, #24	@ 00009524 1824
.org 0x9526
	add r8, r4	@ 00009526 a044
.org 0x9528
	adds r7, #24	@ 00009528 1837
.org 0x952a
	adds r3, #24	@ 0000952a 1833
.org 0x952c
	adds r5, #1	@ 0000952c 0135
.org 0x952e
	cmp r5, r9	@ 0000952e 4d45
.org 0x9530
	blt.n 0x94da	@ 00009530 d3db
.org 0x9532
	adds r0, r6, #0	@ 00009532 301c
.org 0x9534
	pop {r3, r4, r5}	@ 00009534 38bc
.org 0x9536
	mov r8, r3	@ 00009536 9846
.org 0x9538
	mov r9, r4	@ 00009538 a146
.org 0x953a
	mov sl, r5	@ 0000953a aa46
.org 0x953c
	pop {r4, r5, r6, r7}	@ 0000953c f0bc
