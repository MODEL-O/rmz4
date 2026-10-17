@ FUN_080b7054  entry 0x080b7054  size 206
.thumb
.org 0xb7054
FUN_080b7054:
	push {r0, r1, lr}	@ 000b7054 03b5
.org 0xb7056
	movs r0, r0	@ 000b7056 0000
.org 0xb7058
	push {r4, lr}	@ 000b7058 10b5
.org 0xb705a
	sub sp, #8	@ 000b705a 82b0
.org 0xb705c
	adds r4, r0, #0	@ 000b705c 041c
.org 0xb705e
	ldrb r0, [r4, #15]	@ 000b705e e07b
.org 0xb7060
	cmp r0, #0	@ 000b7060 0028
.org 0xb7062
	bne.n 0xb70b6	@ 000b7062 28d1
.org 0xb7064
	ldr r0, [pc, #188]	@ 000b7064 2f48
.org 0xb7066
	bl 0x2b10	@ 000b7066 4bf753fd
.org 0xb706a
	adds r0, r4, #0	@ 000b706a 201c
.org 0xb706c
	adds r0, #116	@ 000b706c 7430
.org 0xb706e
	ldr r1, [pc, #184]	@ 000b706e 2e49
.org 0xb7070
	bl 0x5784	@ 000b7070 4ef788fb
.org 0xb7074
	ldr r0, [pc, #180]	@ 000b7074 2d48
.org 0xb7076
	ldr r1, [r0, #0]	@ 000b7076 0168
.org 0xb7078
	ldr r0, [r1, #84]	@ 000b7078 486d
.org 0xb707a
	str r0, [sp, #0]	@ 000b707a 0090
.org 0xb707c
	ldr r0, [r1, #88]	@ 000b707c 886d
.org 0xb707e
	ldr r1, [pc, #176]	@ 000b707e 2c49
.org 0xb7080
	adds r0, r0, r1	@ 000b7080 4018
.org 0xb7082
	str r0, [sp, #4]	@ 000b7082 0190
.org 0xb7084
	adds r0, r4, #0	@ 000b7084 201c
.org 0xb7086
	adds r0, #84	@ 000b7086 5430
.org 0xb7088
	mov r1, sp	@ 000b7088 6946
.org 0xb708a
	bl 0x10d3ac	@ 000b708a 56f08ff9
.org 0xb708e
	lsls r0, r0, #24	@ 000b708e 0006
.org 0xb7090
	ldr r2, [pc, #160]	@ 000b7090 284a
.org 0xb7092
	movs r3, #128	@ 000b7092 8023
.org 0xb7094
	lsls r3, r3, #23	@ 000b7094 db05
.org 0xb7096
	adds r1, r0, r3	@ 000b7096 c118
.org 0xb7098
	lsrs r1, r1, #23	@ 000b7098 c90d
.org 0xb709a
	adds r1, r1, r2	@ 000b709a 8918
.org 0xb709c
	movs r3, #0	@ 000b709c 0023
.org 0xb709e
	ldrsh r1, [r1, r3]	@ 000b709e c95e
.org 0xb70a0
	lsls r1, r1, #2	@ 000b70a0 8900
.org 0xb70a2
	str r1, [r4, #92]	@ 000b70a2 e165
.org 0xb70a4
	lsrs r0, r0, #23	@ 000b70a4 c00d
.org 0xb70a6
	adds r0, r0, r2	@ 000b70a6 8018
.org 0xb70a8
	movs r1, #0	@ 000b70a8 0021
.org 0xb70aa
	ldrsh r0, [r0, r1]	@ 000b70aa 405e
.org 0xb70ac
	lsls r0, r0, #2	@ 000b70ac 8000
.org 0xb70ae
	str r0, [r4, #96]	@ 000b70ae 2066
.org 0xb70b0
	ldrb r0, [r4, #15]	@ 000b70b0 e07b
.org 0xb70b2
	adds r0, #1	@ 000b70b2 0130
.org 0xb70b4
	strb r0, [r4, #15]	@ 000b70b4 e073
.org 0xb70b6
	adds r0, r4, #0	@ 000b70b6 201c
.org 0xb70b8
	bl 0x1cff0	@ 000b70b8 65f79aff
.org 0xb70bc
	ldr r0, [r4, #84]	@ 000b70bc 606d
.org 0xb70be
	ldr r1, [r4, #92]	@ 000b70be e16d
.org 0xb70c0
	adds r0, r0, r1	@ 000b70c0 4018
.org 0xb70c2
	str r0, [r4, #84]	@ 000b70c2 6065
.org 0xb70c4
	ldr r0, [r4, #88]	@ 000b70c4 a06d
.org 0xb70c6
	ldr r1, [r4, #96]	@ 000b70c6 216e
.org 0xb70c8
	adds r0, r0, r1	@ 000b70c8 4018
.org 0xb70ca
	str r0, [r4, #88]	@ 000b70ca a065
.org 0xb70cc
	adds r0, r4, #0	@ 000b70cc 201c
.org 0xb70ce
	bl 0xb735c	@ 000b70ce 00f045f9
.org 0xb70d2
	ldr r0, [pc, #100]	@ 000b70d2 1948
.org 0xb70d4
	adds r1, r4, #0	@ 000b70d4 211c
.org 0xb70d6
	adds r1, #84	@ 000b70d6 5431
.org 0xb70d8
	bl 0x1fb14	@ 000b70d8 68f71cfd
.org 0xb70dc
	movs r1, #192	@ 000b70dc c021
.org 0xb70de
	lsls r1, r1, #5	@ 000b70de 4901
.org 0xb70e0
	cmp r0, r1	@ 000b70e0 8842
.org 0xb70e2
	bls.n 0xb711a	@ 000b70e2 1ad9
.org 0xb70e4
	ldrb r1, [r4, #10]	@ 000b70e4 a17a
.org 0xb70e6
	movs r0, #254	@ 000b70e6 fe20
.org 0xb70e8
	ands r0, r1	@ 000b70e8 0840
.org 0xb70ea
	movs r2, #0	@ 000b70ea 0022
.org 0xb70ec
	movs r1, #253	@ 000b70ec fd21
.org 0xb70ee
	ands r0, r1	@ 000b70ee 0840
.org 0xb70f0
	strb r0, [r4, #10]	@ 000b70f0 a072
.org 0xb70f2
	adds r0, r4, #0	@ 000b70f2 201c
.org 0xb70f4
	adds r0, #140	@ 000b70f4 8c30
.org 0xb70f6
	str r2, [r0, #0]	@ 000b70f6 0260
.org 0xb70f8
	adds r0, #4	@ 000b70f8 0430
.org 0xb70fa
	str r2, [r0, #0]	@ 000b70fa 0260
.org 0xb70fc
	adds r0, #4	@ 000b70fc 0430
.org 0xb70fe
	strb r2, [r0, #0]	@ 000b70fe 0270
.org 0xb7100
	ldrb r1, [r4, #10]	@ 000b7100 a17a
.org 0xb7102
	movs r0, #251	@ 000b7102 fb20
.org 0xb7104
	ands r0, r1	@ 000b7104 0840
.org 0xb7106
	strb r0, [r4, #10]	@ 000b7106 a072
.org 0xb7108
	ldr r1, [pc, #48]	@ 000b7108 0c49
.org 0xb710a
	ldrb r0, [r4, #9]	@ 000b710a 607a
.org 0xb710c
	lsls r0, r0, #2	@ 000b710c 8000
.org 0xb710e
	adds r0, r0, r1	@ 000b710e 4018
.org 0xb7110
	movs r1, #3	@ 000b7110 0321
.org 0xb7112
	str r1, [r4, #12]	@ 000b7112 e160
.org 0xb7114
	ldr r0, [r0, #0]	@ 000b7114 0068
.org 0xb7116
	ldr r0, [r0, #12]	@ 000b7116 c068
.org 0xb7118
	str r0, [r4, #20]	@ 000b7118 6061
.org 0xb711a
	add sp, #8	@ 000b711a 02b0
.org 0xb711c
	pop {r4}	@ 000b711c 10bc
.org 0xb711e
	pop {r0}	@ 000b711e 01bc
.org 0xb7120
	bx r0	@ 000b7120 0047
