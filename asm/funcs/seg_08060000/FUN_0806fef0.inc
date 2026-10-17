@ FUN_0806fef0  entry 0x0806fef0  size 372
.thumb
.org 0x6fef0
FUN_0806fef0:
	push {r4, r5, r6, lr}	@ 0006fef0 70b5
.org 0x6fef2
	sub sp, #8	@ 0006fef2 82b0
.org 0x6fef4
	adds r4, r0, #0	@ 0006fef4 041c
.org 0x6fef6
	ldrb r6, [r4, #14]	@ 0006fef6 a67b
.org 0x6fef8
	cmp r6, #0	@ 0006fef8 002e
.org 0x6fefa
	bne.n 0x6ff4c	@ 0006fefa 27d1
.org 0x6fefc
	adds r5, r4, #0	@ 0006fefc 251c
.org 0x6fefe
	adds r5, #180	@ 0006fefe b435
.org 0x6ff00
	ldr r0, [r5, #8]	@ 0006ff00 a868
.org 0x6ff02
	ldrb r0, [r0, #13]	@ 0006ff02 407b
.org 0x6ff04
	cmp r0, #0	@ 0006ff04 0028
.org 0x6ff06
	bne.n 0x6ff44	@ 0006ff06 1dd1
.org 0x6ff08
	ldr r0, [r5, #12]	@ 0006ff08 e868
.org 0x6ff0a
	ldrb r0, [r0, #13]	@ 0006ff0a 407b
.org 0x6ff0c
	cmp r0, #0	@ 0006ff0c 0028
.org 0x6ff0e
	bne.n 0x6ff44	@ 0006ff0e 19d1
.org 0x6ff10
	ldr r1, [pc, #40]	@ 0006ff10 0a49
.org 0x6ff12
	adds r0, r4, #0	@ 0006ff12 201c
.org 0x6ff14
	bl 0x1cf00	@ 0006ff14 acf7f4ff
.org 0x6ff18
	ldr r0, [r5, #8]	@ 0006ff18 a868
.org 0x6ff1a
	adds r0, #192	@ 0006ff1a c030
.org 0x6ff1c
	movs r1, #1	@ 0006ff1c 0121
.org 0x6ff1e
	strb r1, [r0, #0]	@ 0006ff1e 0170
.org 0x6ff20
	ldr r0, [r5, #12]	@ 0006ff20 e868
.org 0x6ff22
	adds r0, #192	@ 0006ff22 c030
.org 0x6ff24
	strb r1, [r0, #0]	@ 0006ff24 0170
.org 0x6ff26
	movs r0, #8	@ 0006ff26 0820
.org 0x6ff28
	str r0, [r4, #104]	@ 0006ff28 a066
.org 0x6ff2a
	lsls r0, r0, #5	@ 0006ff2a 4001
.org 0x6ff2c
	negs r0, r0	@ 0006ff2c 4042
.org 0x6ff2e
	str r0, [r4, #96]	@ 0006ff2e 2066
.org 0x6ff30
	strb r6, [r4, #19]	@ 0006ff30 e674
.org 0x6ff32
	ldr r0, [pc, #12]	@ 0006ff32 0348
.org 0x6ff34
	bl 0x2b10	@ 0006ff34 92f7ecfd
.org 0x6ff38
	strb r6, [r4, #15]	@ 0006ff38 e673
.org 0x6ff3a
	b.n 0x6ff62	@ 0006ff3a 12e0
.org 0x6ff3c
	.byte 0x02,0x8d,0x00,0x00	@ 0006ff3c data
.org 0x6ff40
	.byte 0x5f,0x01,0x00,0x00	@ 0006ff40 data
.org 0x6ff44
	adds r0, r4, #0	@ 0006ff44 201c
.org 0x6ff46
	bl 0x1cff0	@ 0006ff46 adf753f8
.org 0x6ff4a
	b.n 0x70092	@ 0006ff4a a2e0
.org 0x6ff4c
	cmp r6, #1	@ 0006ff4c 012e
.org 0x6ff4e
	bne.n 0x6ff68	@ 0006ff4e 0bd1
.org 0x6ff50
	adds r0, r4, #0	@ 0006ff50 201c
.org 0x6ff52
	adds r0, #115	@ 0006ff52 7330
.org 0x6ff54
	ldrb r0, [r0, #0]	@ 0006ff54 0078
.org 0x6ff56
	cmp r0, #3	@ 0006ff56 0328
.org 0x6ff58
	bne.n 0x6ff68	@ 0006ff58 06d1
.org 0x6ff5a
	ldr r1, [pc, #40]	@ 0006ff5a 0a49
.org 0x6ff5c
	adds r0, r4, #0	@ 0006ff5c 201c
.org 0x6ff5e
	bl 0x1cf00	@ 0006ff5e acf7cfff
.org 0x6ff62
	ldrb r0, [r4, #14]	@ 0006ff62 a07b
.org 0x6ff64
	adds r0, #1	@ 0006ff64 0130
.org 0x6ff66
	strb r0, [r4, #14]	@ 0006ff66 a073
.org 0x6ff68
	adds r0, r4, #0	@ 0006ff68 201c
.org 0x6ff6a
	bl 0x1cff0	@ 0006ff6a adf741f8
.org 0x6ff6e
	ldr r0, [r4, #88]	@ 0006ff6e a06d
.org 0x6ff70
	ldr r1, [r4, #96]	@ 0006ff70 216e
.org 0x6ff72
	adds r2, r0, r1	@ 0006ff72 4218
.org 0x6ff74
	str r2, [r4, #88]	@ 0006ff74 a265
.org 0x6ff76
	cmp r1, #0	@ 0006ff76 0029
.org 0x6ff78
	bge.n 0x6ff88	@ 0006ff78 06da
.org 0x6ff7a
	ldr r0, [r4, #104]	@ 0006ff7a a06e
.org 0x6ff7c
	adds r0, r1, r0	@ 0006ff7c 0818
.org 0x6ff7e
	str r0, [r4, #96]	@ 0006ff7e 2066
.org 0x6ff80
	b.n 0x6ff9c	@ 0006ff80 0ce0
.org 0x6ff82
	.byte 0x00	@ 0006ff82 data
.org 0x6ff83
	.byte 0x00	@ 0006ff83 data
.org 0x6ff84
	.byte 0x03,0x8d,0x00,0x00	@ 0006ff84 data
.org 0x6ff88
	ldr r0, [r4, #104]	@ 0006ff88 a06e
.org 0x6ff8a
	lsls r0, r0, #1	@ 0006ff8a 4000
.org 0x6ff8c
	adds r0, r1, r0	@ 0006ff8c 0818
.org 0x6ff8e
	str r0, [r4, #96]	@ 0006ff8e 2066
.org 0x6ff90
	adds r0, r4, #0	@ 0006ff90 201c
.org 0x6ff92
	adds r0, #180	@ 0006ff92 b430
.org 0x6ff94
	ldr r0, [r0, #4]	@ 0006ff94 4068
.org 0x6ff96
	cmp r2, r0	@ 0006ff96 8242
.org 0x6ff98
	ble.n 0x6ff9c	@ 0006ff98 00dd
.org 0x6ff9a
	str r0, [r4, #88]	@ 0006ff9a a065
.org 0x6ff9c
	ldrb r0, [r4, #15]	@ 0006ff9c e07b
.org 0x6ff9e
	cmp r0, #0	@ 0006ff9e 0028
.org 0x6ffa0
	bne.n 0x70020	@ 0006ffa0 3ed1
.org 0x6ffa2
	adds r5, r4, #0	@ 0006ffa2 251c
.org 0x6ffa4
	adds r5, #180	@ 0006ffa4 b435
.org 0x6ffa6
	ldr r0, [r5, #8]	@ 0006ffa6 a868
.org 0x6ffa8
	adds r0, #192	@ 0006ffa8 c030
.org 0x6ffaa
	ldrb r0, [r0, #0]	@ 0006ffaa 0078
.org 0x6ffac
	cmp r0, #0	@ 0006ffac 0028
.org 0x6ffae
	bne.n 0x70092	@ 0006ffae 70d1
.org 0x6ffb0
	ldr r0, [r5, #12]	@ 0006ffb0 e868
.org 0x6ffb2
	adds r0, #192	@ 0006ffb2 c030
.org 0x6ffb4
	ldrb r0, [r0, #0]	@ 0006ffb4 0078
.org 0x6ffb6
	cmp r0, #0	@ 0006ffb6 0028
.org 0x6ffb8
	bne.n 0x70092	@ 0006ffb8 6bd1
.org 0x6ffba
	movs r0, #32	@ 0006ffba 2020
.org 0x6ffbc
	strb r0, [r4, #18]	@ 0006ffbc a074
.org 0x6ffbe
	ldr r2, [pc, #72]	@ 0006ffbe 124a
.org 0x6ffc0
	ldr r1, [r2, #0]	@ 0006ffc0 1168
.org 0x6ffc2
	ldr r0, [pc, #72]	@ 0006ffc2 1248
.org 0x6ffc4
	muls r0, r1	@ 0006ffc4 4843
.org 0x6ffc6
	ldr r1, [pc, #72]	@ 0006ffc6 1249
.org 0x6ffc8
	adds r0, r0, r1	@ 0006ffc8 4018
.org 0x6ffca
	lsls r0, r0, #1	@ 0006ffca 4000
.org 0x6ffcc
	lsrs r1, r0, #1	@ 0006ffcc 4108
.org 0x6ffce
	str r1, [r2, #0]	@ 0006ffce 1160
.org 0x6ffd0
	lsrs r0, r0, #17	@ 0006ffd0 400c
.org 0x6ffd2
	movs r1, #14	@ 0006ffd2 0e21
.org 0x6ffd4
	bl 0x129198	@ 0006ffd4 b9f0e0f8
.org 0x6ffd8
	strb r0, [r4, #19]	@ 0006ffd8 e074
.org 0x6ffda
	ldr r2, [pc, #56]	@ 0006ffda 0e4a
.org 0x6ffdc
	ldr r1, [pc, #56]	@ 0006ffdc 0e49
.org 0x6ffde
	ldrb r0, [r4, #19]	@ 0006ffde e07c
.org 0x6ffe0
	lsls r0, r0, #1	@ 0006ffe0 4000
.org 0x6ffe2
	adds r0, r0, r1	@ 0006ffe2 4018
.org 0x6ffe4
	ldrb r0, [r0, #0]	@ 0006ffe4 0078
.org 0x6ffe6
	lsls r0, r0, #2	@ 0006ffe6 8000
.org 0x6ffe8
	adds r0, r0, r2	@ 0006ffe8 8018
.org 0x6ffea
	ldr r1, [r4, #84]	@ 0006ffea 616d
.org 0x6ffec
	ldr r0, [r0, #0]	@ 0006ffec 0068
.org 0x6ffee
	adds r1, r1, r0	@ 0006ffee 0918
.org 0x6fff0
	str r1, [sp, #0]	@ 0006fff0 0091
.org 0x6fff2
	ldr r0, [r5, #16]	@ 0006fff2 2869
.org 0x6fff4
	ldr r1, [pc, #36]	@ 0006fff4 0949
.org 0x6fff6
	adds r0, r0, r1	@ 0006fff6 4018
.org 0x6fff8
	str r0, [sp, #4]	@ 0006fff8 0190
.org 0x6fffa
	mov r0, sp	@ 0006fffa 6846
.org 0x6fffc
	movs r1, #0	@ 0006fffc 0021
.org 0x6fffe
	movs r2, #0	@ 0006fffe 0022
.org 0x70000
	bl 0xfa98c	@ 00070000 8af0c4fc
.org 0x70004
	b.n 0x70066	@ 00070004 2fe0
.org 0x70006
	.byte 0x00	@ 00070006 data
.org 0x70007
	.byte 0x00	@ 00070007 data
.org 0x70008
	.byte 0x38,0xdc,0x02,0x02	@ 00070008 data
.org 0x7000c
	.byte 0xfd,0x43,0x03,0x00	@ 0007000c data
.org 0x70010
	.byte 0xc3,0x9e,0x26,0x00	@ 00070010 data
.org 0x70014
	.byte 0xc0,0xc7,0x85,0x08	@ 00070014 data
.org 0x70018
	.byte 0xa4,0xc7,0x85,0x08	@ 00070018 data
.org 0x7001c
	.byte 0x00,0x10,0xff,0xff	@ 0007001c data
.org 0x70020
	cmp r0, #1	@ 00070020 0128
.org 0x70022
	bne.n 0x7007c	@ 00070022 2bd1
.org 0x70024
	ldrb r0, [r4, #18]	@ 00070024 a07c
.org 0x70026
	subs r0, #1	@ 00070026 0138
.org 0x70028
	strb r0, [r4, #18]	@ 00070028 a074
.org 0x7002a
	lsls r0, r0, #24	@ 0007002a 0006
.org 0x7002c
	lsrs r0, r0, #24	@ 0007002c 000e
.org 0x7002e
	cmp r0, #255	@ 0007002e ff28
.org 0x70030
	bne.n 0x70092	@ 00070030 2fd1
.org 0x70032
	ldr r2, [pc, #60]	@ 00070032 0f4a
.org 0x70034
	ldr r1, [pc, #60]	@ 00070034 0f49
.org 0x70036
	ldrb r0, [r4, #19]	@ 00070036 e07c
.org 0x70038
	lsls r0, r0, #1	@ 00070038 4000
.org 0x7003a
	adds r1, #1	@ 0007003a 0131
.org 0x7003c
	adds r0, r0, r1	@ 0007003c 4018
.org 0x7003e
	ldrb r0, [r0, #0]	@ 0007003e 0078
.org 0x70040
	lsls r0, r0, #2	@ 00070040 8000
.org 0x70042
	adds r0, r0, r2	@ 00070042 8018
.org 0x70044
	ldr r1, [r4, #84]	@ 00070044 616d
.org 0x70046
	ldr r0, [r0, #0]	@ 00070046 0068
.org 0x70048
	adds r1, r1, r0	@ 00070048 0918
.org 0x7004a
	str r1, [sp, #0]	@ 0007004a 0091
.org 0x7004c
	adds r0, r4, #0	@ 0007004c 201c
.org 0x7004e
	adds r0, #180	@ 0007004e b430
.org 0x70050
	ldr r0, [r0, #16]	@ 00070050 0069
.org 0x70052
	ldr r1, [pc, #36]	@ 00070052 0949
.org 0x70054
	adds r0, r0, r1	@ 00070054 4018
.org 0x70056
	str r0, [sp, #4]	@ 00070056 0190
.org 0x70058
	mov r0, sp	@ 00070058 6846
.org 0x7005a
	movs r1, #0	@ 0007005a 0021
.org 0x7005c
	movs r2, #0	@ 0007005c 0022
.org 0x7005e
	bl 0xfa98c	@ 0007005e 8af095fc
.org 0x70062
	movs r0, #64	@ 00070062 4020
