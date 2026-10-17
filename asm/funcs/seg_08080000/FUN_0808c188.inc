@ FUN_0808c188  entry 0x0808c188  size 28
.thumb
.org 0x8c188
FUN_0808c188:
	ldrb r2, [r0, #10]	@ 0008c188 827a
.org 0x8c18a
	movs r1, #254	@ 0008c18a fe21
.org 0x8c18c
	ands r1, r2	@ 0008c18c 1140
.org 0x8c18e
	strb r1, [r0, #10]	@ 0008c18e 8172
.org 0x8c190
	ldr r2, [pc, #16]	@ 0008c190 044a
.org 0x8c192
	ldrb r1, [r0, #9]	@ 0008c192 417a
.org 0x8c194
	lsls r1, r1, #2	@ 0008c194 8900
.org 0x8c196
	adds r1, r1, r2	@ 0008c196 8918
.org 0x8c198
	movs r2, #4	@ 0008c198 0422
.org 0x8c19a
	str r2, [r0, #12]	@ 0008c19a c260
.org 0x8c19c
	ldr r1, [r1, #0]	@ 0008c19c 0968
.org 0x8c19e
	ldr r1, [r1, #16]	@ 0008c19e 0969
.org 0x8c1a0
	str r1, [r0, #20]	@ 0008c1a0 4161
.org 0x8c1a2
	bx lr	@ 0008c1a2 7047
