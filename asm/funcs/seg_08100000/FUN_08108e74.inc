@ FUN_08108e74  entry 0x08108e74  size 88
.thumb
.org 0x108e74
FUN_08108e74:
	push {r4, r5, r6, lr}	@ 00108e74 70b5
.org 0x108e76
	sub sp, #8	@ 00108e76 82b0
.org 0x108e78
	adds r4, r0, #0	@ 00108e78 041c
.org 0x108e7a
	ldr r6, [pc, #80]	@ 00108e7a 144e
.org 0x108e7c
	str r4, [r6, #0]	@ 00108e7c 3460
.org 0x108e7e
	movs r5, #0	@ 00108e7e 0025
.org 0x108e80
	str r5, [sp, #0]	@ 00108e80 0095
.org 0x108e82
	movs r2, #128	@ 00108e82 8022
.org 0x108e84
	lsls r2, r2, #17	@ 00108e84 5204
.org 0x108e86
	mov r0, sp	@ 00108e86 6846
.org 0x108e88
	adds r1, r4, #0	@ 00108e88 211c
.org 0x108e8a
	bl 0x128be0	@ 00108e8a 1ff0a9fe
.org 0x108e8e
	str r5, [sp, #4]	@ 00108e8e 0195
.org 0x108e90
	add r0, sp, #4	@ 00108e90 01a8
.org 0x108e92
	ldr r2, [pc, #60]	@ 00108e92 0f4a
.org 0x108e94
	adds r1, r4, #0	@ 00108e94 211c
.org 0x108e96
	bl 0x128be4	@ 00108e96 1ff0a5fe
.org 0x108e9a
	movs r4, #0	@ 00108e9a 0024
.org 0x108e9c
	movs r5, #1	@ 00108e9c 0125
.org 0x108e9e
	ldr r3, [r6, #0]	@ 00108e9e 3368
.org 0x108ea0
	lsrs r0, r4, #1	@ 00108ea0 6008
.org 0x108ea2
	adds r3, r3, r0	@ 00108ea2 1b18
.org 0x108ea4
	adds r0, r4, #0	@ 00108ea4 201c
.org 0x108ea6
	ands r0, r5	@ 00108ea6 2840
.org 0x108ea8
	lsls r0, r0, #2	@ 00108ea8 8000
.org 0x108eaa
	movs r2, #9	@ 00108eaa 0922
.org 0x108eac
	lsls r2, r0	@ 00108eac 8240
.org 0x108eae
	movs r1, #15	@ 00108eae 0f21
.org 0x108eb0
	lsls r1, r0	@ 00108eb0 8140
.org 0x108eb2
	ldrb r0, [r3, #0]	@ 00108eb2 1878
.org 0x108eb4
	bics r0, r1	@ 00108eb4 8843
.org 0x108eb6
	orrs r2, r0	@ 00108eb6 0243
.org 0x108eb8
	strb r2, [r3, #0]	@ 00108eb8 1a70
.org 0x108eba
	adds r0, r4, #1	@ 00108eba 601c
.org 0x108ebc
	lsls r0, r0, #24	@ 00108ebc 0006
.org 0x108ebe
	lsrs r4, r0, #24	@ 00108ebe 040e
.org 0x108ec0
	cmp r4, #50	@ 00108ec0 322c
.org 0x108ec2
	bls.n 0x108e9e	@ 00108ec2 ecd9
.org 0x108ec4
	add sp, #8	@ 00108ec4 02b0
.org 0x108ec6
	pop {r4, r5, r6}	@ 00108ec6 70bc
.org 0x108ec8
	pop {r0}	@ 00108ec8 01bc
.org 0x108eca
	bx r0	@ 00108eca 0047
