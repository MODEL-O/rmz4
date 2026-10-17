@ FUN_080a50cc  entry 0x080a50cc  size 166
.thumb
.org 0xa50cc
FUN_080a50cc:
	push {r4, r5, lr}	@ 000a50cc 30b5
.org 0xa50ce
	sub sp, #4	@ 000a50ce 81b0
.org 0xa50d0
	adds r4, r0, #0	@ 000a50d0 041c
.org 0xa50d2
	ldrb r5, [r4, #17]	@ 000a50d2 657c
.org 0xa50d4
	ldrb r0, [r4, #15]	@ 000a50d4 e07b
.org 0xa50d6
	cmp r0, #0	@ 000a50d6 0028
.org 0xa50d8
	bne.n 0xa5132	@ 000a50d8 2bd1
.org 0xa50da
	ldr r1, [pc, #56]	@ 000a50da 0e49
.org 0xa50dc
	mov r0, sp	@ 000a50dc 6846
.org 0xa50de
	movs r2, #4	@ 000a50de 0422
.org 0xa50e0
	bl 0x129258	@ 000a50e0 84f0baf8
.org 0xa50e4
	adds r0, r4, #0	@ 000a50e4 201c
.org 0xa50e6
	adds r0, #116	@ 000a50e6 7430
.org 0xa50e8
	mov r2, sp	@ 000a50e8 6a46
.org 0xa50ea
	adds r1, r2, r5	@ 000a50ea 5119
.org 0xa50ec
	ldrb r2, [r1, #0]	@ 000a50ec 0a78
.org 0xa50ee
	lsls r1, r2, #1	@ 000a50ee 5100
.org 0xa50f0
	adds r1, r1, r2	@ 000a50f0 8918
.org 0xa50f2
	lsls r1, r1, #3	@ 000a50f2 c900
.org 0xa50f4
	ldr r2, [pc, #32]	@ 000a50f4 084a
.org 0xa50f6
	adds r1, r1, r2	@ 000a50f6 8918
.org 0xa50f8
	bl 0x5784	@ 000a50f8 60f744fb
.org 0xa50fc
	ldr r0, [pc, #28]	@ 000a50fc 0748
.org 0xa50fe
	ldr r1, [pc, #32]	@ 000a50fe 0849
.org 0xa5100
	adds r0, r0, r1	@ 000a5100 4018
.org 0xa5102
	ldrb r1, [r0, #0]	@ 000a5102 0178
.org 0xa5104
	movs r0, #15	@ 000a5104 0f20
.org 0xa5106
	ands r0, r1	@ 000a5106 0840
.org 0xa5108
	cmp r0, #2	@ 000a5108 0228
.org 0xa510a
	bne.n 0xa5124	@ 000a510a 0bd1
.org 0xa510c
	adds r1, r4, #0	@ 000a510c 211c
.org 0xa510e
	adds r1, #184	@ 000a510e b831
.org 0xa5110
	movs r0, #180	@ 000a5110 b420
.org 0xa5112
	b.n 0xa512a	@ 000a5112 0ae0
.org 0xa5114
	.byte 0x54,0x9d,0x12,0x08	@ 000a5114 data
.org 0xa5118
	.byte 0x50,0x20,0x86,0x08	@ 000a5118 data
.org 0xa511c
	.byte 0xb0,0x0a,0x00,0x02	@ 000a511c data
.org 0xa5120
	.byte 0x10,0xc0,0x02,0x00	@ 000a5120 data
.org 0xa5124
	adds r1, r4, #0	@ 000a5124 211c
.org 0xa5126
	adds r1, #184	@ 000a5126 b831
.org 0xa5128
	movs r0, #120	@ 000a5128 7820
.org 0xa512a
	str r0, [r1, #0]	@ 000a512a 0860
.org 0xa512c
	ldrb r0, [r4, #15]	@ 000a512c e07b
.org 0xa512e
	adds r0, #1	@ 000a512e 0130
.org 0xa5130
	strb r0, [r4, #15]	@ 000a5130 e073
.org 0xa5132
	adds r1, r4, #0	@ 000a5132 211c
.org 0xa5134
	adds r1, #184	@ 000a5134 b831
.org 0xa5136
	ldr r0, [r1, #0]	@ 000a5136 0868
.org 0xa5138
	subs r2, r0, #1	@ 000a5138 421e
.org 0xa513a
	str r2, [r1, #0]	@ 000a513a 0a60
.org 0xa513c
	cmp r2, #0	@ 000a513c 002a
.org 0xa513e
	bne.n 0xa5160	@ 000a513e 0fd1
.org 0xa5140
	ldr r1, [pc, #24]	@ 000a5140 0649
.org 0xa5142
	ldrb r0, [r4, #9]	@ 000a5142 607a
.org 0xa5144
	lsls r0, r0, #2	@ 000a5144 8000
.org 0xa5146
	adds r0, r0, r1	@ 000a5146 4018
.org 0xa5148
	movs r1, #2	@ 000a5148 0221
.org 0xa514a
	str r1, [r4, #12]	@ 000a514a e160
.org 0xa514c
	ldr r0, [r0, #0]	@ 000a514c 0068
.org 0xa514e
	ldr r0, [r0, #8]	@ 000a514e 8068
.org 0xa5150
	str r0, [r4, #20]	@ 000a5150 6061
.org 0xa5152
	adds r0, r4, #0	@ 000a5152 201c
.org 0xa5154
	bl 0xa5188	@ 000a5154 00f018f8
.org 0xa5158
	b.n 0xa5180	@ 000a5158 12e0
.org 0xa515a
	.byte 0x00	@ 000a515a data
.org 0xa515b
	.byte 0x00	@ 000a515b data
.org 0xa515c
	.byte 0x40,0xdb,0x85,0x08	@ 000a515c data
.org 0xa5160
	cmp r2, #29	@ 000a5160 1d2a
.org 0xa5162
	bgt.n 0xa517a	@ 000a5162 0adc
.org 0xa5164
	movs r0, #1	@ 000a5164 0120
.org 0xa5166
	ands r2, r0	@ 000a5166 0240
.org 0xa5168
	cmp r2, #0	@ 000a5168 002a
.org 0xa516a
	beq.n 0xa5172	@ 000a516a 02d0
.org 0xa516c
	ldrb r1, [r4, #10]	@ 000a516c a17a
.org 0xa516e
	orrs r0, r1	@ 000a516e 0843
.org 0xa5170
	b.n 0xa5178	@ 000a5170 02e0
