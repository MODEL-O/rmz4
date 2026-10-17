@ FUN_0800dc70  entry 0x0800dc70  size 852
.thumb
.org 0xdc70
FUN_0800dc70:
	push {r4, r5, r6, r7, lr}	@ 0000dc70 f0b5
.org 0xdc72
	mov r7, sl	@ 0000dc72 5746
.org 0xdc74
	mov r6, r9	@ 0000dc74 4e46
.org 0xdc76
	mov r5, r8	@ 0000dc76 4546
.org 0xdc78
	push {r5, r6, r7}	@ 0000dc78 e0b4
.org 0xdc7a
	sub sp, #20	@ 0000dc7a 85b0
.org 0xdc7c
	adds r6, r0, #0	@ 0000dc7c 061c
.org 0xdc7e
	movs r4, #159	@ 0000dc7e 9f24
.org 0xdc80
	movs r0, #160	@ 0000dc80 a020
.org 0xdc82
	lsls r0, r0, #2	@ 0000dc82 8000
.org 0xdc84
	bl 0xa70	@ 0000dc84 f2f7f4fe
.org 0xdc88
	mov sl, r0	@ 0000dc88 8246
.org 0xdc8a
	cmp r0, #0	@ 0000dc8a 0028
.org 0xdc8c
	bne.n 0xdc90	@ 0000dc8c 00d1
.org 0xdc8e
	b.n 0xdfb4	@ 0000dc8e 91e1
