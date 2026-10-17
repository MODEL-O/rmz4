@ FUN_0800972c  entry 0x0800972c  size 180
.thumb
.org 0x972c
FUN_0800972c:
	push {r4, r5, r6, r7, lr}	@ 0000972c f0b5
.org 0x972e
	mov r7, sl	@ 0000972e 5746
.org 0x9730
	mov r6, r9	@ 00009730 4e46
.org 0x9732
	mov r5, r8	@ 00009732 4546
.org 0x9734
	push {r5, r6, r7}	@ 00009734 e0b4
.org 0x9736
	sub sp, #4	@ 00009736 81b0
.org 0x9738
	str r0, [sp, #0]	@ 00009738 0090
.org 0x973a
	adds r7, r1, #0	@ 0000973a 0f1c
.org 0x973c
	adds r5, r2, #0	@ 0000973c 151c
.org 0x973e
	cmp r5, r7	@ 0000973e bd42
.org 0x9740
	ble.n 0x974a	@ 00009740 03dd
.org 0x9742
	adds r1, r5, #0	@ 00009742 291c
.org 0x9744
	bl 0x94a8	@ 00009744 fff7b0fe
.org 0x9748
	b.n 0x97d0	@ 00009748 42e0
.org 0x974a
	subs r0, r7, r5	@ 0000974a 781b
.org 0x974c
	asrs r0, r0, #1	@ 0000974c 4010
.org 0x974e
	mov sl, r0	@ 0000974e 8246
.org 0x9750
	subs r7, r7, r0	@ 00009750 3f1a
.org 0x9752
	ldr r0, [pc, #140]	@ 00009752 2348
.org 0x9754
	movs r2, #233	@ 00009754 e922
.org 0x9756
	lsls r2, r2, #1	@ 00009756 5200
.org 0x9758
	adds r1, r0, r2	@ 00009758 8118
.org 0x975a
	ldrb r1, [r1, #0]	@ 0000975a 0978
.org 0x975c
	cmp r1, #0	@ 0000975c 0029
.org 0x975e
	beq.n 0x97ce	@ 0000975e 36d0
.org 0x9760
	movs r3, #240	@ 00009760 f023
.org 0x9762
	lsls r3, r3, #1	@ 00009762 5b00
.org 0x9764
	adds r3, r3, r0	@ 00009764 1b18
.org 0x9766
	mov r9, r3	@ 00009766 9946
.org 0x9768
	adds r2, #10	@ 00009768 0a32
.org 0x976a
	adds r2, r2, r0	@ 0000976a 1218
.org 0x976c
	mov r8, r2	@ 0000976c 9046
.org 0x976e
	mov ip, r0	@ 0000976e 8446
.org 0x9770
	adds r6, r1, #0	@ 00009770 0e1c
.org 0x9772
	movs r0, #236	@ 00009772 ec20
.org 0x9774
	lsls r0, r0, #1	@ 00009774 4000
.org 0x9776
	add r0, ip	@ 00009776 6044
.org 0x9778
	ldrh r1, [r0, #0]	@ 00009778 0188
.org 0x977a
	lsls r2, r1, #1	@ 0000977a 4a00
.org 0x977c
	mov r3, r8	@ 0000977c 4346
.org 0x977e
	ldr r0, [r3, #0]	@ 0000977e 1868
.org 0x9780
	ldr r3, [sp, #0]	@ 00009780 009b
.org 0x9782
	subs r0, r3, r0	@ 00009782 181a
.org 0x9784
	adds r0, r0, r1	@ 00009784 4018
.org 0x9786
	cmp r2, r0	@ 00009786 8242
.org 0x9788
	bls.n 0x97c0	@ 00009788 1ad9
.org 0x978a
	movs r0, #237	@ 0000978a ed20
.org 0x978c
	lsls r0, r0, #1	@ 0000978c 4000
.org 0x978e
	add r0, ip	@ 0000978e 6044
.org 0x9790
	ldrh r4, [r0, #0]	@ 00009790 0488
.org 0x9792
	mov r1, sl	@ 00009792 5146
.org 0x9794
	adds r0, r4, r1	@ 00009794 6018
.org 0x9796
	lsls r2, r0, #1	@ 00009796 4200
.org 0x9798
	mov r1, r9	@ 00009798 4946
.org 0x979a
	ldr r3, [r1, #0]	@ 0000979a 0b68
.org 0x979c
	subs r1, r7, r3	@ 0000979c f91a
.org 0x979e
	adds r1, r1, r0	@ 0000979e 0918
.org 0x97a0
	cmp r2, r1	@ 000097a0 8a42
.org 0x97a2
	bcc.n 0x97c0	@ 000097a2 0dd3
.org 0x97a4
	adds r0, r3, r4	@ 000097a4 1819
.org 0x97a6
	adds r2, r0, #1	@ 000097a6 421c
.org 0x97a8
	cmp r5, r2	@ 000097a8 9542
.org 0x97aa
	bge.n 0x97c0	@ 000097aa 09da
.org 0x97ac
	movs r0, #235	@ 000097ac eb20
.org 0x97ae
	lsls r0, r0, #1	@ 000097ae 4000
.org 0x97b0
	add r0, ip	@ 000097b0 6044
.org 0x97b2
	ldrh r1, [r0, #0]	@ 000097b2 0188
.org 0x97b4
	movs r0, #132	@ 000097b4 8420
.org 0x97b6
	lsls r0, r0, #8	@ 000097b6 0002
.org 0x97b8
	ands r0, r1	@ 000097b8 0840
.org 0x97ba
	cmp r0, #0	@ 000097ba 0028
.org 0x97bc
	bne.n 0x97c0	@ 000097bc 00d1
.org 0x97be
	adds r5, r2, #0	@ 000097be 151c
.org 0x97c0
	movs r2, #24	@ 000097c0 1822
.org 0x97c2
	add r9, r2	@ 000097c2 9144
.org 0x97c4
	add r8, r2	@ 000097c4 9044
.org 0x97c6
	add ip, r2	@ 000097c6 9444
.org 0x97c8
	subs r6, #1	@ 000097c8 013e
.org 0x97ca
	cmp r6, #0	@ 000097ca 002e
.org 0x97cc
	bne.n 0x9772	@ 000097cc d1d1
.org 0x97ce
	adds r0, r5, #0	@ 000097ce 281c
.org 0x97d0
	add sp, #4	@ 000097d0 01b0
.org 0x97d2
	pop {r3, r4, r5}	@ 000097d2 38bc
.org 0x97d4
	mov r8, r3	@ 000097d4 9846
.org 0x97d6
	mov r9, r4	@ 000097d6 a146
.org 0x97d8
	mov sl, r5	@ 000097d8 aa46
.org 0x97da
	pop {r4, r5, r6, r7}	@ 000097da f0bc
.org 0x97dc
	pop {r1}	@ 000097dc 02bc
.org 0x97de
	bx r1	@ 000097de 0847
