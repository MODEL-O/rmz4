@ FUN_0803db6c  entry 0x0803db6c  size 110
.thumb
.org 0x3db6c
FUN_0803db6c:
	push {r4, lr}	@ 0003db6c 10b5
.org 0x3db6e
	adds r4, r0, #0	@ 0003db6e 041c
.org 0x3db70
	bl 0x3dc14	@ 0003db70 00f050f8
.org 0x3db74
	lsls r0, r0, #24	@ 0003db74 0006
.org 0x3db76
	cmp r0, #0	@ 0003db76 0028
.org 0x3db78
	bne.n 0x3db86	@ 0003db78 05d1
.org 0x3db7a
	adds r0, r4, #0	@ 0003db7a 201c
.org 0x3db7c
	adds r0, #180	@ 0003db7c b430
.org 0x3db7e
	ldr r0, [r0, #0]	@ 0003db7e 0068
.org 0x3db80
	ldrb r0, [r0, #12]	@ 0003db80 007b
.org 0x3db82
	cmp r0, #1	@ 0003db82 0128
.org 0x3db84
	bls.n 0x3dbc4	@ 0003db84 1ed9
.org 0x3db86
	ldrb r1, [r4, #10]	@ 0003db86 a17a
.org 0x3db88
	movs r0, #254	@ 0003db88 fe20
.org 0x3db8a
	ands r0, r1	@ 0003db8a 0840
.org 0x3db8c
	movs r2, #0	@ 0003db8c 0022
.org 0x3db8e
	movs r1, #253	@ 0003db8e fd21
.org 0x3db90
	ands r0, r1	@ 0003db90 0840
.org 0x3db92
	strb r0, [r4, #10]	@ 0003db92 a072
.org 0x3db94
	adds r0, r4, #0	@ 0003db94 201c
.org 0x3db96
	adds r0, #140	@ 0003db96 8c30
.org 0x3db98
	str r2, [r0, #0]	@ 0003db98 0260
.org 0x3db9a
	adds r0, #4	@ 0003db9a 0430
.org 0x3db9c
	str r2, [r0, #0]	@ 0003db9c 0260
.org 0x3db9e
	adds r0, #4	@ 0003db9e 0430
.org 0x3dba0
	strb r2, [r0, #0]	@ 0003dba0 0270
.org 0x3dba2
	ldrb r1, [r4, #10]	@ 0003dba2 a17a
.org 0x3dba4
	movs r0, #251	@ 0003dba4 fb20
.org 0x3dba6
	ands r0, r1	@ 0003dba6 0840
.org 0x3dba8
	strb r0, [r4, #10]	@ 0003dba8 a072
.org 0x3dbaa
	ldr r1, [pc, #20]	@ 0003dbaa 0549
.org 0x3dbac
	ldrb r0, [r4, #9]	@ 0003dbac 607a
.org 0x3dbae
	lsls r0, r0, #2	@ 0003dbae 8000
.org 0x3dbb0
	adds r0, r0, r1	@ 0003dbb0 4018
.org 0x3dbb2
	movs r1, #3	@ 0003dbb2 0321
.org 0x3dbb4
	str r1, [r4, #12]	@ 0003dbb4 e160
.org 0x3dbb6
	ldr r0, [r0, #0]	@ 0003dbb6 0068
.org 0x3dbb8
	ldr r0, [r0, #12]	@ 0003dbb8 c068
.org 0x3dbba
	str r0, [r4, #20]	@ 0003dbba 6061
.org 0x3dbbc
	b.n 0x3dbda	@ 0003dbbc 0de0
.org 0x3dbbe
	.byte 0x00	@ 0003dbbe data
.org 0x3dbbf
	.byte 0x00	@ 0003dbbf data
.org 0x3dbc0
	.byte 0xf8,0x39,0x85,0x08	@ 0003dbc0 data
.org 0x3dbc4
	ldr r0, [pc, #24]	@ 0003dbc4 0648
.org 0x3dbc6
	ldrb r1, [r4, #16]	@ 0003dbc6 217c
.org 0x3dbc8
	lsls r1, r1, #2	@ 0003dbc8 8900
.org 0x3dbca
	adds r1, r1, r0	@ 0003dbca 0918
.org 0x3dbcc
	ldr r1, [r1, #0]	@ 0003dbcc 0968
.org 0x3dbce
	adds r0, r4, #0	@ 0003dbce 201c
.org 0x3dbd0
	bl 0x128f80	@ 0003dbd0 ebf0d6f9
.org 0x3dbd4
	adds r0, r4, #0	@ 0003dbd4 201c
.org 0x3dbd6
	bl 0x1cff0	@ 0003dbd6 dff70bfa
