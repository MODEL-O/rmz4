@ FUN_08110288  entry 0x08110288  size 114
.thumb
.org 0x110288
FUN_08110288:
	push {r4, r5, r6, r7, lr}	@ 00110288 f0b5
.org 0x11028a
	adds r3, r0, #0	@ 0011028a 031c
.org 0x11028c
	movs r0, #148	@ 0011028c 9420
.org 0x11028e
	lsls r0, r0, #2	@ 0011028e 8000
.org 0x110290
	adds r7, r3, r0	@ 00110290 1f18
.org 0x110292
	ldrh r5, [r7, #0]	@ 00110292 3d88
.org 0x110294
	ldr r1, [pc, #100]	@ 00110294 1949
.org 0x110296
	adds r6, r3, r1	@ 00110296 5e18
.org 0x110298
	ldr r2, [pc, #100]	@ 00110298 194a
.org 0x11029a
	adds r2, r2, r3	@ 0011029a d218
.org 0x11029c
	mov ip, r2	@ 0011029c 9446
.org 0x11029e
	ldrb r0, [r6, #0]	@ 0011029e 3078
.org 0x1102a0
	ldrb r1, [r2, #0]	@ 001102a0 1178
.org 0x1102a2
	cmp r0, r1	@ 001102a2 8842
.org 0x1102a4
	bne.n 0x1102dc	@ 001102a4 1ad1
.org 0x1102a6
	ldr r2, [pc, #92]	@ 001102a6 174a
.org 0x1102a8
	ldrh r1, [r3, #18]	@ 001102a8 598a
.org 0x1102aa
	lsrs r1, r1, #1	@ 001102aa 4908
.org 0x1102ac
	movs r0, #3	@ 001102ac 0320
.org 0x1102ae
	ands r1, r0	@ 001102ae 0140
.org 0x1102b0
	lsls r1, r1, #2	@ 001102b0 8900
.org 0x1102b2
	adds r2, r1, r2	@ 001102b2 8a18
.org 0x1102b4
	movs r0, #147	@ 001102b4 9320
.org 0x1102b6
	lsls r0, r0, #2	@ 001102b6 8000
.org 0x1102b8
	adds r3, r3, r0	@ 001102b8 1b18
.org 0x1102ba
	ldrh r4, [r3, #0]	@ 001102ba 1c88
.org 0x1102bc
	ldr r2, [r2, #0]	@ 001102bc 1268
.org 0x1102be
	lsls r0, r4, #1	@ 001102be 6000
.org 0x1102c0
	adds r0, r0, r2	@ 001102c0 8018
.org 0x1102c2
	ldrh r5, [r0, #0]	@ 001102c2 0588
.org 0x1102c4
	ldr r0, [pc, #64]	@ 001102c4 1048
.org 0x1102c6
	adds r1, r1, r0	@ 001102c6 0918
.org 0x1102c8
	ldr r0, [r1, #0]	@ 001102c8 0868
.org 0x1102ca
	adds r0, r0, r4	@ 001102ca 0019
.org 0x1102cc
	ldrb r0, [r0, #0]	@ 001102cc 0078
.org 0x1102ce
	movs r1, #0	@ 001102ce 0021
.org 0x1102d0
	mov r2, ip	@ 001102d0 6246
.org 0x1102d2
	strb r0, [r2, #0]	@ 001102d2 1070
.org 0x1102d4
	strb r1, [r6, #0]	@ 001102d4 3170
.org 0x1102d6
	ldrh r0, [r3, #0]	@ 001102d6 1888
.org 0x1102d8
	adds r0, #1	@ 001102d8 0130
.org 0x1102da
	strh r0, [r3, #0]	@ 001102da 1880
.org 0x1102dc
	ldrb r0, [r6, #0]	@ 001102dc 3078
.org 0x1102de
	adds r0, #1	@ 001102de 0130
.org 0x1102e0
	movs r3, #0	@ 001102e0 0023
.org 0x1102e2
	strb r0, [r6, #0]	@ 001102e2 3070
.org 0x1102e4
	ldr r1, [pc, #36]	@ 001102e4 0949
.org 0x1102e6
	strh r5, [r1, #0]	@ 001102e6 0d80
.org 0x1102e8
	ldrh r2, [r7, #0]	@ 001102e8 3a88
.org 0x1102ea
	adds r0, r5, #0	@ 001102ea 281c
.org 0x1102ec
	bics r0, r2	@ 001102ec 9043
.org 0x1102ee
	strh r0, [r1, #4]	@ 001102ee 8880
.org 0x1102f0
	strh r3, [r1, #6]	@ 001102f0 cb80
.org 0x1102f2
	strh r5, [r7, #0]	@ 001102f2 3d80
.org 0x1102f4
	pop {r4, r5, r6, r7}	@ 001102f4 f0bc
.org 0x1102f6
	pop {r0}	@ 001102f6 01bc
.org 0x1102f8
	bx r0	@ 001102f8 0047
