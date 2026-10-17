@ FUN_0810220c  entry 0x0810220c  size 94
.thumb
.org 0x10220c
FUN_0810220c:
	push {r4, r5, r6, r7, lr}	@ 0010220c f0b5
.org 0x10220e
	mov r7, r8	@ 0010220e 4746
.org 0x102210
	push {r7}	@ 00102210 80b4
.org 0x102212
	sub sp, #8	@ 00102212 82b0
.org 0x102214
	adds r4, r0, #0	@ 00102214 041c
.org 0x102216
	movs r5, #0	@ 00102216 0025
.org 0x102218
	movs r7, #128	@ 00102218 8027
.org 0x10221a
	lsls r7, r7, #5	@ 0010221a 7f01
.org 0x10221c
	mov r8, sp	@ 0010221c e846
.org 0x10221e
	adds r6, r7, #0	@ 0010221e 3e1c
.org 0x102220
	ldr r0, [r4, #84]	@ 00102220 606d
.org 0x102222
	adds r0, r0, r6	@ 00102222 8019
.org 0x102224
	str r0, [sp, #0]	@ 00102224 0090
.org 0x102226
	ldr r0, [r4, #88]	@ 00102226 a06d
.org 0x102228
	adds r0, r0, r7	@ 00102228 c019
.org 0x10222a
	mov r1, r8	@ 0010222a 4146
.org 0x10222c
	str r0, [r1, #4]	@ 0010222c 4860
.org 0x10222e
	lsls r2, r5, #24	@ 0010222e 2a06
.org 0x102230
	lsrs r2, r2, #24	@ 00102230 120e
.org 0x102232
	mov r0, sp	@ 00102232 6846
.org 0x102234
	movs r1, #0	@ 00102234 0021
.org 0x102236
	bl 0xe7824	@ 00102236 e5f7f5fa
.org 0x10223a
	movs r0, #128	@ 0010223a 8020
.org 0x10223c
	lsls r0, r0, #6	@ 0010223c 8001
.org 0x10223e
	adds r6, r6, r0	@ 0010223e 3618
.org 0x102240
	adds r5, #1	@ 00102240 0135
.org 0x102242
	cmp r5, #7	@ 00102242 072d
.org 0x102244
	ble.n 0x102220	@ 00102244 ecdd
.org 0x102246
	ldr r1, [pc, #36]	@ 00102246 0949
.org 0x102248
	ldrb r0, [r4, #9]	@ 00102248 607a
.org 0x10224a
	lsls r0, r0, #2	@ 0010224a 8000
.org 0x10224c
	adds r0, r0, r1	@ 0010224c 4018
.org 0x10224e
	movs r1, #2	@ 0010224e 0221
.org 0x102250
	str r1, [r4, #12]	@ 00102250 e160
.org 0x102252
	ldr r0, [r0, #0]	@ 00102252 0068
.org 0x102254
	ldr r0, [r0, #8]	@ 00102254 8068
.org 0x102256
	str r0, [r4, #20]	@ 00102256 6061
.org 0x102258
	adds r0, r4, #0	@ 00102258 201c
.org 0x10225a
	bl 0x102270	@ 0010225a 00f009f8
.org 0x10225e
	add sp, #8	@ 0010225e 02b0
.org 0x102260
	pop {r3}	@ 00102260 08bc
.org 0x102262
	mov r8, r3	@ 00102262 9846
.org 0x102264
	pop {r4, r5, r6, r7}	@ 00102264 f0bc
.org 0x102266
	pop {r0}	@ 00102266 01bc
.org 0x102268
	bx r0	@ 00102268 0047
