@ FUN_080fafdc  entry 0x080fafdc  size 80
.thumb
.org 0xfafdc
FUN_080fafdc:
	push {r4, lr}	@ 000fafdc 10b5
.org 0xfafde
	adds r4, r0, #0	@ 000fafde 041c
.org 0xfafe0
	ldr r0, [pc, #40]	@ 000fafe0 0a48
.org 0xfafe2
	adds r1, r4, #0	@ 000fafe2 211c
.org 0xfafe4
	adds r1, #84	@ 000fafe4 5431
.org 0xfafe6
	bl 0x1fb14	@ 000fafe6 24f795fd
.org 0xfafea
	movs r1, #240	@ 000fafea f021
.org 0xfafec
	lsls r1, r1, #8	@ 000fafec 0902
.org 0xfafee
	cmp r0, r1	@ 000fafee 8842
.org 0xfaff0
	bls.n 0xfb014	@ 000faff0 10d9
.org 0xfaff2
	ldr r1, [pc, #28]	@ 000faff2 0749
.org 0xfaff4
	ldrb r0, [r4, #9]	@ 000faff4 607a
.org 0xfaff6
	lsls r0, r0, #2	@ 000faff6 8000
.org 0xfaff8
	adds r0, r0, r1	@ 000faff8 4018
.org 0xfaffa
	movs r1, #2	@ 000faffa 0221
.org 0xfaffc
	str r1, [r4, #12]	@ 000faffc e160
.org 0xfaffe
	ldr r0, [r0, #0]	@ 000faffe 0068
.org 0xfb000
	ldr r0, [r0, #8]	@ 000fb000 8068
.org 0xfb002
	str r0, [r4, #20]	@ 000fb002 6061
.org 0xfb004
	adds r0, r4, #0	@ 000fb004 201c
.org 0xfb006
	bl 0xfb17c	@ 000fb006 00f0b9f8
.org 0xfb00a
	b.n 0xfb02e	@ 000fb00a 10e0
.org 0xfb00c
	.byte 0xf8,0xe9,0x02,0x02	@ 000fb00c data
.org 0xfb010
	.byte 0xfc,0x92,0x86,0x08	@ 000fb010 data
.org 0xfb014
	adds r0, r4, #0	@ 000fb014 201c
.org 0xfb016
	adds r0, #180	@ 000fb016 b430
.org 0xfb018
	ldrb r0, [r0, #0]	@ 000fb018 0078
.org 0xfb01a
	cmp r0, #0	@ 000fb01a 0028
.org 0xfb01c
	beq.n 0xfb02e	@ 000fb01c 07d0
.org 0xfb01e
	ldr r0, [pc, #20]	@ 000fb01e 0548
.org 0xfb020
	ldrb r1, [r4, #13]	@ 000fb020 617b
.org 0xfb022
	lsls r1, r1, #2	@ 000fb022 8900
.org 0xfb024
	adds r1, r1, r0	@ 000fb024 0918
.org 0xfb026
	ldr r1, [r1, #0]	@ 000fb026 0968
.org 0xfb028
	adds r0, r4, #0	@ 000fb028 201c
.org 0xfb02a
	bl 0x128f80	@ 000fb02a 2df0a9ff
