@ FUN_08105e30  entry 0x08105e30  size 186
.thumb
.org 0x105e30
FUN_08105e30:
	push {r4, r5, r6, r7, lr}	@ 00105e30 f0b5
.org 0x105e32
	mov r7, r9	@ 00105e32 4f46
.org 0x105e34
	mov r6, r8	@ 00105e34 4646
.org 0x105e36
	push {r6, r7}	@ 00105e36 c0b4
.org 0x105e38
	adds r7, r0, #0	@ 00105e38 071c
.org 0x105e3a
	ldrb r0, [r7, #13]	@ 00105e3a 787b
.org 0x105e3c
	cmp r0, #0	@ 00105e3c 0028
.org 0x105e3e
	beq.n 0x105e46	@ 00105e3e 02d0
.org 0x105e40
	cmp r0, #1	@ 00105e40 0128
.org 0x105e42
	beq.n 0x105ed8	@ 00105e42 49d0
.org 0x105e44
	b.n 0x105ede	@ 00105e44 4be0
.org 0x105e46
	ldr r0, [r7, #84]	@ 00105e46 786d
.org 0x105e48
	ldr r1, [r7, #88]	@ 00105e48 b96d
.org 0x105e4a
	bl 0x8534	@ 00105e4a 02f773fb
.org 0x105e4e
	str r0, [r7, #88]	@ 00105e4e b865
.org 0x105e50
	ldr r0, [pc, #152]	@ 00105e50 2648
.org 0x105e52
	mov r8, r0	@ 00105e52 8046
.org 0x105e54
	ldrb r1, [r7, #17]	@ 00105e54 797c
.org 0x105e56
	lsls r1, r1, #3	@ 00105e56 c900
.org 0x105e58
	adds r0, r1, r0	@ 00105e58 0818
.org 0x105e5a
	ldr r6, [pc, #148]	@ 00105e5a 254e
.org 0x105e5c
	movs r3, #0	@ 00105e5c 0023
.org 0x105e5e
	ldrsh r2, [r0, r3]	@ 00105e5e c25e
.org 0x105e60
	lsls r2, r2, #1	@ 00105e60 5200
.org 0x105e62
	adds r3, r2, r6	@ 00105e62 9319
.org 0x105e64
	mov r0, r8	@ 00105e64 4046
.org 0x105e66
	adds r0, #4	@ 00105e66 0430
.org 0x105e68
	adds r1, r1, r0	@ 00105e68 0918
.org 0x105e6a
	ldrh r0, [r1, #0]	@ 00105e6a 0888
.org 0x105e6c
	strh r0, [r3, #0]	@ 00105e6c 1880
.org 0x105e6e
	ldr r0, [pc, #132]	@ 00105e6e 2148
.org 0x105e70
	mov r9, r0	@ 00105e70 8146
.org 0x105e72
	add r2, r9	@ 00105e72 4a44
.org 0x105e74
	ldrb r0, [r7, #17]	@ 00105e74 787c
.org 0x105e76
	adds r0, #4	@ 00105e76 0430
.org 0x105e78
	strh r0, [r2, #0]	@ 00105e78 1080
.org 0x105e7a
	ldrb r0, [r7, #17]	@ 00105e7a 787c
.org 0x105e7c
	lsls r0, r0, #3	@ 00105e7c c000
.org 0x105e7e
	add r0, r8	@ 00105e7e 4044
.org 0x105e80
	movs r1, #0	@ 00105e80 0021
.org 0x105e82
	ldrsh r4, [r0, r1]	@ 00105e82 445e
.org 0x105e84
	lsls r5, r4, #2	@ 00105e84 a500
.org 0x105e86
	adds r5, r5, r4	@ 00105e86 2d19
.org 0x105e88
	lsls r5, r5, #2	@ 00105e88 ad00
.org 0x105e8a
	ldr r2, [pc, #108]	@ 00105e8a 1b4a
.org 0x105e8c
	adds r0, r5, r2	@ 00105e8c a818
.org 0x105e8e
	lsls r4, r4, #1	@ 00105e8e 6400
.org 0x105e90
	adds r6, r4, r6	@ 00105e90 a619
.org 0x105e92
	ldrh r1, [r6, #0]	@ 00105e92 3188
.org 0x105e94
	ldrh r2, [r0, #6]	@ 00105e94 c288
.org 0x105e96
	lsrs r2, r2, #6	@ 00105e96 9209
.org 0x105e98
	subs r1, r1, r2	@ 00105e98 891a
.org 0x105e9a
	lsls r1, r1, #5	@ 00105e9a 4901
.org 0x105e9c
	movs r3, #128	@ 00105e9c 8023
.org 0x105e9e
	lsls r3, r3, #9	@ 00105e9e 5b02
.org 0x105ea0
	adds r1, r1, r3	@ 00105ea0 c918
.org 0x105ea2
	bl 0x1d30	@ 00105ea2 fbf645ff
.org 0x105ea6
	ldr r0, [pc, #84]	@ 00105ea6 1548
.org 0x105ea8
	adds r5, r5, r0	@ 00105ea8 2d18
.org 0x105eaa
	add r4, r9	@ 00105eaa 4c44
.org 0x105eac
	ldrh r1, [r4, #0]	@ 00105eac 2188
.org 0x105eae
	ldrb r0, [r5, #7]	@ 00105eae e879
.org 0x105eb0
	subs r1, r1, r0	@ 00105eb0 091a
.org 0x105eb2
	lsls r1, r1, #5	@ 00105eb2 4901
.org 0x105eb4
	movs r2, #128	@ 00105eb4 8022
.org 0x105eb6
	lsls r2, r2, #2	@ 00105eb6 9200
.org 0x105eb8
	adds r1, r1, r2	@ 00105eb8 8918
.org 0x105eba
	adds r0, r5, #0	@ 00105eba 281c
.org 0x105ebc
	bl 0x2208	@ 00105ebc fcf6a4f9
.org 0x105ec0
	ldrb r0, [r7, #17]	@ 00105ec0 787c
.org 0x105ec2
	lsls r0, r0, #3	@ 00105ec2 c000
.org 0x105ec4
	movs r3, #2	@ 00105ec4 0223
.org 0x105ec6
	add r8, r3	@ 00105ec6 9844
.org 0x105ec8
	add r0, r8	@ 00105ec8 4044
.org 0x105eca
	ldrh r1, [r0, #0]	@ 00105eca 0188
.org 0x105ecc
	adds r0, r7, #0	@ 00105ecc 381c
.org 0x105ece
	bl 0x1cf00	@ 00105ece 17f717f8
.org 0x105ed2
	ldrb r0, [r7, #13]	@ 00105ed2 787b
.org 0x105ed4
	adds r0, #1	@ 00105ed4 0130
.org 0x105ed6
	strb r0, [r7, #13]	@ 00105ed6 7873
.org 0x105ed8
	adds r0, r7, #0	@ 00105ed8 381c
.org 0x105eda
	bl 0x1cff0	@ 00105eda 17f789f8
.org 0x105ede
	pop {r3, r4}	@ 00105ede 18bc
.org 0x105ee0
	mov r8, r3	@ 00105ee0 9846
.org 0x105ee2
	mov r9, r4	@ 00105ee2 a146
.org 0x105ee4
	pop {r4, r5, r6, r7}	@ 00105ee4 f0bc
.org 0x105ee6
	pop {r0}	@ 00105ee6 01bc
.org 0x105ee8
	bx r0	@ 00105ee8 0047
