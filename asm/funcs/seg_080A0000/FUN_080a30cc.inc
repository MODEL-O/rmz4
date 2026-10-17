@ FUN_080a30cc  entry 0x080a30cc  size 112
.thumb
.org 0xa30cc
FUN_080a30cc:
	push {r4, r5, r6, lr}	@ 000a30cc 70b5
.org 0xa30ce
	adds r4, r0, #0	@ 000a30ce 041c
.org 0xa30d0
	ldrb r6, [r4, #16]	@ 000a30d0 267c
.org 0xa30d2
	ldrb r5, [r4, #15]	@ 000a30d2 e57b
.org 0xa30d4
	cmp r5, #0	@ 000a30d4 002d
.org 0xa30d6
	bne.n 0xa3108	@ 000a30d6 17d1
.org 0xa30d8
	bl 0xa318c	@ 000a30d8 00f058f8
.org 0xa30dc
	ldrb r1, [r4, #10]	@ 000a30dc a17a
.org 0xa30de
	movs r0, #254	@ 000a30de fe20
.org 0xa30e0
	ands r0, r1	@ 000a30e0 0840
.org 0xa30e2
	strb r0, [r4, #10]	@ 000a30e2 a072
.org 0xa30e4
	adds r0, r4, #0	@ 000a30e4 201c
.org 0xa30e6
	adds r0, #140	@ 000a30e6 8c30
.org 0xa30e8
	str r5, [r0, #0]	@ 000a30e8 0560
.org 0xa30ea
	adds r0, #4	@ 000a30ea 0430
.org 0xa30ec
	str r5, [r0, #0]	@ 000a30ec 0560
.org 0xa30ee
	adds r0, #4	@ 000a30ee 0430
.org 0xa30f0
	strb r5, [r0, #0]	@ 000a30f0 0570
.org 0xa30f2
	ldrb r1, [r4, #10]	@ 000a30f2 a17a
.org 0xa30f4
	movs r0, #251	@ 000a30f4 fb20
.org 0xa30f6
	ands r0, r1	@ 000a30f6 0840
.org 0xa30f8
	strb r0, [r4, #10]	@ 000a30f8 a072
.org 0xa30fa
	cmp r6, #0	@ 000a30fa 002e
.org 0xa30fc
	beq.n 0xa3124	@ 000a30fc 12d0
.org 0xa30fe
	movs r0, #48	@ 000a30fe 3020
.org 0xa3100
	strb r0, [r4, #18]	@ 000a3100 a074
.org 0xa3102
	ldrb r0, [r4, #15]	@ 000a3102 e07b
.org 0xa3104
	adds r0, #1	@ 000a3104 0130
.org 0xa3106
	strb r0, [r4, #15]	@ 000a3106 e073
.org 0xa3108
	ldrb r0, [r4, #18]	@ 000a3108 a07c
.org 0xa310a
	subs r0, #1	@ 000a310a 0138
.org 0xa310c
	strb r0, [r4, #18]	@ 000a310c a074
.org 0xa310e
	lsls r0, r0, #24	@ 000a310e 0006
.org 0xa3110
	cmp r0, #0	@ 000a3110 0028
.org 0xa3112
	bne.n 0xa3136	@ 000a3112 10d1
.org 0xa3114
	ldr r0, [pc, #36]	@ 000a3114 0948
.org 0xa3116
	adds r1, r0, #0	@ 000a3116 011c
.org 0xa3118
	adds r1, #38	@ 000a3118 2631
.org 0xa311a
	ldrb r0, [r1, #0]	@ 000a311a 0878
.org 0xa311c
	cmp r0, #0	@ 000a311c 0028
.org 0xa311e
	beq.n 0xa3124	@ 000a311e 01d0
.org 0xa3120
	adds r0, #255	@ 000a3120 ff30
.org 0xa3122
	strb r0, [r1, #0]	@ 000a3122 0870
.org 0xa3124
	ldr r1, [pc, #24]	@ 000a3124 0649
.org 0xa3126
	ldrb r0, [r4, #9]	@ 000a3126 607a
.org 0xa3128
	lsls r0, r0, #2	@ 000a3128 8000
.org 0xa312a
	adds r0, r0, r1	@ 000a312a 4018
.org 0xa312c
	movs r1, #4	@ 000a312c 0421
.org 0xa312e
	str r1, [r4, #12]	@ 000a312e e160
.org 0xa3130
	ldr r0, [r0, #0]	@ 000a3130 0068
.org 0xa3132
	ldr r0, [r0, #16]	@ 000a3132 0069
.org 0xa3134
	str r0, [r4, #20]	@ 000a3134 6061
.org 0xa3136
	pop {r4, r5, r6}	@ 000a3136 70bc
.org 0xa3138
	pop {r0}	@ 000a3138 01bc
.org 0xa313a
	bx r0	@ 000a313a 0047
