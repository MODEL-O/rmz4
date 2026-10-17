@ FUN_080a8f60  entry 0x080a8f60  size 182
.thumb
.org 0xa8f60
FUN_080a8f60:
	push {r4, r5, r6, r7, lr}	@ 000a8f60 f0b5
.org 0xa8f62
	mov r7, r8	@ 000a8f62 4746
.org 0xa8f64
	push {r7}	@ 000a8f64 80b4
.org 0xa8f66
	adds r7, r0, #0	@ 000a8f66 071c
.org 0xa8f68
	ldr r6, [r7, #40]	@ 000a8f68 be6a
.org 0xa8f6a
	bl 0x1cc9c	@ 000a8f6a 73f797fe
.org 0xa8f6e
	ldrb r1, [r7, #10]	@ 000a8f6e b97a
.org 0xa8f70
	movs r0, #1	@ 000a8f70 0120
.org 0xa8f72
	orrs r0, r1	@ 000a8f72 0843
.org 0xa8f74
	movs r1, #2	@ 000a8f74 0221
.org 0xa8f76
	orrs r0, r1	@ 000a8f76 0843
.org 0xa8f78
	strb r0, [r7, #10]	@ 000a8f78 b872
.org 0xa8f7a
	adds r0, r7, #0	@ 000a8f7a 381c
.org 0xa8f7c
	adds r0, #34	@ 000a8f7c 2230
.org 0xa8f7e
	movs r1, #1	@ 000a8f7e 0121
.org 0xa8f80
	mov r8, r1	@ 000a8f80 8846
.org 0xa8f82
	mov r1, r8	@ 000a8f82 4146
.org 0xa8f84
	strb r1, [r0, #0]	@ 000a8f84 0170
.org 0xa8f86
	ldr r1, [pc, #144]	@ 000a8f86 2449
.org 0xa8f88
	adds r0, r7, #0	@ 000a8f88 381c
.org 0xa8f8a
	bl 0x1cf00	@ 000a8f8a 73f7b9ff
.org 0xa8f8e
	adds r0, r7, #0	@ 000a8f8e 381c
.org 0xa8f90
	bl 0x1cff0	@ 000a8f90 74f72ef8
.org 0xa8f94
	movs r5, #0	@ 000a8f94 0025
.org 0xa8f96
	ldrb r1, [r7, #10]	@ 000a8f96 b97a
.org 0xa8f98
	movs r0, #239	@ 000a8f98 ef20
.org 0xa8f9a
	ands r0, r1	@ 000a8f9a 0840
.org 0xa8f9c
	strb r0, [r7, #10]	@ 000a8f9c b872
.org 0xa8f9e
	adds r0, r7, #0	@ 000a8f9e 381c
.org 0xa8fa0
	adds r0, #76	@ 000a8fa0 4c30
.org 0xa8fa2
	strb r5, [r0, #0]	@ 000a8fa2 0570
.org 0xa8fa4
	adds r2, r7, #0	@ 000a8fa4 3a1c
.org 0xa8fa6
	adds r2, #74	@ 000a8fa6 4a32
.org 0xa8fa8
	ldrb r1, [r2, #0]	@ 000a8fa8 1178
.org 0xa8faa
	movs r0, #17	@ 000a8faa 1120
.org 0xa8fac
	negs r0, r0	@ 000a8fac 4042
.org 0xa8fae
	ands r0, r1	@ 000a8fae 0840
.org 0xa8fb0
	strb r0, [r2, #0]	@ 000a8fb0 1070
.org 0xa8fb2
	ldrb r1, [r7, #10]	@ 000a8fb2 b97a
.org 0xa8fb4
	movs r0, #4	@ 000a8fb4 0420
.org 0xa8fb6
	orrs r0, r1	@ 000a8fb6 0843
.org 0xa8fb8
	strb r0, [r7, #10]	@ 000a8fb8 b872
.org 0xa8fba
	adds r4, r7, #0	@ 000a8fba 3c1c
.org 0xa8fbc
	adds r4, #116	@ 000a8fbc 7434
.org 0xa8fbe
	ldr r1, [pc, #92]	@ 000a8fbe 1749
.org 0xa8fc0
	adds r2, #10	@ 000a8fc0 0a32
.org 0xa8fc2
	adds r0, r4, #0	@ 000a8fc2 201c
.org 0xa8fc4
	movs r3, #24	@ 000a8fc4 1823
.org 0xa8fc6
	bl 0x5760	@ 000a8fc6 5cf7cbfb
.org 0xa8fca
	str r7, [r4, #44]	@ 000a8fca e762
.org 0xa8fcc
	ldr r0, [pc, #80]	@ 000a8fcc 1448
.org 0xa8fce
	str r0, [r4, #36]	@ 000a8fce 6062
.org 0xa8fd0
	adds r0, r7, #0	@ 000a8fd0 381c
.org 0xa8fd2
	adds r0, #189	@ 000a8fd2 bd30
.org 0xa8fd4
	strb r5, [r0, #0]	@ 000a8fd4 0570
.org 0xa8fd6
	adds r1, r7, #0	@ 000a8fd6 391c
.org 0xa8fd8
	adds r1, #180	@ 000a8fd8 b431
.org 0xa8fda
	adds r6, #180	@ 000a8fda b436
.org 0xa8fdc
	ldr r0, [r6, #0]	@ 000a8fdc 3068
.org 0xa8fde
	str r0, [r1, #0]	@ 000a8fde 0860
.org 0xa8fe0
	adds r1, #4	@ 000a8fe0 0431
.org 0xa8fe2
	ldr r0, [r6, #4]	@ 000a8fe2 7068
.org 0xa8fe4
	str r0, [r1, #0]	@ 000a8fe4 0860
.org 0xa8fe6
	adds r1, #6	@ 000a8fe6 0631
.org 0xa8fe8
	movs r0, #250	@ 000a8fe8 fa20
.org 0xa8fea
	lsls r0, r0, #2	@ 000a8fea 8000
.org 0xa8fec
	strh r0, [r1, #0]	@ 000a8fec 0880
.org 0xa8fee
	adds r0, r7, #0	@ 000a8fee 381c
.org 0xa8ff0
	adds r0, #192	@ 000a8ff0 c030
.org 0xa8ff2
	str r5, [r0, #0]	@ 000a8ff2 0560
.org 0xa8ff4
	ldr r1, [pc, #44]	@ 000a8ff4 0b49
.org 0xa8ff6
	ldrb r0, [r7, #9]	@ 000a8ff6 787a
.org 0xa8ff8
	lsls r0, r0, #2	@ 000a8ff8 8000
.org 0xa8ffa
	adds r0, r0, r1	@ 000a8ffa 4018
.org 0xa8ffc
	mov r1, r8	@ 000a8ffc 4146
.org 0xa8ffe
	str r1, [r7, #12]	@ 000a8ffe f960
.org 0xa9000
	ldr r0, [r0, #0]	@ 000a9000 0068
.org 0xa9002
	ldr r0, [r0, #4]	@ 000a9002 4068
.org 0xa9004
	str r0, [r7, #20]	@ 000a9004 7861
.org 0xa9006
	adds r0, r7, #0	@ 000a9006 381c
.org 0xa9008
	bl 0xa9028	@ 000a9008 00f00ef8
.org 0xa900c
	pop {r3}	@ 000a900c 08bc
.org 0xa900e
	mov r8, r3	@ 000a900e 9846
.org 0xa9010
	pop {r4, r5, r6, r7}	@ 000a9010 f0bc
.org 0xa9012
	pop {r0}	@ 000a9012 01bc
.org 0xa9014
	bx r0	@ 000a9014 0047
