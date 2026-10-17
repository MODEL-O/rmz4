@ FUN_08042a44  entry 0x08042a44  size 112
.thumb
.org 0x42a44
FUN_08042a44:
	push {lr}	@ 00042a44 00b5
.org 0x42a46
	adds r3, r0, #0	@ 00042a46 031c
.org 0x42a48
	ldr r1, [r3, #40]	@ 00042a48 996a
.org 0x42a4a
	ldrb r0, [r3, #16]	@ 00042a4a 187c
.org 0x42a4c
	cmp r0, #1	@ 00042a4c 0128
.org 0x42a4e
	bhi.n 0x42aa8	@ 00042a4e 2bd8
.org 0x42a50
	movs r2, #168	@ 00042a50 a822
.org 0x42a52
	lsls r2, r2, #1	@ 00042a52 5200
.org 0x42a54
	adds r0, r1, r2	@ 00042a54 8818
.org 0x42a56
	ldrb r0, [r0, #0]	@ 00042a56 0078
.org 0x42a58
	cmp r0, #255	@ 00042a58 ff28
.org 0x42a5a
	bne.n 0x42aa8	@ 00042a5a 25d1
.org 0x42a5c
	ldr r0, [pc, #64]	@ 00042a5c 1048
.org 0x42a5e
	adds r2, r1, r0	@ 00042a5e 0a18
.org 0x42a60
	ldrb r0, [r2, #0]	@ 00042a60 1078
.org 0x42a62
	movs r1, #64	@ 00042a62 4021
.org 0x42a64
	orrs r0, r1	@ 00042a64 0843
.org 0x42a66
	strb r0, [r2, #0]	@ 00042a66 1070
.org 0x42a68
	ldrb r1, [r3, #10]	@ 00042a68 997a
.org 0x42a6a
	movs r0, #254	@ 00042a6a fe20
.org 0x42a6c
	ands r0, r1	@ 00042a6c 0840
.org 0x42a6e
	movs r2, #0	@ 00042a6e 0022
.org 0x42a70
	movs r1, #253	@ 00042a70 fd21
.org 0x42a72
	ands r0, r1	@ 00042a72 0840
.org 0x42a74
	strb r0, [r3, #10]	@ 00042a74 9872
.org 0x42a76
	adds r0, r3, #0	@ 00042a76 181c
.org 0x42a78
	adds r0, #140	@ 00042a78 8c30
.org 0x42a7a
	str r2, [r0, #0]	@ 00042a7a 0260
.org 0x42a7c
	adds r0, #4	@ 00042a7c 0430
.org 0x42a7e
	str r2, [r0, #0]	@ 00042a7e 0260
.org 0x42a80
	adds r0, #4	@ 00042a80 0430
.org 0x42a82
	strb r2, [r0, #0]	@ 00042a82 0270
.org 0x42a84
	ldrb r1, [r3, #10]	@ 00042a84 997a
.org 0x42a86
	movs r0, #251	@ 00042a86 fb20
.org 0x42a88
	ands r0, r1	@ 00042a88 0840
.org 0x42a8a
	strb r0, [r3, #10]	@ 00042a8a 9872
.org 0x42a8c
	ldr r1, [pc, #20]	@ 00042a8c 0549
.org 0x42a8e
	ldrb r0, [r3, #9]	@ 00042a8e 587a
.org 0x42a90
	lsls r0, r0, #2	@ 00042a90 8000
.org 0x42a92
	adds r0, r0, r1	@ 00042a92 4018
.org 0x42a94
	movs r1, #3	@ 00042a94 0321
.org 0x42a96
	str r1, [r3, #12]	@ 00042a96 d960
.org 0x42a98
	ldr r0, [r0, #0]	@ 00042a98 0068
.org 0x42a9a
	ldr r0, [r0, #12]	@ 00042a9a c068
.org 0x42a9c
	str r0, [r3, #20]	@ 00042a9c 5861
.org 0x42a9e
	b.n 0x42ab8	@ 00042a9e 0be0
.org 0x42aa0
	.byte 0x53,0x01,0x00,0x00	@ 00042aa0 data
.org 0x42aa4
	.byte 0xf8,0x39,0x85,0x08	@ 00042aa4 data
.org 0x42aa8
	ldr r0, [pc, #16]	@ 00042aa8 0448
.org 0x42aaa
	ldrb r1, [r3, #16]	@ 00042aaa 197c
.org 0x42aac
	lsls r1, r1, #2	@ 00042aac 8900
.org 0x42aae
	adds r1, r1, r0	@ 00042aae 0918
.org 0x42ab0
	ldr r1, [r1, #0]	@ 00042ab0 0968
.org 0x42ab2
	adds r0, r3, #0	@ 00042ab2 181c
