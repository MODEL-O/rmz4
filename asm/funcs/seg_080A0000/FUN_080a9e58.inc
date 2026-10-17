@ FUN_080a9e58  entry 0x080a9e58  size 138
.thumb
.org 0xa9e58
FUN_080a9e58:
	push {r4, lr}	@ 000a9e58 10b5
.org 0xa9e5a
	adds r4, r0, #0	@ 000a9e5a 041c
.org 0xa9e5c
	ldrb r0, [r4, #14]	@ 000a9e5c a07b
.org 0xa9e5e
	cmp r0, #0	@ 000a9e5e 0028
.org 0xa9e60
	bne.n 0xa9e66	@ 000a9e60 01d1
.org 0xa9e62
	adds r0, #1	@ 000a9e62 0130
.org 0xa9e64
	strb r0, [r4, #14]	@ 000a9e64 a073
.org 0xa9e66
	adds r0, r4, #0	@ 000a9e66 201c
.org 0xa9e68
	bl 0xa9b2c	@ 000a9e68 fff760fe
.org 0xa9e6c
	lsls r0, r0, #24	@ 000a9e6c 0006
.org 0xa9e6e
	cmp r0, #0	@ 000a9e6e 0028
.org 0xa9e70
	bne.n 0xa9e7a	@ 000a9e70 03d1
.org 0xa9e72
	ldr r0, [r4, #84]	@ 000a9e72 606d
.org 0xa9e74
	ldr r1, [r4, #92]	@ 000a9e74 e16d
.org 0xa9e76
	adds r0, r0, r1	@ 000a9e76 4018
.org 0xa9e78
	str r0, [r4, #84]	@ 000a9e78 6065
.org 0xa9e7a
	adds r0, r4, #0	@ 000a9e7a 201c
.org 0xa9e7c
	bl 0xa9a70	@ 000a9e7c fff7f8fd
.org 0xa9e80
	lsls r0, r0, #24	@ 000a9e80 0006
.org 0xa9e82
	cmp r0, #0	@ 000a9e82 0028
.org 0xa9e84
	beq.n 0xa9ec8	@ 000a9e84 20d0
.org 0xa9e86
	ldrb r1, [r4, #30]	@ 000a9e86 a17f
.org 0xa9e88
	lsls r1, r1, #8	@ 000a9e88 0902
.org 0xa9e8a
	adds r0, r4, #0	@ 000a9e8a 201c
.org 0xa9e8c
	adds r0, #112	@ 000a9e8c 7030
.org 0xa9e8e
	ldrb r0, [r0, #0]	@ 000a9e8e 0078
.org 0xa9e90
	orrs r1, r0	@ 000a9e90 0143
.org 0xa9e92
	adds r0, r4, #0	@ 000a9e92 201c
.org 0xa9e94
	adds r0, #188	@ 000a9e94 bc30
.org 0xa9e96
	ldrb r0, [r0, #0]	@ 000a9e96 0078
.org 0xa9e98
	ldr r2, [pc, #36]	@ 000a9e98 094a
.org 0xa9e9a
	adds r0, r0, r2	@ 000a9e9a 8018
.org 0xa9e9c
	cmp r1, r0	@ 000a9e9c 8142
.org 0xa9e9e
	beq.n 0xa9eb8	@ 000a9e9e 0bd0
.org 0xa9ea0
	lsls r1, r0, #16	@ 000a9ea0 0104
.org 0xa9ea2
	lsrs r1, r1, #16	@ 000a9ea2 090c
.org 0xa9ea4
	adds r0, r4, #0	@ 000a9ea4 201c
.org 0xa9ea6
	bl 0x1cf00	@ 000a9ea6 73f72bf8
.org 0xa9eaa
	adds r0, r4, #0	@ 000a9eaa 201c
.org 0xa9eac
	adds r0, #116	@ 000a9eac 7430
.org 0xa9eae
	ldr r1, [pc, #20]	@ 000a9eae 0549
.org 0xa9eb0
	bl 0x5784	@ 000a9eb0 5bf768fc
.org 0xa9eb4
	movs r0, #0	@ 000a9eb4 0020
.org 0xa9eb6
	str r0, [r4, #92]	@ 000a9eb6 e065
.org 0xa9eb8
	movs r0, #0	@ 000a9eb8 0020
.org 0xa9eba
	str r0, [r4, #96]	@ 000a9eba 2066
.org 0xa9ebc
	b.n 0xa9ed4	@ 000a9ebc 0ae0
.org 0xa9ebe
	.byte 0x00	@ 000a9ebe data
.org 0xa9ebf
	.byte 0x00	@ 000a9ebf data
.org 0xa9ec0
	.byte 0x03,0x9a,0x00,0x00	@ 000a9ec0 data
.org 0xa9ec4
	.byte 0xa4,0x29,0x86,0x08	@ 000a9ec4 data
.org 0xa9ec8
	ldr r0, [r4, #88]	@ 000a9ec8 a06d
.org 0xa9eca
	ldr r1, [r4, #96]	@ 000a9eca 216e
.org 0xa9ecc
	adds r0, r0, r1	@ 000a9ecc 4018
.org 0xa9ece
	str r0, [r4, #88]	@ 000a9ece a065
.org 0xa9ed0
	adds r1, #64	@ 000a9ed0 4031
.org 0xa9ed2
	str r1, [r4, #96]	@ 000a9ed2 2166
.org 0xa9ed4
	adds r0, r4, #0	@ 000a9ed4 201c
.org 0xa9ed6
	adds r0, #115	@ 000a9ed6 7330
.org 0xa9ed8
	ldrb r0, [r0, #0]	@ 000a9ed8 0078
.org 0xa9eda
	cmp r0, #3	@ 000a9eda 0328
.org 0xa9edc
	bne.n 0xa9ee6	@ 000a9edc 03d1
.org 0xa9ede
	movs r1, #0	@ 000a9ede 0021
.org 0xa9ee0
	movs r0, #4	@ 000a9ee0 0420
