@ FUN_080bd124  entry 0x080bd124  size 136
.thumb
.org 0xbd124
FUN_080bd124:
	push {r4, r5, r6, lr}	@ 000bd124 70b5
.org 0xbd126
	adds r6, r0, #0	@ 000bd126 061c
.org 0xbd128
	bl 0x1cd28	@ 000bd128 5ff7fefd
.org 0xbd12c
	ldrb r1, [r6, #10]	@ 000bd12c b17a
.org 0xbd12e
	movs r0, #1	@ 000bd12e 0120
.org 0xbd130
	movs r5, #0	@ 000bd130 0025
.org 0xbd132
	orrs r0, r1	@ 000bd132 0843
.org 0xbd134
	movs r1, #2	@ 000bd134 0221
.org 0xbd136
	orrs r0, r1	@ 000bd136 0843
.org 0xbd138
	movs r1, #4	@ 000bd138 0421
.org 0xbd13a
	orrs r0, r1	@ 000bd13a 0843
.org 0xbd13c
	strb r0, [r6, #10]	@ 000bd13c b072
.org 0xbd13e
	adds r4, r6, #0	@ 000bd13e 341c
.org 0xbd140
	adds r4, #116	@ 000bd140 7434
.org 0xbd142
	ldr r1, [pc, #60]	@ 000bd142 0f49
.org 0xbd144
	adds r2, r6, #0	@ 000bd144 321c
.org 0xbd146
	adds r2, #84	@ 000bd146 5432
.org 0xbd148
	adds r0, r4, #0	@ 000bd148 201c
.org 0xbd14a
	movs r3, #1	@ 000bd14a 0123
.org 0xbd14c
	bl 0x5760	@ 000bd14c 48f708fb
.org 0xbd150
	str r6, [r4, #44]	@ 000bd150 e662
.org 0xbd152
	str r5, [r4, #36]	@ 000bd152 6562
.org 0xbd154
	ldr r1, [pc, #44]	@ 000bd154 0b49
.org 0xbd156
	ldrb r0, [r6, #9]	@ 000bd156 707a
.org 0xbd158
	lsls r0, r0, #2	@ 000bd158 8000
.org 0xbd15a
	adds r0, r0, r1	@ 000bd15a 4018
.org 0xbd15c
	movs r1, #1	@ 000bd15c 0121
.org 0xbd15e
	str r1, [r6, #12]	@ 000bd15e f160
.org 0xbd160
	ldr r0, [r0, #0]	@ 000bd160 0068
.org 0xbd162
	ldr r0, [r0, #4]	@ 000bd162 4068
.org 0xbd164
	str r0, [r6, #20]	@ 000bd164 7061
.org 0xbd166
	ldr r1, [pc, #32]	@ 000bd166 0849
.org 0xbd168
	adds r0, r6, #0	@ 000bd168 301c
.org 0xbd16a
	bl 0x1cf00	@ 000bd16a 5ff7c9fe
.org 0xbd16e
	ldrb r0, [r6, #16]	@ 000bd16e 307c
.org 0xbd170
	cmp r0, #0	@ 000bd170 0028
.org 0xbd172
	bne.n 0xbd190	@ 000bd172 0dd1
.org 0xbd174
	ldr r0, [pc, #20]	@ 000bd174 0548
.org 0xbd176
	str r0, [r6, #92]	@ 000bd176 f065
.org 0xbd178
	adds r1, r6, #0	@ 000bd178 311c
.org 0xbd17a
	adds r1, #36	@ 000bd17a 2431
.org 0xbd17c
	movs r0, #192	@ 000bd17c c020
.org 0xbd17e
	b.n 0xbd19c	@ 000bd17e 0de0
.org 0xbd180
	.byte 0xc4,0x49,0x86,0x08	@ 000bd180 data
.org 0xbd184
	.byte 0x40,0xdb,0x85,0x08	@ 000bd184 data
.org 0xbd188
	.byte 0x02,0x48,0x00,0x00	@ 000bd188 data
.org 0xbd18c
	.byte 0x80,0xfe,0xff,0xff	@ 000bd18c data
.org 0xbd190
	movs r0, #192	@ 000bd190 c020
.org 0xbd192
	lsls r0, r0, #1	@ 000bd192 4000
.org 0xbd194
	str r0, [r6, #92]	@ 000bd194 f065
.org 0xbd196
	adds r1, r6, #0	@ 000bd196 311c
.org 0xbd198
	adds r1, #36	@ 000bd198 2431
.org 0xbd19a
	movs r0, #64	@ 000bd19a 4020
.org 0xbd19c
	strb r0, [r1, #0]	@ 000bd19c 0870
.org 0xbd19e
	adds r1, r6, #0	@ 000bd19e 311c
.org 0xbd1a0
	adds r1, #180	@ 000bd1a0 b431
.org 0xbd1a2
	ldr r0, [r6, #84]	@ 000bd1a2 706d
.org 0xbd1a4
	str r0, [r1, #0]	@ 000bd1a4 0860
.org 0xbd1a6
	adds r1, #4	@ 000bd1a6 0431
.org 0xbd1a8
	movs r2, #0	@ 000bd1a8 0022
.org 0xbd1aa
	movs r0, #1	@ 000bd1aa 0120
