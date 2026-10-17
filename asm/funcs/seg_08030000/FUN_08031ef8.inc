@ FUN_08031ef8  entry 0x08031ef8  size 102
.thumb
.org 0x31ef8
FUN_08031ef8:
	push {r4, r5, r6, lr}	@ 00031ef8 70b5
.org 0x31efa
	adds r4, r0, #0	@ 00031efa 041c
.org 0x31efc
	movs r0, #161	@ 00031efc a120
.org 0x31efe
	lsls r0, r0, #1	@ 00031efe 4000
.org 0x31f00
	adds r2, r4, r0	@ 00031f00 2218
.org 0x31f02
	ldrb r1, [r2, #0]	@ 00031f02 1178
.org 0x31f04
	movs r0, #3	@ 00031f04 0320
.org 0x31f06
	negs r0, r0	@ 00031f06 4042
.org 0x31f08
	ands r0, r1	@ 00031f08 0840
.org 0x31f0a
	strb r0, [r2, #0]	@ 00031f0a 1070
.org 0x31f0c
	ldr r1, [pc, #80]	@ 00031f0c 1449
.org 0x31f0e
	ldrb r0, [r4, #14]	@ 00031f0e a07b
.org 0x31f10
	lsls r0, r0, #2	@ 00031f10 8000
.org 0x31f12
	adds r0, r0, r1	@ 00031f12 4018
.org 0x31f14
	ldr r1, [r0, #0]	@ 00031f14 0168
.org 0x31f16
	adds r0, r4, #0	@ 00031f16 201c
.org 0x31f18
	bl 0x128f80	@ 00031f18 f7f032f8
.org 0x31f1c
	movs r0, #186	@ 00031f1c ba20
.org 0x31f1e
	lsls r0, r0, #1	@ 00031f1e 4000
.org 0x31f20
	adds r5, r4, r0	@ 00031f20 2518
.org 0x31f22
	ldrb r1, [r5, #0]	@ 00031f22 2978
.org 0x31f24
	lsls r1, r1, #3	@ 00031f24 c900
.org 0x31f26
	ldr r6, [pc, #60]	@ 00031f26 0f4e
.org 0x31f28
	adds r1, r1, r6	@ 00031f28 8919
.org 0x31f2a
	adds r0, r4, #0	@ 00031f2a 201c
.org 0x31f2c
	movs r2, #0	@ 00031f2c 0022
.org 0x31f2e
	bl 0x2bfe8	@ 00031f2e faf75bf8
.org 0x31f32
	lsls r0, r0, #16	@ 00031f32 0004
.org 0x31f34
	cmp r0, #0	@ 00031f34 0028
.org 0x31f36
	bne.n 0x31f4c	@ 00031f36 09d1
.org 0x31f38
	ldrb r1, [r5, #0]	@ 00031f38 2978
.org 0x31f3a
	lsls r1, r1, #3	@ 00031f3a c900
.org 0x31f3c
	adds r1, r1, r6	@ 00031f3c 8919
.org 0x31f3e
	adds r0, r4, #0	@ 00031f3e 201c
.org 0x31f40
	movs r2, #1	@ 00031f40 0122
.org 0x31f42
	bl 0x2c2d4	@ 00031f42 faf7c7f9
.org 0x31f46
	lsls r0, r0, #16	@ 00031f46 0004
.org 0x31f48
	cmp r0, #0	@ 00031f48 0028
.org 0x31f4a
	beq.n 0x31f58	@ 00031f4a 05d0
.org 0x31f4c
	movs r0, #0	@ 00031f4c 0020
.org 0x31f4e
	movs r1, #1	@ 00031f4e 0121
.org 0x31f50
	strb r1, [r4, #13]	@ 00031f50 6173
.org 0x31f52
	movs r1, #2	@ 00031f52 0221
.org 0x31f54
	strb r1, [r4, #14]	@ 00031f54 a173
.org 0x31f56
	strb r0, [r4, #15]	@ 00031f56 e073
.org 0x31f58
	pop {r4, r5, r6}	@ 00031f58 70bc
.org 0x31f5a
	pop {r0}	@ 00031f5a 01bc
.org 0x31f5c
	bx r0	@ 00031f5c 0047
