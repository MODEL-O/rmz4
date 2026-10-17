@ FUN_08126050  entry 0x08126050  size 46
.thumb
.org 0x126050
FUN_08126050:
	push {r4, r5, lr}	@ 00126050 30b5
.org 0x126052
	adds r5, r0, #0	@ 00126052 051c
.org 0x126054
	ldr r1, [pc, #32]	@ 00126054 0849
.org 0x126056
	adds r0, r5, r1	@ 00126056 6818
.org 0x126058
	ldr r1, [r0, #0]	@ 00126058 0168
.org 0x12605a
	movs r2, #149	@ 0012605a 9522
.org 0x12605c
	lsls r2, r2, #2	@ 0012605c 9200
.org 0x12605e
	adds r1, r1, r2	@ 0012605e 8918
.org 0x126060
	movs r2, #2	@ 00126060 0222
.org 0x126062
	strb r2, [r1, #0]	@ 00126062 0a70
.org 0x126064
	ldrb r0, [r0, #25]	@ 00126064 407e
.org 0x126066
	cmp r0, #5	@ 00126066 0528
.org 0x126068
	bls.n 0x12606c	@ 00126068 00d9
.org 0x12606a
	b.n 0x12615c	@ 0012606a 77e0
.org 0x12606c
	lsls r0, r0, #2	@ 0012606c 8000
.org 0x12606e
	ldr r1, [pc, #12]	@ 0012606e 0349
.org 0x126070
	adds r0, r0, r1	@ 00126070 4018
.org 0x126072
	ldr r0, [r0, #0]	@ 00126072 0068
.org 0x126074
	mov pc, r0	@ 00126074 8746
.org 0x126076
	.byte 0x00	@ 00126076 data
.org 0x126077
	.byte 0x00	@ 00126077 data
.org 0x126078
	.byte 0xcc,0x0d,0x00,0x00	@ 00126078 data
.org 0x12607c
	.byte 0x80,0x60,0x12,0x08	@ 0012607c data
