@ FUN_0809d140  entry 0x0809d140  size 106
.thumb
.org 0x9d140
FUN_0809d140:
	push {r4, lr}	@ 0009d140 10b5
.org 0x9d142
	adds r4, r0, #0	@ 0009d142 041c
.org 0x9d144
	ldr r1, [pc, #100]	@ 0009d144 1949
.org 0x9d146
	ldrb r0, [r4, #9]	@ 0009d146 607a
.org 0x9d148
	lsls r0, r0, #2	@ 0009d148 8000
.org 0x9d14a
	adds r0, r0, r1	@ 0009d14a 4018
.org 0x9d14c
	movs r1, #1	@ 0009d14c 0121
.org 0x9d14e
	str r1, [r4, #12]	@ 0009d14e e160
.org 0x9d150
	ldr r0, [r0, #0]	@ 0009d150 0068
.org 0x9d152
	ldr r0, [r0, #4]	@ 0009d152 4068
.org 0x9d154
	str r0, [r4, #20]	@ 0009d154 6061
.org 0x9d156
	adds r0, r4, #0	@ 0009d156 201c
.org 0x9d158
	bl 0x1cc9c	@ 0009d158 7ff7a0fd
.org 0x9d15c
	ldrb r1, [r4, #10]	@ 0009d15c a17a
.org 0x9d15e
	movs r0, #1	@ 0009d15e 0120
.org 0x9d160
	orrs r0, r1	@ 0009d160 0843
.org 0x9d162
	movs r1, #2	@ 0009d162 0221
.org 0x9d164
	orrs r0, r1	@ 0009d164 0843
.org 0x9d166
	strb r0, [r4, #10]	@ 0009d166 a072
.org 0x9d168
	movs r1, #214	@ 0009d168 d621
.org 0x9d16a
	lsls r1, r1, #7	@ 0009d16a c901
.org 0x9d16c
	adds r0, r4, #0	@ 0009d16c 201c
.org 0x9d16e
	bl 0x1cf00	@ 0009d16e 7ff7c7fe
.org 0x9d172
	movs r2, #0	@ 0009d172 0022
.org 0x9d174
	ldrb r1, [r4, #10]	@ 0009d174 a17a
.org 0x9d176
	movs r0, #239	@ 0009d176 ef20
.org 0x9d178
	ands r0, r1	@ 0009d178 0840
.org 0x9d17a
	strb r0, [r4, #10]	@ 0009d17a a072
.org 0x9d17c
	adds r0, r4, #0	@ 0009d17c 201c
.org 0x9d17e
	adds r0, #76	@ 0009d17e 4c30
.org 0x9d180
	strb r2, [r0, #0]	@ 0009d180 0270
.org 0x9d182
	adds r3, r4, #0	@ 0009d182 231c
.org 0x9d184
	adds r3, #74	@ 0009d184 4a33
.org 0x9d186
	ldrb r1, [r3, #0]	@ 0009d186 1978
.org 0x9d188
	movs r0, #17	@ 0009d188 1120
.org 0x9d18a
	negs r0, r0	@ 0009d18a 4042
.org 0x9d18c
	ands r0, r1	@ 0009d18c 0840
.org 0x9d18e
	strb r0, [r3, #0]	@ 0009d18e 1870
.org 0x9d190
	strb r2, [r4, #18]	@ 0009d190 a274
.org 0x9d192
	ldr r0, [pc, #28]	@ 0009d192 0748
.org 0x9d194
	str r0, [r4, #96]	@ 0009d194 2066
.org 0x9d196
	adds r1, r4, #0	@ 0009d196 211c
.org 0x9d198
	adds r1, #180	@ 0009d198 b431
.org 0x9d19a
	ldr r0, [r4, #84]	@ 0009d19a 606d
.org 0x9d19c
	str r0, [r1, #0]	@ 0009d19c 0860
.org 0x9d19e
	adds r1, #4	@ 0009d19e 0431
.org 0x9d1a0
	ldr r0, [r4, #88]	@ 0009d1a0 a06d
.org 0x9d1a2
	str r0, [r1, #0]	@ 0009d1a2 0860
.org 0x9d1a4
	pop {r4}	@ 0009d1a4 10bc
.org 0x9d1a6
	pop {r0}	@ 0009d1a6 01bc
.org 0x9d1a8
	bx r0	@ 0009d1a8 0047
