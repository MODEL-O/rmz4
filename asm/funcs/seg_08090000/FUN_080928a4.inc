@ FUN_080928a4  entry 0x080928a4  size 152
.thumb
.org 0x928a4
FUN_080928a4:
	push {r4, r5, lr}	@ 000928a4 30b5
.org 0x928a6
	sub sp, #8	@ 000928a6 82b0
.org 0x928a8
	adds r4, r0, #0	@ 000928a8 041c
.org 0x928aa
	adds r0, #140	@ 000928aa 8c30
.org 0x928ac
	movs r1, #0	@ 000928ac 0021
.org 0x928ae
	str r1, [r0, #0]	@ 000928ae 0160
.org 0x928b0
	adds r0, #4	@ 000928b0 0430
.org 0x928b2
	str r1, [r0, #0]	@ 000928b2 0160
.org 0x928b4
	adds r0, #4	@ 000928b4 0430
.org 0x928b6
	strb r1, [r0, #0]	@ 000928b6 0170
.org 0x928b8
	ldrb r1, [r4, #10]	@ 000928b8 a17a
.org 0x928ba
	movs r0, #251	@ 000928ba fb20
.org 0x928bc
	ands r0, r1	@ 000928bc 0840
.org 0x928be
	movs r1, #254	@ 000928be fe21
.org 0x928c0
	ands r0, r1	@ 000928c0 0840
.org 0x928c2
	strb r0, [r4, #10]	@ 000928c2 a072
.org 0x928c4
	ldr r0, [r4, #84]	@ 000928c4 606d
.org 0x928c6
	str r0, [sp, #0]	@ 000928c6 0090
.org 0x928c8
	ldr r0, [r4, #88]	@ 000928c8 a06d
.org 0x928ca
	str r0, [sp, #4]	@ 000928ca 0190
.org 0x928cc
	movs r0, #1	@ 000928cc 0120
.org 0x928ce
	mov r1, sp	@ 000928ce 6946
.org 0x928d0
	bl 0xd0c88	@ 000928d0 3ef0daf9
.org 0x928d4
	movs r0, #42	@ 000928d4 2a20
.org 0x928d6
	bl 0x2b10	@ 000928d6 70f71bf9
.org 0x928da
	ldrb r0, [r4, #16]	@ 000928da 207c
.org 0x928dc
	cmp r0, #0	@ 000928dc 0028
.org 0x928de
	bne.n 0x928f4	@ 000928de 09d1
.org 0x928e0
	ldr r2, [pc, #12]	@ 000928e0 034a
.org 0x928e2
	adds r0, r4, #0	@ 000928e2 201c
.org 0x928e4
	mov r1, sp	@ 000928e4 6946
.org 0x928e6
	movs r3, #3	@ 000928e6 0323
.org 0x928e8
	bl 0xdbe4c	@ 000928e8 49f0b0fa
.org 0x928ec
	b.n 0x92900	@ 000928ec 08e0
.org 0x928ee
	.byte 0x00	@ 000928ee data
.org 0x928ef
	.byte 0x00	@ 000928ef data
.org 0x928f0
	.byte 0xc2,0x04,0x86,0x08	@ 000928f0 data
.org 0x928f4
	ldr r2, [pc, #76]	@ 000928f4 134a
.org 0x928f6
	adds r0, r4, #0	@ 000928f6 201c
.org 0x928f8
	mov r1, sp	@ 000928f8 6946
.org 0x928fa
	movs r3, #3	@ 000928fa 0323
.org 0x928fc
	bl 0xdbed8	@ 000928fc 49f0ecfa
.org 0x92900
	ldrb r0, [r4, #16]	@ 00092900 207c
.org 0x92902
	adds r5, r4, #0	@ 00092902 251c
.org 0x92904
	adds r5, #84	@ 00092904 5435
.org 0x92906
	cmp r0, #0	@ 00092906 0028
.org 0x92908
	bne.n 0x92912	@ 00092908 03d1
.org 0x9290a
	movs r0, #3	@ 0009290a 0320
.org 0x9290c
	adds r1, r5, #0	@ 0009290c 291c
.org 0x9290e
	bl 0x2aaec	@ 0009290e 98f7edf8
.org 0x92912
	ldr r2, [pc, #52]	@ 00092912 0d4a
.org 0x92914
	ldrh r1, [r2, #12]	@ 00092914 9189
.org 0x92916
	ldr r0, [pc, #52]	@ 00092916 0d48
.org 0x92918
	cmp r1, r0	@ 00092918 8142
.org 0x9291a
	bhi.n 0x92920	@ 0009291a 01d8
.org 0x9291c
	adds r0, r1, #1	@ 0009291c 481c
.org 0x9291e
	strh r0, [r2, #12]	@ 0009291e 9081
.org 0x92920
	adds r0, r4, #0	@ 00092920 201c
.org 0x92922
	adds r1, r5, #0	@ 00092922 291c
.org 0x92924
	bl 0x2abe0	@ 00092924 98f75cf9
.org 0x92928
	ldr r1, [pc, #36]	@ 00092928 0949
.org 0x9292a
	ldrb r0, [r4, #9]	@ 0009292a 607a
.org 0x9292c
	lsls r0, r0, #2	@ 0009292c 8000
.org 0x9292e
	adds r0, r0, r1	@ 0009292e 4018
.org 0x92930
	movs r1, #4	@ 00092930 0421
.org 0x92932
	str r1, [r4, #12]	@ 00092932 e160
.org 0x92934
	ldr r0, [r0, #0]	@ 00092934 0068
.org 0x92936
	ldr r0, [r0, #16]	@ 00092936 0069
.org 0x92938
	str r0, [r4, #20]	@ 00092938 6061
.org 0x9293a
	add sp, #8	@ 0009293a 02b0
