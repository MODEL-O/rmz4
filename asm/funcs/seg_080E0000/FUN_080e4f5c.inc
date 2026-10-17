@ FUN_080e4f5c  entry 0x080e4f5c  size 136
.thumb
.org 0xe4f5c
FUN_080e4f5c:
	push {r4, r5, r6, r7, lr}	@ 000e4f5c f0b5
.org 0xe4f5e
	adds r4, r0, #0	@ 000e4f5e 041c
.org 0xe4f60
	bl 0x1cc9c	@ 000e4f60 37f79cfe
.org 0xe4f64
	ldrb r1, [r4, #10]	@ 000e4f64 a17a
.org 0xe4f66
	movs r0, #1	@ 000e4f66 0120
.org 0xe4f68
	orrs r0, r1	@ 000e4f68 0843
.org 0xe4f6a
	movs r1, #2	@ 000e4f6a 0221
.org 0xe4f6c
	orrs r0, r1	@ 000e4f6c 0843
.org 0xe4f6e
	movs r6, #0	@ 000e4f6e 0026
.org 0xe4f70
	movs r2, #0	@ 000e4f70 0022
.org 0xe4f72
	movs r1, #239	@ 000e4f72 ef21
.org 0xe4f74
	ands r0, r1	@ 000e4f74 0840
.org 0xe4f76
	strb r0, [r4, #10]	@ 000e4f76 a072
.org 0xe4f78
	movs r0, #1	@ 000e4f78 0120
.org 0xe4f7a
	mov ip, r0	@ 000e4f7a 8446
.org 0xe4f7c
	adds r5, r4, #0	@ 000e4f7c 251c
.org 0xe4f7e
	adds r5, #76	@ 000e4f7e 4c35
.org 0xe4f80
	strb r2, [r5, #0]	@ 000e4f80 2a70
.org 0xe4f82
	adds r3, r4, #0	@ 000e4f82 231c
.org 0xe4f84
	adds r3, #74	@ 000e4f84 4a33
.org 0xe4f86
	ldrb r1, [r3, #0]	@ 000e4f86 1978
.org 0xe4f88
	movs r7, #17	@ 000e4f88 1127
.org 0xe4f8a
	negs r7, r7	@ 000e4f8a 7f42
.org 0xe4f8c
	adds r0, r7, #0	@ 000e4f8c 381c
.org 0xe4f8e
	ands r0, r1	@ 000e4f8e 0840
.org 0xe4f90
	strb r0, [r3, #0]	@ 000e4f90 1870
.org 0xe4f92
	ldr r1, [pc, #80]	@ 000e4f92 1449
.org 0xe4f94
	ldrb r0, [r4, #9]	@ 000e4f94 607a
.org 0xe4f96
	lsls r0, r0, #2	@ 000e4f96 8000
.org 0xe4f98
	adds r0, r0, r1	@ 000e4f98 4018
.org 0xe4f9a
	mov r1, ip	@ 000e4f9a 6146
.org 0xe4f9c
	str r1, [r4, #12]	@ 000e4f9c e160
.org 0xe4f9e
	ldr r0, [r0, #0]	@ 000e4f9e 0068
.org 0xe4fa0
	ldr r0, [r0, #4]	@ 000e4fa0 4068
.org 0xe4fa2
	str r0, [r4, #20]	@ 000e4fa2 6061
.org 0xe4fa4
	ldr r0, [pc, #64]	@ 000e4fa4 1048
.org 0xe4fa6
	ldr r0, [r0, #0]	@ 000e4fa6 0068
.org 0xe4fa8
	ldr r1, [r0, #84]	@ 000e4fa8 416d
.org 0xe4faa
	ldr r0, [r4, #84]	@ 000e4faa 606d
.org 0xe4fac
	cmp r1, r0	@ 000e4fac 8142
.org 0xe4fae
	ble.n 0xe4fc8	@ 000e4fae 0bdd
.org 0xe4fb0
	ldrb r0, [r4, #10]	@ 000e4fb0 a07a
.org 0xe4fb2
	movs r1, #16	@ 000e4fb2 1021
.org 0xe4fb4
	orrs r0, r1	@ 000e4fb4 0843
.org 0xe4fb6
	strb r0, [r4, #10]	@ 000e4fb6 a072
.org 0xe4fb8
	mov r0, ip	@ 000e4fb8 6046
.org 0xe4fba
	strb r0, [r5, #0]	@ 000e4fba 2870
.org 0xe4fbc
	movs r2, #16	@ 000e4fbc 1022
.org 0xe4fbe
	ldrb r1, [r3, #0]	@ 000e4fbe 1978
.org 0xe4fc0
	adds r0, r7, #0	@ 000e4fc0 381c
.org 0xe4fc2
	ands r0, r1	@ 000e4fc2 0840
.org 0xe4fc4
	orrs r0, r2	@ 000e4fc4 1043
.org 0xe4fc6
	strb r0, [r3, #0]	@ 000e4fc6 1870
.org 0xe4fc8
	ldr r0, [pc, #32]	@ 000e4fc8 0848
.org 0xe4fca
	ldrb r1, [r4, #16]	@ 000e4fca 217c
.org 0xe4fcc
	lsls r1, r1, #2	@ 000e4fcc 8900
.org 0xe4fce
	adds r1, r1, r0	@ 000e4fce 0918
.org 0xe4fd0
	ldr r1, [r1, #0]	@ 000e4fd0 0968
.org 0xe4fd2
	adds r0, r4, #0	@ 000e4fd2 201c
.org 0xe4fd4
	bl 0x128f80	@ 000e4fd4 43f0d4ff
.org 0xe4fd8
	adds r0, r4, #0	@ 000e4fd8 201c
.org 0xe4fda
	bl 0xe4ff0	@ 000e4fda 00f009f8
.org 0xe4fde
	pop {r4, r5, r6, r7}	@ 000e4fde f0bc
.org 0xe4fe0
	pop {r0}	@ 000e4fe0 01bc
.org 0xe4fe2
	bx r0	@ 000e4fe2 0047
