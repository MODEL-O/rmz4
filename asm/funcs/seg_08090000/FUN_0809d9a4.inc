@ FUN_0809d9a4  entry 0x0809d9a4  size 130
.thumb
.org 0x9d9a4
FUN_0809d9a4:
	push {r4, lr}	@ 0009d9a4 10b5
.org 0x9d9a6
	adds r4, r0, #0	@ 0009d9a6 041c
.org 0x9d9a8
	ldrb r0, [r4, #14]	@ 0009d9a8 a07b
.org 0x9d9aa
	cmp r0, #0	@ 0009d9aa 0028
.org 0x9d9ac
	bne.n 0x9d9d0	@ 0009d9ac 10d1
.org 0x9d9ae
	ldrb r0, [r4, #17]	@ 0009d9ae 607c
.org 0x9d9b0
	cmp r0, #0	@ 0009d9b0 0028
.org 0x9d9b2
	beq.n 0x9d9bc	@ 0009d9b2 03d0
.org 0x9d9b4
	ldr r0, [pc, #0]	@ 0009d9b4 0048
.org 0x9d9b6
	b.n 0x9d9c0	@ 0009d9b6 03e0
.org 0x9d9b8
	.byte 0x80,0xfe,0xff,0xff	@ 0009d9b8 data
.org 0x9d9bc
	movs r0, #192	@ 0009d9bc c020
.org 0x9d9be
	lsls r0, r0, #1	@ 0009d9be 4000
.org 0x9d9c0
	str r0, [r4, #92]	@ 0009d9c0 e065
.org 0x9d9c2
	ldr r0, [pc, #56]	@ 0009d9c2 0e48
.org 0x9d9c4
	str r0, [r4, #96]	@ 0009d9c4 2066
.org 0x9d9c6
	movs r0, #255	@ 0009d9c6 ff20
.org 0x9d9c8
	strb r0, [r4, #18]	@ 0009d9c8 a074
.org 0x9d9ca
	ldrb r0, [r4, #14]	@ 0009d9ca a07b
.org 0x9d9cc
	adds r0, #1	@ 0009d9cc 0130
.org 0x9d9ce
	strb r0, [r4, #14]	@ 0009d9ce a073
.org 0x9d9d0
	adds r0, r4, #0	@ 0009d9d0 201c
.org 0x9d9d2
	bl 0x1cff0	@ 0009d9d2 7ff70dfb
.org 0x9d9d6
	ldr r0, [r4, #84]	@ 0009d9d6 606d
.org 0x9d9d8
	ldr r1, [r4, #92]	@ 0009d9d8 e16d
.org 0x9d9da
	adds r0, r0, r1	@ 0009d9da 4018
.org 0x9d9dc
	str r0, [r4, #84]	@ 0009d9dc 6065
.org 0x9d9de
	ldr r0, [r4, #88]	@ 0009d9de a06d
.org 0x9d9e0
	ldr r1, [r4, #96]	@ 0009d9e0 216e
.org 0x9d9e2
	adds r0, r0, r1	@ 0009d9e2 4018
.org 0x9d9e4
	str r0, [r4, #88]	@ 0009d9e4 a065
.org 0x9d9e6
	adds r1, #64	@ 0009d9e6 4031
.org 0x9d9e8
	str r1, [r4, #96]	@ 0009d9e8 2166
.org 0x9d9ea
	ldrb r1, [r4, #18]	@ 0009d9ea a17c
.org 0x9d9ec
	movs r0, #1	@ 0009d9ec 0120
.org 0x9d9ee
	ands r0, r1	@ 0009d9ee 0840
.org 0x9d9f0
	cmp r0, #0	@ 0009d9f0 0028
.org 0x9d9f2
	beq.n 0x9da00	@ 0009d9f2 05d0
.org 0x9d9f4
	ldrb r1, [r4, #10]	@ 0009d9f4 a17a
.org 0x9d9f6
	movs r0, #1	@ 0009d9f6 0120
.org 0x9d9f8
	orrs r0, r1	@ 0009d9f8 0843
.org 0x9d9fa
	b.n 0x9da06	@ 0009d9fa 04e0
.org 0x9d9fc
	.byte 0x00,0xfc,0xff,0xff	@ 0009d9fc data
.org 0x9da00
	ldrb r1, [r4, #10]	@ 0009da00 a17a
.org 0x9da02
	movs r0, #254	@ 0009da02 fe20
.org 0x9da04
	ands r0, r1	@ 0009da04 0840
.org 0x9da06
	strb r0, [r4, #10]	@ 0009da06 a072
.org 0x9da08
	ldrb r0, [r4, #18]	@ 0009da08 a07c
.org 0x9da0a
	subs r0, #1	@ 0009da0a 0138
.org 0x9da0c
	strb r0, [r4, #18]	@ 0009da0c a074
.org 0x9da0e
	lsls r0, r0, #24	@ 0009da0e 0006
.org 0x9da10
	lsrs r0, r0, #24	@ 0009da10 000e
.org 0x9da12
	cmp r0, #255	@ 0009da12 ff28
.org 0x9da14
	bne.n 0x9da28	@ 0009da14 08d1
.org 0x9da16
	ldr r1, [pc, #24]	@ 0009da16 0649
.org 0x9da18
	ldrb r0, [r4, #9]	@ 0009da18 607a
.org 0x9da1a
	lsls r0, r0, #2	@ 0009da1a 8000
.org 0x9da1c
	adds r0, r0, r1	@ 0009da1c 4018
.org 0x9da1e
	movs r1, #4	@ 0009da1e 0421
.org 0x9da20
	str r1, [r4, #12]	@ 0009da20 e160
.org 0x9da22
	ldr r0, [r0, #0]	@ 0009da22 0068
.org 0x9da24
	ldr r0, [r0, #16]	@ 0009da24 0069
