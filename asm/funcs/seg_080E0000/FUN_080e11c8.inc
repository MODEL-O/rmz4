@ FUN_080e11c8  entry 0x080e11c8  size 118
.thumb
.org 0xe11c8
FUN_080e11c8:
	push {r4, r5, lr}	@ 000e11c8 30b5
.org 0xe11ca
	sub sp, #8	@ 000e11ca 82b0
.org 0xe11cc
	adds r4, r0, #0	@ 000e11cc 041c
.org 0xe11ce
	ldrb r5, [r4, #16]	@ 000e11ce 257c
.org 0xe11d0
	ldrb r0, [r4, #15]	@ 000e11d0 e07b
.org 0xe11d2
	cmp r0, #0	@ 000e11d2 0028
.org 0xe11d4
	bne.n 0xe1208	@ 000e11d4 18d1
.org 0xe11d6
	movs r0, #42	@ 000e11d6 2a20
.org 0xe11d8
	bl 0x2b10	@ 000e11d8 21f79afc
.org 0xe11dc
	ldr r0, [r4, #84]	@ 000e11dc 606d
.org 0xe11de
	str r0, [sp, #0]	@ 000e11de 0090
.org 0xe11e0
	ldr r0, [r4, #88]	@ 000e11e0 a06d
.org 0xe11e2
	str r0, [sp, #4]	@ 000e11e2 0190
.org 0xe11e4
	movs r0, #1	@ 000e11e4 0120
.org 0xe11e6
	mov r1, sp	@ 000e11e6 6946
.org 0xe11e8
	bl 0xd0c88	@ 000e11e8 eff74efd
.org 0xe11ec
	adds r0, r4, #0	@ 000e11ec 201c
.org 0xe11ee
	bl 0xe1290	@ 000e11ee 00f04ff8
.org 0xe11f2
	ldrb r1, [r4, #10]	@ 000e11f2 a17a
.org 0xe11f4
	movs r0, #254	@ 000e11f4 fe20
.org 0xe11f6
	ands r0, r1	@ 000e11f6 0840
.org 0xe11f8
	strb r0, [r4, #10]	@ 000e11f8 a072
.org 0xe11fa
	cmp r5, #0	@ 000e11fa 002d
.org 0xe11fc
	beq.n 0xe1224	@ 000e11fc 12d0
.org 0xe11fe
	movs r0, #48	@ 000e11fe 3020
.org 0xe1200
	strb r0, [r4, #18]	@ 000e1200 a074
.org 0xe1202
	ldrb r0, [r4, #15]	@ 000e1202 e07b
.org 0xe1204
	adds r0, #1	@ 000e1204 0130
.org 0xe1206
	strb r0, [r4, #15]	@ 000e1206 e073
.org 0xe1208
	ldrb r0, [r4, #18]	@ 000e1208 a07c
.org 0xe120a
	subs r0, #1	@ 000e120a 0138
.org 0xe120c
	strb r0, [r4, #18]	@ 000e120c a074
.org 0xe120e
	lsls r0, r0, #24	@ 000e120e 0006
.org 0xe1210
	cmp r0, #0	@ 000e1210 0028
.org 0xe1212
	bne.n 0xe1236	@ 000e1212 10d1
.org 0xe1214
	ldr r0, [pc, #40]	@ 000e1214 0a48
.org 0xe1216
	adds r1, r0, #0	@ 000e1216 011c
.org 0xe1218
	adds r1, #38	@ 000e1218 2631
.org 0xe121a
	ldrb r0, [r1, #0]	@ 000e121a 0878
.org 0xe121c
	cmp r0, #0	@ 000e121c 0028
.org 0xe121e
	beq.n 0xe1224	@ 000e121e 01d0
.org 0xe1220
	adds r0, #255	@ 000e1220 ff30
.org 0xe1222
	strb r0, [r1, #0]	@ 000e1222 0870
.org 0xe1224
	ldr r1, [pc, #28]	@ 000e1224 0749
.org 0xe1226
	ldrb r0, [r4, #9]	@ 000e1226 607a
.org 0xe1228
	lsls r0, r0, #2	@ 000e1228 8000
.org 0xe122a
	adds r0, r0, r1	@ 000e122a 4018
.org 0xe122c
	movs r1, #4	@ 000e122c 0421
.org 0xe122e
	str r1, [r4, #12]	@ 000e122e e160
.org 0xe1230
	ldr r0, [r0, #0]	@ 000e1230 0068
.org 0xe1232
	ldr r0, [r0, #16]	@ 000e1232 0069
.org 0xe1234
	str r0, [r4, #20]	@ 000e1234 6061
.org 0xe1236
	add sp, #8	@ 000e1236 02b0
.org 0xe1238
	pop {r4, r5}	@ 000e1238 30bc
.org 0xe123a
	pop {r0}	@ 000e123a 01bc
.org 0xe123c
	bx r0	@ 000e123c 0047
