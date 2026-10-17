@ FUN_080eb00c  entry 0x080eb00c  size 242
.thumb
.org 0xeb00c
FUN_080eb00c:
	push {r4, r5, r6, r7, lr}	@ 000eb00c f0b5
.org 0xeb00e
	adds r7, r0, #0	@ 000eb00e 071c
.org 0xeb010
	ldrb r0, [r7, #14]	@ 000eb010 b87b
.org 0xeb012
	cmp r0, #1	@ 000eb012 0128
.org 0xeb014
	beq.n 0xeb02a	@ 000eb014 09d0
.org 0xeb016
	cmp r0, #1	@ 000eb016 0128
.org 0xeb018
	bgt.n 0xeb020	@ 000eb018 02dc
.org 0xeb01a
	cmp r0, #0	@ 000eb01a 0028
.org 0xeb01c
	beq.n 0xeb026	@ 000eb01c 03d0
.org 0xeb01e
	b.n 0xeb110	@ 000eb01e 77e0
.org 0xeb020
	cmp r0, #2	@ 000eb020 0228
.org 0xeb022
	beq.n 0xeb0c0	@ 000eb022 4dd0
.org 0xeb024
	b.n 0xeb110	@ 000eb024 74e0
.org 0xeb026
	movs r0, #1	@ 000eb026 0120
.org 0xeb028
	strb r0, [r7, #14]	@ 000eb028 b873
.org 0xeb02a
	adds r0, r7, #0	@ 000eb02a 381c
.org 0xeb02c
	bl 0x1cff0	@ 000eb02c 31f7e0ff
.org 0xeb030
	adds r0, r7, #0	@ 000eb030 381c
.org 0xeb032
	adds r0, #115	@ 000eb032 7330
.org 0xeb034
	ldrb r0, [r0, #0]	@ 000eb034 0078
.org 0xeb036
	cmp r0, #3	@ 000eb036 0328
.org 0xeb038
	bne.n 0xeb110	@ 000eb038 6ad1
.org 0xeb03a
	ldr r2, [pc, #108]	@ 000eb03a 1b4a
.org 0xeb03c
	ldrb r1, [r2, #20]	@ 000eb03c 117d
.org 0xeb03e
	movs r0, #128	@ 000eb03e 8020
.org 0xeb040
	orrs r0, r1	@ 000eb040 0843
.org 0xeb042
	strb r0, [r2, #20]	@ 000eb042 1075
.org 0xeb044
	adds r6, r7, #0	@ 000eb044 3e1c
.org 0xeb046
	adds r6, #184	@ 000eb046 b836
.org 0xeb048
	movs r5, #195	@ 000eb048 c325
.org 0xeb04a
	strb r5, [r6, #0]	@ 000eb04a 3570
.org 0xeb04c
	lsls r4, r5, #2	@ 000eb04c ac00
.org 0xeb04e
	adds r4, #195	@ 000eb04e c334
.org 0xeb050
	lsls r4, r4, #2	@ 000eb050 a400
.org 0xeb052
	ldr r0, [pc, #88]	@ 000eb052 1648
.org 0xeb054
	adds r0, r4, r0	@ 000eb054 2018
.org 0xeb056
	ldr r1, [pc, #88]	@ 000eb056 1649
.org 0xeb058
	lsls r5, r5, #1	@ 000eb058 6d00
.org 0xeb05a
	adds r1, r1, r5	@ 000eb05a 4919
.org 0xeb05c
	ldrh r1, [r1, #0]	@ 000eb05c 0988
.org 0xeb05e
	ldrh r2, [r0, #6]	@ 000eb05e c288
.org 0xeb060
	lsrs r2, r2, #6	@ 000eb060 9209
.org 0xeb062
	subs r1, r1, r2	@ 000eb062 891a
.org 0xeb064
	lsls r1, r1, #5	@ 000eb064 4901
.org 0xeb066
	movs r2, #128	@ 000eb066 8022
.org 0xeb068
	lsls r2, r2, #9	@ 000eb068 5202
.org 0xeb06a
	adds r1, r1, r2	@ 000eb06a 8918
.org 0xeb06c
	bl 0x1ea4	@ 000eb06c 16f71aff
.org 0xeb070
	ldr r3, [pc, #64]	@ 000eb070 104b
.org 0xeb072
	adds r4, r4, r3	@ 000eb072 e418
.org 0xeb074
	ldr r0, [pc, #64]	@ 000eb074 1048
.org 0xeb076
	adds r0, r0, r5	@ 000eb076 4019
.org 0xeb078
	ldrh r1, [r0, #0]	@ 000eb078 0188
.org 0xeb07a
	ldrb r0, [r4, #7]	@ 000eb07a e079
.org 0xeb07c
	subs r1, r1, r0	@ 000eb07c 091a
.org 0xeb07e
	lsls r1, r1, #5	@ 000eb07e 4901
.org 0xeb080
	movs r0, #128	@ 000eb080 8020
.org 0xeb082
	lsls r0, r0, #2	@ 000eb082 8000
.org 0xeb084
	adds r1, r1, r0	@ 000eb084 0918
.org 0xeb086
	adds r0, r4, #0	@ 000eb086 201c
.org 0xeb088
	bl 0x2208	@ 000eb088 17f7bef8
.org 0xeb08c
	ldrb r1, [r6, #0]	@ 000eb08c 3178
.org 0xeb08e
	lsls r1, r1, #8	@ 000eb08e 0902
.org 0xeb090
	adds r0, r7, #0	@ 000eb090 381c
.org 0xeb092
	bl 0x1cf00	@ 000eb092 31f735ff
.org 0xeb096
	adds r0, r7, #0	@ 000eb096 381c
.org 0xeb098
	bl 0x1cff0	@ 000eb098 31f7aaff
.org 0xeb09c
	ldr r0, [pc, #28]	@ 000eb09c 0748
.org 0xeb09e
	bl 0xe9590	@ 000eb09e fef777fa
.org 0xeb0a2
	ldrb r0, [r7, #14]	@ 000eb0a2 b87b
.org 0xeb0a4
	adds r0, #1	@ 000eb0a4 0130
.org 0xeb0a6
	b.n 0xeb10e	@ 000eb0a6 32e0
.org 0xeb0a8
	.byte 0xb0,0xe8,0x02,0x02	@ 000eb0a8 data
.org 0xeb0ac
	.byte 0x00,0x40,0xc4,0x08	@ 000eb0ac data
.org 0xeb0b0
	.byte 0x40,0xe0,0x02,0x02	@ 000eb0b0 data
.org 0xeb0b4
	.byte 0x0c,0x40,0xc4,0x08	@ 000eb0b4 data
.org 0xeb0b8
	.byte 0x40,0xde,0x02,0x02	@ 000eb0b8 data
.org 0xeb0bc
	.byte 0x59,0xb1,0x0e,0x08	@ 000eb0bc data
.org 0xeb0c0
	adds r0, r7, #0	@ 000eb0c0 381c
.org 0xeb0c2
	bl 0x1cff0	@ 000eb0c2 31f795ff
.org 0xeb0c6
	ldrb r0, [r7, #16]	@ 000eb0c6 387c
.org 0xeb0c8
	cmp r0, #2	@ 000eb0c8 0228
.org 0xeb0ca
	bne.n 0xeb0f2	@ 000eb0ca 12d1
.org 0xeb0cc
	ldr r0, [pc, #72]	@ 000eb0cc 1248
.org 0xeb0ce
	ldr r1, [r0, #0]	@ 000eb0ce 0168
.org 0xeb0d0
	ldr r2, [pc, #72]	@ 000eb0d0 124a
.org 0xeb0d2
	adds r0, r1, r2	@ 000eb0d2 8818
.org 0xeb0d4
	ldrb r0, [r0, #0]	@ 000eb0d4 0078
.org 0xeb0d6
	cmp r0, #0	@ 000eb0d6 0028
.org 0xeb0d8
	beq.n 0xeb0f2	@ 000eb0d8 0bd0
.org 0xeb0da
	ldr r2, [r7, #84]	@ 000eb0da 7a6d
.org 0xeb0dc
	movs r3, #192	@ 000eb0dc c023
.org 0xeb0de
	lsls r3, r3, #3	@ 000eb0de db00
.org 0xeb0e0
	adds r0, r2, r3	@ 000eb0e0 d018
.org 0xeb0e2
	ldr r1, [r1, #84]	@ 000eb0e2 496d
.org 0xeb0e4
	cmp r0, r1	@ 000eb0e4 8842
.org 0xeb0e6
	bge.n 0xeb0f2	@ 000eb0e6 04da
.org 0xeb0e8
	movs r3, #232	@ 000eb0e8 e823
.org 0xeb0ea
	lsls r3, r3, #6	@ 000eb0ea 9b01
.org 0xeb0ec
	adds r0, r2, r3	@ 000eb0ec d018
.org 0xeb0ee
	cmp r0, r1	@ 000eb0ee 8842
.org 0xeb0f0
	bgt.n 0xeb110	@ 000eb0f0 0edc
.org 0xeb0f2
	ldrb r1, [r7, #16]	@ 000eb0f2 397c
.org 0xeb0f4
	movs r0, #2	@ 000eb0f4 0220
.org 0xeb0f6
	ands r0, r1	@ 000eb0f6 0840
.org 0xeb0f8
	cmp r0, #0	@ 000eb0f8 0028
.org 0xeb0fa
	beq.n 0xeb110	@ 000eb0fa 09d0
.org 0xeb0fc
	ldr r0, [pc, #32]	@ 000eb0fc 0848
