@ FUN_0801febc  entry 0x0801febc  size 190
.thumb
.org 0x1febc
FUN_0801febc:
	push {r4, r5, r6, r7, lr}	@ 0001febc f0b5
.org 0x1febe
	adds r6, r1, #0	@ 0001febe 0e1c
.org 0x1fec0
	ldr r1, [pc, #144]	@ 0001fec0 2449
.org 0x1fec2
	movs r2, #206	@ 0001fec2 ce22
.org 0x1fec4
	lsls r2, r2, #1	@ 0001fec4 5200
.org 0x1fec6
	adds r0, r1, r2	@ 0001fec6 8818
.org 0x1fec8
	ldr r5, [r0, #0]	@ 0001fec8 0568
.org 0x1feca
	ldr r0, [r1, #0]	@ 0001feca 0868
.org 0x1fecc
	subs r3, r1, #4	@ 0001fecc 0b1f
.org 0x1fece
	mov ip, r3	@ 0001fece 9c46
.org 0x1fed0
	cmp r0, #0	@ 0001fed0 0028
.org 0x1fed2
	beq.n 0x1fee6	@ 0001fed2 08d0
.org 0x1fed4
	ldr r0, [r1, #0]	@ 0001fed4 0868
.org 0x1fed6
	lsls r0, r0, #8	@ 0001fed6 0002
.org 0x1fed8
	cmp r5, r0	@ 0001fed8 8542
.org 0x1feda
	bge.n 0x1fede	@ 0001feda 00da
.org 0x1fedc
	adds r5, r0, #0	@ 0001fedc 051c
.org 0x1fede
	adds r1, #12	@ 0001fede 0c31
.org 0x1fee0
	ldr r0, [r1, #0]	@ 0001fee0 0868
.org 0x1fee2
	cmp r0, #0	@ 0001fee2 0028
.org 0x1fee4
	bne.n 0x1fed4	@ 0001fee4 f6d1
.org 0x1fee6
	asrs r0, r5, #6	@ 0001fee6 a811
.org 0x1fee8
	cmp r0, #0	@ 0001fee8 0028
.org 0x1feea
	beq.n 0x1ff64	@ 0001feea 3bd0
.org 0x1feec
	ldr r2, [pc, #104]	@ 0001feec 1a4a
.org 0x1feee
	movs r3, #207	@ 0001feee cf23
.org 0x1fef0
	lsls r3, r3, #1	@ 0001fef0 5b00
.org 0x1fef2
	add r3, ip	@ 0001fef2 6344
.org 0x1fef4
	ldrh r0, [r3, #0]	@ 0001fef4 1888
.org 0x1fef6
	adds r1, r0, #1	@ 0001fef6 411c
.org 0x1fef8
	strh r1, [r3, #0]	@ 0001fef8 1980
.org 0x1fefa
	lsls r0, r0, #30	@ 0001fefa 8007
.org 0x1fefc
	lsrs r0, r0, #23	@ 0001fefc c00d
.org 0x1fefe
	adds r0, r0, r2	@ 0001fefe 8018
.org 0x1ff00
	movs r7, #0	@ 0001ff00 0027
.org 0x1ff02
	ldrsh r0, [r0, r7]	@ 0001ff02 c05f
.org 0x1ff04
	muls r0, r5	@ 0001ff04 6843
.org 0x1ff06
	cmp r0, #0	@ 0001ff06 0028
.org 0x1ff08
	bge.n 0x1ff0c	@ 0001ff08 00da
.org 0x1ff0a
	adds r0, #255	@ 0001ff0a ff30
.org 0x1ff0c
	asrs r2, r0, #8	@ 0001ff0c 0212
.org 0x1ff0e
	asrs r0, r0, #12	@ 0001ff0e 0013
.org 0x1ff10
	str r0, [r6, #0]	@ 0001ff10 3060
.org 0x1ff12
	mov r1, ip	@ 0001ff12 6146
.org 0x1ff14
	ldr r0, [r1, #0]	@ 0001ff14 0868
.org 0x1ff16
	ldr r4, [pc, #68]	@ 0001ff16 114c
.org 0x1ff18
	muls r0, r4	@ 0001ff18 6043
.org 0x1ff1a
	ldr r3, [pc, #68]	@ 0001ff1a 114b
.org 0x1ff1c
	adds r0, r0, r3	@ 0001ff1c c018
.org 0x1ff1e
	lsls r0, r0, #1	@ 0001ff1e 4000
.org 0x1ff20
	lsrs r1, r0, #1	@ 0001ff20 4108
.org 0x1ff22
	mov r7, ip	@ 0001ff22 6746
.org 0x1ff24
	str r1, [r7, #0]	@ 0001ff24 3960
.org 0x1ff26
	lsrs r0, r0, #17	@ 0001ff26 400c
.org 0x1ff28
	movs r1, #255	@ 0001ff28 ff21
.org 0x1ff2a
	ands r0, r1	@ 0001ff2a 0840
.org 0x1ff2c
	subs r0, #127	@ 0001ff2c 7f38
.org 0x1ff2e
	ldr r1, [r6, #0]	@ 0001ff2e 3168
.org 0x1ff30
	muls r0, r1	@ 0001ff30 4843
.org 0x1ff32
	asrs r0, r0, #7	@ 0001ff32 c011
.org 0x1ff34
	str r0, [r6, #0]	@ 0001ff34 3060
.org 0x1ff36
	str r2, [r6, #4]	@ 0001ff36 7260
.org 0x1ff38
	subs r2, #3	@ 0001ff38 033a
.org 0x1ff3a
	ldr r0, [r7, #0]	@ 0001ff3a 3868
.org 0x1ff3c
	muls r0, r4	@ 0001ff3c 6043
.org 0x1ff3e
	adds r0, r0, r3	@ 0001ff3e c018
.org 0x1ff40
	lsls r0, r0, #1	@ 0001ff40 4000
.org 0x1ff42
	lsrs r1, r0, #1	@ 0001ff42 4108
.org 0x1ff44
	str r1, [r7, #0]	@ 0001ff44 3960
.org 0x1ff46
	lsrs r0, r0, #17	@ 0001ff46 400c
.org 0x1ff48
	movs r1, #7	@ 0001ff48 0721
.org 0x1ff4a
	ands r0, r1	@ 0001ff4a 0840
.org 0x1ff4c
	adds r2, r2, r0	@ 0001ff4c 1218
.org 0x1ff4e
	asrs r2, r2, #1	@ 0001ff4e 5210
.org 0x1ff50
	str r2, [r6, #4]	@ 0001ff50 7260
.org 0x1ff52
	b.n 0x1ff68	@ 0001ff52 09e0
.org 0x1ff54
	.byte 0xa4,0xeb,0x02,0x02	@ 0001ff54 data
.org 0x1ff58
	.byte 0x0c,0x93,0x12,0x08	@ 0001ff58 data
.org 0x1ff5c
	.byte 0xfd,0x43,0x03,0x00	@ 0001ff5c data
.org 0x1ff60
	.byte 0xc3,0x9e,0x26,0x00	@ 0001ff60 data
.org 0x1ff64
	str r0, [r6, #4]	@ 0001ff64 7060
.org 0x1ff66
	str r0, [r6, #0]	@ 0001ff66 3060
.org 0x1ff68
	movs r1, #208	@ 0001ff68 d021
.org 0x1ff6a
	lsls r1, r1, #1	@ 0001ff6a 4900
.org 0x1ff6c
	add r1, ip	@ 0001ff6c 6144
.org 0x1ff6e
	lsls r0, r5, #4	@ 0001ff6e 2801
.org 0x1ff70
	subs r0, r0, r5	@ 0001ff70 401b
.org 0x1ff72
	asrs r0, r0, #4	@ 0001ff72 0011
.org 0x1ff74
	str r0, [r1, #0]	@ 0001ff74 0860
.org 0x1ff76
	movs r1, #206	@ 0001ff76 ce21
.org 0x1ff78
	lsls r1, r1, #1	@ 0001ff78 4900
