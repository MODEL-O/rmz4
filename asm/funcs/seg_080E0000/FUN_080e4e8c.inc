@ FUN_080e4e8c  entry 0x080e4e8c  size 114
.thumb
.org 0xe4e8c
FUN_080e4e8c:
	push {r4, lr}	@ 000e4e8c 10b5
.org 0xe4e8e
	adds r4, r0, #0	@ 000e4e8e 041c
.org 0xe4e90
	movs r3, #0	@ 000e4e90 0023
.org 0xe4e92
	ldr r0, [r4, #84]	@ 000e4e92 606d
.org 0xe4e94
	ldr r1, [r4, #92]	@ 000e4e94 e16d
.org 0xe4e96
	adds r0, r0, r1	@ 000e4e96 4018
.org 0xe4e98
	str r0, [r4, #84]	@ 000e4e98 6065
.org 0xe4e9a
	ldr r0, [r4, #88]	@ 000e4e9a a06d
.org 0xe4e9c
	ldr r1, [r4, #96]	@ 000e4e9c 216e
.org 0xe4e9e
	adds r0, r0, r1	@ 000e4e9e 4018
.org 0xe4ea0
	str r0, [r4, #88]	@ 000e4ea0 a065
.org 0xe4ea2
	adds r1, #64	@ 000e4ea2 4031
.org 0xe4ea4
	str r1, [r4, #96]	@ 000e4ea4 2166
.org 0xe4ea6
	adds r2, r4, #0	@ 000e4ea6 221c
.org 0xe4ea8
	adds r2, #116	@ 000e4ea8 7432
.org 0xe4eaa
	ldrb r0, [r2, #0]	@ 000e4eaa 1078
.org 0xe4eac
	cmp r0, #0	@ 000e4eac 0028
.org 0xe4eae
	bne.n 0xe4ebe	@ 000e4eae 06d1
.org 0xe4eb0
	ldrb r0, [r4, #10]	@ 000e4eb0 a07a
.org 0xe4eb2
	movs r1, #254	@ 000e4eb2 fe21
.org 0xe4eb4
	ands r1, r0	@ 000e4eb4 0140
.org 0xe4eb6
	strb r1, [r4, #10]	@ 000e4eb6 a172
.org 0xe4eb8
	movs r0, #1	@ 000e4eb8 0120
.org 0xe4eba
	strb r0, [r2, #0]	@ 000e4eba 1070
.org 0xe4ebc
	b.n 0xe4ec8	@ 000e4ebc 04e0
.org 0xe4ebe
	ldrb r1, [r4, #10]	@ 000e4ebe a17a
.org 0xe4ec0
	movs r0, #1	@ 000e4ec0 0120
.org 0xe4ec2
	orrs r0, r1	@ 000e4ec2 0843
.org 0xe4ec4
	strb r0, [r4, #10]	@ 000e4ec4 a072
.org 0xe4ec6
	strb r3, [r2, #0]	@ 000e4ec6 1370
.org 0xe4ec8
	ldr r0, [r4, #84]	@ 000e4ec8 606d
.org 0xe4eca
	ldr r1, [r4, #88]	@ 000e4eca a16d
.org 0xe4ecc
	bl 0x7c7c	@ 000e4ecc 22f7d6fe
.org 0xe4ed0
	lsls r0, r0, #16	@ 000e4ed0 0004
.org 0xe4ed2
	lsrs r3, r0, #16	@ 000e4ed2 030c
.org 0xe4ed4
	cmp r3, #0	@ 000e4ed4 002b
.org 0xe4ed6
	beq.n 0xe4ef8	@ 000e4ed6 0fd0
.org 0xe4ed8
	cmp r3, #15	@ 000e4ed8 0f2b
.org 0xe4eda
	beq.n 0xe4ef8	@ 000e4eda 0dd0
.org 0xe4edc
	adds r1, r4, #0	@ 000e4edc 211c
.org 0xe4ede
	adds r1, #84	@ 000e4ede 5431
.org 0xe4ee0
	movs r0, #3	@ 000e4ee0 0320
.org 0xe4ee2
	bl 0xd0c88	@ 000e4ee2 ebf7d1fe
.org 0xe4ee6
	ldr r1, [pc, #24]	@ 000e4ee6 0649
.org 0xe4ee8
	ldrb r0, [r4, #9]	@ 000e4ee8 607a
.org 0xe4eea
	lsls r0, r0, #2	@ 000e4eea 8000
.org 0xe4eec
	adds r0, r0, r1	@ 000e4eec 4018
.org 0xe4eee
	movs r1, #2	@ 000e4eee 0221
.org 0xe4ef0
	str r1, [r4, #12]	@ 000e4ef0 e160
.org 0xe4ef2
	ldr r0, [r0, #0]	@ 000e4ef2 0068
.org 0xe4ef4
	ldr r0, [r0, #8]	@ 000e4ef4 8068
.org 0xe4ef6
	str r0, [r4, #20]	@ 000e4ef6 6061
.org 0xe4ef8
	pop {r4}	@ 000e4ef8 10bc
.org 0xe4efa
	pop {r0}	@ 000e4efa 01bc
.org 0xe4efc
	bx r0	@ 000e4efc 0047
