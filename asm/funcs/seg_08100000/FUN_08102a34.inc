@ FUN_08102a34  entry 0x08102a34  size 170
.thumb
.org 0x102a34
FUN_08102a34:
	push {r4, lr}	@ 00102a34 10b5
.org 0x102a36
	movs r4, #1	@ 00102a36 0124
.org 0x102a38
	movs r0, #91	@ 00102a38 5b20
.org 0x102a3a
	bl 0x6984	@ 00102a3a 03f7a3ff
.org 0x102a3e
	ldr r2, [pc, #44]	@ 00102a3e 0b4a
.org 0x102a40
	ldrb r1, [r2, #7]	@ 00102a40 d179
.org 0x102a42
	adds r0, r4, #0	@ 00102a42 201c
.org 0x102a44
	ands r0, r1	@ 00102a44 0840
.org 0x102a46
	cmp r0, #0	@ 00102a46 0028
.org 0x102a48
	beq.n 0x102a70	@ 00102a48 12d0
.org 0x102a4a
	movs r4, #17	@ 00102a4a 1124
.org 0x102a4c
	movs r0, #2	@ 00102a4c 0220
.org 0x102a4e
	ands r0, r1	@ 00102a4e 0840
.org 0x102a50
	cmp r0, #0	@ 00102a50 0028
.org 0x102a52
	beq.n 0x102ac2	@ 00102a52 36d0
.org 0x102a54
	movs r4, #19	@ 00102a54 1324
.org 0x102a56
	movs r0, #4	@ 00102a56 0420
.org 0x102a58
	ands r0, r1	@ 00102a58 0840
.org 0x102a5a
	cmp r0, #0	@ 00102a5a 0028
.org 0x102a5c
	beq.n 0x102ac2	@ 00102a5c 31d0
.org 0x102a5e
	movs r4, #21	@ 00102a5e 1524
.org 0x102a60
	movs r0, #8	@ 00102a60 0820
.org 0x102a62
	ands r0, r1	@ 00102a62 0840
.org 0x102a64
	cmp r0, #0	@ 00102a64 0028
.org 0x102a66
	beq.n 0x102ac2	@ 00102a66 2cd0
.org 0x102a68
	movs r4, #23	@ 00102a68 1724
.org 0x102a6a
	b.n 0x102ac2	@ 00102a6a 2ae0
.org 0x102a6c
	.byte 0xb0,0xe8,0x02,0x02	@ 00102a6c data
.org 0x102a70
	ldrb r1, [r2, #6]	@ 00102a70 9179
.org 0x102a72
	movs r0, #16	@ 00102a72 1020
.org 0x102a74
	ands r0, r1	@ 00102a74 0840
.org 0x102a76
	cmp r0, #0	@ 00102a76 0028
.org 0x102a78
	beq.n 0x102a9c	@ 00102a78 10d0
.org 0x102a7a
	movs r4, #9	@ 00102a7a 0924
.org 0x102a7c
	movs r0, #32	@ 00102a7c 2020
.org 0x102a7e
	ands r0, r1	@ 00102a7e 0840
.org 0x102a80
	cmp r0, #0	@ 00102a80 0028
.org 0x102a82
	beq.n 0x102ac2	@ 00102a82 1ed0
.org 0x102a84
	movs r4, #11	@ 00102a84 0b24
.org 0x102a86
	movs r0, #64	@ 00102a86 4020
.org 0x102a88
	ands r0, r1	@ 00102a88 0840
.org 0x102a8a
	cmp r0, #0	@ 00102a8a 0028
.org 0x102a8c
	beq.n 0x102ac2	@ 00102a8c 19d0
.org 0x102a8e
	movs r4, #13	@ 00102a8e 0d24
.org 0x102a90
	movs r0, #128	@ 00102a90 8020
.org 0x102a92
	ands r0, r1	@ 00102a92 0840
.org 0x102a94
	cmp r0, #0	@ 00102a94 0028
.org 0x102a96
	beq.n 0x102ac2	@ 00102a96 14d0
.org 0x102a98
	movs r4, #15	@ 00102a98 0f24
.org 0x102a9a
	b.n 0x102ac2	@ 00102a9a 12e0
.org 0x102a9c
	adds r0, r4, #0	@ 00102a9c 201c
.org 0x102a9e
	ands r0, r1	@ 00102a9e 0840
.org 0x102aa0
	cmp r0, #0	@ 00102aa0 0028
.org 0x102aa2
	beq.n 0x102ac2	@ 00102aa2 0ed0
.org 0x102aa4
	movs r0, #2	@ 00102aa4 0220
.org 0x102aa6
	ands r0, r1	@ 00102aa6 0840
.org 0x102aa8
	cmp r0, #0	@ 00102aa8 0028
.org 0x102aaa
	beq.n 0x102ac2	@ 00102aaa 0ad0
.org 0x102aac
	movs r4, #3	@ 00102aac 0324
.org 0x102aae
	movs r0, #4	@ 00102aae 0420
.org 0x102ab0
	ands r0, r1	@ 00102ab0 0840
.org 0x102ab2
	cmp r0, #0	@ 00102ab2 0028
.org 0x102ab4
	beq.n 0x102ac2	@ 00102ab4 05d0
.org 0x102ab6
	movs r4, #5	@ 00102ab6 0524
.org 0x102ab8
	movs r0, #8	@ 00102ab8 0820
.org 0x102aba
	ands r0, r1	@ 00102aba 0840
.org 0x102abc
	cmp r0, #0	@ 00102abc 0028
.org 0x102abe
	beq.n 0x102ac2	@ 00102abe 00d0
.org 0x102ac0
	movs r4, #7	@ 00102ac0 0724
.org 0x102ac2
	ldr r1, [pc, #16]	@ 00102ac2 0449
.org 0x102ac4
	ldrb r0, [r1, #27]	@ 00102ac4 c87e
.org 0x102ac6
	cmp r0, r4	@ 00102ac6 a042
.org 0x102ac8
	bne.n 0x102ad8	@ 00102ac8 06d1
.org 0x102aca
	adds r0, r4, #1	@ 00102aca 601c
.org 0x102acc
	lsls r0, r0, #24	@ 00102acc 0006
.org 0x102ace
	lsrs r4, r0, #24	@ 00102ace 040e
.org 0x102ad0
	b.n 0x102ada	@ 00102ad0 03e0
.org 0x102ad2
	.byte 0x00	@ 00102ad2 data
.org 0x102ad3
	.byte 0x00	@ 00102ad3 data
.org 0x102ad4
	.byte 0xb0,0xe8,0x02,0x02	@ 00102ad4 data
.org 0x102ad8
	strb r4, [r1, #27]	@ 00102ad8 cc76
.org 0x102ada
	ldr r0, [pc, #12]	@ 00102ada 0348
.org 0x102adc
	lsls r1, r4, #1	@ 00102adc 6100
