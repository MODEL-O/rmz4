@ FUN_080d6d5c  entry 0x080d6d5c  size 100
.thumb
.org 0xd6d5c
FUN_080d6d5c:
	push {r4, lr}	@ 000d6d5c 10b5
.org 0xd6d5e
	adds r4, r0, #0	@ 000d6d5e 041c
.org 0xd6d60
	bl 0x1cff0	@ 000d6d60 46f746f9
.org 0xd6d64
	ldrb r0, [r4, #18]	@ 000d6d64 a07c
.org 0xd6d66
	adds r0, #1	@ 000d6d66 0130
.org 0xd6d68
	strb r0, [r4, #18]	@ 000d6d68 a074
.org 0xd6d6a
	movs r1, #1	@ 000d6d6a 0121
.org 0xd6d6c
	ands r0, r1	@ 000d6d6c 0840
.org 0xd6d6e
	cmp r0, #0	@ 000d6d6e 0028
.org 0xd6d70
	beq.n 0xd6d78	@ 000d6d70 02d0
.org 0xd6d72
	ldrb r0, [r4, #10]	@ 000d6d72 a07a
.org 0xd6d74
	orrs r0, r1	@ 000d6d74 0843
.org 0xd6d76
	b.n 0xd6d7e	@ 000d6d76 02e0
.org 0xd6d78
	ldrb r1, [r4, #10]	@ 000d6d78 a17a
.org 0xd6d7a
	movs r0, #254	@ 000d6d7a fe20
.org 0xd6d7c
	ands r0, r1	@ 000d6d7c 0840
.org 0xd6d7e
	strb r0, [r4, #10]	@ 000d6d7e a072
.org 0xd6d80
	ldr r0, [r4, #84]	@ 000d6d80 606d
.org 0xd6d82
	ldr r1, [r4, #92]	@ 000d6d82 e16d
.org 0xd6d84
	adds r0, r0, r1	@ 000d6d84 4018
.org 0xd6d86
	str r0, [r4, #84]	@ 000d6d86 6065
.org 0xd6d88
	ldr r1, [r4, #88]	@ 000d6d88 a16d
.org 0xd6d8a
	ldr r2, [r4, #96]	@ 000d6d8a 226e
.org 0xd6d8c
	adds r1, r1, r2	@ 000d6d8c 8918
.org 0xd6d8e
	str r1, [r4, #88]	@ 000d6d8e a165
.org 0xd6d90
	adds r2, #64	@ 000d6d90 4032
.org 0xd6d92
	str r2, [r4, #96]	@ 000d6d92 2266
.org 0xd6d94
	bl 0x7c7c	@ 000d6d94 30f772ff
.org 0xd6d98
	lsls r0, r0, #16	@ 000d6d98 0004
.org 0xd6d9a
	cmp r0, #0	@ 000d6d9a 0028
.org 0xd6d9c
	beq.n 0xd6dba	@ 000d6d9c 0dd0
.org 0xd6d9e
	adds r1, r4, #0	@ 000d6d9e 211c
.org 0xd6da0
	adds r1, #84	@ 000d6da0 5431
.org 0xd6da2
	movs r0, #3	@ 000d6da2 0320
.org 0xd6da4
	bl 0xd0c88	@ 000d6da4 f9f770ff
.org 0xd6da8
	ldr r1, [pc, #20]	@ 000d6da8 0549
.org 0xd6daa
	ldrb r0, [r4, #9]	@ 000d6daa 607a
.org 0xd6dac
	lsls r0, r0, #2	@ 000d6dac 8000
.org 0xd6dae
	adds r0, r0, r1	@ 000d6dae 4018
.org 0xd6db0
	movs r1, #2	@ 000d6db0 0221
.org 0xd6db2
	str r1, [r4, #12]	@ 000d6db2 e160
.org 0xd6db4
	ldr r0, [r0, #0]	@ 000d6db4 0068
.org 0xd6db6
	ldr r0, [r0, #8]	@ 000d6db6 8068
.org 0xd6db8
	str r0, [r4, #20]	@ 000d6db8 6061
.org 0xd6dba
	pop {r4}	@ 000d6dba 10bc
.org 0xd6dbc
	pop {r0}	@ 000d6dbc 01bc
.org 0xd6dbe
	bx r0	@ 000d6dbe 0047
