@ FUN_080e7948  entry 0x080e7948  size 236
.thumb
.org 0xe7948
FUN_080e7948:
	push {r4, r5, r6, r7, lr}	@ 000e7948 f0b5
.org 0xe794a
	mov r7, sl	@ 000e794a 5746
.org 0xe794c
	mov r6, r9	@ 000e794c 4e46
.org 0xe794e
	mov r5, r8	@ 000e794e 4546
.org 0xe7950
	push {r5, r6, r7}	@ 000e7950 e0b4
.org 0xe7952
	sub sp, #40	@ 000e7952 8ab0
.org 0xe7954
	adds r6, r0, #0	@ 000e7954 061c
.org 0xe7956
	mov r1, sp	@ 000e7956 6946
.org 0xe7958
	ldr r0, [pc, #216]	@ 000e7958 3648
.org 0xe795a
	ldmia r0!, {r2, r3, r4}	@ 000e795a 1cc8
.org 0xe795c
	stmia r1!, {r2, r3, r4}	@ 000e795c 1cc1
.org 0xe795e
	ldmia r0!, {r2, r3, r4}	@ 000e795e 1cc8
.org 0xe7960
	stmia r1!, {r2, r3, r4}	@ 000e7960 1cc1
.org 0xe7962
	ldmia r0!, {r2, r3}	@ 000e7962 0cc8
.org 0xe7964
	stmia r1!, {r2, r3}	@ 000e7964 0cc1
.org 0xe7966
	ldrb r1, [r6, #17]	@ 000e7966 717c
.org 0xe7968
	ldrb r0, [r6, #10]	@ 000e7968 b07a
.org 0xe796a
	lsrs r5, r0, #4	@ 000e796a 0509
.org 0xe796c
	movs r0, #1	@ 000e796c 0120
.org 0xe796e
	ands r5, r0	@ 000e796e 0540
.org 0xe7970
	cmp r1, #0	@ 000e7970 0029
.org 0xe7972
	bne.n 0xe797a	@ 000e7972 02d1
.org 0xe7974
	movs r0, #82	@ 000e7974 5220
.org 0xe7976
	bl 0x2b10	@ 000e7976 1bf7cbf8
.org 0xe797a
	lsls r0, r5, #1	@ 000e797a 6800
.org 0xe797c
	subs r0, #1	@ 000e797c 0138
.org 0xe797e
	ldr r1, [sp, #0]	@ 000e797e 0099
.org 0xe7980
	muls r1, r0	@ 000e7980 4143
.org 0xe7982
	ldr r0, [r6, #84]	@ 000e7982 706d
.org 0xe7984
	adds r0, r0, r1	@ 000e7984 4018
.org 0xe7986
	str r0, [sp, #32]	@ 000e7986 0890
.org 0xe7988
	ldr r0, [r6, #88]	@ 000e7988 b06d
.org 0xe798a
	ldr r1, [sp, #4]	@ 000e798a 0199
.org 0xe798c
	adds r0, r0, r1	@ 000e798c 4018
.org 0xe798e
	add r4, sp, #32	@ 000e798e 08ac
.org 0xe7990
	str r0, [r4, #4]	@ 000e7990 6060
.org 0xe7992
	ldr r1, [pc, #164]	@ 000e7992 2949
.org 0xe7994
	lsls r0, r5, #4	@ 000e7994 2801
.org 0xe7996
	orrs r5, r0	@ 000e7996 0543
.org 0xe7998
	lsls r5, r5, #24	@ 000e7998 2d06
.org 0xe799a
	lsrs r3, r5, #24	@ 000e799a 2b0e
.org 0xe799c
	adds r0, r4, #0	@ 000e799c 201c
.org 0xe799e
	movs r2, #0	@ 000e799e 0022
.org 0xe79a0
	bl 0xd4c8c	@ 000e79a0 edf774f9
.org 0xe79a4
	ldr r0, [pc, #148]	@ 000e79a4 2548
.org 0xe79a6
	mov sl, r0	@ 000e79a6 8246
.org 0xe79a8
	movs r1, #31	@ 000e79a8 1f21
.org 0xe79aa
	mov r9, r1	@ 000e79aa 8946
.org 0xe79ac
	movs r7, #0	@ 000e79ac 0027
.org 0xe79ae
	mov r8, r4	@ 000e79ae a046
.org 0xe79b0
	movs r4, #3	@ 000e79b0 0324
.org 0xe79b2
	ldr r2, [pc, #140]	@ 000e79b2 234a
.org 0xe79b4
	ldr r0, [r2, #0]	@ 000e79b4 1068
.org 0xe79b6
	ldr r3, [pc, #140]	@ 000e79b6 234b
.org 0xe79b8
	muls r0, r3	@ 000e79b8 5843
.org 0xe79ba
	add r0, sl	@ 000e79ba 5044
.org 0xe79bc
	lsls r0, r0, #1	@ 000e79bc 4000
.org 0xe79be
	lsrs r2, r0, #1	@ 000e79be 4208
.org 0xe79c0
	lsrs r0, r0, #17	@ 000e79c0 400c
.org 0xe79c2
	mov r1, r9	@ 000e79c2 4946
.org 0xe79c4
	ands r0, r1	@ 000e79c4 0840
.org 0xe79c6
	subs r0, #15	@ 000e79c6 0f38
.org 0xe79c8
	lsls r0, r0, #8	@ 000e79c8 0002
.org 0xe79ca
	ldr r1, [r6, #84]	@ 000e79ca 716d
.org 0xe79cc
	adds r1, r1, r0	@ 000e79cc 0918
.org 0xe79ce
	str r1, [sp, #32]	@ 000e79ce 0891
.org 0xe79d0
	adds r0, r2, #0	@ 000e79d0 101c
.org 0xe79d2
	muls r0, r3	@ 000e79d2 5843
.org 0xe79d4
	add r0, sl	@ 000e79d4 5044
.org 0xe79d6
	lsls r0, r0, #1	@ 000e79d6 4000
.org 0xe79d8
	lsrs r1, r0, #1	@ 000e79d8 4108
.org 0xe79da
	ldr r2, [pc, #100]	@ 000e79da 194a
.org 0xe79dc
	str r1, [r2, #0]	@ 000e79dc 1160
.org 0xe79de
	lsrs r0, r0, #17	@ 000e79de 400c
.org 0xe79e0
	mov r3, r9	@ 000e79e0 4b46
.org 0xe79e2
	ands r0, r3	@ 000e79e2 1840
.org 0xe79e4
	lsls r0, r0, #8	@ 000e79e4 0002
.org 0xe79e6
	movs r1, #128	@ 000e79e6 8021
.org 0xe79e8
	lsls r1, r1, #1	@ 000e79e8 4900
.org 0xe79ea
	adds r0, r0, r1	@ 000e79ea 4018
.org 0xe79ec
	ldr r1, [r6, #88]	@ 000e79ec b16d
.org 0xe79ee
	adds r1, r1, r0	@ 000e79ee 0918
.org 0xe79f0
	mov r2, r8	@ 000e79f0 4246
.org 0xe79f2
	str r1, [r2, #4]	@ 000e79f2 5160
.org 0xe79f4
	ldr r1, [pc, #64]	@ 000e79f4 1049
.org 0xe79f6
	adds r1, r7, r1	@ 000e79f6 7918
.org 0xe79f8
	mov r0, r8	@ 000e79f8 4046
.org 0xe79fa
	movs r2, #0	@ 000e79fa 0022
.org 0xe79fc
	lsrs r3, r5, #24	@ 000e79fc 2b0e
.org 0xe79fe
	bl 0xd4c8c	@ 000e79fe edf745f9
.org 0xe7a02
	adds r7, #28	@ 000e7a02 1c37
.org 0xe7a04
	subs r4, #1	@ 000e7a04 013c
.org 0xe7a06
	cmp r4, #0	@ 000e7a06 002c
.org 0xe7a08
	bge.n 0xe79b2	@ 000e7a08 d3da
.org 0xe7a0a
	ldrb r1, [r6, #10]	@ 000e7a0a b17a
.org 0xe7a0c
	movs r0, #254	@ 000e7a0c fe20
.org 0xe7a0e
	ands r0, r1	@ 000e7a0e 0840
.org 0xe7a10
	strb r0, [r6, #10]	@ 000e7a10 b072
.org 0xe7a12
	ldr r1, [pc, #52]	@ 000e7a12 0d49
.org 0xe7a14
	ldrb r0, [r6, #9]	@ 000e7a14 707a
.org 0xe7a16
	lsls r0, r0, #2	@ 000e7a16 8000
.org 0xe7a18
	adds r0, r0, r1	@ 000e7a18 4018
.org 0xe7a1a
	movs r1, #4	@ 000e7a1a 0421
.org 0xe7a1c
	str r1, [r6, #12]	@ 000e7a1c f160
.org 0xe7a1e
	ldr r0, [r0, #0]	@ 000e7a1e 0068
.org 0xe7a20
	ldr r0, [r0, #16]	@ 000e7a20 0069
.org 0xe7a22
	str r0, [r6, #20]	@ 000e7a22 7061
.org 0xe7a24
	add sp, #40	@ 000e7a24 0ab0
.org 0xe7a26
	pop {r3, r4, r5}	@ 000e7a26 38bc
.org 0xe7a28
	mov r8, r3	@ 000e7a28 9846
.org 0xe7a2a
	mov r9, r4	@ 000e7a2a a146
.org 0xe7a2c
	mov sl, r5	@ 000e7a2c aa46
.org 0xe7a2e
	pop {r4, r5, r6, r7}	@ 000e7a2e f0bc
.org 0xe7a30
	pop {r0}	@ 000e7a30 01bc
.org 0xe7a32
	bx r0	@ 000e7a32 0047
