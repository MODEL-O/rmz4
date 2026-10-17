@ FUN_0808bb34  entry 0x0808bb34  size 124
.thumb
.org 0x8bb34
FUN_0808bb34:
	push {r4, r5, lr}	@ 0008bb34 30b5
.org 0x8bb36
	adds r3, r0, #0	@ 0008bb36 031c
.org 0x8bb38
	ldr r0, [r3, #20]	@ 0008bb38 5869
.org 0x8bb3a
	movs r1, #1	@ 0008bb3a 0121
.org 0x8bb3c
	ands r0, r1	@ 0008bb3c 0840
.org 0x8bb3e
	cmp r0, #0	@ 0008bb3e 0028
.org 0x8bb40
	beq.n 0x8bbb4	@ 0008bb40 38d0
.org 0x8bb42
	ldr r4, [r3, #44]	@ 0008bb42 dc6a
.org 0x8bb44
	ldr r0, [r3, #12]	@ 0008bb44 d868
.org 0x8bb46
	ldr r0, [r0, #44]	@ 0008bb46 c06a
.org 0x8bb48
	ldr r0, [r0, #84]	@ 0008bb48 406d
.org 0x8bb4a
	ldr r2, [r4, #84]	@ 0008bb4a 626d
.org 0x8bb4c
	cmp r0, r2	@ 0008bb4c 9042
.org 0x8bb4e
	bge.n 0x8bb60	@ 0008bb4e 07da
.org 0x8bb50
	adds r1, r4, #0	@ 0008bb50 211c
.org 0x8bb52
	adds r1, #189	@ 0008bb52 bd31
.org 0x8bb54
	movs r0, #0	@ 0008bb54 0020
.org 0x8bb56
	strb r0, [r1, #0]	@ 0008bb56 0870
.org 0x8bb58
	ldr r0, [pc, #0]	@ 0008bb58 0048
.org 0x8bb5a
	b.n 0x8bb88	@ 0008bb5a 15e0
.org 0x8bb5c
	.byte 0xf0,0xdb,0x02,0x02	@ 0008bb5c data
.org 0x8bb60
	cmp r2, r0	@ 0008bb60 8242
.org 0x8bb62
	bge.n 0x8bb74	@ 0008bb62 07da
.org 0x8bb64
	adds r0, r4, #0	@ 0008bb64 201c
.org 0x8bb66
	adds r0, #189	@ 0008bb66 bd30
.org 0x8bb68
	strb r1, [r0, #0]	@ 0008bb68 0170
.org 0x8bb6a
	ldr r0, [pc, #4]	@ 0008bb6a 0148
.org 0x8bb6c
	b.n 0x8bb88	@ 0008bb6c 0ce0
.org 0x8bb6e
	.byte 0x00	@ 0008bb6e data
.org 0x8bb6f
	.byte 0x00	@ 0008bb6f data
.org 0x8bb70
	.byte 0xf0,0xdb,0x02,0x02	@ 0008bb70 data
.org 0x8bb74
	movs r5, #0	@ 0008bb74 0025
.org 0x8bb76
	ldr r0, [pc, #68]	@ 0008bb76 1148
.org 0x8bb78
	ldr r1, [r0, #0]	@ 0008bb78 0168
.org 0x8bb7a
	ldr r1, [r1, #84]	@ 0008bb7a 496d
.org 0x8bb7c
	cmp r2, r1	@ 0008bb7c 8a42
.org 0x8bb7e
	bge.n 0x8bb82	@ 0008bb7e 00da
.org 0x8bb80
	movs r5, #1	@ 0008bb80 0125
.org 0x8bb82
	adds r1, r4, #0	@ 0008bb82 211c
.org 0x8bb84
	adds r1, #189	@ 0008bb84 bd31
.org 0x8bb86
	strb r5, [r1, #0]	@ 0008bb86 0d70
.org 0x8bb88
	ldr r2, [r0, #0]	@ 0008bb88 0268
.org 0x8bb8a
	ldr r1, [r3, #20]	@ 0008bb8a 5969
.org 0x8bb8c
	movs r0, #128	@ 0008bb8c 8020
.org 0x8bb8e
	lsls r0, r0, #2	@ 0008bb8e 8000
.org 0x8bb90
	ands r0, r1	@ 0008bb90 0840
.org 0x8bb92
	cmp r0, #0	@ 0008bb92 0028
.org 0x8bb94
	beq.n 0x8bbb4	@ 0008bb94 0ed0
.org 0x8bb96
	movs r0, #128	@ 0008bb96 8020
.org 0x8bb98
	lsls r0, r0, #10	@ 0008bb98 8002
.org 0x8bb9a
	ands r1, r0	@ 0008bb9a 0140
.org 0x8bb9c
	cmp r1, #0	@ 0008bb9c 0029
.org 0x8bb9e
	beq.n 0x8bbb4	@ 0008bb9e 09d0
.org 0x8bba0
	cmp r2, #0	@ 0008bba0 002a
.org 0x8bba2
	beq.n 0x8bbb4	@ 0008bba2 07d0
.org 0x8bba4
	adds r0, r2, #0	@ 0008bba4 101c
.org 0x8bba6
	movs r1, #3	@ 0008bba6 0321
.org 0x8bba8
	movs r2, #7	@ 0008bba8 0722
.org 0x8bbaa
	bl 0x3a578	@ 0008bbaa aef7e5fc
.org 0x8bbae
	adds r1, r4, #0	@ 0008bbae 211c
