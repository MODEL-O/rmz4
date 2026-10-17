@ FUN_080d6834  entry 0x080d6834  size 92
.thumb
.org 0xd6834
FUN_080d6834:
	push {r4, r5, r6, r7, lr}	@ 000d6834 f0b5
.org 0xd6836
	mov r7, r8	@ 000d6836 4746
.org 0xd6838
	push {r7}	@ 000d6838 80b4
.org 0xd683a
	adds r7, r0, #0	@ 000d683a 071c
.org 0xd683c
	adds r5, r1, #0	@ 000d683c 0d1c
.org 0xd683e
	movs r4, #0	@ 000d683e 0024
.org 0xd6840
	movs r6, #0	@ 000d6840 0026
.org 0xd6842
	ldr r0, [pc, #76]	@ 000d6842 1348
.org 0xd6844
	mov r8, r0	@ 000d6844 8046
.org 0xd6846
	ldr r0, [pc, #76]	@ 000d6846 1348
.org 0xd6848
	ldr r0, [r0, #0]	@ 000d6848 0068
.org 0xd684a
	bl 0x5500	@ 000d684a 2ef759fe
.org 0xd684e
	adds r1, r0, #0	@ 000d684e 011c
.org 0xd6850
	cmp r1, #0	@ 000d6850 0029
.org 0xd6852
	beq.n 0xd6880	@ 000d6852 15d0
.org 0xd6854
	adds r2, r1, #0	@ 000d6854 0a1c
.org 0xd6856
	adds r2, #37	@ 000d6856 2532
.org 0xd6858
	movs r0, #1	@ 000d6858 0120
.org 0xd685a
	strb r0, [r2, #0]	@ 000d685a 1070
.org 0xd685c
	movs r0, #21	@ 000d685c 1520
.org 0xd685e
	strb r0, [r1, #9]	@ 000d685e 4872
.org 0xd6860
	mov r2, r8	@ 000d6860 4246
.org 0xd6862
	ldr r0, [r2, #84]	@ 000d6862 506d
.org 0xd6864
	ldr r0, [r0, #0]	@ 000d6864 0068
.org 0xd6866
	str r0, [r1, #20]	@ 000d6866 4861
.org 0xd6868
	strh r6, [r1, #32]	@ 000d6868 0e84
.org 0xd686a
	adds r0, r1, #0	@ 000d686a 081c
.org 0xd686c
	adds r0, #34	@ 000d686c 2230
.org 0xd686e
	strb r6, [r0, #0]	@ 000d686e 0670
.org 0xd6870
	movs r0, #2	@ 000d6870 0220
.org 0xd6872
	strb r0, [r1, #16]	@ 000d6872 0874
.org 0xd6874
	strb r4, [r1, #17]	@ 000d6874 4c74
.org 0xd6876
	str r7, [r1, #40]	@ 000d6876 8f62
.org 0xd6878
	ldr r0, [r5, #0]	@ 000d6878 2868
.org 0xd687a
	str r0, [r1, #84]	@ 000d687a 4865
.org 0xd687c
	ldr r0, [r5, #4]	@ 000d687c 6868
.org 0xd687e
	str r0, [r1, #88]	@ 000d687e 8865
.org 0xd6880
	adds r4, #1	@ 000d6880 0134
.org 0xd6882
	cmp r4, #3	@ 000d6882 032c
.org 0xd6884
	ble.n 0xd6846	@ 000d6884 dfdd
.org 0xd6886
	pop {r3}	@ 000d6886 08bc
.org 0xd6888
	mov r8, r3	@ 000d6888 9846
.org 0xd688a
	pop {r4, r5, r6, r7}	@ 000d688a f0bc
.org 0xd688c
	pop {r0}	@ 000d688c 01bc
.org 0xd688e
	bx r0	@ 000d688e 0047