.org 0xdc90
	ldr r2, [pc, #820]	@ 0000dc90 cd4a
.org 0xdc92
	movs r1, #186	@ 0000dc92 ba21
.org 0xdc94
	lsls r1, r1, #1	@ 0000dc94 4900
.org 0xdc96
	adds r0, r2, r1	@ 0000dc96 5018
.org 0xdc98
	mov r3, sl	@ 0000dc98 5346
.org 0xdc9a
	str r3, [r0, #0]	@ 0000dc9a 0360
.org 0xdc9c
	movs r0, #188	@ 0000dc9c bc20
.org 0xdc9e
	lsls r0, r0, #1	@ 0000dc9e 4000
.org 0xdca0
	adds r1, r2, r0	@ 0000dca0 1118
.org 0xdca2
	ldr r0, [pc, #808]	@ 0000dca2 ca48
.org 0xdca4
	str r0, [r1, #0]	@ 0000dca4 0860
.org 0xdca6
	movs r3, #190	@ 0000dca6 be23
.org 0xdca8
	lsls r3, r3, #1	@ 0000dca8 5b00
.org 0xdcaa
	adds r1, r2, r3	@ 0000dcaa d118
.org 0xdcac
	ldr r0, [pc, #800]	@ 0000dcac c848
.org 0xdcae
	str r0, [r1, #0]	@ 0000dcae 0860
.org 0xdcb0
	ldr r0, [r6, #52]	@ 0000dcb0 706b
.org 0xdcb2
	lsls r0, r0, #13	@ 0000dcb2 4003
.org 0xdcb4
	lsrs r5, r0, #16	@ 0000dcb4 050c
.org 0xdcb6
	ldr r0, [r6, #56]	@ 0000dcb6 b06b
.org 0xdcb8
	ldr r1, [pc, #792]	@ 0000dcb8 c649
.org 0xdcba
	adds r0, r0, r1	@ 0000dcba 4018
.org 0xdcbc
	asrs r0, r0, #4	@ 0000dcbc 0011
.org 0xdcbe
	adds r0, #32	@ 0000dcbe 2030
.org 0xdcc0
	lsls r0, r0, #16	@ 0000dcc0 0004
.org 0xdcc2
	asrs r2, r0, #16	@ 0000dcc2 0214
.org 0xdcc4
	adds r0, r2, #0	@ 0000dcc4 101c
.org 0xdcc6
	adds r0, #159	@ 0000dcc6 9f30
.org 0xdcc8
	adds r7, r6, #0	@ 0000dcc8 371c
.org 0xdcca
	adds r7, #104	@ 0000dcca 6837
.org 0xdccc
	movs r3, #106	@ 0000dccc 6a23
.org 0xdcce
	adds r3, r3, r6	@ 0000dcce 9b19
.org 0xdcd0
	mov r9, r3	@ 0000dcd0 9946
.org 0xdcd2
	adds r1, r6, #0	@ 0000dcd2 311c
.org 0xdcd4
	adds r1, #108	@ 0000dcd4 6c31
.org 0xdcd6
	str r1, [sp, #4]	@ 0000dcd6 0191
.org 0xdcd8
	adds r3, r6, #0	@ 0000dcd8 331c
.org 0xdcda
	adds r3, #110	@ 0000dcda 6e33
.org 0xdcdc
	str r3, [sp, #8]	@ 0000dcdc 0293
.org 0xdcde
	adds r1, #4	@ 0000dcde 0431
.org 0xdce0
	str r1, [sp, #12]	@ 0000dce0 0391
.org 0xdce2
	cmp r0, #86	@ 0000dce2 5628
.org 0xdce4
	ble.n 0xdd02	@ 0000dce4 0ddd
.org 0xdce6
	movs r1, #159	@ 0000dce6 9f21
.org 0xdce8
	lsls r1, r1, #2	@ 0000dce8 8900
.org 0xdcea
	add r1, sl	@ 0000dcea 5144
.org 0xdcec
	adds r3, r2, #0	@ 0000dcec 131c
.org 0xdcee
	lsls r2, r3, #16	@ 0000dcee 1a04
.org 0xdcf0
	orrs r2, r5	@ 0000dcf0 2a43
.org 0xdcf2
	str r2, [r1, #0]	@ 0000dcf2 0a60
.org 0xdcf4
	subs r1, #4	@ 0000dcf4 0439
.org 0xdcf6
	subs r4, #1	@ 0000dcf6 013c
.org 0xdcf8
	cmp r4, #0	@ 0000dcf8 002c
.org 0xdcfa
	blt.n 0xdd02	@ 0000dcfa 02db
.org 0xdcfc
	adds r0, r3, r4	@ 0000dcfc 1819
.org 0xdcfe
	cmp r0, #86	@ 0000dcfe 5628
.org 0xdd00
	bgt.n 0xdcf2	@ 0000dd00 f7dc
.org 0xdd02
	lsls r2, r4, #16	@ 0000dd02 2204
.org 0xdd04
	ldrh r0, [r7, #0]	@ 0000dd04 3888
.org 0xdd06
	lsrs r0, r0, #4	@ 0000dd06 0009
.org 0xdd08
	ldr r1, [r6, #52]	@ 0000dd08 716b
.org 0xdd0a
	asrs r1, r1, #2	@ 0000dd0a 8910
.org 0xdd0c
	adds r0, r0, r1	@ 0000dd0c 4018
.org 0xdd0e
	lsls r0, r0, #16	@ 0000dd0e 0004
.org 0xdd10
	lsrs r5, r0, #16	@ 0000dd10 050c
.org 0xdd12
	ldr r0, [r6, #56]	@ 0000dd12 b06b
.org 0xdd14
	ldr r3, [pc, #704]	@ 0000dd14 b04b
.org 0xdd16
	adds r0, r0, r3	@ 0000dd16 c018
.org 0xdd18
	asrs r0, r0, #4	@ 0000dd18 0011
.org 0xdd1a
	adds r0, #24	@ 0000dd1a 1830
.org 0xdd1c
	lsls r0, r0, #16	@ 0000dd1c 0004
.org 0xdd1e
	lsrs r1, r0, #16	@ 0000dd1e 010c
.org 0xdd20
	movs r4, #0	@ 0000dd20 0024
.org 0xdd22
	lsrs r0, r2, #16	@ 0000dd22 100c
.org 0xdd24
	mov r8, r0	@ 0000dd24 8046
.org 0xdd26
	asrs r2, r2, #16	@ 0000dd26 1214
.org 0xdd28
	cmp r4, r2	@ 0000dd28 9442
.org 0xdd2a
	bgt.n 0xdd4a	@ 0000dd2a 0edc
.org 0xdd2c
	lsls r0, r1, #16	@ 0000dd2c 0804
.org 0xdd2e
	asrs r0, r0, #16	@ 0000dd2e 0014
.org 0xdd30
	cmp r0, #36	@ 0000dd30 2428
.org 0xdd32
	bgt.n 0xdd4a	@ 0000dd32 0adc
.org 0xdd34
	mov r7, sl	@ 0000dd34 5746
.org 0xdd36
	adds r3, r0, #0	@ 0000dd36 031c
.org 0xdd38
	lsls r1, r3, #16	@ 0000dd38 1904
.org 0xdd3a
	orrs r1, r5	@ 0000dd3a 2943
.org 0xdd3c
	stmia r7!, {r1}	@ 0000dd3c 02c7
.org 0xdd3e
	adds r4, #1	@ 0000dd3e 0134
.org 0xdd40
	cmp r4, r2	@ 0000dd40 9442
.org 0xdd42
	bgt.n 0xdd4a	@ 0000dd42 02dc
.org 0xdd44
	adds r0, r3, r4	@ 0000dd44 1819
.org 0xdd46
	cmp r0, #36	@ 0000dd46 2428
.org 0xdd48
	ble.n 0xdd3c	@ 0000dd48 f8dd
.org 0xdd4a
	mov r1, r9	@ 0000dd4a 4946
.org 0xdd4c
	ldrh r0, [r1, #0]	@ 0000dd4c 0888
.org 0xdd4e
	lsrs r0, r0, #4	@ 0000dd4e 0009
.org 0xdd50
	ldr r1, [r6, #52]	@ 0000dd50 716b
.org 0xdd52
	asrs r1, r1, #3	@ 0000dd52 c910
.org 0xdd54
	adds r0, r0, r1	@ 0000dd54 4018
.org 0xdd56
	lsls r0, r0, #16	@ 0000dd56 0004
.org 0xdd58
	lsrs r5, r0, #16	@ 0000dd58 050c
.org 0xdd5a
	ldr r0, [r6, #56]	@ 0000dd5a b06b
.org 0xdd5c
	ldr r2, [pc, #632]	@ 0000dd5c 9e4a
.org 0xdd5e
	adds r0, r0, r2	@ 0000dd5e 8018
.org 0xdd60
	asrs r0, r0, #5	@ 0000dd60 4011
.org 0xdd62
	adds r0, #24	@ 0000dd62 1830
.org 0xdd64
	lsls r0, r0, #16	@ 0000dd64 0004
.org 0xdd66
	lsrs r1, r0, #16	@ 0000dd66 010c
.org 0xdd68
	mov r3, r8	@ 0000dd68 4346
.org 0xdd6a
	lsls r0, r3, #16	@ 0000dd6a 1804
.org 0xdd6c
	asrs r2, r0, #16	@ 0000dd6c 0214
.org 0xdd6e
	str r0, [sp, #0]	@ 0000dd6e 0090
.org 0xdd70
	cmp r4, r2	@ 0000dd70 9442
.org 0xdd72
	bgt.n 0xdde0	@ 0000dd72 35dc
.org 0xdd74
	lsls r0, r1, #16	@ 0000dd74 0804
.org 0xdd76
	asrs r3, r0, #16	@ 0000dd76 0314
.org 0xdd78
	adds r1, r3, r4	@ 0000dd78 1919
.org 0xdd7a
	adds r7, r0, #0	@ 0000dd7a 071c
.org 0xdd7c
	cmp r1, #36	@ 0000dd7c 2429
.org 0xdd7e
	bgt.n 0xddb6	@ 0000dd7e 1adc
.org 0xdd80
	mov r8, r5	@ 0000dd80 a846
.org 0xdd82
	lsls r0, r4, #16	@ 0000dd82 2004
.org 0xdd84
	movs r1, #148	@ 0000dd84 9421
.org 0xdd86
	lsls r1, r1, #14	@ 0000dd86 8903
.org 0xdd88
	subs r1, r1, r0	@ 0000dd88 091a
.org 0xdd8a
	lsls r0, r4, #2	@ 0000dd8a a000
.org 0xdd8c
	add r0, sl	@ 0000dd8c 5044
.org 0xdd8e
	mov ip, r0	@ 0000dd8e 8446
.org 0xdd90
	ldr r0, [pc, #584]	@ 0000dd90 9248
.org 0xdd92
	mov r9, r0	@ 0000dd92 8146
.org 0xdd94
	str r3, [sp, #16]	@ 0000dd94 0493
.org 0xdd96
	adds r0, r1, #0	@ 0000dd96 081c
.org 0xdd98
	mov r3, r8	@ 0000dd98 4346
.org 0xdd9a
	orrs r0, r3	@ 0000dd9a 1843
.org 0xdd9c
	mov r3, ip	@ 0000dd9c 6346
.org 0xdd9e
	adds r3, #4	@ 0000dd9e 0433
.org 0xdda0
	mov ip, r3	@ 0000dda0 9c46
.org 0xdda2
	subs r3, #4	@ 0000dda2 043b
.org 0xdda4
	stmia r3!, {r0}	@ 0000dda4 01c3
.org 0xdda6
	add r1, r9	@ 0000dda6 4944
.org 0xdda8
	adds r4, #1	@ 0000dda8 0134
.org 0xddaa
	cmp r4, r2	@ 0000ddaa 9442
.org 0xddac
	bgt.n 0xdde0	@ 0000ddac 18dc
.org 0xddae
	ldr r3, [sp, #16]	@ 0000ddae 049b
.org 0xddb0
	adds r0, r3, r4	@ 0000ddb0 1819
.org 0xddb2
	cmp r0, #36	@ 0000ddb2 2428
.org 0xddb4
	ble.n 0xdd96	@ 0000ddb4 efdd
.org 0xddb6
	ldr r0, [sp, #0]	@ 0000ddb6 0098
.org 0xddb8
	asrs r2, r0, #16	@ 0000ddb8 0214
.org 0xddba
	cmp r4, r2	@ 0000ddba 9442
.org 0xddbc
	bgt.n 0xdde0	@ 0000ddbc 10dc
.org 0xddbe
	asrs r1, r7, #16	@ 0000ddbe 3914
.org 0xddc0
	adds r0, r1, r4	@ 0000ddc0 0819
.org 0xddc2
	cmp r0, #52	@ 0000ddc2 3428
.org 0xddc4
	bgt.n 0xdde0	@ 0000ddc4 0cdc
.org 0xddc6
	lsls r0, r4, #2	@ 0000ddc6 a000
.org 0xddc8
	mov r3, sl	@ 0000ddc8 5346
.org 0xddca
	adds r7, r0, r3	@ 0000ddca c718
.org 0xddcc
	adds r3, r1, #0	@ 0000ddcc 0b1c
.org 0xddce
	lsls r1, r3, #16	@ 0000ddce 1904
.org 0xddd0
	orrs r1, r5	@ 0000ddd0 2943
.org 0xddd2
	stmia r7!, {r1}	@ 0000ddd2 02c7
.org 0xddd4
	adds r4, #1	@ 0000ddd4 0134
.org 0xddd6
	cmp r4, r2	@ 0000ddd6 9442
.org 0xddd8
	bgt.n 0xdde0	@ 0000ddd8 02dc
.org 0xddda
	adds r0, r3, r4	@ 0000ddda 1819
.org 0xdddc
	cmp r0, #52	@ 0000dddc 3428
.org 0xddde
	ble.n 0xddd2	@ 0000ddde f8dd
.org 0xdde0
	ldr r1, [sp, #4]	@ 0000dde0 0199
.org 0xdde2
	ldrh r0, [r1, #0]	@ 0000dde2 0888
.org 0xdde4
	lsrs r0, r0, #4	@ 0000dde4 0009
.org 0xdde6
	ldr r1, [r6, #52]	@ 0000dde6 716b
.org 0xdde8
	asrs r1, r1, #5	@ 0000dde8 4911
.org 0xddea
	adds r0, r0, r1	@ 0000ddea 4018
.org 0xddec
	lsls r0, r0, #16	@ 0000ddec 0004
.org 0xddee
	lsrs r5, r0, #16	@ 0000ddee 050c
.org 0xddf0
	ldr r0, [r6, #56]	@ 0000ddf0 b06b
.org 0xddf2
	ldr r2, [pc, #484]	@ 0000ddf2 794a
.org 0xddf4
	adds r0, r0, r2	@ 0000ddf4 8018
.org 0xddf6
	asrs r0, r0, #6	@ 0000ddf6 8011
.org 0xddf8
	adds r0, #24	@ 0000ddf8 1830
.org 0xddfa
	lsls r0, r0, #16	@ 0000ddfa 0004
.org 0xddfc
	lsrs r1, r0, #16	@ 0000ddfc 010c
.org 0xddfe
	ldr r3, [sp, #0]	@ 0000ddfe 009b
.org 0xde00
	asrs r2, r3, #16	@ 0000de00 1a14
.org 0xde02
	cmp r4, r2	@ 0000de02 9442
.org 0xde04
	bgt.n 0xde72	@ 0000de04 35dc
.org 0xde06
	lsls r0, r1, #16	@ 0000de06 0804
.org 0xde08
	asrs r3, r0, #16	@ 0000de08 0314
.org 0xde0a
	adds r1, r3, r4	@ 0000de0a 1919
.org 0xde0c
	adds r7, r0, #0	@ 0000de0c 071c
.org 0xde0e
	cmp r1, #52	@ 0000de0e 3429
.org 0xde10
	bgt.n 0xde48	@ 0000de10 1adc
.org 0xde12
	mov r8, r5	@ 0000de12 a846
.org 0xde14
	lsls r0, r4, #16	@ 0000de14 2004
.org 0xde16
	movs r1, #212	@ 0000de16 d421
.org 0xde18
	lsls r1, r1, #14	@ 0000de18 8903
.org 0xde1a
	subs r1, r1, r0	@ 0000de1a 091a
.org 0xde1c
	lsls r0, r4, #2	@ 0000de1c a000
.org 0xde1e
	add r0, sl	@ 0000de1e 5044
.org 0xde20
	mov ip, r0	@ 0000de20 8446
.org 0xde22
	ldr r0, [pc, #440]	@ 0000de22 6e48
.org 0xde24
	mov r9, r0	@ 0000de24 8146
.org 0xde26
	str r3, [sp, #16]	@ 0000de26 0493
.org 0xde28
	adds r0, r1, #0	@ 0000de28 081c
.org 0xde2a
	mov r3, r8	@ 0000de2a 4346
.org 0xde2c
	orrs r0, r3	@ 0000de2c 1843
.org 0xde2e
	mov r3, ip	@ 0000de2e 6346
.org 0xde30
	adds r3, #4	@ 0000de30 0433
.org 0xde32
	mov ip, r3	@ 0000de32 9c46
.org 0xde34
	subs r3, #4	@ 0000de34 043b
.org 0xde36
	stmia r3!, {r0}	@ 0000de36 01c3
.org 0xde38
	add r1, r9	@ 0000de38 4944
.org 0xde3a
	adds r4, #1	@ 0000de3a 0134
.org 0xde3c
	cmp r4, r2	@ 0000de3c 9442
.org 0xde3e
	bgt.n 0xde72	@ 0000de3e 18dc
.org 0xde40
	ldr r3, [sp, #16]	@ 0000de40 049b
.org 0xde42
	adds r0, r3, r4	@ 0000de42 1819
.org 0xde44
	cmp r0, #52	@ 0000de44 3428
.org 0xde46
	ble.n 0xde28	@ 0000de46 efdd
.org 0xde48
	ldr r0, [sp, #0]	@ 0000de48 0098
.org 0xde4a
	asrs r2, r0, #16	@ 0000de4a 0214
.org 0xde4c
	cmp r4, r2	@ 0000de4c 9442
.org 0xde4e
	bgt.n 0xde72	@ 0000de4e 10dc
.org 0xde50
	asrs r1, r7, #16	@ 0000de50 3914
.org 0xde52
	adds r0, r1, r4	@ 0000de52 0819
.org 0xde54
	cmp r0, #59	@ 0000de54 3b28
.org 0xde56
	bgt.n 0xde72	@ 0000de56 0cdc
.org 0xde58
	lsls r0, r4, #2	@ 0000de58 a000
.org 0xde5a
	mov r3, sl	@ 0000de5a 5346
.org 0xde5c
	adds r7, r0, r3	@ 0000de5c c718
.org 0xde5e
	adds r3, r1, #0	@ 0000de5e 0b1c
.org 0xde60
	lsls r1, r3, #16	@ 0000de60 1904
.org 0xde62
	orrs r1, r5	@ 0000de62 2943
.org 0xde64
	stmia r7!, {r1}	@ 0000de64 02c7
.org 0xde66
	adds r4, #1	@ 0000de66 0134
.org 0xde68
	cmp r4, r2	@ 0000de68 9442
.org 0xde6a
	bgt.n 0xde72	@ 0000de6a 02dc
.org 0xde6c
	adds r0, r3, r4	@ 0000de6c 1819
.org 0xde6e
	cmp r0, #59	@ 0000de6e 3b28
.org 0xde70
	ble.n 0xde64	@ 0000de70 f8dd
.org 0xde72
	ldr r1, [sp, #8]	@ 0000de72 0299
.org 0xde74
	ldrh r0, [r1, #0]	@ 0000de74 0888
.org 0xde76
	lsrs r0, r0, #4	@ 0000de76 0009
.org 0xde78
	ldr r1, [r6, #52]	@ 0000de78 716b
.org 0xde7a
	asrs r1, r1, #6	@ 0000de7a 8911
.org 0xde7c
	adds r0, r0, r1	@ 0000de7c 4018
.org 0xde7e
	lsls r0, r0, #16	@ 0000de7e 0004
.org 0xde80
	lsrs r5, r0, #16	@ 0000de80 050c
.org 0xde82
	ldr r0, [r6, #56]	@ 0000de82 b06b
.org 0xde84
	ldr r2, [pc, #336]	@ 0000de84 544a
.org 0xde86
	adds r0, r0, r2	@ 0000de86 8018
.org 0xde88
	asrs r0, r0, #7	@ 0000de88 c011
.org 0xde8a
	adds r0, #24	@ 0000de8a 1830
.org 0xde8c
	lsls r0, r0, #16	@ 0000de8c 0004
.org 0xde8e
	lsrs r1, r0, #16	@ 0000de8e 010c
.org 0xde90
	ldr r3, [sp, #0]	@ 0000de90 009b
.org 0xde92
	asrs r2, r3, #16	@ 0000de92 1a14
.org 0xde94
	cmp r4, r2	@ 0000de94 9442
.org 0xde96
	bgt.n 0xdf04	@ 0000de96 35dc
.org 0xde98
	lsls r0, r1, #16	@ 0000de98 0804
.org 0xde9a
	asrs r3, r0, #16	@ 0000de9a 0314
.org 0xde9c
	adds r1, r3, r4	@ 0000de9c 1919
.org 0xde9e
	adds r7, r0, #0	@ 0000de9e 071c
.org 0xdea0
	cmp r1, #59	@ 0000dea0 3b29
.org 0xdea2
	bgt.n 0xdeda	@ 0000dea2 1adc
.org 0xdea4
	mov r8, r5	@ 0000dea4 a846
.org 0xdea6
	lsls r0, r4, #16	@ 0000dea6 2004
.org 0xdea8
	movs r1, #240	@ 0000dea8 f021
.org 0xdeaa
	lsls r1, r1, #14	@ 0000deaa 8903
.org 0xdeac
	subs r1, r1, r0	@ 0000deac 091a
.org 0xdeae
	lsls r0, r4, #2	@ 0000deae a000
.org 0xdeb0
	add r0, sl	@ 0000deb0 5044
.org 0xdeb2
	mov ip, r0	@ 0000deb2 8446
.org 0xdeb4
	ldr r0, [pc, #292]	@ 0000deb4 4948
.org 0xdeb6
	mov r9, r0	@ 0000deb6 8146
.org 0xdeb8
	str r3, [sp, #16]	@ 0000deb8 0493
.org 0xdeba
	adds r0, r1, #0	@ 0000deba 081c
.org 0xdebc
	mov r3, r8	@ 0000debc 4346
.org 0xdebe
	orrs r0, r3	@ 0000debe 1843
.org 0xdec0
	mov r3, ip	@ 0000dec0 6346
.org 0xdec2
	adds r3, #4	@ 0000dec2 0433
.org 0xdec4
	mov ip, r3	@ 0000dec4 9c46
.org 0xdec6
	subs r3, #4	@ 0000dec6 043b
.org 0xdec8
	stmia r3!, {r0}	@ 0000dec8 01c3
.org 0xdeca
	add r1, r9	@ 0000deca 4944
.org 0xdecc
	adds r4, #1	@ 0000decc 0134
.org 0xdece
	cmp r4, r2	@ 0000dece 9442
.org 0xded0
	bgt.n 0xdf04	@ 0000ded0 18dc
.org 0xded2
	ldr r3, [sp, #16]	@ 0000ded2 049b
.org 0xded4
	adds r0, r3, r4	@ 0000ded4 1819
.org 0xded6
	cmp r0, #59	@ 0000ded6 3b28
.org 0xded8
	ble.n 0xdeba	@ 0000ded8 efdd
.org 0xdeda
	ldr r0, [sp, #0]	@ 0000deda 0098
.org 0xdedc
	asrs r2, r0, #16	@ 0000dedc 0214
.org 0xdede
	cmp r4, r2	@ 0000dede 9442
.org 0xdee0
	bgt.n 0xdf04	@ 0000dee0 10dc
.org 0xdee2
	asrs r1, r7, #16	@ 0000dee2 3914
.org 0xdee4
	adds r0, r1, r4	@ 0000dee4 0819
.org 0xdee6
	cmp r0, #67	@ 0000dee6 4328
.org 0xdee8
	bgt.n 0xdf04	@ 0000dee8 0cdc
.org 0xdeea
	lsls r0, r4, #2	@ 0000deea a000
.org 0xdeec
	mov r3, sl	@ 0000deec 5346
.org 0xdeee
	adds r7, r0, r3	@ 0000deee c718
.org 0xdef0
	adds r3, r1, #0	@ 0000def0 0b1c
.org 0xdef2
	lsls r1, r3, #16	@ 0000def2 1904
.org 0xdef4
	orrs r1, r5	@ 0000def4 2943
.org 0xdef6
	stmia r7!, {r1}	@ 0000def6 02c7
.org 0xdef8
	adds r4, #1	@ 0000def8 0134
.org 0xdefa
	cmp r4, r2	@ 0000defa 9442
.org 0xdefc
	bgt.n 0xdf04	@ 0000defc 02dc
.org 0xdefe
	adds r0, r3, r4	@ 0000defe 1819
.org 0xdf00
	cmp r0, #67	@ 0000df00 4328
.org 0xdf02
	ble.n 0xdef6	@ 0000df02 f8dd
.org 0xdf04
	ldr r1, [sp, #12]	@ 0000df04 0399
.org 0xdf06
	ldrh r0, [r1, #0]	@ 0000df06 0888
.org 0xdf08
	lsrs r0, r0, #4	@ 0000df08 0009
.org 0xdf0a
	ldr r1, [r6, #52]	@ 0000df0a 716b
.org 0xdf0c
	asrs r1, r1, #7	@ 0000df0c c911
.org 0xdf0e
	adds r0, r0, r1	@ 0000df0e 4018
.org 0xdf10
	lsls r0, r0, #16	@ 0000df10 0004
.org 0xdf12
	lsrs r5, r0, #16	@ 0000df12 050c
.org 0xdf14
	ldr r0, [r6, #56]	@ 0000df14 b06b
.org 0xdf16
	ldr r2, [pc, #192]	@ 0000df16 304a
.org 0xdf18
	adds r0, r0, r2	@ 0000df18 8018
.org 0xdf1a
	asrs r0, r0, #8	@ 0000df1a 0012
.org 0xdf1c
	adds r0, #24	@ 0000df1c 1830
.org 0xdf1e
	lsls r0, r0, #16	@ 0000df1e 0004
.org 0xdf20
	lsrs r1, r0, #16	@ 0000df20 010c
.org 0xdf22
	ldr r3, [sp, #0]	@ 0000df22 009b
.org 0xdf24
	asrs r2, r3, #16	@ 0000df24 1a14
.org 0xdf26
	cmp r4, r2	@ 0000df26 9442
.org 0xdf28
	bgt.n 0xdfb4	@ 0000df28 44dc
.org 0xdf2a
	lsls r0, r1, #16	@ 0000df2a 0804
.org 0xdf2c
	asrs r3, r0, #16	@ 0000df2c 0314
.org 0xdf2e
	adds r1, r3, r4	@ 0000df2e 1919
.org 0xdf30
	adds r7, r0, #0	@ 0000df30 071c
.org 0xdf32
	cmp r1, #67	@ 0000df32 4329
.org 0xdf34
	bgt.n 0xdf68	@ 0000df34 18dc
.org 0xdf36
	mov r8, r5	@ 0000df36 a846
.org 0xdf38
	lsls r0, r4, #16	@ 0000df38 2004
.org 0xdf3a
	movs r1, #136	@ 0000df3a 8821
.org 0xdf3c
	lsls r1, r1, #15	@ 0000df3c c903
.org 0xdf3e
	subs r1, r1, r0	@ 0000df3e 091a
.org 0xdf40
	lsls r0, r4, #2	@ 0000df40 a000
.org 0xdf42
	add r0, sl	@ 0000df42 5044
.org 0xdf44
	mov r9, r0	@ 0000df44 8146
.org 0xdf46
	ldr r6, [pc, #148]	@ 0000df46 254e
.org 0xdf48
	mov ip, r6	@ 0000df48 b446
.org 0xdf4a
	adds r0, r1, #0	@ 0000df4a 081c
.org 0xdf4c
	mov r6, r8	@ 0000df4c 4646
.org 0xdf4e
	orrs r0, r6	@ 0000df4e 3043
.org 0xdf50
	mov r6, r9	@ 0000df50 4e46
.org 0xdf52
	adds r6, #4	@ 0000df52 0436
.org 0xdf54
	mov r9, r6	@ 0000df54 b146
.org 0xdf56
	subs r6, #4	@ 0000df56 043e
.org 0xdf58
	stmia r6!, {r0}	@ 0000df58 01c6
.org 0xdf5a
	add r1, ip	@ 0000df5a 6144
.org 0xdf5c
	adds r4, #1	@ 0000df5c 0134
.org 0xdf5e
	cmp r4, r2	@ 0000df5e 9442
.org 0xdf60
	bgt.n 0xdfb4	@ 0000df60 28dc
.org 0xdf62
	adds r0, r3, r4	@ 0000df62 1819
.org 0xdf64
	cmp r0, #67	@ 0000df64 4328
.org 0xdf66
	ble.n 0xdf4a	@ 0000df66 f0dd
.org 0xdf68
	ldr r0, [sp, #0]	@ 0000df68 0098
.org 0xdf6a
	asrs r2, r0, #16	@ 0000df6a 0214
.org 0xdf6c
	cmp r4, r2	@ 0000df6c 9442
.org 0xdf6e
	bgt.n 0xdfb4	@ 0000df6e 21dc
.org 0xdf70
	asrs r1, r7, #16	@ 0000df70 3914
.org 0xdf72
	adds r0, r1, r4	@ 0000df72 0819
.org 0xdf74
	cmp r0, #83	@ 0000df74 5328
.org 0xdf76
	bgt.n 0xdf92	@ 0000df76 0cdc
.org 0xdf78
	lsls r0, r4, #2	@ 0000df78 a000
.org 0xdf7a
	mov r3, sl	@ 0000df7a 5346
.org 0xdf7c
	adds r6, r0, r3	@ 0000df7c c618
.org 0xdf7e
	adds r3, r1, #0	@ 0000df7e 0b1c
.org 0xdf80
	lsls r1, r3, #16	@ 0000df80 1904
.org 0xdf82
	orrs r1, r5	@ 0000df82 2943
.org 0xdf84
	stmia r6!, {r1}	@ 0000df84 02c6
.org 0xdf86
	adds r4, #1	@ 0000df86 0134
.org 0xdf88
	cmp r4, r2	@ 0000df88 9442
.org 0xdf8a
	bgt.n 0xdfb4	@ 0000df8a 13dc
.org 0xdf8c
	adds r0, r3, r4	@ 0000df8c 1819
.org 0xdf8e
	cmp r0, #83	@ 0000df8e 5328
.org 0xdf90
	ble.n 0xdf84	@ 0000df90 f8dd
.org 0xdf92
	ldr r6, [sp, #0]	@ 0000df92 009e
.org 0xdf94
	asrs r0, r6, #16	@ 0000df94 3014
.org 0xdf96
	cmp r4, r0	@ 0000df96 8442
.org 0xdf98
	bgt.n 0xdfb4	@ 0000df98 0cdc
.org 0xdf9a
	adds r2, r0, #0	@ 0000df9a 021c
.org 0xdf9c
	lsls r0, r4, #16	@ 0000df9c 2004
.org 0xdf9e
	movs r1, #174	@ 0000df9e ae21
.org 0xdfa0
	lsls r1, r1, #15	@ 0000dfa0 c903
.org 0xdfa2
	subs r1, r1, r0	@ 0000dfa2 091a
.org 0xdfa4
	lsls r0, r4, #2	@ 0000dfa4 a000
.org 0xdfa6
	add r0, sl	@ 0000dfa6 5044
.org 0xdfa8
	ldr r3, [pc, #48]	@ 0000dfa8 0c4b
.org 0xdfaa
	stmia r0!, {r1}	@ 0000dfaa 02c0
.org 0xdfac
	adds r1, r1, r3	@ 0000dfac c918
.org 0xdfae
	adds r4, #1	@ 0000dfae 0134
.org 0xdfb0
	cmp r4, r2	@ 0000dfb0 9442
.org 0xdfb2
	ble.n 0xdfaa	@ 0000dfb2 fadd
.org 0xdfb4
	add sp, #20	@ 0000dfb4 05b0
.org 0xdfb6
	pop {r3, r4, r5}	@ 0000dfb6 38bc
.org 0xdfb8
	mov r8, r3	@ 0000dfb8 9846
.org 0xdfba
	mov r9, r4	@ 0000dfba a146
.org 0xdfbc
	mov sl, r5	@ 0000dfbc aa46
.org 0xdfbe
	pop {r4, r5, r6, r7}	@ 0000dfbe f0bc
.org 0xdfc0
	pop {r0}	@ 0000dfc0 01bc
.org 0xdfc2
	bx r0	@ 0000dfc2 0047
