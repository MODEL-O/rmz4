@ FUN_08044e90  entry 0x08044e90  size 42
.thumb
.org 0x44e90
FUN_08044e90:
	push {lr}	@ 00044e90 00b5
.org 0x44e92
	adds r2, r0, #0	@ 00044e92 021c
.org 0x44e94
	ldr r0, [r2, #20]	@ 00044e94 5069
.org 0x44e96
	movs r1, #1	@ 00044e96 0121
.org 0x44e98
	ands r0, r1	@ 00044e98 0840
.org 0x44e9a
	cmp r0, #0	@ 00044e9a 0028
.org 0x44e9c
	beq.n 0x44eb6	@ 00044e9c 0bd0
.org 0x44e9e
	ldr r0, [r2, #12]	@ 00044e9e d068
.org 0x44ea0
	ldr r0, [r0, #44]	@ 00044ea0 c06a
.org 0x44ea2
	ldr r2, [r2, #44]	@ 00044ea2 d26a
.org 0x44ea4
	movs r3, #0	@ 00044ea4 0023
.org 0x44ea6
	ldr r1, [r0, #84]	@ 00044ea6 416d
.org 0x44ea8
	ldr r0, [r2, #84]	@ 00044ea8 506d
.org 0x44eaa
	cmp r1, r0	@ 00044eaa 8142
.org 0x44eac
	ble.n 0x44eb0	@ 00044eac 00dd
.org 0x44eae
	movs r3, #1	@ 00044eae 0123
.org 0x44eb0
	adds r0, r2, #0	@ 00044eb0 101c
.org 0x44eb2
	adds r0, #188	@ 00044eb2 bc30
.org 0x44eb4
	strb r3, [r0, #0]	@ 00044eb4 0370
.org 0x44eb6
	pop {r0}	@ 00044eb6 01bc
.org 0x44eb8
	bx r0	@ 00044eb8 0047
