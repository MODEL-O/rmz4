@ FUN_080e1164  entry 0x080e1164  size 94
.thumb
.org 0xe1164
FUN_080e1164:
	push {r4, r5, r6, lr}	@ 000e1164 70b5
.org 0xe1166
	adds r6, r0, #0	@ 000e1166 061c
.org 0xe1168
	bl 0x1cff0	@ 000e1168 3bf742ff
.org 0xe116c
	ldr r4, [r6, #84]	@ 000e116c 746d
.org 0xe116e
	ldr r5, [r6, #88]	@ 000e116e b56d
.org 0xe1170
	ldr r0, [r6, #96]	@ 000e1170 306e
.org 0xe1172
	adds r1, r0, r5	@ 000e1172 4119
.org 0xe1174
	adds r5, r1, #0	@ 000e1174 0d1c
.org 0xe1176
	ldrb r0, [r6, #18]	@ 000e1176 b07c
.org 0xe1178
	subs r0, #1	@ 000e1178 0138
.org 0xe117a
	strb r0, [r6, #18]	@ 000e117a b074
.org 0xe117c
	lsls r0, r0, #24	@ 000e117c 0006
.org 0xe117e
	cmp r0, #0	@ 000e117e 0028
.org 0xe1180
	beq.n 0xe118e	@ 000e1180 05d0
.org 0xe1182
	adds r0, r4, #0	@ 000e1182 201c
.org 0xe1184
	bl 0x7c7c	@ 000e1184 26f77afd
.org 0xe1188
	lsls r0, r0, #16	@ 000e1188 0004
.org 0xe118a
	cmp r0, #0	@ 000e118a 0028
.org 0xe118c
	beq.n 0xe11ac	@ 000e118c 0ed0
.org 0xe118e
	ldr r1, [pc, #24]	@ 000e118e 0649
.org 0xe1190
	ldrb r0, [r6, #9]	@ 000e1190 707a
.org 0xe1192
	lsls r0, r0, #2	@ 000e1192 8000
.org 0xe1194
	adds r0, r0, r1	@ 000e1194 4018
.org 0xe1196
	movs r1, #2	@ 000e1196 0221
.org 0xe1198
	str r1, [r6, #12]	@ 000e1198 f160
.org 0xe119a
	ldr r0, [r0, #0]	@ 000e119a 0068
.org 0xe119c
	ldr r0, [r0, #8]	@ 000e119c 8068
.org 0xe119e
	str r0, [r6, #20]	@ 000e119e 7061
.org 0xe11a0
	adds r0, r6, #0	@ 000e11a0 301c
.org 0xe11a2
	bl 0xe11c8	@ 000e11a2 00f011f8
.org 0xe11a6
	b.n 0xe11c0	@ 000e11a6 0be0
.org 0xe11a8
	.byte 0x64,0x6f,0x86,0x08	@ 000e11a8 data
.org 0xe11ac
	str r4, [r6, #84]	@ 000e11ac 7465
.org 0xe11ae
	str r5, [r6, #88]	@ 000e11ae b565
.org 0xe11b0
	ldr r0, [r6, #96]	@ 000e11b0 306e
.org 0xe11b2
	adds r0, #64	@ 000e11b2 4030
.org 0xe11b4
	str r0, [r6, #96]	@ 000e11b4 3066
.org 0xe11b6
	movs r1, #224	@ 000e11b6 e021
.org 0xe11b8
	lsls r1, r1, #3	@ 000e11b8 c900
.org 0xe11ba
	cmp r0, r1	@ 000e11ba 8842
.org 0xe11bc
	ble.n 0xe11c0	@ 000e11bc 00dd
.org 0xe11be
	str r1, [r6, #96]	@ 000e11be 3166
.org 0xe11c0
	pop {r4, r5, r6}	@ 000e11c0 70bc
