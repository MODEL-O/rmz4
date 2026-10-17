@ FUN_08119070  entry 0x08119070  size 182
.thumb
.org 0x119070
FUN_08119070:
	push {r4, r5, r6, r7, lr}	@ 00119070 f0b5
.org 0x119072
	mov r7, r9	@ 00119072 4f46
.org 0x119074
	mov r6, r8	@ 00119074 4646
.org 0x119076
	push {r6, r7}	@ 00119076 c0b4
.org 0x119078
	adds r5, r0, #0	@ 00119078 051c
.org 0x11907a
	ldr r1, [pc, #28]	@ 0011907a 0749
.org 0x11907c
	adds r0, r5, r1	@ 0011907c 6818
.org 0x11907e
	ldr r7, [r0, #0]	@ 0011907e 0768
.org 0x119080
	ldr r0, [pc, #24]	@ 00119080 0648
.org 0x119082
	adds r2, r5, r0	@ 00119082 2a18
.org 0x119084
	ldrb r0, [r2, #0]	@ 00119084 1078
.org 0x119086
	cmp r0, #5	@ 00119086 0528
.org 0x119088
	bls.n 0x11908c	@ 00119088 00d9
.org 0x11908a
	b.n 0x1192ec	@ 0011908a 2fe1
.org 0x11908c
	lsls r0, r0, #2	@ 0011908c 8000
.org 0x11908e
	ldr r1, [pc, #16]	@ 0011908e 0449
.org 0x119090
	adds r0, r0, r1	@ 00119090 4018
.org 0x119092
	ldr r0, [r0, #0]	@ 00119092 0068
.org 0x119094
	adds r6, r2, #0	@ 00119094 161c
.org 0x119096
	mov pc, r0	@ 00119096 8746
.org 0x119098
	.byte 0xa8,0x63,0x00,0x00	@ 00119098 data
.org 0x11909c
	.byte 0xf7,0x0d,0x00,0x00	@ 0011909c data
.org 0x1190a0
	.byte 0xa4,0x90,0x11,0x08	@ 001190a0 data
.org 0x1190a4
	.byte 0xbc,0x90,0x11,0x08	@ 001190a4 data
.org 0x1190a8
	.byte 0xc8,0x90,0x11,0x08	@ 001190a8 data
.org 0x1190ac
	.byte 0x30,0x91,0x11,0x08	@ 001190ac data
.org 0x1190b0
	.byte 0x64,0x91,0x11,0x08	@ 001190b0 data
.org 0x1190b4
	.byte 0x90,0x91,0x11,0x08	@ 001190b4 data
.org 0x1190b8
	.byte 0xca,0x92,0x11,0x08	@ 001190b8 data
.org 0x1190bc
	.byte 0x07	@ 001190bc data
.org 0x1190bd
	.byte 0x4a	@ 001190bd data
.org 0x1190be
	.byte 0xa9	@ 001190be data
.org 0x1190bf
	.byte 0x18	@ 001190bf data
.org 0x1190c0
	.byte 0x08	@ 001190c0 data
.org 0x1190c1
	.byte 0x78	@ 001190c1 data
.org 0x1190c2
	.byte 0x01	@ 001190c2 data
.org 0x1190c3
	.byte 0x30	@ 001190c3 data
.org 0x1190c4
	.byte 0x08	@ 001190c4 data
.org 0x1190c5
	.byte 0x70	@ 001190c5 data
.org 0x1190c6
	.byte 0x0e	@ 001190c6 data
.org 0x1190c7
	.byte 0x1c	@ 001190c7 data
.org 0x1190c8
	.byte 0x38	@ 001190c8 data
.org 0x1190c9
	.byte 0x1c	@ 001190c9 data
.org 0x1190ca
	.byte 0xb4	@ 001190ca data
.org 0x1190cb
	.byte 0x30	@ 001190cb data
.org 0x1190cc
	.byte 0x41	@ 001190cc data
.org 0x1190cd
	.byte 0x7b	@ 001190cd data
.org 0x1190ce
	.byte 0x02	@ 001190ce data
.org 0x1190cf
	.byte 0x1c	@ 001190cf data
.org 0x1190d0
	.byte 0x02	@ 001190d0 data
.org 0x1190d1
	.byte 0x29	@ 001190d1 data
.org 0x1190d2
	.byte 0x05	@ 001190d2 data
.org 0x1190d3
	.byte 0xd8	@ 001190d3 data
.org 0x1190d4
	.byte 0x30	@ 001190d4 data
.org 0x1190d5
	.byte 0x78	@ 001190d5 data
.org 0x1190d6
	.byte 0x01	@ 001190d6 data
.org 0x1190d7
	.byte 0x30	@ 001190d7 data
.org 0x1190d8
	.byte 0x30	@ 001190d8 data
.org 0x1190d9
	.byte 0x70	@ 001190d9 data
.org 0x1190da
	.byte 0x29	@ 001190da data
.org 0x1190db
	.byte 0xe0	@ 001190db data
.org 0x1190dc
	.byte 0xf7	@ 001190dc data
.org 0x1190dd
	.byte 0x0d	@ 001190dd data
.org 0x1190de
	.byte 0x00	@ 001190de data
.org 0x1190df
	.byte 0x00	@ 001190df data
.org 0x1190e0
	.byte 0x06	@ 001190e0 data
.org 0x1190e1
	.byte 0x48	@ 001190e1 data
.org 0x1190e2
	.byte 0x81	@ 001190e2 data
.org 0x1190e3
	.byte 0x88	@ 001190e3 data
.org 0x1190e4
	.byte 0x01	@ 001190e4 data
.org 0x1190e5
	.byte 0x24	@ 001190e5 data
.org 0x1190e6
	.byte 0x0c	@ 001190e6 data
.org 0x1190e7
	.byte 0x40	@ 001190e7 data
.org 0x1190e8
	.byte 0x00	@ 001190e8 data
.org 0x1190e9
	.byte 0x2c	@ 001190e9 data
.org 0x1190ea
	.byte 0x09	@ 001190ea data
.org 0x1190eb
	.byte 0xd0	@ 001190eb data
.org 0x1190ec
	.byte 0x00	@ 001190ec data
.org 0x1190ed
	.byte 0x21	@ 001190ed data
.org 0x1190ee
	.byte 0x02	@ 001190ee data
.org 0x1190ef
	.byte 0x20	@ 001190ef data
.org 0x1190f0
	.byte 0x50	@ 001190f0 data
.org 0x1190f1
	.byte 0x73	@ 001190f1 data
.org 0x1190f2
	.byte 0x3b	@ 001190f2 data
.org 0x1190f3
	.byte 0x1c	@ 001190f3 data
.org 0x1190f4
	.byte 0xfa	@ 001190f4 data
.org 0x1190f5
	.byte 0x33	@ 001190f5 data
.org 0x1190f6
	.byte 0x18	@ 001190f6 data
.org 0x1190f7
	.byte 0x70	@ 001190f7 data
.org 0x1190f8
	.byte 0xd1	@ 001190f8 data
.org 0x1190f9
	.byte 0x73	@ 001190f9 data
.org 0x1190fa
	.byte 0x89	@ 001190fa data
.org 0x1190fb
	.byte 0xe0	@ 001190fb data
.org 0x1190fc
	.byte 0x60	@ 001190fc data
.org 0x1190fd
	.byte 0x07	@ 001190fd data
.org 0x1190fe
	.byte 0x00	@ 001190fe data
.org 0x1190ff
	.byte 0x02	@ 001190ff data
.org 0x119100
	.byte 0x02	@ 00119100 data
.org 0x119101
	.byte 0x20	@ 00119101 data
.org 0x119102
	.byte 0x08	@ 00119102 data
.org 0x119103
	.byte 0x40	@ 00119103 data
.org 0x119104
	.byte 0x00	@ 00119104 data
.org 0x119105
	.byte 0x28	@ 00119105 data
.org 0x119106
	.byte 0x05	@ 00119106 data
.org 0x119107
	.byte 0xd0	@ 00119107 data
.org 0x119108
	.byte 0x03	@ 00119108 data
.org 0x119109
	.byte 0x20	@ 00119109 data
.org 0x11910a
	.byte 0xe9	@ 0011910a data
.org 0x11910b
	.byte 0xf6	@ 0011910b data
.org 0x11910c
	.byte 0x01	@ 0011910c data
.org 0x11910d
	.byte 0xfd	@ 0011910d data
.org 0x11910e
	.byte 0xec	@ 0011910e data
.org 0x11910f
	.byte 0x70	@ 0011910f data
.org 0x119110
	.byte 0x34	@ 00119110 data
.org 0x119111
	.byte 0x70	@ 00119111 data
.org 0x119112
	.byte 0x35	@ 00119112 data
.org 0x119113
	.byte 0xe1	@ 00119113 data
.org 0x119114
	.byte 0x04	@ 00119114 data
.org 0x119115
	.byte 0x48	@ 00119115 data
.org 0x119116
	.byte 0xd6	@ 00119116 data
.org 0x119117
	.byte 0x30	@ 00119117 data
.org 0x119118
	.byte 0x00	@ 00119118 data
.org 0x119119
	.byte 0x88	@ 00119119 data
.org 0x11911a
	.byte 0x04	@ 0011911a data
.org 0x11911b
	.byte 0x49	@ 0011911b data
.org 0x11911c
	.byte 0x40	@ 0011911c data
.org 0x11911d
	.byte 0x18	@ 0011911d data
.org 0x11911e
	.byte 0x01	@ 0011911e data
.org 0x11911f
	.byte 0x21	@ 0011911f data
.org 0x119120
	.byte 0x10	@ 00119120 data
.org 0x119121
	.byte 0x22	@ 00119121 data
.org 0x119122
	.byte 0xf4	@ 00119122 data
.org 0x119123
	.byte 0xf7	@ 00119123 data
.org 0x119124
	.byte 0x9b	@ 00119124 data
.org 0x119125
	.byte 0xfb	@ 00119125 data
