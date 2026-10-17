@ FUN_08008080  entry 0x08008080  size 212
.thumb
.org 0x8080
FUN_08008080:
	push {r4, r5, r6, r7, lr}	@ 00008080 f0b5
.org 0x8082
	mov r7, sl	@ 00008082 5746
.org 0x8084
	mov r6, r9	@ 00008084 4e46
.org 0x8086
	mov r5, r8	@ 00008086 4546
.org 0x8088
	push {r5, r6, r7}	@ 00008088 e0b4
.org 0x808a
	adds r7, r0, #0	@ 0000808a 071c
.org 0x808c
	adds r4, r1, #0	@ 0000808c 0c1c
.org 0x808e
	adds r5, r4, #0	@ 0000808e 251c
.org 0x8090
	ldr r6, [pc, #120]	@ 00008090 1e4e
.org 0x8092
	movs r1, #232	@ 00008092 e821
.org 0x8094
	lsls r1, r1, #1	@ 00008094 4900
.org 0x8096
	adds r0, r6, r1	@ 00008096 7018
.org 0x8098
	ldrh r0, [r0, #0]	@ 00008098 0088
.org 0x809a
	cmp r0, #4	@ 0000809a 0428
.org 0x809c
	bne.n 0x80b0	@ 0000809c 08d1
.org 0x809e
	ldr r2, [pc, #112]	@ 0000809e 1c4a
.org 0x80a0
	adds r0, r7, r2	@ 000080a0 b818
.org 0x80a2
	movs r1, #240	@ 000080a2 f021
.org 0x80a4
	lsls r1, r1, #10	@ 000080a4 8902
.org 0x80a6
	bl 0x129050	@ 000080a6 20f1d3ff
.org 0x80aa
	movs r3, #240	@ 000080aa f023
.org 0x80ac
	lsls r3, r3, #8	@ 000080ac 1b02
.org 0x80ae
	adds r7, r0, r3	@ 000080ae c718
.org 0x80b0
	movs r0, #0	@ 000080b0 0020
.org 0x80b2
	mov r8, r0	@ 000080b2 8046
.org 0x80b4
	asrs r1, r7, #12	@ 000080b4 3913
.org 0x80b6
	mov r9, r1	@ 000080b6 8946
.org 0x80b8
	movs r2, #220	@ 000080b8 dc22
.org 0x80ba
	lsls r2, r2, #1	@ 000080ba 5200
.org 0x80bc
	adds r2, r2, r6	@ 000080bc 9219
.org 0x80be
	mov sl, r2	@ 000080be 9246
.org 0x80c0
	movs r3, #252	@ 000080c0 fc23
.org 0x80c2
	lsls r3, r3, #3	@ 000080c2 db00
.org 0x80c4
	adds r6, r6, r3	@ 000080c4 f618
.org 0x80c6
	ldrh r1, [r6, #0]	@ 000080c6 3188
.org 0x80c8
	asrs r0, r4, #12	@ 000080c8 2013
.org 0x80ca
	muls r0, r1	@ 000080ca 4843
.org 0x80cc
	add r0, r9	@ 000080cc 4844
.org 0x80ce
	adds r0, #2	@ 000080ce 0230
.org 0x80d0
	lsls r0, r0, #1	@ 000080d0 4000
.org 0x80d2
	adds r0, r0, r6	@ 000080d2 8019
.org 0x80d4
	ldrh r0, [r0, #0]	@ 000080d4 0088
.org 0x80d6
	mov r2, sl	@ 000080d6 5246
.org 0x80d8
	ldr r1, [r2, #0]	@ 000080d8 1168
.org 0x80da
	lsls r0, r0, #1	@ 000080da 4000
.org 0x80dc
	adds r0, r0, r1	@ 000080dc 4018
.org 0x80de
	ldrh r0, [r0, #0]	@ 000080de 0088
.org 0x80e0
	adds r1, r0, #0	@ 000080e0 011c
.org 0x80e2
	movs r2, #15	@ 000080e2 0f22
.org 0x80e4
	ands r2, r1	@ 000080e4 0a40
.org 0x80e6
	cmp r2, #0	@ 000080e6 002a
.org 0x80e8
	beq.n 0x8142	@ 000080e8 2bd0
.org 0x80ea
	cmp r2, #15	@ 000080ea 0f2a
.org 0x80ec
	beq.n 0x8142	@ 000080ec 29d0
.org 0x80ee
	movs r3, #132	@ 000080ee 8423
.org 0x80f0
	lsls r3, r3, #8	@ 000080f0 1b02
.org 0x80f2
	adds r0, r3, #0	@ 000080f2 181c
.org 0x80f4
	ands r1, r0	@ 000080f4 0140
.org 0x80f6
	cmp r1, #0	@ 000080f6 0029
.org 0x80f8
	bne.n 0x8142	@ 000080f8 23d1
.org 0x80fa
	cmp r2, #1	@ 000080fa 012a
.org 0x80fc
	bne.n 0x8118	@ 000080fc 0cd1
.org 0x80fe
	movs r0, #128	@ 000080fe 8020
.org 0x8100
	lsls r0, r0, #5	@ 00008100 4001
.org 0x8102
	adds r4, r4, r0	@ 00008102 2418
.org 0x8104
	ldr r0, [pc, #12]	@ 00008104 0348
.org 0x8106
	ands r4, r0	@ 00008106 0440
.org 0x8108
	b.n 0x8150	@ 00008108 22e0
.org 0x810a
	.byte 0x00	@ 0000810a data
.org 0x810b
	.byte 0x00	@ 0000810b data
.org 0x810c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000810c data
.org 0x8110
	.byte 0x00,0x10,0xff,0xff	@ 00008110 data
.org 0x8114
	.byte 0x00,0xf0,0xff,0xff	@ 00008114 data
.org 0x8118
	ldr r1, [pc, #44]	@ 00008118 0b49
.org 0x811a
	lsls r0, r2, #2	@ 0000811a 9000
.org 0x811c
	adds r0, r0, r1	@ 0000811c 4018
.org 0x811e
	ldr r2, [pc, #44]	@ 0000811e 0b4a
.org 0x8120
	adds r1, r2, #0	@ 00008120 111c
.org 0x8122
	bics r1, r4	@ 00008122 a143
.org 0x8124
	ldr r3, [r0, #0]	@ 00008124 0368
.org 0x8126
	adds r0, r7, #0	@ 00008126 381c
.org 0x8128
	ands r0, r2	@ 00008128 1040
.org 0x812a
	bl 0x128f88	@ 0000812a 20f12dff
.org 0x812e
	cmp r0, #0	@ 0000812e 0028
.org 0x8130
	beq.n 0x8142	@ 00008130 07d0
.org 0x8132
	adds r1, r4, #0	@ 00008132 211c
.org 0x8134
	subs r4, r4, r0	@ 00008134 241a
.org 0x8136
	eors r1, r4	@ 00008136 6140
.org 0x8138
	movs r0, #128	@ 00008138 8020
.org 0x813a
	lsls r0, r0, #5	@ 0000813a 4001
.org 0x813c
	ands r1, r0	@ 0000813c 0140
.org 0x813e
	cmp r1, #0	@ 0000813e 0029
.org 0x8140
	bne.n 0x8150	@ 00008140 06d1
.org 0x8142
	subs r0, r4, r5	@ 00008142 601b
.org 0x8144
	b.n 0x815e	@ 00008144 0be0
.org 0x8146
	.byte 0x00	@ 00008146 data
.org 0x8147
	.byte 0x00	@ 00008147 data
.org 0x8148
	.byte 0x14,0xb1,0x82,0x08	@ 00008148 data
.org 0x814c
	.byte 0xff,0x0f,0x00,0x00	@ 0000814c data
.org 0x8150
	movs r1, #1	@ 00008150 0121
.org 0x8152
	add r8, r1	@ 00008152 8844
