@ FUN_0801e878  entry 0x0801e878  size 88
.thumb
.org 0x1e878
FUN_0801e878:
	push {r4, r5, r6, lr}	@ 0001e878 70b5
.org 0x1e87a
	adds r5, r1, #0	@ 0001e87a 0d1c
.org 0x1e87c
	lsls r0, r0, #24	@ 0001e87c 0006
.org 0x1e87e
	lsrs r0, r0, #24	@ 0001e87e 000e
.org 0x1e880
	ldr r4, [pc, #76]	@ 0001e880 134c
.org 0x1e882
	movs r6, #0	@ 0001e882 0026
.org 0x1e884
	strh r0, [r4, #0]	@ 0001e884 2080
.org 0x1e886
	adds r1, r4, #4	@ 0001e886 211d
.org 0x1e888
	adds r0, r5, #0	@ 0001e888 281c
.org 0x1e88a
	movs r2, #8	@ 0001e88a 0822
.org 0x1e88c
	bl 0x128be0	@ 0001e88c 0af1a8f9
.org 0x1e890
	adds r5, #32	@ 0001e890 2035
.org 0x1e892
	adds r1, r4, #0	@ 0001e892 211c
.org 0x1e894
	adds r1, #36	@ 0001e894 2431
.org 0x1e896
	ldr r2, [pc, #60]	@ 0001e896 0f4a
.org 0x1e898
	adds r0, r5, #0	@ 0001e898 281c
.org 0x1e89a
	bl 0x128be4	@ 0001e89a 0af1a3f9
.org 0x1e89e
	ldrb r1, [r4, #21]	@ 0001e89e 617d
.org 0x1e8a0
	movs r2, #254	@ 0001e8a0 fe22
.org 0x1e8a2
	adds r0, r2, #0	@ 0001e8a2 101c
.org 0x1e8a4
	ands r0, r1	@ 0001e8a4 0840
.org 0x1e8a6
	strb r0, [r4, #21]	@ 0001e8a6 6075
.org 0x1e8a8
	ldrb r1, [r4, #8]	@ 0001e8a8 217a
.org 0x1e8aa
	movs r0, #223	@ 0001e8aa df20
.org 0x1e8ac
	ands r0, r1	@ 0001e8ac 0840
.org 0x1e8ae
	movs r1, #191	@ 0001e8ae bf21
.org 0x1e8b0
	ands r0, r1	@ 0001e8b0 0840
.org 0x1e8b2
	movs r1, #127	@ 0001e8b2 7f21
.org 0x1e8b4
	ands r0, r1	@ 0001e8b4 0840
.org 0x1e8b6
	strb r0, [r4, #8]	@ 0001e8b6 2072
.org 0x1e8b8
	ldrb r0, [r4, #9]	@ 0001e8b8 607a
.org 0x1e8ba
	ands r2, r0	@ 0001e8ba 0240
.org 0x1e8bc
	movs r0, #253	@ 0001e8bc fd20
.org 0x1e8be
	ands r2, r0	@ 0001e8be 0240
.org 0x1e8c0
	movs r0, #251	@ 0001e8c0 fb20
.org 0x1e8c2
	ands r2, r0	@ 0001e8c2 0240
.org 0x1e8c4
	strb r2, [r4, #9]	@ 0001e8c4 6272
.org 0x1e8c6
	adds r4, #37	@ 0001e8c6 2534
.org 0x1e8c8
	strb r6, [r4, #0]	@ 0001e8c8 2670
.org 0x1e8ca
	pop {r4, r5, r6}	@ 0001e8ca 70bc
.org 0x1e8cc
	pop {r0}	@ 0001e8cc 01bc
.org 0x1e8ce
	bx r0	@ 0001e8ce 0047
