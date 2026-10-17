@ FUN_08055d88  entry 0x08055d88  size 178
.thumb
.org 0x55d88
FUN_08055d88:
	push {r4, lr}	@ 00055d88 10b5
.org 0x55d8a
	adds r4, r0, #0	@ 00055d8a 041c
.org 0x55d8c
	ldrb r0, [r4, #15]	@ 00055d8c e07b
.org 0x55d8e
	cmp r0, #0	@ 00055d8e 0028
.org 0x55d90
	bne.n 0x55dae	@ 00055d90 0dd1
.org 0x55d92
	ldr r1, [pc, #112]	@ 00055d92 1c49
.org 0x55d94
	adds r0, r4, #0	@ 00055d94 201c
.org 0x55d96
	bl 0x1cf00	@ 00055d96 c7f7b3f8
.org 0x55d9a
	adds r0, r4, #0	@ 00055d9a 201c
.org 0x55d9c
	bl 0x5977c	@ 00055d9c 03f0eefc
.org 0x55da0
	ldr r1, [pc, #100]	@ 00055da0 1949
.org 0x55da2
	adds r0, r0, r1	@ 00055da2 4018
.org 0x55da4
	ldrb r0, [r0, #0]	@ 00055da4 0078
.org 0x55da6
	strb r0, [r4, #18]	@ 00055da6 a074
.org 0x55da8
	ldrb r0, [r4, #15]	@ 00055da8 e07b
.org 0x55daa
	adds r0, #1	@ 00055daa 0130
.org 0x55dac
	strb r0, [r4, #15]	@ 00055dac e073
.org 0x55dae
	adds r0, r4, #0	@ 00055dae 201c
.org 0x55db0
	bl 0x1cff0	@ 00055db0 c7f71ef9
.org 0x55db4
	adds r0, r4, #0	@ 00055db4 201c
.org 0x55db6
	adds r0, #116	@ 00055db6 7430
.org 0x55db8
	ldr r3, [pc, #80]	@ 00055db8 144b
.org 0x55dba
	ldrb r1, [r4, #30]	@ 00055dba a17f
.org 0x55dbc
	lsls r1, r1, #8	@ 00055dbc 0902
.org 0x55dbe
	adds r2, r4, #0	@ 00055dbe 221c
.org 0x55dc0
	adds r2, #112	@ 00055dc0 7032
.org 0x55dc2
	ldrb r2, [r2, #0]	@ 00055dc2 1278
.org 0x55dc4
	orrs r1, r2	@ 00055dc4 1143
.org 0x55dc6
	ldr r2, [pc, #72]	@ 00055dc6 124a
.org 0x55dc8
	adds r1, r1, r2	@ 00055dc8 8918
.org 0x55dca
	lsls r1, r1, #2	@ 00055dca 8900
.org 0x55dcc
	adds r1, r1, r3	@ 00055dcc c918
.org 0x55dce
	adds r2, r4, #0	@ 00055dce 221c
.org 0x55dd0
	adds r2, #113	@ 00055dd0 7132
.org 0x55dd2
	ldrb r2, [r2, #0]	@ 00055dd2 1278
.org 0x55dd4
	lsls r2, r2, #24	@ 00055dd4 1206
.org 0x55dd6
	asrs r2, r2, #24	@ 00055dd6 1216
.org 0x55dd8
	ldr r1, [r1, #0]	@ 00055dd8 0968
.org 0x55dda
	lsls r2, r2, #2	@ 00055dda 9200
.org 0x55ddc
	adds r2, r2, r1	@ 00055ddc 5218
.org 0x55dde
	ldr r1, [r2, #0]	@ 00055dde 1168
.org 0x55de0
	ldrb r2, [r1, #0]	@ 00055de0 0a78
.org 0x55de2
	lsls r1, r2, #1	@ 00055de2 5100
.org 0x55de4
	adds r1, r1, r2	@ 00055de4 8918
.org 0x55de6
	lsls r1, r1, #3	@ 00055de6 c900
.org 0x55de8
	ldr r2, [pc, #40]	@ 00055de8 0a4a
.org 0x55dea
	adds r1, r1, r2	@ 00055dea 8918
.org 0x55dec
	bl 0x5784	@ 00055dec aff7cafc
.org 0x55df0
	adds r0, r4, #0	@ 00055df0 201c
.org 0x55df2
	bl 0x597ac	@ 00055df2 03f0dbfc
.org 0x55df6
	adds r2, r0, #0	@ 00055df6 021c
.org 0x55df8
	cmp r2, #0	@ 00055df8 002a
.org 0x55dfa
	beq.n 0x55e18	@ 00055dfa 0dd0
.org 0x55dfc
	movs r0, #0	@ 00055dfc 0020
.org 0x55dfe
	strb r0, [r4, #14]	@ 00055dfe a073
.org 0x55e00
	strb r0, [r4, #15]	@ 00055e00 e073
.org 0x55e02
	b.n 0x55e52	@ 00055e02 26e0
.org 0x55e04
	.byte 0x06,0xa0,0x00,0x00	@ 00055e04 data
.org 0x55e08
	.byte 0xb0,0x87,0x85,0x08	@ 00055e08 data
.org 0x55e0c
	.byte 0x1c,0x87,0x85,0x08	@ 00055e0c data
.org 0x55e10
	.byte 0x00,0x60,0xff,0xff	@ 00055e10 data
.org 0x55e14
	.byte 0xcc,0x84,0x85,0x08	@ 00055e14 data
.org 0x55e18
	adds r1, r4, #0	@ 00055e18 211c
.org 0x55e1a
	adds r1, #188	@ 00055e1a bc31
.org 0x55e1c
	ldr r0, [pc, #20]	@ 00055e1c 0548
.org 0x55e1e
	ldr r0, [r0, #60]	@ 00055e1e c06b
.org 0x55e20
	ldr r3, [pc, #20]	@ 00055e20 054b
.org 0x55e22
	adds r0, r0, r3	@ 00055e22 c018
.org 0x55e24
	ldr r1, [r1, #0]	@ 00055e24 0968
.org 0x55e26
	cmp r1, r0	@ 00055e26 8142
.org 0x55e28
	bge.n 0x55e3c	@ 00055e28 08da
.org 0x55e2a
	movs r0, #2	@ 00055e2a 0220
.org 0x55e2c
	strb r0, [r4, #14]	@ 00055e2c a073
.org 0x55e2e
	strb r2, [r4, #15]	@ 00055e2e e273
.org 0x55e30
	b.n 0x55e52	@ 00055e30 0fe0
.org 0x55e32
	.byte 0x00	@ 00055e32 data
.org 0x55e33
	.byte 0x00	@ 00055e33 data
.org 0x55e34
	.byte 0xf8,0xe9,0x02,0x02	@ 00055e34 data
.org 0x55e38
	.byte 0x00,0xac,0xff,0xff	@ 00055e38 data
