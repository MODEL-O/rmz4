@ FUN_080b0064  entry 0x080b0064  size 158
.thumb
.org 0xb0064
FUN_080b0064:
	push {r4, r5, lr}	@ 000b0064 30b5
.org 0xb0066
	adds r3, r0, #0	@ 000b0066 031c
.org 0xb0068
	ldr r2, [pc, #64]	@ 000b0068 104a
.org 0xb006a
	ldr r1, [r2, #0]	@ 000b006a 1168
.org 0xb006c
	ldr r0, [pc, #64]	@ 000b006c 1048
.org 0xb006e
	muls r0, r1	@ 000b006e 4843
.org 0xb0070
	ldr r1, [pc, #64]	@ 000b0070 1049
.org 0xb0072
	adds r0, r0, r1	@ 000b0072 4018
.org 0xb0074
	lsls r0, r0, #1	@ 000b0074 4000
.org 0xb0076
	lsrs r1, r0, #1	@ 000b0076 4108
.org 0xb0078
	str r1, [r2, #0]	@ 000b0078 1160
.org 0xb007a
	lsrs r0, r0, #17	@ 000b007a 400c
.org 0xb007c
	lsls r0, r0, #24	@ 000b007c 0006
.org 0xb007e
	lsrs r0, r0, #24	@ 000b007e 000e
.org 0xb0080
	adds r5, r3, #0	@ 000b0080 1d1c
.org 0xb0082
	adds r5, #184	@ 000b0082 b835
.org 0xb0084
	ldrb r2, [r5, #0]	@ 000b0084 2a78
.org 0xb0086
	cmp r2, #0	@ 000b0086 002a
.org 0xb0088
	bne.n 0xb00d8	@ 000b0088 26d1
.org 0xb008a
	cmp r0, #64	@ 000b008a 4028
.org 0xb008c
	bls.n 0xb00d0	@ 000b008c 20d9
.org 0xb008e
	ldr r0, [pc, #40]	@ 000b008e 0a48
.org 0xb0090
	ldr r0, [r0, #0]	@ 000b0090 0068
.org 0xb0092
	ldr r1, [r0, #88]	@ 000b0092 816d
.org 0xb0094
	ldr r4, [pc, #36]	@ 000b0094 094c
.org 0xb0096
	adds r1, r1, r4	@ 000b0096 0919
.org 0xb0098
	ldr r0, [r3, #88]	@ 000b0098 986d
.org 0xb009a
	movs r4, #240	@ 000b009a f024
.org 0xb009c
	lsls r4, r4, #4	@ 000b009c 2401
.org 0xb009e
	adds r0, r0, r4	@ 000b009e 0019
.org 0xb00a0
	cmp r1, r0	@ 000b00a0 8142
.org 0xb00a2
	ble.n 0xb00c0	@ 000b00a2 0ddd
.org 0xb00a4
	strb r2, [r3, #13]	@ 000b00a4 5a73
.org 0xb00a6
	strb r2, [r3, #14]	@ 000b00a6 9a73
.org 0xb00a8
	b.n 0xb011c	@ 000b00a8 38e0
.org 0xb00aa
	.byte 0x00	@ 000b00aa data
.org 0xb00ab
	.byte 0x00	@ 000b00ab data
.org 0xb00ac
	.byte 0x38,0xdc,0x02,0x02	@ 000b00ac data
.org 0xb00b0
	.byte 0xfd,0x43,0x03,0x00	@ 000b00b0 data
.org 0xb00b4
	.byte 0xc3,0x9e,0x26,0x00	@ 000b00b4 data
.org 0xb00b8
	.byte 0xf0,0xdb,0x02,0x02	@ 000b00b8 data
.org 0xb00bc
	.byte 0x00,0xe7,0xff,0xff	@ 000b00bc data
.org 0xb00c0
	movs r4, #1	@ 000b00c0 0124
.org 0xb00c2
	strb r4, [r3, #13]	@ 000b00c2 5c73
.org 0xb00c4
	strb r2, [r3, #14]	@ 000b00c4 9a73
.org 0xb00c6
	adds r0, r3, #0	@ 000b00c6 181c
.org 0xb00c8
	bl 0xb0008	@ 000b00c8 fff79eff
.org 0xb00cc
	strb r4, [r5, #0]	@ 000b00cc 2c70
.org 0xb00ce
	b.n 0xb011c	@ 000b00ce 25e0
.org 0xb00d0
	movs r0, #1	@ 000b00d0 0120
.org 0xb00d2
	strb r0, [r3, #13]	@ 000b00d2 5873
.org 0xb00d4
	strb r2, [r3, #14]	@ 000b00d4 9a73
.org 0xb00d6
	b.n 0xb00fa	@ 000b00d6 10e0
.org 0xb00d8
	cmp r0, #64	@ 000b00d8 4028
.org 0xb00da
	bls.n 0xb0116	@ 000b00da 1cd9
.org 0xb00dc
	ldr r0, [pc, #36]	@ 000b00dc 0948
.org 0xb00de
	ldr r0, [r0, #0]	@ 000b00de 0068
.org 0xb00e0
	ldr r1, [r0, #88]	@ 000b00e0 816d
.org 0xb00e2
	ldr r0, [pc, #36]	@ 000b00e2 0948
.org 0xb00e4
	adds r1, r1, r0	@ 000b00e4 0918
.org 0xb00e6
	ldr r0, [r3, #88]	@ 000b00e6 986d
.org 0xb00e8
	movs r2, #240	@ 000b00e8 f022
.org 0xb00ea
	lsls r2, r2, #4	@ 000b00ea 1201
.org 0xb00ec
	adds r0, r0, r2	@ 000b00ec 8018
.org 0xb00ee
	cmp r1, r0	@ 000b00ee 8142
.org 0xb00f0
	bge.n 0xb010c	@ 000b00f0 0cda
.org 0xb00f2
	movs r1, #0	@ 000b00f2 0021
.org 0xb00f4
	movs r0, #1	@ 000b00f4 0120
.org 0xb00f6
	strb r0, [r3, #13]	@ 000b00f6 5873
.org 0xb00f8
	strb r1, [r3, #14]	@ 000b00f8 9973
.org 0xb00fa
	adds r0, r3, #0	@ 000b00fa 181c
.org 0xb00fc
	bl 0xb0008	@ 000b00fc fff784ff
.org 0xb0100
	b.n 0xb011c	@ 000b0100 0ce0
