@ FUN_0808516c  entry 0x0808516c  size 128
.thumb
.org 0x8516c
FUN_0808516c:
	push {r4, r5, lr}	@ 0008516c 30b5
.org 0x8516e
	sub sp, #8	@ 0008516e 82b0
.org 0x85170
	adds r4, r0, #0	@ 00085170 041c
.org 0x85172
	adds r0, #140	@ 00085172 8c30
.org 0x85174
	movs r1, #0	@ 00085174 0021
.org 0x85176
	str r1, [r0, #0]	@ 00085176 0160
.org 0x85178
	adds r0, #4	@ 00085178 0430
.org 0x8517a
	str r1, [r0, #0]	@ 0008517a 0160
.org 0x8517c
	adds r0, #4	@ 0008517c 0430
.org 0x8517e
	strb r1, [r0, #0]	@ 0008517e 0170
.org 0x85180
	ldrb r1, [r4, #10]	@ 00085180 a17a
.org 0x85182
	movs r0, #251	@ 00085182 fb20
.org 0x85184
	ands r0, r1	@ 00085184 0840
.org 0x85186
	movs r1, #254	@ 00085186 fe21
.org 0x85188
	ands r0, r1	@ 00085188 0840
.org 0x8518a
	strb r0, [r4, #10]	@ 0008518a a072
.org 0x8518c
	ldr r0, [r4, #84]	@ 0008518c 606d
.org 0x8518e
	str r0, [sp, #0]	@ 0008518e 0090
.org 0x85190
	ldr r0, [r4, #88]	@ 00085190 a06d
.org 0x85192
	str r0, [sp, #4]	@ 00085192 0190
.org 0x85194
	movs r0, #1	@ 00085194 0120
.org 0x85196
	mov r1, sp	@ 00085196 6946
.org 0x85198
	bl 0xd0c88	@ 00085198 4bf076fd
.org 0x8519c
	movs r0, #42	@ 0008519c 2a20
.org 0x8519e
	bl 0x2b10	@ 0008519e 7df7b7fc
.org 0x851a2
	ldr r2, [pc, #72]	@ 000851a2 124a
.org 0x851a4
	adds r0, r4, #0	@ 000851a4 201c
.org 0x851a6
	mov r1, sp	@ 000851a6 6946
.org 0x851a8
	movs r3, #3	@ 000851a8 0323
.org 0x851aa
	bl 0xd72e4	@ 000851aa 52f09bf8
.org 0x851ae
	adds r5, r4, #0	@ 000851ae 251c
.org 0x851b0
	adds r5, #84	@ 000851b0 5435
.org 0x851b2
	movs r0, #1	@ 000851b2 0120
.org 0x851b4
	movs r1, #12	@ 000851b4 0c21
.org 0x851b6
	adds r2, r5, #0	@ 000851b6 2a1c
.org 0x851b8
	bl 0x2ab88	@ 000851b8 a5f7e6fc
.org 0x851bc
	ldr r2, [pc, #48]	@ 000851bc 0c4a
.org 0x851be
	ldrh r1, [r2, #12]	@ 000851be 9189
.org 0x851c0
	ldr r0, [pc, #48]	@ 000851c0 0c48
.org 0x851c2
	cmp r1, r0	@ 000851c2 8142
.org 0x851c4
	bhi.n 0x851ca	@ 000851c4 01d8
.org 0x851c6
	adds r0, r1, #1	@ 000851c6 481c
.org 0x851c8
	strh r0, [r2, #12]	@ 000851c8 9081
.org 0x851ca
	adds r0, r4, #0	@ 000851ca 201c
.org 0x851cc
	adds r1, r5, #0	@ 000851cc 291c
.org 0x851ce
	bl 0x2abe0	@ 000851ce a5f707fd
.org 0x851d2
	ldr r1, [pc, #36]	@ 000851d2 0949
.org 0x851d4
	ldrb r0, [r4, #9]	@ 000851d4 607a
.org 0x851d6
	lsls r0, r0, #2	@ 000851d6 8000
.org 0x851d8
	adds r0, r0, r1	@ 000851d8 4018
.org 0x851da
	movs r1, #4	@ 000851da 0421
.org 0x851dc
	str r1, [r4, #12]	@ 000851dc e160
.org 0x851de
	ldr r0, [r0, #0]	@ 000851de 0068
.org 0x851e0
	ldr r0, [r0, #16]	@ 000851e0 0069
.org 0x851e2
	str r0, [r4, #20]	@ 000851e2 6061
.org 0x851e4
	add sp, #8	@ 000851e4 02b0
.org 0x851e6
	pop {r4, r5}	@ 000851e6 30bc
.org 0x851e8
	pop {r0}	@ 000851e8 01bc
.org 0x851ea
	bx r0	@ 000851ea 0047
