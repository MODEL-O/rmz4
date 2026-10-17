@ FUN_0808b138  entry 0x0808b138  size 102
.thumb
.org 0x8b138
FUN_0808b138:
	push {r4, r5, r6, lr}	@ 0008b138 70b5
.org 0x8b13a
	sub sp, #16	@ 0008b13a 84b0
.org 0x8b13c
	adds r4, r0, #0	@ 0008b13c 041c
.org 0x8b13e
	mov r0, sp	@ 0008b13e 6846
.org 0x8b140
	ldr r1, [pc, #76]	@ 0008b140 1349
.org 0x8b142
	ldmia r1!, {r2, r3, r5}	@ 0008b142 2cc9
.org 0x8b144
	stmia r0!, {r2, r3, r5}	@ 0008b144 2cc0
.org 0x8b146
	ldr r1, [r1, #0]	@ 0008b146 0968
.org 0x8b148
	str r1, [r0, #0]	@ 0008b148 0160
.org 0x8b14a
	adds r6, r4, #0	@ 0008b14a 261c
.org 0x8b14c
	adds r6, #188	@ 0008b14c bc36
.org 0x8b14e
	ldr r5, [r6, #0]	@ 0008b14e 3568
.org 0x8b150
	cmp r5, #0	@ 0008b150 002d
.org 0x8b152
	bne.n 0x8b19a	@ 0008b152 22d1
.org 0x8b154
	adds r0, r4, #0	@ 0008b154 201c
.org 0x8b156
	adds r0, #140	@ 0008b156 8c30
.org 0x8b158
	ldr r0, [r0, #0]	@ 0008b158 0068
.org 0x8b15a
	movs r1, #1	@ 0008b15a 0121
.org 0x8b15c
	ands r0, r1	@ 0008b15c 0840
.org 0x8b15e
	cmp r0, #0	@ 0008b15e 0028
.org 0x8b160
	beq.n 0x8b19a	@ 0008b160 1bd0
.org 0x8b162
	adds r0, r4, #0	@ 0008b162 201c
.org 0x8b164
	adds r0, #192	@ 0008b164 c030
.org 0x8b166
	ldrb r0, [r0, #0]	@ 0008b166 0078
.org 0x8b168
	lsls r0, r0, #3	@ 0008b168 c000
.org 0x8b16a
	mov r1, sp	@ 0008b16a 6946
.org 0x8b16c
	adds r2, r1, r0	@ 0008b16c 0a18
.org 0x8b16e
	movs r0, #0	@ 0008b16e 0020
.org 0x8b170
	adds r1, r4, #0	@ 0008b170 211c
.org 0x8b172
	bl 0x2adac	@ 0008b172 9ff71bfe
.org 0x8b176
	str r0, [r6, #0]	@ 0008b176 3060
.org 0x8b178
	cmp r0, #0	@ 0008b178 0028
.org 0x8b17a
	beq.n 0x8b19a	@ 0008b17a 0ed0
.org 0x8b17c
	adds r0, r4, #0	@ 0008b17c 201c
.org 0x8b17e
	adds r0, #151	@ 0008b17e 9730
.org 0x8b180
	ldrb r0, [r0, #0]	@ 0008b180 0078
.org 0x8b182
	movs r1, #240	@ 0008b182 f021
.org 0x8b184
	ands r1, r0	@ 0008b184 0140
.org 0x8b186
	cmp r1, #48	@ 0008b186 3029
.org 0x8b188
	bne.n 0x8b194	@ 0008b188 04d1
.org 0x8b18a
	movs r0, #12	@ 0008b18a 0c20
.org 0x8b18c
	b.n 0x8b196	@ 0008b18c 03e0
.org 0x8b18e
	.byte 0x00	@ 0008b18e data
.org 0x8b18f
	.byte 0x00	@ 0008b18f data
.org 0x8b190
	.byte 0x30,0x9b,0x12,0x08	@ 0008b190 data
.org 0x8b194
	movs r0, #13	@ 0008b194 0d20
.org 0x8b196
	strb r0, [r4, #13]	@ 0008b196 6073
.org 0x8b198
	strb r5, [r4, #14]	@ 0008b198 a573
.org 0x8b19a
	movs r0, #1	@ 0008b19a 0120
.org 0x8b19c
	add sp, #16	@ 0008b19c 04b0
