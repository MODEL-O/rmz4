@ FUN_080ae140  entry 0x080ae140  size 92
.thumb
.org 0xae140
FUN_080ae140:
	push {r4, r5, r6, lr}	@ 000ae140 70b5
.org 0xae142
	adds r5, r0, #0	@ 000ae142 051c
.org 0xae144
	lsls r1, r1, #24	@ 000ae144 0906
.org 0xae146
	lsrs r6, r1, #24	@ 000ae146 0e0e
.org 0xae148
	ldr r0, [pc, #80]	@ 000ae148 1448
.org 0xae14a
	ldr r0, [r0, #0]	@ 000ae14a 0068
.org 0xae14c
	bl 0x5500	@ 000ae14c 57f7d8f9
.org 0xae150
	adds r4, r0, #0	@ 000ae150 041c
.org 0xae152
	cmp r4, #0	@ 000ae152 002c
.org 0xae154
	beq.n 0xae194	@ 000ae154 1ed0
.org 0xae156
	adds r1, r4, #0	@ 000ae156 211c
.org 0xae158
	adds r1, #37	@ 000ae158 2531
.org 0xae15a
	movs r3, #0	@ 000ae15a 0023
.org 0xae15c
	movs r0, #24	@ 000ae15c 1820
.org 0xae15e
	strb r0, [r1, #0]	@ 000ae15e 0870
.org 0xae160
	ldr r0, [pc, #60]	@ 000ae160 0f48
.org 0xae162
	movs r1, #80	@ 000ae162 5021
.org 0xae164
	strb r1, [r4, #9]	@ 000ae164 6172
.org 0xae166
	adds r1, #240	@ 000ae166 f031
.org 0xae168
	adds r0, r0, r1	@ 000ae168 4018
.org 0xae16a
	ldr r0, [r0, #0]	@ 000ae16a 0068
.org 0xae16c
	ldr r0, [r0, #0]	@ 000ae16c 0068
.org 0xae16e
	str r0, [r4, #20]	@ 000ae16e 6061
.org 0xae170
	movs r2, #0	@ 000ae170 0022
.org 0xae172
	strh r3, [r4, #32]	@ 000ae172 2384
.org 0xae174
	adds r0, r4, #0	@ 000ae174 201c
.org 0xae176
	adds r0, #34	@ 000ae176 2230
.org 0xae178
	strb r2, [r0, #0]	@ 000ae178 0270
.org 0xae17a
	ldrb r1, [r4, #11]	@ 000ae17a e17a
.org 0xae17c
	movs r0, #16	@ 000ae17c 1020
.org 0xae17e
	orrs r0, r1	@ 000ae17e 0843
.org 0xae180
	strb r0, [r4, #11]	@ 000ae180 e072
.org 0xae182
	ldrb r0, [r4, #28]	@ 000ae182 207f
.org 0xae184
	strb r0, [r4, #29]	@ 000ae184 6077
.org 0xae186
	str r5, [r4, #40]	@ 000ae186 a562
.org 0xae188
	movs r0, #1	@ 000ae188 0120
.org 0xae18a
	strb r0, [r4, #16]	@ 000ae18a 2074
.org 0xae18c
	strb r2, [r4, #17]	@ 000ae18c 6274
.org 0xae18e
	adds r0, r4, #0	@ 000ae18e 201c
.org 0xae190
	adds r0, #190	@ 000ae190 be30
.org 0xae192
	strb r6, [r0, #0]	@ 000ae192 0670
.org 0xae194
	adds r0, r4, #0	@ 000ae194 201c
.org 0xae196
	pop {r4, r5, r6}	@ 000ae196 70bc
.org 0xae198
	pop {r1}	@ 000ae198 02bc
.org 0xae19a
	bx r1	@ 000ae19a 0847
