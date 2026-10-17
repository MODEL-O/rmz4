@ FUN_080b0ed4  entry 0x080b0ed4  size 154
.thumb
.org 0xb0ed4
FUN_080b0ed4:
	push {r4, r5, r6, lr}	@ 000b0ed4 70b5
.org 0xb0ed6
	adds r4, r0, #0	@ 000b0ed6 041c
.org 0xb0ed8
	adds r0, #180	@ 000b0ed8 b430
.org 0xb0eda
	ldr r5, [r0, #0]	@ 000b0eda 0568
.org 0xb0edc
	ldr r6, [r0, #4]	@ 000b0edc 4668
.org 0xb0ede
	ldrb r0, [r4, #15]	@ 000b0ede e07b
.org 0xb0ee0
	cmp r0, #0	@ 000b0ee0 0028
.org 0xb0ee2
	bne.n 0xb0f0a	@ 000b0ee2 12d1
.org 0xb0ee4
	ldr r1, [pc, #136]	@ 000b0ee4 2249
.org 0xb0ee6
	adds r0, r4, #0	@ 000b0ee6 201c
.org 0xb0ee8
	bl 0x1cf00	@ 000b0ee8 6cf70af8
.org 0xb0eec
	ldr r0, [r4, #84]	@ 000b0eec 606d
.org 0xb0eee
	ldr r1, [r4, #88]	@ 000b0eee a16d
.org 0xb0ef0
	str r0, [r4, #100]	@ 000b0ef0 6066
.org 0xb0ef2
	str r1, [r4, #104]	@ 000b0ef2 a166
.org 0xb0ef4
	ldr r0, [r4, #84]	@ 000b0ef4 606d
.org 0xb0ef6
	subs r0, r5, r0	@ 000b0ef6 281a
.org 0xb0ef8
	str r0, [r4, #92]	@ 000b0ef8 e065
.org 0xb0efa
	ldr r0, [r4, #88]	@ 000b0efa a06d
.org 0xb0efc
	subs r0, r6, r0	@ 000b0efc 301a
.org 0xb0efe
	str r0, [r4, #96]	@ 000b0efe 2066
.org 0xb0f00
	movs r0, #96	@ 000b0f00 6020
.org 0xb0f02
	strb r0, [r4, #18]	@ 000b0f02 a074
.org 0xb0f04
	ldrb r0, [r4, #15]	@ 000b0f04 e07b
.org 0xb0f06
	adds r0, #1	@ 000b0f06 0130
.org 0xb0f08
	strb r0, [r4, #15]	@ 000b0f08 e073
.org 0xb0f0a
	adds r0, r4, #0	@ 000b0f0a 201c
.org 0xb0f0c
	bl 0x1d134	@ 000b0f0c 6cf712f9
.org 0xb0f10
	ldrb r0, [r4, #18]	@ 000b0f10 a07c
.org 0xb0f12
	subs r0, #1	@ 000b0f12 0138
.org 0xb0f14
	strb r0, [r4, #18]	@ 000b0f14 a074
.org 0xb0f16
	adds r0, r4, #0	@ 000b0f16 201c
.org 0xb0f18
	bl 0xb1004	@ 000b0f18 00f074f8
.org 0xb0f1c
	ldrb r1, [r4, #18]	@ 000b0f1c a17c
.org 0xb0f1e
	movs r0, #96	@ 000b0f1e 6020
.org 0xb0f20
	subs r0, r0, r1	@ 000b0f20 401a
.org 0xb0f22
	lsls r0, r0, #6	@ 000b0f22 8001
.org 0xb0f24
	movs r1, #96	@ 000b0f24 6021
.org 0xb0f26
	bl 0x128fb8	@ 000b0f26 78f047f8
.org 0xb0f2a
	ldr r1, [pc, #72]	@ 000b0f2a 1249
.org 0xb0f2c
	lsls r0, r0, #24	@ 000b0f2c 0006
.org 0xb0f2e
	lsrs r0, r0, #23	@ 000b0f2e c00d
.org 0xb0f30
	adds r0, r0, r1	@ 000b0f30 4018
.org 0xb0f32
	movs r1, #0	@ 000b0f32 0021
.org 0xb0f34
	ldrsh r2, [r0, r1]	@ 000b0f34 425e
.org 0xb0f36
	ldr r0, [r4, #92]	@ 000b0f36 e06d
.org 0xb0f38
	muls r0, r2	@ 000b0f38 5043
.org 0xb0f3a
	cmp r0, #0	@ 000b0f3a 0028
.org 0xb0f3c
	bge.n 0xb0f40	@ 000b0f3c 00da
.org 0xb0f3e
	adds r0, #255	@ 000b0f3e ff30
.org 0xb0f40
	asrs r0, r0, #8	@ 000b0f40 0012
.org 0xb0f42
	ldr r1, [r4, #100]	@ 000b0f42 616e
.org 0xb0f44
	adds r1, r1, r0	@ 000b0f44 0918
.org 0xb0f46
	str r1, [r4, #84]	@ 000b0f46 6165
.org 0xb0f48
	ldr r0, [r4, #96]	@ 000b0f48 206e
.org 0xb0f4a
	muls r0, r2	@ 000b0f4a 5043
.org 0xb0f4c
	cmp r0, #0	@ 000b0f4c 0028
.org 0xb0f4e
	bge.n 0xb0f52	@ 000b0f4e 00da
.org 0xb0f50
	adds r0, #255	@ 000b0f50 ff30
.org 0xb0f52
	asrs r1, r0, #8	@ 000b0f52 0112
.org 0xb0f54
	ldr r0, [r4, #104]	@ 000b0f54 a06e
.org 0xb0f56
	adds r0, r0, r1	@ 000b0f56 4018
.org 0xb0f58
	str r0, [r4, #88]	@ 000b0f58 a065
.org 0xb0f5a
	ldrb r1, [r4, #18]	@ 000b0f5a a17c
.org 0xb0f5c
	cmp r1, #0	@ 000b0f5c 0029
.org 0xb0f5e
	bne.n 0xb0f68	@ 000b0f5e 03d1
.org 0xb0f60
	movs r0, #1	@ 000b0f60 0120
.org 0xb0f62
	strb r0, [r4, #13]	@ 000b0f62 6073
.org 0xb0f64
	strb r1, [r4, #14]	@ 000b0f64 a173
.org 0xb0f66
	strb r1, [r4, #15]	@ 000b0f66 e173
.org 0xb0f68
	pop {r4, r5, r6}	@ 000b0f68 70bc
.org 0xb0f6a
	pop {r0}	@ 000b0f6a 01bc
.org 0xb0f6c
	bx r0	@ 000b0f6c 0047
