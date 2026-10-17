@ FUN_0806cf8c  entry 0x0806cf8c  size 252
.thumb
.org 0x6cf8c
FUN_0806cf8c:
	push {r4, r5, lr}	@ 0006cf8c 30b5
.org 0x6cf8e
	adds r4, r0, #0	@ 0006cf8e 041c
.org 0x6cf90
	ldrb r5, [r4, #14]	@ 0006cf90 a57b
.org 0x6cf92
	cmp r5, #0	@ 0006cf92 002d
.org 0x6cf94
	bne.n 0x6d028	@ 0006cf94 48d1
.org 0x6cf96
	ldr r1, [pc, #68]	@ 0006cf96 1149
.org 0x6cf98
	bl 0x1cf00	@ 0006cf98 aff7b2ff
.org 0x6cf9c
	movs r0, #207	@ 0006cf9c cf20
.org 0x6cf9e
	bl 0x2b10	@ 0006cf9e 95f7b7fd
.org 0x6cfa2
	adds r0, r4, #0	@ 0006cfa2 201c
.org 0x6cfa4
	adds r0, #116	@ 0006cfa4 7430
.org 0x6cfa6
	ldr r1, [pc, #56]	@ 0006cfa6 0e49
.org 0x6cfa8
	bl 0x5784	@ 0006cfa8 98f7ecfb
.org 0x6cfac
	ldr r0, [pc, #52]	@ 0006cfac 0d48
.org 0x6cfae
	ldr r0, [r0, #0]	@ 0006cfae 0068
.org 0x6cfb0
	ldr r1, [r4, #84]	@ 0006cfb0 616d
.org 0x6cfb2
	ldr r0, [r0, #84]	@ 0006cfb2 406d
.org 0x6cfb4
	cmp r1, r0	@ 0006cfb4 8142
.org 0x6cfb6
	ble.n 0x6cfe8	@ 0006cfb6 17dd
.org 0x6cfb8
	movs r0, #224	@ 0006cfb8 e020
.org 0x6cfba
	lsls r0, r0, #1	@ 0006cfba 4000
.org 0x6cfbc
	str r0, [r4, #92]	@ 0006cfbc e065
.org 0x6cfbe
	adds r0, r4, #0	@ 0006cfbe 201c
.org 0x6cfc0
	adds r0, #76	@ 0006cfc0 4c30
.org 0x6cfc2
	strb r5, [r0, #0]	@ 0006cfc2 0570
.org 0x6cfc4
	adds r2, r4, #0	@ 0006cfc4 221c
.org 0x6cfc6
	adds r2, #74	@ 0006cfc6 4a32
.org 0x6cfc8
	ldrb r1, [r2, #0]	@ 0006cfc8 1178
.org 0x6cfca
	movs r0, #17	@ 0006cfca 1120
.org 0x6cfcc
	negs r0, r0	@ 0006cfcc 4042
.org 0x6cfce
	ands r0, r1	@ 0006cfce 0840
.org 0x6cfd0
	strb r0, [r2, #0]	@ 0006cfd0 1070
.org 0x6cfd2
	ldrb r1, [r4, #10]	@ 0006cfd2 a17a
.org 0x6cfd4
	movs r0, #239	@ 0006cfd4 ef20
.org 0x6cfd6
	ands r0, r1	@ 0006cfd6 0840
.org 0x6cfd8
	strb r0, [r4, #10]	@ 0006cfd8 a072
.org 0x6cfda
	b.n 0x6d006	@ 0006cfda 14e0
.org 0x6cfdc
	.byte 0x06,0xaa,0x00,0x00	@ 0006cfdc data
.org 0x6cfe0
	.byte 0xdc,0xc1,0x85,0x08	@ 0006cfe0 data
.org 0x6cfe4
	.byte 0xf0,0xdb,0x02,0x02	@ 0006cfe4 data
.org 0x6cfe8
	ldr r0, [pc, #144]	@ 0006cfe8 2448
.org 0x6cfea
	str r0, [r4, #92]	@ 0006cfea e065
.org 0x6cfec
	adds r1, r4, #0	@ 0006cfec 211c
.org 0x6cfee
	adds r1, #76	@ 0006cfee 4c31
.org 0x6cff0
	movs r0, #1	@ 0006cff0 0120
.org 0x6cff2
	strb r0, [r1, #0]	@ 0006cff2 0870
.org 0x6cff4
	adds r2, r4, #0	@ 0006cff4 221c
.org 0x6cff6
	adds r2, #74	@ 0006cff6 4a32
.org 0x6cff8
	ldrb r0, [r2, #0]	@ 0006cff8 1078
.org 0x6cffa
	movs r1, #16	@ 0006cffa 1021
.org 0x6cffc
	orrs r0, r1	@ 0006cffc 0843
.org 0x6cffe
	strb r0, [r2, #0]	@ 0006cffe 1070
.org 0x6d000
	ldrb r0, [r4, #10]	@ 0006d000 a07a
.org 0x6d002
	orrs r1, r0	@ 0006d002 0143
.org 0x6d004
	strb r1, [r4, #10]	@ 0006d004 a172
.org 0x6d006
	ldr r0, [pc, #120]	@ 0006d006 1e48
.org 0x6d008
	str r0, [r4, #96]	@ 0006d008 2066
.org 0x6d00a
	adds r5, r4, #0	@ 0006d00a 251c
.org 0x6d00c
	adds r5, #216	@ 0006d00c d835
.org 0x6d00e
	ldrb r0, [r5, #0]	@ 0006d00e 2878
.org 0x6d010
	cmp r0, #0	@ 0006d010 0028
.org 0x6d012
	beq.n 0x6d01e	@ 0006d012 04d0
.org 0x6d014
	movs r0, #200	@ 0006d014 c820
.org 0x6d016
	bl 0x2b5c	@ 0006d016 95f7a1fd
.org 0x6d01a
	movs r0, #0	@ 0006d01a 0020
.org 0x6d01c
	strb r0, [r5, #0]	@ 0006d01c 2870
.org 0x6d01e
	movs r0, #0	@ 0006d01e 0020
.org 0x6d020
	strb r0, [r4, #15]	@ 0006d020 e073
.org 0x6d022
	ldrb r0, [r4, #14]	@ 0006d022 a07b
.org 0x6d024
	adds r0, #1	@ 0006d024 0130
.org 0x6d026
	strb r0, [r4, #14]	@ 0006d026 a073
.org 0x6d028
	adds r0, r4, #0	@ 0006d028 201c
.org 0x6d02a
	bl 0x1cff0	@ 0006d02a aff7e1ff
.org 0x6d02e
	ldrb r0, [r4, #15]	@ 0006d02e e07b
.org 0x6d030
	cmp r0, #0	@ 0006d030 0028
.org 0x6d032
	bne.n 0x6d08c	@ 0006d032 2bd1
.org 0x6d034
	ldr r0, [r4, #84]	@ 0006d034 606d
.org 0x6d036
	ldr r1, [r4, #92]	@ 0006d036 e16d
.org 0x6d038
	adds r0, r0, r1	@ 0006d038 4018
.org 0x6d03a
	str r0, [r4, #84]	@ 0006d03a 6065
.org 0x6d03c
	ldr r1, [r4, #88]	@ 0006d03c a16d
.org 0x6d03e
	ldr r0, [r4, #96]	@ 0006d03e 206e
.org 0x6d040
	adds r1, r1, r0	@ 0006d040 0918
.org 0x6d042
	str r1, [r4, #88]	@ 0006d042 a165
.org 0x6d044
	adds r0, #64	@ 0006d044 4030
.org 0x6d046
	str r0, [r4, #96]	@ 0006d046 2066
.org 0x6d048
	adds r5, r4, #0	@ 0006d048 251c
.org 0x6d04a
	adds r5, #180	@ 0006d04a b435
.org 0x6d04c
	ldr r0, [r5, #4]	@ 0006d04c 6868
.org 0x6d04e
	cmp r1, r0	@ 0006d04e 8142
.org 0x6d050
	ble.n 0x6d09e	@ 0006d050 25dd
.org 0x6d052
	ldr r1, [pc, #48]	@ 0006d052 0c49
.org 0x6d054
	adds r0, r4, #0	@ 0006d054 201c
.org 0x6d056
	bl 0x1cf00	@ 0006d056 aff753ff
.org 0x6d05a
	movs r0, #211	@ 0006d05a d320
.org 0x6d05c
	bl 0x2b10	@ 0006d05c 95f758fd
.org 0x6d060
	adds r0, r4, #0	@ 0006d060 201c
.org 0x6d062
	bl 0x1cff0	@ 0006d062 aff7c5ff
.org 0x6d066
	adds r0, r4, #0	@ 0006d066 201c
.org 0x6d068
	adds r0, #116	@ 0006d068 7430
.org 0x6d06a
	ldr r1, [pc, #28]	@ 0006d06a 0749
.org 0x6d06c
	bl 0x5784	@ 0006d06c 98f78afb
.org 0x6d070
	ldr r0, [r5, #4]	@ 0006d070 6868
.org 0x6d072
	str r0, [r4, #88]	@ 0006d072 a065
.org 0x6d074
	ldrb r0, [r4, #15]	@ 0006d074 e07b
.org 0x6d076
	adds r0, #1	@ 0006d076 0130
.org 0x6d078
	strb r0, [r4, #15]	@ 0006d078 e073
.org 0x6d07a
	b.n 0x6d09e	@ 0006d07a 10e0
.org 0x6d07c
	.byte 0x40,0xfe,0xff,0xff	@ 0006d07c data
.org 0x6d080
	.byte 0x00,0xfd,0xff,0xff	@ 0006d080 data
.org 0x6d084
	.byte 0x05,0xaa,0x00,0x00	@ 0006d084 data
