@ FUN_08103148  entry 0x08103148  size 132
.thumb
.org 0x103148
FUN_08103148:
	push {r4, r5, lr}	@ 00103148 30b5
.org 0x10314a
	adds r4, r0, #0	@ 0010314a 041c
.org 0x10314c
	bl 0x1cc9c	@ 0010314c 19f7a6fd
.org 0x103150
	ldrb r1, [r4, #10]	@ 00103150 a17a
.org 0x103152
	movs r0, #1	@ 00103152 0120
.org 0x103154
	orrs r0, r1	@ 00103154 0843
.org 0x103156
	movs r1, #2	@ 00103156 0221
.org 0x103158
	orrs r0, r1	@ 00103158 0843
.org 0x10315a
	movs r2, #0	@ 0010315a 0022
.org 0x10315c
	movs r1, #239	@ 0010315c ef21
.org 0x10315e
	ands r0, r1	@ 0010315e 0840
.org 0x103160
	strb r0, [r4, #10]	@ 00103160 a072
.org 0x103162
	movs r3, #1	@ 00103162 0123
.org 0x103164
	adds r0, r4, #0	@ 00103164 201c
.org 0x103166
	adds r0, #76	@ 00103166 4c30
.org 0x103168
	strb r2, [r0, #0]	@ 00103168 0270
.org 0x10316a
	adds r2, r4, #0	@ 0010316a 221c
.org 0x10316c
	adds r2, #74	@ 0010316c 4a32
.org 0x10316e
	ldrb r1, [r2, #0]	@ 0010316e 1178
.org 0x103170
	movs r0, #17	@ 00103170 1120
.org 0x103172
	negs r0, r0	@ 00103172 4042
.org 0x103174
	ands r0, r1	@ 00103174 0840
.org 0x103176
	strb r0, [r2, #0]	@ 00103176 1070
.org 0x103178
	ldr r1, [pc, #64]	@ 00103178 1049
.org 0x10317a
	ldrb r0, [r4, #9]	@ 0010317a 607a
.org 0x10317c
	lsls r0, r0, #2	@ 0010317c 8000
.org 0x10317e
	adds r0, r0, r1	@ 0010317e 4018
.org 0x103180
	str r3, [r4, #12]	@ 00103180 e360
.org 0x103182
	ldr r0, [r0, #0]	@ 00103182 0068
.org 0x103184
	ldr r0, [r0, #4]	@ 00103184 4068
.org 0x103186
	str r0, [r4, #20]	@ 00103186 6061
.org 0x103188
	ldrb r1, [r4, #11]	@ 00103188 e17a
.org 0x10318a
	movs r0, #8	@ 0010318a 0820
.org 0x10318c
	orrs r0, r1	@ 0010318c 0843
.org 0x10318e
	strb r0, [r4, #11]	@ 0010318e e072
.org 0x103190
	ldr r0, [pc, #44]	@ 00103190 0b48
.org 0x103192
	str r0, [r4, #48]	@ 00103192 2063
.org 0x103194
	movs r5, #0	@ 00103194 0025
.org 0x103196
	strh r3, [r4, #38]	@ 00103196 e384
.org 0x103198
	strb r5, [r4, #18]	@ 00103198 a574
.org 0x10319a
	strb r5, [r4, #19]	@ 0010319a e574
.org 0x10319c
	ldr r0, [pc, #36]	@ 0010319c 0948
.org 0x10319e
	ldr r1, [pc, #40]	@ 0010319e 0a49
.org 0x1031a0
	adds r0, r0, r1	@ 001031a0 4018
.org 0x1031a2
	ldrb r0, [r0, #0]	@ 001031a2 0078
.org 0x1031a4
	adds r2, #107	@ 001031a4 6b32
.org 0x1031a6
	strb r0, [r2, #0]	@ 001031a6 1070
.org 0x1031a8
	ldrb r1, [r4, #17]	@ 001031a8 617c
.org 0x1031aa
	adds r0, r4, #0	@ 001031aa 201c
.org 0x1031ac
	adds r0, #180	@ 001031ac b430
.org 0x1031ae
	strb r1, [r0, #0]	@ 001031ae 0170
.org 0x1031b0
	ldrb r0, [r2, #0]	@ 001031b0 1078
.org 0x1031b2
	cmp r0, #0	@ 001031b2 0028
.org 0x1031b4
	bne.n 0x1031cc	@ 001031b4 0ad1
.org 0x1031b6
	strb r5, [r4, #14]	@ 001031b6 a573
.org 0x1031b8
	b.n 0x1031d2	@ 001031b8 0be0
.org 0x1031ba
	.byte 0x00	@ 001031ba data
.org 0x1031bb
	.byte 0x00	@ 001031bb data
.org 0x1031bc
	.byte 0xfc,0x92,0x86,0x08	@ 001031bc data
.org 0x1031c0
	.byte 0x68,0xbd,0x86,0x08	@ 001031c0 data
.org 0x1031c4
	.byte 0xb0,0x0a,0x00,0x02	@ 001031c4 data
.org 0x1031c8
	.byte 0x30,0xd0,0x02,0x00	@ 001031c8 data
