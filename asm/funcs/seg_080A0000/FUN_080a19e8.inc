@ FUN_080a19e8  entry 0x080a19e8  size 124
.thumb
.org 0xa19e8
FUN_080a19e8:
	push {r4, r5, lr}	@ 000a19e8 30b5
.org 0xa19ea
	adds r3, r0, #0	@ 000a19ea 031c
.org 0xa19ec
	ldr r4, [r3, #44]	@ 000a19ec dc6a
.org 0xa19ee
	ldr r0, [r3, #12]	@ 000a19ee d868
.org 0xa19f0
	ldr r1, [r0, #44]	@ 000a19f0 c16a
.org 0xa19f2
	ldr r0, [r3, #20]	@ 000a19f2 5869
.org 0xa19f4
	movs r5, #1	@ 000a19f4 0125
.org 0xa19f6
	ands r0, r5	@ 000a19f6 2840
.org 0xa19f8
	cmp r0, #0	@ 000a19f8 0028
.org 0xa19fa
	beq.n 0xa1a68	@ 000a19fa 35d0
.org 0xa19fc
	ldr r0, [r1, #84]	@ 000a19fc 486d
.org 0xa19fe
	ldr r2, [r4, #84]	@ 000a19fe 626d
.org 0xa1a00
	cmp r0, r2	@ 000a1a00 9042
.org 0xa1a02
	bge.n 0xa1a14	@ 000a1a02 07da
.org 0xa1a04
	adds r1, r4, #0	@ 000a1a04 211c
.org 0xa1a06
	adds r1, #187	@ 000a1a06 bb31
.org 0xa1a08
	movs r0, #0	@ 000a1a08 0020
.org 0xa1a0a
	strb r0, [r1, #0]	@ 000a1a0a 0870
.org 0xa1a0c
	ldr r0, [pc, #0]	@ 000a1a0c 0048
.org 0xa1a0e
	b.n 0xa1a3c	@ 000a1a0e 15e0
.org 0xa1a10
	.byte 0xf0,0xdb,0x02,0x02	@ 000a1a10 data
.org 0xa1a14
	cmp r2, r0	@ 000a1a14 8242
.org 0xa1a16
	bge.n 0xa1a28	@ 000a1a16 07da
.org 0xa1a18
	adds r0, r4, #0	@ 000a1a18 201c
.org 0xa1a1a
	adds r0, #187	@ 000a1a1a bb30
.org 0xa1a1c
	strb r5, [r0, #0]	@ 000a1a1c 0570
.org 0xa1a1e
	ldr r0, [pc, #4]	@ 000a1a1e 0148
.org 0xa1a20
	b.n 0xa1a3c	@ 000a1a20 0ce0
.org 0xa1a22
	.byte 0x00	@ 000a1a22 data
.org 0xa1a23
	.byte 0x00	@ 000a1a23 data
.org 0xa1a24
	.byte 0xf0,0xdb,0x02,0x02	@ 000a1a24 data
.org 0xa1a28
	movs r5, #0	@ 000a1a28 0025
.org 0xa1a2a
	ldr r0, [pc, #68]	@ 000a1a2a 1148
.org 0xa1a2c
	ldr r1, [r0, #0]	@ 000a1a2c 0168
.org 0xa1a2e
	ldr r1, [r1, #84]	@ 000a1a2e 496d
.org 0xa1a30
	cmp r2, r1	@ 000a1a30 8a42
.org 0xa1a32
	bge.n 0xa1a36	@ 000a1a32 00da
.org 0xa1a34
	movs r5, #1	@ 000a1a34 0125
.org 0xa1a36
	adds r1, r4, #0	@ 000a1a36 211c
.org 0xa1a38
	adds r1, #187	@ 000a1a38 bb31
.org 0xa1a3a
	strb r5, [r1, #0]	@ 000a1a3a 0d70
.org 0xa1a3c
	ldr r2, [r0, #0]	@ 000a1a3c 0268
.org 0xa1a3e
	ldr r1, [r3, #20]	@ 000a1a3e 5969
.org 0xa1a40
	movs r0, #128	@ 000a1a40 8020
.org 0xa1a42
	lsls r0, r0, #2	@ 000a1a42 8000
.org 0xa1a44
	ands r0, r1	@ 000a1a44 0840
.org 0xa1a46
	cmp r0, #0	@ 000a1a46 0028
.org 0xa1a48
	beq.n 0xa1a68	@ 000a1a48 0ed0
.org 0xa1a4a
	movs r0, #128	@ 000a1a4a 8020
.org 0xa1a4c
	lsls r0, r0, #10	@ 000a1a4c 8002
.org 0xa1a4e
	ands r1, r0	@ 000a1a4e 0140
.org 0xa1a50
	cmp r1, #0	@ 000a1a50 0029
.org 0xa1a52
	beq.n 0xa1a68	@ 000a1a52 09d0
.org 0xa1a54
	cmp r2, #0	@ 000a1a54 002a
.org 0xa1a56
	beq.n 0xa1a68	@ 000a1a56 07d0
.org 0xa1a58
	adds r0, r2, #0	@ 000a1a58 101c
.org 0xa1a5a
	movs r1, #6	@ 000a1a5a 0621
.org 0xa1a5c
	movs r2, #4	@ 000a1a5c 0422
.org 0xa1a5e
	bl 0x3a578	@ 000a1a5e 98f78bfd
.org 0xa1a62
	adds r1, r4, #0	@ 000a1a62 211c
