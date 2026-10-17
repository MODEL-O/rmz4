@ FUN_0800fddc  entry 0x0800fddc  size 1614
.thumb
.org 0xfddc
FUN_0800fddc:
	push {r4, r5, r6, r7, lr}	@ 0000fddc f0b5
.org 0xfdde
	mov r7, sl	@ 0000fdde 5746
.org 0xfde0
	mov r6, r9	@ 0000fde0 4e46
.org 0xfde2
	mov r5, r8	@ 0000fde2 4546
.org 0xfde4
	push {r5, r6, r7}	@ 0000fde4 e0b4
.org 0xfde6
	sub sp, #8	@ 0000fde6 82b0
.org 0xfde8
	mov r9, r0	@ 0000fde8 8146
.org 0xfdea
	movs r4, #159	@ 0000fdea 9f24
.org 0xfdec
	ldr r1, [r0, #52]	@ 0000fdec 416b
.org 0xfdee
	ldr r0, [r0, #60]	@ 0000fdee c06b
.org 0xfdf0
	subs r1, r1, r0	@ 0000fdf0 091a
.org 0xfdf2
	mov sl, r1	@ 0000fdf2 8a46
.org 0xfdf4
	mov r0, r9	@ 0000fdf4 4846
.org 0xfdf6
	ldrh r5, [r0, #56]	@ 0000fdf6 058f
.org 0xfdf8
	movs r2, #56	@ 0000fdf8 3822
.org 0xfdfa
	ldrsh r1, [r0, r2]	@ 0000fdfa 815e
.org 0xfdfc
	ldr r0, [pc, #812]	@ 0000fdfc cb48
.org 0xfdfe
	cmp r1, r0	@ 0000fdfe 8142
.org 0xfe00
	bgt.n 0xfe06	@ 0000fe00 01dc
.org 0xfe02
	movs r5, #216	@ 0000fe02 d825
.org 0xfe04
	lsls r5, r5, #1	@ 0000fe04 6d00
.org 0xfe06
	movs r0, #160	@ 0000fe06 a020
.org 0xfe08
	lsls r0, r0, #2	@ 0000fe08 8000
.org 0xfe0a
	bl 0xa70	@ 0000fe0a f0f731fe
.org 0xfe0e
	mov r8, r0	@ 0000fe0e 8046
.org 0xfe10
	cmp r0, #0	@ 0000fe10 0028
.org 0xfe12
	bne.n 0xfe16	@ 0000fe12 00d1
.org 0xfe14
	b.n 0x10432	@ 0000fe14 0de3
.org 0xfe16
	ldr r2, [pc, #792]	@ 0000fe16 c64a
.org 0xfe18
	movs r1, #186	@ 0000fe18 ba21
.org 0xfe1a
	lsls r1, r1, #1	@ 0000fe1a 4900
.org 0xfe1c
	adds r0, r2, r1	@ 0000fe1c 5018
.org 0xfe1e
	mov r1, r8	@ 0000fe1e 4146
.org 0xfe20
	str r1, [r0, #0]	@ 0000fe20 0160
.org 0xfe22
	movs r0, #188	@ 0000fe22 bc20
.org 0xfe24
	lsls r0, r0, #1	@ 0000fe24 4000
.org 0xfe26
	adds r1, r2, r0	@ 0000fe26 1118
.org 0xfe28
	ldr r0, [pc, #776]	@ 0000fe28 c248
.org 0xfe2a
	str r0, [r1, #0]	@ 0000fe2a 0860
.org 0xfe2c
	movs r0, #190	@ 0000fe2c be20
.org 0xfe2e
	lsls r0, r0, #1	@ 0000fe2e 4000
.org 0xfe30
	adds r1, r2, r0	@ 0000fe30 1118
.org 0xfe32
	ldr r0, [pc, #772]	@ 0000fe32 c148
.org 0xfe34
	str r0, [r1, #0]	@ 0000fe34 0860
.org 0xfe36
	lsls r3, r5, #16	@ 0000fe36 2b04
.org 0xfe38
	ldr r1, [pc, #768]	@ 0000fe38 c049
.org 0xfe3a
	adds r0, r3, r1	@ 0000fe3a 5818
.org 0xfe3c
	mov r5, r9	@ 0000fe3c 4d46
.org 0xfe3e
	ldr r2, [r5, #104]	@ 0000fe3e aa6e
.org 0xfe40
	lsls r1, r2, #1	@ 0000fe40 5100
.org 0xfe42
	lsrs r5, r0, #16	@ 0000fe42 050c
.org 0xfe44
	mov ip, r5	@ 0000fe44 ac46
.org 0xfe46
	asrs r0, r0, #19	@ 0000fe46 c014
.org 0xfe48
	subs r0, #6	@ 0000fe48 0638
.org 0xfe4a
	lsls r0, r0, #16	@ 0000fe4a 0004
.org 0xfe4c
	lsrs r7, r0, #16	@ 0000fe4c 070c
.org 0xfe4e
	adds r1, r1, r2	@ 0000fe4e 8918
.org 0xfe50
	asrs r1, r1, #7	@ 0000fe50 c911
.org 0xfe52
	add r1, sl	@ 0000fe52 5144
.org 0xfe54
	lsls r1, r1, #16	@ 0000fe54 0904
.org 0xfe56
	lsrs r6, r1, #16	@ 0000fe56 0e0c
.org 0xfe58
	lsls r5, r7, #16	@ 0000fe58 3d04
.org 0xfe5a
	asrs r1, r5, #16	@ 0000fe5a 2914
.org 0xfe5c
	adds r1, #159	@ 0000fe5c 9f31
.org 0xfe5e
	str r3, [sp, #4]	@ 0000fe5e 0193
.org 0xfe60
	cmp r1, #199	@ 0000fe60 c729
.org 0xfe62
	ble.n 0xfe82	@ 0000fe62 0edd
.org 0xfe64
	adds r3, r6, #0	@ 0000fe64 331c
.org 0xfe66
	lsls r0, r4, #2	@ 0000fe66 a000
.org 0xfe68
	mov r1, r8	@ 0000fe68 4146
.org 0xfe6a
	adds r2, r1, r0	@ 0000fe6a 0a18
.org 0xfe6c
	asrs r1, r5, #16	@ 0000fe6c 2914
.org 0xfe6e
	adds r0, r5, #0	@ 0000fe6e 281c
.org 0xfe70
	orrs r0, r3	@ 0000fe70 1843
.org 0xfe72
	str r0, [r2, #0]	@ 0000fe72 1060
.org 0xfe74
	subs r2, #4	@ 0000fe74 043a
.org 0xfe76
	subs r4, #1	@ 0000fe76 013c
.org 0xfe78
	adds r1, r1, r4	@ 0000fe78 0919
.org 0xfe7a
	cmp r1, #199	@ 0000fe7a c729
.org 0xfe7c
	ble.n 0xfe82	@ 0000fe7c 01dd
.org 0xfe7e
	cmp r4, #0	@ 0000fe7e 002c
.org 0xfe80
	bge.n 0xfe6c	@ 0000fe80 f4da
.org 0xfe82
	mov r2, r9	@ 0000fe82 4a46
.org 0xfe84
	ldr r0, [r2, #104]	@ 0000fe84 906e
.org 0xfe86
	lsls r0, r0, #1	@ 0000fe86 4000
.org 0xfe88
	asrs r0, r0, #7	@ 0000fe88 c011
.org 0xfe8a
	add r0, sl	@ 0000fe8a 5044
.org 0xfe8c
	lsls r0, r0, #16	@ 0000fe8c 0004
.org 0xfe8e
	lsrs r6, r0, #16	@ 0000fe8e 060c
.org 0xfe90
	lsls r3, r7, #16	@ 0000fe90 3b04
.org 0xfe92
	asrs r0, r3, #16	@ 0000fe92 1814
.org 0xfe94
	adds r0, r0, r4	@ 0000fe94 0019
.org 0xfe96
	mov r5, ip	@ 0000fe96 6546
.org 0xfe98
	lsls r5, r5, #16	@ 0000fe98 2d04
.org 0xfe9a
	str r5, [sp, #0]	@ 0000fe9a 0095
.org 0xfe9c
	adds r7, r3, #0	@ 0000fe9c 1f1c
.org 0xfe9e
	cmp r0, #191	@ 0000fe9e bf28
.org 0xfea0
	ble.n 0xfec4	@ 0000fea0 10dd
.org 0xfea2
	cmp r4, #0	@ 0000fea2 002c
.org 0xfea4
	blt.n 0xfec4	@ 0000fea4 0edb
.org 0xfea6
	adds r5, r6, #0	@ 0000fea6 351c
.org 0xfea8
	lsls r0, r4, #2	@ 0000fea8 a000
.org 0xfeaa
	mov r1, r8	@ 0000feaa 4146
.org 0xfeac
	adds r2, r0, r1	@ 0000feac 4218
.org 0xfeae
	asrs r1, r3, #16	@ 0000feae 1914
.org 0xfeb0
	adds r0, r3, #0	@ 0000feb0 181c
.org 0xfeb2
	orrs r0, r5	@ 0000feb2 2843
.org 0xfeb4
	str r0, [r2, #0]	@ 0000feb4 1060
.org 0xfeb6
	subs r2, #4	@ 0000feb6 043a
.org 0xfeb8
	subs r4, #1	@ 0000feb8 013c
.org 0xfeba
	adds r1, r1, r4	@ 0000feba 0919
.org 0xfebc
	cmp r1, #191	@ 0000febc bf29
.org 0xfebe
	ble.n 0xfec4	@ 0000febe 01dd
.org 0xfec0
	cmp r4, #0	@ 0000fec0 002c
.org 0xfec2
	bge.n 0xfeae	@ 0000fec2 f4da
.org 0xfec4
	mov r2, r9	@ 0000fec4 4a46
.org 0xfec6
	ldr r0, [r2, #104]	@ 0000fec6 906e
.org 0xfec8
	lsls r0, r0, #2	@ 0000fec8 8000
.org 0xfeca
	asrs r0, r0, #7	@ 0000feca c011
.org 0xfecc
	add r0, sl	@ 0000fecc 5044
.org 0xfece
	lsls r0, r0, #16	@ 0000fece 0004
.org 0xfed0
	lsrs r6, r0, #16	@ 0000fed0 060c
.org 0xfed2
	adds r3, r7, #0	@ 0000fed2 3b1c
.org 0xfed4
	asrs r0, r7, #16	@ 0000fed4 3814
.org 0xfed6
	adds r0, r0, r4	@ 0000fed6 0019
.org 0xfed8
	cmp r0, #183	@ 0000fed8 b728
.org 0xfeda
	ble.n 0xfefe	@ 0000feda 10dd
.org 0xfedc
	cmp r4, #0	@ 0000fedc 002c
.org 0xfede
	blt.n 0xfefe	@ 0000fede 0edb
.org 0xfee0
	adds r5, r6, #0	@ 0000fee0 351c
.org 0xfee2
	lsls r0, r4, #2	@ 0000fee2 a000
.org 0xfee4
	mov r1, r8	@ 0000fee4 4146
.org 0xfee6
	adds r2, r0, r1	@ 0000fee6 4218
.org 0xfee8
	asrs r1, r3, #16	@ 0000fee8 1914
.org 0xfeea
	adds r0, r3, #0	@ 0000feea 181c
.org 0xfeec
	orrs r0, r5	@ 0000feec 2843
.org 0xfeee
	str r0, [r2, #0]	@ 0000feee 1060
.org 0xfef0
	subs r2, #4	@ 0000fef0 043a
.org 0xfef2
	subs r4, #1	@ 0000fef2 013c
.org 0xfef4
	adds r1, r1, r4	@ 0000fef4 0919
.org 0xfef6
	cmp r1, #183	@ 0000fef6 b729
.org 0xfef8
	ble.n 0xfefe	@ 0000fef8 01dd
.org 0xfefa
	cmp r4, #0	@ 0000fefa 002c
.org 0xfefc
	bge.n 0xfee8	@ 0000fefc f4da
.org 0xfefe
	mov r2, r9	@ 0000fefe 4a46
.org 0xff00
	ldr r0, [r2, #104]	@ 0000ff00 906e
.org 0xff02
	lsls r1, r0, #1	@ 0000ff02 4100
.org 0xff04
	adds r1, r1, r0	@ 0000ff04 0918
.org 0xff06
	asrs r1, r1, #7	@ 0000ff06 c911
.org 0xff08
	add r1, sl	@ 0000ff08 5144
.org 0xff0a
	lsls r1, r1, #16	@ 0000ff0a 0904
.org 0xff0c
	lsrs r6, r1, #16	@ 0000ff0c 0e0c
.org 0xff0e
	adds r3, r7, #0	@ 0000ff0e 3b1c
.org 0xff10
	asrs r0, r3, #16	@ 0000ff10 1814
.org 0xff12
	adds r0, r0, r4	@ 0000ff12 0019
.org 0xff14
	cmp r0, #173	@ 0000ff14 ad28
.org 0xff16
	ble.n 0xff3a	@ 0000ff16 10dd
.org 0xff18
	cmp r4, #0	@ 0000ff18 002c
.org 0xff1a
	blt.n 0xff3a	@ 0000ff1a 0edb
.org 0xff1c
	adds r5, r6, #0	@ 0000ff1c 351c
.org 0xff1e
	lsls r0, r4, #2	@ 0000ff1e a000
.org 0xff20
	mov r1, r8	@ 0000ff20 4146
.org 0xff22
	adds r2, r0, r1	@ 0000ff22 4218
.org 0xff24
	asrs r1, r3, #16	@ 0000ff24 1914
.org 0xff26
	adds r0, r3, #0	@ 0000ff26 181c
.org 0xff28
	orrs r0, r5	@ 0000ff28 2843
.org 0xff2a
	str r0, [r2, #0]	@ 0000ff2a 1060
.org 0xff2c
	subs r2, #4	@ 0000ff2c 043a
.org 0xff2e
	subs r4, #1	@ 0000ff2e 013c
.org 0xff30
	adds r1, r1, r4	@ 0000ff30 0919
.org 0xff32
	cmp r1, #173	@ 0000ff32 ad29
.org 0xff34
	ble.n 0xff3a	@ 0000ff34 01dd
.org 0xff36
	cmp r4, #0	@ 0000ff36 002c
.org 0xff38
	bge.n 0xff24	@ 0000ff38 f4da
.org 0xff3a
	mov r2, r9	@ 0000ff3a 4a46
.org 0xff3c
	ldr r0, [r2, #104]	@ 0000ff3c 906e
.org 0xff3e
	lsls r0, r0, #1	@ 0000ff3e 4000
.org 0xff40
	asrs r0, r0, #7	@ 0000ff40 c011
.org 0xff42
	add r0, sl	@ 0000ff42 5044
.org 0xff44
	lsls r0, r0, #16	@ 0000ff44 0004
.org 0xff46
	lsrs r6, r0, #16	@ 0000ff46 060c
.org 0xff48
	ldr r5, [sp, #0]	@ 0000ff48 009d
.org 0xff4a
	asrs r0, r5, #16	@ 0000ff4a 2814
.org 0xff4c
	movs r1, #7	@ 0000ff4c 0721
.org 0xff4e
	bl 0x128fb8	@ 0000ff4e 19f133f8
.org 0xff52
	adds r0, #10	@ 0000ff52 0a30
.org 0xff54
	ldr r2, [pc, #488]	@ 0000ff54 7a4a
.org 0xff56
	asrs r1, r2, #16	@ 0000ff56 1114
.org 0xff58
	adds r1, r1, r0	@ 0000ff58 0918
.org 0xff5a
	lsls r1, r1, #16	@ 0000ff5a 0904
.org 0xff5c
	lsrs r7, r1, #16	@ 0000ff5c 0f0c
.org 0xff5e
	asrs r1, r1, #16	@ 0000ff5e 0914
.org 0xff60
	adds r0, r1, r4	@ 0000ff60 0819
.org 0xff62
	cmp r0, #173	@ 0000ff62 ad28
.org 0xff64
	ble.n 0xff90	@ 0000ff64 14dd
.org 0xff66
	cmp r4, #0	@ 0000ff66 002c
.org 0xff68
	blt.n 0xff90	@ 0000ff68 12db
.org 0xff6a
	adds r3, r1, #0	@ 0000ff6a 0b1c
.org 0xff6c
	lsls r0, r4, #16	@ 0000ff6c 2004
.org 0xff6e
	movs r1, #174	@ 0000ff6e ae21
.org 0xff70
	lsls r1, r1, #16	@ 0000ff70 0904
.org 0xff72
	subs r1, r1, r0	@ 0000ff72 091a
.org 0xff74
	lsls r0, r4, #2	@ 0000ff74 a000
.org 0xff76
	mov r5, r8	@ 0000ff76 4546
.org 0xff78
	adds r2, r0, r5	@ 0000ff78 4219
.org 0xff7a
	movs r5, #128	@ 0000ff7a 8025
.org 0xff7c
	lsls r5, r5, #9	@ 0000ff7c 6d02
.org 0xff7e
	str r1, [r2, #0]	@ 0000ff7e 1160
.org 0xff80
	adds r1, r1, r5	@ 0000ff80 4919
.org 0xff82
	subs r2, #4	@ 0000ff82 043a
.org 0xff84
	subs r4, #1	@ 0000ff84 013c
.org 0xff86
	adds r0, r3, r4	@ 0000ff86 1819
.org 0xff88
	cmp r0, #173	@ 0000ff88 ad28
.org 0xff8a
	ble.n 0xff90	@ 0000ff8a 01dd
.org 0xff8c
	cmp r4, #0	@ 0000ff8c 002c
.org 0xff8e
	bge.n 0xff7e	@ 0000ff8e f6da
.org 0xff90
	lsls r3, r7, #16	@ 0000ff90 3b04
.org 0xff92
	asrs r0, r3, #16	@ 0000ff92 1814
.org 0xff94
	adds r0, r0, r4	@ 0000ff94 0019
.org 0xff96
	adds r7, r3, #0	@ 0000ff96 1f1c
.org 0xff98
	cmp r0, #159	@ 0000ff98 9f28
.org 0xff9a
	ble.n 0xffbe	@ 0000ff9a 10dd
.org 0xff9c
	cmp r4, #0	@ 0000ff9c 002c
.org 0xff9e
	blt.n 0xffbe	@ 0000ff9e 0edb
.org 0xffa0
	adds r5, r6, #0	@ 0000ffa0 351c
.org 0xffa2
	lsls r0, r4, #2	@ 0000ffa2 a000
.org 0xffa4
	mov r1, r8	@ 0000ffa4 4146
.org 0xffa6
	adds r2, r0, r1	@ 0000ffa6 4218
.org 0xffa8
	asrs r1, r3, #16	@ 0000ffa8 1914
.org 0xffaa
	adds r0, r3, #0	@ 0000ffaa 181c
.org 0xffac
	orrs r0, r5	@ 0000ffac 2843
.org 0xffae
	str r0, [r2, #0]	@ 0000ffae 1060
.org 0xffb0
	subs r2, #4	@ 0000ffb0 043a
.org 0xffb2
	subs r4, #1	@ 0000ffb2 013c
.org 0xffb4
	adds r1, r1, r4	@ 0000ffb4 0919
.org 0xffb6
	cmp r1, #159	@ 0000ffb6 9f29
.org 0xffb8
	ble.n 0xffbe	@ 0000ffb8 01dd
.org 0xffba
	cmp r4, #0	@ 0000ffba 002c
.org 0xffbc
	bge.n 0xffa8	@ 0000ffbc f4da
.org 0xffbe
	mov r2, r9	@ 0000ffbe 4a46
.org 0xffc0
	ldr r0, [r2, #104]	@ 0000ffc0 906e
.org 0xffc2
	lsls r1, r0, #1	@ 0000ffc2 4100
.org 0xffc4
	adds r1, r1, r0	@ 0000ffc4 0918
.org 0xffc6
	asrs r1, r1, #7	@ 0000ffc6 c911
.org 0xffc8
	add r1, sl	@ 0000ffc8 5144
.org 0xffca
	lsls r1, r1, #16	@ 0000ffca 0904
.org 0xffcc
	lsrs r6, r1, #16	@ 0000ffcc 0e0c
.org 0xffce
	adds r3, r7, #0	@ 0000ffce 3b1c
.org 0xffd0
	asrs r0, r7, #16	@ 0000ffd0 3814
.org 0xffd2
	adds r0, r0, r4	@ 0000ffd2 0019
.org 0xffd4
	cmp r0, #151	@ 0000ffd4 9728
.org 0xffd6
	ble.n 0xfffa	@ 0000ffd6 10dd
.org 0xffd8
	cmp r4, #0	@ 0000ffd8 002c
.org 0xffda
	blt.n 0xfffa	@ 0000ffda 0edb
.org 0xffdc
	adds r5, r6, #0	@ 0000ffdc 351c
.org 0xffde
	lsls r0, r4, #2	@ 0000ffde a000
.org 0xffe0
	mov r1, r8	@ 0000ffe0 4146
.org 0xffe2
	adds r2, r0, r1	@ 0000ffe2 4218
.org 0xffe4
	asrs r1, r3, #16	@ 0000ffe4 1914
.org 0xffe6
	adds r0, r3, #0	@ 0000ffe6 181c
.org 0xffe8
	orrs r0, r5	@ 0000ffe8 2843
.org 0xffea
	str r0, [r2, #0]	@ 0000ffea 1060
.org 0xffec
	subs r2, #4	@ 0000ffec 043a
.org 0xffee
	subs r4, #1	@ 0000ffee 013c
.org 0xfff0
	adds r1, r1, r4	@ 0000fff0 0919
.org 0xfff2
	cmp r1, #151	@ 0000fff2 9729
.org 0xfff4
	ble.n 0xfffa	@ 0000fff4 01dd
.org 0xfff6
	cmp r4, #0	@ 0000fff6 002c
.org 0xfff8
	bge.n 0xffe4	@ 0000fff8 f4da
.org 0xfffa
	mov r2, r9	@ 0000fffa 4a46
.org 0xfffc
	ldr r0, [r2, #104]	@ 0000fffc 906e
.org 0xfffe
	lsls r0, r0, #2	@ 0000fffe 8000
.org 0x10000
	asrs r0, r0, #7	@ 00010000 c011
.org 0x10002
	add r0, sl	@ 00010002 5044
.org 0x10004
	lsls r0, r0, #16	@ 00010004 0004
.org 0x10006
	lsrs r6, r0, #16	@ 00010006 060c
.org 0x10008
	adds r3, r7, #0	@ 00010008 3b1c
.org 0x1000a
	asrs r0, r7, #16	@ 0001000a 3814
.org 0x1000c
	adds r0, r0, r4	@ 0001000c 0019
.org 0x1000e
	cmp r0, #143	@ 0001000e 8f28
.org 0x10010
	ble.n 0x10034	@ 00010010 10dd
.org 0x10012
	cmp r4, #0	@ 00010012 002c
.org 0x10014
	blt.n 0x10034	@ 00010014 0edb
.org 0x10016
	adds r5, r6, #0	@ 00010016 351c
.org 0x10018
	lsls r0, r4, #2	@ 00010018 a000
.org 0x1001a
	mov r1, r8	@ 0001001a 4146
.org 0x1001c
	adds r2, r0, r1	@ 0001001c 4218
.org 0x1001e
	asrs r1, r3, #16	@ 0001001e 1914
.org 0x10020
	adds r0, r3, #0	@ 00010020 181c
.org 0x10022
	orrs r0, r5	@ 00010022 2843
.org 0x10024
	str r0, [r2, #0]	@ 00010024 1060
.org 0x10026
	subs r2, #4	@ 00010026 043a
.org 0x10028
	subs r4, #1	@ 00010028 013c
.org 0x1002a
	adds r1, r1, r4	@ 0001002a 0919
.org 0x1002c
	cmp r1, #143	@ 0001002c 8f29
.org 0x1002e
	ble.n 0x10034	@ 0001002e 01dd
.org 0x10030
	cmp r4, #0	@ 00010030 002c
.org 0x10032
	bge.n 0x1001e	@ 00010032 f4da
.org 0x10034
	mov r2, r9	@ 00010034 4a46
.org 0x10036
	ldr r0, [r2, #104]	@ 00010036 906e
.org 0x10038
	lsls r1, r0, #1	@ 00010038 4100
.org 0x1003a
	adds r1, r1, r0	@ 0001003a 0918
.org 0x1003c
	asrs r1, r1, #7	@ 0001003c c911
.org 0x1003e
	add r1, sl	@ 0001003e 5144
.org 0x10040
	lsls r1, r1, #16	@ 00010040 0904
.org 0x10042
	lsrs r6, r1, #16	@ 00010042 0e0c
.org 0x10044
	adds r3, r7, #0	@ 00010044 3b1c
.org 0x10046
	asrs r0, r3, #16	@ 00010046 1814
.org 0x10048
	adds r0, r0, r4	@ 00010048 0019
.org 0x1004a
	cmp r0, #128	@ 0001004a 8028
.org 0x1004c
	ble.n 0x10070	@ 0001004c 10dd
.org 0x1004e
	cmp r4, #0	@ 0001004e 002c
.org 0x10050
	blt.n 0x10070	@ 00010050 0edb
.org 0x10052
	adds r5, r6, #0	@ 00010052 351c
.org 0x10054
	lsls r0, r4, #2	@ 00010054 a000
.org 0x10056
	mov r1, r8	@ 00010056 4146
.org 0x10058
	adds r2, r0, r1	@ 00010058 4218
.org 0x1005a
	asrs r1, r3, #16	@ 0001005a 1914
.org 0x1005c
	adds r0, r3, #0	@ 0001005c 181c
.org 0x1005e
	orrs r0, r5	@ 0001005e 2843
.org 0x10060
	str r0, [r2, #0]	@ 00010060 1060
.org 0x10062
	subs r2, #4	@ 00010062 043a
.org 0x10064
	subs r4, #1	@ 00010064 013c
.org 0x10066
	adds r1, r1, r4	@ 00010066 0919
.org 0x10068
	cmp r1, #128	@ 00010068 8029
.org 0x1006a
	ble.n 0x10070	@ 0001006a 01dd
.org 0x1006c
	cmp r4, #0	@ 0001006c 002c
.org 0x1006e
	bge.n 0x1005a	@ 0001006e f4da
.org 0x10070
	mov r2, r9	@ 00010070 4a46
.org 0x10072
	ldr r0, [r2, #104]	@ 00010072 906e
.org 0x10074
	lsls r0, r0, #1	@ 00010074 4000
.org 0x10076
	asrs r0, r0, #7	@ 00010076 c011
.org 0x10078
	add r0, sl	@ 00010078 5044
.org 0x1007a
	lsls r0, r0, #16	@ 0001007a 0004
.org 0x1007c
	lsrs r6, r0, #16	@ 0001007c 060c
.org 0x1007e
	ldr r5, [sp, #0]	@ 0001007e 009d
.org 0x10080
	asrs r0, r5, #16	@ 00010080 2814
.org 0x10082
	movs r1, #6	@ 00010082 0621
.org 0x10084
	bl 0x128fb8	@ 00010084 18f198ff
.org 0x10088
	adds r0, #10	@ 00010088 0a30
.org 0x1008a
	ldr r2, [pc, #180]	@ 0001008a 2d4a
.org 0x1008c
	asrs r1, r2, #16	@ 0001008c 1114
.org 0x1008e
	adds r1, r1, r0	@ 0001008e 0918
.org 0x10090
	lsls r1, r1, #16	@ 00010090 0904
.org 0x10092
	lsrs r7, r1, #16	@ 00010092 0f0c
.org 0x10094
	asrs r1, r1, #16	@ 00010094 0914
.org 0x10096
	adds r0, r1, r4	@ 00010096 0819
.org 0x10098
	cmp r0, #128	@ 00010098 8028
.org 0x1009a
	ble.n 0x100c6	@ 0001009a 14dd
.org 0x1009c
	cmp r4, #0	@ 0001009c 002c
.org 0x1009e
	blt.n 0x100c6	@ 0001009e 12db
.org 0x100a0
	adds r3, r1, #0	@ 000100a0 0b1c
.org 0x100a2
	lsls r0, r4, #16	@ 000100a2 2004
.org 0x100a4
	movs r1, #131	@ 000100a4 8321
.org 0x100a6
	lsls r1, r1, #16	@ 000100a6 0904
.org 0x100a8
	subs r1, r1, r0	@ 000100a8 091a
.org 0x100aa
	lsls r0, r4, #2	@ 000100aa a000
.org 0x100ac
	mov r5, r8	@ 000100ac 4546
.org 0x100ae
	adds r2, r0, r5	@ 000100ae 4219
.org 0x100b0
	movs r5, #128	@ 000100b0 8025
.org 0x100b2
	lsls r5, r5, #9	@ 000100b2 6d02
.org 0x100b4
	str r1, [r2, #0]	@ 000100b4 1160
.org 0x100b6
	adds r1, r1, r5	@ 000100b6 4919
.org 0x100b8
	subs r2, #4	@ 000100b8 043a
.org 0x100ba
	subs r4, #1	@ 000100ba 013c
.org 0x100bc
	adds r0, r3, r4	@ 000100bc 1819
.org 0x100be
	cmp r0, #128	@ 000100be 8028
.org 0x100c0
	ble.n 0x100c6	@ 000100c0 01dd
.org 0x100c2
	cmp r4, #0	@ 000100c2 002c
.org 0x100c4
	bge.n 0x100b4	@ 000100c4 f6da
.org 0x100c6
	lsls r3, r7, #16	@ 000100c6 3b04
.org 0x100c8
	asrs r0, r3, #16	@ 000100c8 1814
.org 0x100ca
	adds r0, r0, r4	@ 000100ca 0019
.org 0x100cc
	cmp r0, #111	@ 000100cc 6f28
.org 0x100ce
	ble.n 0x100f2	@ 000100ce 10dd
.org 0x100d0
	cmp r4, #0	@ 000100d0 002c
.org 0x100d2
	blt.n 0x100f2	@ 000100d2 0edb
.org 0x100d4
	adds r5, r6, #0	@ 000100d4 351c
.org 0x100d6
	lsls r0, r4, #2	@ 000100d6 a000
.org 0x100d8
	mov r1, r8	@ 000100d8 4146
.org 0x100da
	adds r2, r0, r1	@ 000100da 4218
.org 0x100dc
	asrs r1, r3, #16	@ 000100dc 1914
.org 0x100de
	adds r0, r3, #0	@ 000100de 181c
.org 0x100e0
	orrs r0, r5	@ 000100e0 2843
.org 0x100e2
	str r0, [r2, #0]	@ 000100e2 1060
.org 0x100e4
	subs r2, #4	@ 000100e4 043a
.org 0x100e6
	subs r4, #1	@ 000100e6 013c
.org 0x100e8
	adds r1, r1, r4	@ 000100e8 0919
.org 0x100ea
	cmp r1, #111	@ 000100ea 6f29
.org 0x100ec
	ble.n 0x100f2	@ 000100ec 01dd
.org 0x100ee
	cmp r4, #0	@ 000100ee 002c
.org 0x100f0
	bge.n 0x100dc	@ 000100f0 f4da
.org 0x100f2
	mov r2, r9	@ 000100f2 4a46
.org 0x100f4
	ldr r0, [r2, #104]	@ 000100f4 906e
.org 0x100f6
	asrs r0, r0, #7	@ 000100f6 c011
.org 0x100f8
	add r0, sl	@ 000100f8 5044
.org 0x100fa
	lsls r0, r0, #16	@ 000100fa 0004
.org 0x100fc
	lsrs r6, r0, #16	@ 000100fc 060c
.org 0x100fe
	ldr r5, [sp, #0]	@ 000100fe 009d
.org 0x10100
	asrs r0, r5, #16	@ 00010100 2814
.org 0x10102
	movs r1, #5	@ 00010102 0521
.org 0x10104
	bl 0x128fb8	@ 00010104 18f158ff
.org 0x10108
	adds r0, #14	@ 00010108 0e30
.org 0x1010a
	ldr r2, [pc, #52]	@ 0001010a 0d4a
.org 0x1010c
	asrs r1, r2, #16	@ 0001010c 1114
.org 0x1010e
	adds r1, r1, r0	@ 0001010e 0918
.org 0x10110
	lsls r1, r1, #16	@ 00010110 0904
.org 0x10112
	lsrs r7, r1, #16	@ 00010112 0f0c
.org 0x10114
	asrs r1, r1, #16	@ 00010114 0914
.org 0x10116
	adds r0, r1, r4	@ 00010116 0819
.org 0x10118
	cmp r0, #111	@ 00010118 6f28
.org 0x1011a
	ble.n 0x10160	@ 0001011a 21dd
.org 0x1011c
	cmp r4, #0	@ 0001011c 002c
.org 0x1011e
	blt.n 0x10160	@ 0001011e 1fdb
.org 0x10120
	adds r3, r1, #0	@ 00010120 0b1c
.org 0x10122
	lsls r0, r4, #16	@ 00010122 2004
.org 0x10124
	movs r1, #250	@ 00010124 fa21
.org 0x10126
	lsls r1, r1, #16	@ 00010126 0904
.org 0x10128
	subs r1, r1, r0	@ 00010128 091a
.org 0x1012a
	b.n 0x10144	@ 0001012a 0be0
.org 0x1012c
	.byte 0xaf,0x01,0x00,0x00	@ 0001012c data
.org 0x10130
	.byte 0x90,0x15,0x00,0x03	@ 00010130 data
.org 0x10134
	.byte 0x1c,0x00,0x00,0x04	@ 00010134 data
.org 0x10138
	.byte 0x01,0x00,0x60,0xa6	@ 00010138 data
.org 0x1013c
	.byte 0x00,0x00,0x20,0xfe	@ 0001013c data
.org 0x10140
	.byte 0x00,0x00,0xf0,0xff	@ 00010140 data
.org 0x10144
	lsls r0, r4, #2	@ 00010144 a000
.org 0x10146
	mov r5, r8	@ 00010146 4546
.org 0x10148
	adds r2, r0, r5	@ 00010148 4219
.org 0x1014a
	movs r5, #128	@ 0001014a 8025
.org 0x1014c
	lsls r5, r5, #9	@ 0001014c 6d02
.org 0x1014e
	str r1, [r2, #0]	@ 0001014e 1160
.org 0x10150
	adds r1, r1, r5	@ 00010150 4919
.org 0x10152
	subs r2, #4	@ 00010152 043a
.org 0x10154
	subs r4, #1	@ 00010154 013c
.org 0x10156
	adds r0, r3, r4	@ 00010156 1819
.org 0x10158
	cmp r0, #111	@ 00010158 6f28
.org 0x1015a
	ble.n 0x10160	@ 0001015a 01dd
.org 0x1015c
	cmp r4, #0	@ 0001015c 002c
.org 0x1015e
	bge.n 0x1014e	@ 0001015e f6da
.org 0x10160
	lsls r3, r7, #16	@ 00010160 3b04
.org 0x10162
	asrs r0, r3, #16	@ 00010162 1814
.org 0x10164
	adds r0, r0, r4	@ 00010164 0019
.org 0x10166
	cmp r0, #99	@ 00010166 6328
.org 0x10168
	ble.n 0x1018c	@ 00010168 10dd
.org 0x1016a
	cmp r4, #0	@ 0001016a 002c
.org 0x1016c
	blt.n 0x1018c	@ 0001016c 0edb
.org 0x1016e
	adds r5, r6, #0	@ 0001016e 351c
.org 0x10170
	lsls r0, r4, #2	@ 00010170 a000
.org 0x10172
	mov r1, r8	@ 00010172 4146
.org 0x10174
	adds r2, r0, r1	@ 00010174 4218
.org 0x10176
	asrs r1, r3, #16	@ 00010176 1914
.org 0x10178
	adds r0, r3, #0	@ 00010178 181c
.org 0x1017a
	orrs r0, r5	@ 0001017a 2843
.org 0x1017c
	str r0, [r2, #0]	@ 0001017c 1060
.org 0x1017e
	subs r2, #4	@ 0001017e 043a
.org 0x10180
	subs r4, #1	@ 00010180 013c
.org 0x10182
	adds r1, r1, r4	@ 00010182 0919
.org 0x10184
	cmp r1, #99	@ 00010184 6329
.org 0x10186
	ble.n 0x1018c	@ 00010186 01dd
.org 0x10188
	cmp r4, #0	@ 00010188 002c
.org 0x1018a
	bge.n 0x10176	@ 0001018a f4da
.org 0x1018c
	adds r5, r4, #0	@ 0001018c 251c
.org 0x1018e
	mov r2, r9	@ 0001018e 4a46
.org 0x10190
	ldr r0, [r2, #104]	@ 00010190 906e
.org 0x10192
	lsls r0, r0, #2	@ 00010192 8000
.org 0x10194
	asrs r0, r0, #7	@ 00010194 c011
.org 0x10196
	add r0, sl	@ 00010196 5044
.org 0x10198
	lsls r0, r0, #16	@ 00010198 0004
.org 0x1019a
	lsrs r6, r0, #16	@ 0001019a 060c
.org 0x1019c
	ldr r1, [sp, #4]	@ 0001019c 0199
.org 0x1019e
	asrs r0, r1, #16	@ 0001019e 0814
.org 0x101a0
	ldr r2, [pc, #672]	@ 000101a0 a84a
.org 0x101a2
	adds r0, r0, r2	@ 000101a2 8018
.org 0x101a4
	asrs r0, r0, #2	@ 000101a4 8010
.org 0x101a6
	adds r0, #20	@ 000101a6 1430
.org 0x101a8
	ldr r2, [pc, #668]	@ 000101a8 a74a
.org 0x101aa
	asrs r1, r2, #16	@ 000101aa 1114
.org 0x101ac
	adds r1, r1, r0	@ 000101ac 0918
.org 0x101ae
	movs r4, #0	@ 000101ae 0024
.org 0x101b0
	lsls r2, r1, #16	@ 000101b0 0a04
.org 0x101b2
	asrs r0, r2, #16	@ 000101b2 1014
.org 0x101b4
	cmp r0, #37	@ 000101b4 2528
.org 0x101b6
	bgt.n 0x101d4	@ 000101b6 0ddc
.org 0x101b8
	cmp r4, r5	@ 000101b8 ac42
.org 0x101ba
	bgt.n 0x101d4	@ 000101ba 0bdc
.org 0x101bc
	adds r3, r6, #0	@ 000101bc 331c
.org 0x101be
	mov r6, r8	@ 000101be 4646
.org 0x101c0
	asrs r1, r2, #16	@ 000101c0 1114
.org 0x101c2
	adds r0, r2, #0	@ 000101c2 101c
.org 0x101c4
	orrs r0, r3	@ 000101c4 1843
.org 0x101c6
	stmia r6!, {r0}	@ 000101c6 01c6
.org 0x101c8
	adds r4, #1	@ 000101c8 0134
.org 0x101ca
	adds r1, r1, r4	@ 000101ca 0919
.org 0x101cc
	cmp r1, #37	@ 000101cc 2529
.org 0x101ce
	bgt.n 0x101d4	@ 000101ce 01dc
.org 0x101d0
	cmp r4, r5	@ 000101d0 ac42
.org 0x101d2
	ble.n 0x101c0	@ 000101d2 f5dd
.org 0x101d4
	mov r0, r9	@ 000101d4 4846
.org 0x101d6
	ldr r1, [r0, #104]	@ 000101d6 816e
.org 0x101d8
	lsls r0, r1, #1	@ 000101d8 4800
.org 0x101da
	adds r0, r0, r1	@ 000101da 4018
.org 0x101dc
	asrs r0, r0, #7	@ 000101dc c011
.org 0x101de
	add r0, sl	@ 000101de 5044
.org 0x101e0
	lsls r0, r0, #16	@ 000101e0 0004
.org 0x101e2
	lsrs r6, r0, #16	@ 000101e2 060c
.org 0x101e4
	ldr r1, [sp, #4]	@ 000101e4 0199
.org 0x101e6
	asrs r0, r1, #16	@ 000101e6 0814
.org 0x101e8
	ldr r2, [pc, #600]	@ 000101e8 964a
.org 0x101ea
	adds r0, r0, r2	@ 000101ea 8018
.org 0x101ec
	movs r1, #5	@ 000101ec 0521
.org 0x101ee
	bl 0x128fb8	@ 000101ee 18f1e3fe
.org 0x101f2
	adds r0, #20	@ 000101f2 1430
.org 0x101f4
	ldr r2, [pc, #592]	@ 000101f4 944a
.org 0x101f6
	asrs r1, r2, #16	@ 000101f6 1114
.org 0x101f8
	adds r1, r1, r0	@ 000101f8 0918
.org 0x101fa
	lsls r1, r1, #16	@ 000101fa 0904
.org 0x101fc
	lsrs r7, r1, #16	@ 000101fc 0f0c
.org 0x101fe
	asrs r1, r1, #16	@ 000101fe 0914
.org 0x10200
	adds r0, r1, r4	@ 00010200 0819
.org 0x10202
	cmp r0, #37	@ 00010202 2528
.org 0x10204
	bgt.n 0x1022c	@ 00010204 12dc
.org 0x10206
	cmp r4, r5	@ 00010206 ac42
.org 0x10208
	bgt.n 0x1022c	@ 00010208 10dc
.org 0x1020a
	adds r3, r1, #0	@ 0001020a 0b1c
.org 0x1020c
	lsls r0, r4, #16	@ 0001020c 2004
.org 0x1020e
	movs r1, #152	@ 0001020e 9821
.org 0x10210
	lsls r1, r1, #14	@ 00010210 8903
.org 0x10212
	subs r1, r1, r0	@ 00010212 091a
.org 0x10214
	lsls r2, r4, #2	@ 00010214 a200
.org 0x10216
	add r2, r8	@ 00010216 4244
.org 0x10218
	ldr r0, [pc, #560]	@ 00010218 8c48
.org 0x1021a
	mov ip, r0	@ 0001021a 8446
.org 0x1021c
	stmia r2!, {r1}	@ 0001021c 02c2
.org 0x1021e
	add r1, ip	@ 0001021e 6144
.org 0x10220
	adds r4, #1	@ 00010220 0134
.org 0x10222
	adds r0, r3, r4	@ 00010222 1819
.org 0x10224
	cmp r0, #37	@ 00010224 2528
.org 0x10226
	bgt.n 0x1022c	@ 00010226 01dc
.org 0x10228
	cmp r4, r5	@ 00010228 ac42
.org 0x1022a
	ble.n 0x1021c	@ 0001022a f7dd
.org 0x1022c
	lsls r2, r7, #16	@ 0001022c 3a04
.org 0x1022e
	asrs r0, r2, #16	@ 0001022e 1014
.org 0x10230
	adds r0, r0, r4	@ 00010230 0019
.org 0x10232
	cmp r0, #55	@ 00010232 3728
.org 0x10234
	bgt.n 0x10254	@ 00010234 0edc
.org 0x10236
	cmp r4, r5	@ 00010236 ac42
.org 0x10238
	bgt.n 0x10254	@ 00010238 0cdc
.org 0x1023a
	lsls r0, r4, #2	@ 0001023a a000
.org 0x1023c
	mov r1, r8	@ 0001023c 4146
.org 0x1023e
	adds r3, r0, r1	@ 0001023e 4318
.org 0x10240
	asrs r1, r2, #16	@ 00010240 1114
.org 0x10242
	adds r0, r2, #0	@ 00010242 101c
.org 0x10244
	orrs r0, r6	@ 00010244 3043
.org 0x10246
	stmia r3!, {r0}	@ 00010246 01c3
.org 0x10248
	adds r4, #1	@ 00010248 0134
.org 0x1024a
	adds r1, r1, r4	@ 0001024a 0919
.org 0x1024c
	cmp r1, #55	@ 0001024c 3729
.org 0x1024e
	bgt.n 0x10254	@ 0001024e 01dc
.org 0x10250
	cmp r4, r5	@ 00010250 ac42
.org 0x10252
	ble.n 0x10240	@ 00010252 f5dd
.org 0x10254
	mov r2, r9	@ 00010254 4a46
.org 0x10256
	ldr r0, [r2, #104]	@ 00010256 906e
.org 0x10258
	lsls r0, r0, #1	@ 00010258 4000
.org 0x1025a
	asrs r0, r0, #7	@ 0001025a c011
.org 0x1025c
	add r0, sl	@ 0001025c 5044
.org 0x1025e
	lsls r0, r0, #16	@ 0001025e 0004
.org 0x10260
	lsrs r6, r0, #16	@ 00010260 060c
.org 0x10262
	ldr r1, [sp, #4]	@ 00010262 0199
.org 0x10264
	asrs r0, r1, #16	@ 00010264 0814
.org 0x10266
	ldr r2, [pc, #476]	@ 00010266 774a
.org 0x10268
	adds r0, r0, r2	@ 00010268 8018
.org 0x1026a
	movs r1, #6	@ 0001026a 0621
.org 0x1026c
	bl 0x128fb8	@ 0001026c 18f1a4fe
.org 0x10270
	adds r0, #20	@ 00010270 1430
.org 0x10272
	ldr r2, [pc, #468]	@ 00010272 754a
.org 0x10274
	asrs r1, r2, #16	@ 00010274 1114
.org 0x10276
	adds r1, r1, r0	@ 00010276 0918
.org 0x10278
	lsls r1, r1, #16	@ 00010278 0904
.org 0x1027a
	lsrs r7, r1, #16	@ 0001027a 0f0c
.org 0x1027c
	asrs r1, r1, #16	@ 0001027c 0914
.org 0x1027e
	adds r0, r1, r4	@ 0001027e 0819
.org 0x10280
	cmp r0, #55	@ 00010280 3728
.org 0x10282
	bgt.n 0x102aa	@ 00010282 12dc
.org 0x10284
	cmp r4, r5	@ 00010284 ac42
.org 0x10286
	bgt.n 0x102aa	@ 00010286 10dc
.org 0x10288
	adds r3, r1, #0	@ 00010288 0b1c
.org 0x1028a
	lsls r0, r4, #16	@ 0001028a 2004
.org 0x1028c
	movs r1, #224	@ 0001028c e021
.org 0x1028e
	lsls r1, r1, #14	@ 0001028e 8903
.org 0x10290
	subs r1, r1, r0	@ 00010290 091a
.org 0x10292
	lsls r2, r4, #2	@ 00010292 a200
.org 0x10294
	add r2, r8	@ 00010294 4244
.org 0x10296
	ldr r0, [pc, #436]	@ 00010296 6d48
.org 0x10298
	mov ip, r0	@ 00010298 8446
.org 0x1029a
	stmia r2!, {r1}	@ 0001029a 02c2
.org 0x1029c
	add r1, ip	@ 0001029c 6144
.org 0x1029e
	adds r4, #1	@ 0001029e 0134
.org 0x102a0
	adds r0, r3, r4	@ 000102a0 1819
.org 0x102a2
	cmp r0, #55	@ 000102a2 3728
.org 0x102a4
	bgt.n 0x102aa	@ 000102a4 01dc
.org 0x102a6
	cmp r4, r5	@ 000102a6 ac42
.org 0x102a8
	ble.n 0x1029a	@ 000102a8 f7dd
.org 0x102aa
	lsls r2, r7, #16	@ 000102aa 3a04
.org 0x102ac
	asrs r0, r2, #16	@ 000102ac 1014
.org 0x102ae
	adds r0, r0, r4	@ 000102ae 0019
.org 0x102b0
	cmp r0, #66	@ 000102b0 4228
.org 0x102b2
	bgt.n 0x102d2	@ 000102b2 0edc
.org 0x102b4
	cmp r4, r5	@ 000102b4 ac42
.org 0x102b6
	bgt.n 0x102d2	@ 000102b6 0cdc
.org 0x102b8
	lsls r0, r4, #2	@ 000102b8 a000
.org 0x102ba
	mov r1, r8	@ 000102ba 4146
.org 0x102bc
	adds r3, r0, r1	@ 000102bc 4318
.org 0x102be
	asrs r1, r2, #16	@ 000102be 1114
.org 0x102c0
	adds r0, r2, #0	@ 000102c0 101c
.org 0x102c2
	orrs r0, r6	@ 000102c2 3043
.org 0x102c4
	stmia r3!, {r0}	@ 000102c4 01c3
.org 0x102c6
	adds r4, #1	@ 000102c6 0134
.org 0x102c8
	adds r1, r1, r4	@ 000102c8 0919
.org 0x102ca
	cmp r1, #66	@ 000102ca 4229
.org 0x102cc
	bgt.n 0x102d2	@ 000102cc 01dc
.org 0x102ce
	cmp r4, r5	@ 000102ce ac42
.org 0x102d0
	ble.n 0x102be	@ 000102d0 f5dd
.org 0x102d2
	mov r2, r9	@ 000102d2 4a46
.org 0x102d4
	ldr r1, [r2, #104]	@ 000102d4 916e
.org 0x102d6
	lsls r0, r1, #1	@ 000102d6 4800
.org 0x102d8
	adds r0, r0, r1	@ 000102d8 4018
.org 0x102da
	asrs r0, r0, #7	@ 000102da c011
.org 0x102dc
	add r0, sl	@ 000102dc 5044
.org 0x102de
	lsls r0, r0, #16	@ 000102de 0004
.org 0x102e0
	lsrs r6, r0, #16	@ 000102e0 060c
.org 0x102e2
	ldr r1, [sp, #4]	@ 000102e2 0199
.org 0x102e4
	asrs r0, r1, #16	@ 000102e4 0814
.org 0x102e6
	ldr r2, [pc, #348]	@ 000102e6 574a
.org 0x102e8
	adds r0, r0, r2	@ 000102e8 8018
.org 0x102ea
	movs r1, #7	@ 000102ea 0721
.org 0x102ec
	bl 0x128fb8	@ 000102ec 18f164fe
.org 0x102f0
	adds r0, #20	@ 000102f0 1430
.org 0x102f2
	ldr r2, [pc, #340]	@ 000102f2 554a
.org 0x102f4
	asrs r1, r2, #16	@ 000102f4 1114
.org 0x102f6
	adds r1, r1, r0	@ 000102f6 0918
.org 0x102f8
	lsls r1, r1, #16	@ 000102f8 0904
.org 0x102fa
	lsrs r7, r1, #16	@ 000102fa 0f0c
.org 0x102fc
	asrs r1, r1, #16	@ 000102fc 0914
.org 0x102fe
	adds r0, r1, r4	@ 000102fe 0819
.org 0x10300
	cmp r0, #66	@ 00010300 4228
.org 0x10302
	bgt.n 0x1032a	@ 00010302 12dc
.org 0x10304
	cmp r4, r5	@ 00010304 ac42
.org 0x10306
	bgt.n 0x1032a	@ 00010306 10dc
.org 0x10308
	adds r3, r1, #0	@ 00010308 0b1c
.org 0x1030a
	lsls r0, r4, #16	@ 0001030a 2004
.org 0x1030c
	movs r1, #134	@ 0001030c 8621
.org 0x1030e
	lsls r1, r1, #15	@ 0001030e c903
.org 0x10310
	subs r1, r1, r0	@ 00010310 091a
.org 0x10312
	lsls r2, r4, #2	@ 00010312 a200
.org 0x10314
	add r2, r8	@ 00010314 4244
.org 0x10316
	ldr r0, [pc, #308]	@ 00010316 4d48
.org 0x10318
	mov ip, r0	@ 00010318 8446
.org 0x1031a
	stmia r2!, {r1}	@ 0001031a 02c2
.org 0x1031c
	add r1, ip	@ 0001031c 6144
.org 0x1031e
	adds r4, #1	@ 0001031e 0134
.org 0x10320
	adds r0, r3, r4	@ 00010320 1819
.org 0x10322
	cmp r0, #66	@ 00010322 4228
.org 0x10324
	bgt.n 0x1032a	@ 00010324 01dc
.org 0x10326
	cmp r4, r5	@ 00010326 ac42
.org 0x10328
	ble.n 0x1031a	@ 00010328 f7dd
.org 0x1032a
	lsls r2, r7, #16	@ 0001032a 3a04
.org 0x1032c
	asrs r0, r2, #16	@ 0001032c 1014
.org 0x1032e
	adds r0, r0, r4	@ 0001032e 0019
.org 0x10330
	cmp r0, #75	@ 00010330 4b28
.org 0x10332
	bgt.n 0x10352	@ 00010332 0edc
.org 0x10334
	cmp r4, r5	@ 00010334 ac42
.org 0x10336
	bgt.n 0x10352	@ 00010336 0cdc
.org 0x10338
	lsls r0, r4, #2	@ 00010338 a000
.org 0x1033a
	mov r1, r8	@ 0001033a 4146
.org 0x1033c
	adds r3, r0, r1	@ 0001033c 4318
.org 0x1033e
	asrs r1, r2, #16	@ 0001033e 1114
.org 0x10340
	adds r0, r2, #0	@ 00010340 101c
.org 0x10342
	orrs r0, r6	@ 00010342 3043
.org 0x10344
	stmia r3!, {r0}	@ 00010344 01c3
.org 0x10346
	adds r4, #1	@ 00010346 0134
.org 0x10348
	adds r1, r1, r4	@ 00010348 0919
.org 0x1034a
	cmp r1, #75	@ 0001034a 4b29
.org 0x1034c
	bgt.n 0x10352	@ 0001034c 01dc
.org 0x1034e
	cmp r4, r5	@ 0001034e ac42
.org 0x10350
	ble.n 0x1033e	@ 00010350 f5dd
.org 0x10352
	mov r2, r9	@ 00010352 4a46
.org 0x10354
	ldr r0, [r2, #104]	@ 00010354 906e
.org 0x10356
	lsls r0, r0, #1	@ 00010356 4000
.org 0x10358
	asrs r0, r0, #7	@ 00010358 c011
.org 0x1035a
	add r0, sl	@ 0001035a 5044
.org 0x1035c
	lsls r0, r0, #16	@ 0001035c 0004
.org 0x1035e
	lsrs r6, r0, #16	@ 0001035e 060c
.org 0x10360
	ldr r0, [sp, #4]	@ 00010360 0198
.org 0x10362
	asrs r1, r0, #16	@ 00010362 0114
.org 0x10364
	ldr r2, [pc, #220]	@ 00010364 374a
.org 0x10366
	adds r0, r1, r2	@ 00010366 8818
.org 0x10368
	cmp r0, #0	@ 00010368 0028
.org 0x1036a
	bge.n 0x10370	@ 0001036a 01da
.org 0x1036c
	adds r2, #7	@ 0001036c 0732
.org 0x1036e
	adds r0, r1, r2	@ 0001036e 8818
.org 0x10370
	asrs r0, r0, #3	@ 00010370 c010
.org 0x10372
	adds r0, #20	@ 00010372 1430
.org 0x10374
	ldr r2, [pc, #208]	@ 00010374 344a
.org 0x10376
	asrs r1, r2, #16	@ 00010376 1114
.org 0x10378
	adds r1, r1, r0	@ 00010378 0918
.org 0x1037a
	lsls r1, r1, #16	@ 0001037a 0904
.org 0x1037c
	lsrs r7, r1, #16	@ 0001037c 0f0c
.org 0x1037e
	asrs r1, r1, #16	@ 0001037e 0914
.org 0x10380
	adds r0, r1, r4	@ 00010380 0819
.org 0x10382
	cmp r0, #75	@ 00010382 4b28
.org 0x10384
	bgt.n 0x103ac	@ 00010384 12dc
.org 0x10386
	cmp r4, r5	@ 00010386 ac42
.org 0x10388
	bgt.n 0x103ac	@ 00010388 10dc
.org 0x1038a
	adds r3, r1, #0	@ 0001038a 0b1c
.org 0x1038c
	lsls r0, r4, #16	@ 0001038c 2004
.org 0x1038e
	movs r1, #152	@ 0001038e 9821
.org 0x10390
	lsls r1, r1, #15	@ 00010390 c903
.org 0x10392
	subs r1, r1, r0	@ 00010392 091a
.org 0x10394
	lsls r2, r4, #2	@ 00010394 a200
.org 0x10396
	add r2, r8	@ 00010396 4244
.org 0x10398
	ldr r0, [pc, #176]	@ 00010398 2c48
.org 0x1039a
	mov ip, r0	@ 0001039a 8446
.org 0x1039c
	stmia r2!, {r1}	@ 0001039c 02c2
.org 0x1039e
	add r1, ip	@ 0001039e 6144
.org 0x103a0
	adds r4, #1	@ 000103a0 0134
.org 0x103a2
	adds r0, r3, r4	@ 000103a2 1819
.org 0x103a4
	cmp r0, #75	@ 000103a4 4b28
.org 0x103a6
	bgt.n 0x103ac	@ 000103a6 01dc
.org 0x103a8
	cmp r4, r5	@ 000103a8 ac42
.org 0x103aa
	ble.n 0x1039c	@ 000103aa f7dd
.org 0x103ac
	lsls r2, r7, #16	@ 000103ac 3a04
.org 0x103ae
	asrs r0, r2, #16	@ 000103ae 1014
.org 0x103b0
	adds r0, r0, r4	@ 000103b0 0019
.org 0x103b2
	cmp r0, #91	@ 000103b2 5b28
.org 0x103b4
	bgt.n 0x103d4	@ 000103b4 0edc
.org 0x103b6
	cmp r4, r5	@ 000103b6 ac42
.org 0x103b8
	bgt.n 0x103d4	@ 000103b8 0cdc
.org 0x103ba
	lsls r0, r4, #2	@ 000103ba a000
.org 0x103bc
	mov r1, r8	@ 000103bc 4146
.org 0x103be
	adds r3, r0, r1	@ 000103be 4318
.org 0x103c0
	asrs r1, r2, #16	@ 000103c0 1114
.org 0x103c2
	adds r0, r2, #0	@ 000103c2 101c
.org 0x103c4
	orrs r0, r6	@ 000103c4 3043
.org 0x103c6
	stmia r3!, {r0}	@ 000103c6 01c3
.org 0x103c8
	adds r4, #1	@ 000103c8 0134
.org 0x103ca
	adds r1, r1, r4	@ 000103ca 0919
.org 0x103cc
	cmp r1, #91	@ 000103cc 5b29
.org 0x103ce
	bgt.n 0x103d4	@ 000103ce 01dc
.org 0x103d0
	cmp r4, r5	@ 000103d0 ac42
.org 0x103d2
	ble.n 0x103c0	@ 000103d2 f5dd
.org 0x103d4
	mov r2, r9	@ 000103d4 4a46
.org 0x103d6
	ldr r0, [r2, #52]	@ 000103d6 506b
.org 0x103d8
	lsls r0, r0, #9	@ 000103d8 4002
.org 0x103da
	lsrs r6, r0, #16	@ 000103da 060c
.org 0x103dc
	ldr r0, [sp, #4]	@ 000103dc 0198
.org 0x103de
	ldr r2, [pc, #112]	@ 000103de 1c4a
.org 0x103e0
	adds r1, r0, r2	@ 000103e0 8118
.org 0x103e2
	asrs r1, r1, #22	@ 000103e2 8915
.org 0x103e4
	adds r1, #3	@ 000103e4 0331
.org 0x103e6
	ldr r2, [pc, #96]	@ 000103e6 184a
.org 0x103e8
	asrs r0, r2, #16	@ 000103e8 1014
.org 0x103ea
	adds r0, r0, r1	@ 000103ea 4018
.org 0x103ec
	lsls r0, r0, #16	@ 000103ec 0004
.org 0x103ee
	lsrs r7, r0, #16	@ 000103ee 070c
.org 0x103f0
	asrs r1, r0, #16	@ 000103f0 0114
.org 0x103f2
	adds r0, r1, r4	@ 000103f2 0819
.org 0x103f4
	cmp r0, #91	@ 000103f4 5b28
.org 0x103f6
	bgt.n 0x1041e	@ 000103f6 12dc
.org 0x103f8
	cmp r4, r5	@ 000103f8 ac42
.org 0x103fa
	bgt.n 0x10432	@ 000103fa 1adc
.org 0x103fc
	adds r3, r1, #0	@ 000103fc 0b1c
.org 0x103fe
	lsls r0, r4, #16	@ 000103fe 2004
.org 0x10400
	movs r1, #184	@ 00010400 b821
.org 0x10402
	lsls r1, r1, #15	@ 00010402 c903
.org 0x10404
	subs r1, r1, r0	@ 00010404 091a
.org 0x10406
	lsls r2, r4, #2	@ 00010406 a200
.org 0x10408
	add r2, r8	@ 00010408 4244
.org 0x1040a
	ldr r0, [pc, #64]	@ 0001040a 1048
.org 0x1040c
	mov ip, r0	@ 0001040c 8446
.org 0x1040e
	stmia r2!, {r1}	@ 0001040e 02c2
.org 0x10410
	add r1, ip	@ 00010410 6144
.org 0x10412
	adds r4, #1	@ 00010412 0134
.org 0x10414
	adds r0, r3, r4	@ 00010414 1819
.org 0x10416
	cmp r0, #91	@ 00010416 5b28
.org 0x10418
	bgt.n 0x1041e	@ 00010418 01dc
.org 0x1041a
	cmp r4, r5	@ 0001041a ac42
.org 0x1041c
	ble.n 0x1040e	@ 0001041c f7dd
.org 0x1041e
	cmp r4, r5	@ 0001041e ac42
.org 0x10420
	bgt.n 0x10432	@ 00010420 07dc
.org 0x10422
	lsls r1, r7, #16	@ 00010422 3904
.org 0x10424
	orrs r1, r6	@ 00010424 3143
.org 0x10426
	lsls r0, r4, #2	@ 00010426 a000
.org 0x10428
	add r0, r8	@ 00010428 4044
