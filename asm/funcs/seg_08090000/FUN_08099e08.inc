@ FUN_08099e08  entry 0x08099e08  size 94
.thumb
.org 0x99e08
FUN_08099e08:
	push {r4, r5, lr}	@ 00099e08 30b5
.org 0x99e0a
	adds r4, r0, #0	@ 00099e0a 041c
.org 0x99e0c
	ldr r0, [r4, #20]	@ 00099e0c 6069
.org 0x99e0e
	movs r1, #1	@ 00099e0e 0121
.org 0x99e10
	ands r0, r1	@ 00099e10 0840
.org 0x99e12
	cmp r0, #0	@ 00099e12 0028
.org 0x99e14
	beq.n 0x99e60	@ 00099e14 24d0
.org 0x99e16
	movs r0, #52	@ 00099e16 3420
.org 0x99e18
	bl 0x6984	@ 00099e18 6cf7b4fd
.org 0x99e1c
	ldr r0, [r4, #12]	@ 00099e1c e068
.org 0x99e1e
	ldr r0, [r0, #44]	@ 00099e1e c06a
.org 0x99e20
	ldr r5, [r4, #44]	@ 00099e20 e56a
.org 0x99e22
	movs r2, #0	@ 00099e22 0022
.org 0x99e24
	ldr r1, [r0, #84]	@ 00099e24 416d
.org 0x99e26
	ldr r0, [r5, #84]	@ 00099e26 686d
.org 0x99e28
	cmp r1, r0	@ 00099e28 8142
.org 0x99e2a
	ble.n 0x99e2e	@ 00099e2a 00dd
.org 0x99e2c
	movs r2, #1	@ 00099e2c 0122
.org 0x99e2e
	adds r0, r5, #0	@ 00099e2e 281c
.org 0x99e30
	adds r0, #188	@ 00099e30 bc30
.org 0x99e32
	strb r2, [r0, #0]	@ 00099e32 0270
.org 0x99e34
	ldr r1, [r4, #20]	@ 00099e34 6169
.org 0x99e36
	movs r0, #128	@ 00099e36 8020
.org 0x99e38
	lsls r0, r0, #2	@ 00099e38 8000
.org 0x99e3a
	ands r0, r1	@ 00099e3a 0840
.org 0x99e3c
	cmp r0, #0	@ 00099e3c 0028
.org 0x99e3e
	beq.n 0x99e60	@ 00099e3e 0fd0
.org 0x99e40
	movs r0, #128	@ 00099e40 8020
.org 0x99e42
	lsls r0, r0, #10	@ 00099e42 8002
.org 0x99e44
	ands r1, r0	@ 00099e44 0140
.org 0x99e46
	cmp r1, #0	@ 00099e46 0029
.org 0x99e48
	beq.n 0x99e60	@ 00099e48 0ad0
.org 0x99e4a
	ldr r0, [pc, #28]	@ 00099e4a 0748
.org 0x99e4c
	ldr r0, [r0, #0]	@ 00099e4c 0068
.org 0x99e4e
	cmp r0, #0	@ 00099e4e 0028
.org 0x99e50
	beq.n 0x99e60	@ 00099e50 06d0
.org 0x99e52
	movs r1, #3	@ 00099e52 0321
.org 0x99e54
	movs r2, #12	@ 00099e54 0c22
.org 0x99e56
	bl 0x3a578	@ 00099e56 a0f78ffb
.org 0x99e5a
	adds r1, r5, #0	@ 00099e5a 291c
.org 0x99e5c
	adds r1, #189	@ 00099e5c bd31
.org 0x99e5e
	strb r0, [r1, #0]	@ 00099e5e 0870
.org 0x99e60
	pop {r4, r5}	@ 00099e60 30bc
.org 0x99e62
	pop {r0}	@ 00099e62 01bc
.org 0x99e64
	bx r0	@ 00099e64 0047
