@ FUN_0808f0f0  entry 0x0808f0f0  size 110
.thumb
.org 0x8f0f0
FUN_0808f0f0:
	push {r4, lr}	@ 0008f0f0 10b5
.org 0x8f0f2
	adds r4, r0, #0	@ 0008f0f2 041c
.org 0x8f0f4
	ldrb r1, [r4, #15]	@ 0008f0f4 e17b
.org 0x8f0f6
	cmp r1, #0	@ 0008f0f6 0029
.org 0x8f0f8
	bne.n 0x8f102	@ 0008f0f8 03d1
.org 0x8f0fa
	movs r0, #8	@ 0008f0fa 0820
.org 0x8f0fc
	strb r0, [r4, #18]	@ 0008f0fc a074
.org 0x8f0fe
	adds r0, r1, #1	@ 0008f0fe 481c
.org 0x8f100
	strb r0, [r4, #15]	@ 0008f100 e073
.org 0x8f102
	adds r0, r4, #0	@ 0008f102 201c
.org 0x8f104
	bl 0x1cff0	@ 0008f104 8df774ff
.org 0x8f108
	adds r0, r4, #0	@ 0008f108 201c
.org 0x8f10a
	adds r0, #116	@ 0008f10a 7430
.org 0x8f10c
	ldr r3, [pc, #80]	@ 0008f10c 144b
.org 0x8f10e
	ldrb r1, [r4, #30]	@ 0008f10e a17f
.org 0x8f110
	lsls r1, r1, #8	@ 0008f110 0902
.org 0x8f112
	adds r2, r4, #0	@ 0008f112 221c
.org 0x8f114
	adds r2, #112	@ 0008f114 7032
.org 0x8f116
	ldrb r2, [r2, #0]	@ 0008f116 1278
.org 0x8f118
	orrs r1, r2	@ 0008f118 1143
.org 0x8f11a
	ldr r2, [pc, #72]	@ 0008f11a 124a
.org 0x8f11c
	adds r1, r1, r2	@ 0008f11c 8918
.org 0x8f11e
	lsls r1, r1, #2	@ 0008f11e 8900
.org 0x8f120
	adds r1, r1, r3	@ 0008f120 c918
.org 0x8f122
	adds r2, r4, #0	@ 0008f122 221c
.org 0x8f124
	adds r2, #113	@ 0008f124 7132
.org 0x8f126
	ldrb r2, [r2, #0]	@ 0008f126 1278
.org 0x8f128
	lsls r2, r2, #24	@ 0008f128 1206
.org 0x8f12a
	asrs r2, r2, #24	@ 0008f12a 1216
.org 0x8f12c
	ldr r1, [r1, #0]	@ 0008f12c 0968
.org 0x8f12e
	lsls r2, r2, #2	@ 0008f12e 9200
.org 0x8f130
	adds r2, r2, r1	@ 0008f130 5218
.org 0x8f132
	ldr r1, [r2, #0]	@ 0008f132 1168
.org 0x8f134
	ldrb r2, [r1, #0]	@ 0008f134 0a78
.org 0x8f136
	lsls r1, r2, #1	@ 0008f136 5100
.org 0x8f138
	adds r1, r1, r2	@ 0008f138 8918
.org 0x8f13a
	lsls r1, r1, #3	@ 0008f13a c900
.org 0x8f13c
	ldr r2, [pc, #40]	@ 0008f13c 0a4a
.org 0x8f13e
	adds r1, r1, r2	@ 0008f13e 8918
.org 0x8f140
	bl 0x5784	@ 0008f140 76f720fb
.org 0x8f144
	ldrb r0, [r4, #18]	@ 0008f144 a07c
.org 0x8f146
	subs r0, #1	@ 0008f146 0138
.org 0x8f148
	strb r0, [r4, #18]	@ 0008f148 a074
.org 0x8f14a
	lsls r0, r0, #24	@ 0008f14a 0006
.org 0x8f14c
	lsrs r1, r0, #24	@ 0008f14c 010e
.org 0x8f14e
	cmp r1, #0	@ 0008f14e 0029
.org 0x8f150
	bne.n 0x8f158	@ 0008f150 02d1
.org 0x8f152
	movs r0, #1	@ 0008f152 0120
.org 0x8f154
	strb r0, [r4, #14]	@ 0008f154 a073
.org 0x8f156
	strb r1, [r4, #15]	@ 0008f156 e173
.org 0x8f158
	pop {r4}	@ 0008f158 10bc
.org 0x8f15a
	pop {r0}	@ 0008f15a 01bc
.org 0x8f15c
	bx r0	@ 0008f15c 0047
