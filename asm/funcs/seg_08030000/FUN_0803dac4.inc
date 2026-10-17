@ FUN_0803dac4  entry 0x0803dac4  size 148
.thumb
.org 0x3dac4
FUN_0803dac4:
	push {r4, r5, lr}	@ 0003dac4 30b5
.org 0x3dac6
	adds r4, r0, #0	@ 0003dac6 041c
.org 0x3dac8
	ldr r1, [pc, #140]	@ 0003dac8 2349
.org 0x3daca
	ldrb r0, [r4, #9]	@ 0003daca 607a
.org 0x3dacc
	lsls r0, r0, #2	@ 0003dacc 8000
.org 0x3dace
	adds r0, r0, r1	@ 0003dace 4018
.org 0x3dad0
	movs r1, #1	@ 0003dad0 0121
.org 0x3dad2
	str r1, [r4, #12]	@ 0003dad2 e160
.org 0x3dad4
	ldr r0, [r0, #0]	@ 0003dad4 0068
.org 0x3dad6
	ldr r0, [r0, #4]	@ 0003dad6 4068
.org 0x3dad8
	str r0, [r4, #20]	@ 0003dad8 6061
.org 0x3dada
	adds r0, r4, #0	@ 0003dada 201c
.org 0x3dadc
	bl 0x1cc9c	@ 0003dadc dff7def8
.org 0x3dae0
	adds r0, r4, #0	@ 0003dae0 201c
.org 0x3dae2
	bl 0x1ceec	@ 0003dae2 dff703fa
.org 0x3dae6
	ldrb r1, [r4, #10]	@ 0003dae6 a17a
.org 0x3dae8
	movs r0, #1	@ 0003dae8 0120
.org 0x3daea
	movs r5, #0	@ 0003daea 0025
.org 0x3daec
	orrs r0, r1	@ 0003daec 0843
.org 0x3daee
	movs r1, #2	@ 0003daee 0221
.org 0x3daf0
	orrs r0, r1	@ 0003daf0 0843
.org 0x3daf2
	strb r0, [r4, #10]	@ 0003daf2 a072
.org 0x3daf4
	ldrb r0, [r4, #16]	@ 0003daf4 207c
.org 0x3daf6
	cmp r0, #0	@ 0003daf6 0028
.org 0x3daf8
	bne.n 0x3db02	@ 0003daf8 03d1
.org 0x3dafa
	adds r0, r4, #0	@ 0003dafa 201c
.org 0x3dafc
	movs r1, #0	@ 0003dafc 0021
.org 0x3dafe
	bl 0x1d3d0	@ 0003dafe dff767fc
.org 0x3db02
	ldr r1, [pc, #88]	@ 0003db02 1649
.org 0x3db04
	ldrb r0, [r4, #16]	@ 0003db04 207c
.org 0x3db06
	adds r0, r0, r1	@ 0003db06 4018
.org 0x3db08
	ldrb r0, [r0, #0]	@ 0003db08 0078
.org 0x3db0a
	lsls r0, r0, #24	@ 0003db0a 0006
.org 0x3db0c
	asrs r0, r0, #24	@ 0003db0c 0016
.org 0x3db0e
	lsls r0, r0, #8	@ 0003db0e 0002
.org 0x3db10
	str r0, [r4, #100]	@ 0003db10 6066
.org 0x3db12
	ldr r1, [pc, #76]	@ 0003db12 1349
.org 0x3db14
	ldrb r0, [r4, #16]	@ 0003db14 207c
.org 0x3db16
	adds r0, r0, r1	@ 0003db16 4018
.org 0x3db18
	ldrb r0, [r0, #0]	@ 0003db18 0078
.org 0x3db1a
	lsls r0, r0, #24	@ 0003db1a 0006
.org 0x3db1c
	asrs r0, r0, #24	@ 0003db1c 0016
.org 0x3db1e
	lsls r0, r0, #8	@ 0003db1e 0002
.org 0x3db20
	str r0, [r4, #104]	@ 0003db20 a066
.org 0x3db22
	ldr r1, [pc, #64]	@ 0003db22 1049
.org 0x3db24
	ldrb r0, [r4, #16]	@ 0003db24 207c
.org 0x3db26
	adds r0, r0, r1	@ 0003db26 4018
.org 0x3db28
	ldrb r0, [r0, #0]	@ 0003db28 0078
.org 0x3db2a
	lsls r0, r0, #24	@ 0003db2a 0006
.org 0x3db2c
	asrs r0, r0, #24	@ 0003db2c 0016
.org 0x3db2e
	lsls r0, r0, #8	@ 0003db2e 0002
.org 0x3db30
	str r0, [r4, #92]	@ 0003db30 e065
.org 0x3db32
	ldr r1, [pc, #52]	@ 0003db32 0d49
.org 0x3db34
	ldrb r0, [r4, #16]	@ 0003db34 207c
.org 0x3db36
	adds r0, r0, r1	@ 0003db36 4018
.org 0x3db38
	ldrb r0, [r0, #0]	@ 0003db38 0078
.org 0x3db3a
	lsls r0, r0, #24	@ 0003db3a 0006
.org 0x3db3c
	asrs r0, r0, #24	@ 0003db3c 0016
.org 0x3db3e
	lsls r0, r0, #8	@ 0003db3e 0002
.org 0x3db40
	str r0, [r4, #96]	@ 0003db40 2066
.org 0x3db42
	strb r5, [r4, #19]	@ 0003db42 e574
.org 0x3db44
	strb r5, [r4, #18]	@ 0003db44 a574
.org 0x3db46
	adds r0, r4, #0	@ 0003db46 201c
.org 0x3db48
	adds r0, #180	@ 0003db48 b430
.org 0x3db4a
	strb r5, [r0, #12]	@ 0003db4a 0573
.org 0x3db4c
	adds r0, r4, #0	@ 0003db4c 201c
.org 0x3db4e
	bl 0x3db6c	@ 0003db4e 00f00df8
.org 0x3db52
	pop {r4, r5}	@ 0003db52 30bc
.org 0x3db54
	pop {r0}	@ 0003db54 01bc
.org 0x3db56
	bx r0	@ 0003db56 0047
