@ FUN_080d880c  entry 0x080d880c  size 138
.thumb
.org 0xd880c
FUN_080d880c:
	push {r4, r5, r6, r7, lr}	@ 000d880c f0b5
.org 0xd880e
	sub sp, #8	@ 000d880e 82b0
.org 0xd8810
	adds r6, r0, #0	@ 000d8810 061c
.org 0xd8812
	bl 0x1cff0	@ 000d8812 44f7edfb
.org 0xd8816
	ldr r1, [r6, #84]	@ 000d8816 716d
.org 0xd8818
	ldr r0, [r6, #92]	@ 000d8818 f06d
.org 0xd881a
	adds r7, r1, r0	@ 000d881a 0f18
.org 0xd881c
	str r7, [r6, #84]	@ 000d881c 7765
.org 0xd881e
	ldr r1, [r6, #100]	@ 000d881e 716e
.org 0xd8820
	adds r0, r0, r1	@ 000d8820 4018
.org 0xd8822
	str r0, [r6, #92]	@ 000d8822 f065
.org 0xd8824
	ldrb r0, [r6, #18]	@ 000d8824 b07c
.org 0xd8826
	subs r0, #1	@ 000d8826 0138
.org 0xd8828
	strb r0, [r6, #18]	@ 000d8828 b074
.org 0xd882a
	lsls r0, r0, #24	@ 000d882a 0006
.org 0xd882c
	cmp r0, #0	@ 000d882c 0028
.org 0xd882e
	bne.n 0xd888e	@ 000d882e 2ed1
.org 0xd8830
	ldr r5, [pc, #100]	@ 000d8830 194d
.org 0xd8832
	ldr r0, [r5, #0]	@ 000d8832 2868
.org 0xd8834
	ldr r4, [pc, #100]	@ 000d8834 194c
.org 0xd8836
	muls r0, r4	@ 000d8836 6043
.org 0xd8838
	ldr r1, [pc, #100]	@ 000d8838 1949
.org 0xd883a
	adds r0, r0, r1	@ 000d883a 4018
.org 0xd883c
	lsls r0, r0, #1	@ 000d883c 4000
.org 0xd883e
	lsrs r2, r0, #1	@ 000d883e 4208
.org 0xd8840
	lsrs r0, r0, #17	@ 000d8840 400c
.org 0xd8842
	movs r3, #7	@ 000d8842 0723
.org 0xd8844
	ands r0, r3	@ 000d8844 1840
.org 0xd8846
	subs r0, #3	@ 000d8846 0338
.org 0xd8848
	lsls r0, r0, #8	@ 000d8848 0002
.org 0xd884a
	adds r0, r7, r0	@ 000d884a 3818
.org 0xd884c
	str r0, [sp, #0]	@ 000d884c 0090
.org 0xd884e
	adds r0, r2, #0	@ 000d884e 101c
.org 0xd8850
	muls r0, r4	@ 000d8850 6043
.org 0xd8852
	adds r0, r0, r1	@ 000d8852 4018
.org 0xd8854
	lsls r0, r0, #1	@ 000d8854 4000
.org 0xd8856
	lsrs r1, r0, #1	@ 000d8856 4108
.org 0xd8858
	str r1, [r5, #0]	@ 000d8858 2960
.org 0xd885a
	lsrs r0, r0, #17	@ 000d885a 400c
.org 0xd885c
	ands r0, r3	@ 000d885c 1840
.org 0xd885e
	subs r0, #3	@ 000d885e 0338
.org 0xd8860
	lsls r0, r0, #8	@ 000d8860 0002
.org 0xd8862
	ldr r1, [r6, #88]	@ 000d8862 b16d
.org 0xd8864
	adds r1, r1, r0	@ 000d8864 0918
.org 0xd8866
	str r1, [sp, #4]	@ 000d8866 0191
.org 0xd8868
	movs r0, #2	@ 000d8868 0220
.org 0xd886a
	mov r1, sp	@ 000d886a 6946
.org 0xd886c
	bl 0xd0c88	@ 000d886c f8f70cfa
.org 0xd8870
	adds r0, r6, #0	@ 000d8870 301c
.org 0xd8872
	bl 0xd8998	@ 000d8872 00f091f8
.org 0xd8876
	ldr r1, [pc, #44]	@ 000d8876 0b49
.org 0xd8878
	ldrb r0, [r6, #9]	@ 000d8878 707a
.org 0xd887a
	lsls r0, r0, #2	@ 000d887a 8000
.org 0xd887c
	adds r0, r0, r1	@ 000d887c 4018
.org 0xd887e
	movs r1, #2	@ 000d887e 0221
.org 0xd8880
	str r1, [r6, #12]	@ 000d8880 f160
.org 0xd8882
	ldr r0, [r0, #0]	@ 000d8882 0068
.org 0xd8884
	ldr r0, [r0, #8]	@ 000d8884 8068
.org 0xd8886
	str r0, [r6, #20]	@ 000d8886 7061
.org 0xd8888
	adds r0, r6, #0	@ 000d8888 301c
.org 0xd888a
	bl 0xd8978	@ 000d888a 00f075f8
.org 0xd888e
	add sp, #8	@ 000d888e 02b0
.org 0xd8890
	pop {r4, r5, r6, r7}	@ 000d8890 f0bc
.org 0xd8892
	pop {r0}	@ 000d8892 01bc
.org 0xd8894
	bx r0	@ 000d8894 0047
