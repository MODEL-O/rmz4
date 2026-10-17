@ FUN_080b7158  entry 0x080b7158  size 106
.thumb
.org 0xb7158
FUN_080b7158:
	push {r4, r5, r6, lr}	@ 000b7158 70b5
.org 0xb715a
	adds r4, r0, #0	@ 000b715a 041c
.org 0xb715c
	ldr r6, [r4, #40]	@ 000b715c a66a
.org 0xb715e
	ldrb r5, [r4, #15]	@ 000b715e e57b
.org 0xb7160
	cmp r5, #0	@ 000b7160 002d
.org 0xb7162
	bne.n 0xb718c	@ 000b7162 13d1
.org 0xb7164
	bl 0xb7360	@ 000b7164 00f0fcf8
.org 0xb7168
	adds r0, r4, #0	@ 000b7168 201c
.org 0xb716a
	adds r0, #140	@ 000b716a 8c30
.org 0xb716c
	str r5, [r0, #0]	@ 000b716c 0560
.org 0xb716e
	adds r0, #4	@ 000b716e 0430
.org 0xb7170
	str r5, [r0, #0]	@ 000b7170 0560
.org 0xb7172
	adds r0, #4	@ 000b7172 0430
.org 0xb7174
	strb r5, [r0, #0]	@ 000b7174 0570
.org 0xb7176
	ldrb r1, [r4, #10]	@ 000b7176 a17a
.org 0xb7178
	movs r0, #251	@ 000b7178 fb20
.org 0xb717a
	ands r0, r1	@ 000b717a 0840
.org 0xb717c
	movs r1, #254	@ 000b717c fe21
.org 0xb717e
	ands r0, r1	@ 000b717e 0840
.org 0xb7180
	strb r0, [r4, #10]	@ 000b7180 a072
.org 0xb7182
	movs r0, #64	@ 000b7182 4020
.org 0xb7184
	strb r0, [r4, #18]	@ 000b7184 a074
.org 0xb7186
	ldrb r0, [r4, #15]	@ 000b7186 e07b
.org 0xb7188
	adds r0, #1	@ 000b7188 0130
.org 0xb718a
	strb r0, [r4, #15]	@ 000b718a e073
.org 0xb718c
	ldrb r0, [r4, #18]	@ 000b718c a07c
.org 0xb718e
	subs r0, #1	@ 000b718e 0138
.org 0xb7190
	strb r0, [r4, #18]	@ 000b7190 a074
.org 0xb7192
	lsls r0, r0, #24	@ 000b7192 0006
.org 0xb7194
	cmp r0, #0	@ 000b7194 0028
.org 0xb7196
	bne.n 0xb71bc	@ 000b7196 11d1
.org 0xb7198
	adds r1, r6, #0	@ 000b7198 311c
.org 0xb719a
	adds r1, #204	@ 000b719a cc31
.org 0xb719c
	ldrh r2, [r1, #0]	@ 000b719c 0a88
.org 0xb719e
	movs r3, #0	@ 000b719e 0023
.org 0xb71a0
	ldrsh r0, [r1, r3]	@ 000b71a0 c85e
.org 0xb71a2
	cmp r0, #0	@ 000b71a2 0028
.org 0xb71a4
	beq.n 0xb71aa	@ 000b71a4 01d0
.org 0xb71a6
	subs r0, r2, #1	@ 000b71a6 501e
.org 0xb71a8
	strh r0, [r1, #0]	@ 000b71a8 0880
.org 0xb71aa
	ldr r1, [pc, #24]	@ 000b71aa 0649
.org 0xb71ac
	ldrb r0, [r4, #9]	@ 000b71ac 607a
.org 0xb71ae
	lsls r0, r0, #2	@ 000b71ae 8000
.org 0xb71b0
	adds r0, r0, r1	@ 000b71b0 4018
.org 0xb71b2
	movs r1, #4	@ 000b71b2 0421
.org 0xb71b4
	str r1, [r4, #12]	@ 000b71b4 e160
.org 0xb71b6
	ldr r0, [r0, #0]	@ 000b71b6 0068
.org 0xb71b8
	ldr r0, [r0, #16]	@ 000b71b8 0069
.org 0xb71ba
	str r0, [r4, #20]	@ 000b71ba 6061
.org 0xb71bc
	pop {r4, r5, r6}	@ 000b71bc 70bc
.org 0xb71be
	pop {r0}	@ 000b71be 01bc
.org 0xb71c0
	bx r0	@ 000b71c0 0047
