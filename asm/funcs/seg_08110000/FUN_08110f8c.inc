@ FUN_08110f8c  entry 0x08110f8c  size 506
.thumb
.org 0x110f8c
FUN_08110f8c:
	push {r4, r5, r6, r7, lr}	@ 00110f8c f0b5
.org 0x110f8e
	mov r7, sl	@ 00110f8e 5746
.org 0x110f90
	mov r6, r9	@ 00110f90 4e46
.org 0x110f92
	mov r5, r8	@ 00110f92 4546
.org 0x110f94
	push {r5, r6, r7}	@ 00110f94 e0b4
.org 0x110f96
	sub sp, #28	@ 00110f96 87b0
.org 0x110f98
	adds r7, r0, #0	@ 00110f98 071c
.org 0x110f9a
	adds r0, #20	@ 00110f9a 1430
.org 0x110f9c
	str r0, [sp, #12]	@ 00110f9c 0390
.org 0x110f9e
	movs r1, #136	@ 00110f9e 8821
.org 0x110fa0
	lsls r1, r1, #2	@ 00110fa0 8900
.org 0x110fa2
	adds r1, r7, r1	@ 00110fa2 7918
.org 0x110fa4
	str r1, [sp, #16]	@ 00110fa4 0491
.org 0x110fa6
	movs r2, #139	@ 00110fa6 8b22
.org 0x110fa8
	lsls r2, r2, #2	@ 00110fa8 9200
.org 0x110faa
	adds r2, r7, r2	@ 00110faa ba18
.org 0x110fac
	str r2, [sp, #20]	@ 00110fac 0592
.org 0x110fae
	ldr r4, [pc, #472]	@ 00110fae 764c
.org 0x110fb0
	adds r0, r4, #0	@ 00110fb0 201c
.org 0x110fb2
	bl 0x2bb4	@ 00110fb2 f1f6fffd
.org 0x110fb6
	cmp r0, #0	@ 00110fb6 0028
.org 0x110fb8
	beq.n 0x110fc0	@ 00110fb8 02d0
.org 0x110fba
	adds r0, r4, #0	@ 00110fba 201c
.org 0x110fbc
	bl 0x2b5c	@ 00110fbc f1f6cefd
.org 0x110fc0
	movs r0, #130	@ 00110fc0 8220
.org 0x110fc2
	bl 0x2bb4	@ 00110fc2 f1f6f7fd
.org 0x110fc6
	cmp r0, #0	@ 00110fc6 0028
.org 0x110fc8
	beq.n 0x110fd0	@ 00110fc8 02d0
.org 0x110fca
	movs r0, #130	@ 00110fca 8220
.org 0x110fcc
	bl 0x2b5c	@ 00110fcc f1f6c6fd
.org 0x110fd0
	ldr r4, [pc, #440]	@ 00110fd0 6e4c
.org 0x110fd2
	adds r0, r4, #0	@ 00110fd2 201c
.org 0x110fd4
	bl 0x2bb4	@ 00110fd4 f1f6eefd
.org 0x110fd8
	cmp r0, #0	@ 00110fd8 0028
.org 0x110fda
	beq.n 0x110fe2	@ 00110fda 02d0
.org 0x110fdc
	adds r0, r4, #0	@ 00110fdc 201c
.org 0x110fde
	bl 0x2b5c	@ 00110fde f1f6bdfd
.org 0x110fe2
	movs r0, #179	@ 00110fe2 b320
.org 0x110fe4
	bl 0x2bb4	@ 00110fe4 f1f6e6fd
.org 0x110fe8
	cmp r0, #0	@ 00110fe8 0028
.org 0x110fea
	beq.n 0x110ff2	@ 00110fea 02d0
.org 0x110fec
	movs r0, #179	@ 00110fec b320
.org 0x110fee
	bl 0x2b5c	@ 00110fee f1f6b5fd
.org 0x110ff2
	movs r4, #211	@ 00110ff2 d324
.org 0x110ff4
	lsls r4, r4, #1	@ 00110ff4 6400
.org 0x110ff6
	adds r0, r4, #0	@ 00110ff6 201c
.org 0x110ff8
	bl 0x2bb4	@ 00110ff8 f1f6dcfd
.org 0x110ffc
	cmp r0, #0	@ 00110ffc 0028
.org 0x110ffe
	beq.n 0x111006	@ 00110ffe 02d0
.org 0x111000
	adds r0, r4, #0	@ 00111000 201c
.org 0x111002
	bl 0x2b5c	@ 00111002 f1f6abfd
.org 0x111006
	ldr r4, [pc, #392]	@ 00111006 624c
.org 0x111008
	adds r0, r4, #0	@ 00111008 201c
.org 0x11100a
	bl 0x2bb4	@ 0011100a f1f6d3fd
.org 0x11100e
	cmp r0, #0	@ 0011100e 0028
.org 0x111010
	beq.n 0x111018	@ 00111010 02d0
.org 0x111012
	adds r0, r4, #0	@ 00111012 201c
.org 0x111014
	bl 0x2b5c	@ 00111014 f1f6a2fd
.org 0x111018
	ldr r0, [pc, #376]	@ 00111018 5e48
.org 0x11101a
	ldr r3, [pc, #380]	@ 0011101a 5f4b
.org 0x11101c
	mov r8, r3	@ 0011101c 9846
.org 0x11101e
	ldrh r2, [r3, #0]	@ 0011101e 1a88
.org 0x111020
	movs r4, #248	@ 00111020 f824
.org 0x111022
	lsls r4, r4, #5	@ 00111022 6401
.org 0x111024
	adds r1, r4, #0	@ 00111024 211c
.org 0x111026
	ands r1, r2	@ 00111026 1140
.org 0x111028
	lsls r1, r1, #3	@ 00111028 c900
.org 0x11102a
	movs r2, #176	@ 0011102a b022
.org 0x11102c
	lsls r2, r2, #3	@ 0011102c d200
.org 0x11102e
	movs r3, #240	@ 0011102e f023
.org 0x111030
	lsls r3, r3, #2	@ 00111030 9b00
.org 0x111032
	bl 0x1fd4	@ 00111032 f0f6cfff
.org 0x111036
	ldr r1, [pc, #356]	@ 00111036 5949
.org 0x111038
	movs r6, #0	@ 00111038 0026
.org 0x11103a
	strh r6, [r1, #0]	@ 0011103a 0e80
.org 0x11103c
	movs r0, #255	@ 0011103c ff20
.org 0x11103e
	strb r0, [r1, #14]	@ 0011103e 8873
.org 0x111040
	ldr r0, [pc, #348]	@ 00111040 5748
.org 0x111042
	strh r6, [r0, #0]	@ 00111042 0680
.org 0x111044
	mov r5, r8	@ 00111044 4546
.org 0x111046
	subs r5, #4	@ 00111046 043d
.org 0x111048
	ldrh r1, [r5, #0]	@ 00111048 2988
.org 0x11104a
	ldr r0, [pc, #344]	@ 0011104a 5648
.org 0x11104c
	ands r0, r1	@ 0011104c 0840
.org 0x11104e
	ldr r1, [pc, #344]	@ 0011104e 5649
.org 0x111050
	ands r0, r1	@ 00111050 0840
.org 0x111052
	movs r2, #158	@ 00111052 9e22
.org 0x111054
	lsls r2, r2, #7	@ 00111054 d201
.org 0x111056
	adds r1, r2, #0	@ 00111056 111c
.org 0x111058
	movs r2, #0	@ 00111058 0022
.org 0x11105a
	mov r3, sp	@ 0011105a 6b46
.org 0x11105c
	strh r2, [r3, #24]	@ 0011105c 1a83
.org 0x11105e
	orrs r0, r1	@ 0011105e 0843
.org 0x111060
	strh r0, [r5, #0]	@ 00111060 2880
.org 0x111062
	movs r0, #6	@ 00111062 0620
.org 0x111064
	mov r3, r8	@ 00111064 4346
.org 0x111066
	strh r0, [r3, #0]	@ 00111066 1880
.org 0x111068
	ldr r1, [pc, #320]	@ 00111068 5049
.org 0x11106a
	adds r0, r1, #0	@ 0011106a 081c
.org 0x11106c
	strh r0, [r5, #6]	@ 0011106c e880
.org 0x11106e
	ldr r0, [pc, #320]	@ 0011106e 5048
.org 0x111070
	movs r2, #128	@ 00111070 8022
.org 0x111072
	lsls r2, r2, #7	@ 00111072 d201
.org 0x111074
	mov r8, r2	@ 00111074 9046
.org 0x111076
	mov r1, r8	@ 00111076 4146
.org 0x111078
	bl 0x1d30	@ 00111078 f0f65afe
.org 0x11107c
	ldr r0, [pc, #308]	@ 0011107c 4d48
.org 0x11107e
	movs r1, #0	@ 0011107e 0021
.org 0x111080
	bl 0x2208	@ 00111080 f1f6c2f8
.org 0x111084
	ldrh r0, [r5, #6]	@ 00111084 e888
.org 0x111086
	adds r1, r4, #0	@ 00111086 211c
.org 0x111088
	ands r1, r0	@ 00111088 0140
.org 0x11108a
	lsls r1, r1, #3	@ 0011108a c900
.org 0x11108c
	movs r3, #192	@ 0011108c c023
.org 0x11108e
	lsls r3, r3, #19	@ 0011108e db04
.org 0x111090
	adds r1, r1, r3	@ 00111090 c918
.org 0x111092
	str r6, [sp, #4]	@ 00111092 0196
.org 0x111094
	ldr r0, [pc, #288]	@ 00111094 4848
.org 0x111096
	mov r9, r0	@ 00111096 8146
.org 0x111098
	add r0, sp, #4	@ 00111098 01a8
.org 0x11109a
	mov r2, r9	@ 0011109a 4a46
.org 0x11109c
	bl 0x128be0	@ 0011109c 17f0a0fd
.org 0x1110a0
	ldr r1, [pc, #280]	@ 001110a0 4649
.org 0x1110a2
	mov sl, r1	@ 001110a2 8a46
.org 0x1110a4
	movs r0, #14	@ 001110a4 0e20
.org 0x1110a6
	str r0, [sp, #0]	@ 001110a6 0090
.org 0x1110a8
	movs r0, #18	@ 001110a8 1220
.org 0x1110aa
	movs r2, #3	@ 001110aa 0322
.org 0x1110ac
	movs r3, #0	@ 001110ac 0023
.org 0x1110ae
	bl 0x2734	@ 001110ae f1f641fb
.org 0x1110b2
	movs r0, #8	@ 001110b2 0820
.org 0x1110b4
	str r0, [r5, #16]	@ 001110b4 2861
.org 0x1110b6
	ldr r2, [pc, #264]	@ 001110b6 424a
.org 0x1110b8
	adds r0, r2, #0	@ 001110b8 101c
.org 0x1110ba
	strh r0, [r5, #8]	@ 001110ba 2881
.org 0x1110bc
	ldr r0, [pc, #260]	@ 001110bc 4148
.org 0x1110be
	mov r1, r8	@ 001110be 4146
.org 0x1110c0
	bl 0x1d30	@ 001110c0 f0f636fe
.org 0x1110c4
	ldr r0, [pc, #256]	@ 001110c4 4048
.org 0x1110c6
	movs r1, #0	@ 001110c6 0021
.org 0x1110c8
	bl 0x2208	@ 001110c8 f1f69ef8
.org 0x1110cc
	ldrh r0, [r5, #8]	@ 001110cc 2889
.org 0x1110ce
	adds r1, r4, #0	@ 001110ce 211c
.org 0x1110d0
	ands r1, r0	@ 001110d0 0140
.org 0x1110d2
	lsls r1, r1, #3	@ 001110d2 c900
.org 0x1110d4
	movs r3, #192	@ 001110d4 c023
.org 0x1110d6
	lsls r3, r3, #19	@ 001110d6 db04
.org 0x1110d8
	adds r1, r1, r3	@ 001110d8 c918
.org 0x1110da
	str r6, [sp, #8]	@ 001110da 0296
.org 0x1110dc
	add r0, sp, #8	@ 001110dc 02a8
.org 0x1110de
	mov r8, r0	@ 001110de 8046
.org 0x1110e0
	mov r2, r9	@ 001110e0 4a46
.org 0x1110e2
	bl 0x128be0	@ 001110e2 17f07dfd
.org 0x1110e6
	str r6, [sp, #0]	@ 001110e6 0096
.org 0x1110e8
	movs r0, #36	@ 001110e8 2420
.org 0x1110ea
	mov r1, sl	@ 001110ea 5146
.org 0x1110ec
	movs r2, #2	@ 001110ec 0222
.org 0x1110ee
	movs r3, #0	@ 001110ee 0023
.org 0x1110f0
	bl 0x2734	@ 001110f0 f1f620fb
.org 0x1110f4
	str r6, [r5, #20]	@ 001110f4 6e61
.org 0x1110f6
	ldr r1, [pc, #212]	@ 001110f6 3549
.org 0x1110f8
	adds r0, r1, #0	@ 001110f8 081c
.org 0x1110fa
	strh r0, [r5, #10]	@ 001110fa 6881
.org 0x1110fc
	ands r4, r0	@ 001110fc 0440
.org 0x1110fe
	lsls r4, r4, #3	@ 001110fe e400
.org 0x111100
	movs r2, #192	@ 00111100 c022
.org 0x111102
	lsls r2, r2, #19	@ 00111102 d204
.org 0x111104
	adds r4, r4, r2	@ 00111104 a418
.org 0x111106
	str r6, [sp, #8]	@ 00111106 0296
.org 0x111108
	mov r0, r8	@ 00111108 4046
.org 0x11110a
	adds r1, r4, #0	@ 0011110a 211c
.org 0x11110c
	mov r2, r9	@ 0011110c 4a46
.org 0x11110e
	bl 0x128be0	@ 0011110e 17f067fd
.org 0x111112
	str r6, [sp, #0]	@ 00111112 0096
.org 0x111114
	movs r0, #56	@ 00111114 3820
.org 0x111116
	mov r1, sl	@ 00111116 5146
.org 0x111118
	movs r2, #4	@ 00111118 0422
.org 0x11111a
	movs r3, #0	@ 0011111a 0023
.org 0x11111c
	bl 0x2734	@ 0011111c f1f60afb
.org 0x111120
	str r6, [r5, #24]	@ 00111120 ae61
.org 0x111122
	ldr r0, [sp, #12]	@ 00111122 0398
.org 0x111124
	bl 0x3384	@ 00111124 f2f62ef9
.org 0x111128
	ldr r0, [sp, #16]	@ 00111128 0498
.org 0x11112a
	ldr r1, [sp, #20]	@ 0011112a 0599
.org 0x11112c
	movs r2, #0	@ 0011112c 0022
.org 0x11112e
	movs r3, #0	@ 0011112e 0023
.org 0x111130
	bl 0x2c0c	@ 00111130 f1f66cfd
.org 0x111134
	ldr r0, [sp, #12]	@ 00111134 0398
.org 0x111136
	ldr r1, [sp, #16]	@ 00111136 0499
.org 0x111138
	bl 0x33bc	@ 00111138 f2f640f9
.org 0x11113c
	movs r0, #240	@ 0011113c f020
.org 0x11113e
	lsls r0, r0, #7	@ 0011113e c001
.org 0x111140
	ldr r3, [sp, #20]	@ 00111140 059b
.org 0x111142
	str r0, [r3, #0]	@ 00111142 1860
.org 0x111144
	movs r0, #160	@ 00111144 a020
.org 0x111146
	lsls r0, r0, #7	@ 00111146 c001
.org 0x111148
	str r0, [r3, #4]	@ 00111148 5860
.org 0x11114a
	bl 0x1c734	@ 0011114a 0bf7f3fa
.org 0x11114e
	ldr r0, [pc, #128]	@ 0011114e 2048
.org 0x111150
	str r6, [r0, #0]	@ 00111150 0660
.org 0x111152
	movs r1, #208	@ 00111152 d021
.org 0x111154
	lsls r1, r1, #1	@ 00111154 4900
.org 0x111156
	movs r0, #137	@ 00111156 8920
.org 0x111158
	bl 0x249c	@ 00111158 f1f6a0f9
.org 0x11115c
	movs r0, #1	@ 0011115c 0120
.org 0x11115e
	strb r0, [r7, #6]	@ 0011115e b871
.org 0x111160
	mov r0, sp	@ 00111160 6846
.org 0x111162
	ldrb r0, [r0, #24]	@ 00111162 007e
.org 0x111164
	strb r0, [r7, #7]	@ 00111164 f871
.org 0x111166
	ldr r1, [pc, #108]	@ 00111166 1b49
.org 0x111168
	ldrb r0, [r7, #5]	@ 00111168 7879
.org 0x11116a
	lsls r0, r0, #2	@ 0011116a 8000
.org 0x11116c
	adds r0, r0, r1	@ 0011116c 4018
.org 0x11116e
	ldr r1, [r0, #0]	@ 0011116e 0168
.org 0x111170
	adds r0, r7, #0	@ 00111170 381c
.org 0x111172
	bl 0x128f80	@ 00111172 17f005ff
.org 0x111176
	add sp, #28	@ 00111176 07b0
.org 0x111178
	pop {r3, r4, r5}	@ 00111178 38bc
.org 0x11117a
	mov r8, r3	@ 0011117a 9846
.org 0x11117c
	mov r9, r4	@ 0011117c a146
.org 0x11117e
	mov sl, r5	@ 0011117e aa46
.org 0x111180
	pop {r4, r5, r6, r7}	@ 00111180 f0bc
.org 0x111182
	pop {r0}	@ 00111182 01bc
.org 0x111184
	bx r0	@ 00111184 0047
