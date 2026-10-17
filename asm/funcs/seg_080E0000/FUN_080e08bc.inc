@ FUN_080e08bc  entry 0x080e08bc  size 142
.thumb
.org 0xe08bc
FUN_080e08bc:
	push {r4, r5, r6, r7, lr}	@ 000e08bc f0b5
.org 0xe08be
	adds r7, r0, #0	@ 000e08be 071c
.org 0xe08c0
	lsls r1, r1, #24	@ 000e08c0 0906
.org 0xe08c2
	lsrs r6, r1, #24	@ 000e08c2 0e0e
.org 0xe08c4
	lsls r2, r2, #24	@ 000e08c4 1206
.org 0xe08c6
	lsrs r5, r2, #24	@ 000e08c6 150e
.org 0xe08c8
	lsls r3, r3, #24	@ 000e08c8 1b06
.org 0xe08ca
	lsrs r4, r3, #24	@ 000e08ca 1c0e
.org 0xe08cc
	ldr r0, [pc, #76]	@ 000e08cc 1348
.org 0xe08ce
	ldr r0, [r0, #0]	@ 000e08ce 0068
.org 0xe08d0
	bl 0x5500	@ 000e08d0 24f716fe
.org 0xe08d4
	mov ip, r0	@ 000e08d4 8446
.org 0xe08d6
	cmp r0, #0	@ 000e08d6 0028
.org 0xe08d8
	beq.n 0xe094c	@ 000e08d8 38d0
.org 0xe08da
	mov r1, ip	@ 000e08da 6146
.org 0xe08dc
	adds r1, #37	@ 000e08dc 2531
.org 0xe08de
	movs r2, #0	@ 000e08de 0022
.org 0xe08e0
	movs r0, #1	@ 000e08e0 0120
.org 0xe08e2
	strb r0, [r1, #0]	@ 000e08e2 0870
.org 0xe08e4
	ldr r0, [pc, #56]	@ 000e08e4 0e48
.org 0xe08e6
	movs r1, #57	@ 000e08e6 3921
.org 0xe08e8
	mov r3, ip	@ 000e08e8 6346
.org 0xe08ea
	strb r1, [r3, #9]	@ 000e08ea 5972
.org 0xe08ec
	adds r0, #228	@ 000e08ec e430
.org 0xe08ee
	ldr r0, [r0, #0]	@ 000e08ee 0068
.org 0xe08f0
	ldr r0, [r0, #0]	@ 000e08f0 0068
.org 0xe08f2
	str r0, [r3, #20]	@ 000e08f2 5861
.org 0xe08f4
	movs r0, #0	@ 000e08f4 0020
.org 0xe08f6
	strh r2, [r3, #32]	@ 000e08f6 1a84
.org 0xe08f8
	mov r1, ip	@ 000e08f8 6146
.org 0xe08fa
	adds r1, #34	@ 000e08fa 2231
.org 0xe08fc
	strb r0, [r1, #0]	@ 000e08fc 0870
.org 0xe08fe
	ldr r0, [r7, #0]	@ 000e08fe 3868
.org 0xe0900
	ldr r1, [r7, #4]	@ 000e0900 7968
.org 0xe0902
	mov r2, ip	@ 000e0902 6246
.org 0xe0904
	str r0, [r2, #84]	@ 000e0904 5065
.org 0xe0906
	str r1, [r2, #88]	@ 000e0906 9165
.org 0xe0908
	strb r6, [r2, #16]	@ 000e0908 1674
.org 0xe090a
	strb r5, [r2, #17]	@ 000e090a 5574
.org 0xe090c
	adds r3, r4, #0	@ 000e090c 231c
.org 0xe090e
	cmp r3, #0	@ 000e090e 002b
.org 0xe0910
	beq.n 0xe0924	@ 000e0910 08d0
.org 0xe0912
	ldrb r0, [r2, #10]	@ 000e0912 907a
.org 0xe0914
	movs r1, #16	@ 000e0914 1021
.org 0xe0916
	orrs r0, r1	@ 000e0916 0843
.org 0xe0918
	strb r0, [r2, #10]	@ 000e0918 9072
.org 0xe091a
	b.n 0xe0930	@ 000e091a 09e0
.org 0xe091c
	.byte 0x9c,0xed,0x02,0x02	@ 000e091c data
.org 0xe0920
	.byte 0x64,0x6f,0x86,0x08	@ 000e0920 data
.org 0xe0924
	mov r0, ip	@ 000e0924 6046
.org 0xe0926
	ldrb r1, [r0, #10]	@ 000e0926 817a
.org 0xe0928
	movs r0, #239	@ 000e0928 ef20
.org 0xe092a
	ands r0, r1	@ 000e092a 0840
.org 0xe092c
	mov r1, ip	@ 000e092c 6146
.org 0xe092e
	strb r0, [r1, #10]	@ 000e092e 8872
.org 0xe0930
	movs r1, #1	@ 000e0930 0121
.org 0xe0932
	ands r1, r3	@ 000e0932 1940
.org 0xe0934
	mov r0, ip	@ 000e0934 6046
.org 0xe0936
	adds r0, #76	@ 000e0936 4c30
.org 0xe0938
	strb r1, [r0, #0]	@ 000e0938 0170
.org 0xe093a
	mov r3, ip	@ 000e093a 6346
.org 0xe093c
	adds r3, #74	@ 000e093c 4a33
.org 0xe093e
	lsls r1, r1, #4	@ 000e093e 0901
.org 0xe0940
	ldrb r2, [r3, #0]	@ 000e0940 1a78
.org 0xe0942
	movs r0, #17	@ 000e0942 1120
.org 0xe0944
	negs r0, r0	@ 000e0944 4042
.org 0xe0946
	ands r0, r2	@ 000e0946 1040
.org 0xe0948
	orrs r0, r1	@ 000e0948 0843
