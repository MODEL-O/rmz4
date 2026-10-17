@ FUN_080f57a4  entry 0x080f57a4  size 162
.thumb
.org 0xf57a4
FUN_080f57a4:
	push {r4, r5, r6, r7, lr}	@ 000f57a4 f0b5
.org 0xf57a6
	mov r7, r9	@ 000f57a6 4f46
.org 0xf57a8
	mov r6, r8	@ 000f57a8 4646
.org 0xf57aa
	push {r6, r7}	@ 000f57aa c0b4
.org 0xf57ac
	mov r9, r0	@ 000f57ac 8146
.org 0xf57ae
	adds r7, r1, #0	@ 000f57ae 0f1c
.org 0xf57b0
	movs r4, #0	@ 000f57b0 0024
.org 0xf57b2
	ldr r0, [r7, #0]	@ 000f57b2 3868
.org 0xf57b4
	cmp r0, #0	@ 000f57b4 0028
.org 0xf57b6
	bne.n 0xf57be	@ 000f57b6 02d1
.org 0xf57b8
	ldr r0, [r7, #4]	@ 000f57b8 7868
.org 0xf57ba
	cmp r0, #0	@ 000f57ba 0028
.org 0xf57bc
	beq.n 0xf57d4	@ 000f57bc 0ad0
.org 0xf57be
	adds r0, r4, #1	@ 000f57be 601c
.org 0xf57c0
	lsls r0, r0, #24	@ 000f57c0 0006
.org 0xf57c2
	lsrs r4, r0, #24	@ 000f57c2 040e
.org 0xf57c4
	lsls r0, r4, #3	@ 000f57c4 e000
.org 0xf57c6
	adds r1, r0, r7	@ 000f57c6 c119
.org 0xf57c8
	ldr r0, [r1, #0]	@ 000f57c8 0868
.org 0xf57ca
	cmp r0, #0	@ 000f57ca 0028
.org 0xf57cc
	bne.n 0xf57be	@ 000f57cc f7d1
.org 0xf57ce
	ldr r0, [r1, #4]	@ 000f57ce 4868
.org 0xf57d0
	cmp r0, #0	@ 000f57d0 0028
.org 0xf57d2
	bne.n 0xf57be	@ 000f57d2 f4d1
.org 0xf57d4
	adds r5, r4, #0	@ 000f57d4 251c
.org 0xf57d6
	cmp r5, #1	@ 000f57d6 012d
.org 0xf57d8
	bhi.n 0xf57de	@ 000f57d8 01d8
.org 0xf57da
	movs r0, #0	@ 000f57da 0020
.org 0xf57dc
	b.n 0xf583a	@ 000f57dc 2de0
.org 0xf57de
	movs r0, #0	@ 000f57de 0020
.org 0xf57e0
	mov r8, r0	@ 000f57e0 8046
.org 0xf57e2
	movs r6, #1	@ 000f57e2 0126
.org 0xf57e4
	negs r6, r6	@ 000f57e4 7642
.org 0xf57e6
	movs r4, #0	@ 000f57e6 0024
.org 0xf57e8
	cmp r8, r5	@ 000f57e8 a845
.org 0xf57ea
	bcs.n 0xf5808	@ 000f57ea 0dd2
.org 0xf57ec
	lsls r1, r4, #3	@ 000f57ec e100
.org 0xf57ee
	adds r1, r7, r1	@ 000f57ee 7918
.org 0xf57f0
	mov r0, r9	@ 000f57f0 4846
.org 0xf57f2
	bl 0xf5848	@ 000f57f2 00f029f8
.org 0xf57f6
	cmp r6, r0	@ 000f57f6 8642
.org 0xf57f8
	bls.n 0xf57fe	@ 000f57f8 01d9
.org 0xf57fa
	adds r6, r0, #0	@ 000f57fa 061c
.org 0xf57fc
	mov r8, r4	@ 000f57fc a046
.org 0xf57fe
	adds r0, r4, #1	@ 000f57fe 601c
.org 0xf5800
	lsls r0, r0, #24	@ 000f5800 0006
.org 0xf5802
	lsrs r4, r0, #24	@ 000f5802 040e
.org 0xf5804
	cmp r4, r5	@ 000f5804 ac42
.org 0xf5806
	bcc.n 0xf57ec	@ 000f5806 f1d3
.org 0xf5808
	mov r0, r8	@ 000f5808 4046
.org 0xf580a
	adds r0, #1	@ 000f580a 0130
.org 0xf580c
	lsls r0, r0, #24	@ 000f580c 0006
.org 0xf580e
	lsrs r6, r0, #24	@ 000f580e 060e
.org 0xf5810
	cmp r6, r5	@ 000f5810 ae42
.org 0xf5812
	bne.n 0xf5816	@ 000f5812 00d1
.org 0xf5814
	movs r6, #0	@ 000f5814 0026
.org 0xf5816
	lsls r4, r6, #3	@ 000f5816 f400
.org 0xf5818
	adds r4, r7, r4	@ 000f5818 3c19
.org 0xf581a
	mov r0, r9	@ 000f581a 4846
.org 0xf581c
	adds r1, r4, #0	@ 000f581c 211c
.org 0xf581e
	bl 0xf5848	@ 000f581e 00f013f8
.org 0xf5822
	adds r5, r0, #0	@ 000f5822 051c
.org 0xf5824
	mov r1, r8	@ 000f5824 4146
.org 0xf5826
	lsls r0, r1, #3	@ 000f5826 c800
.org 0xf5828
	adds r0, r7, r0	@ 000f5828 3818
.org 0xf582a
	adds r1, r4, #0	@ 000f582a 211c
.org 0xf582c
	bl 0xf5848	@ 000f582c 00f00cf8
.org 0xf5830
	cmp r5, r0	@ 000f5830 8542
.org 0xf5832
	bcc.n 0xf5838	@ 000f5832 01d3
.org 0xf5834
	mov r0, r8	@ 000f5834 4046
.org 0xf5836
	b.n 0xf583a	@ 000f5836 00e0
.org 0xf5838
	adds r0, r6, #0	@ 000f5838 301c
.org 0xf583a
	pop {r3, r4}	@ 000f583a 18bc
.org 0xf583c
	mov r8, r3	@ 000f583c 9846
.org 0xf583e
	mov r9, r4	@ 000f583e a146
.org 0xf5840
	pop {r4, r5, r6, r7}	@ 000f5840 f0bc
.org 0xf5842
	pop {r1}	@ 000f5842 02bc
.org 0xf5844
	bx r1	@ 000f5844 0847
