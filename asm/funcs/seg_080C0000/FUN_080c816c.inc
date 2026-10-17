@ FUN_080c816c  entry 0x080c816c  size 70
.thumb
.org 0xc816c
FUN_080c816c:
	push {r4, lr}	@ 000c816c 10b5
.org 0xc816e
	adds r4, r0, #0	@ 000c816e 041c
.org 0xc8170
	ldrb r1, [r4, #15]	@ 000c8170 e17b
.org 0xc8172
	cmp r1, #0	@ 000c8172 0029
.org 0xc8174
	bne.n 0xc8184	@ 000c8174 06d1
.org 0xc8176
	adds r0, #181	@ 000c8176 b530
.org 0xc8178
	ldrb r0, [r0, #0]	@ 000c8178 0078
.org 0xc817a
	lsls r0, r0, #2	@ 000c817a 8000
.org 0xc817c
	adds r0, #124	@ 000c817c 7c30
.org 0xc817e
	str r0, [r4, #104]	@ 000c817e a066
.org 0xc8180
	adds r0, r1, #1	@ 000c8180 481c
.org 0xc8182
	strb r0, [r4, #15]	@ 000c8182 e073
.org 0xc8184
	adds r0, r4, #0	@ 000c8184 201c
.org 0xc8186
	bl 0x1cff0	@ 000c8186 54f733ff
.org 0xc818a
	ldr r0, [r4, #104]	@ 000c818a a06e
.org 0xc818c
	subs r0, #1	@ 000c818c 0138
.org 0xc818e
	str r0, [r4, #104]	@ 000c818e a066
.org 0xc8190
	cmp r0, #0	@ 000c8190 0028
.org 0xc8192
	bne.n 0xc81ac	@ 000c8192 0bd1
.org 0xc8194
	ldr r1, [pc, #28]	@ 000c8194 0749
.org 0xc8196
	ldrb r0, [r4, #9]	@ 000c8196 607a
.org 0xc8198
	lsls r0, r0, #2	@ 000c8198 8000
.org 0xc819a
	adds r0, r0, r1	@ 000c819a 4018
.org 0xc819c
	movs r1, #2	@ 000c819c 0221
.org 0xc819e
	str r1, [r4, #12]	@ 000c819e e160
.org 0xc81a0
	ldr r0, [r0, #0]	@ 000c81a0 0068
.org 0xc81a2
	ldr r0, [r0, #8]	@ 000c81a2 8068
.org 0xc81a4
	str r0, [r4, #20]	@ 000c81a4 6061
.org 0xc81a6
	adds r0, r4, #0	@ 000c81a6 201c
.org 0xc81a8
	bl 0xc82a8	@ 000c81a8 00f07ef8
.org 0xc81ac
	pop {r4}	@ 000c81ac 10bc
.org 0xc81ae
	pop {r0}	@ 000c81ae 01bc
.org 0xc81b0
	bx r0	@ 000c81b0 0047
