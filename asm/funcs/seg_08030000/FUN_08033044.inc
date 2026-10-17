@ FUN_08033044  entry 0x08033044  size 152
.thumb
.org 0x33044
FUN_08033044:
	push {r4, lr}	@ 00033044 10b5
.org 0x33046
	adds r4, r0, #0	@ 00033046 041c
.org 0x33048
	ldr r0, [pc, #52]	@ 00033048 0d48
.org 0x3304a
	movs r1, #197	@ 0003304a c521
.org 0x3304c
	lsls r1, r1, #3	@ 0003304c c900
.org 0x3304e
	adds r0, r0, r1	@ 0003304e 4018
.org 0x33050
	ldr r0, [r0, #0]	@ 00033050 0068
.org 0x33052
	cmp r0, #0	@ 00033052 0028
.org 0x33054
	beq.n 0x330a0	@ 00033054 24d0
.org 0x33056
	ldr r0, [r0, #44]	@ 00033056 c06a
.org 0x33058
	cmp r0, #0	@ 00033058 0028
.org 0x3305a
	beq.n 0x330a0	@ 0003305a 21d0
.org 0x3305c
	ldr r1, [r0, #84]	@ 0003305c 416d
.org 0x3305e
	ldr r0, [r4, #84]	@ 0003305e 606d
.org 0x33060
	cmp r1, r0	@ 00033060 8142
.org 0x33062
	ble.n 0x33084	@ 00033062 0fdd
.org 0x33064
	adds r1, r4, #0	@ 00033064 211c
.org 0x33066
	adds r1, #76	@ 00033066 4c31
.org 0x33068
	movs r0, #1	@ 00033068 0120
.org 0x3306a
	strb r0, [r1, #0]	@ 0003306a 0870
.org 0x3306c
	adds r2, r4, #0	@ 0003306c 221c
.org 0x3306e
	adds r2, #74	@ 0003306e 4a32
.org 0x33070
	ldrb r0, [r2, #0]	@ 00033070 1078
.org 0x33072
	movs r1, #16	@ 00033072 1021
.org 0x33074
	orrs r0, r1	@ 00033074 0843
.org 0x33076
	strb r0, [r2, #0]	@ 00033076 1070
.org 0x33078
	ldrb r0, [r4, #10]	@ 00033078 a07a
.org 0x3307a
	orrs r1, r0	@ 0003307a 0143
.org 0x3307c
	strb r1, [r4, #10]	@ 0003307c a172
.org 0x3307e
	b.n 0x330a0	@ 0003307e 0fe0
.org 0x33080
	.byte 0xe0,0x32,0x00,0x03	@ 00033080 data
.org 0x33084
	adds r1, r4, #0	@ 00033084 211c
.org 0x33086
	adds r1, #76	@ 00033086 4c31
.org 0x33088
	movs r0, #0	@ 00033088 0020
.org 0x3308a
	strb r0, [r1, #0]	@ 0003308a 0870
.org 0x3308c
	adds r2, r4, #0	@ 0003308c 221c
.org 0x3308e
	adds r2, #74	@ 0003308e 4a32
.org 0x33090
	ldrb r1, [r2, #0]	@ 00033090 1178
.org 0x33092
	subs r0, #17	@ 00033092 1138
.org 0x33094
	ands r0, r1	@ 00033094 0840
.org 0x33096
	strb r0, [r2, #0]	@ 00033096 1070
.org 0x33098
	ldrb r1, [r4, #10]	@ 00033098 a17a
.org 0x3309a
	movs r0, #239	@ 0003309a ef20
.org 0x3309c
	ands r0, r1	@ 0003309c 0840
.org 0x3309e
	strb r0, [r4, #10]	@ 0003309e a072
.org 0x330a0
	ldrb r0, [r4, #15]	@ 000330a0 e07b
.org 0x330a2
	cmp r0, #0	@ 000330a2 0028
.org 0x330a4
	bne.n 0x330c8	@ 000330a4 10d1
.org 0x330a6
	ldr r0, [pc, #24]	@ 000330a6 0648
.org 0x330a8
	ldrb r0, [r0, #0]	@ 000330a8 0078
.org 0x330aa
	cmp r0, #0	@ 000330aa 0028
.org 0x330ac
	bne.n 0x330e4	@ 000330ac 1ad1
.org 0x330ae
	ldr r1, [pc, #20]	@ 000330ae 0549
.org 0x330b0
	adds r0, r4, #0	@ 000330b0 201c
.org 0x330b2
	bl 0x1cf00	@ 000330b2 e9f725ff
.org 0x330b6
	ldrb r0, [r4, #15]	@ 000330b6 e07b
.org 0x330b8
	adds r0, #1	@ 000330b8 0130
.org 0x330ba
	strb r0, [r4, #15]	@ 000330ba e073
.org 0x330bc
	b.n 0x330e4	@ 000330bc 12e0
.org 0x330be
	.byte 0x00	@ 000330be data
.org 0x330bf
	.byte 0x00	@ 000330bf data
.org 0x330c0
	.byte 0xf8,0xdb,0x02,0x02	@ 000330c0 data
.org 0x330c4
	.byte 0x01,0x4c,0x00,0x00	@ 000330c4 data
.org 0x330c8
	adds r0, r4, #0	@ 000330c8 201c
.org 0x330ca
	adds r0, #115	@ 000330ca 7330
.org 0x330cc
	ldrb r0, [r0, #0]	@ 000330cc 0078
.org 0x330ce
	cmp r0, #3	@ 000330ce 0328
.org 0x330d0
	bne.n 0x330e4	@ 000330d0 08d1
.org 0x330d2
	movs r0, #0	@ 000330d2 0020
.org 0x330d4
	strb r0, [r4, #13]	@ 000330d4 6073
.org 0x330d6
	strb r0, [r4, #14]	@ 000330d6 a073
.org 0x330d8
	strb r0, [r4, #15]	@ 000330d8 e073
.org 0x330da
	movs r2, #186	@ 000330da ba22
