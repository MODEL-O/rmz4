@ FUN_0809c12c  entry 0x0809c12c  size 84
.thumb
.org 0x9c12c
FUN_0809c12c:
	push {r4, r5, lr}	@ 0009c12c 30b5
.org 0x9c12e
	adds r4, r0, #0	@ 0009c12e 041c
.org 0x9c130
	ldr r5, [r4, #40]	@ 0009c130 a56a
.org 0x9c132
	ldrb r0, [r5, #12]	@ 0009c132 287b
.org 0x9c134
	cmp r0, #1	@ 0009c134 0128
.org 0x9c136
	bls.n 0x9c158	@ 0009c136 0fd9
.org 0x9c138
	ldr r1, [pc, #24]	@ 0009c138 0649
.org 0x9c13a
	ldrb r0, [r4, #9]	@ 0009c13a 607a
.org 0x9c13c
	lsls r0, r0, #2	@ 0009c13c 8000
.org 0x9c13e
	adds r0, r0, r1	@ 0009c13e 4018
.org 0x9c140
	movs r1, #2	@ 0009c140 0221
.org 0x9c142
	str r1, [r4, #12]	@ 0009c142 e160
.org 0x9c144
	ldr r0, [r0, #0]	@ 0009c144 0068
.org 0x9c146
	ldr r0, [r0, #8]	@ 0009c146 8068
.org 0x9c148
	str r0, [r4, #20]	@ 0009c148 6061
.org 0x9c14a
	adds r0, r4, #0	@ 0009c14a 201c
.org 0x9c14c
	bl 0x9c34c	@ 0009c14c 00f0fef8
.org 0x9c150
	b.n 0x9c180	@ 0009c150 16e0
.org 0x9c152
	.byte 0x00	@ 0009c152 data
.org 0x9c153
	.byte 0x00	@ 0009c153 data
.org 0x9c154
	.byte 0x40,0xdb,0x85,0x08	@ 0009c154 data
.org 0x9c158
	ldr r0, [pc, #44]	@ 0009c158 0b48
.org 0x9c15a
	ldrb r1, [r4, #13]	@ 0009c15a 617b
.org 0x9c15c
	lsls r1, r1, #2	@ 0009c15c 8900
.org 0x9c15e
	adds r1, r1, r0	@ 0009c15e 0918
.org 0x9c160
	ldr r1, [r1, #0]	@ 0009c160 0968
.org 0x9c162
	adds r0, r4, #0	@ 0009c162 201c
.org 0x9c164
	bl 0x128f80	@ 0009c164 8cf00cff
.org 0x9c168
	adds r2, r4, #0	@ 0009c168 221c
.org 0x9c16a
	adds r2, #182	@ 0009c16a b632
.org 0x9c16c
	ldrb r1, [r5, #13]	@ 0009c16c 697b
.org 0x9c16e
	ldrb r0, [r2, #0]	@ 0009c16e 1078
.org 0x9c170
	cmp r1, r0	@ 0009c170 8142
.org 0x9c172
	beq.n 0x9c180	@ 0009c172 05d0
.org 0x9c174
	movs r0, #0	@ 0009c174 0020
.org 0x9c176
	strb r1, [r4, #13]	@ 0009c176 6173
.org 0x9c178
	strb r0, [r4, #14]	@ 0009c178 a073
.org 0x9c17a
	strb r0, [r4, #15]	@ 0009c17a e073
.org 0x9c17c
	ldrb r0, [r5, #13]	@ 0009c17c 687b
.org 0x9c17e
	strb r0, [r2, #0]	@ 0009c17e 1070
