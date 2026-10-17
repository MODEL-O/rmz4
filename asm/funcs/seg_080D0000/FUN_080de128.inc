@ FUN_080de128  entry 0x080de128  size 104
.thumb
.org 0xde128
FUN_080de128:
	push {r4, r5, r6, lr}	@ 000de128 70b5
.org 0xde12a
	sub sp, #8	@ 000de12a 82b0
.org 0xde12c
	adds r5, r0, #0	@ 000de12c 051c
.org 0xde12e
	ldr r0, [r5, #84]	@ 000de12e 686d
.org 0xde130
	str r0, [sp, #0]	@ 000de130 0090
.org 0xde132
	ldr r0, [r5, #88]	@ 000de132 a86d
.org 0xde134
	ldr r1, [pc, #88]	@ 000de134 1649
.org 0xde136
	adds r0, r0, r1	@ 000de136 4018
.org 0xde138
	str r0, [sp, #4]	@ 000de138 0190
.org 0xde13a
	ldr r6, [pc, #88]	@ 000de13a 164e
.org 0xde13c
	ldrb r0, [r5, #10]	@ 000de13c a87a
.org 0xde13e
	movs r4, #16	@ 000de13e 1024
.org 0xde140
	adds r3, r4, #0	@ 000de140 231c
.org 0xde142
	ands r3, r0	@ 000de142 0340
.org 0xde144
	lsls r3, r3, #24	@ 000de144 1b06
.org 0xde146
	lsrs r3, r3, #24	@ 000de146 1b0e
.org 0xde148
	mov r0, sp	@ 000de148 6846
.org 0xde14a
	adds r1, r6, #0	@ 000de14a 311c
.org 0xde14c
	movs r2, #0	@ 000de14c 0022
.org 0xde14e
	bl 0xd4c8c	@ 000de14e f6f79dfd
.org 0xde152
	adds r6, #28	@ 000de152 1c36
.org 0xde154
	ldrb r0, [r5, #10]	@ 000de154 a87a
.org 0xde156
	ands r4, r0	@ 000de156 0440
.org 0xde158
	lsls r4, r4, #24	@ 000de158 2406
.org 0xde15a
	lsrs r4, r4, #24	@ 000de15a 240e
.org 0xde15c
	mov r0, sp	@ 000de15c 6846
.org 0xde15e
	adds r1, r6, #0	@ 000de15e 311c
.org 0xde160
	movs r2, #0	@ 000de160 0022
.org 0xde162
	adds r3, r4, #0	@ 000de162 231c
.org 0xde164
	bl 0xd4c8c	@ 000de164 f6f792fd
.org 0xde168
	movs r0, #1	@ 000de168 0120
.org 0xde16a
	mov r1, sp	@ 000de16a 6946
.org 0xde16c
	bl 0xd0c88	@ 000de16c f2f78cfd
.org 0xde170
	movs r0, #42	@ 000de170 2a20
.org 0xde172
	bl 0x2b10	@ 000de172 24f7cdfc
.org 0xde176
	ldr r1, [pc, #32]	@ 000de176 0849
.org 0xde178
	ldrb r0, [r5, #9]	@ 000de178 687a
.org 0xde17a
	lsls r0, r0, #2	@ 000de17a 8000
.org 0xde17c
	adds r0, r0, r1	@ 000de17c 4018
.org 0xde17e
	movs r1, #4	@ 000de17e 0421
.org 0xde180
	str r1, [r5, #12]	@ 000de180 e960
.org 0xde182
	ldr r0, [r0, #0]	@ 000de182 0068
.org 0xde184
	ldr r0, [r0, #16]	@ 000de184 0069
.org 0xde186
	str r0, [r5, #20]	@ 000de186 6861
.org 0xde188
	add sp, #8	@ 000de188 02b0
.org 0xde18a
	pop {r4, r5, r6}	@ 000de18a 70bc
.org 0xde18c
	pop {r0}	@ 000de18c 01bc
.org 0xde18e
	bx r0	@ 000de18e 0047
