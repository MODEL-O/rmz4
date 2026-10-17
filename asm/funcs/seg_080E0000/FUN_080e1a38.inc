@ FUN_080e1a38  entry 0x080e1a38  size 192
.thumb
.org 0xe1a38
FUN_080e1a38:
	push {r4, r5, r6, r7, lr}	@ 000e1a38 f0b5
.org 0xe1a3a
	adds r6, r0, #0	@ 000e1a3a 061c
.org 0xe1a3c
	ldr r5, [pc, #120]	@ 000e1a3c 1e4d
.org 0xe1a3e
	ldr r0, [r5, #0]	@ 000e1a3e 2868
.org 0xe1a40
	ldr r4, [pc, #120]	@ 000e1a40 1e4c
.org 0xe1a42
	muls r0, r4	@ 000e1a42 6043
.org 0xe1a44
	ldr r3, [pc, #120]	@ 000e1a44 1e4b
.org 0xe1a46
	adds r0, r0, r3	@ 000e1a46 c018
.org 0xe1a48
	lsls r0, r0, #1	@ 000e1a48 4000
.org 0xe1a4a
	lsrs r2, r0, #1	@ 000e1a4a 4208
.org 0xe1a4c
	lsrs r0, r0, #17	@ 000e1a4c 400c
.org 0xe1a4e
	movs r1, #255	@ 000e1a4e ff21
.org 0xe1a50
	ands r0, r1	@ 000e1a50 0840
.org 0xe1a52
	adds r1, #1	@ 000e1a52 0131
.org 0xe1a54
	adds r7, r0, r1	@ 000e1a54 4718
.org 0xe1a56
	adds r0, r2, #0	@ 000e1a56 101c
.org 0xe1a58
	muls r0, r4	@ 000e1a58 6043
.org 0xe1a5a
	adds r0, r0, r3	@ 000e1a5a c018
.org 0xe1a5c
	lsls r0, r0, #1	@ 000e1a5c 4000
.org 0xe1a5e
	lsrs r1, r0, #1	@ 000e1a5e 4108
.org 0xe1a60
	str r1, [r5, #0]	@ 000e1a60 2960
.org 0xe1a62
	lsls r0, r0, #6	@ 000e1a62 8001
.org 0xe1a64
	lsrs r0, r0, #23	@ 000e1a64 c00d
.org 0xe1a66
	movs r1, #192	@ 000e1a66 c021
.org 0xe1a68
	lsls r1, r1, #1	@ 000e1a68 4900
.org 0xe1a6a
	adds r3, r0, r1	@ 000e1a6a 4318
.org 0xe1a6c
	ldr r2, [pc, #84]	@ 000e1a6c 154a
.org 0xe1a6e
	ldrb r0, [r6, #17]	@ 000e1a6e 707c
.org 0xe1a70
	lsls r0, r0, #3	@ 000e1a70 c000
.org 0xe1a72
	adds r0, r0, r2	@ 000e1a72 8018
.org 0xe1a74
	ldr r1, [r6, #84]	@ 000e1a74 716d
.org 0xe1a76
	ldr r0, [r0, #0]	@ 000e1a76 0068
.org 0xe1a78
	adds r1, r1, r0	@ 000e1a78 0918
.org 0xe1a7a
	str r1, [r6, #84]	@ 000e1a7a 7165
.org 0xe1a7c
	ldrb r1, [r6, #17]	@ 000e1a7c 717c
.org 0xe1a7e
	lsls r1, r1, #3	@ 000e1a7e c900
.org 0xe1a80
	adds r2, #4	@ 000e1a80 0432
.org 0xe1a82
	adds r1, r1, r2	@ 000e1a82 8918
.org 0xe1a84
	ldr r0, [r6, #88]	@ 000e1a84 b06d
.org 0xe1a86
	ldr r1, [r1, #0]	@ 000e1a86 0968
.org 0xe1a88
	adds r0, r0, r1	@ 000e1a88 4018
.org 0xe1a8a
	str r0, [r6, #88]	@ 000e1a8a b065
.org 0xe1a8c
	ldrb r0, [r6, #17]	@ 000e1a8c 707c
.org 0xe1a8e
	cmp r0, #1	@ 000e1a8e 0128
.org 0xe1a90
	bls.n 0xe1acc	@ 000e1a90 1cd9
.org 0xe1a92
	ldr r2, [pc, #52]	@ 000e1a92 0d4a
.org 0xe1a94
	lsls r1, r0, #3	@ 000e1a94 c100
.org 0xe1a96
	adds r0, r1, r2	@ 000e1a96 8818
.org 0xe1a98
	ldr r0, [r0, #0]	@ 000e1a98 0068
.org 0xe1a9a
	muls r0, r7	@ 000e1a9a 7843
.org 0xe1a9c
	cmp r0, #0	@ 000e1a9c 0028
.org 0xe1a9e
	bge.n 0xe1aa2	@ 000e1a9e 00da
.org 0xe1aa0
	adds r0, #255	@ 000e1aa0 ff30
.org 0xe1aa2
	asrs r0, r0, #8	@ 000e1aa2 0012
.org 0xe1aa4
	str r0, [r6, #92]	@ 000e1aa4 f065
.org 0xe1aa6
	adds r0, r2, #4	@ 000e1aa6 101d
.org 0xe1aa8
	adds r0, r1, r0	@ 000e1aa8 0818
.org 0xe1aaa
	ldr r0, [r0, #0]	@ 000e1aaa 0068
.org 0xe1aac
	muls r0, r3	@ 000e1aac 5843
.org 0xe1aae
	cmp r0, #0	@ 000e1aae 0028
.org 0xe1ab0
	bge.n 0xe1ab4	@ 000e1ab0 00da
.org 0xe1ab2
	adds r0, #255	@ 000e1ab2 ff30
.org 0xe1ab4
	asrs r0, r0, #8	@ 000e1ab4 0012
.org 0xe1ab6
	b.n 0xe1ae2	@ 000e1ab6 14e0
.org 0xe1ab8
	.byte 0x38,0xdc,0x02,0x02	@ 000e1ab8 data
.org 0xe1abc
	.byte 0xfd,0x43,0x03,0x00	@ 000e1abc data
.org 0xe1ac0
	.byte 0xc3,0x9e,0x26,0x00	@ 000e1ac0 data
.org 0xe1ac4
	.byte 0x38,0x8a,0x86,0x08	@ 000e1ac4 data
.org 0xe1ac8
	.byte 0x68,0x8a,0x86,0x08	@ 000e1ac8 data
.org 0xe1acc
	ldr r1, [pc, #60]	@ 000e1acc 0f49
.org 0xe1ace
	ldrb r0, [r6, #17]	@ 000e1ace 707c
.org 0xe1ad0
	lsls r0, r0, #3	@ 000e1ad0 c000
.org 0xe1ad2
	adds r0, r0, r1	@ 000e1ad2 4018
.org 0xe1ad4
	ldr r0, [r0, #0]	@ 000e1ad4 0068
.org 0xe1ad6
	str r0, [r6, #92]	@ 000e1ad6 f065
.org 0xe1ad8
	ldrb r0, [r6, #17]	@ 000e1ad8 707c
.org 0xe1ada
	lsls r0, r0, #3	@ 000e1ada c000
.org 0xe1adc
	adds r1, #4	@ 000e1adc 0431
.org 0xe1ade
	adds r0, r0, r1	@ 000e1ade 4018
.org 0xe1ae0
	ldr r0, [r0, #0]	@ 000e1ae0 0068
.org 0xe1ae2
	str r0, [r6, #96]	@ 000e1ae2 3066
.org 0xe1ae4
	ldrb r0, [r6, #17]	@ 000e1ae4 707c
.org 0xe1ae6
	cmp r0, #1	@ 000e1ae6 0128
.org 0xe1ae8
	bne.n 0xe1b06	@ 000e1ae8 0dd1
.org 0xe1aea
	ldr r0, [pc, #36]	@ 000e1aea 0948
.org 0xe1aec
	ldr r0, [r0, #0]	@ 000e1aec 0068
.org 0xe1aee
	ldr r1, [r0, #84]	@ 000e1aee 416d
.org 0xe1af0
	ldr r0, [r6, #84]	@ 000e1af0 706d
.org 0xe1af2
	cmp r1, r0	@ 000e1af2 8142
.org 0xe1af4
	ble.n 0xe1b06	@ 000e1af4 07dd
.org 0xe1af6
	ldr r0, [r6, #92]	@ 000e1af6 f06d
