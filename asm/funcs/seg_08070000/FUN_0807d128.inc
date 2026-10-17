@ FUN_0807d128  entry 0x0807d128  size 114
.thumb
.org 0x7d128
FUN_0807d128:
	push {r4, r5, lr}	@ 0007d128 30b5
.org 0x7d12a
	adds r4, r0, #0	@ 0007d12a 041c
.org 0x7d12c
	ldrb r0, [r4, #15]	@ 0007d12c e07b
.org 0x7d12e
	cmp r0, #0	@ 0007d12e 0028
.org 0x7d130
	bne.n 0x7d144	@ 0007d130 08d1
.org 0x7d132
	adds r0, r4, #0	@ 0007d132 201c
.org 0x7d134
	movs r1, #0	@ 0007d134 0021
.org 0x7d136
	bl 0x7e8c8	@ 0007d136 01f0c7fb
.org 0x7d13a
	movs r0, #16	@ 0007d13a 1020
.org 0x7d13c
	strb r0, [r4, #18]	@ 0007d13c a074
.org 0x7d13e
	ldrb r0, [r4, #15]	@ 0007d13e e07b
.org 0x7d140
	adds r0, #1	@ 0007d140 0130
.org 0x7d142
	strb r0, [r4, #15]	@ 0007d142 e073
.org 0x7d144
	adds r5, r4, #0	@ 0007d144 251c
.org 0x7d146
	adds r5, #188	@ 0007d146 bc35
.org 0x7d148
	ldrb r0, [r5, #0]	@ 0007d148 2878
.org 0x7d14a
	cmp r0, #0	@ 0007d14a 0028
.org 0x7d14c
	beq.n 0x7d154	@ 0007d14c 02d0
.org 0x7d14e
	adds r0, r4, #0	@ 0007d14e 201c
.org 0x7d150
	bl 0x1cff0	@ 0007d150 9ff74eff
.org 0x7d154
	adds r0, r4, #0	@ 0007d154 201c
.org 0x7d156
	adds r0, #116	@ 0007d156 7430
.org 0x7d158
	ldr r3, [pc, #64]	@ 0007d158 104b
.org 0x7d15a
	ldr r2, [pc, #68]	@ 0007d15a 114a
.org 0x7d15c
	ldrb r1, [r5, #0]	@ 0007d15c 2978
.org 0x7d15e
	lsls r1, r1, #1	@ 0007d15e 4900
.org 0x7d160
	adds r1, r1, r2	@ 0007d160 8918
.org 0x7d162
	ldrh r2, [r1, #0]	@ 0007d162 0a88
.org 0x7d164
	lsls r2, r2, #2	@ 0007d164 9200
.org 0x7d166
	adds r2, r2, r3	@ 0007d166 d218
.org 0x7d168
	adds r1, r4, #0	@ 0007d168 211c
.org 0x7d16a
	adds r1, #113	@ 0007d16a 7131
.org 0x7d16c
	ldrb r1, [r1, #0]	@ 0007d16c 0978
.org 0x7d16e
	lsls r1, r1, #24	@ 0007d16e 0906
.org 0x7d170
	asrs r1, r1, #24	@ 0007d170 0916
.org 0x7d172
	ldr r2, [r2, #0]	@ 0007d172 1268
.org 0x7d174
	lsls r1, r1, #2	@ 0007d174 8900
.org 0x7d176
	adds r1, r1, r2	@ 0007d176 8918
.org 0x7d178
	ldr r1, [r1, #0]	@ 0007d178 0968
.org 0x7d17a
	bl 0x5784	@ 0007d17a 88f703fb
.org 0x7d17e
	ldrb r0, [r4, #18]	@ 0007d17e a07c
.org 0x7d180
	subs r0, #1	@ 0007d180 0138
.org 0x7d182
	strb r0, [r4, #18]	@ 0007d182 a074
.org 0x7d184
	lsls r0, r0, #24	@ 0007d184 0006
.org 0x7d186
	lsrs r1, r0, #24	@ 0007d186 010e
.org 0x7d188
	cmp r1, #0	@ 0007d188 0029
.org 0x7d18a
	bne.n 0x7d194	@ 0007d18a 03d1
.org 0x7d18c
	ldrb r0, [r4, #14]	@ 0007d18c a07b
.org 0x7d18e
	adds r0, #1	@ 0007d18e 0130
.org 0x7d190
	strb r0, [r4, #14]	@ 0007d190 a073
.org 0x7d192
	strb r1, [r4, #15]	@ 0007d192 e173
.org 0x7d194
	pop {r4, r5}	@ 0007d194 30bc
.org 0x7d196
	pop {r0}	@ 0007d196 01bc
.org 0x7d198
	bx r0	@ 0007d198 0047
