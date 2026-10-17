@ FUN_08018a58  entry 0x08018a58  size 202
.thumb
.org 0x18a58
FUN_08018a58:
	push {r4, r5, lr}	@ 00018a58 30b5
.org 0x18a5a
	adds r4, r0, #0	@ 00018a5a 041c
.org 0x18a5c
	ldrb r0, [r4, #14]	@ 00018a5c a07b
.org 0x18a5e
	cmp r0, #0	@ 00018a5e 0028
.org 0x18a60
	bne.n 0x18a80	@ 00018a60 0ed1
.org 0x18a62
	ldr r0, [r4, #92]	@ 00018a62 e06d
.org 0x18a64
	lsls r0, r0, #16	@ 00018a64 0004
.org 0x18a66
	lsrs r0, r0, #20	@ 00018a66 000d
.org 0x18a68
	lsls r0, r0, #1	@ 00018a68 4000
.org 0x18a6a
	ldr r1, [pc, #164]	@ 00018a6a 2949
.org 0x18a6c
	adds r0, r0, r1	@ 00018a6c 4018
.org 0x18a6e
	ldrh r2, [r0, #0]	@ 00018a6e 0288
.org 0x18a70
	ldr r1, [pc, #160]	@ 00018a70 2849
.org 0x18a72
	ands r1, r2	@ 00018a72 1140
.org 0x18a74
	movs r2, #3	@ 00018a74 0322
.org 0x18a76
	orrs r1, r2	@ 00018a76 1143
.org 0x18a78
	strh r1, [r0, #0]	@ 00018a78 0180
.org 0x18a7a
	ldrb r0, [r4, #14]	@ 00018a7a a07b
.org 0x18a7c
	adds r0, #1	@ 00018a7c 0130
.org 0x18a7e
	strb r0, [r4, #14]	@ 00018a7e a073
.org 0x18a80
	ldr r0, [pc, #148]	@ 00018a80 2548
.org 0x18a82
	ldr r1, [pc, #152]	@ 00018a82 2649
.org 0x18a84
	adds r5, r0, r1	@ 00018a84 4518
.org 0x18a86
	ldrb r1, [r5, #0]	@ 00018a86 2978
.org 0x18a88
	movs r0, #1	@ 00018a88 0120
.org 0x18a8a
	ands r0, r1	@ 00018a8a 0840
.org 0x18a8c
	cmp r0, #0	@ 00018a8c 0028
.org 0x18a8e
	bne.n 0x18ac0	@ 00018a8e 17d1
.org 0x18a90
	ldr r1, [r4, #52]	@ 00018a90 616b
.org 0x18a92
	ldr r0, [pc, #140]	@ 00018a92 2348
.org 0x18a94
	cmp r1, r0	@ 00018a94 8142
.org 0x18a96
	ble.n 0x18ac0	@ 00018a96 13dd
.org 0x18a98
	ldr r1, [r4, #56]	@ 00018a98 a16b
.org 0x18a9a
	movs r0, #240	@ 00018a9a f020
.org 0x18a9c
	lsls r0, r0, #1	@ 00018a9c 4000
.org 0x18a9e
	cmp r1, r0	@ 00018a9e 8142
.org 0x18aa0
	ble.n 0x18ac0	@ 00018aa0 0edd
.org 0x18aa2
	subs r0, #106	@ 00018aa2 6a38
.org 0x18aa4
	bl 0x2b10	@ 00018aa4 eaf734f8
.org 0x18aa8
	ldrb r1, [r5, #0]	@ 00018aa8 2978
.org 0x18aaa
	movs r0, #1	@ 00018aaa 0120
.org 0x18aac
	orrs r0, r1	@ 00018aac 0843
.org 0x18aae
	strb r0, [r5, #0]	@ 00018aae 2870
.org 0x18ab0
	ldr r0, [pc, #112]	@ 00018ab0 1c48
.org 0x18ab2
	ldr r1, [pc, #116]	@ 00018ab2 1d49
.org 0x18ab4
	adds r0, r0, r1	@ 00018ab4 4018
.org 0x18ab6
	ldr r1, [r0, #0]	@ 00018ab6 0168
.org 0x18ab8
	adds r1, #84	@ 00018ab8 5431
.org 0x18aba
	movs r0, #8	@ 00018aba 0820
.org 0x18abc
	bl 0x1fe64	@ 00018abc 07f0d2f9
.org 0x18ac0
	ldr r0, [pc, #84]	@ 00018ac0 1548
.org 0x18ac2
	ldr r1, [pc, #88]	@ 00018ac2 1649
.org 0x18ac4
	adds r5, r0, r1	@ 00018ac4 4518
.org 0x18ac6
	ldrb r1, [r5, #0]	@ 00018ac6 2978
.org 0x18ac8
	movs r0, #2	@ 00018ac8 0220
.org 0x18aca
	ands r0, r1	@ 00018aca 0840
.org 0x18acc
	cmp r0, #0	@ 00018acc 0028
.org 0x18ace
	bne.n 0x18afe	@ 00018ace 16d1
.org 0x18ad0
	ldr r1, [r4, #52]	@ 00018ad0 616b
.org 0x18ad2
	ldr r0, [pc, #88]	@ 00018ad2 1648
.org 0x18ad4
	cmp r1, r0	@ 00018ad4 8142
.org 0x18ad6
	ble.n 0x18afe	@ 00018ad6 12dd
.org 0x18ad8
	ldr r1, [r4, #56]	@ 00018ad8 a16b
.org 0x18ada
	ldr r0, [pc, #84]	@ 00018ada 1548
.org 0x18adc
	cmp r1, r0	@ 00018adc 8142
.org 0x18ade
	bgt.n 0x18afe	@ 00018ade 0edc
.org 0x18ae0
	subs r0, #105	@ 00018ae0 6938
.org 0x18ae2
	bl 0x2b10	@ 00018ae2 eaf715f8
.org 0x18ae6
	ldrb r1, [r5, #0]	@ 00018ae6 2978
.org 0x18ae8
	movs r0, #2	@ 00018ae8 0220
.org 0x18aea
	orrs r0, r1	@ 00018aea 0843
.org 0x18aec
	strb r0, [r5, #0]	@ 00018aec 2870
.org 0x18aee
	ldr r0, [pc, #52]	@ 00018aee 0d48
.org 0x18af0
	ldr r1, [pc, #52]	@ 00018af0 0d49
.org 0x18af2
	adds r0, r0, r1	@ 00018af2 4018
.org 0x18af4
	ldr r1, [r0, #0]	@ 00018af4 0168
.org 0x18af6
	adds r1, #84	@ 00018af6 5431
.org 0x18af8
	movs r0, #8	@ 00018af8 0820
.org 0x18afa
	bl 0x1fe64	@ 00018afa 07f0b3f9
.org 0x18afe
	ldr r1, [r4, #56]	@ 00018afe a16b
.org 0x18b00
	movs r0, #240	@ 00018b00 f020
.org 0x18b02
	lsls r0, r0, #1	@ 00018b02 4000
.org 0x18b04
	cmp r1, r0	@ 00018b04 8142
.org 0x18b06
	ble.n 0x18b38	@ 00018b06 17dd
.org 0x18b08
	ldr r0, [pc, #12]	@ 00018b08 0348
.org 0x18b0a
	ldr r1, [pc, #40]	@ 00018b0a 0a49
.org 0x18b0c
	b.n 0x18b3c	@ 00018b0c 16e0
.org 0x18b0e
	.byte 0x00	@ 00018b0e data
.org 0x18b0f
	.byte 0x00	@ 00018b0f data
.org 0x18b10
	.byte 0x04,0x0a,0x00,0x02	@ 00018b10 data
.org 0x18b14
	.byte 0xfc,0xff,0x00,0x00	@ 00018b14 data
.org 0x18b18
	.byte 0xb0,0x0a,0x00,0x02	@ 00018b18 data
.org 0x18b1c
	.byte 0x29,0xd0,0x02,0x00	@ 00018b1c data
.org 0x18b20
	.byte 0xd0,0x11,0x00,0x00	@ 00018b20 data
