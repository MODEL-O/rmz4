@ FUN_08019f08  entry 0x08019f08  size 76
.thumb
.org 0x19f08
FUN_08019f08:
	push {r4, lr}	@ 00019f08 10b5
.org 0x19f0a
	ldr r0, [pc, #72]	@ 00019f0a 1248
.org 0x19f0c
	ldr r1, [pc, #72]	@ 00019f0c 1249
.org 0x19f0e
	adds r4, r0, r1	@ 00019f0e 4418
.org 0x19f10
	ldr r3, [r4, #0]	@ 00019f10 2368
.org 0x19f12
	cmp r3, #0	@ 00019f12 002b
.org 0x19f14
	beq.n 0x19f4e	@ 00019f14 1bd0
.org 0x19f16
	ldrb r1, [r3, #10]	@ 00019f16 997a
.org 0x19f18
	movs r0, #254	@ 00019f18 fe20
.org 0x19f1a
	ands r0, r1	@ 00019f1a 0840
.org 0x19f1c
	movs r2, #0	@ 00019f1c 0022
.org 0x19f1e
	movs r1, #253	@ 00019f1e fd21
.org 0x19f20
	ands r0, r1	@ 00019f20 0840
.org 0x19f22
	strb r0, [r3, #10]	@ 00019f22 9872
.org 0x19f24
	adds r0, r3, #0	@ 00019f24 181c
.org 0x19f26
	adds r0, #140	@ 00019f26 8c30
.org 0x19f28
	str r2, [r0, #0]	@ 00019f28 0260
.org 0x19f2a
	adds r0, #4	@ 00019f2a 0430
.org 0x19f2c
	str r2, [r0, #0]	@ 00019f2c 0260
.org 0x19f2e
	adds r0, #4	@ 00019f2e 0430
.org 0x19f30
	strb r2, [r0, #0]	@ 00019f30 0270
.org 0x19f32
	ldrb r1, [r3, #10]	@ 00019f32 997a
.org 0x19f34
	movs r0, #251	@ 00019f34 fb20
.org 0x19f36
	ands r0, r1	@ 00019f36 0840
.org 0x19f38
	strb r0, [r3, #10]	@ 00019f38 9872
.org 0x19f3a
	ldr r1, [pc, #32]	@ 00019f3a 0849
.org 0x19f3c
	ldrb r0, [r3, #9]	@ 00019f3c 587a
.org 0x19f3e
	lsls r0, r0, #2	@ 00019f3e 8000
.org 0x19f40
	adds r0, r0, r1	@ 00019f40 4018
.org 0x19f42
	movs r1, #3	@ 00019f42 0321
.org 0x19f44
	str r1, [r3, #12]	@ 00019f44 d960
.org 0x19f46
	ldr r0, [r0, #0]	@ 00019f46 0068
.org 0x19f48
	ldr r0, [r0, #12]	@ 00019f48 c068
.org 0x19f4a
	str r0, [r3, #20]	@ 00019f4a 5861
.org 0x19f4c
	str r2, [r4, #0]	@ 00019f4c 2260
.org 0x19f4e
	pop {r4}	@ 00019f4e 10bc
.org 0x19f50
	pop {r0}	@ 00019f50 01bc
.org 0x19f52
	bx r0	@ 00019f52 0047
