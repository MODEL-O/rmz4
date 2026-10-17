@ FUN_0811b154  entry 0x0811b154  size 198
.thumb
.org 0x11b154
FUN_0811b154:
	push {r4, r5, r6, r7, lr}	@ 0011b154 f0b5
.org 0x11b156
	mov r7, r9	@ 0011b156 4f46
.org 0x11b158
	mov r6, r8	@ 0011b158 4646
.org 0x11b15a
	push {r6, r7}	@ 0011b15a c0b4
.org 0x11b15c
	sub sp, #4	@ 0011b15c 81b0
.org 0x11b15e
	adds r5, r0, #0	@ 0011b15e 051c
.org 0x11b160
	ldr r0, [pc, #184]	@ 0011b160 2e48
.org 0x11b162
	adds r4, r5, r0	@ 0011b162 2c18
.org 0x11b164
	ldr r1, [pc, #184]	@ 0011b164 2e49
.org 0x11b166
	movs r0, #0	@ 0011b166 0020
.org 0x11b168
	str r0, [sp, #0]	@ 0011b168 0090
.org 0x11b16a
	adds r0, r4, #0	@ 0011b16a 201c
.org 0x11b16c
	movs r2, #21	@ 0011b16c 1522
.org 0x11b16e
	movs r3, #0	@ 0011b16e 0023
.org 0x11b170
	bl 0x27b8	@ 0011b170 e7f622fb
.org 0x11b174
	mov ip, r4	@ 0011b174 a446
.org 0x11b176
	movs r4, #0	@ 0011b176 0024
.org 0x11b178
	movs r1, #221	@ 0011b178 dd21
.org 0x11b17a
	lsls r1, r1, #4	@ 0011b17a 0901
.org 0x11b17c
	adds r0, r5, r1	@ 0011b17c 6818
.org 0x11b17e
	ldrb r2, [r0, #10]	@ 0011b17e 827a
.org 0x11b180
	cmp r4, r2	@ 0011b180 9442
.org 0x11b182
	bcs.n 0x11b1f4	@ 0011b182 37d2
.org 0x11b184
	mov r9, r0	@ 0011b184 8146
.org 0x11b186
	movs r7, #128	@ 0011b186 8027
.org 0x11b188
	lsls r7, r7, #6	@ 0011b188 bf01
.org 0x11b18a
	adds r6, r7, #0	@ 0011b18a 3e1c
.org 0x11b18c
	ldr r0, [pc, #148]	@ 0011b18c 2548
.org 0x11b18e
	mov r8, r0	@ 0011b18e 8046
.org 0x11b190
	ldr r1, [pc, #148]	@ 0011b190 2549
.org 0x11b192
	adds r0, r5, r1	@ 0011b192 6818
.org 0x11b194
	adds r1, r0, r4	@ 0011b194 0119
.org 0x11b196
	ldrb r0, [r1, #0]	@ 0011b196 0878
.org 0x11b198
	cmp r0, #255	@ 0011b198 ff28
.org 0x11b19a
	beq.n 0x11b1e6	@ 0011b19a 24d0
.org 0x11b19c
	adds r2, r0, #0	@ 0011b19c 021c
.org 0x11b19e
	mov r7, r8	@ 0011b19e 4746
.org 0x11b1a0
	ldr r0, [r7, #0]	@ 0011b1a0 3868
.org 0x11b1a2
	lsrs r1, r2, #1	@ 0011b1a2 5108
.org 0x11b1a4
	adds r0, r0, r1	@ 0011b1a4 4018
.org 0x11b1a6
	ldrb r1, [r0, #0]	@ 0011b1a6 0178
.org 0x11b1a8
	movs r0, #1	@ 0011b1a8 0120
.org 0x11b1aa
	ands r2, r0	@ 0011b1aa 0240
.org 0x11b1ac
	lsls r2, r2, #2	@ 0011b1ac 9200
.org 0x11b1ae
	asrs r1, r2	@ 0011b1ae 1141
.org 0x11b1b0
	movs r0, #15	@ 0011b1b0 0f20
.org 0x11b1b2
	ands r1, r0	@ 0011b1b2 0140
.org 0x11b1b4
	lsls r0, r4, #7	@ 0011b1b4 e001
.org 0x11b1b6
	mov r2, ip	@ 0011b1b6 6246
.org 0x11b1b8
	adds r3, r0, r2	@ 0011b1b8 8318
.org 0x11b1ba
	adds r2, r3, #0	@ 0011b1ba 1a1c
.org 0x11b1bc
	adds r2, #158	@ 0011b1bc 9e32
.org 0x11b1be
	ldr r7, [pc, #108]	@ 0011b1be 1b4f
.org 0x11b1c0
	adds r0, r7, #0	@ 0011b1c0 381c
.org 0x11b1c2
	strh r0, [r2, #0]	@ 0011b1c2 1080
.org 0x11b1c4
	adds r2, #64	@ 0011b1c4 4032
.org 0x11b1c6
	adds r7, #32	@ 0011b1c6 2037
.org 0x11b1c8
	adds r0, r7, #0	@ 0011b1c8 381c
.org 0x11b1ca
	strh r0, [r2, #0]	@ 0011b1ca 1080
.org 0x11b1cc
	subs r2, #62	@ 0011b1cc 3e3a
.org 0x11b1ce
	movs r7, #165	@ 0011b1ce a527
.org 0x11b1d0
	lsls r7, r7, #2	@ 0011b1d0 bf00
.org 0x11b1d2
	adds r0, r1, r7	@ 0011b1d2 c819
.org 0x11b1d4
	orrs r0, r6	@ 0011b1d4 3043
.org 0x11b1d6
	strh r0, [r2, #0]	@ 0011b1d6 1080
.org 0x11b1d8
	adds r0, r3, #0	@ 0011b1d8 181c
.org 0x11b1da
	adds r0, #224	@ 0011b1da e030
.org 0x11b1dc
	movs r2, #173	@ 0011b1dc ad22
.org 0x11b1de
	lsls r2, r2, #2	@ 0011b1de 9200
.org 0x11b1e0
	adds r1, r1, r2	@ 0011b1e0 8918
.org 0x11b1e2
	orrs r1, r6	@ 0011b1e2 3143
.org 0x11b1e4
	strh r1, [r0, #0]	@ 0011b1e4 0180
.org 0x11b1e6
	adds r0, r4, #1	@ 0011b1e6 601c
.org 0x11b1e8
	lsls r0, r0, #24	@ 0011b1e8 0006
.org 0x11b1ea
	lsrs r4, r0, #24	@ 0011b1ea 040e
.org 0x11b1ec
	mov r7, r9	@ 0011b1ec 4f46
.org 0x11b1ee
	ldrb r7, [r7, #10]	@ 0011b1ee bf7a
.org 0x11b1f0
	cmp r4, r7	@ 0011b1f0 bc42
.org 0x11b1f2
	bcc.n 0x11b190	@ 0011b1f2 cdd3
.org 0x11b1f4
	ldr r1, [pc, #56]	@ 0011b1f4 0e49
.org 0x11b1f6
	adds r0, r5, r1	@ 0011b1f6 6818
.org 0x11b1f8
	ldr r1, [pc, #56]	@ 0011b1f8 0e49
.org 0x11b1fa
	ldrh r2, [r1, #0]	@ 0011b1fa 0a88
.org 0x11b1fc
	movs r1, #248	@ 0011b1fc f821
.org 0x11b1fe
	lsls r1, r1, #5	@ 0011b1fe 4901
.org 0x11b200
	ands r1, r2	@ 0011b200 1140
.org 0x11b202
	lsls r1, r1, #3	@ 0011b202 c900
.org 0x11b204
	movs r2, #128	@ 0011b204 8022
.org 0x11b206
	lsls r2, r2, #5	@ 0011b206 5201
.org 0x11b208
	bl 0x1f1c	@ 0011b208 e6f688fe
.org 0x11b20c
	add sp, #4	@ 0011b20c 01b0
.org 0x11b20e
	pop {r3, r4}	@ 0011b20e 18bc
.org 0x11b210
	mov r8, r3	@ 0011b210 9846
.org 0x11b212
	mov r9, r4	@ 0011b212 a146
.org 0x11b214
	pop {r4, r5, r6, r7}	@ 0011b214 f0bc
.org 0x11b216
	pop {r0}	@ 0011b216 01bc
.org 0x11b218
	bx r0	@ 0011b218 0047
