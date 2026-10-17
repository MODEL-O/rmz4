@ FUN_080e0edc  entry 0x080e0edc  size 120
.thumb
.org 0xe0edc
FUN_080e0edc:
	push {r4, r5, r6, r7, lr}	@ 000e0edc f0b5
.org 0xe0ede
	adds r7, r0, #0	@ 000e0ede 071c
.org 0xe0ee0
	ldrb r4, [r7, #10]	@ 000e0ee0 bc7a
.org 0xe0ee2
	lsrs r4, r4, #4	@ 000e0ee2 2409
.org 0xe0ee4
	movs r0, #1	@ 000e0ee4 0120
.org 0xe0ee6
	ands r4, r0	@ 000e0ee6 0440
.org 0xe0ee8
	adds r0, r7, #0	@ 000e0ee8 381c
.org 0xe0eea
	bl 0x1cff0	@ 000e0eea 3cf781f8
.org 0xe0eee
	ldr r5, [r7, #84]	@ 000e0eee 7d6d
.org 0xe0ef0
	ldr r6, [r7, #88]	@ 000e0ef0 be6d
.org 0xe0ef2
	ldr r0, [r7, #92]	@ 000e0ef2 f86d
.org 0xe0ef4
	adds r5, r5, r0	@ 000e0ef4 2d18
.org 0xe0ef6
	ldr r0, [r7, #96]	@ 000e0ef6 386e
.org 0xe0ef8
	adds r1, r0, r6	@ 000e0ef8 8119
.org 0xe0efa
	adds r6, r1, #0	@ 000e0efa 0e1c
.org 0xe0efc
	lsls r4, r4, #1	@ 000e0efc 6400
.org 0xe0efe
	subs r4, #1	@ 000e0efe 013c
.org 0xe0f00
	lsls r0, r4, #1	@ 000e0f00 6000
.org 0xe0f02
	adds r0, r0, r4	@ 000e0f02 0019
.org 0xe0f04
	lsls r0, r0, #10	@ 000e0f04 8002
.org 0xe0f06
	subs r2, r5, r0	@ 000e0f06 2a1a
.org 0xe0f08
	ldrb r0, [r7, #18]	@ 000e0f08 b87c
.org 0xe0f0a
	subs r0, #1	@ 000e0f0a 0138
.org 0xe0f0c
	strb r0, [r7, #18]	@ 000e0f0c b874
.org 0xe0f0e
	lsls r0, r0, #24	@ 000e0f0e 0006
.org 0xe0f10
	cmp r0, #0	@ 000e0f10 0028
.org 0xe0f12
	beq.n 0xe0f20	@ 000e0f12 05d0
.org 0xe0f14
	adds r0, r2, #0	@ 000e0f14 101c
.org 0xe0f16
	bl 0x7c7c	@ 000e0f16 26f7b1fe
.org 0xe0f1a
	lsls r0, r0, #16	@ 000e0f1a 0004
.org 0xe0f1c
	cmp r0, #0	@ 000e0f1c 0028
.org 0xe0f1e
	beq.n 0xe0f40	@ 000e0f1e 0fd0
.org 0xe0f20
	ldr r1, [pc, #24]	@ 000e0f20 0649
.org 0xe0f22
	ldrb r0, [r7, #9]	@ 000e0f22 787a
.org 0xe0f24
	lsls r0, r0, #2	@ 000e0f24 8000
.org 0xe0f26
	adds r0, r0, r1	@ 000e0f26 4018
.org 0xe0f28
	movs r1, #2	@ 000e0f28 0221
.org 0xe0f2a
	str r1, [r7, #12]	@ 000e0f2a f960
.org 0xe0f2c
	ldr r0, [r0, #0]	@ 000e0f2c 0068
.org 0xe0f2e
	ldr r0, [r0, #8]	@ 000e0f2e 8068
.org 0xe0f30
	str r0, [r7, #20]	@ 000e0f30 7861
.org 0xe0f32
	adds r0, r7, #0	@ 000e0f32 381c
.org 0xe0f34
	bl 0xe0f5c	@ 000e0f34 00f012f8
.org 0xe0f38
	b.n 0xe0f54	@ 000e0f38 0ce0
.org 0xe0f3a
	.byte 0x00	@ 000e0f3a data
.org 0xe0f3b
	.byte 0x00	@ 000e0f3b data
.org 0xe0f3c
	.byte 0x64,0x6f,0x86,0x08	@ 000e0f3c data
.org 0xe0f40
	str r5, [r7, #84]	@ 000e0f40 7d65
.org 0xe0f42
	str r6, [r7, #88]	@ 000e0f42 be65
.org 0xe0f44
	ldr r0, [r7, #96]	@ 000e0f44 386e
.org 0xe0f46
	adds r0, #64	@ 000e0f46 4030
.org 0xe0f48
	str r0, [r7, #96]	@ 000e0f48 3866
.org 0xe0f4a
	movs r1, #224	@ 000e0f4a e021
.org 0xe0f4c
	lsls r1, r1, #3	@ 000e0f4c c900
.org 0xe0f4e
	cmp r0, r1	@ 000e0f4e 8842
.org 0xe0f50
	ble.n 0xe0f54	@ 000e0f50 00dd
.org 0xe0f52
	str r1, [r7, #96]	@ 000e0f52 3966
