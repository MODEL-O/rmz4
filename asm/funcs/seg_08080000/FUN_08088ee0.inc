@ FUN_08088ee0  entry 0x08088ee0  size 264
.thumb
.org 0x88ee0
FUN_08088ee0:
	push {r4, r5, r6, r7, lr}	@ 00088ee0 f0b5
.org 0x88ee2
	mov r7, sl	@ 00088ee2 5746
.org 0x88ee4
	mov r6, r9	@ 00088ee4 4e46
.org 0x88ee6
	mov r5, r8	@ 00088ee6 4546
.org 0x88ee8
	push {r5, r6, r7}	@ 00088ee8 e0b4
.org 0x88eea
	sub sp, #16	@ 00088eea 84b0
.org 0x88eec
	str r0, [sp, #0]	@ 00088eec 0090
.org 0x88eee
	ldrb r0, [r0, #10]	@ 00088eee 807a
.org 0x88ef0
	lsrs r0, r0, #5	@ 00088ef0 4009
.org 0x88ef2
	mov r9, r0	@ 00088ef2 8146
.org 0x88ef4
	movs r2, #1	@ 00088ef4 0122
.org 0x88ef6
	ands r0, r2	@ 00088ef6 1040
.org 0x88ef8
	mov r9, r0	@ 00088ef8 8146
.org 0x88efa
	ldr r3, [sp, #0]	@ 00088efa 009b
.org 0x88efc
	ldr r0, [r3, #88]	@ 00088efc 986d
.org 0x88efe
	adds r7, r0, r1	@ 00088efe 4718
.org 0x88f00
	str r7, [sp, #4]	@ 00088f00 0197
.org 0x88f02
	ldr r0, [r3, #84]	@ 00088f02 586d
.org 0x88f04
	ldr r3, [pc, #80]	@ 00088f04 144b
.org 0x88f06
	adds r3, r3, r0	@ 00088f06 1b18
.org 0x88f08
	mov sl, r3	@ 00088f08 9a46
.org 0x88f0a
	cmp r1, #0	@ 00088f0a 0029
.org 0x88f0c
	bge.n 0x88f5c	@ 00088f0c 26da
.org 0x88f0e
	mov r1, r9	@ 00088f0e 4946
.org 0x88f10
	adds r1, #1	@ 00088f10 0131
.org 0x88f12
	ands r1, r2	@ 00088f12 1140
.org 0x88f14
	lsls r0, r1, #1	@ 00088f14 4800
.org 0x88f16
	adds r0, r0, r1	@ 00088f16 4018
.org 0x88f18
	lsls r0, r0, #10	@ 00088f18 8002
.org 0x88f1a
	subs r5, r7, r0	@ 00088f1a 3d1a
.org 0x88f1c
	mov r9, r0	@ 00088f1c 8146
.org 0x88f1e
	mov r6, sl	@ 00088f1e 5646
.org 0x88f20
	mov r8, r2	@ 00088f20 9046
.org 0x88f22
	adds r0, r6, #0	@ 00088f22 301c
.org 0x88f24
	adds r1, r5, #0	@ 00088f24 291c
.org 0x88f26
	bl 0x7c7c	@ 00088f26 7ef7a9fe
.org 0x88f2a
	lsls r0, r0, #16	@ 00088f2a 0004
.org 0x88f2c
	cmp r0, #0	@ 00088f2c 0028
.org 0x88f2e
	beq.n 0x88f42	@ 00088f2e 08d0
.org 0x88f30
	adds r0, r6, #0	@ 00088f30 301c
.org 0x88f32
	adds r1, r5, #0	@ 00088f32 291c
.org 0x88f34
	bl 0x8748	@ 00088f34 7ff708fc
.org 0x88f38
	adds r2, r0, #0	@ 00088f38 021c
.org 0x88f3a
	add r2, r9	@ 00088f3a 4a44
.org 0x88f3c
	cmp r2, r7	@ 00088f3c ba42
.org 0x88f3e
	ble.n 0x88f42	@ 00088f3e 00dd
.org 0x88f40
	adds r7, r2, #0	@ 00088f40 171c
.org 0x88f42
	movs r0, #128	@ 00088f42 8020
.org 0x88f44
	lsls r0, r0, #5	@ 00088f44 4001
.org 0x88f46
	adds r6, r6, r0	@ 00088f46 3618
.org 0x88f48
	movs r2, #1	@ 00088f48 0122
.org 0x88f4a
	negs r2, r2	@ 00088f4a 5242
.org 0x88f4c
	add r8, r2	@ 00088f4c 9044
.org 0x88f4e
	mov r3, r8	@ 00088f4e 4346
.org 0x88f50
	cmp r3, #0	@ 00088f50 002b
.org 0x88f52
	bge.n 0x88f22	@ 00088f52 e6da
.org 0x88f54
	b.n 0x88fce	@ 00088f54 3be0
.org 0x88f56
	.byte 0x00	@ 00088f56 data
.org 0x88f57
	.byte 0x00	@ 00088f57 data
.org 0x88f58
	.byte 0x00,0xf8,0xff,0xff	@ 00088f58 data
.org 0x88f5c
	mov r0, r9	@ 00088f5c 4846
.org 0x88f5e
	lsls r1, r0, #1	@ 00088f5e 4100
.org 0x88f60
	adds r0, r1, r0	@ 00088f60 0818
.org 0x88f62
	lsls r0, r0, #10	@ 00088f62 8002
.org 0x88f64
	adds r5, r7, r0	@ 00088f64 3d18
.org 0x88f66
	str r1, [sp, #12]	@ 00088f66 0391
.org 0x88f68
	str r0, [sp, #8]	@ 00088f68 0290
.org 0x88f6a
	mov r6, sl	@ 00088f6a 5646
.org 0x88f6c
	movs r2, #1	@ 00088f6c 0122
.org 0x88f6e
	mov r8, r2	@ 00088f6e 9046
.org 0x88f70
	adds r0, r6, #0	@ 00088f70 301c
.org 0x88f72
	adds r1, r5, #0	@ 00088f72 291c
.org 0x88f74
	bl 0x7c7c	@ 00088f74 7ef782fe
.org 0x88f78
	lsls r0, r0, #16	@ 00088f78 0004
.org 0x88f7a
	cmp r0, #0	@ 00088f7a 0028
.org 0x88f7c
	beq.n 0x88f92	@ 00088f7c 09d0
.org 0x88f7e
	adds r0, r6, #0	@ 00088f7e 301c
.org 0x88f80
	adds r1, r5, #0	@ 00088f80 291c
.org 0x88f82
	bl 0x8534	@ 00088f82 7ff7d7fa
.org 0x88f86
	adds r2, r0, #0	@ 00088f86 021c
.org 0x88f88
	ldr r3, [sp, #8]	@ 00088f88 029b
.org 0x88f8a
	subs r2, r2, r3	@ 00088f8a d21a
.org 0x88f8c
	cmp r2, r7	@ 00088f8c ba42
.org 0x88f8e
	bge.n 0x88f92	@ 00088f8e 00da
.org 0x88f90
	adds r7, r2, #0	@ 00088f90 171c
.org 0x88f92
	movs r0, #128	@ 00088f92 8020
.org 0x88f94
	lsls r0, r0, #5	@ 00088f94 4001
.org 0x88f96
	adds r6, r6, r0	@ 00088f96 3618
.org 0x88f98
	movs r2, #1	@ 00088f98 0122
.org 0x88f9a
	negs r2, r2	@ 00088f9a 5242
.org 0x88f9c
	add r8, r2	@ 00088f9c 9044
.org 0x88f9e
	mov r3, r8	@ 00088f9e 4346
.org 0x88fa0
	cmp r3, #0	@ 00088fa0 002b
.org 0x88fa2
	bge.n 0x88f70	@ 00088fa2 e5da
.org 0x88fa4
	adds r6, r0, #0	@ 00088fa4 061c
.org 0x88fa6
	add r6, sl	@ 00088fa6 5644
.org 0x88fa8
	adds r0, r6, #0	@ 00088fa8 301c
.org 0x88faa
	adds r1, r5, #0	@ 00088faa 291c
.org 0x88fac
	bl 0x7c7c	@ 00088fac 7ef766fe
.org 0x88fb0
	lsls r0, r0, #16	@ 00088fb0 0004
.org 0x88fb2
	cmp r0, #0	@ 00088fb2 0028
.org 0x88fb4
	beq.n 0x88fce	@ 00088fb4 0bd0
.org 0x88fb6
	adds r0, r6, #0	@ 00088fb6 301c
.org 0x88fb8
	adds r1, r5, #0	@ 00088fb8 291c
.org 0x88fba
	bl 0x8534	@ 00088fba 7ff7bbfa
.org 0x88fbe
	adds r2, r0, #0	@ 00088fbe 021c
.org 0x88fc0
	ldr r0, [sp, #12]	@ 00088fc0 0398
.org 0x88fc2
	add r0, r9	@ 00088fc2 4844
.org 0x88fc4
	lsls r0, r0, #10	@ 00088fc4 8002
.org 0x88fc6
	subs r2, r2, r0	@ 00088fc6 121a
.org 0x88fc8
	cmp r2, r7	@ 00088fc8 ba42
.org 0x88fca
	bge.n 0x88fce	@ 00088fca 00da
.org 0x88fcc
	adds r7, r2, #0	@ 00088fcc 171c
.org 0x88fce
	ldr r0, [sp, #0]	@ 00088fce 0098
.org 0x88fd0
	str r7, [r0, #88]	@ 00088fd0 8765
.org 0x88fd2
	ldr r2, [sp, #4]	@ 00088fd2 019a
.org 0x88fd4
	cmp r7, r2	@ 00088fd4 9742
.org 0x88fd6
	bne.n 0x88fdc	@ 00088fd6 01d1
.org 0x88fd8
	movs r0, #0	@ 00088fd8 0020
.org 0x88fda
	b.n 0x88fde	@ 00088fda 00e0
.org 0x88fdc
	movs r0, #1	@ 00088fdc 0120
.org 0x88fde
	add sp, #16	@ 00088fde 04b0
.org 0x88fe0
	pop {r3, r4, r5}	@ 00088fe0 38bc
.org 0x88fe2
	mov r8, r3	@ 00088fe2 9846
.org 0x88fe4
	mov r9, r4	@ 00088fe4 a146
.org 0x88fe6
	mov sl, r5	@ 00088fe6 aa46
