@ FUN_08099d14  entry 0x08099d14  size 210
.thumb
.org 0x99d14
FUN_08099d14:
	push {r4, r5, r6, r7, lr}	@ 00099d14 f0b5
.org 0x99d16
	sub sp, #8	@ 00099d16 82b0
.org 0x99d18
	adds r4, r0, #0	@ 00099d18 041c
.org 0x99d1a
	bl 0x1cff0	@ 00099d1a 83f769f9
.org 0x99d1e
	ldr r0, [r4, #84]	@ 00099d1e 606d
.org 0x99d20
	str r0, [sp, #0]	@ 00099d20 0090
.org 0x99d22
	ldr r0, [r4, #88]	@ 00099d22 a06d
.org 0x99d24
	ldr r1, [pc, #28]	@ 00099d24 0749
.org 0x99d26
	adds r0, r0, r1	@ 00099d26 4018
.org 0x99d28
	str r0, [sp, #4]	@ 00099d28 0190
.org 0x99d2a
	ldr r5, [pc, #28]	@ 00099d2a 074d
.org 0x99d2c
	adds r0, r4, #0	@ 00099d2c 201c
.org 0x99d2e
	adds r0, #188	@ 00099d2e bc30
.org 0x99d30
	ldrb r2, [r0, #0]	@ 00099d30 0278
.org 0x99d32
	ldrb r1, [r4, #10]	@ 00099d32 a17a
.org 0x99d34
	movs r3, #16	@ 00099d34 1023
.org 0x99d36
	adds r0, r3, #0	@ 00099d36 181c
.org 0x99d38
	ands r0, r1	@ 00099d38 0840
.org 0x99d3a
	cmp r0, #0	@ 00099d3a 0028
.org 0x99d3c
	beq.n 0x99d4c	@ 00099d3c 06d0
.org 0x99d3e
	orrs r3, r2	@ 00099d3e 1343
.org 0x99d40
	b.n 0x99d4e	@ 00099d40 05e0
.org 0x99d42
	.byte 0x00	@ 00099d42 data
.org 0x99d43
	.byte 0x00	@ 00099d43 data
.org 0x99d44
	.byte 0x00,0xf0,0xff,0xff	@ 00099d44 data
.org 0x99d48
	.byte 0xe0,0x0d,0x86,0x08	@ 00099d48 data
.org 0x99d4c
	adds r3, r2, #0	@ 00099d4c 131c
.org 0x99d4e
	mov r0, sp	@ 00099d4e 6846
.org 0x99d50
	adds r1, r5, #0	@ 00099d50 291c
.org 0x99d52
	movs r2, #0	@ 00099d52 0022
.org 0x99d54
	bl 0xd4c8c	@ 00099d54 3af09aff
.org 0x99d58
	mov r7, sp	@ 00099d58 6f46
.org 0x99d5a
	ldr r0, [pc, #28]	@ 00099d5a 0748
.org 0x99d5c
	mov ip, r0	@ 00099d5c 8446
.org 0x99d5e
	adds r2, r4, #0	@ 00099d5e 221c
.org 0x99d60
	adds r2, #188	@ 00099d60 bc32
.org 0x99d62
	ldrb r5, [r2, #0]	@ 00099d62 1578
.org 0x99d64
	ldrb r1, [r4, #10]	@ 00099d64 a17a
.org 0x99d66
	movs r3, #16	@ 00099d66 1023
.org 0x99d68
	adds r0, r3, #0	@ 00099d68 181c
.org 0x99d6a
	ands r0, r1	@ 00099d6a 0840
.org 0x99d6c
	adds r6, r2, #0	@ 00099d6c 161c
.org 0x99d6e
	cmp r0, #0	@ 00099d6e 0028
.org 0x99d70
	beq.n 0x99d7c	@ 00099d70 04d0
.org 0x99d72
	orrs r3, r5	@ 00099d72 2b43
.org 0x99d74
	b.n 0x99d7e	@ 00099d74 03e0
.org 0x99d76
	.byte 0x00	@ 00099d76 data
.org 0x99d77
	.byte 0x00	@ 00099d77 data
.org 0x99d78
	.byte 0xfc,0x0d,0x86,0x08	@ 00099d78 data
.org 0x99d7c
	adds r3, r5, #0	@ 00099d7c 2b1c
.org 0x99d7e
	adds r0, r7, #0	@ 00099d7e 381c
.org 0x99d80
	mov r1, ip	@ 00099d80 6146
.org 0x99d82
	movs r2, #0	@ 00099d82 0022
.org 0x99d84
	bl 0xd4c8c	@ 00099d84 3af082ff
.org 0x99d88
	mov r5, sp	@ 00099d88 6d46
.org 0x99d8a
	ldr r7, [pc, #20]	@ 00099d8a 054f
.org 0x99d8c
	ldrb r2, [r6, #0]	@ 00099d8c 3278
.org 0x99d8e
	ldrb r1, [r4, #10]	@ 00099d8e a17a
.org 0x99d90
	movs r3, #16	@ 00099d90 1023
.org 0x99d92
	adds r0, r3, #0	@ 00099d92 181c
.org 0x99d94
	ands r0, r1	@ 00099d94 0840
.org 0x99d96
	cmp r0, #0	@ 00099d96 0028
.org 0x99d98
	beq.n 0x99da4	@ 00099d98 04d0
.org 0x99d9a
	orrs r3, r2	@ 00099d9a 1343
.org 0x99d9c
	b.n 0x99da6	@ 00099d9c 03e0
.org 0x99d9e
	.byte 0x00	@ 00099d9e data
.org 0x99d9f
	.byte 0x00	@ 00099d9f data
.org 0x99da0
	.byte 0x18,0x0e,0x86,0x08	@ 00099da0 data
.org 0x99da4
	adds r3, r2, #0	@ 00099da4 131c
.org 0x99da6
	adds r0, r5, #0	@ 00099da6 281c
.org 0x99da8
	adds r1, r7, #0	@ 00099da8 391c
.org 0x99daa
	movs r2, #0	@ 00099daa 0022
.org 0x99dac
	bl 0xd4c8c	@ 00099dac 3af06eff
.org 0x99db0
	movs r0, #1	@ 00099db0 0120
.org 0x99db2
	mov r1, sp	@ 00099db2 6946
.org 0x99db4
	bl 0xd0c88	@ 00099db4 36f068ff
.org 0x99db8
	movs r0, #42	@ 00099db8 2a20
.org 0x99dba
	bl 0x2b10	@ 00099dba 68f7a9fe
.org 0x99dbe
	adds r5, r4, #0	@ 00099dbe 251c
.org 0x99dc0
	adds r5, #84	@ 00099dc0 5435
.org 0x99dc2
	movs r0, #3	@ 00099dc2 0320
.org 0x99dc4
	movs r1, #44	@ 00099dc4 2c21
.org 0x99dc6
	adds r2, r5, #0	@ 00099dc6 2a1c
.org 0x99dc8
	bl 0x2ab88	@ 00099dc8 90f7defe
.org 0x99dcc
	ldr r2, [pc, #44]	@ 00099dcc 0b4a
.org 0x99dce
	ldrh r1, [r2, #12]	@ 00099dce 9189
.org 0x99dd0
	ldr r0, [pc, #44]	@ 00099dd0 0b48
.org 0x99dd2
	cmp r1, r0	@ 00099dd2 8142
.org 0x99dd4
	bhi.n 0x99dda	@ 00099dd4 01d8
.org 0x99dd6
	adds r0, r1, #1	@ 00099dd6 481c
.org 0x99dd8
	strh r0, [r2, #12]	@ 00099dd8 9081
.org 0x99dda
	adds r0, r4, #0	@ 00099dda 201c
.org 0x99ddc
	adds r1, r5, #0	@ 00099ddc 291c
.org 0x99dde
	bl 0x2abe0	@ 00099dde 90f7fffe
.org 0x99de2
	ldr r1, [pc, #32]	@ 00099de2 0849
.org 0x99de4
	ldrb r0, [r4, #9]	@ 00099de4 607a
