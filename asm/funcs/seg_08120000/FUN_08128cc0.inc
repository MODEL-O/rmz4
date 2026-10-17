@ FUN_08128cc0  entry 0x08128cc0  size 162
.thumb
.org 0x128cc0
FUN_08128cc0:
	push {r4, r5, r6, lr}	@ 00128cc0 70b5
.org 0x128cc2
	sub sp, #136	@ 00128cc2 a2b0
.org 0x128cc4
	adds r5, r1, #0	@ 00128cc4 0d1c
.org 0x128cc6
	lsls r0, r0, #16	@ 00128cc6 0004
.org 0x128cc8
	lsrs r3, r0, #16	@ 00128cc8 030c
.org 0x128cca
	ldr r0, [pc, #12]	@ 00128cca 0348
.org 0x128ccc
	ldr r0, [r0, #0]	@ 00128ccc 0068
.org 0x128cce
	ldrh r0, [r0, #4]	@ 00128cce 8088
.org 0x128cd0
	cmp r3, r0	@ 00128cd0 8342
.org 0x128cd2
	bcc.n 0x128ce0	@ 00128cd2 05d3
.org 0x128cd4
	ldr r0, [pc, #4]	@ 00128cd4 0148
.org 0x128cd6
	b.n 0x128d62	@ 00128cd6 44e0
.org 0x128cd8
	.byte 0xb0,0xd7,0x03,0x02	@ 00128cd8 data
.org 0x128cdc
	.byte 0xff,0x80,0x00,0x00	@ 00128cdc data
.org 0x128ce0
	ldr r0, [pc, #136]	@ 00128ce0 2248
.org 0x128ce2
	adds r6, r0, #0	@ 00128ce2 061c
.org 0x128ce4
	ldr r0, [r0, #0]	@ 00128ce4 0068
.org 0x128ce6
	ldrb r1, [r0, #8]	@ 00128ce6 017a
.org 0x128ce8
	lsls r0, r1, #1	@ 00128ce8 4800
.org 0x128cea
	mov r4, sp	@ 00128cea 6c46
.org 0x128cec
	adds r2, r0, r4	@ 00128cec 0219
.org 0x128cee
	adds r2, #2	@ 00128cee 0232
.org 0x128cf0
	movs r4, #0	@ 00128cf0 0024
.org 0x128cf2
	cmp r4, r1	@ 00128cf2 8c42
.org 0x128cf4
	bcs.n 0x128d0a	@ 00128cf4 09d2
.org 0x128cf6
	strh r3, [r2, #0]	@ 00128cf6 1380
.org 0x128cf8
	subs r2, #2	@ 00128cf8 023a
.org 0x128cfa
	lsrs r3, r3, #1	@ 00128cfa 5b08
.org 0x128cfc
	adds r0, r4, #1	@ 00128cfc 601c
.org 0x128cfe
	lsls r0, r0, #24	@ 00128cfe 0006
.org 0x128d00
	lsrs r4, r0, #24	@ 00128d00 040e
.org 0x128d02
	ldr r0, [r6, #0]	@ 00128d02 3068
.org 0x128d04
	ldrb r0, [r0, #8]	@ 00128d04 007a
.org 0x128d06
	cmp r4, r0	@ 00128d06 8442
.org 0x128d08
	bcc.n 0x128cf6	@ 00128d08 f5d3
.org 0x128d0a
	movs r0, #1	@ 00128d0a 0120
.org 0x128d0c
	strh r0, [r2, #0]	@ 00128d0c 1080
.org 0x128d0e
	subs r2, #2	@ 00128d0e 023a
.org 0x128d10
	strh r0, [r2, #0]	@ 00128d10 1080
.org 0x128d12
	movs r4, #208	@ 00128d12 d024
.org 0x128d14
	lsls r4, r4, #20	@ 00128d14 2405
.org 0x128d16
	ldr r0, [pc, #84]	@ 00128d16 1548
.org 0x128d18
	ldr r0, [r0, #0]	@ 00128d18 0068
.org 0x128d1a
	ldrb r2, [r0, #8]	@ 00128d1a 027a
.org 0x128d1c
	adds r2, #3	@ 00128d1c 0332
.org 0x128d1e
	mov r0, sp	@ 00128d1e 6846
.org 0x128d20
	adds r1, r4, #0	@ 00128d20 211c
.org 0x128d22
	bl 0x128c40	@ 00128d22 fff78dff
.org 0x128d26
	adds r0, r4, #0	@ 00128d26 201c
.org 0x128d28
	mov r1, sp	@ 00128d28 6946
.org 0x128d2a
	movs r2, #68	@ 00128d2a 4422
.org 0x128d2c
	bl 0x128c40	@ 00128d2c fff788ff
.org 0x128d30
	add r2, sp, #8	@ 00128d30 02aa
.org 0x128d32
	adds r5, #6	@ 00128d32 0635
.org 0x128d34
	movs r4, #0	@ 00128d34 0024
.org 0x128d36
	movs r6, #1	@ 00128d36 0126
.org 0x128d38
	movs r1, #0	@ 00128d38 0021
.org 0x128d3a
	movs r3, #0	@ 00128d3a 0023
.org 0x128d3c
	lsls r1, r1, #17	@ 00128d3c 4904
.org 0x128d3e
	ldrh r0, [r2, #0]	@ 00128d3e 1088
.org 0x128d40
	ands r0, r6	@ 00128d40 3040
.org 0x128d42
	lsrs r1, r1, #16	@ 00128d42 090c
.org 0x128d44
	orrs r1, r0	@ 00128d44 0143
.org 0x128d46
	adds r2, #2	@ 00128d46 0232
.org 0x128d48
	adds r0, r3, #1	@ 00128d48 581c
.org 0x128d4a
	lsls r0, r0, #24	@ 00128d4a 0006
.org 0x128d4c
	lsrs r3, r0, #24	@ 00128d4c 030e
.org 0x128d4e
	cmp r3, #15	@ 00128d4e 0f2b
.org 0x128d50
	bls.n 0x128d3c	@ 00128d50 f4d9
.org 0x128d52
	strh r1, [r5, #0]	@ 00128d52 2980
.org 0x128d54
	subs r5, #2	@ 00128d54 023d
.org 0x128d56
	adds r0, r4, #1	@ 00128d56 601c
.org 0x128d58
	lsls r0, r0, #24	@ 00128d58 0006
.org 0x128d5a
	lsrs r4, r0, #24	@ 00128d5a 040e
.org 0x128d5c
	cmp r4, #3	@ 00128d5c 032c
.org 0x128d5e
	bls.n 0x128d38	@ 00128d5e ebd9
.org 0x128d60
	movs r0, #0	@ 00128d60 0020
