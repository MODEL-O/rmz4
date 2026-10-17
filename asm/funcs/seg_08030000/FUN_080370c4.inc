@ FUN_080370c4  entry 0x080370c4  size 80
.thumb
.org 0x370c4
FUN_080370c4:
	push {r4, lr}	@ 000370c4 10b5
.org 0x370c6
	adds r3, r0, #0	@ 000370c6 031c
.org 0x370c8
	adds r4, r3, #0	@ 000370c8 1c1c
.org 0x370ca
	adds r4, #180	@ 000370ca b434
.org 0x370cc
	ldr r0, [pc, #36]	@ 000370cc 0948
.org 0x370ce
	adds r2, r3, r0	@ 000370ce 1a18
.org 0x370d0
	ldrb r1, [r2, #0]	@ 000370d0 1178
.org 0x370d2
	movs r0, #1	@ 000370d2 0120
.org 0x370d4
	ands r0, r1	@ 000370d4 0840
.org 0x370d6
	cmp r0, #0	@ 000370d6 0028
.org 0x370d8
	beq.n 0x370e2	@ 000370d8 03d0
.org 0x370da
	ldr r0, [pc, #28]	@ 000370da 0748
.org 0x370dc
	adds r1, r3, r0	@ 000370dc 1918
.org 0x370de
	movs r0, #2	@ 000370de 0220
.org 0x370e0
	strb r0, [r1, #0]	@ 000370e0 0870
.org 0x370e2
	ldrb r0, [r2, #0]	@ 000370e2 1078
.org 0x370e4
	movs r1, #8	@ 000370e4 0821
.org 0x370e6
	orrs r1, r0	@ 000370e6 0143
.org 0x370e8
	strb r1, [r2, #0]	@ 000370e8 1170
.org 0x370ea
	ldrb r0, [r4, #12]	@ 000370ea 207b
.org 0x370ec
	cmp r0, #1	@ 000370ec 0128
.org 0x370ee
	bne.n 0x370fc	@ 000370ee 05d1
.org 0x370f0
	movs r0, #16	@ 000370f0 1020
.org 0x370f2
	b.n 0x370fe	@ 000370f2 04e0
.org 0x370f4
	.byte 0x53,0x01,0x00,0x00	@ 000370f4 data
.org 0x370f8
	.byte 0x01,0x01,0x00,0x00	@ 000370f8 data
.org 0x370fc
	movs r0, #32	@ 000370fc 2020
.org 0x370fe
	orrs r1, r0	@ 000370fe 0143
.org 0x37100
	strb r1, [r2, #0]	@ 00037100 1170
.org 0x37102
	ldr r0, [pc, #24]	@ 00037102 0648
.org 0x37104
	ldr r2, [pc, #24]	@ 00037104 064a
.org 0x37106
	adds r1, r3, r2	@ 00037106 9918
.org 0x37108
	ldrb r1, [r1, #0]	@ 00037108 0978
.org 0x3710a
	lsls r1, r1, #2	@ 0003710a 8900
.org 0x3710c
	adds r1, r1, r0	@ 0003710c 0918
.org 0x3710e
	ldr r1, [r1, #0]	@ 0003710e 0968
.org 0x37110
	adds r0, r3, #0	@ 00037110 181c
.org 0x37112
	bl 0x128f80	@ 00037112 f1f035ff
