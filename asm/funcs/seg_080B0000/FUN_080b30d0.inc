@ FUN_080b30d0  entry 0x080b30d0  size 142
.thumb
.org 0xb30d0
FUN_080b30d0:
	push {r4, r5, lr}	@ 000b30d0 30b5
.org 0xb30d2
	adds r5, r0, #0	@ 000b30d2 051c
.org 0xb30d4
	ldr r3, [r5, #44]	@ 000b30d4 eb6a
.org 0xb30d6
	cmp r3, #0	@ 000b30d6 002b
.org 0xb30d8
	beq.n 0xb3156	@ 000b30d8 3dd0
.org 0xb30da
	ldrb r0, [r3, #12]	@ 000b30da 187b
.org 0xb30dc
	cmp r0, #1	@ 000b30dc 0128
.org 0xb30de
	bhi.n 0xb3156	@ 000b30de 3ad8
.org 0xb30e0
	movs r4, #8	@ 000b30e0 0824
.org 0xb30e2
	ldrsb r4, [r3, r4]	@ 000b30e2 1c57
.org 0xb30e4
	cmp r4, #3	@ 000b30e4 032c
.org 0xb30e6
	bne.n 0xb311c	@ 000b30e6 19d1
.org 0xb30e8
	ldrb r1, [r3, #10]	@ 000b30e8 997a
.org 0xb30ea
	movs r0, #254	@ 000b30ea fe20
.org 0xb30ec
	ands r0, r1	@ 000b30ec 0840
.org 0xb30ee
	movs r2, #0	@ 000b30ee 0022
.org 0xb30f0
	movs r1, #253	@ 000b30f0 fd21
.org 0xb30f2
	ands r0, r1	@ 000b30f2 0840
.org 0xb30f4
	strb r0, [r3, #10]	@ 000b30f4 9872
.org 0xb30f6
	adds r0, r3, #0	@ 000b30f6 181c
.org 0xb30f8
	adds r0, #140	@ 000b30f8 8c30
.org 0xb30fa
	str r2, [r0, #0]	@ 000b30fa 0260
.org 0xb30fc
	adds r0, #4	@ 000b30fc 0430
.org 0xb30fe
	str r2, [r0, #0]	@ 000b30fe 0260
.org 0xb3100
	adds r0, #4	@ 000b3100 0430
.org 0xb3102
	strb r2, [r0, #0]	@ 000b3102 0270
.org 0xb3104
	ldrb r1, [r3, #10]	@ 000b3104 997a
.org 0xb3106
	movs r0, #251	@ 000b3106 fb20
.org 0xb3108
	ands r0, r1	@ 000b3108 0840
.org 0xb310a
	strb r0, [r3, #10]	@ 000b310a 9872
.org 0xb310c
	ldr r1, [pc, #8]	@ 000b310c 0249
.org 0xb310e
	ldrb r0, [r3, #9]	@ 000b310e 587a
.org 0xb3110
	lsls r0, r0, #2	@ 000b3110 8000
.org 0xb3112
	adds r0, r0, r1	@ 000b3112 4018
.org 0xb3114
	str r4, [r3, #12]	@ 000b3114 dc60
.org 0xb3116
	b.n 0xb3150	@ 000b3116 1be0
.org 0xb3118
	.byte 0x40,0xdb,0x85,0x08	@ 000b3118 data
.org 0xb311c
	cmp r4, #6	@ 000b311c 062c
.org 0xb311e
	bne.n 0xb3156	@ 000b311e 1ad1
.org 0xb3120
	ldrb r1, [r3, #10]	@ 000b3120 997a
.org 0xb3122
	movs r0, #254	@ 000b3122 fe20
.org 0xb3124
	ands r0, r1	@ 000b3124 0840
.org 0xb3126
	movs r2, #0	@ 000b3126 0022
.org 0xb3128
	movs r1, #253	@ 000b3128 fd21
.org 0xb312a
	ands r0, r1	@ 000b312a 0840
.org 0xb312c
	strb r0, [r3, #10]	@ 000b312c 9872
.org 0xb312e
	adds r0, r3, #0	@ 000b312e 181c
.org 0xb3130
	adds r0, #140	@ 000b3130 8c30
.org 0xb3132
	str r2, [r0, #0]	@ 000b3132 0260
.org 0xb3134
	adds r0, #4	@ 000b3134 0430
.org 0xb3136
	str r2, [r0, #0]	@ 000b3136 0260
.org 0xb3138
	adds r0, #4	@ 000b3138 0430
.org 0xb313a
	strb r2, [r0, #0]	@ 000b313a 0270
.org 0xb313c
	ldrb r1, [r3, #10]	@ 000b313c 997a
.org 0xb313e
	movs r0, #251	@ 000b313e fb20
.org 0xb3140
	ands r0, r1	@ 000b3140 0840
.org 0xb3142
	strb r0, [r3, #10]	@ 000b3142 9872
.org 0xb3144
	ldr r1, [pc, #28]	@ 000b3144 0749
.org 0xb3146
	ldrb r0, [r3, #9]	@ 000b3146 587a
.org 0xb3148
	lsls r0, r0, #2	@ 000b3148 8000
.org 0xb314a
	adds r0, r0, r1	@ 000b314a 4018
.org 0xb314c
	movs r1, #3	@ 000b314c 0321
.org 0xb314e
	str r1, [r3, #12]	@ 000b314e d960
.org 0xb3150
	ldr r0, [r0, #0]	@ 000b3150 0068
.org 0xb3152
	ldr r0, [r0, #12]	@ 000b3152 c068
.org 0xb3154
	str r0, [r3, #20]	@ 000b3154 5861
.org 0xb3156
	adds r0, r5, #0	@ 000b3156 281c
.org 0xb3158
	bl 0x7f8ec	@ 000b3158 ccf7c8fb
.org 0xb315c
	pop {r4, r5}	@ 000b315c 30bc
