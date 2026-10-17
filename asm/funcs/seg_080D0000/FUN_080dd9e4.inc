@ FUN_080dd9e4  entry 0x080dd9e4  size 88
.thumb
.org 0xdd9e4
FUN_080dd9e4:
	push {r4, lr}	@ 000dd9e4 10b5
.org 0xdd9e6
	adds r4, r0, #0	@ 000dd9e6 041c
.org 0xdd9e8
	bl 0x1cc9c	@ 000dd9e8 3ff758f9
.org 0xdd9ec
	ldrb r1, [r4, #10]	@ 000dd9ec a17a
.org 0xdd9ee
	movs r0, #1	@ 000dd9ee 0120
.org 0xdd9f0
	orrs r0, r1	@ 000dd9f0 0843
.org 0xdd9f2
	movs r1, #2	@ 000dd9f2 0221
.org 0xdd9f4
	orrs r0, r1	@ 000dd9f4 0843
.org 0xdd9f6
	strb r0, [r4, #10]	@ 000dd9f6 a072
.org 0xdd9f8
	ldr r1, [pc, #20]	@ 000dd9f8 0549
.org 0xdd9fa
	adds r0, r4, #0	@ 000dd9fa 201c
.org 0xdd9fc
	bl 0x1cf00	@ 000dd9fc 3ff780fa
.org 0xdda00
	adds r0, r4, #0	@ 000dda00 201c
.org 0xdda02
	bl 0x1cff0	@ 000dda02 3ff7f5fa
.org 0xdda06
	ldrb r0, [r4, #17]	@ 000dda06 607c
.org 0xdda08
	cmp r0, #0	@ 000dda08 0028
.org 0xdda0a
	beq.n 0xdda18	@ 000dda0a 05d0
.org 0xdda0c
	ldr r0, [pc, #4]	@ 000dda0c 0148
.org 0xdda0e
	b.n 0xdda1c	@ 000dda0e 05e0
.org 0xdda10
	.byte 0x13,0xba,0x00,0x00	@ 000dda10 data
.org 0xdda14
	.byte 0x80,0xfe,0xff,0xff	@ 000dda14 data
.org 0xdda18
	movs r0, #192	@ 000dda18 c020
.org 0xdda1a
	lsls r0, r0, #1	@ 000dda1a 4000
.org 0xdda1c
	str r0, [r4, #92]	@ 000dda1c e065
.org 0xdda1e
	ldr r0, [pc, #36]	@ 000dda1e 0948
.org 0xdda20
	str r0, [r4, #96]	@ 000dda20 2066
.org 0xdda22
	movs r0, #20	@ 000dda22 1420
.org 0xdda24
	strb r0, [r4, #18]	@ 000dda24 a074
.org 0xdda26
	ldr r1, [pc, #32]	@ 000dda26 0849
.org 0xdda28
	ldrb r0, [r4, #9]	@ 000dda28 607a
.org 0xdda2a
	lsls r0, r0, #2	@ 000dda2a 8000
.org 0xdda2c
	adds r0, r0, r1	@ 000dda2c 4018
.org 0xdda2e
	movs r1, #1	@ 000dda2e 0121
.org 0xdda30
	str r1, [r4, #12]	@ 000dda30 e160
.org 0xdda32
	ldr r0, [r0, #0]	@ 000dda32 0068
.org 0xdda34
	ldr r0, [r0, #4]	@ 000dda34 4068
.org 0xdda36
	str r0, [r4, #20]	@ 000dda36 6061
.org 0xdda38
	adds r0, r4, #0	@ 000dda38 201c
.org 0xdda3a
	bl 0xdd6c8	@ 000dda3a fff745fe
