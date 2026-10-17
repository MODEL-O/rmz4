@ FUN_080e2d90  entry 0x080e2d90  size 106
.thumb
.org 0xe2d90
FUN_080e2d90:
	push {r4, lr}	@ 000e2d90 10b5
.org 0xe2d92
	adds r4, r0, #0	@ 000e2d92 041c
.org 0xe2d94
	ldr r0, [r4, #84]	@ 000e2d94 606d
.org 0xe2d96
	ldr r1, [r4, #92]	@ 000e2d96 e16d
.org 0xe2d98
	adds r0, r0, r1	@ 000e2d98 4018
.org 0xe2d9a
	str r0, [r4, #84]	@ 000e2d9a 6065
.org 0xe2d9c
	ldr r1, [r4, #88]	@ 000e2d9c a16d
.org 0xe2d9e
	ldr r2, [r4, #96]	@ 000e2d9e 226e
.org 0xe2da0
	adds r1, r1, r2	@ 000e2da0 8918
.org 0xe2da2
	str r1, [r4, #88]	@ 000e2da2 a165
.org 0xe2da4
	adds r2, #64	@ 000e2da4 4032
.org 0xe2da6
	str r2, [r4, #96]	@ 000e2da6 2266
.org 0xe2da8
	bl 0x7c7c	@ 000e2da8 24f768ff
.org 0xe2dac
	lsls r0, r0, #16	@ 000e2dac 0004
.org 0xe2dae
	lsrs r3, r0, #16	@ 000e2dae 030c
.org 0xe2db0
	cmp r3, #0	@ 000e2db0 002b
.org 0xe2db2
	beq.n 0xe2dd8	@ 000e2db2 11d0
.org 0xe2db4
	adds r1, r4, #0	@ 000e2db4 211c
.org 0xe2db6
	adds r1, #84	@ 000e2db6 5431
.org 0xe2db8
	movs r0, #3	@ 000e2db8 0320
.org 0xe2dba
	bl 0xd0c88	@ 000e2dba edf765ff
.org 0xe2dbe
	ldr r1, [pc, #20]	@ 000e2dbe 0549
.org 0xe2dc0
	ldrb r0, [r4, #9]	@ 000e2dc0 607a
.org 0xe2dc2
	lsls r0, r0, #2	@ 000e2dc2 8000
.org 0xe2dc4
	adds r0, r0, r1	@ 000e2dc4 4018
.org 0xe2dc6
	movs r1, #2	@ 000e2dc6 0221
.org 0xe2dc8
	str r1, [r4, #12]	@ 000e2dc8 e160
.org 0xe2dca
	ldr r0, [r0, #0]	@ 000e2dca 0068
.org 0xe2dcc
	ldr r0, [r0, #8]	@ 000e2dcc 8068
.org 0xe2dce
	str r0, [r4, #20]	@ 000e2dce 6061
.org 0xe2dd0
	b.n 0xe2dfa	@ 000e2dd0 13e0
.org 0xe2dd2
	.byte 0x00	@ 000e2dd2 data
.org 0xe2dd3
	.byte 0x00	@ 000e2dd3 data
.org 0xe2dd4
	.byte 0x64,0x6f,0x86,0x08	@ 000e2dd4 data
.org 0xe2dd8
	adds r2, r4, #0	@ 000e2dd8 221c
.org 0xe2dda
	adds r2, #116	@ 000e2dda 7432
.org 0xe2ddc
	ldrb r0, [r2, #0]	@ 000e2ddc 1078
.org 0xe2dde
	cmp r0, #0	@ 000e2dde 0028
.org 0xe2de0
	bne.n 0xe2df0	@ 000e2de0 06d1
.org 0xe2de2
	ldrb r0, [r4, #10]	@ 000e2de2 a07a
.org 0xe2de4
	movs r1, #1	@ 000e2de4 0121
.org 0xe2de6
	orrs r1, r0	@ 000e2de6 0143
.org 0xe2de8
	strb r1, [r4, #10]	@ 000e2de8 a172
.org 0xe2dea
	movs r0, #1	@ 000e2dea 0120
.org 0xe2dec
	strb r0, [r2, #0]	@ 000e2dec 1070
.org 0xe2dee
	b.n 0xe2dfa	@ 000e2dee 04e0
.org 0xe2df0
	ldrb r1, [r4, #10]	@ 000e2df0 a17a
.org 0xe2df2
	movs r0, #254	@ 000e2df2 fe20
.org 0xe2df4
	ands r0, r1	@ 000e2df4 0840
.org 0xe2df6
	strb r0, [r4, #10]	@ 000e2df6 a072
.org 0xe2df8
	strb r3, [r2, #0]	@ 000e2df8 1370
