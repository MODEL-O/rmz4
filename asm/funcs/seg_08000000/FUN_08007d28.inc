@ FUN_08007d28  entry 0x08007d28  size 124
.thumb
.org 0x7d28
FUN_08007d28:
	push {r4, r5, r6, r7, lr}	@ 00007d28 f0b5
.org 0x7d2a
	adds r5, r0, #0	@ 00007d2a 051c
.org 0x7d2c
	adds r6, r1, #0	@ 00007d2c 0e1c
.org 0x7d2e
	ldr r7, [pc, #108]	@ 00007d2e 1b4f
.org 0x7d30
	movs r1, #232	@ 00007d30 e821
.org 0x7d32
	lsls r1, r1, #1	@ 00007d32 4900
.org 0x7d34
	adds r0, r7, r1	@ 00007d34 7818
.org 0x7d36
	ldrh r0, [r0, #0]	@ 00007d36 0088
.org 0x7d38
	cmp r0, #4	@ 00007d38 0428
.org 0x7d3a
	bne.n 0x7d4e	@ 00007d3a 08d1
.org 0x7d3c
	ldr r1, [pc, #96]	@ 00007d3c 1849
.org 0x7d3e
	adds r0, r5, r1	@ 00007d3e 6818
.org 0x7d40
	movs r1, #240	@ 00007d40 f021
.org 0x7d42
	lsls r1, r1, #10	@ 00007d42 8902
.org 0x7d44
	bl 0x129050	@ 00007d44 21f184f9
.org 0x7d48
	movs r1, #240	@ 00007d48 f021
.org 0x7d4a
	lsls r1, r1, #8	@ 00007d4a 0902
.org 0x7d4c
	adds r5, r0, r1	@ 00007d4c 4518
.org 0x7d4e
	asrs r3, r5, #12	@ 00007d4e 2b13
.org 0x7d50
	asrs r1, r6, #12	@ 00007d50 3113
.org 0x7d52
	movs r0, #220	@ 00007d52 dc20
.org 0x7d54
	lsls r0, r0, #1	@ 00007d54 4000
.org 0x7d56
	adds r4, r7, r0	@ 00007d56 3c18
.org 0x7d58
	movs r0, #252	@ 00007d58 fc20
.org 0x7d5a
	lsls r0, r0, #3	@ 00007d5a c000
.org 0x7d5c
	adds r2, r7, r0	@ 00007d5c 3a18
.org 0x7d5e
	ldrh r0, [r2, #0]	@ 00007d5e 1088
.org 0x7d60
	muls r0, r1	@ 00007d60 4843
.org 0x7d62
	adds r0, r0, r3	@ 00007d62 c018
.org 0x7d64
	adds r0, #2	@ 00007d64 0230
.org 0x7d66
	lsls r0, r0, #1	@ 00007d66 4000
.org 0x7d68
	adds r0, r0, r2	@ 00007d68 8018
.org 0x7d6a
	ldrh r0, [r0, #0]	@ 00007d6a 0088
.org 0x7d6c
	ldr r1, [r4, #0]	@ 00007d6c 2168
.org 0x7d6e
	lsls r0, r0, #1	@ 00007d6e 4000
.org 0x7d70
	adds r0, r0, r1	@ 00007d70 4018
.org 0x7d72
	ldrh r4, [r0, #0]	@ 00007d72 0488
.org 0x7d74
	movs r1, #15	@ 00007d74 0f21
.org 0x7d76
	ands r1, r4	@ 00007d76 2140
.org 0x7d78
	cmp r1, #0	@ 00007d78 0029
.org 0x7d7a
	beq.n 0x7d98	@ 00007d7a 0dd0
.org 0x7d7c
	cmp r1, #1	@ 00007d7c 0129
.org 0x7d7e
	beq.n 0x7dac	@ 00007d7e 15d0
.org 0x7d80
	ldr r0, [pc, #32]	@ 00007d80 0848
.org 0x7d82
	lsls r1, r1, #2	@ 00007d82 8900
.org 0x7d84
	adds r1, r1, r0	@ 00007d84 0918
.org 0x7d86
	ldr r0, [pc, #32]	@ 00007d86 0848
.org 0x7d88
	ands r6, r0	@ 00007d88 0640
.org 0x7d8a
	ldr r2, [r1, #0]	@ 00007d8a 0a68
.org 0x7d8c
	ands r0, r5	@ 00007d8c 2840
.org 0x7d8e
	adds r1, r6, #0	@ 00007d8e 311c
.org 0x7d90
	bl 0x128f84	@ 00007d90 21f1f8f8
.org 0x7d94
	cmp r0, #0	@ 00007d94 0028
.org 0x7d96
	bne.n 0x7dac	@ 00007d96 09d1
.org 0x7d98
	movs r0, #0	@ 00007d98 0020
.org 0x7d9a
	b.n 0x7dae	@ 00007d9a 08e0
.org 0x7d9c
	.byte 0xb0,0x0a,0x00,0x02	@ 00007d9c data
.org 0x7da0
	.byte 0x00,0x10,0xff,0xff	@ 00007da0 data
