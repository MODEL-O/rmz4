@ FUN_080e6f2c  entry 0x080e6f2c  size 280
.thumb
.org 0xe6f2c
FUN_080e6f2c:
	push {r4, r5, r6, lr}	@ 000e6f2c 70b5
.org 0xe6f2e
	sub sp, #8	@ 000e6f2e 82b0
.org 0xe6f30
	adds r6, r0, #0	@ 000e6f30 061c
.org 0xe6f32
	ldrb r0, [r6, #17]	@ 000e6f32 707c
.org 0xe6f34
	cmp r0, #0	@ 000e6f34 0028
.org 0xe6f36
	bne.n 0xe6fb4	@ 000e6f36 3dd1
.org 0xe6f38
	ldrb r0, [r6, #18]	@ 000e6f38 b07c
.org 0xe6f3a
	cmp r0, #0	@ 000e6f3a 0028
.org 0xe6f3c
	bne.n 0xe6f9c	@ 000e6f3c 2ed1
.org 0xe6f3e
	ldr r0, [r6, #84]	@ 000e6f3e 706d
.org 0xe6f40
	str r0, [sp, #0]	@ 000e6f40 0090
.org 0xe6f42
	ldr r0, [r6, #88]	@ 000e6f42 b06d
.org 0xe6f44
	ldr r1, [pc, #92]	@ 000e6f44 1749
.org 0xe6f46
	adds r0, r0, r1	@ 000e6f46 4018
.org 0xe6f48
	str r0, [sp, #4]	@ 000e6f48 0190
.org 0xe6f4a
	movs r0, #1	@ 000e6f4a 0120
.org 0xe6f4c
	mov r1, sp	@ 000e6f4c 6946
.org 0xe6f4e
	bl 0xd0c88	@ 000e6f4e e9f79bfe
.org 0xe6f52
	movs r0, #167	@ 000e6f52 a720
.org 0xe6f54
	bl 0x2b10	@ 000e6f54 1bf7dcfd
.org 0xe6f58
	adds r5, r6, #0	@ 000e6f58 351c
.org 0xe6f5a
	adds r5, #84	@ 000e6f5a 5435
.org 0xe6f5c
	ldr r1, [pc, #72]	@ 000e6f5c 1249
.org 0xe6f5e
	ldrb r2, [r6, #10]	@ 000e6f5e b27a
.org 0xe6f60
	lsrs r2, r2, #4	@ 000e6f60 1209
.org 0xe6f62
	movs r4, #1	@ 000e6f62 0124
.org 0xe6f64
	ands r2, r4	@ 000e6f64 2240
.org 0xe6f66
	adds r0, r5, #0	@ 000e6f66 281c
.org 0xe6f68
	bl 0xe6b5c	@ 000e6f68 fff7f8fd
.org 0xe6f6c
	movs r1, #130	@ 000e6f6c 8221
.org 0xe6f6e
	lsls r1, r1, #1	@ 000e6f6e 4900
.org 0xe6f70
	ldrb r2, [r6, #10]	@ 000e6f70 b27a
.org 0xe6f72
	lsrs r2, r2, #4	@ 000e6f72 1209
.org 0xe6f74
	ands r2, r4	@ 000e6f74 2240
.org 0xe6f76
	adds r0, r5, #0	@ 000e6f76 281c
.org 0xe6f78
	bl 0xe6b5c	@ 000e6f78 fff7f0fd
.org 0xe6f7c
	ldr r1, [pc, #44]	@ 000e6f7c 0b49
.org 0xe6f7e
	ldrb r2, [r6, #10]	@ 000e6f7e b27a
.org 0xe6f80
	lsrs r2, r2, #4	@ 000e6f80 1209
.org 0xe6f82
	ands r2, r4	@ 000e6f82 2240
.org 0xe6f84
	adds r0, r5, #0	@ 000e6f84 281c
.org 0xe6f86
	bl 0xe6b5c	@ 000e6f86 fff7e9fd
.org 0xe6f8a
	ldr r1, [pc, #36]	@ 000e6f8a 0949
.org 0xe6f8c
	ldrb r0, [r6, #9]	@ 000e6f8c 707a
.org 0xe6f8e
	lsls r0, r0, #2	@ 000e6f8e 8000
.org 0xe6f90
	adds r0, r0, r1	@ 000e6f90 4018
.org 0xe6f92
	movs r1, #2	@ 000e6f92 0221
.org 0xe6f94
	str r1, [r6, #12]	@ 000e6f94 f160
.org 0xe6f96
	ldr r0, [r0, #0]	@ 000e6f96 0068
.org 0xe6f98
	ldr r0, [r0, #8]	@ 000e6f98 8068
.org 0xe6f9a
	str r0, [r6, #20]	@ 000e6f9a 7061
.org 0xe6f9c
	ldrb r0, [r6, #18]	@ 000e6f9c b07c
.org 0xe6f9e
	subs r0, #1	@ 000e6f9e 0138
.org 0xe6fa0
	strb r0, [r6, #18]	@ 000e6fa0 b074
.org 0xe6fa2
	b.n 0xe704c	@ 000e6fa2 53e0
.org 0xe6fa4
	.byte 0x00,0xf6,0xff,0xff	@ 000e6fa4 data
.org 0xe6fa8
	.byte 0x03,0x01,0x00,0x00	@ 000e6fa8 data
.org 0xe6fac
	.byte 0x05,0x01,0x00,0x00	@ 000e6fac data
.org 0xe6fb0
	.byte 0x64,0x6f,0x86,0x08	@ 000e6fb0 data
.org 0xe6fb4
	ldr r0, [r6, #84]	@ 000e6fb4 706d
.org 0xe6fb6
	ldr r2, [r6, #92]	@ 000e6fb6 f26d
.org 0xe6fb8
	adds r0, r0, r2	@ 000e6fb8 8018
.org 0xe6fba
	str r0, [r6, #84]	@ 000e6fba 7065
.org 0xe6fbc
	ldr r0, [r6, #88]	@ 000e6fbc b06d
.org 0xe6fbe
	ldr r1, [r6, #96]	@ 000e6fbe 316e
.org 0xe6fc0
	adds r0, r0, r1	@ 000e6fc0 4018
.org 0xe6fc2
	str r0, [r6, #88]	@ 000e6fc2 b065
.org 0xe6fc4
	ldr r1, [r6, #120]	@ 000e6fc4 b16f
.org 0xe6fc6
	ldr r3, [pc, #140]	@ 000e6fc6 234b
.org 0xe6fc8
	cmp r1, r3	@ 000e6fc8 9942
.org 0xe6fca
	bgt.n 0xe6fe6	@ 000e6fca 0cdc
.org 0xe6fcc
	ldr r0, [r6, #100]	@ 000e6fcc 706e
.org 0xe6fce
	adds r0, r2, r0	@ 000e6fce 1018
.org 0xe6fd0
	str r0, [r6, #92]	@ 000e6fd0 f065
.org 0xe6fd2
	adds r0, r1, #0	@ 000e6fd2 081c
.org 0xe6fd4
	adds r0, #16	@ 000e6fd4 1030
.org 0xe6fd6
	str r0, [r6, #120]	@ 000e6fd6 b067
.org 0xe6fd8
	cmp r0, r3	@ 000e6fd8 9842
.org 0xe6fda
	ble.n 0xe6fe6	@ 000e6fda 04dd
.org 0xe6fdc
	movs r0, #64	@ 000e6fdc 4020
.org 0xe6fde
	str r0, [r6, #104]	@ 000e6fde b066
.org 0xe6fe0
	movs r0, #0	@ 000e6fe0 0020
.org 0xe6fe2
	str r0, [r6, #96]	@ 000e6fe2 3066
.org 0xe6fe4
	str r0, [r6, #92]	@ 000e6fe4 f065
.org 0xe6fe6
	ldr r0, [r6, #96]	@ 000e6fe6 306e
.org 0xe6fe8
	ldr r1, [r6, #104]	@ 000e6fe8 b16e
.org 0xe6fea
	adds r0, r0, r1	@ 000e6fea 4018
.org 0xe6fec
	str r0, [r6, #96]	@ 000e6fec 3066
.org 0xe6fee
	ldr r0, [r6, #84]	@ 000e6fee 706d
.org 0xe6ff0
	ldr r1, [r6, #88]	@ 000e6ff0 b16d
.org 0xe6ff2
	ldr r2, [pc, #100]	@ 000e6ff2 194a
.org 0xe6ff4
	adds r1, r1, r2	@ 000e6ff4 8918
.org 0xe6ff6
	bl 0x7c7c	@ 000e6ff6 20f741fe
.org 0xe6ffa
	lsls r0, r0, #16	@ 000e6ffa 0004
.org 0xe6ffc
	cmp r0, #0	@ 000e6ffc 0028
.org 0xe6ffe
	beq.n 0xe704c	@ 000e6ffe 25d0
.org 0xe7000
	ldr r0, [r6, #84]	@ 000e7000 706d
.org 0xe7002
	str r0, [sp, #0]	@ 000e7002 0090
.org 0xe7004
	ldr r0, [r6, #88]	@ 000e7004 b06d
.org 0xe7006
	ldr r1, [pc, #80]	@ 000e7006 1449
.org 0xe7008
	adds r0, r0, r1	@ 000e7008 4018
.org 0xe700a
	str r0, [sp, #4]	@ 000e700a 0190
.org 0xe700c
	movs r0, #1	@ 000e700c 0120
.org 0xe700e
	mov r1, sp	@ 000e700e 6946
.org 0xe7010
	bl 0xd0c88	@ 000e7010 e9f73afe
.org 0xe7014
	movs r0, #167	@ 000e7014 a720
.org 0xe7016
	bl 0x2b10	@ 000e7016 1bf77bfd
.org 0xe701a
	ldr r1, [pc, #64]	@ 000e701a 1049
.org 0xe701c
	ldrb r2, [r6, #10]	@ 000e701c b27a
.org 0xe701e
	lsrs r2, r2, #4	@ 000e701e 1209
.org 0xe7020
	movs r4, #1	@ 000e7020 0124
.org 0xe7022
	ands r2, r4	@ 000e7022 2240
.org 0xe7024
	mov r0, sp	@ 000e7024 6846
.org 0xe7026
	bl 0xe6b5c	@ 000e7026 fff799fd
.org 0xe702a
	movs r1, #131	@ 000e702a 8321
.org 0xe702c
	lsls r1, r1, #1	@ 000e702c 4900
.org 0xe702e
	ldrb r2, [r6, #10]	@ 000e702e b27a
.org 0xe7030
	lsrs r2, r2, #4	@ 000e7030 1209
.org 0xe7032
	ands r2, r4	@ 000e7032 2240
.org 0xe7034
	mov r0, sp	@ 000e7034 6846
.org 0xe7036
	bl 0xe6b5c	@ 000e7036 fff791fd
.org 0xe703a
	ldr r1, [pc, #36]	@ 000e703a 0949
.org 0xe703c
	ldrb r0, [r6, #9]	@ 000e703c 707a
.org 0xe703e
	lsls r0, r0, #2	@ 000e703e 8000
.org 0xe7040
	adds r0, r0, r1	@ 000e7040 4018
.org 0xe7042
	movs r1, #2	@ 000e7042 0221
