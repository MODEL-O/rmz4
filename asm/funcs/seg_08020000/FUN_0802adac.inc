@ FUN_0802adac  entry 0x0802adac  size 1472
.thumb
.org 0x2adac
FUN_0802adac:
	push {r4, r5, r6, r7, lr}	@ 0002adac f0b5
.org 0x2adae
	mov r7, sl	@ 0002adae 5746
.org 0x2adb0
	mov r6, r9	@ 0002adb0 4e46
.org 0x2adb2
	mov r5, r8	@ 0002adb2 4546
.org 0x2adb4
	push {r5, r6, r7}	@ 0002adb4 e0b4
.org 0x2adb6
	sub sp, #56	@ 0002adb6 8eb0
.org 0x2adb8
	adds r6, r1, #0	@ 0002adb8 0e1c
.org 0x2adba
	lsls r0, r0, #24	@ 0002adba 0006
.org 0x2adbc
	lsrs r3, r0, #24	@ 0002adbc 030e
.org 0x2adbe
	movs r0, #0	@ 0002adbe 0020
.org 0x2adc0
	str r0, [sp, #48]	@ 0002adc0 0c90
.org 0x2adc2
	ldr r0, [r2, #0]	@ 0002adc2 1068
.org 0x2adc4
	str r0, [sp, #0]	@ 0002adc4 0090
.org 0x2adc6
	ldr r0, [r2, #4]	@ 0002adc6 5068
.org 0x2adc8
	str r0, [sp, #4]	@ 0002adc8 0190
.org 0x2adca
	movs r1, #0	@ 0002adca 0021
.org 0x2adcc
	str r1, [sp, #52]	@ 0002adcc 0d91
.org 0x2adce
	adds r0, r6, #0	@ 0002adce 301c
.org 0x2add0
	adds r0, #151	@ 0002add0 9730
.org 0x2add2
	ldrb r1, [r0, #0]	@ 0002add2 0178
.org 0x2add4
	movs r0, #240	@ 0002add4 f020
.org 0x2add6
	ands r0, r1	@ 0002add6 0840
.org 0x2add8
	cmp r0, #16	@ 0002add8 1028
.org 0x2adda
	bne.n 0x2ade0	@ 0002adda 01d1
.org 0x2addc
	movs r2, #1	@ 0002addc 0122
.org 0x2adde
	b.n 0x2adfe	@ 0002adde 0ee0
.org 0x2ade0
	cmp r0, #32	@ 0002ade0 2028
.org 0x2ade2
	bne.n 0x2adea	@ 0002ade2 02d1
.org 0x2ade4
	movs r0, #2	@ 0002ade4 0220
.org 0x2ade6
	str r0, [sp, #52]	@ 0002ade6 0d90
.org 0x2ade8
	b.n 0x2ae00	@ 0002ade8 0ae0
.org 0x2adea
	cmp r0, #48	@ 0002adea 3028
.org 0x2adec
	bne.n 0x2adf4	@ 0002adec 02d1
.org 0x2adee
	movs r1, #3	@ 0002adee 0321
.org 0x2adf0
	str r1, [sp, #52]	@ 0002adf0 0d91
.org 0x2adf2
	b.n 0x2ae00	@ 0002adf2 05e0
.org 0x2adf4
	movs r0, #15	@ 0002adf4 0f20
.org 0x2adf6
	ands r0, r1	@ 0002adf6 0840
.org 0x2adf8
	cmp r0, #6	@ 0002adf8 0628
.org 0x2adfa
	bne.n 0x2ae00	@ 0002adfa 01d1
.org 0x2adfc
	movs r2, #4	@ 0002adfc 0422
.org 0x2adfe
	str r2, [sp, #52]	@ 0002adfe 0d92
.org 0x2ae00
	ldr r0, [sp, #52]	@ 0002ae00 0d98
.org 0x2ae02
	cmp r0, #4	@ 0002ae02 0428
.org 0x2ae04
	bne.n 0x2ae0c	@ 0002ae04 02d1
.org 0x2ae06
	cmp r3, #6	@ 0002ae06 062b
.org 0x2ae08
	bls.n 0x2ae1e	@ 0002ae08 09d9
.org 0x2ae0a
	b.n 0x2b3d2	@ 0002ae0a e2e2
.org 0x2ae0c
	ldr r0, [pc, #60]	@ 0002ae0c 0f48
.org 0x2ae0e
	lsls r1, r3, #2	@ 0002ae0e 9900
.org 0x2ae10
	ldr r2, [sp, #52]	@ 0002ae10 0d9a
.org 0x2ae12
	adds r1, r2, r1	@ 0002ae12 5118
.org 0x2ae14
	adds r1, r1, r0	@ 0002ae14 0918
.org 0x2ae16
	ldrb r0, [r1, #0]	@ 0002ae16 0878
.org 0x2ae18
	cmp r0, #0	@ 0002ae18 0028
.org 0x2ae1a
	bne.n 0x2ae1e	@ 0002ae1a 00d1
.org 0x2ae1c
	b.n 0x2b3d2	@ 0002ae1c d9e2
.org 0x2ae1e
	movs r0, #255	@ 0002ae1e ff20
.org 0x2ae20
	mov sl, r0	@ 0002ae20 8246
.org 0x2ae22
	ldr r1, [sp, #52]	@ 0002ae22 0d99
.org 0x2ae24
	cmp r1, #2	@ 0002ae24 0229
.org 0x2ae26
	bne.n 0x2ae76	@ 0002ae26 26d1
.org 0x2ae28
	movs r5, #0	@ 0002ae28 0025
.org 0x2ae2a
	ldr r2, [pc, #36]	@ 0002ae2a 094a
.org 0x2ae2c
	adds r1, r2, #4	@ 0002ae2c 111d
.org 0x2ae2e
	ldr r0, [r1, #0]	@ 0002ae2e 0868
.org 0x2ae30
	cmp r0, r6	@ 0002ae30 b042
.org 0x2ae32
	bne.n 0x2ae36	@ 0002ae32 00d1
.org 0x2ae34
	b.n 0x2b3d2	@ 0002ae34 cde2
.org 0x2ae36
	adds r1, #4	@ 0002ae36 0431
.org 0x2ae38
	adds r5, #1	@ 0002ae38 0135
.org 0x2ae3a
	cmp r5, #11	@ 0002ae3a 0b2d
.org 0x2ae3c
	ble.n 0x2ae2e	@ 0002ae3c f7dd
.org 0x2ae3e
	movs r5, #0	@ 0002ae3e 0025
.org 0x2ae40
	ldr r0, [r2, #4]	@ 0002ae40 5068
.org 0x2ae42
	cmp r0, #0	@ 0002ae42 0028
.org 0x2ae44
	bne.n 0x2ae54	@ 0002ae44 06d1
.org 0x2ae46
	str r6, [r2, #4]	@ 0002ae46 5660
.org 0x2ae48
	mov sl, r5	@ 0002ae48 aa46
.org 0x2ae4a
	b.n 0x2ae6e	@ 0002ae4a 10e0
.org 0x2ae4c
	.byte 0x90,0x28,0x85,0x08	@ 0002ae4c data
.org 0x2ae50
	.byte 0x50,0xed,0x02,0x02	@ 0002ae50 data
.org 0x2ae54
	adds r5, #1	@ 0002ae54 0135
.org 0x2ae56
	cmp r5, #11	@ 0002ae56 0b2d
.org 0x2ae58
	bgt.n 0x2ae6e	@ 0002ae58 09dc
.org 0x2ae5a
	lsls r0, r5, #2	@ 0002ae5a a800
.org 0x2ae5c
	adds r1, r2, #4	@ 0002ae5c 111d
.org 0x2ae5e
	adds r1, r0, r1	@ 0002ae5e 4118
.org 0x2ae60
	ldr r0, [r1, #0]	@ 0002ae60 0868
.org 0x2ae62
	cmp r0, #0	@ 0002ae62 0028
.org 0x2ae64
	bne.n 0x2ae54	@ 0002ae64 f6d1
.org 0x2ae66
	str r6, [r1, #0]	@ 0002ae66 0e60
.org 0x2ae68
	lsls r0, r5, #24	@ 0002ae68 2806
.org 0x2ae6a
	lsrs r0, r0, #24	@ 0002ae6a 000e
.org 0x2ae6c
	mov sl, r0	@ 0002ae6c 8246
.org 0x2ae6e
	mov r2, sl	@ 0002ae6e 5246
.org 0x2ae70
	cmp r2, #255	@ 0002ae70 ff2a
.org 0x2ae72
	bne.n 0x2ae76	@ 0002ae72 00d1
.org 0x2ae74
	b.n 0x2b3d2	@ 0002ae74 ade2
.org 0x2ae76
	movs r0, #90	@ 0002ae76 5a20
.org 0x2ae78
	mov r8, r0	@ 0002ae78 8046
.org 0x2ae7a
	cmp r3, #24	@ 0002ae7a 182b
.org 0x2ae7c
	bne.n 0x2ae84	@ 0002ae7c 02d1
.org 0x2ae7e
	movs r1, #30	@ 0002ae7e 1e21
.org 0x2ae80
	mov r8, r1	@ 0002ae80 8846
.org 0x2ae82
	movs r3, #1	@ 0002ae82 0123
.org 0x2ae84
	cmp r3, #20	@ 0002ae84 142b
.org 0x2ae86
	bne.n 0x2ae8e	@ 0002ae86 02d1
.org 0x2ae88
	movs r2, #30	@ 0002ae88 1e22
.org 0x2ae8a
	mov r8, r2	@ 0002ae8a 9046
.org 0x2ae8c
	movs r3, #2	@ 0002ae8c 0223
.org 0x2ae8e
	cmp r3, #6	@ 0002ae8e 062b
.org 0x2ae90
	bls.n 0x2ae94	@ 0002ae90 00d9
.org 0x2ae92
	b.n 0x2afca	@ 0002ae92 9ae0
.org 0x2ae94
	ldr r0, [sp, #52]	@ 0002ae94 0d98
.org 0x2ae96
	cmp r0, #1	@ 0002ae96 0128
.org 0x2ae98
	bne.n 0x2aea8	@ 0002ae98 06d1
.org 0x2ae9a
	adds r0, r6, #0	@ 0002ae9a 301c
.org 0x2ae9c
	mov r1, sp	@ 0002ae9c 6946
.org 0x2ae9e
	mov r2, r8	@ 0002ae9e 4246
.org 0x2aea0
	bl 0xd3330	@ 0002aea0 a8f046fa
.org 0x2aea4
	str r0, [sp, #48]	@ 0002aea4 0c90
.org 0x2aea6
	b.n 0x2b378	@ 0002aea6 67e2
.org 0x2aea8
	ldr r1, [sp, #52]	@ 0002aea8 0d99
.org 0x2aeaa
	cmp r1, #2	@ 0002aeaa 0229
.org 0x2aeac
	bne.n 0x2af30	@ 0002aeac 40d1
.org 0x2aeae
	ldr r0, [sp, #0]	@ 0002aeae 0098
.org 0x2aeb0
	movs r4, #192	@ 0002aeb0 c024
.org 0x2aeb2
	lsls r4, r4, #3	@ 0002aeb2 e400
.org 0x2aeb4
	adds r0, r0, r4	@ 0002aeb4 0019
.org 0x2aeb6
	str r0, [sp, #0]	@ 0002aeb6 0090
.org 0x2aeb8
	ldr r0, [sp, #4]	@ 0002aeb8 0198
.org 0x2aeba
	ldr r2, [pc, #104]	@ 0002aeba 1a4a
.org 0x2aebc
	adds r0, r0, r2	@ 0002aebc 8018
.org 0x2aebe
	str r0, [sp, #4]	@ 0002aebe 0190
.org 0x2aec0
	adds r0, r6, #0	@ 0002aec0 301c
.org 0x2aec2
	mov r1, sp	@ 0002aec2 6946
.org 0x2aec4
	mov r2, r8	@ 0002aec4 4246
.org 0x2aec6
	mov r3, sl	@ 0002aec6 5346
.org 0x2aec8
	bl 0xd3518	@ 0002aec8 a8f026fb
.org 0x2aecc
	str r0, [sp, #48]	@ 0002aecc 0c90
.org 0x2aece
	ldr r0, [sp, #0]	@ 0002aece 0098
.org 0x2aed0
	ldr r1, [pc, #84]	@ 0002aed0 1549
.org 0x2aed2
	adds r0, r0, r1	@ 0002aed2 4018
.org 0x2aed4
	str r0, [sp, #0]	@ 0002aed4 0090
.org 0x2aed6
	ldr r0, [sp, #4]	@ 0002aed6 0198
.org 0x2aed8
	adds r0, r0, r4	@ 0002aed8 0019
.org 0x2aeda
	str r0, [sp, #4]	@ 0002aeda 0190
.org 0x2aedc
	adds r0, r6, #0	@ 0002aedc 301c
.org 0x2aede
	mov r1, sp	@ 0002aede 6946
.org 0x2aee0
	mov r2, r8	@ 0002aee0 4246
.org 0x2aee2
	bl 0xd357c	@ 0002aee2 a8f04bfb
.org 0x2aee6
	ldr r0, [sp, #0]	@ 0002aee6 0098
.org 0x2aee8
	movs r2, #128	@ 0002aee8 8022
.org 0x2aeea
	lsls r2, r2, #5	@ 0002aeea 5201
.org 0x2aeec
	adds r0, r0, r2	@ 0002aeec 8018
.org 0x2aeee
	str r0, [sp, #0]	@ 0002aeee 0090
.org 0x2aef0
	ldr r0, [sp, #4]	@ 0002aef0 0198
.org 0x2aef2
	movs r1, #128	@ 0002aef2 8021
.org 0x2aef4
	lsls r1, r1, #4	@ 0002aef4 0901
.org 0x2aef6
	adds r0, r0, r1	@ 0002aef6 4018
.org 0x2aef8
	str r0, [sp, #4]	@ 0002aef8 0190
.org 0x2aefa
	adds r0, r6, #0	@ 0002aefa 301c
.org 0x2aefc
	mov r1, sp	@ 0002aefc 6946
.org 0x2aefe
	mov r2, r8	@ 0002aefe 4246
.org 0x2af00
	bl 0xd357c	@ 0002af00 a8f03cfb
.org 0x2af04
	ldr r0, [sp, #0]	@ 0002af04 0098
.org 0x2af06
	ldr r2, [pc, #36]	@ 0002af06 094a
.org 0x2af08
	adds r0, r0, r2	@ 0002af08 8018
.org 0x2af0a
	str r0, [sp, #0]	@ 0002af0a 0090
.org 0x2af0c
	ldr r0, [sp, #4]	@ 0002af0c 0198
.org 0x2af0e
	movs r1, #128	@ 0002af0e 8021
.org 0x2af10
	lsls r1, r1, #2	@ 0002af10 8900
.org 0x2af12
	adds r0, r0, r1	@ 0002af12 4018
.org 0x2af14
	str r0, [sp, #4]	@ 0002af14 0190
.org 0x2af16
	adds r0, r6, #0	@ 0002af16 301c
.org 0x2af18
	mov r1, sp	@ 0002af18 6946
.org 0x2af1a
	mov r2, r8	@ 0002af1a 4246
.org 0x2af1c
	bl 0xd357c	@ 0002af1c a8f02efb
.org 0x2af20
	b.n 0x2b378	@ 0002af20 2ae2
.org 0x2af22
	.byte 0x00	@ 0002af22 data
.org 0x2af23
	.byte 0x00	@ 0002af23 data
.org 0x2af24
	.byte 0x00,0xf4,0xff,0xff	@ 0002af24 data
.org 0x2af28
	.byte 0x00,0xf2,0xff,0xff	@ 0002af28 data
.org 0x2af2c
	.byte 0x00,0xf6,0xff,0xff	@ 0002af2c data
.org 0x2af30
	ldr r2, [sp, #52]	@ 0002af30 0d9a
.org 0x2af32
	cmp r2, #3	@ 0002af32 032a
.org 0x2af34
	bne.n 0x2afb4	@ 0002af34 3ed1
.org 0x2af36
	ldr r0, [sp, #0]	@ 0002af36 0098
.org 0x2af38
	movs r4, #192	@ 0002af38 c024
.org 0x2af3a
	lsls r4, r4, #3	@ 0002af3a e400
.org 0x2af3c
	adds r0, r0, r4	@ 0002af3c 0019
.org 0x2af3e
	str r0, [sp, #0]	@ 0002af3e 0090
.org 0x2af40
	ldr r0, [sp, #4]	@ 0002af40 0198
.org 0x2af42
	ldr r1, [pc, #100]	@ 0002af42 1949
.org 0x2af44
	adds r0, r0, r1	@ 0002af44 4018
.org 0x2af46
	str r0, [sp, #4]	@ 0002af46 0190
.org 0x2af48
	adds r0, r6, #0	@ 0002af48 301c
.org 0x2af4a
	mov r1, sp	@ 0002af4a 6946
.org 0x2af4c
	mov r2, r8	@ 0002af4c 4246
.org 0x2af4e
	bl 0xd380c	@ 0002af4e a8f05dfc
.org 0x2af52
	str r0, [sp, #48]	@ 0002af52 0c90
.org 0x2af54
	ldr r0, [sp, #0]	@ 0002af54 0098
.org 0x2af56
	ldr r2, [pc, #84]	@ 0002af56 154a
.org 0x2af58
	adds r0, r0, r2	@ 0002af58 8018
.org 0x2af5a
	str r0, [sp, #0]	@ 0002af5a 0090
.org 0x2af5c
	ldr r0, [sp, #4]	@ 0002af5c 0198
.org 0x2af5e
	adds r0, r0, r4	@ 0002af5e 0019
.org 0x2af60
	str r0, [sp, #4]	@ 0002af60 0190
.org 0x2af62
	adds r0, r6, #0	@ 0002af62 301c
.org 0x2af64
	mov r1, sp	@ 0002af64 6946
.org 0x2af66
	mov r2, r8	@ 0002af66 4246
.org 0x2af68
	bl 0xd380c	@ 0002af68 a8f050fc
.org 0x2af6c
	ldr r0, [sp, #0]	@ 0002af6c 0098
.org 0x2af6e
	movs r1, #128	@ 0002af6e 8021
.org 0x2af70
	lsls r1, r1, #5	@ 0002af70 4901
.org 0x2af72
	adds r0, r0, r1	@ 0002af72 4018
.org 0x2af74
	str r0, [sp, #0]	@ 0002af74 0090
.org 0x2af76
	ldr r0, [sp, #4]	@ 0002af76 0198
.org 0x2af78
	movs r2, #128	@ 0002af78 8022
.org 0x2af7a
	lsls r2, r2, #4	@ 0002af7a 1201
.org 0x2af7c
	adds r0, r0, r2	@ 0002af7c 8018
.org 0x2af7e
	str r0, [sp, #4]	@ 0002af7e 0190
.org 0x2af80
	adds r0, r6, #0	@ 0002af80 301c
.org 0x2af82
	mov r1, sp	@ 0002af82 6946
.org 0x2af84
	mov r2, r8	@ 0002af84 4246
.org 0x2af86
	bl 0xd380c	@ 0002af86 a8f041fc
.org 0x2af8a
	ldr r0, [sp, #0]	@ 0002af8a 0098
.org 0x2af8c
	ldr r1, [pc, #32]	@ 0002af8c 0849
.org 0x2af8e
	adds r0, r0, r1	@ 0002af8e 4018
.org 0x2af90
	str r0, [sp, #0]	@ 0002af90 0090
.org 0x2af92
	ldr r0, [sp, #4]	@ 0002af92 0198
.org 0x2af94
	movs r2, #128	@ 0002af94 8022
.org 0x2af96
	lsls r2, r2, #2	@ 0002af96 9200
.org 0x2af98
	adds r0, r0, r2	@ 0002af98 8018
.org 0x2af9a
	str r0, [sp, #4]	@ 0002af9a 0190
.org 0x2af9c
	adds r0, r6, #0	@ 0002af9c 301c
.org 0x2af9e
	mov r1, sp	@ 0002af9e 6946
.org 0x2afa0
	mov r2, r8	@ 0002afa0 4246
.org 0x2afa2
	bl 0xd380c	@ 0002afa2 a8f033fc
.org 0x2afa6
	b.n 0x2b378	@ 0002afa6 e7e1
.org 0x2afa8
	.byte 0x00,0xf4,0xff,0xff	@ 0002afa8 data
.org 0x2afac
	.byte 0x00,0xf2,0xff,0xff	@ 0002afac data
.org 0x2afb0
	.byte 0x00,0xf6,0xff,0xff	@ 0002afb0 data
.org 0x2afb4
	ldr r0, [sp, #52]	@ 0002afb4 0d98
.org 0x2afb6
	cmp r0, #4	@ 0002afb6 0428
.org 0x2afb8
	beq.n 0x2afbc	@ 0002afb8 00d0
.org 0x2afba
	b.n 0x2b378	@ 0002afba dde1
.org 0x2afbc
	adds r0, r6, #0	@ 0002afbc 301c
.org 0x2afbe
	mov r1, sp	@ 0002afbe 6946
.org 0x2afc0
	mov r2, r8	@ 0002afc0 4246
.org 0x2afc2
	bl 0xe5b30	@ 0002afc2 baf0b5fd
.org 0x2afc6
	str r0, [sp, #48]	@ 0002afc6 0c90
.org 0x2afc8
	b.n 0x2b378	@ 0002afc8 d6e1
.org 0x2afca
	movs r1, #30	@ 0002afca 1e21
.org 0x2afcc
	mov r8, r1	@ 0002afcc 8846
.org 0x2afce
	ldr r2, [sp, #52]	@ 0002afce 0d9a
.org 0x2afd0
	cmp r2, #1	@ 0002afd0 012a
.org 0x2afd2
	bne.n 0x2b018	@ 0002afd2 21d1
.org 0x2afd4
	add r4, sp, #8	@ 0002afd4 02ac
.org 0x2afd6
	ldr r7, [pc, #40]	@ 0002afd6 0a4f
.org 0x2afd8
	movs r5, #6	@ 0002afd8 0625
.org 0x2afda
	ldr r0, [sp, #0]	@ 0002afda 0098
.org 0x2afdc
	ldr r1, [r7, #0]	@ 0002afdc 3968
.org 0x2afde
	adds r0, r0, r1	@ 0002afde 4018
.org 0x2afe0
	str r0, [sp, #8]	@ 0002afe0 0290
.org 0x2afe2
	ldr r0, [sp, #4]	@ 0002afe2 0198
.org 0x2afe4
	ldr r1, [r7, #4]	@ 0002afe4 7968
.org 0x2afe6
	adds r0, r0, r1	@ 0002afe6 4018
.org 0x2afe8
	str r0, [r4, #4]	@ 0002afe8 6060
.org 0x2afea
	ldr r0, [sp, #48]	@ 0002afea 0c98
.org 0x2afec
	cmp r0, #0	@ 0002afec 0028
.org 0x2afee
	bne.n 0x2b004	@ 0002afee 09d1
.org 0x2aff0
	adds r0, r6, #0	@ 0002aff0 301c
.org 0x2aff2
	adds r1, r4, #0	@ 0002aff2 211c
.org 0x2aff4
	mov r2, r8	@ 0002aff4 4246
.org 0x2aff6
	bl 0xd3330	@ 0002aff6 a8f09bf9
.org 0x2affa
	str r0, [sp, #48]	@ 0002affa 0c90
.org 0x2affc
	b.n 0x2b00e	@ 0002affc 07e0
.org 0x2affe
	.byte 0x00	@ 0002affe data
.org 0x2afff
	.byte 0x00	@ 0002afff data
.org 0x2b000
	.byte 0x08,0x29,0x85,0x08	@ 0002b000 data
.org 0x2b004
	adds r0, r6, #0	@ 0002b004 301c
.org 0x2b006
	adds r1, r4, #0	@ 0002b006 211c
.org 0x2b008
	mov r2, r8	@ 0002b008 4246
.org 0x2b00a
	bl 0xd3330	@ 0002b00a a8f091f9
.org 0x2b00e
	adds r7, #8	@ 0002b00e 0837
.org 0x2b010
	subs r5, #1	@ 0002b010 013d
.org 0x2b012
	cmp r5, #0	@ 0002b012 002d
.org 0x2b014
	bge.n 0x2afda	@ 0002b014 e1da
.org 0x2b016
	b.n 0x2b378	@ 0002b016 afe1
.org 0x2b018
	ldr r1, [sp, #52]	@ 0002b018 0d99
.org 0x2b01a
	cmp r1, #2	@ 0002b01a 0229
.org 0x2b01c
	beq.n 0x2b020	@ 0002b01c 00d0
.org 0x2b01e
	b.n 0x2b1e8	@ 0002b01e e3e0
.org 0x2b020
	cmp r3, #14	@ 0002b020 0e2b
.org 0x2b022
	beq.n 0x2b026	@ 0002b022 00d0
.org 0x2b024
	b.n 0x2b128	@ 0002b024 80e0
.org 0x2b026
	ldr r0, [sp, #0]	@ 0002b026 0098
.org 0x2b028
	movs r2, #192	@ 0002b028 c022
.org 0x2b02a
	lsls r2, r2, #3	@ 0002b02a d200
.org 0x2b02c
	adds r0, r0, r2	@ 0002b02c 8018
.org 0x2b02e
	str r0, [sp, #16]	@ 0002b02e 0490
.org 0x2b030
	ldr r0, [sp, #4]	@ 0002b030 0198
.org 0x2b032
	ldr r1, [pc, #220]	@ 0002b032 3749
.org 0x2b034
	adds r0, r0, r1	@ 0002b034 4018
.org 0x2b036
	add r4, sp, #16	@ 0002b036 04ac
.org 0x2b038
	str r0, [r4, #4]	@ 0002b038 6060
.org 0x2b03a
	adds r0, r6, #0	@ 0002b03a 301c
.org 0x2b03c
	adds r1, r4, #0	@ 0002b03c 211c
.org 0x2b03e
	movs r2, #30	@ 0002b03e 1e22
.org 0x2b040
	mov r3, sl	@ 0002b040 5346
.org 0x2b042
	bl 0xd3518	@ 0002b042 a8f069fa
.org 0x2b046
	str r0, [sp, #48]	@ 0002b046 0c90
.org 0x2b048
	ldr r0, [sp, #0]	@ 0002b048 0098
.org 0x2b04a
	ldr r2, [pc, #200]	@ 0002b04a 324a
.org 0x2b04c
	adds r0, r0, r2	@ 0002b04c 8018
.org 0x2b04e
	str r0, [sp, #16]	@ 0002b04e 0490
.org 0x2b050
	ldr r0, [sp, #4]	@ 0002b050 0198
.org 0x2b052
	ldr r5, [pc, #196]	@ 0002b052 314d
.org 0x2b054
	adds r0, r0, r5	@ 0002b054 4019
.org 0x2b056
	str r0, [r4, #4]	@ 0002b056 6060
.org 0x2b058
	adds r0, r6, #0	@ 0002b058 301c
.org 0x2b05a
	adds r1, r4, #0	@ 0002b05a 211c
.org 0x2b05c
	movs r2, #30	@ 0002b05c 1e22
.org 0x2b05e
	mov r3, sl	@ 0002b05e 5346
.org 0x2b060
	bl 0xd3518	@ 0002b060 a8f05afa
.org 0x2b064
	ldr r0, [sp, #0]	@ 0002b064 0098
.org 0x2b066
	adds r0, r0, r5	@ 0002b066 4019
.org 0x2b068
	str r0, [sp, #16]	@ 0002b068 0490
.org 0x2b06a
	ldr r0, [sp, #4]	@ 0002b06a 0198
.org 0x2b06c
	ldr r1, [pc, #172]	@ 0002b06c 2b49
.org 0x2b06e
	adds r0, r0, r1	@ 0002b06e 4018
.org 0x2b070
	str r0, [r4, #4]	@ 0002b070 6060
.org 0x2b072
	adds r0, r6, #0	@ 0002b072 301c
.org 0x2b074
	adds r1, r4, #0	@ 0002b074 211c
.org 0x2b076
	movs r2, #30	@ 0002b076 1e22
.org 0x2b078
	mov r3, sl	@ 0002b078 5346
.org 0x2b07a
	bl 0xd3518	@ 0002b07a a8f04dfa
.org 0x2b07e
	ldr r0, [sp, #0]	@ 0002b07e 0098
.org 0x2b080
	ldr r5, [pc, #156]	@ 0002b080 274d
.org 0x2b082
	adds r0, r0, r5	@ 0002b082 4019
.org 0x2b084
	str r0, [sp, #16]	@ 0002b084 0490
.org 0x2b086
	ldr r0, [sp, #4]	@ 0002b086 0198
.org 0x2b088
	ldr r2, [pc, #152]	@ 0002b088 264a
.org 0x2b08a
	adds r0, r0, r2	@ 0002b08a 8018
.org 0x2b08c
	str r0, [r4, #4]	@ 0002b08c 6060
.org 0x2b08e
	adds r0, r6, #0	@ 0002b08e 301c
.org 0x2b090
	adds r1, r4, #0	@ 0002b090 211c
.org 0x2b092
	movs r2, #30	@ 0002b092 1e22
.org 0x2b094
	mov r3, sl	@ 0002b094 5346
.org 0x2b096
	bl 0xd3518	@ 0002b096 a8f03ffa
.org 0x2b09a
	ldr r0, [sp, #0]	@ 0002b09a 0098
.org 0x2b09c
	movs r1, #192	@ 0002b09c c021
.org 0x2b09e
	lsls r1, r1, #4	@ 0002b09e 0901
.org 0x2b0a0
	adds r0, r0, r1	@ 0002b0a0 4018
.org 0x2b0a2
	str r0, [sp, #16]	@ 0002b0a2 0490
.org 0x2b0a4
	ldr r0, [sp, #4]	@ 0002b0a4 0198
.org 0x2b0a6
	ldr r2, [pc, #124]	@ 0002b0a6 1f4a
.org 0x2b0a8
	adds r0, r0, r2	@ 0002b0a8 8018
.org 0x2b0aa
	str r0, [r4, #4]	@ 0002b0aa 6060
.org 0x2b0ac
	adds r0, r6, #0	@ 0002b0ac 301c
.org 0x2b0ae
	adds r1, r4, #0	@ 0002b0ae 211c
.org 0x2b0b0
	movs r2, #30	@ 0002b0b0 1e22
.org 0x2b0b2
	mov r3, sl	@ 0002b0b2 5346
.org 0x2b0b4
	bl 0xd3518	@ 0002b0b4 a8f030fa
.org 0x2b0b8
	ldr r0, [sp, #0]	@ 0002b0b8 0098
.org 0x2b0ba
	movs r1, #224	@ 0002b0ba e021
.org 0x2b0bc
	lsls r1, r1, #4	@ 0002b0bc 0901
.org 0x2b0be
	adds r0, r0, r1	@ 0002b0be 4018
.org 0x2b0c0
	str r0, [sp, #16]	@ 0002b0c0 0490
.org 0x2b0c2
	ldr r0, [sp, #4]	@ 0002b0c2 0198
.org 0x2b0c4
	movs r2, #128	@ 0002b0c4 8022
.org 0x2b0c6
	lsls r2, r2, #4	@ 0002b0c6 1201
.org 0x2b0c8
	adds r0, r0, r2	@ 0002b0c8 8018
.org 0x2b0ca
	str r0, [r4, #4]	@ 0002b0ca 6060
.org 0x2b0cc
	adds r0, r6, #0	@ 0002b0cc 301c
.org 0x2b0ce
	adds r1, r4, #0	@ 0002b0ce 211c
.org 0x2b0d0
	movs r2, #30	@ 0002b0d0 1e22
.org 0x2b0d2
	mov r3, sl	@ 0002b0d2 5346
.org 0x2b0d4
	bl 0xd3518	@ 0002b0d4 a8f020fa
.org 0x2b0d8
	ldr r0, [sp, #0]	@ 0002b0d8 0098
.org 0x2b0da
	ldr r1, [pc, #72]	@ 0002b0da 1249
.org 0x2b0dc
	adds r0, r0, r1	@ 0002b0dc 4018
.org 0x2b0de
	str r0, [sp, #16]	@ 0002b0de 0490
.org 0x2b0e0
	ldr r0, [sp, #4]	@ 0002b0e0 0198
.org 0x2b0e2
	movs r2, #160	@ 0002b0e2 a022
.org 0x2b0e4
	lsls r2, r2, #4	@ 0002b0e4 1201
.org 0x2b0e6
	adds r0, r0, r2	@ 0002b0e6 8018
.org 0x2b0e8
	str r0, [r4, #4]	@ 0002b0e8 6060
.org 0x2b0ea
	adds r0, r6, #0	@ 0002b0ea 301c
.org 0x2b0ec
	adds r1, r4, #0	@ 0002b0ec 211c
.org 0x2b0ee
	movs r2, #30	@ 0002b0ee 1e22
.org 0x2b0f0
	mov r3, sl	@ 0002b0f0 5346
.org 0x2b0f2
	bl 0xd3518	@ 0002b0f2 a8f011fa
.org 0x2b0f6
	ldr r0, [sp, #0]	@ 0002b0f6 0098
.org 0x2b0f8
	adds r0, r0, r5	@ 0002b0f8 4019
.org 0x2b0fa
	str r0, [sp, #16]	@ 0002b0fa 0490
.org 0x2b0fc
	ldr r0, [sp, #4]	@ 0002b0fc 0198
.org 0x2b0fe
	str r0, [r4, #4]	@ 0002b0fe 6060
.org 0x2b100
	adds r0, r6, #0	@ 0002b100 301c
.org 0x2b102
	adds r1, r4, #0	@ 0002b102 211c
.org 0x2b104
	movs r2, #30	@ 0002b104 1e22
.org 0x2b106
	mov r3, sl	@ 0002b106 5346
.org 0x2b108
	bl 0xd3518	@ 0002b108 a8f006fa
.org 0x2b10c
	b.n 0x2b378	@ 0002b10c 34e1
.org 0x2b10e
	.byte 0x00	@ 0002b10e data
.org 0x2b10f
	.byte 0x00	@ 0002b10f data
.org 0x2b110
	.byte 0x00,0xea,0xff,0xff	@ 0002b110 data
.org 0x2b114
	.byte 0x00,0xf2,0xff,0xff	@ 0002b114 data
.org 0x2b118
	.byte 0x00,0xec,0xff,0xff	@ 0002b118 data
.org 0x2b11c
	.byte 0x00,0xfc,0xff,0xff	@ 0002b11c data
.org 0x2b120
	.byte 0x00,0xfe,0xff,0xff	@ 0002b120 data
.org 0x2b124
	.byte 0x00,0xf4,0xff,0xff	@ 0002b124 data
.org 0x2b128
	add r0, sp, #24	@ 0002b128 06a8
.org 0x2b12a
	mov r9, r0	@ 0002b12a 8146
.org 0x2b12c
	mov r4, r9	@ 0002b12c 4c46
.org 0x2b12e
	ldr r7, [pc, #60]	@ 0002b12e 0f4f
.org 0x2b130
	movs r5, #3	@ 0002b130 0325
.org 0x2b132
	ldr r0, [sp, #0]	@ 0002b132 0098
.org 0x2b134
	ldr r1, [r7, #0]	@ 0002b134 3968
.org 0x2b136
	adds r0, r0, r1	@ 0002b136 4018
.org 0x2b138
	str r0, [sp, #24]	@ 0002b138 0690
.org 0x2b13a
	ldr r0, [sp, #4]	@ 0002b13a 0198
.org 0x2b13c
	ldr r1, [r7, #4]	@ 0002b13c 7968
.org 0x2b13e
	adds r0, r0, r1	@ 0002b13e 4018
.org 0x2b140
	str r0, [r4, #4]	@ 0002b140 6060
.org 0x2b142
	ldr r0, [sp, #24]	@ 0002b142 0698
.org 0x2b144
	movs r1, #192	@ 0002b144 c021
.org 0x2b146
	lsls r1, r1, #3	@ 0002b146 c900
.org 0x2b148
	adds r0, r0, r1	@ 0002b148 4018
.org 0x2b14a
	str r0, [sp, #24]	@ 0002b14a 0690
.org 0x2b14c
	ldr r0, [r4, #4]	@ 0002b14c 6068
.org 0x2b14e
	ldr r2, [pc, #32]	@ 0002b14e 084a
.org 0x2b150
	adds r0, r0, r2	@ 0002b150 8018
.org 0x2b152
	str r0, [r4, #4]	@ 0002b152 6060
.org 0x2b154
	ldr r0, [sp, #48]	@ 0002b154 0c98
.org 0x2b156
	cmp r0, #0	@ 0002b156 0028
.org 0x2b158
	bne.n 0x2b174	@ 0002b158 0cd1
.org 0x2b15a
	adds r0, r6, #0	@ 0002b15a 301c
.org 0x2b15c
	mov r1, r9	@ 0002b15c 4946
.org 0x2b15e
	mov r2, r8	@ 0002b15e 4246
.org 0x2b160
	mov r3, sl	@ 0002b160 5346
.org 0x2b162
	bl 0xd3518	@ 0002b162 a8f0d9f9
.org 0x2b166
	str r0, [sp, #48]	@ 0002b166 0c90
.org 0x2b168
	b.n 0x2b17e	@ 0002b168 09e0
.org 0x2b16a
	.byte 0x00	@ 0002b16a data
.org 0x2b16b
	.byte 0x00	@ 0002b16b data
.org 0x2b16c
	.byte 0x40,0x29,0x85,0x08	@ 0002b16c data
.org 0x2b170
	.byte 0x00,0xf4,0xff,0xff	@ 0002b170 data
.org 0x2b174
	adds r0, r6, #0	@ 0002b174 301c
.org 0x2b176
	mov r1, r9	@ 0002b176 4946
.org 0x2b178
	mov r2, r8	@ 0002b178 4246
.org 0x2b17a
	bl 0xd357c	@ 0002b17a a8f0fff9
.org 0x2b17e
	ldr r0, [sp, #24]	@ 0002b17e 0698
.org 0x2b180
	ldr r1, [pc, #92]	@ 0002b180 1749
.org 0x2b182
	adds r0, r0, r1	@ 0002b182 4018
.org 0x2b184
	str r0, [sp, #24]	@ 0002b184 0690
.org 0x2b186
	ldr r0, [r4, #4]	@ 0002b186 6068
.org 0x2b188
	movs r2, #192	@ 0002b188 c022
.org 0x2b18a
	lsls r2, r2, #3	@ 0002b18a d200
.org 0x2b18c
	adds r0, r0, r2	@ 0002b18c 8018
.org 0x2b18e
	str r0, [r4, #4]	@ 0002b18e 6060
.org 0x2b190
	adds r0, r6, #0	@ 0002b190 301c
.org 0x2b192
	adds r1, r4, #0	@ 0002b192 211c
.org 0x2b194
	mov r2, r8	@ 0002b194 4246
.org 0x2b196
	bl 0xd357c	@ 0002b196 a8f0f1f9
.org 0x2b19a
	ldr r0, [sp, #24]	@ 0002b19a 0698
.org 0x2b19c
	movs r1, #128	@ 0002b19c 8021
.org 0x2b19e
	lsls r1, r1, #5	@ 0002b19e 4901
.org 0x2b1a0
	adds r0, r0, r1	@ 0002b1a0 4018
.org 0x2b1a2
	str r0, [sp, #24]	@ 0002b1a2 0690
.org 0x2b1a4
	ldr r0, [r4, #4]	@ 0002b1a4 6068
.org 0x2b1a6
	movs r2, #128	@ 0002b1a6 8022
.org 0x2b1a8
	lsls r2, r2, #4	@ 0002b1a8 1201
.org 0x2b1aa
	adds r0, r0, r2	@ 0002b1aa 8018
.org 0x2b1ac
	str r0, [r4, #4]	@ 0002b1ac 6060
.org 0x2b1ae
	adds r0, r6, #0	@ 0002b1ae 301c
.org 0x2b1b0
	adds r1, r4, #0	@ 0002b1b0 211c
.org 0x2b1b2
	mov r2, r8	@ 0002b1b2 4246
.org 0x2b1b4
	bl 0xd357c	@ 0002b1b4 a8f0e2f9
.org 0x2b1b8
	ldr r0, [sp, #24]	@ 0002b1b8 0698
.org 0x2b1ba
	ldr r1, [pc, #40]	@ 0002b1ba 0a49
.org 0x2b1bc
	adds r0, r0, r1	@ 0002b1bc 4018
.org 0x2b1be
	str r0, [sp, #24]	@ 0002b1be 0690
.org 0x2b1c0
	ldr r0, [r4, #4]	@ 0002b1c0 6068
.org 0x2b1c2
	movs r2, #128	@ 0002b1c2 8022
.org 0x2b1c4
	lsls r2, r2, #2	@ 0002b1c4 9200
.org 0x2b1c6
	adds r0, r0, r2	@ 0002b1c6 8018
.org 0x2b1c8
	str r0, [r4, #4]	@ 0002b1c8 6060
.org 0x2b1ca
	adds r0, r6, #0	@ 0002b1ca 301c
.org 0x2b1cc
	adds r1, r4, #0	@ 0002b1cc 211c
.org 0x2b1ce
	mov r2, r8	@ 0002b1ce 4246
.org 0x2b1d0
	bl 0xd357c	@ 0002b1d0 a8f0d4f9
.org 0x2b1d4
	adds r7, #8	@ 0002b1d4 0837
.org 0x2b1d6
	subs r5, #1	@ 0002b1d6 013d
.org 0x2b1d8
	cmp r5, #0	@ 0002b1d8 002d
.org 0x2b1da
	bge.n 0x2b132	@ 0002b1da aada
.org 0x2b1dc
	b.n 0x2b378	@ 0002b1dc cce0
.org 0x2b1de
	.byte 0x00	@ 0002b1de data
.org 0x2b1df
	.byte 0x00	@ 0002b1df data
.org 0x2b1e0
	.byte 0x00,0xf2,0xff,0xff	@ 0002b1e0 data
.org 0x2b1e4
	.byte 0x00,0xf6,0xff,0xff	@ 0002b1e4 data
.org 0x2b1e8
	ldr r0, [sp, #52]	@ 0002b1e8 0d98
.org 0x2b1ea
	cmp r0, #3	@ 0002b1ea 0328
.org 0x2b1ec
	beq.n 0x2b1f0	@ 0002b1ec 00d0
.org 0x2b1ee
	b.n 0x2b378	@ 0002b1ee c3e0
.org 0x2b1f0
	cmp r3, #17	@ 0002b1f0 112b
.org 0x2b1f2
	bne.n 0x2b2c8	@ 0002b1f2 69d1
.org 0x2b1f4
	ldrb r0, [r6, #13]	@ 0002b1f4 707b
.org 0x2b1f6
	cmp r0, #28	@ 0002b1f6 1c28
.org 0x2b1f8
	bls.n 0x2b2c8	@ 0002b1f8 66d9
.org 0x2b1fa
	cmp r0, #31	@ 0002b1fa 1f28
.org 0x2b1fc
	bhi.n 0x2b2c8	@ 0002b1fc 64d8
.org 0x2b1fe
	ldr r0, [sp, #0]	@ 0002b1fe 0098
.org 0x2b200
	str r0, [sp, #32]	@ 0002b200 0890
.org 0x2b202
	ldr r0, [sp, #4]	@ 0002b202 0198
.org 0x2b204
	ldr r5, [pc, #176]	@ 0002b204 2c4d
.org 0x2b206
	adds r0, r0, r5	@ 0002b206 4019
.org 0x2b208
	add r4, sp, #32	@ 0002b208 08ac
.org 0x2b20a
	str r0, [r4, #4]	@ 0002b20a 6060
.org 0x2b20c
	adds r0, r6, #0	@ 0002b20c 301c
.org 0x2b20e
	adds r1, r4, #0	@ 0002b20e 211c
.org 0x2b210
	movs r2, #30	@ 0002b210 1e22
.org 0x2b212
	bl 0xd380c	@ 0002b212 a8f0fbfa
.org 0x2b216
	str r0, [sp, #48]	@ 0002b216 0c90
.org 0x2b218
	ldr r0, [sp, #0]	@ 0002b218 0098
.org 0x2b21a
	adds r0, r0, r5	@ 0002b21a 4019
.org 0x2b21c
	str r0, [sp, #32]	@ 0002b21c 0890
.org 0x2b21e
	ldr r0, [sp, #4]	@ 0002b21e 0198
.org 0x2b220
	ldr r1, [pc, #152]	@ 0002b220 2649
.org 0x2b222
	adds r0, r0, r1	@ 0002b222 4018
.org 0x2b224
	str r0, [r4, #4]	@ 0002b224 6060
.org 0x2b226
	adds r0, r6, #0	@ 0002b226 301c
.org 0x2b228
	adds r1, r4, #0	@ 0002b228 211c
.org 0x2b22a
	movs r2, #30	@ 0002b22a 1e22
.org 0x2b22c
	bl 0xd380c	@ 0002b22c a8f0eefa
.org 0x2b230
	ldr r0, [sp, #0]	@ 0002b230 0098
.org 0x2b232
	movs r5, #224	@ 0002b232 e025
.org 0x2b234
	lsls r5, r5, #4	@ 0002b234 2d01
.org 0x2b236
	adds r0, r0, r5	@ 0002b236 4019
.org 0x2b238
	str r0, [sp, #32]	@ 0002b238 0890
.org 0x2b23a
	ldr r0, [sp, #4]	@ 0002b23a 0198
.org 0x2b23c
	str r0, [r4, #4]	@ 0002b23c 6060
.org 0x2b23e
	adds r0, r6, #0	@ 0002b23e 301c
.org 0x2b240
	adds r1, r4, #0	@ 0002b240 211c
.org 0x2b242
	movs r2, #30	@ 0002b242 1e22
.org 0x2b244
	bl 0xd380c	@ 0002b244 a8f0e2fa
.org 0x2b248
	ldr r0, [sp, #0]	@ 0002b248 0098
.org 0x2b24a
	movs r2, #128	@ 0002b24a 8022
.org 0x2b24c
	lsls r2, r2, #3	@ 0002b24c d200
.org 0x2b24e
	adds r0, r0, r2	@ 0002b24e 8018
.org 0x2b250
	str r0, [sp, #32]	@ 0002b250 0890
.org 0x2b252
	ldr r0, [sp, #4]	@ 0002b252 0198
.org 0x2b254
	movs r1, #128	@ 0002b254 8021
.org 0x2b256
	lsls r1, r1, #5	@ 0002b256 4901
.org 0x2b258
	adds r0, r0, r1	@ 0002b258 4018
.org 0x2b25a
	str r0, [r4, #4]	@ 0002b25a 6060
.org 0x2b25c
	adds r0, r6, #0	@ 0002b25c 301c
.org 0x2b25e
	adds r1, r4, #0	@ 0002b25e 211c
.org 0x2b260
	movs r2, #30	@ 0002b260 1e22
.org 0x2b262
	bl 0xd380c	@ 0002b262 a8f0d3fa
.org 0x2b266
	ldr r0, [sp, #0]	@ 0002b266 0098
.org 0x2b268
	ldr r2, [pc, #84]	@ 0002b268 154a
.org 0x2b26a
	adds r0, r0, r2	@ 0002b26a 8018
.org 0x2b26c
	str r0, [sp, #32]	@ 0002b26c 0890
.org 0x2b26e
	ldr r0, [sp, #4]	@ 0002b26e 0198
.org 0x2b270
	adds r0, r0, r5	@ 0002b270 4019
.org 0x2b272
	str r0, [r4, #4]	@ 0002b272 6060
.org 0x2b274
	adds r0, r6, #0	@ 0002b274 301c
.org 0x2b276
	adds r1, r4, #0	@ 0002b276 211c
.org 0x2b278
	movs r2, #30	@ 0002b278 1e22
.org 0x2b27a
	bl 0xd380c	@ 0002b27a a8f0c7fa
.org 0x2b27e
	ldr r0, [sp, #0]	@ 0002b27e 0098
.org 0x2b280
	movs r1, #192	@ 0002b280 c021
.org 0x2b282
	lsls r1, r1, #4	@ 0002b282 0901
.org 0x2b284
	adds r0, r0, r1	@ 0002b284 4018
.org 0x2b286
	str r0, [sp, #32]	@ 0002b286 0890
.org 0x2b288
	ldr r0, [sp, #4]	@ 0002b288 0198
.org 0x2b28a
	ldr r2, [pc, #56]	@ 0002b28a 0e4a
.org 0x2b28c
	adds r0, r0, r2	@ 0002b28c 8018
.org 0x2b28e
	str r0, [r4, #4]	@ 0002b28e 6060
.org 0x2b290
	adds r0, r6, #0	@ 0002b290 301c
.org 0x2b292
	adds r1, r4, #0	@ 0002b292 211c
.org 0x2b294
	movs r2, #30	@ 0002b294 1e22
.org 0x2b296
	bl 0xd380c	@ 0002b296 a8f0b9fa
.org 0x2b29a
	ldr r0, [sp, #0]	@ 0002b29a 0098
.org 0x2b29c
	movs r1, #128	@ 0002b29c 8021
.org 0x2b29e
	lsls r1, r1, #2	@ 0002b29e 8900
.org 0x2b2a0
	adds r0, r0, r1	@ 0002b2a0 4018
.org 0x2b2a2
	str r0, [sp, #32]	@ 0002b2a2 0890
.org 0x2b2a4
	ldr r0, [sp, #4]	@ 0002b2a4 0198
.org 0x2b2a6
	adds r0, r0, r1	@ 0002b2a6 4018
.org 0x2b2a8
	str r0, [r4, #4]	@ 0002b2a8 6060
.org 0x2b2aa
	adds r0, r6, #0	@ 0002b2aa 301c
.org 0x2b2ac
	adds r1, r4, #0	@ 0002b2ac 211c
.org 0x2b2ae
	movs r2, #30	@ 0002b2ae 1e22
.org 0x2b2b0
	bl 0xd380c	@ 0002b2b0 a8f0acfa
.org 0x2b2b4
	b.n 0x2b378	@ 0002b2b4 60e0
.org 0x2b2b6
	.byte 0x00	@ 0002b2b6 data
.org 0x2b2b7
	.byte 0x00	@ 0002b2b7 data
.org 0x2b2b8
	.byte 0x00,0xf0,0xff,0xff	@ 0002b2b8 data
.org 0x2b2bc
	.byte 0x00,0xfc,0xff,0xff	@ 0002b2bc data
.org 0x2b2c0
	.byte 0x00,0xf8,0xff,0xff	@ 0002b2c0 data
.org 0x2b2c4
	.byte 0x00,0xe8,0xff,0xff	@ 0002b2c4 data
.org 0x2b2c8
	add r0, sp, #40	@ 0002b2c8 0aa8
.org 0x2b2ca
	mov r9, r0	@ 0002b2ca 8146
.org 0x2b2cc
	mov r4, r9	@ 0002b2cc 4c46
.org 0x2b2ce
	ldr r7, [pc, #56]	@ 0002b2ce 0e4f
.org 0x2b2d0
	movs r5, #3	@ 0002b2d0 0325
.org 0x2b2d2
	ldr r0, [sp, #0]	@ 0002b2d2 0098
.org 0x2b2d4
	ldr r1, [r7, #0]	@ 0002b2d4 3968
.org 0x2b2d6
	adds r0, r0, r1	@ 0002b2d6 4018
.org 0x2b2d8
	str r0, [sp, #40]	@ 0002b2d8 0a90
.org 0x2b2da
	ldr r0, [sp, #4]	@ 0002b2da 0198
.org 0x2b2dc
	ldr r1, [r7, #4]	@ 0002b2dc 7968
.org 0x2b2de
	adds r0, r0, r1	@ 0002b2de 4018
.org 0x2b2e0
	str r0, [r4, #4]	@ 0002b2e0 6060
.org 0x2b2e2
	ldr r0, [sp, #40]	@ 0002b2e2 0a98
.org 0x2b2e4
	movs r1, #192	@ 0002b2e4 c021
.org 0x2b2e6
	lsls r1, r1, #3	@ 0002b2e6 c900
.org 0x2b2e8
	adds r0, r0, r1	@ 0002b2e8 4018
.org 0x2b2ea
	str r0, [sp, #40]	@ 0002b2ea 0a90
.org 0x2b2ec
	ldr r0, [r4, #4]	@ 0002b2ec 6068
.org 0x2b2ee
	ldr r2, [pc, #28]	@ 0002b2ee 074a
.org 0x2b2f0
	adds r0, r0, r2	@ 0002b2f0 8018
.org 0x2b2f2
	str r0, [r4, #4]	@ 0002b2f2 6060
.org 0x2b2f4
	ldr r0, [sp, #48]	@ 0002b2f4 0c98
.org 0x2b2f6
	cmp r0, #0	@ 0002b2f6 0028
.org 0x2b2f8
	bne.n 0x2b310	@ 0002b2f8 0ad1
.org 0x2b2fa
	adds r0, r6, #0	@ 0002b2fa 301c
.org 0x2b2fc
	mov r1, r9	@ 0002b2fc 4946
.org 0x2b2fe
	mov r2, r8	@ 0002b2fe 4246
.org 0x2b300
	bl 0xd380c	@ 0002b300 a8f084fa
.org 0x2b304
	str r0, [sp, #48]	@ 0002b304 0c90
.org 0x2b306
	b.n 0x2b31a	@ 0002b306 08e0
.org 0x2b308
	.byte 0x40,0x29,0x85,0x08	@ 0002b308 data
.org 0x2b30c
	.byte 0x00,0xf4,0xff,0xff	@ 0002b30c data
.org 0x2b310
	adds r0, r6, #0	@ 0002b310 301c
.org 0x2b312
	mov r1, r9	@ 0002b312 4946
.org 0x2b314
	mov r2, r8	@ 0002b314 4246
.org 0x2b316
	bl 0xd380c	@ 0002b316 a8f079fa
.org 0x2b31a
	ldr r0, [sp, #40]	@ 0002b31a 0a98
.org 0x2b31c
	ldr r1, [pc, #132]	@ 0002b31c 2149
.org 0x2b31e
	adds r0, r0, r1	@ 0002b31e 4018
.org 0x2b320
	str r0, [sp, #40]	@ 0002b320 0a90
.org 0x2b322
	ldr r0, [r4, #4]	@ 0002b322 6068
.org 0x2b324
	movs r2, #192	@ 0002b324 c022
.org 0x2b326
	lsls r2, r2, #3	@ 0002b326 d200
.org 0x2b328
	adds r0, r0, r2	@ 0002b328 8018
.org 0x2b32a
	str r0, [r4, #4]	@ 0002b32a 6060
.org 0x2b32c
	adds r0, r6, #0	@ 0002b32c 301c
.org 0x2b32e
	adds r1, r4, #0	@ 0002b32e 211c
.org 0x2b330
	mov r2, r8	@ 0002b330 4246
.org 0x2b332
	bl 0xd380c	@ 0002b332 a8f06bfa
.org 0x2b336
	ldr r0, [sp, #40]	@ 0002b336 0a98
.org 0x2b338
	movs r1, #128	@ 0002b338 8021
.org 0x2b33a
	lsls r1, r1, #5	@ 0002b33a 4901
.org 0x2b33c
	adds r0, r0, r1	@ 0002b33c 4018
.org 0x2b33e
	str r0, [sp, #40]	@ 0002b33e 0a90
.org 0x2b340
	ldr r0, [r4, #4]	@ 0002b340 6068
.org 0x2b342
	movs r2, #128	@ 0002b342 8022
.org 0x2b344
	lsls r2, r2, #4	@ 0002b344 1201
.org 0x2b346
	adds r0, r0, r2	@ 0002b346 8018
.org 0x2b348
	str r0, [r4, #4]	@ 0002b348 6060
.org 0x2b34a
	adds r0, r6, #0	@ 0002b34a 301c
.org 0x2b34c
	adds r1, r4, #0	@ 0002b34c 211c
.org 0x2b34e
	mov r2, r8	@ 0002b34e 4246
.org 0x2b350
	bl 0xd380c	@ 0002b350 a8f05cfa
.org 0x2b354
	ldr r0, [sp, #40]	@ 0002b354 0a98
.org 0x2b356
	ldr r1, [pc, #80]	@ 0002b356 1449
.org 0x2b358
	adds r0, r0, r1	@ 0002b358 4018
.org 0x2b35a
	str r0, [sp, #40]	@ 0002b35a 0a90
.org 0x2b35c
	ldr r0, [r4, #4]	@ 0002b35c 6068
.org 0x2b35e
	movs r2, #128	@ 0002b35e 8022
.org 0x2b360
	lsls r2, r2, #2	@ 0002b360 9200
.org 0x2b362
	adds r0, r0, r2	@ 0002b362 8018
.org 0x2b364
	str r0, [r4, #4]	@ 0002b364 6060
.org 0x2b366
	adds r0, r6, #0	@ 0002b366 301c
.org 0x2b368
	adds r1, r4, #0	@ 0002b368 211c
.org 0x2b36a
	mov r2, r8	@ 0002b36a 4246
