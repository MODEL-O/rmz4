@ FUN_0805f150  entry 0x0805f150  size 58
.thumb
.org 0x5f150
FUN_0805f150:
	push {r4, r5, r6, lr}	@ 0005f150 70b5
.org 0x5f152
	sub sp, #20	@ 0005f152 85b0
.org 0x5f154
	adds r4, r0, #0	@ 0005f154 041c
.org 0x5f156
	ldr r1, [pc, #52]	@ 0005f156 0d49
.org 0x5f158
	mov r0, sp	@ 0005f158 6846
.org 0x5f15a
	movs r2, #5	@ 0005f15a 0522
.org 0x5f15c
	bl 0x129258	@ 0005f15c caf07cf8
.org 0x5f160
	add r2, sp, #8	@ 0005f160 02aa
.org 0x5f162
	adds r1, r2, #0	@ 0005f162 111c
.org 0x5f164
	ldr r0, [pc, #40]	@ 0005f164 0a48
.org 0x5f166
	ldmia r0!, {r3, r5, r6}	@ 0005f166 68c8
.org 0x5f168
	stmia r1!, {r3, r5, r6}	@ 0005f168 68c1
.org 0x5f16a
	ldrb r1, [r4, #16]	@ 0005f16a 217c
.org 0x5f16c
	adds r4, #164	@ 0005f16c a434
.org 0x5f16e
	movs r3, #0	@ 0005f16e 0023
.org 0x5f170
	ldrsh r0, [r4, r3]	@ 0005f170 e05e
.org 0x5f172
	lsls r0, r0, #2	@ 0005f172 8000
.org 0x5f174
	lsls r1, r1, #2	@ 0005f174 8900
.org 0x5f176
	adds r2, r2, r1	@ 0005f176 5218
.org 0x5f178
	ldr r1, [r2, #0]	@ 0005f178 1168
.org 0x5f17a
	bl 0x128fb8	@ 0005f17a c9f01dff
.org 0x5f17e
	add r0, sp	@ 0005f17e 6844
.org 0x5f180
	ldrb r0, [r0, #0]	@ 0005f180 0078
.org 0x5f182
	add sp, #20	@ 0005f182 05b0
.org 0x5f184
	pop {r4, r5, r6}	@ 0005f184 70bc
.org 0x5f186
	pop {r1}	@ 0005f186 02bc
.org 0x5f188
	bx r1	@ 0005f188 0847
