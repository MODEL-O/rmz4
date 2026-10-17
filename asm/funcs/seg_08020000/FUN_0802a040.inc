@ FUN_0802a040  entry 0x0802a040  size 54
.thumb
.org 0x2a040
FUN_0802a040:
	push {r4, r5, r6, lr}	@ 0002a040 70b5
.org 0x2a042
	sub sp, #4	@ 0002a042 81b0
.org 0x2a044
	adds r5, r0, #0	@ 0002a044 051c
.org 0x2a046
	movs r6, #0	@ 0002a046 0026
.org 0x2a048
	ldr r0, [pc, #32]	@ 0002a048 0848
.org 0x2a04a
	ldrh r1, [r0, #0]	@ 0002a04a 0188
.org 0x2a04c
	movs r0, #11	@ 0002a04c 0b20
.org 0x2a04e
	ands r0, r1	@ 0002a04e 0840
.org 0x2a050
	cmp r0, #0	@ 0002a050 0028
.org 0x2a052
	beq.n 0x2a05a	@ 0002a052 02d0
.org 0x2a054
	movs r6, #1	@ 0002a054 0126
.org 0x2a056
	ldr r0, [pc, #24]	@ 0002a056 0648
.org 0x2a058
	strh r0, [r5, #4]	@ 0002a058 a880
.org 0x2a05a
	ldrb r0, [r5, #1]	@ 0002a05a 6878
.org 0x2a05c
	cmp r0, #27	@ 0002a05c 1b28
.org 0x2a05e
	bls.n 0x2a062	@ 0002a05e 00d9
.org 0x2a060
	b.n 0x2a564	@ 0002a060 80e2
.org 0x2a062
	lsls r0, r0, #2	@ 0002a062 8000
.org 0x2a064
	ldr r1, [pc, #12]	@ 0002a064 0349
.org 0x2a066
	adds r0, r0, r1	@ 0002a066 4018
.org 0x2a068
	ldr r0, [r0, #0]	@ 0002a068 0068
.org 0x2a06a
	mov pc, r0	@ 0002a06a 8746
.org 0x2a06c
	.byte 0x60,0x07,0x00,0x02	@ 0002a06c data
.org 0x2a070
	.byte 0x21,0x4e,0x00,0x00	@ 0002a070 data
.org 0x2a074
	.byte 0x78,0xa0,0x02,0x08	@ 0002a074 data
