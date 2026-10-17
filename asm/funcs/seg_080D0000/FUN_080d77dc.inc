@ FUN_080d77dc  entry 0x080d77dc  size 126
.thumb
.org 0xd77dc
FUN_080d77dc:
	push {r4, r5, r6, r7, lr}	@ 000d77dc f0b5
.org 0xd77de
	mov r7, r9	@ 000d77de 4f46
.org 0xd77e0
	mov r6, r8	@ 000d77e0 4646
.org 0xd77e2
	push {r6, r7}	@ 000d77e2 c0b4
.org 0xd77e4
	adds r6, r0, #0	@ 000d77e4 061c
.org 0xd77e6
	adds r4, r1, #0	@ 000d77e6 0c1c
.org 0xd77e8
	adds r5, r2, #0	@ 000d77e8 151c
.org 0xd77ea
	mov r8, r3	@ 000d77ea 9846
.org 0xd77ec
	ldr r0, [sp, #32]	@ 000d77ec 0898
.org 0xd77ee
	lsls r0, r0, #24	@ 000d77ee 0006
.org 0xd77f0
	lsrs r0, r0, #24	@ 000d77f0 000e
.org 0xd77f2
	mov r9, r0	@ 000d77f2 8146
.org 0xd77f4
	ldr r0, [pc, #100]	@ 000d77f4 1948
.org 0xd77f6
	ldr r0, [r0, #0]	@ 000d77f6 0068
.org 0xd77f8
	bl 0x5500	@ 000d77f8 2df782fe
.org 0xd77fc
	mov ip, r0	@ 000d77fc 8446
.org 0xd77fe
	cmp r0, #0	@ 000d77fe 0028
.org 0xd7800
	beq.n 0xd784e	@ 000d7800 25d0
.org 0xd7802
	adds r0, #37	@ 000d7802 2530
.org 0xd7804
	movs r2, #0	@ 000d7804 0022
.org 0xd7806
	movs r3, #1	@ 000d7806 0123
.org 0xd7808
	strb r3, [r0, #0]	@ 000d7808 0370
.org 0xd780a
	ldr r1, [pc, #84]	@ 000d780a 1549
.org 0xd780c
	movs r0, #23	@ 000d780c 1720
.org 0xd780e
	mov r7, ip	@ 000d780e 6746
.org 0xd7810
	strb r0, [r7, #9]	@ 000d7810 7872
.org 0xd7812
	ldr r0, [r1, #92]	@ 000d7812 c86d
.org 0xd7814
	ldr r0, [r0, #0]	@ 000d7814 0068
.org 0xd7816
	str r0, [r7, #20]	@ 000d7816 7861
.org 0xd7818
	movs r1, #0	@ 000d7818 0021
.org 0xd781a
	strh r2, [r7, #32]	@ 000d781a 3a84
.org 0xd781c
	mov r0, ip	@ 000d781c 6046
.org 0xd781e
	adds r0, #34	@ 000d781e 2230
.org 0xd7820
	strb r1, [r0, #0]	@ 000d7820 0170
.org 0xd7822
	movs r0, #4	@ 000d7822 0420
.org 0xd7824
	strb r0, [r7, #16]	@ 000d7824 3874
.org 0xd7826
	str r6, [r7, #40]	@ 000d7826 be62
.org 0xd7828
	ldr r0, [sp, #28]	@ 000d7828 0798
.org 0xd782a
	str r0, [r7, #116]	@ 000d782a 7867
.org 0xd782c
	ldr r0, [r4, #0]	@ 000d782c 2068
.org 0xd782e
	str r0, [r7, #84]	@ 000d782e 7865
.org 0xd7830
	ldr r0, [r4, #4]	@ 000d7830 6068
.org 0xd7832
	str r0, [r7, #88]	@ 000d7832 b865
.org 0xd7834
	ldr r0, [r5, #0]	@ 000d7834 2868
.org 0xd7836
	str r0, [r7, #92]	@ 000d7836 f865
.org 0xd7838
	ldr r0, [r5, #4]	@ 000d7838 6868
.org 0xd783a
	str r0, [r7, #96]	@ 000d783a 3866
.org 0xd783c
	mov r0, r8	@ 000d783c 4046
.org 0xd783e
	str r0, [r7, #104]	@ 000d783e b866
.org 0xd7840
	mov r2, r9	@ 000d7840 4a46
.org 0xd7842
	strb r2, [r7, #18]	@ 000d7842 ba74
.org 0xd7844
	mov r0, ip	@ 000d7844 6046
.org 0xd7846
	adds r0, #120	@ 000d7846 7830
.org 0xd7848
	strb r3, [r0, #0]	@ 000d7848 0370
.org 0xd784a
	adds r0, #1	@ 000d784a 0130
.org 0xd784c
	strb r1, [r0, #0]	@ 000d784c 0170
.org 0xd784e
	pop {r3, r4}	@ 000d784e 18bc
.org 0xd7850
	mov r8, r3	@ 000d7850 9846
.org 0xd7852
	mov r9, r4	@ 000d7852 a146
.org 0xd7854
	pop {r4, r5, r6, r7}	@ 000d7854 f0bc
.org 0xd7856
	pop {r0}	@ 000d7856 01bc
.org 0xd7858
	bx r0	@ 000d7858 0047
