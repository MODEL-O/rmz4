@ FUN_0808adb0  entry 0x0808adb0  size 532
.thumb
.org 0x8adb0
FUN_0808adb0:
	push {r4, r5, r6, r7, lr}	@ 0008adb0 f0b5
.org 0x8adb2
	mov r7, r8	@ 0008adb2 4746
.org 0x8adb4
	push {r7}	@ 0008adb4 80b4
.org 0x8adb6
	sub sp, #20	@ 0008adb6 85b0
.org 0x8adb8
	adds r7, r0, #0	@ 0008adb8 071c
.org 0x8adba
	ldrb r4, [r7, #14]	@ 0008adba bc7b
.org 0x8adbc
	cmp r4, #0	@ 0008adbc 002c
.org 0x8adbe
	beq.n 0x8adc6	@ 0008adbe 02d0
.org 0x8adc0
	cmp r4, #1	@ 0008adc0 012c
.org 0x8adc2
	beq.n 0x8ae72	@ 0008adc2 56d0
.org 0x8adc4
	b.n 0x8afc0	@ 0008adc4 fce0
.org 0x8adc6
	adds r5, r7, #0	@ 0008adc6 3d1c
.org 0x8adc8
	adds r5, #192	@ 0008adc8 c035
.org 0x8adca
	ldrb r1, [r5, #0]	@ 0008adca 2978
.org 0x8adcc
	lsls r1, r1, #17	@ 0008adcc 4904
.org 0x8adce
	ldr r0, [pc, #220]	@ 0008adce 3748
.org 0x8add0
	adds r1, r1, r0	@ 0008add0 0918
.org 0x8add2
	lsrs r1, r1, #16	@ 0008add2 090c
.org 0x8add4
	adds r0, r7, #0	@ 0008add4 381c
.org 0x8add6
	bl 0x1cf00	@ 0008add6 92f793f8
.org 0x8adda
	adds r0, r7, #0	@ 0008adda 381c
.org 0x8addc
	adds r0, #140	@ 0008addc 8c30
.org 0x8adde
	str r4, [r0, #0]	@ 0008adde 0460
.org 0x8ade0
	adds r0, #4	@ 0008ade0 0430
.org 0x8ade2
	str r4, [r0, #0]	@ 0008ade2 0460
.org 0x8ade4
	adds r0, #4	@ 0008ade4 0430
.org 0x8ade6
	strb r4, [r0, #0]	@ 0008ade6 0470
.org 0x8ade8
	ldrb r1, [r7, #10]	@ 0008ade8 b97a
.org 0x8adea
	movs r0, #251	@ 0008adea fb20
.org 0x8adec
	ands r0, r1	@ 0008adec 0840
.org 0x8adee
	strb r0, [r7, #10]	@ 0008adee b872
.org 0x8adf0
	adds r0, r7, #0	@ 0008adf0 381c
.org 0x8adf2
	adds r0, #180	@ 0008adf2 b430
.org 0x8adf4
	ldrb r4, [r0, #0]	@ 0008adf4 0478
.org 0x8adf6
	ldr r0, [r7, #84]	@ 0008adf6 786d
.org 0x8adf8
	ldr r1, [r7, #88]	@ 0008adf8 b96d
.org 0x8adfa
	str r0, [sp, #4]	@ 0008adfa 0190
.org 0x8adfc
	str r1, [sp, #8]	@ 0008adfc 0291
.org 0x8adfe
	ldr r1, [sp, #8]	@ 0008adfe 0299
.org 0x8ae00
	ldr r2, [pc, #172]	@ 0008ae00 2b4a
.org 0x8ae02
	adds r0, r1, r2	@ 0008ae02 8818
.org 0x8ae04
	str r0, [sp, #8]	@ 0008ae04 0290
.org 0x8ae06
	ldrb r0, [r5, #0]	@ 0008ae06 2878
.org 0x8ae08
	cmp r0, #1	@ 0008ae08 0128
.org 0x8ae0a
	bne.n 0x8ae14	@ 0008ae0a 03d1
.org 0x8ae0c
	movs r2, #208	@ 0008ae0c d022
.org 0x8ae0e
	lsls r2, r2, #5	@ 0008ae0e 5201
.org 0x8ae10
	adds r0, r1, r2	@ 0008ae10 8818
.org 0x8ae12
	str r0, [sp, #8]	@ 0008ae12 0290
.org 0x8ae14
	movs r2, #128	@ 0008ae14 8022
.org 0x8ae16
	lsls r2, r2, #2	@ 0008ae16 9200
.org 0x8ae18
	movs r0, #0	@ 0008ae18 0020
.org 0x8ae1a
	add r1, sp, #4	@ 0008ae1a 01a9
.org 0x8ae1c
	adds r3, r4, #0	@ 0008ae1c 231c
.org 0x8ae1e
	bl 0xd0dc4	@ 0008ae1e 45f0d1ff
.org 0x8ae22
	ldrb r0, [r7, #10]	@ 0008ae22 b87a
.org 0x8ae24
	lsrs r0, r0, #4	@ 0008ae24 0009
.org 0x8ae26
	movs r1, #1	@ 0008ae26 0121
.org 0x8ae28
	ands r0, r1	@ 0008ae28 0840
.org 0x8ae2a
	cmp r4, r0	@ 0008ae2a 8442
.org 0x8ae2c
	bne.n 0x8ae32	@ 0008ae2c 01d1
.org 0x8ae2e
	movs r0, #1	@ 0008ae2e 0120
.org 0x8ae30
	eors r4, r0	@ 0008ae30 4440
.org 0x8ae32
	movs r0, #128	@ 0008ae32 8020
.org 0x8ae34
	lsls r0, r0, #1	@ 0008ae34 4000
.org 0x8ae36
	lsls r1, r4, #9	@ 0008ae36 6102
.org 0x8ae38
	subs r0, r0, r1	@ 0008ae38 401a
.org 0x8ae3a
	str r0, [r7, #92]	@ 0008ae3a f865
.org 0x8ae3c
	ldr r0, [r7, #96]	@ 0008ae3c 386e
.org 0x8ae3e
	asrs r0, r0, #1	@ 0008ae3e 4010
.org 0x8ae40
	str r0, [r7, #96]	@ 0008ae40 3866
.org 0x8ae42
	ldrb r1, [r5, #0]	@ 0008ae42 2978
.org 0x8ae44
	adds r0, r7, #0	@ 0008ae44 381c
.org 0x8ae46
	bl 0xd8e58	@ 0008ae46 4ef007f8
.org 0x8ae4a
	movs r0, #20	@ 0008ae4a 1420
.org 0x8ae4c
	strb r0, [r7, #18]	@ 0008ae4c b874
.org 0x8ae4e
	ldr r0, [r7, #92]	@ 0008ae4e f86d
.org 0x8ae50
	movs r1, #180	@ 0008ae50 b421
.org 0x8ae52
	muls r0, r1	@ 0008ae52 4843
.org 0x8ae54
	cmp r0, #0	@ 0008ae54 0028
.org 0x8ae56
	bge.n 0x8ae5a	@ 0008ae56 00da
.org 0x8ae58
	adds r0, #255	@ 0008ae58 ff30
.org 0x8ae5a
	asrs r0, r0, #8	@ 0008ae5a 0012
.org 0x8ae5c
	str r0, [r7, #92]	@ 0008ae5c f865
.org 0x8ae5e
	ldr r0, [r7, #96]	@ 0008ae5e 386e
.org 0x8ae60
	muls r0, r1	@ 0008ae60 4843
.org 0x8ae62
	cmp r0, #0	@ 0008ae62 0028
.org 0x8ae64
	bge.n 0x8ae68	@ 0008ae64 00da
.org 0x8ae66
	adds r0, #255	@ 0008ae66 ff30
.org 0x8ae68
	asrs r0, r0, #8	@ 0008ae68 0012
.org 0x8ae6a
	str r0, [r7, #96]	@ 0008ae6a 3866
.org 0x8ae6c
	ldrb r0, [r7, #14]	@ 0008ae6c b87b
.org 0x8ae6e
	adds r0, #1	@ 0008ae6e 0130
.org 0x8ae70
	strb r0, [r7, #14]	@ 0008ae70 b873
.org 0x8ae72
	adds r0, r7, #0	@ 0008ae72 381c
.org 0x8ae74
	bl 0x1cff0	@ 0008ae74 92f7bcf8
.org 0x8ae78
	ldr r1, [r7, #88]	@ 0008ae78 b96d
.org 0x8ae7a
	ldr r0, [r7, #96]	@ 0008ae7a 386e
.org 0x8ae7c
	adds r1, r1, r0	@ 0008ae7c 0918
.org 0x8ae7e
	str r1, [r7, #88]	@ 0008ae7e b965
.org 0x8ae80
	ldr r0, [r7, #84]	@ 0008ae80 786d
.org 0x8ae82
	bl 0x7db4	@ 0008ae82 7cf797ff
.org 0x8ae86
	adds r1, r0, #0	@ 0008ae86 011c
.org 0x8ae88
	cmp r1, #0	@ 0008ae88 0029
.org 0x8ae8a
	bge.n 0x8ae92	@ 0008ae8a 02da
.org 0x8ae8c
	ldr r0, [r7, #88]	@ 0008ae8c b86d
.org 0x8ae8e
	adds r0, r0, r1	@ 0008ae8e 4018
.org 0x8ae90
	str r0, [r7, #88]	@ 0008ae90 b865
.org 0x8ae92
	ldr r0, [r7, #84]	@ 0008ae92 786d
.org 0x8ae94
	ldr r1, [r7, #92]	@ 0008ae94 f96d
.org 0x8ae96
	adds r0, r0, r1	@ 0008ae96 4018
.org 0x8ae98
	str r0, [r7, #84]	@ 0008ae98 7865
.org 0x8ae9a
	cmp r1, #0	@ 0008ae9a 0029
.org 0x8ae9c
	ble.n 0x8aeb4	@ 0008ae9c 0add
.org 0x8ae9e
	ldr r1, [r7, #88]	@ 0008ae9e b96d
.org 0x8aea0
	bl 0x816c	@ 0008aea0 7df764f9
.org 0x8aea4
	adds r1, r0, #0	@ 0008aea4 011c
.org 0x8aea6
	cmp r1, #0	@ 0008aea6 0029
.org 0x8aea8
	bge.n 0x8aec6	@ 0008aea8 0dda
.org 0x8aeaa
	b.n 0x8aec0	@ 0008aeaa 09e0
.org 0x8aeac
	.byte 0x00,0x00,0x0f,0x20	@ 0008aeac data
.org 0x8aeb0
	.byte 0x00,0xf0,0xff,0xff	@ 0008aeb0 data
.org 0x8aeb4
	ldr r1, [r7, #88]	@ 0008aeb4 b96d
.org 0x8aeb6
	bl 0x834c	@ 0008aeb6 7df749fa
.org 0x8aeba
	adds r1, r0, #0	@ 0008aeba 011c
.org 0x8aebc
	cmp r1, #0	@ 0008aebc 0029
.org 0x8aebe
	ble.n 0x8aec6	@ 0008aebe 02dd
.org 0x8aec0
	ldr r0, [r7, #84]	@ 0008aec0 786d
.org 0x8aec2
	adds r0, r0, r1	@ 0008aec2 4018
.org 0x8aec4
	str r0, [r7, #84]	@ 0008aec4 7865
.org 0x8aec6
	ldr r1, [r7, #92]	@ 0008aec6 f96d
.org 0x8aec8
	lsls r0, r1, #3	@ 0008aec8 c800
.org 0x8aeca
	subs r0, r0, r1	@ 0008aeca 401a
.org 0x8aecc
	lsls r0, r0, #5	@ 0008aecc 4001
.org 0x8aece
	adds r0, r0, r1	@ 0008aece 4018
.org 0x8aed0
	cmp r0, #0	@ 0008aed0 0028
.org 0x8aed2
	bge.n 0x8aed6	@ 0008aed2 00da
.org 0x8aed4
	adds r0, #255	@ 0008aed4 ff30
.org 0x8aed6
	asrs r0, r0, #8	@ 0008aed6 0012
.org 0x8aed8
	str r0, [r7, #92]	@ 0008aed8 f865
.org 0x8aeda
	ldr r1, [r7, #96]	@ 0008aeda 396e
.org 0x8aedc
	cmp r1, #0	@ 0008aedc 0029
.org 0x8aede
	bne.n 0x8aeea	@ 0008aede 04d1
.org 0x8aee0
	adds r0, r7, #0	@ 0008aee0 381c
.org 0x8aee2
	adds r0, #192	@ 0008aee2 c030
.org 0x8aee4
	ldrb r0, [r0, #0]	@ 0008aee4 0078
.org 0x8aee6
	cmp r0, #1	@ 0008aee6 0128
.org 0x8aee8
	bne.n 0x8aefa	@ 0008aee8 07d1
.org 0x8aeea
	adds r0, r1, #0	@ 0008aeea 081c
.org 0x8aeec
	adds r0, #64	@ 0008aeec 4030
.org 0x8aeee
	str r0, [r7, #96]	@ 0008aeee 3866
.org 0x8aef0
	movs r1, #224	@ 0008aef0 e021
.org 0x8aef2
	lsls r1, r1, #3	@ 0008aef2 c900
.org 0x8aef4
	cmp r0, r1	@ 0008aef4 8842
.org 0x8aef6
	ble.n 0x8aefa	@ 0008aef6 00dd
.org 0x8aef8
	str r1, [r7, #96]	@ 0008aef8 3966
.org 0x8aefa
	ldrb r0, [r7, #18]	@ 0008aefa b87c
.org 0x8aefc
	subs r0, #1	@ 0008aefc 0138
.org 0x8aefe
	strb r0, [r7, #18]	@ 0008aefe b874
.org 0x8af00
	lsls r0, r0, #24	@ 0008af00 0006
.org 0x8af02
	lsrs r5, r0, #24	@ 0008af02 050e
.org 0x8af04
	cmp r5, #0	@ 0008af04 002d
.org 0x8af06
	bne.n 0x8afc0	@ 0008af06 5bd1
.org 0x8af08
	ldrb r0, [r7, #10]	@ 0008af08 b87a
.org 0x8af0a
	movs r1, #254	@ 0008af0a fe21
.org 0x8af0c
	ands r1, r0	@ 0008af0c 0140
.org 0x8af0e
	strb r1, [r7, #10]	@ 0008af0e b972
.org 0x8af10
	ldr r6, [r7, #84]	@ 0008af10 7e6d
.org 0x8af12
	str r6, [sp, #4]	@ 0008af12 0196
.org 0x8af14
	ldr r0, [r7, #88]	@ 0008af14 b86d
.org 0x8af16
	mov r8, r0	@ 0008af16 8046
.org 0x8af18
	ldr r0, [pc, #176]	@ 0008af18 2c48
.org 0x8af1a
	add r0, r8	@ 0008af1a 4044
.org 0x8af1c
	str r0, [sp, #8]	@ 0008af1c 0290
.org 0x8af1e
	ldr r3, [pc, #176]	@ 0008af1e 2c4b
.org 0x8af20
	ldr r2, [r3, #0]	@ 0008af20 1a68
.org 0x8af22
	ldr r0, [pc, #176]	@ 0008af22 2c48
.org 0x8af24
	adds r4, r2, #0	@ 0008af24 141c
.org 0x8af26
	muls r4, r0	@ 0008af26 4443
.org 0x8af28
	ldr r2, [pc, #172]	@ 0008af28 2b4a
.org 0x8af2a
	adds r4, r4, r2	@ 0008af2a a418
.org 0x8af2c
	lsls r4, r4, #1	@ 0008af2c 6400
.org 0x8af2e
	lsrs r0, r4, #1	@ 0008af2e 6008
.org 0x8af30
	str r0, [r3, #0]	@ 0008af30 1860
.org 0x8af32
	lsrs r4, r4, #17	@ 0008af32 640c
.org 0x8af34
	movs r0, #3	@ 0008af34 0320
.org 0x8af36
	ands r4, r0	@ 0008af36 0440
.org 0x8af38
	str r6, [sp, #12]	@ 0008af38 0396
.org 0x8af3a
	add r6, sp, #12	@ 0008af3a 03ae
.org 0x8af3c
	mov r0, r8	@ 0008af3c 4046
.org 0x8af3e
	str r0, [r6, #4]	@ 0008af3e 7060
.org 0x8af40
	lsrs r1, r1, #4	@ 0008af40 0909
.org 0x8af42
	movs r2, #1	@ 0008af42 0122
.org 0x8af44
	mov r8, r2	@ 0008af44 9046
.org 0x8af46
	ands r1, r2	@ 0008af46 1140
.org 0x8af48
	ldr r2, [pc, #144]	@ 0008af48 244a
.org 0x8af4a
	str r5, [sp, #0]	@ 0008af4a 0095
.org 0x8af4c
	adds r0, r6, #0	@ 0008af4c 301c
.org 0x8af4e
	adds r3, r4, #0	@ 0008af4e 231c
.org 0x8af50
	bl 0xd8ef8	@ 0008af50 4df0d2ff
.org 0x8af54
	ldrb r1, [r7, #10]	@ 0008af54 b97a
.org 0x8af56
	lsrs r1, r1, #4	@ 0008af56 0909
.org 0x8af58
	mov r0, r8	@ 0008af58 4046
.org 0x8af5a
	ands r1, r0	@ 0008af5a 0140
.org 0x8af5c
	ldr r2, [pc, #128]	@ 0008af5c 204a
.org 0x8af5e
	str r5, [sp, #0]	@ 0008af5e 0095
.org 0x8af60
	adds r0, r6, #0	@ 0008af60 301c
.org 0x8af62
	adds r3, r4, #0	@ 0008af62 231c
.org 0x8af64
	bl 0xd8ef8	@ 0008af64 4df0c8ff
.org 0x8af68
	ldrb r1, [r7, #10]	@ 0008af68 b97a
.org 0x8af6a
	lsrs r1, r1, #4	@ 0008af6a 0909
.org 0x8af6c
	mov r2, r8	@ 0008af6c 4246
.org 0x8af6e
	ands r1, r2	@ 0008af6e 1140
.org 0x8af70
	ldr r2, [pc, #112]	@ 0008af70 1c4a
.org 0x8af72
	str r5, [sp, #0]	@ 0008af72 0095
.org 0x8af74
	adds r0, r6, #0	@ 0008af74 301c
.org 0x8af76
	adds r3, r4, #0	@ 0008af76 231c
.org 0x8af78
	bl 0xd8ef8	@ 0008af78 4df0beff
.org 0x8af7c
	movs r0, #1	@ 0008af7c 0120
.org 0x8af7e
	add r1, sp, #4	@ 0008af7e 01a9
.org 0x8af80
	bl 0xd0c88	@ 0008af80 45f082fe
.org 0x8af84
	movs r0, #42	@ 0008af84 2a20
.org 0x8af86
	bl 0x2b10	@ 0008af86 77f7c3fd
.org 0x8af8a
	adds r4, r7, #0	@ 0008af8a 3c1c
.org 0x8af8c
	adds r4, #84	@ 0008af8c 5434
.org 0x8af8e
	movs r0, #3	@ 0008af8e 0320
.org 0x8af90
	movs r1, #29	@ 0008af90 1d21
.org 0x8af92
	adds r2, r4, #0	@ 0008af92 221c
.org 0x8af94
	bl 0x2ab88	@ 0008af94 9ff7f8fd
.org 0x8af98
	ldr r2, [pc, #76]	@ 0008af98 134a
.org 0x8af9a
	ldrh r1, [r2, #12]	@ 0008af9a 9189
.org 0x8af9c
	ldr r0, [pc, #76]	@ 0008af9c 1348
.org 0x8af9e
	cmp r1, r0	@ 0008af9e 8142
.org 0x8afa0
	bhi.n 0x8afa6	@ 0008afa0 01d8
.org 0x8afa2
	adds r0, r1, #1	@ 0008afa2 481c
.org 0x8afa4
	strh r0, [r2, #12]	@ 0008afa4 9081
.org 0x8afa6
	adds r0, r7, #0	@ 0008afa6 381c
.org 0x8afa8
	adds r1, r4, #0	@ 0008afa8 211c
.org 0x8afaa
	bl 0x2abe0	@ 0008afaa 9ff719fe
.org 0x8afae
	ldr r1, [pc, #64]	@ 0008afae 1049
.org 0x8afb0
	ldrb r0, [r7, #9]	@ 0008afb0 787a
.org 0x8afb2
	lsls r0, r0, #2	@ 0008afb2 8000
.org 0x8afb4
	adds r0, r0, r1	@ 0008afb4 4018
.org 0x8afb6
	movs r1, #4	@ 0008afb6 0421
.org 0x8afb8
	str r1, [r7, #12]	@ 0008afb8 f960
.org 0x8afba
	ldr r0, [r0, #0]	@ 0008afba 0068
.org 0x8afbc
	ldr r0, [r0, #16]	@ 0008afbc 0069
.org 0x8afbe
	str r0, [r7, #20]	@ 0008afbe 7861
.org 0x8afc0
	add sp, #20	@ 0008afc0 05b0
.org 0x8afc2
	pop {r3}	@ 0008afc2 08bc
