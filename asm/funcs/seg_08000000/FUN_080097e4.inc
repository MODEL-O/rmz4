@ FUN_080097e4  entry 0x080097e4  size 178
.thumb
.org 0x97e4
FUN_080097e4:
	push {r4, r5, r6, r7, lr}	@ 000097e4 f0b5
.org 0x97e6
	mov r7, sl	@ 000097e6 5746
.org 0x97e8
	mov r6, r9	@ 000097e8 4e46
.org 0x97ea
	mov r5, r8	@ 000097ea 4546
.org 0x97ec
	push {r5, r6, r7}	@ 000097ec e0b4
.org 0x97ee
	sub sp, #4	@ 000097ee 81b0
.org 0x97f0
	adds r7, r0, #0	@ 000097f0 071c
.org 0x97f2
	str r1, [sp, #0]	@ 000097f2 0091
.org 0x97f4
	adds r5, r2, #0	@ 000097f4 151c
.org 0x97f6
	cmp r5, r7	@ 000097f6 bd42
.org 0x97f8
	bge.n 0x9802	@ 000097f8 03da
.org 0x97fa
	adds r0, r5, #0	@ 000097fa 281c
.org 0x97fc
	bl 0x9544	@ 000097fc fff7a2fe
.org 0x9800
	b.n 0x9886	@ 00009800 41e0
.org 0x9802
	subs r0, r5, r7	@ 00009802 e81b
.org 0x9804
	asrs r0, r0, #1	@ 00009804 4010
.org 0x9806
	mov sl, r0	@ 00009806 8246
.org 0x9808
	add r7, sl	@ 00009808 5744
.org 0x980a
	ldr r0, [pc, #140]	@ 0000980a 2348
.org 0x980c
	movs r2, #233	@ 0000980c e922
.org 0x980e
	lsls r2, r2, #1	@ 0000980e 5200
.org 0x9810
	adds r1, r0, r2	@ 00009810 8118
.org 0x9812
	ldrb r1, [r1, #0]	@ 00009812 0978
.org 0x9814
	cmp r1, #0	@ 00009814 0029
.org 0x9816
	beq.n 0x9884	@ 00009816 35d0
.org 0x9818
	movs r3, #238	@ 00009818 ee23
.org 0x981a
	lsls r3, r3, #1	@ 0000981a 5b00
.org 0x981c
	adds r3, r3, r0	@ 0000981c 1b18
.org 0x981e
	mov r9, r3	@ 0000981e 9946
.org 0x9820
	adds r2, #14	@ 00009820 0e32
.org 0x9822
	adds r2, r2, r0	@ 00009822 1218
.org 0x9824
	mov r8, r2	@ 00009824 9046
.org 0x9826
	mov ip, r0	@ 00009826 8446
.org 0x9828
	adds r6, r1, #0	@ 00009828 0e1c
.org 0x982a
	movs r0, #237	@ 0000982a ed20
.org 0x982c
	lsls r0, r0, #1	@ 0000982c 4000
.org 0x982e
	add r0, ip	@ 0000982e 6044
.org 0x9830
	ldrh r0, [r0, #0]	@ 00009830 0088
.org 0x9832
	lsls r2, r0, #1	@ 00009832 4200
.org 0x9834
	mov r3, r8	@ 00009834 4346
.org 0x9836
	ldr r1, [r3, #0]	@ 00009836 1968
.org 0x9838
	ldr r3, [sp, #0]	@ 00009838 009b
.org 0x983a
	subs r1, r3, r1	@ 0000983a 591a
.org 0x983c
	adds r1, r1, r0	@ 0000983c 0918
.org 0x983e
	cmp r2, r1	@ 0000983e 8a42
.org 0x9840
	bls.n 0x9876	@ 00009840 19d9
.org 0x9842
	movs r0, #236	@ 00009842 ec20
.org 0x9844
	lsls r0, r0, #1	@ 00009844 4000
.org 0x9846
	add r0, ip	@ 00009846 6044
.org 0x9848
	ldrh r4, [r0, #0]	@ 00009848 0488
.org 0x984a
	mov r0, sl	@ 0000984a 5046
.org 0x984c
	adds r1, r4, r0	@ 0000984c 2118
.org 0x984e
	lsls r2, r1, #1	@ 0000984e 4a00
.org 0x9850
	mov r0, r9	@ 00009850 4846
.org 0x9852
	ldr r3, [r0, #0]	@ 00009852 0368
.org 0x9854
	subs r0, r7, r3	@ 00009854 f81a
.org 0x9856
	adds r0, r0, r1	@ 00009856 4018
.org 0x9858
	cmp r2, r0	@ 00009858 8242
.org 0x985a
	bls.n 0x9876	@ 0000985a 0cd9
.org 0x985c
	subs r2, r3, r4	@ 0000985c 1a1b
.org 0x985e
	cmp r5, r2	@ 0000985e 9542
.org 0x9860
	ble.n 0x9876	@ 00009860 09dd
.org 0x9862
	movs r0, #235	@ 00009862 eb20
.org 0x9864
	lsls r0, r0, #1	@ 00009864 4000
.org 0x9866
	add r0, ip	@ 00009866 6044
.org 0x9868
	ldrh r1, [r0, #0]	@ 00009868 0188
.org 0x986a
	movs r0, #132	@ 0000986a 8420
.org 0x986c
	lsls r0, r0, #8	@ 0000986c 0002
.org 0x986e
	ands r0, r1	@ 0000986e 0840
.org 0x9870
	cmp r0, #0	@ 00009870 0028
.org 0x9872
	bne.n 0x9876	@ 00009872 00d1
.org 0x9874
	subs r5, r2, #1	@ 00009874 551e
.org 0x9876
	movs r2, #24	@ 00009876 1822
.org 0x9878
	add r9, r2	@ 00009878 9144
.org 0x987a
	add r8, r2	@ 0000987a 9044
.org 0x987c
	add ip, r2	@ 0000987c 9444
.org 0x987e
	subs r6, #1	@ 0000987e 013e
.org 0x9880
	cmp r6, #0	@ 00009880 002e
.org 0x9882
	bne.n 0x982a	@ 00009882 d2d1
.org 0x9884
	adds r0, r5, #0	@ 00009884 281c
.org 0x9886
	add sp, #4	@ 00009886 01b0
.org 0x9888
	pop {r3, r4, r5}	@ 00009888 38bc
.org 0x988a
	mov r8, r3	@ 0000988a 9846
.org 0x988c
	mov r9, r4	@ 0000988c a146
.org 0x988e
	mov sl, r5	@ 0000988e aa46
.org 0x9890
	pop {r4, r5, r6, r7}	@ 00009890 f0bc
.org 0x9892
	pop {r1}	@ 00009892 02bc
.org 0x9894
	bx r1	@ 00009894 0847
