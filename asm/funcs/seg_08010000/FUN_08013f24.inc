@ FUN_08013f24  entry 0x08013f24  size 90
.thumb
.org 0x13f24
FUN_08013f24:
	push {lr}	@ 00013f24 00b5
.org 0x13f26
	ldr r0, [pc, #88]	@ 00013f26 1648
.org 0x13f28
	ldr r1, [pc, #88]	@ 00013f28 1649
.org 0x13f2a
	adds r0, r0, r1	@ 00013f2a 4018
.org 0x13f2c
	ldr r3, [r0, #0]	@ 00013f2c 0368
.org 0x13f2e
	cmp r3, #0	@ 00013f2e 002b
.org 0x13f30
	beq.n 0x13f68	@ 00013f30 1ad0
.org 0x13f32
	ldrb r1, [r3, #10]	@ 00013f32 997a
.org 0x13f34
	movs r0, #254	@ 00013f34 fe20
.org 0x13f36
	ands r0, r1	@ 00013f36 0840
.org 0x13f38
	movs r2, #0	@ 00013f38 0022
.org 0x13f3a
	movs r1, #253	@ 00013f3a fd21
.org 0x13f3c
	ands r0, r1	@ 00013f3c 0840
.org 0x13f3e
	strb r0, [r3, #10]	@ 00013f3e 9872
.org 0x13f40
	adds r0, r3, #0	@ 00013f40 181c
.org 0x13f42
	adds r0, #140	@ 00013f42 8c30
.org 0x13f44
	str r2, [r0, #0]	@ 00013f44 0260
.org 0x13f46
	adds r0, #4	@ 00013f46 0430
.org 0x13f48
	str r2, [r0, #0]	@ 00013f48 0260
.org 0x13f4a
	adds r0, #4	@ 00013f4a 0430
.org 0x13f4c
	strb r2, [r0, #0]	@ 00013f4c 0270
.org 0x13f4e
	ldrb r1, [r3, #10]	@ 00013f4e 997a
.org 0x13f50
	movs r0, #251	@ 00013f50 fb20
.org 0x13f52
	ands r0, r1	@ 00013f52 0840
.org 0x13f54
	strb r0, [r3, #10]	@ 00013f54 9872
.org 0x13f56
	ldr r1, [pc, #48]	@ 00013f56 0c49
.org 0x13f58
	ldrb r0, [r3, #9]	@ 00013f58 587a
.org 0x13f5a
	lsls r0, r0, #2	@ 00013f5a 8000
.org 0x13f5c
	adds r0, r0, r1	@ 00013f5c 4018
.org 0x13f5e
	movs r1, #3	@ 00013f5e 0321
.org 0x13f60
	str r1, [r3, #12]	@ 00013f60 d960
.org 0x13f62
	ldr r0, [r0, #0]	@ 00013f62 0068
.org 0x13f64
	ldr r0, [r0, #12]	@ 00013f64 c068
.org 0x13f66
	str r0, [r3, #20]	@ 00013f66 5861
.org 0x13f68
	movs r0, #84	@ 00013f68 5420
.org 0x13f6a
	bl 0x2624	@ 00013f6a eef75bfb
.org 0x13f6e
	movs r0, #85	@ 00013f6e 5520
.org 0x13f70
	bl 0x2624	@ 00013f70 eef758fb
.org 0x13f74
	movs r0, #135	@ 00013f74 8720
.org 0x13f76
	bl 0x2624	@ 00013f76 eef755fb
.org 0x13f7a
	pop {r0}	@ 00013f7a 01bc
.org 0x13f7c
	bx r0	@ 00013f7c 0047
