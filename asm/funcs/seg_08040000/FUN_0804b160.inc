@ FUN_0804b160  entry 0x0804b160  size 88
.thumb
.org 0x4b160
FUN_0804b160:
	push {r4, r5, r6, lr}	@ 0004b160 70b5
.org 0x4b162
	adds r6, r0, #0	@ 0004b162 061c
.org 0x4b164
	lsls r1, r1, #24	@ 0004b164 0906
.org 0x4b166
	lsrs r5, r1, #24	@ 0004b166 0d0e
.org 0x4b168
	lsls r2, r2, #24	@ 0004b168 1206
.org 0x4b16a
	lsrs r4, r2, #24	@ 0004b16a 140e
.org 0x4b16c
	ldr r0, [pc, #72]	@ 0004b16c 1248
.org 0x4b16e
	ldr r0, [r0, #0]	@ 0004b16e 0068
.org 0x4b170
	bl 0x5500	@ 0004b170 baf7c6f9
.org 0x4b174
	adds r2, r0, #0	@ 0004b174 021c
.org 0x4b176
	cmp r2, #0	@ 0004b176 002a
.org 0x4b178
	beq.n 0x4b1b2	@ 0004b178 1bd0
.org 0x4b17a
	ldr r0, [pc, #64]	@ 0004b17a 1048
.org 0x4b17c
	movs r1, #40	@ 0004b17c 2821
.org 0x4b17e
	strb r1, [r2, #9]	@ 0004b17e 5172
.org 0x4b180
	adds r0, #160	@ 0004b180 a030
.org 0x4b182
	ldr r0, [r0, #0]	@ 0004b182 0068
.org 0x4b184
	ldr r0, [r0, #0]	@ 0004b184 0068
.org 0x4b186
	str r0, [r2, #20]	@ 0004b186 5061
.org 0x4b188
	ldrb r1, [r2, #11]	@ 0004b188 d17a
.org 0x4b18a
	movs r0, #191	@ 0004b18a bf20
.org 0x4b18c
	ands r0, r1	@ 0004b18c 0840
.org 0x4b18e
	strb r0, [r2, #11]	@ 0004b18e d072
.org 0x4b190
	adds r1, r2, #0	@ 0004b190 111c
.org 0x4b192
	adds r1, #37	@ 0004b192 2531
.org 0x4b194
	movs r0, #16	@ 0004b194 1020
.org 0x4b196
	strb r0, [r1, #0]	@ 0004b196 0870
.org 0x4b198
	ldr r0, [pc, #36]	@ 0004b198 0948
.org 0x4b19a
	ldrh r0, [r0, #0]	@ 0004b19a 0088
.org 0x4b19c
	strh r0, [r2, #32]	@ 0004b19c 1084
.org 0x4b19e
	ldr r0, [pc, #36]	@ 0004b19e 0948
.org 0x4b1a0
	ldrb r0, [r0, #0]	@ 0004b1a0 0078
.org 0x4b1a2
	subs r1, #3	@ 0004b1a2 0339
.org 0x4b1a4
	strb r0, [r1, #0]	@ 0004b1a4 0870
.org 0x4b1a6
	ldr r0, [r6, #0]	@ 0004b1a6 3068
.org 0x4b1a8
	ldr r1, [r6, #4]	@ 0004b1a8 7168
.org 0x4b1aa
	str r0, [r2, #84]	@ 0004b1aa 5065
.org 0x4b1ac
	str r1, [r2, #88]	@ 0004b1ac 9165
.org 0x4b1ae
	strb r5, [r2, #16]	@ 0004b1ae 1574
.org 0x4b1b0
	strb r4, [r2, #17]	@ 0004b1b0 5474
.org 0x4b1b2
	pop {r4, r5, r6}	@ 0004b1b2 70bc
.org 0x4b1b4
	pop {r0}	@ 0004b1b4 01bc
.org 0x4b1b6
	bx r0	@ 0004b1b6 0047
