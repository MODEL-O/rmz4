@ FUN_080e3fdc  entry 0x080e3fdc  size 166
.thumb
.org 0xe3fdc
FUN_080e3fdc:
	push {r4, r5, lr}	@ 000e3fdc 30b5
.org 0xe3fde
	adds r4, r0, #0	@ 000e3fde 041c
.org 0xe3fe0
	ldr r5, [r4, #124]	@ 000e3fe0 e56f
.org 0xe3fe2
	ldrb r1, [r5, #3]	@ 000e3fe2 e978
.org 0xe3fe4
	movs r0, #1	@ 000e3fe4 0120
.org 0xe3fe6
	ands r0, r1	@ 000e3fe6 0840
.org 0xe3fe8
	cmp r0, #0	@ 000e3fe8 0028
.org 0xe3fea
	beq.n 0xe3ff6	@ 000e3fea 04d0
.org 0xe3fec
	adds r1, r4, #0	@ 000e3fec 211c
.org 0xe3fee
	adds r1, #84	@ 000e3fee 5431
.org 0xe3ff0
	movs r0, #3	@ 000e3ff0 0320
.org 0xe3ff2
	bl 0xd0c88	@ 000e3ff2 ecf749fe
.org 0xe3ff6
	ldrb r1, [r5, #3]	@ 000e3ff6 e978
.org 0xe3ff8
	movs r0, #2	@ 000e3ff8 0220
.org 0xe3ffa
	ands r0, r1	@ 000e3ffa 0840
.org 0xe3ffc
	cmp r0, #0	@ 000e3ffc 0028
.org 0xe3ffe
	beq.n 0xe400a	@ 000e3ffe 04d0
.org 0xe4000
	adds r1, r4, #0	@ 000e4000 211c
.org 0xe4002
	adds r1, #84	@ 000e4002 5431
.org 0xe4004
	movs r0, #2	@ 000e4004 0220
.org 0xe4006
	bl 0xd0c88	@ 000e4006 ecf73ffe
.org 0xe400a
	ldrb r1, [r5, #3]	@ 000e400a e978
.org 0xe400c
	movs r0, #4	@ 000e400c 0420
.org 0xe400e
	ands r0, r1	@ 000e400e 0840
.org 0xe4010
	cmp r0, #0	@ 000e4010 0028
.org 0xe4012
	beq.n 0xe4042	@ 000e4012 16d0
.org 0xe4014
	adds r1, r4, #0	@ 000e4014 211c
.org 0xe4016
	adds r1, #84	@ 000e4016 5431
.org 0xe4018
	movs r0, #1	@ 000e4018 0120
.org 0xe401a
	bl 0xd0c88	@ 000e401a ecf735fe
.org 0xe401e
	ldr r0, [pc, #20]	@ 000e401e 0548
.org 0xe4020
	ldr r1, [pc, #20]	@ 000e4020 0549
.org 0xe4022
	adds r0, r0, r1	@ 000e4022 4018
.org 0xe4024
	ldr r1, [r4, #88]	@ 000e4024 a16d
.org 0xe4026
	ldr r0, [r0, #0]	@ 000e4026 0068
.org 0xe4028
	cmp r1, r0	@ 000e4028 8142
.org 0xe402a
	ble.n 0xe403c	@ 000e402a 07dd
.org 0xe402c
	movs r0, #49	@ 000e402c 3120
.org 0xe402e
	bl 0x2b10	@ 000e402e 1ef76ffd
.org 0xe4032
	b.n 0xe4042	@ 000e4032 06e0
.org 0xe4034
	.byte 0xb0,0x0a,0x00,0x02	@ 000e4034 data
.org 0xe4038
	.byte 0x0c,0xc0,0x02,0x00	@ 000e4038 data
.org 0xe403c
	movs r0, #42	@ 000e403c 2a20
.org 0xe403e
	bl 0x2b10	@ 000e403e 1ef767fd
.org 0xe4042
	ldrb r1, [r5, #3]	@ 000e4042 e978
.org 0xe4044
	movs r0, #8	@ 000e4044 0820
.org 0xe4046
	ands r0, r1	@ 000e4046 0840
.org 0xe4048
	cmp r0, #0	@ 000e4048 0028
.org 0xe404a
	beq.n 0xe407a	@ 000e404a 16d0
.org 0xe404c
	adds r1, r4, #0	@ 000e404c 211c
.org 0xe404e
	adds r1, #84	@ 000e404e 5431
.org 0xe4050
	movs r0, #1	@ 000e4050 0120
.org 0xe4052
	bl 0xd0c88	@ 000e4052 ecf719fe
.org 0xe4056
	ldr r0, [pc, #20]	@ 000e4056 0548
.org 0xe4058
	ldr r1, [pc, #20]	@ 000e4058 0549
.org 0xe405a
	adds r0, r0, r1	@ 000e405a 4018
.org 0xe405c
	ldr r1, [r4, #88]	@ 000e405c a16d
.org 0xe405e
	ldr r0, [r0, #0]	@ 000e405e 0068
.org 0xe4060
	cmp r1, r0	@ 000e4060 8142
.org 0xe4062
	ble.n 0xe4074	@ 000e4062 07dd
.org 0xe4064
	movs r0, #49	@ 000e4064 3120
.org 0xe4066
	bl 0x2b10	@ 000e4066 1ef753fd
.org 0xe406a
	b.n 0xe407a	@ 000e406a 06e0
.org 0xe406c
	.byte 0xb0,0x0a,0x00,0x02	@ 000e406c data
.org 0xe4070
	.byte 0x0c,0xc0,0x02,0x00	@ 000e4070 data
.org 0xe4074
	movs r0, #53	@ 000e4074 3520
.org 0xe4076
	bl 0x2b10	@ 000e4076 1ef74bfd
.org 0xe407a
	ldr r1, [pc, #24]	@ 000e407a 0649
.org 0xe407c
	ldrb r0, [r4, #9]	@ 000e407c 607a
.org 0xe407e
	lsls r0, r0, #2	@ 000e407e 8000
.org 0xe4080
	adds r0, r0, r1	@ 000e4080 4018
