@ FUN_08001140  entry 0x08001140  size 48
.thumb
.org 0x1140
FUN_08001140:
	push {lr}	@ 00001140 00b5
.org 0x1142
	sub sp, #4	@ 00001142 81b0
.org 0x1144
	mov r1, sp	@ 00001144 6946
.org 0x1146
	ldr r0, [pc, #40]	@ 00001146 0a48
.org 0x1148
	ldrh r0, [r0, #0]	@ 00001148 0088
.org 0x114a
	strh r0, [r1, #0]	@ 0000114a 0880
.org 0x114c
	mov r0, sp	@ 0000114c 6846
.org 0x114e
	ldrh r0, [r0, #0]	@ 0000114e 0088
.org 0x1150
	cmp r0, #159	@ 00001150 9f28
.org 0x1152
	bls.n 0x115c	@ 00001152 03d9
.org 0x1154
	mov r0, sp	@ 00001154 6846
.org 0x1156
	ldrh r0, [r0, #0]	@ 00001156 0088
.org 0x1158
	cmp r0, #227	@ 00001158 e328
.org 0x115a
	bne.n 0x116a	@ 0000115a 06d1
.org 0x115c
	ldr r2, [pc, #20]	@ 0000115c 054a
.org 0x115e
	ldr r3, [r2, #4]	@ 0000115e 5368
.org 0x1160
	ldr r0, [r2, #12]	@ 00001160 d068
.org 0x1162
	ldrh r1, [r0, #0]	@ 00001162 0188
.org 0x1164
	strh r1, [r3, #0]	@ 00001164 1980
.org 0x1166
	adds r0, #2	@ 00001166 0230
.org 0x1168
	str r0, [r2, #12]	@ 00001168 d060
.org 0x116a
	add sp, #4	@ 0000116a 01b0
.org 0x116c
	pop {r0}	@ 0000116c 01bc
.org 0x116e
	bx r0	@ 0000116e 0047
