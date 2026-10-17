@ FUN_080c8120  entry 0x080c8120  size 76
.thumb
.org 0xc8120
FUN_080c8120:
	push {r4, lr}	@ 000c8120 10b5
.org 0xc8122
	adds r4, r0, #0	@ 000c8122 041c
.org 0xc8124
	ldrb r0, [r4, #10]	@ 000c8124 a07a
.org 0xc8126
	lsrs r1, r0, #4	@ 000c8126 0109
.org 0xc8128
	movs r0, #1	@ 000c8128 0120
.org 0xc812a
	ands r1, r0	@ 000c812a 0140
.org 0xc812c
	ldrb r2, [r4, #15]	@ 000c812c e27b
.org 0xc812e
	cmp r2, #0	@ 000c812e 002a
.org 0xc8130
	bne.n 0xc8142	@ 000c8130 07d1
.org 0xc8132
	lsls r0, r1, #1	@ 000c8132 4800
.org 0xc8134
	subs r0, #1	@ 000c8134 0138
.org 0xc8136
	lsls r1, r0, #3	@ 000c8136 c100
.org 0xc8138
	subs r1, r1, r0	@ 000c8138 091a
.org 0xc813a
	lsls r1, r1, #6	@ 000c813a 8901
.org 0xc813c
	str r1, [r4, #92]	@ 000c813c e165
.org 0xc813e
	adds r0, r2, #1	@ 000c813e 501c
.org 0xc8140
	strb r0, [r4, #15]	@ 000c8140 e073
.org 0xc8142
	adds r0, r4, #0	@ 000c8142 201c
.org 0xc8144
	bl 0x1cff0	@ 000c8144 54f754ff
.org 0xc8148
	ldr r0, [r4, #84]	@ 000c8148 606d
.org 0xc814a
	ldr r1, [r4, #92]	@ 000c814a e16d
.org 0xc814c
	adds r0, r0, r1	@ 000c814c 4018
.org 0xc814e
	str r0, [r4, #84]	@ 000c814e 6065
.org 0xc8150
	ldr r1, [r4, #88]	@ 000c8150 a16d
.org 0xc8152
	bl 0x7c7c	@ 000c8152 3ff793fd
.org 0xc8156
	lsls r0, r0, #16	@ 000c8156 0004
.org 0xc8158
	cmp r0, #0	@ 000c8158 0028
.org 0xc815a
	beq.n 0xc8166	@ 000c815a 04d0
.org 0xc815c
	movs r1, #0	@ 000c815c 0021
.org 0xc815e
	movs r0, #2	@ 000c815e 0220
.org 0xc8160
	strb r0, [r4, #13]	@ 000c8160 6073
.org 0xc8162
	strb r1, [r4, #14]	@ 000c8162 a173
.org 0xc8164
	strb r1, [r4, #15]	@ 000c8164 e173
.org 0xc8166
	pop {r4}	@ 000c8166 10bc
.org 0xc8168
	pop {r0}	@ 000c8168 01bc
.org 0xc816a
	bx r0	@ 000c816a 0047
