@ FUN_080d88a8  entry 0x080d88a8  size 192
.thumb
.org 0xd88a8
FUN_080d88a8:
	push {r4, r5, r6, r7, lr}	@ 000d88a8 f0b5
.org 0xd88aa
	sub sp, #8	@ 000d88aa 82b0
.org 0xd88ac
	adds r7, r0, #0	@ 000d88ac 071c
.org 0xd88ae
	ldrb r0, [r7, #17]	@ 000d88ae 787c
.org 0xd88b0
	lsrs r4, r0, #1	@ 000d88b0 4408
.org 0xd88b2
	movs r0, #1	@ 000d88b2 0120
.org 0xd88b4
	ands r4, r0	@ 000d88b4 0440
.org 0xd88b6
	adds r0, r7, #0	@ 000d88b6 381c
.org 0xd88b8
	bl 0x1cff0	@ 000d88b8 44f79afb
.org 0xd88bc
	ldr r0, [r7, #84]	@ 000d88bc 786d
.org 0xd88be
	ldr r1, [r7, #92]	@ 000d88be f96d
.org 0xd88c0
	adds r0, r0, r1	@ 000d88c0 4018
.org 0xd88c2
	str r0, [r7, #84]	@ 000d88c2 7865
.org 0xd88c4
	ldr r0, [r7, #88]	@ 000d88c4 b86d
.org 0xd88c6
	ldr r1, [r7, #96]	@ 000d88c6 396e
.org 0xd88c8
	adds r0, r0, r1	@ 000d88c8 4018
.org 0xd88ca
	str r0, [r7, #88]	@ 000d88ca b865
.org 0xd88cc
	adds r1, #64	@ 000d88cc 4031
.org 0xd88ce
	str r1, [r7, #96]	@ 000d88ce 3966
.org 0xd88d0
	movs r0, #224	@ 000d88d0 e020
.org 0xd88d2
	lsls r0, r0, #3	@ 000d88d2 c000
.org 0xd88d4
	cmp r1, r0	@ 000d88d4 8142
.org 0xd88d6
	ble.n 0xd88da	@ 000d88d6 00dd
.org 0xd88d8
	str r0, [r7, #96]	@ 000d88d8 3866
.org 0xd88da
	ldr r0, [r7, #84]	@ 000d88da 786d
.org 0xd88dc
	str r0, [sp, #0]	@ 000d88dc 0090
.org 0xd88de
	lsls r2, r4, #1	@ 000d88de 6200
.org 0xd88e0
	adds r2, r2, r4	@ 000d88e0 1219
.org 0xd88e2
	lsls r2, r2, #10	@ 000d88e2 9202
.org 0xd88e4
	ldr r1, [r7, #88]	@ 000d88e4 b96d
.org 0xd88e6
	adds r1, r1, r2	@ 000d88e6 8918
.org 0xd88e8
	str r1, [sp, #4]	@ 000d88e8 0191
.org 0xd88ea
	bl 0x7c7c	@ 000d88ea 2ff7c7f9
.org 0xd88ee
	lsls r0, r0, #16	@ 000d88ee 0004
.org 0xd88f0
	cmp r0, #0	@ 000d88f0 0028
.org 0xd88f2
	bne.n 0xd8900	@ 000d88f2 05d1
.org 0xd88f4
	ldrb r0, [r7, #18]	@ 000d88f4 b87c
.org 0xd88f6
	subs r0, #1	@ 000d88f6 0138
.org 0xd88f8
	strb r0, [r7, #18]	@ 000d88f8 b874
.org 0xd88fa
	lsls r0, r0, #24	@ 000d88fa 0006
.org 0xd88fc
	cmp r0, #0	@ 000d88fc 0028
.org 0xd88fe
	bne.n 0xd8960	@ 000d88fe 2fd1
.org 0xd8900
	ldr r6, [pc, #100]	@ 000d8900 194e
.org 0xd8902
	ldr r0, [r6, #0]	@ 000d8902 3068
.org 0xd8904
	ldr r5, [pc, #100]	@ 000d8904 194d
.org 0xd8906
	muls r0, r5	@ 000d8906 6843
.org 0xd8908
	ldr r2, [pc, #100]	@ 000d8908 194a
.org 0xd890a
	adds r0, r0, r2	@ 000d890a 8018
.org 0xd890c
	lsls r0, r0, #1	@ 000d890c 4000
.org 0xd890e
	lsrs r4, r0, #1	@ 000d890e 4408
.org 0xd8910
	lsrs r0, r0, #17	@ 000d8910 400c
.org 0xd8912
	movs r3, #7	@ 000d8912 0723
.org 0xd8914
	ands r0, r3	@ 000d8914 1840
.org 0xd8916
	subs r0, #3	@ 000d8916 0338
.org 0xd8918
	lsls r0, r0, #8	@ 000d8918 0002
.org 0xd891a
	ldr r1, [r7, #84]	@ 000d891a 796d
.org 0xd891c
	adds r1, r1, r0	@ 000d891c 0918
.org 0xd891e
	str r1, [sp, #0]	@ 000d891e 0091
.org 0xd8920
	adds r0, r4, #0	@ 000d8920 201c
.org 0xd8922
	muls r0, r5	@ 000d8922 6843
.org 0xd8924
	adds r0, r0, r2	@ 000d8924 8018
.org 0xd8926
	lsls r0, r0, #1	@ 000d8926 4000
.org 0xd8928
	lsrs r1, r0, #1	@ 000d8928 4108
.org 0xd892a
	str r1, [r6, #0]	@ 000d892a 3160
.org 0xd892c
	lsrs r0, r0, #17	@ 000d892c 400c
.org 0xd892e
	ands r0, r3	@ 000d892e 1840
.org 0xd8930
	subs r0, #3	@ 000d8930 0338
.org 0xd8932
	lsls r0, r0, #8	@ 000d8932 0002
.org 0xd8934
	ldr r1, [r7, #88]	@ 000d8934 b96d
.org 0xd8936
	adds r1, r1, r0	@ 000d8936 0918
.org 0xd8938
	str r1, [sp, #4]	@ 000d8938 0191
.org 0xd893a
	movs r0, #2	@ 000d893a 0220
.org 0xd893c
	mov r1, sp	@ 000d893c 6946
.org 0xd893e
	bl 0xd0c88	@ 000d893e f8f7a3f9
.org 0xd8942
	adds r0, r7, #0	@ 000d8942 381c
.org 0xd8944
	bl 0xd8998	@ 000d8944 00f028f8
.org 0xd8948
	ldr r1, [pc, #40]	@ 000d8948 0a49
.org 0xd894a
	ldrb r0, [r7, #9]	@ 000d894a 787a
.org 0xd894c
	lsls r0, r0, #2	@ 000d894c 8000
.org 0xd894e
	adds r0, r0, r1	@ 000d894e 4018
.org 0xd8950
	movs r1, #2	@ 000d8950 0221
.org 0xd8952
	str r1, [r7, #12]	@ 000d8952 f960
.org 0xd8954
	ldr r0, [r0, #0]	@ 000d8954 0068
.org 0xd8956
	ldr r0, [r0, #8]	@ 000d8956 8068
.org 0xd8958
	str r0, [r7, #20]	@ 000d8958 7861
.org 0xd895a
	adds r0, r7, #0	@ 000d895a 381c
.org 0xd895c
	bl 0xd8978	@ 000d895c 00f00cf8
.org 0xd8960
	add sp, #8	@ 000d8960 02b0
.org 0xd8962
	pop {r4, r5, r6, r7}	@ 000d8962 f0bc
.org 0xd8964
	pop {r0}	@ 000d8964 01bc
.org 0xd8966
	bx r0	@ 000d8966 0047
