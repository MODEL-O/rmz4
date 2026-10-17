@ FUN_080b78b4  entry 0x080b78b4  size 122
.thumb
.org 0xb78b4
FUN_080b78b4:
	push {r4, lr}	@ 000b78b4 10b5
.org 0xb78b6
	adds r4, r0, #0	@ 000b78b6 041c
.org 0xb78b8
	ldrb r0, [r4, #14]	@ 000b78b8 a07b
.org 0xb78ba
	cmp r0, #0	@ 000b78ba 0028
.org 0xb78bc
	bne.n 0xb78e4	@ 000b78bc 12d1
.org 0xb78be
	ldr r1, [pc, #24]	@ 000b78be 0649
.org 0xb78c0
	adds r0, r4, #0	@ 000b78c0 201c
.org 0xb78c2
	bl 0x1cf00	@ 000b78c2 65f71dfb
.org 0xb78c6
	ldr r0, [pc, #20]	@ 000b78c6 0548
.org 0xb78c8
	str r0, [r4, #96]	@ 000b78c8 2066
.org 0xb78ca
	ldr r0, [pc, #20]	@ 000b78ca 0548
.org 0xb78cc
	bl 0x2b10	@ 000b78cc 4bf720f9
.org 0xb78d0
	ldrb r0, [r4, #14]	@ 000b78d0 a07b
.org 0xb78d2
	adds r0, #1	@ 000b78d2 0130
.org 0xb78d4
	strb r0, [r4, #14]	@ 000b78d4 a073
.org 0xb78d6
	b.n 0xb7934	@ 000b78d6 2de0
.org 0xb78d8
	.byte 0x06,0xd2,0x00,0x00	@ 000b78d8 data
.org 0xb78dc
	.byte 0x00,0xfb,0xff,0xff	@ 000b78dc data
.org 0xb78e0
	.byte 0x33,0x01,0x00,0x00	@ 000b78e0 data
.org 0xb78e4
	ldr r0, [r4, #88]	@ 000b78e4 a06d
.org 0xb78e6
	ldr r1, [r4, #96]	@ 000b78e6 216e
.org 0xb78e8
	adds r0, r0, r1	@ 000b78e8 4018
.org 0xb78ea
	str r0, [r4, #88]	@ 000b78ea a065
.org 0xb78ec
	adds r1, #64	@ 000b78ec 4031
.org 0xb78ee
	str r1, [r4, #96]	@ 000b78ee 2166
.org 0xb78f0
	adds r2, r4, #0	@ 000b78f0 221c
.org 0xb78f2
	adds r2, #184	@ 000b78f2 b832
.org 0xb78f4
	ldr r1, [r2, #0]	@ 000b78f4 1168
.org 0xb78f6
	cmp r0, r1	@ 000b78f6 8842
.org 0xb78f8
	bge.n 0xb7902	@ 000b78f8 03da
.org 0xb78fa
	movs r0, #0	@ 000b78fa 0020
.org 0xb78fc
	str r0, [r4, #96]	@ 000b78fc 2066
.org 0xb78fe
	ldr r0, [r2, #0]	@ 000b78fe 1068
.org 0xb7900
	str r0, [r4, #88]	@ 000b7900 a065
.org 0xb7902
	ldr r0, [r4, #84]	@ 000b7902 606d
.org 0xb7904
	ldr r1, [r4, #88]	@ 000b7904 a16d
.org 0xb7906
	bl 0x7c7c	@ 000b7906 50f7b9f9
.org 0xb790a
	lsls r0, r0, #16	@ 000b790a 0004
.org 0xb790c
	cmp r0, #0	@ 000b790c 0028
.org 0xb790e
	beq.n 0xb7934	@ 000b790e 11d0
.org 0xb7910
	movs r1, #0	@ 000b7910 0021
.org 0xb7912
	movs r0, #1	@ 000b7912 0120
.org 0xb7914
	strb r0, [r4, #13]	@ 000b7914 6073
.org 0xb7916
	strb r1, [r4, #14]	@ 000b7916 a173
.org 0xb7918
	movs r0, #159	@ 000b7918 9f20
.org 0xb791a
	lsls r0, r0, #1	@ 000b791a 4000
.org 0xb791c
	bl 0x2b10	@ 000b791c 4bf7f8f8
.org 0xb7920
	ldr r0, [r4, #84]	@ 000b7920 606d
.org 0xb7922
	ldr r1, [r4, #88]	@ 000b7922 a16d
.org 0xb7924
	bl 0x8534	@ 000b7924 50f706fe
.org 0xb7928
	str r0, [r4, #88]	@ 000b7928 a065
.org 0xb792a
	adds r1, r4, #0	@ 000b792a 211c
.org 0xb792c
	adds r1, #84	@ 000b792c 5431
