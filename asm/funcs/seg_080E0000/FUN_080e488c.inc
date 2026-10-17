@ FUN_080e488c  entry 0x080e488c  size 130
.thumb
.org 0xe488c
FUN_080e488c:
	push {r4, r5, r6, r7, lr}	@ 000e488c f0b5
.org 0xe488e
	mov r7, r8	@ 000e488e 4746
.org 0xe4890
	push {r7}	@ 000e4890 80b4
.org 0xe4892
	adds r7, r0, #0	@ 000e4892 071c
.org 0xe4894
	ldr r4, [r7, #40]	@ 000e4894 bc6a
.org 0xe4896
	bl 0x1cff0	@ 000e4896 38f7abfb
.org 0xe489a
	ldr r0, [r4, #84]	@ 000e489a 606d
.org 0xe489c
	ldr r1, [pc, #56]	@ 000e489c 0e49
.org 0xe489e
	adds r0, r0, r1	@ 000e489e 4018
.org 0xe48a0
	ldr r5, [r4, #88]	@ 000e48a0 a56d
.org 0xe48a2
	ldr r6, [r7, #84]	@ 000e48a2 7e6d
.org 0xe48a4
	subs r0, r0, r6	@ 000e48a4 801b
.org 0xe48a6
	ldrb r1, [r7, #18]	@ 000e48a6 b97c
.org 0xe48a8
	bl 0x128fb8	@ 000e48a8 44f086fb
.org 0xe48ac
	mov r8, r0	@ 000e48ac 8046
.org 0xe48ae
	str r0, [r7, #92]	@ 000e48ae f865
.org 0xe48b0
	ldr r4, [r7, #88]	@ 000e48b0 bc6d
.org 0xe48b2
	subs r5, r5, r4	@ 000e48b2 2d1b
.org 0xe48b4
	ldrb r1, [r7, #18]	@ 000e48b4 b97c
.org 0xe48b6
	adds r0, r5, #0	@ 000e48b6 281c
.org 0xe48b8
	bl 0x128fb8	@ 000e48b8 44f07efb
.org 0xe48bc
	str r0, [r7, #96]	@ 000e48bc 3866
.org 0xe48be
	add r6, r8	@ 000e48be 4644
.org 0xe48c0
	str r6, [r7, #84]	@ 000e48c0 7e65
.org 0xe48c2
	adds r4, r4, r0	@ 000e48c2 2418
.org 0xe48c4
	str r4, [r7, #88]	@ 000e48c4 bc65
.org 0xe48c6
	ldrb r1, [r7, #18]	@ 000e48c6 b97c
.org 0xe48c8
	movs r0, #1	@ 000e48c8 0120
.org 0xe48ca
	ands r0, r1	@ 000e48ca 0840
.org 0xe48cc
	cmp r0, #0	@ 000e48cc 0028
.org 0xe48ce
	beq.n 0xe48dc	@ 000e48ce 05d0
.org 0xe48d0
	ldrb r1, [r7, #10]	@ 000e48d0 b97a
.org 0xe48d2
	movs r0, #254	@ 000e48d2 fe20
.org 0xe48d4
	ands r0, r1	@ 000e48d4 0840
.org 0xe48d6
	b.n 0xe48e2	@ 000e48d6 04e0
.org 0xe48d8
	.byte 0x00,0xf9,0xff,0xff	@ 000e48d8 data
.org 0xe48dc
	ldrb r0, [r7, #10]	@ 000e48dc b87a
.org 0xe48de
	movs r1, #1	@ 000e48de 0121
.org 0xe48e0
	orrs r0, r1	@ 000e48e0 0843
.org 0xe48e2
	strb r0, [r7, #10]	@ 000e48e2 b872
.org 0xe48e4
	ldrb r0, [r7, #18]	@ 000e48e4 b87c
.org 0xe48e6
	subs r0, #1	@ 000e48e6 0138
.org 0xe48e8
	strb r0, [r7, #18]	@ 000e48e8 b874
.org 0xe48ea
	lsls r0, r0, #24	@ 000e48ea 0006
.org 0xe48ec
	cmp r0, #0	@ 000e48ec 0028
.org 0xe48ee
	bne.n 0xe4908	@ 000e48ee 0bd1
.org 0xe48f0
	ldr r1, [pc, #32]	@ 000e48f0 0849
.org 0xe48f2
	ldrb r0, [r7, #9]	@ 000e48f2 787a
.org 0xe48f4
	lsls r0, r0, #2	@ 000e48f4 8000
.org 0xe48f6
	adds r0, r0, r1	@ 000e48f6 4018
.org 0xe48f8
	movs r1, #2	@ 000e48f8 0221
.org 0xe48fa
	str r1, [r7, #12]	@ 000e48fa f960
.org 0xe48fc
	ldr r0, [r0, #0]	@ 000e48fc 0068
.org 0xe48fe
	ldr r0, [r0, #8]	@ 000e48fe 8068
.org 0xe4900
	str r0, [r7, #20]	@ 000e4900 7861
.org 0xe4902
	adds r0, r7, #0	@ 000e4902 381c
.org 0xe4904
	bl 0xe429c	@ 000e4904 fff7cafc
.org 0xe4908
	pop {r3}	@ 000e4908 08bc
.org 0xe490a
	mov r8, r3	@ 000e490a 9846
.org 0xe490c
	pop {r4, r5, r6, r7}	@ 000e490c f0bc
