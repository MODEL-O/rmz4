@ FUN_080eb158  entry 0x080eb158  size 62
.thumb
.org 0xeb158
FUN_080eb158:
	push {r4, lr}	@ 000eb158 10b5
.org 0xeb15a
	adds r4, r0, #0	@ 000eb15a 041c
.org 0xeb15c
	ldrb r0, [r4, #9]	@ 000eb15c 607a
.org 0xeb15e
	cmp r0, #3	@ 000eb15e 0328
.org 0xeb160
	bne.n 0xeb190	@ 000eb160 16d1
.org 0xeb162
	adds r1, r4, #0	@ 000eb162 211c
.org 0xeb164
	adds r1, #184	@ 000eb164 b831
.org 0xeb166
	ldrb r0, [r1, #0]	@ 000eb166 0878
.org 0xeb168
	cmp r0, #195	@ 000eb168 c328
.org 0xeb16a
	beq.n 0xeb188	@ 000eb16a 0dd0
.org 0xeb16c
	movs r0, #195	@ 000eb16c c320
.org 0xeb16e
	strb r0, [r1, #0]	@ 000eb16e 0870
.org 0xeb170
	movs r2, #195	@ 000eb170 c322
.org 0xeb172
	lsls r2, r2, #8	@ 000eb172 1202
.org 0xeb174
	adds r0, r4, #0	@ 000eb174 201c
.org 0xeb176
	adds r0, #112	@ 000eb176 7030
.org 0xeb178
	ldrb r1, [r0, #0]	@ 000eb178 0178
.org 0xeb17a
	orrs r1, r2	@ 000eb17a 1143
.org 0xeb17c
	adds r0, r4, #0	@ 000eb17c 201c
.org 0xeb17e
	bl 0x1cf00	@ 000eb17e 31f7bffe
.org 0xeb182
	adds r0, r4, #0	@ 000eb182 201c
.org 0xeb184
	bl 0x1cff0	@ 000eb184 31f734ff
.org 0xeb188
	adds r1, r4, #0	@ 000eb188 211c
.org 0xeb18a
	adds r1, #186	@ 000eb18a ba31
.org 0xeb18c
	movs r0, #1	@ 000eb18c 0120
.org 0xeb18e
	strh r0, [r1, #0]	@ 000eb18e 0880
.org 0xeb190
	pop {r4}	@ 000eb190 10bc
.org 0xeb192
	pop {r0}	@ 000eb192 01bc
.org 0xeb194
	bx r0	@ 000eb194 0047
