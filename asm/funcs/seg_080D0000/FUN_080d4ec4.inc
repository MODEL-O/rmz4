@ FUN_080d4ec4  entry 0x080d4ec4  size 166
.thumb
.org 0xd4ec4
FUN_080d4ec4:
	push {r4, r5, lr}	@ 000d4ec4 30b5
.org 0xd4ec6
	adds r4, r0, #0	@ 000d4ec6 041c
.org 0xd4ec8
	ldr r5, [r4, #124]	@ 000d4ec8 e56f
.org 0xd4eca
	ldrb r1, [r5, #3]	@ 000d4eca e978
.org 0xd4ecc
	movs r0, #1	@ 000d4ecc 0120
.org 0xd4ece
	ands r0, r1	@ 000d4ece 0840
.org 0xd4ed0
	cmp r0, #0	@ 000d4ed0 0028
.org 0xd4ed2
	beq.n 0xd4ede	@ 000d4ed2 04d0
.org 0xd4ed4
	adds r1, r4, #0	@ 000d4ed4 211c
.org 0xd4ed6
	adds r1, #84	@ 000d4ed6 5431
.org 0xd4ed8
	movs r0, #3	@ 000d4ed8 0320
.org 0xd4eda
	bl 0xd0c88	@ 000d4eda fbf7d5fe
.org 0xd4ede
	ldrb r1, [r5, #3]	@ 000d4ede e978
.org 0xd4ee0
	movs r0, #2	@ 000d4ee0 0220
.org 0xd4ee2
	ands r0, r1	@ 000d4ee2 0840
.org 0xd4ee4
	cmp r0, #0	@ 000d4ee4 0028
.org 0xd4ee6
	beq.n 0xd4ef2	@ 000d4ee6 04d0
.org 0xd4ee8
	adds r1, r4, #0	@ 000d4ee8 211c
.org 0xd4eea
	adds r1, #84	@ 000d4eea 5431
.org 0xd4eec
	movs r0, #2	@ 000d4eec 0220
.org 0xd4eee
	bl 0xd0c88	@ 000d4eee fbf7cbfe
.org 0xd4ef2
	ldrb r1, [r5, #3]	@ 000d4ef2 e978
.org 0xd4ef4
	movs r0, #4	@ 000d4ef4 0420
.org 0xd4ef6
	ands r0, r1	@ 000d4ef6 0840
.org 0xd4ef8
	cmp r0, #0	@ 000d4ef8 0028
.org 0xd4efa
	beq.n 0xd4f2a	@ 000d4efa 16d0
.org 0xd4efc
	adds r1, r4, #0	@ 000d4efc 211c
.org 0xd4efe
	adds r1, #84	@ 000d4efe 5431
.org 0xd4f00
	movs r0, #1	@ 000d4f00 0120
.org 0xd4f02
	bl 0xd0c88	@ 000d4f02 fbf7c1fe
.org 0xd4f06
	ldr r0, [pc, #20]	@ 000d4f06 0548
.org 0xd4f08
	ldr r1, [pc, #20]	@ 000d4f08 0549
.org 0xd4f0a
	adds r0, r0, r1	@ 000d4f0a 4018
.org 0xd4f0c
	ldr r1, [r4, #88]	@ 000d4f0c a16d
.org 0xd4f0e
	ldr r0, [r0, #0]	@ 000d4f0e 0068
.org 0xd4f10
	cmp r1, r0	@ 000d4f10 8142
.org 0xd4f12
	ble.n 0xd4f24	@ 000d4f12 07dd
.org 0xd4f14
	movs r0, #49	@ 000d4f14 3120
.org 0xd4f16
	bl 0x2b10	@ 000d4f16 2df7fbfd
.org 0xd4f1a
	b.n 0xd4f2a	@ 000d4f1a 06e0
.org 0xd4f1c
	.byte 0xb0,0x0a,0x00,0x02	@ 000d4f1c data
.org 0xd4f20
	.byte 0x0c,0xc0,0x02,0x00	@ 000d4f20 data
.org 0xd4f24
	movs r0, #42	@ 000d4f24 2a20
.org 0xd4f26
	bl 0x2b10	@ 000d4f26 2df7f3fd
.org 0xd4f2a
	ldrb r1, [r5, #3]	@ 000d4f2a e978
.org 0xd4f2c
	movs r0, #8	@ 000d4f2c 0820
.org 0xd4f2e
	ands r0, r1	@ 000d4f2e 0840
.org 0xd4f30
	cmp r0, #0	@ 000d4f30 0028
.org 0xd4f32
	beq.n 0xd4f62	@ 000d4f32 16d0
.org 0xd4f34
	adds r1, r4, #0	@ 000d4f34 211c
.org 0xd4f36
	adds r1, #84	@ 000d4f36 5431
.org 0xd4f38
	movs r0, #1	@ 000d4f38 0120
.org 0xd4f3a
	bl 0xd0c88	@ 000d4f3a fbf7a5fe
.org 0xd4f3e
	ldr r0, [pc, #20]	@ 000d4f3e 0548
.org 0xd4f40
	ldr r1, [pc, #20]	@ 000d4f40 0549
.org 0xd4f42
	adds r0, r0, r1	@ 000d4f42 4018
.org 0xd4f44
	ldr r1, [r4, #88]	@ 000d4f44 a16d
.org 0xd4f46
	ldr r0, [r0, #0]	@ 000d4f46 0068
.org 0xd4f48
	cmp r1, r0	@ 000d4f48 8142
.org 0xd4f4a
	ble.n 0xd4f5c	@ 000d4f4a 07dd
.org 0xd4f4c
	movs r0, #49	@ 000d4f4c 3120
.org 0xd4f4e
	bl 0x2b10	@ 000d4f4e 2df7dffd
.org 0xd4f52
	b.n 0xd4f62	@ 000d4f52 06e0
.org 0xd4f54
	.byte 0xb0,0x0a,0x00,0x02	@ 000d4f54 data
.org 0xd4f58
	.byte 0x0c,0xc0,0x02,0x00	@ 000d4f58 data
.org 0xd4f5c
	movs r0, #53	@ 000d4f5c 3520
.org 0xd4f5e
	bl 0x2b10	@ 000d4f5e 2df7d7fd
.org 0xd4f62
	ldr r1, [pc, #24]	@ 000d4f62 0649
.org 0xd4f64
	ldrb r0, [r4, #9]	@ 000d4f64 607a
.org 0xd4f66
	lsls r0, r0, #2	@ 000d4f66 8000
.org 0xd4f68
	adds r0, r0, r1	@ 000d4f68 4018
