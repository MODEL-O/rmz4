@ FUN_080b8f6c  entry 0x080b8f6c  size 216
.thumb
.org 0xb8f6c
FUN_080b8f6c:
	push {r4, r5, r6, r7, lr}	@ 000b8f6c f0b5
.org 0xb8f6e
	mov r7, r8	@ 000b8f6e 4746
.org 0xb8f70
	push {r7}	@ 000b8f70 80b4
.org 0xb8f72
	adds r4, r0, #0	@ 000b8f72 041c
.org 0xb8f74
	ldr r0, [r4, #40]	@ 000b8f74 a06a
.org 0xb8f76
	mov r8, r0	@ 000b8f76 8046
.org 0xb8f78
	ldrb r0, [r4, #15]	@ 000b8f78 e07b
.org 0xb8f7a
	cmp r0, #0	@ 000b8f7a 0028
.org 0xb8f7c
	bne.n 0xb8fe8	@ 000b8f7c 34d1
.org 0xb8f7e
	movs r0, #202	@ 000b8f7e ca20
.org 0xb8f80
	lsls r0, r0, #1	@ 000b8f80 4000
.org 0xb8f82
	bl 0x2b10	@ 000b8f82 49f7c5fd
.org 0xb8f86
	adds r0, r4, #0	@ 000b8f86 201c
.org 0xb8f88
	adds r0, #116	@ 000b8f88 7430
.org 0xb8f8a
	ldr r1, [pc, #184]	@ 000b8f8a 2e49
.org 0xb8f8c
	bl 0x5784	@ 000b8f8c 4cf7fafb
.org 0xb8f90
	movs r1, #182	@ 000b8f90 b621
.org 0xb8f92
	lsls r1, r1, #8	@ 000b8f92 0902
.org 0xb8f94
	adds r0, r4, #0	@ 000b8f94 201c
.org 0xb8f96
	bl 0x1cf00	@ 000b8f96 63f7b3ff
.org 0xb8f9a
	mov r0, r8	@ 000b8f9a 4046
.org 0xb8f9c
	adds r0, #180	@ 000b8f9c b430
.org 0xb8f9e
	ldr r3, [r0, #0]	@ 000b8f9e 0368
.org 0xb8fa0
	movs r7, #240	@ 000b8fa0 f027
.org 0xb8fa2
	lsls r7, r7, #7	@ 000b8fa2 ff01
.org 0xb8fa4
	adds r1, r3, r7	@ 000b8fa4 d919
.org 0xb8fa6
	ldr r0, [pc, #160]	@ 000b8fa6 2848
.org 0xb8fa8
	ldr r0, [r0, #0]	@ 000b8fa8 0068
.org 0xb8faa
	ldr r0, [r0, #84]	@ 000b8faa 406d
.org 0xb8fac
	movs r2, #1	@ 000b8fac 0122
.org 0xb8fae
	negs r2, r2	@ 000b8fae 5242
.org 0xb8fb0
	cmp r1, r0	@ 000b8fb0 8142
.org 0xb8fb2
	bge.n 0xb8fb6	@ 000b8fb2 00da
.org 0xb8fb4
	movs r2, #1	@ 000b8fb4 0122
.org 0xb8fb6
	lsls r0, r2, #1	@ 000b8fb6 5000
.org 0xb8fb8
	adds r0, r0, r2	@ 000b8fb8 8018
.org 0xb8fba
	lsls r0, r0, #2	@ 000b8fba 8000
.org 0xb8fbc
	subs r0, r0, r2	@ 000b8fbc 801a
.org 0xb8fbe
	lsls r0, r0, #11	@ 000b8fbe c002
.org 0xb8fc0
	adds r0, r0, r7	@ 000b8fc0 c019
.org 0xb8fc2
	adds r5, r3, r0	@ 000b8fc2 1d18
.org 0xb8fc4
	mov r0, r8	@ 000b8fc4 4046
.org 0xb8fc6
	adds r0, #184	@ 000b8fc6 b830
.org 0xb8fc8
	ldr r0, [r0, #0]	@ 000b8fc8 0068
.org 0xb8fca
	ldr r1, [pc, #128]	@ 000b8fca 2049
.org 0xb8fcc
	adds r6, r0, r1	@ 000b8fcc 4618
.org 0xb8fce
	ldr r0, [r4, #84]	@ 000b8fce 606d
.org 0xb8fd0
	str r0, [r4, #92]	@ 000b8fd0 e065
.org 0xb8fd2
	subs r0, r5, r0	@ 000b8fd2 281a
.org 0xb8fd4
	str r0, [r4, #100]	@ 000b8fd4 6066
.org 0xb8fd6
	ldr r0, [r4, #88]	@ 000b8fd6 a06d
.org 0xb8fd8
	str r0, [r4, #96]	@ 000b8fd8 2066
.org 0xb8fda
	subs r0, r6, r0	@ 000b8fda 301a
.org 0xb8fdc
	str r0, [r4, #104]	@ 000b8fdc a066
.org 0xb8fde
	movs r0, #16	@ 000b8fde 1020
.org 0xb8fe0
	strb r0, [r4, #18]	@ 000b8fe0 a074
.org 0xb8fe2
	ldrb r0, [r4, #15]	@ 000b8fe2 e07b
.org 0xb8fe4
	adds r0, #1	@ 000b8fe4 0130
.org 0xb8fe6
	strb r0, [r4, #15]	@ 000b8fe6 e073
.org 0xb8fe8
	adds r0, r4, #0	@ 000b8fe8 201c
.org 0xb8fea
	bl 0x1cff0	@ 000b8fea 64f701f8
.org 0xb8fee
	ldrb r0, [r4, #18]	@ 000b8fee a07c
.org 0xb8ff0
	subs r3, r0, #1	@ 000b8ff0 431e
.org 0xb8ff2
	strb r3, [r4, #18]	@ 000b8ff2 a374
.org 0xb8ff4
	ldrb r1, [r4, #18]	@ 000b8ff4 a17c
.org 0xb8ff6
	movs r0, #16	@ 000b8ff6 1020
.org 0xb8ff8
	subs r0, r0, r1	@ 000b8ff8 401a
.org 0xb8ffa
	lsls r0, r0, #26	@ 000b8ffa 8006
.org 0xb8ffc
	ldr r1, [pc, #80]	@ 000b8ffc 1449
.org 0xb8ffe
	lsrs r0, r0, #23	@ 000b8ffe c00d
.org 0xb9000
	adds r0, r0, r1	@ 000b9000 4018
.org 0xb9002
	movs r1, #0	@ 000b9002 0021
.org 0xb9004
	ldrsh r2, [r0, r1]	@ 000b9004 425e
.org 0xb9006
	ldr r0, [r4, #100]	@ 000b9006 606e
.org 0xb9008
	muls r0, r2	@ 000b9008 5043
.org 0xb900a
	cmp r0, #0	@ 000b900a 0028
.org 0xb900c
	bge.n 0xb9010	@ 000b900c 00da
.org 0xb900e
	adds r0, #255	@ 000b900e ff30
.org 0xb9010
	asrs r0, r0, #8	@ 000b9010 0012
.org 0xb9012
	ldr r1, [r4, #92]	@ 000b9012 e16d
.org 0xb9014
	adds r1, r1, r0	@ 000b9014 0918
.org 0xb9016
	str r1, [r4, #84]	@ 000b9016 6165
.org 0xb9018
	ldr r0, [r4, #104]	@ 000b9018 a06e
.org 0xb901a
	muls r0, r2	@ 000b901a 5043
.org 0xb901c
	cmp r0, #0	@ 000b901c 0028
.org 0xb901e
	bge.n 0xb9022	@ 000b901e 00da
.org 0xb9020
	adds r0, #255	@ 000b9020 ff30
.org 0xb9022
	asrs r0, r0, #8	@ 000b9022 0012
.org 0xb9024
	ldr r1, [r4, #96]	@ 000b9024 216e
.org 0xb9026
	adds r1, r1, r0	@ 000b9026 0918
.org 0xb9028
	str r1, [r4, #88]	@ 000b9028 a165
.org 0xb902a
	lsls r0, r3, #24	@ 000b902a 1806
.org 0xb902c
	lsrs r1, r0, #24	@ 000b902c 010e
.org 0xb902e
	cmp r1, #0	@ 000b902e 0029
.org 0xb9030
	bne.n 0xb903a	@ 000b9030 03d1
.org 0xb9032
	movs r0, #1	@ 000b9032 0120
.org 0xb9034
	strb r0, [r4, #13]	@ 000b9034 6073
.org 0xb9036
	strb r1, [r4, #14]	@ 000b9036 a173
.org 0xb9038
	strb r1, [r4, #15]	@ 000b9038 e173
.org 0xb903a
	pop {r3}	@ 000b903a 08bc
.org 0xb903c
	mov r8, r3	@ 000b903c 9846
.org 0xb903e
	pop {r4, r5, r6, r7}	@ 000b903e f0bc
.org 0xb9040
	pop {r0}	@ 000b9040 01bc
.org 0xb9042
	bx r0	@ 000b9042 0047
