@ FUN_0811bf94  entry 0x0811bf94  size 392
.thumb
.org 0x11bf94
FUN_0811bf94:
	push {r4, r5, r6, r7, lr}	@ 0011bf94 f0b5
.org 0x11bf96
	adds r7, r0, #0	@ 0011bf96 071c
.org 0x11bf98
	ldr r1, [pc, #44]	@ 0011bf98 0b49
.org 0x11bf9a
	adds r0, r7, r1	@ 0011bf9a 7818
.org 0x11bf9c
	ldr r5, [r0, #0]	@ 0011bf9c 0568
.org 0x11bf9e
	adds r0, r7, #0	@ 0011bf9e 381c
.org 0x11bfa0
	bl 0x118248	@ 0011bfa0 fcf752f9
.org 0x11bfa4
	lsls r0, r0, #24	@ 0011bfa4 0006
.org 0x11bfa6
	cmp r0, #0	@ 0011bfa6 0028
.org 0x11bfa8
	beq.n 0x11bfac	@ 0011bfa8 00d0
.org 0x11bfaa
	b.n 0x11c13e	@ 0011bfaa c8e0
.org 0x11bfac
	adds r0, r5, #0	@ 0011bfac 281c
.org 0x11bfae
	adds r0, #240	@ 0011bfae f030
.org 0x11bfb0
	ldrb r3, [r0, #0]	@ 0011bfb0 0378
.org 0x11bfb2
	ldr r0, [pc, #24]	@ 0011bfb2 0648
.org 0x11bfb4
	ldrh r2, [r0, #6]	@ 0011bfb4 c288
.org 0x11bfb6
	movs r0, #64	@ 0011bfb6 4020
.org 0x11bfb8
	ands r0, r2	@ 0011bfb8 1040
.org 0x11bfba
	cmp r0, #0	@ 0011bfba 0028
.org 0x11bfbc
	beq.n 0x11bfd4	@ 0011bfbc 0ad0
.org 0x11bfbe
	ldr r0, [pc, #16]	@ 0011bfbe 0448
.org 0x11bfc0
	adds r4, r7, r0	@ 0011bfc0 3c18
.org 0x11bfc2
	ldrb r0, [r4, #0]	@ 0011bfc2 2078
.org 0x11bfc4
	adds r0, #2	@ 0011bfc4 0230
.org 0x11bfc6
	b.n 0x11bfe4	@ 0011bfc6 0de0
.org 0x11bfc8
	.byte 0xa8,0x63,0x00,0x00	@ 0011bfc8 data
.org 0x11bfcc
	.byte 0x60,0x07,0x00,0x02	@ 0011bfcc data
.org 0x11bfd0
	.byte 0xe4,0x0d,0x00,0x00	@ 0011bfd0 data
.org 0x11bfd4
	movs r0, #128	@ 0011bfd4 8020
.org 0x11bfd6
	ands r0, r2	@ 0011bfd6 1040
.org 0x11bfd8
	cmp r0, #0	@ 0011bfd8 0028
.org 0x11bfda
	beq.n 0x11bffc	@ 0011bfda 0fd0
.org 0x11bfdc
	ldr r1, [pc, #24]	@ 0011bfdc 0649
.org 0x11bfde
	adds r4, r7, r1	@ 0011bfde 7c18
.org 0x11bfe0
	ldrb r0, [r4, #0]	@ 0011bfe0 2078
.org 0x11bfe2
	adds r0, #1	@ 0011bfe2 0130
.org 0x11bfe4
	movs r1, #3	@ 0011bfe4 0321
.org 0x11bfe6
	bl 0x129050	@ 0011bfe6 0df033f8
.org 0x11bfea
	strb r0, [r4, #0]	@ 0011bfea 2070
.org 0x11bfec
	movs r0, #1	@ 0011bfec 0120
.org 0x11bfee
	bl 0x2b10	@ 0011bfee e6f68ffd
.org 0x11bff2
	adds r6, r5, #0	@ 0011bff2 2e1c
.org 0x11bff4
	adds r6, #245	@ 0011bff4 f536
.org 0x11bff6
	b.n 0x11c09a	@ 0011bff6 50e0
.org 0x11bff8
	.byte 0xe4,0x0d,0x00,0x00	@ 0011bff8 data
.org 0x11bffc
	adds r1, r5, #0	@ 0011bffc 291c
.org 0x11bffe
	adds r1, #245	@ 0011bffe f531
.org 0x11c000
	ldrb r0, [r1, #0]	@ 0011c000 0878
.org 0x11c002
	adds r6, r1, #0	@ 0011c002 0e1c
.org 0x11c004
	cmp r0, #255	@ 0011c004 ff28
.org 0x11c006
	bne.n 0x11c00a	@ 0011c006 00d1
.org 0x11c008
	b.n 0x11c110	@ 0011c008 82e0
.org 0x11c00a
	movs r0, #32	@ 0011c00a 2020
.org 0x11c00c
	ands r0, r2	@ 0011c00c 1040
.org 0x11c00e
	cmp r0, #0	@ 0011c00e 0028
.org 0x11c010
	beq.n 0x11c050	@ 0011c010 1ed0
.org 0x11c012
	ldr r1, [pc, #24]	@ 0011c012 0649
.org 0x11c014
	adds r0, r7, r1	@ 0011c014 7818
.org 0x11c016
	ldrb r0, [r0, #0]	@ 0011c016 0078
.org 0x11c018
	cmp r0, #0	@ 0011c018 0028
.org 0x11c01a
	bne.n 0x11c030	@ 0011c01a 09d1
.org 0x11c01c
	adds r1, r5, #0	@ 0011c01c 291c
.org 0x11c01e
	adds r1, #241	@ 0011c01e f131
.org 0x11c020
	ldrb r0, [r1, #0]	@ 0011c020 0878
.org 0x11c022
	cmp r0, #0	@ 0011c022 0028
.org 0x11c024
	beq.n 0x11c09a	@ 0011c024 39d0
.org 0x11c026
	subs r0, #1	@ 0011c026 0138
.org 0x11c028
	b.n 0x11c07c	@ 0011c028 28e0
.org 0x11c02a
	.byte 0x00	@ 0011c02a data
.org 0x11c02b
	.byte 0x00	@ 0011c02b data
.org 0x11c02c
	.byte 0xe4,0x0d,0x00,0x00	@ 0011c02c data
.org 0x11c030
	cmp r0, #1	@ 0011c030 0128
.org 0x11c032
	bne.n 0x11c042	@ 0011c032 06d1
.org 0x11c034
	adds r1, r5, #0	@ 0011c034 291c
.org 0x11c036
	adds r1, #242	@ 0011c036 f231
.org 0x11c038
	ldrb r0, [r1, #0]	@ 0011c038 0878
.org 0x11c03a
	cmp r0, #0	@ 0011c03a 0028
.org 0x11c03c
	beq.n 0x11c09a	@ 0011c03c 2dd0
.org 0x11c03e
	subs r0, #1	@ 0011c03e 0138
.org 0x11c040
	b.n 0x11c07c	@ 0011c040 1ce0
.org 0x11c042
	adds r1, r5, #0	@ 0011c042 291c
.org 0x11c044
	adds r1, #243	@ 0011c044 f331
.org 0x11c046
	ldrb r0, [r1, #0]	@ 0011c046 0878
.org 0x11c048
	cmp r0, #0	@ 0011c048 0028
.org 0x11c04a
	beq.n 0x11c09a	@ 0011c04a 26d0
.org 0x11c04c
	subs r0, #1	@ 0011c04c 0138
.org 0x11c04e
	b.n 0x11c07c	@ 0011c04e 15e0
.org 0x11c050
	movs r0, #16	@ 0011c050 1020
.org 0x11c052
	ands r0, r2	@ 0011c052 1040
.org 0x11c054
	cmp r0, #0	@ 0011c054 0028
.org 0x11c056
	beq.n 0x11c09a	@ 0011c056 20d0
.org 0x11c058
	ldr r1, [pc, #12]	@ 0011c058 0349
.org 0x11c05a
	adds r0, r7, r1	@ 0011c05a 7818
.org 0x11c05c
	ldrb r0, [r0, #0]	@ 0011c05c 0078
.org 0x11c05e
	cmp r0, #0	@ 0011c05e 0028
.org 0x11c060
	bne.n 0x11c06c	@ 0011c060 04d1
.org 0x11c062
	adds r1, r5, #0	@ 0011c062 291c
.org 0x11c064
	adds r1, #241	@ 0011c064 f131
.org 0x11c066
	b.n 0x11c074	@ 0011c066 05e0
.org 0x11c068
	.byte 0xe4,0x0d,0x00,0x00	@ 0011c068 data
.org 0x11c06c
	cmp r0, #1	@ 0011c06c 0128
.org 0x11c06e
	bne.n 0x11c086	@ 0011c06e 0ad1
.org 0x11c070
	adds r1, r5, #0	@ 0011c070 291c
.org 0x11c072
	adds r1, #242	@ 0011c072 f231
.org 0x11c074
	ldrb r0, [r1, #0]	@ 0011c074 0878
.org 0x11c076
	cmp r0, r3	@ 0011c076 9842
.org 0x11c078
	bcs.n 0x11c09a	@ 0011c078 0fd2
.org 0x11c07a
	adds r0, #1	@ 0011c07a 0130
.org 0x11c07c
	strb r0, [r1, #0]	@ 0011c07c 0870
.org 0x11c07e
	movs r0, #1	@ 0011c07e 0120
.org 0x11c080
	bl 0x2b10	@ 0011c080 e6f646fd
.org 0x11c084
	b.n 0x11c09a	@ 0011c084 09e0
.org 0x11c086
	adds r1, r5, #0	@ 0011c086 291c
.org 0x11c088
	adds r1, #243	@ 0011c088 f331
.org 0x11c08a
	ldrb r0, [r1, #0]	@ 0011c08a 0878
.org 0x11c08c
	cmp r0, r3	@ 0011c08c 9842
.org 0x11c08e
	bcs.n 0x11c09a	@ 0011c08e 04d2
.org 0x11c090
	adds r0, #1	@ 0011c090 0130
.org 0x11c092
	strb r0, [r1, #0]	@ 0011c092 0870
.org 0x11c094
	movs r0, #1	@ 0011c094 0120
.org 0x11c096
	bl 0x2b10	@ 0011c096 e6f63bfd
.org 0x11c09a
	ldrb r0, [r6, #0]	@ 0011c09a 3078
.org 0x11c09c
	cmp r0, #255	@ 0011c09c ff28
.org 0x11c09e
	beq.n 0x11c110	@ 0011c09e 37d0
.org 0x11c0a0
	ldr r4, [pc, #56]	@ 0011c0a0 0e4c
.org 0x11c0a2
	adds r0, #90	@ 0011c0a2 5a30
.org 0x11c0a4
	lsls r0, r0, #1	@ 0011c0a4 4000
.org 0x11c0a6
	adds r0, r0, r4	@ 0011c0a6 0019
.org 0x11c0a8
	ldrh r0, [r0, #0]	@ 0011c0a8 0088
.org 0x11c0aa
	ldr r6, [pc, #52]	@ 0011c0aa 0d4e
.org 0x11c0ac
	adds r0, r0, r6	@ 0011c0ac 8019
.org 0x11c0ae
	movs r1, #21	@ 0011c0ae 1521
.org 0x11c0b0
	movs r2, #1	@ 0011c0b0 0122
.org 0x11c0b2
	bl 0x10d85c	@ 0011c0b2 f1f7d3fb
.org 0x11c0b6
	adds r0, r4, #0	@ 0011c0b6 201c
.org 0x11c0b8
	adds r0, #250	@ 0011c0b8 fa30
.org 0x11c0ba
	ldrh r0, [r0, #0]	@ 0011c0ba 0088
.org 0x11c0bc
	adds r0, r0, r6	@ 0011c0bc 8019
.org 0x11c0be
	movs r1, #1	@ 0011c0be 0121
.org 0x11c0c0
	movs r2, #18	@ 0011c0c0 1222
.org 0x11c0c2
	bl 0x10d85c	@ 0011c0c2 f1f7cbfb
.org 0x11c0c6
	ldr r1, [pc, #28]	@ 0011c0c6 0749
.org 0x11c0c8
	adds r0, r7, r1	@ 0011c0c8 7818
.org 0x11c0ca
	ldrb r0, [r0, #0]	@ 0011c0ca 0078
.org 0x11c0cc
	cmp r0, #0	@ 0011c0cc 0028
.org 0x11c0ce
	bne.n 0x11c0e8	@ 0011c0ce 0bd1
.org 0x11c0d0
	adds r0, r5, #0	@ 0011c0d0 281c
.org 0x11c0d2
	adds r0, #241	@ 0011c0d2 f130
.org 0x11c0d4
	ldrb r0, [r0, #0]	@ 0011c0d4 0078
.org 0x11c0d6
	adds r0, #140	@ 0011c0d6 8c30
.org 0x11c0d8
	b.n 0x11c0fe	@ 0011c0d8 11e0
.org 0x11c0da
	.byte 0x00	@ 0011c0da data
.org 0x11c0db
	.byte 0x00	@ 0011c0db data
.org 0x11c0dc
	.byte 0xf8,0xcf,0x86,0x08	@ 0011c0dc data
.org 0x11c0e0
	.byte 0x5f,0x0e,0x01,0x09	@ 0011c0e0 data
.org 0x11c0e4
	.byte 0xe4,0x0d,0x00,0x00	@ 0011c0e4 data
.org 0x11c0e8
	cmp r0, #1	@ 0011c0e8 0128
.org 0x11c0ea
	bne.n 0x11c0f6	@ 0011c0ea 04d1
.org 0x11c0ec
	adds r0, r5, #0	@ 0011c0ec 281c
.org 0x11c0ee
	adds r0, #242	@ 0011c0ee f230
.org 0x11c0f0
	ldrb r0, [r0, #0]	@ 0011c0f0 0078
.org 0x11c0f2
	adds r0, #150	@ 0011c0f2 9630
.org 0x11c0f4
	b.n 0x11c0fe	@ 0011c0f4 03e0
.org 0x11c0f6
	adds r0, r5, #0	@ 0011c0f6 281c
.org 0x11c0f8
	adds r0, #243	@ 0011c0f8 f330
.org 0x11c0fa
	ldrb r0, [r0, #0]	@ 0011c0fa 0078
.org 0x11c0fc
	adds r0, #160	@ 0011c0fc a030
.org 0x11c0fe
	lsls r0, r0, #1	@ 0011c0fe 4000
.org 0x11c100
	adds r0, r0, r4	@ 0011c100 0019
.org 0x11c102
	ldrh r0, [r0, #0]	@ 0011c102 0088
.org 0x11c104
	adds r0, r0, r6	@ 0011c104 8019
.org 0x11c106
	movs r1, #17	@ 0011c106 1121
.org 0x11c108
	movs r2, #8	@ 0011c108 0822
.org 0x11c10a
	bl 0x10d85c	@ 0011c10a f1f7a7fb
.org 0x11c10e
	b.n 0x11c132	@ 0011c10e 10e0
.org 0x11c110
	ldr r4, [pc, #48]	@ 0011c110 0c4c
.org 0x11c112
	adds r0, r4, #0	@ 0011c112 201c
.org 0x11c114
	adds r0, #252	@ 0011c114 fc30
.org 0x11c116
	ldrh r0, [r0, #0]	@ 0011c116 0088
.org 0x11c118
	ldr r5, [pc, #44]	@ 0011c118 0b4d
.org 0x11c11a
	adds r0, r0, r5	@ 0011c11a 4019
