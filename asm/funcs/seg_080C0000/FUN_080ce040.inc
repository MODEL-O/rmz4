@ FUN_080ce040  entry 0x080ce040  size 228
.thumb
.org 0xce040
FUN_080ce040:
	push {r4, r5, r6, lr}	@ 000ce040 70b5
.org 0xce042
	adds r5, r0, #0	@ 000ce042 051c
.org 0xce044
	ldr r6, [r5, #40]	@ 000ce044 ae6a
.org 0xce046
	bl 0x1cff0	@ 000ce046 4ef7d3ff
.org 0xce04a
	ldr r0, [r5, #84]	@ 000ce04a 686d
.org 0xce04c
	ldr r1, [r5, #92]	@ 000ce04c e96d
.org 0xce04e
	adds r0, r0, r1	@ 000ce04e 4018
.org 0xce050
	str r0, [r5, #84]	@ 000ce050 6865
.org 0xce052
	ldr r0, [r5, #100]	@ 000ce052 686e
.org 0xce054
	adds r1, r1, r0	@ 000ce054 0918
.org 0xce056
	str r1, [r5, #92]	@ 000ce056 e965
.org 0xce058
	ldr r0, [pc, #80]	@ 000ce058 1448
.org 0xce05a
	cmp r1, r0	@ 000ce05a 8142
.org 0xce05c
	ble.n 0xce0fa	@ 000ce05c 4ddd
.org 0xce05e
	str r0, [r5, #92]	@ 000ce05e e865
.org 0xce060
	ldrb r0, [r5, #18]	@ 000ce060 a87c
.org 0xce062
	cmp r0, #0	@ 000ce062 0028
.org 0xce064
	bne.n 0xce0f4	@ 000ce064 46d1
.org 0xce066
	ldrb r1, [r5, #19]	@ 000ce066 e97c
.org 0xce068
	cmp r1, #3	@ 000ce068 0329
.org 0xce06a
	bhi.n 0xce0ea	@ 000ce06a 3ed8
.org 0xce06c
	movs r0, #1	@ 000ce06c 0120
.org 0xce06e
	ands r0, r1	@ 000ce06e 0840
.org 0xce070
	cmp r0, #0	@ 000ce070 0028
.org 0xce072
	bne.n 0xce0b0	@ 000ce072 1dd1
.org 0xce074
	adds r4, r5, #0	@ 000ce074 2c1c
.org 0xce076
	adds r4, #84	@ 000ce076 5434
.org 0xce078
	adds r0, r6, #0	@ 000ce078 301c
.org 0xce07a
	adds r1, r4, #0	@ 000ce07a 211c
.org 0xce07c
	movs r2, #1	@ 000ce07c 0122
.org 0xce07e
	movs r3, #0	@ 000ce07e 0023
.org 0xce080
	bl 0xcdd9c	@ 000ce080 fff78cfe
.org 0xce084
	adds r0, r6, #0	@ 000ce084 301c
.org 0xce086
	adds r1, r4, #0	@ 000ce086 211c
.org 0xce088
	movs r2, #1	@ 000ce088 0122
.org 0xce08a
	movs r3, #1	@ 000ce08a 0123
.org 0xce08c
	bl 0xcdd9c	@ 000ce08c fff786fe
.org 0xce090
	adds r0, r6, #0	@ 000ce090 301c
.org 0xce092
	adds r1, r4, #0	@ 000ce092 211c
.org 0xce094
	movs r2, #1	@ 000ce094 0122
.org 0xce096
	movs r3, #2	@ 000ce096 0223
.org 0xce098
	bl 0xcdd9c	@ 000ce098 fff780fe
.org 0xce09c
	adds r0, r6, #0	@ 000ce09c 301c
.org 0xce09e
	adds r1, r4, #0	@ 000ce09e 211c
.org 0xce0a0
	movs r2, #1	@ 000ce0a0 0122
.org 0xce0a2
	movs r3, #3	@ 000ce0a2 0323
.org 0xce0a4
	bl 0xcdd9c	@ 000ce0a4 fff77afe
.org 0xce0a8
	b.n 0xce0e4	@ 000ce0a8 1ce0
.org 0xce0aa
	.byte 0x00	@ 000ce0aa data
.org 0xce0ab
	.byte 0x00	@ 000ce0ab data
.org 0xce0ac
	.byte 0x00,0xff,0xff,0xff	@ 000ce0ac data
.org 0xce0b0
	adds r4, r5, #0	@ 000ce0b0 2c1c
.org 0xce0b2
	adds r4, #84	@ 000ce0b2 5434
.org 0xce0b4
	adds r0, r6, #0	@ 000ce0b4 301c
.org 0xce0b6
	adds r1, r4, #0	@ 000ce0b6 211c
.org 0xce0b8
	movs r2, #1	@ 000ce0b8 0122
.org 0xce0ba
	movs r3, #4	@ 000ce0ba 0423
.org 0xce0bc
	bl 0xcdd9c	@ 000ce0bc fff76efe
.org 0xce0c0
	adds r0, r6, #0	@ 000ce0c0 301c
.org 0xce0c2
	adds r1, r4, #0	@ 000ce0c2 211c
.org 0xce0c4
	movs r2, #1	@ 000ce0c4 0122
.org 0xce0c6
	movs r3, #5	@ 000ce0c6 0523
.org 0xce0c8
	bl 0xcdd9c	@ 000ce0c8 fff768fe
.org 0xce0cc
	adds r0, r6, #0	@ 000ce0cc 301c
.org 0xce0ce
	adds r1, r4, #0	@ 000ce0ce 211c
.org 0xce0d0
	movs r2, #1	@ 000ce0d0 0122
.org 0xce0d2
	movs r3, #6	@ 000ce0d2 0623
.org 0xce0d4
	bl 0xcdd9c	@ 000ce0d4 fff762fe
.org 0xce0d8
	adds r0, r6, #0	@ 000ce0d8 301c
.org 0xce0da
	adds r1, r4, #0	@ 000ce0da 211c
.org 0xce0dc
	movs r2, #1	@ 000ce0dc 0122
.org 0xce0de
	movs r3, #7	@ 000ce0de 0723
.org 0xce0e0
	bl 0xcdd9c	@ 000ce0e0 fff75cfe
.org 0xce0e4
	ldr r0, [pc, #68]	@ 000ce0e4 1148
.org 0xce0e6
	bl 0x2b10	@ 000ce0e6 34f713fd
.org 0xce0ea
	ldrb r0, [r5, #19]	@ 000ce0ea e87c
.org 0xce0ec
	adds r0, #1	@ 000ce0ec 0130
.org 0xce0ee
	strb r0, [r5, #19]	@ 000ce0ee e874
.org 0xce0f0
	movs r0, #40	@ 000ce0f0 2820
.org 0xce0f2
	strb r0, [r5, #18]	@ 000ce0f2 a874
.org 0xce0f4
	ldrb r0, [r5, #18]	@ 000ce0f4 a87c
.org 0xce0f6
	subs r0, #1	@ 000ce0f6 0138
.org 0xce0f8
	strb r0, [r5, #18]	@ 000ce0f8 a874
.org 0xce0fa
	ldr r0, [pc, #52]	@ 000ce0fa 0d48
.org 0xce0fc
	adds r1, r5, #0	@ 000ce0fc 291c
.org 0xce0fe
	adds r1, #84	@ 000ce0fe 5431
.org 0xce100
	bl 0x1fb14	@ 000ce100 51f708fd
.org 0xce104
	movs r1, #192	@ 000ce104 c021
.org 0xce106
	lsls r1, r1, #6	@ 000ce106 8901
.org 0xce108
	cmp r0, r1	@ 000ce108 8842
.org 0xce10a
	bls.n 0xce124	@ 000ce10a 0bd9
.org 0xce10c
	ldr r1, [pc, #36]	@ 000ce10c 0949
.org 0xce10e
	ldrb r0, [r5, #9]	@ 000ce10e 687a
.org 0xce110
	lsls r0, r0, #2	@ 000ce110 8000
.org 0xce112
	adds r0, r0, r1	@ 000ce112 4018
.org 0xce114
	movs r1, #2	@ 000ce114 0221
.org 0xce116
	str r1, [r5, #12]	@ 000ce116 e960
.org 0xce118
	ldr r0, [r0, #0]	@ 000ce118 0068
.org 0xce11a
	ldr r0, [r0, #8]	@ 000ce11a 8068
.org 0xce11c
	str r0, [r5, #20]	@ 000ce11c 6861
.org 0xce11e
	adds r0, r5, #0	@ 000ce11e 281c
.org 0xce120
	bl 0xcde30	@ 000ce120 fff786fe
