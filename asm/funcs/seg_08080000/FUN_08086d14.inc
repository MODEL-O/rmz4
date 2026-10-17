@ FUN_08086d14  entry 0x08086d14  size 150
.thumb
.org 0x86d14
FUN_08086d14:
	push {r4, r5, lr}	@ 00086d14 30b5
.org 0x86d16
	sub sp, #8	@ 00086d16 82b0
.org 0x86d18
	adds r4, r0, #0	@ 00086d18 041c
.org 0x86d1a
	adds r0, #140	@ 00086d1a 8c30
.org 0x86d1c
	ldr r0, [r0, #0]	@ 00086d1c 0068
.org 0x86d1e
	movs r1, #128	@ 00086d1e 8021
.org 0x86d20
	lsls r1, r1, #2	@ 00086d20 8900
.org 0x86d22
	ands r0, r1	@ 00086d22 0840
.org 0x86d24
	cmp r0, #0	@ 00086d24 0028
.org 0x86d26
	beq.n 0x86d48	@ 00086d26 0fd0
.org 0x86d28
	ldr r1, [pc, #24]	@ 00086d28 0649
.org 0x86d2a
	ldrb r0, [r4, #9]	@ 00086d2a 607a
.org 0x86d2c
	lsls r0, r0, #2	@ 00086d2c 8000
.org 0x86d2e
	adds r0, r0, r1	@ 00086d2e 4018
.org 0x86d30
	movs r1, #2	@ 00086d30 0221
.org 0x86d32
	str r1, [r4, #12]	@ 00086d32 e160
.org 0x86d34
	ldr r0, [r0, #0]	@ 00086d34 0068
.org 0x86d36
	ldr r0, [r0, #8]	@ 00086d36 8068
.org 0x86d38
	str r0, [r4, #20]	@ 00086d38 6061
.org 0x86d3a
	adds r0, r4, #0	@ 00086d3a 201c
.org 0x86d3c
	bl 0x86db8	@ 00086d3c 00f03cf8
.org 0x86d40
	b.n 0x86dae	@ 00086d40 35e0
.org 0x86d42
	.byte 0x00	@ 00086d42 data
.org 0x86d43
	.byte 0x00	@ 00086d43 data
.org 0x86d44
	.byte 0x40,0xdb,0x85,0x08	@ 00086d44 data
.org 0x86d48
	ldr r2, [pc, #24]	@ 00086d48 064a
.org 0x86d4a
	ldrh r1, [r2, #20]	@ 00086d4a 918a
.org 0x86d4c
	movs r0, #1	@ 00086d4c 0120
.org 0x86d4e
	ands r0, r1	@ 00086d4e 0840
.org 0x86d50
	cmp r0, #0	@ 00086d50 0028
.org 0x86d52
	bne.n 0x86dae	@ 00086d52 2cd1
.org 0x86d54
	adds r5, r4, #0	@ 00086d54 251c
.org 0x86d56
	adds r5, #184	@ 00086d56 b835
.org 0x86d58
	ldr r0, [r5, #0]	@ 00086d58 2868
.org 0x86d5a
	cmp r0, #0	@ 00086d5a 0028
.org 0x86d5c
	beq.n 0x86d68	@ 00086d5c 04d0
.org 0x86d5e
	subs r0, #1	@ 00086d5e 0138
.org 0x86d60
	b.n 0x86dac	@ 00086d60 24e0
.org 0x86d62
	.byte 0x00	@ 00086d62 data
.org 0x86d63
	.byte 0x00	@ 00086d63 data
.org 0x86d64
	.byte 0x10,0xe9,0x02,0x02	@ 00086d64 data
.org 0x86d68
	adds r0, r2, #0	@ 00086d68 101c
.org 0x86d6a
	adds r0, #232	@ 00086d6a e830
.org 0x86d6c
	adds r1, r4, #0	@ 00086d6c 211c
.org 0x86d6e
	adds r1, #84	@ 00086d6e 5431
.org 0x86d70
	bl 0x1fb14	@ 00086d70 98f7d0fe
.org 0x86d74
	cmp r0, #0	@ 00086d74 0028
.org 0x86d76
	bne.n 0x86dae	@ 00086d76 1ad1
.org 0x86d78
	adds r0, r4, #0	@ 00086d78 201c
.org 0x86d7a
	movs r1, #7	@ 00086d7a 0721
.org 0x86d7c
	bl 0x7f9d8	@ 00086d7c f8f72cfe
.org 0x86d80
	adds r1, r4, #0	@ 00086d80 211c
.org 0x86d82
	adds r1, #180	@ 00086d82 b431
.org 0x86d84
	lsls r0, r0, #16	@ 00086d84 0004
.org 0x86d86
	lsrs r0, r0, #16	@ 00086d86 000c
.org 0x86d88
	ldrb r1, [r1, #0]	@ 00086d88 0978
.org 0x86d8a
	cmp r0, r1	@ 00086d8a 8842
.org 0x86d8c
	bcs.n 0x86dae	@ 00086d8c 0fd2
.org 0x86d8e
	ldr r0, [r4, #84]	@ 00086d8e 606d
.org 0x86d90
	movs r1, #128	@ 00086d90 8021
.org 0x86d92
	lsls r1, r1, #4	@ 00086d92 0901
.org 0x86d94
	adds r0, r0, r1	@ 00086d94 4018
.org 0x86d96
	str r0, [sp, #0]	@ 00086d96 0090
.org 0x86d98
	ldr r0, [r4, #88]	@ 00086d98 a06d
.org 0x86d9a
	adds r0, r0, r1	@ 00086d9a 4018
.org 0x86d9c
	str r0, [sp, #4]	@ 00086d9c 0190
.org 0x86d9e
	ldrb r3, [r4, #16]	@ 00086d9e 237c
.org 0x86da0
	adds r0, r4, #0	@ 00086da0 201c
.org 0x86da2
	mov r1, sp	@ 00086da2 6946
.org 0x86da4
	movs r2, #1	@ 00086da4 0122
.org 0x86da6
	bl 0x85fe4	@ 00086da6 fff71df9
