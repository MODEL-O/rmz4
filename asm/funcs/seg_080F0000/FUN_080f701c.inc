@ FUN_080f701c  entry 0x080f701c  size 472
.thumb
.org 0xf701c
FUN_080f701c:
	push {r4, r5, r6, r7, lr}	@ 000f701c f0b5
.org 0xf701e
	mov r7, sl	@ 000f701e 5746
.org 0xf7020
	mov r6, r9	@ 000f7020 4e46
.org 0xf7022
	mov r5, r8	@ 000f7022 4546
.org 0xf7024
	push {r5, r6, r7}	@ 000f7024 e0b4
.org 0xf7026
	sub sp, #304	@ 000f7026 ccb0
.org 0xf7028
	adds r7, r0, #0	@ 000f7028 071c
.org 0xf702a
	ldr r1, [pc, #368]	@ 000f702a 5c49
.org 0xf702c
	mov r0, sp	@ 000f702c 6846
.org 0xf702e
	movs r2, #6	@ 000f702e 0622
.org 0xf7030
	bl 0x129258	@ 000f7030 32f012f9
.org 0xf7034
	mov r0, sp	@ 000f7034 6846
.org 0xf7036
	adds r0, #8	@ 000f7036 0830
.org 0xf7038
	str r0, [sp, #256]	@ 000f7038 4090
.org 0xf703a
	ldr r1, [pc, #356]	@ 000f703a 5949
.org 0xf703c
	movs r2, #6	@ 000f703c 0622
.org 0xf703e
	bl 0x129258	@ 000f703e 32f00bf9
.org 0xf7042
	mov r1, sp	@ 000f7042 6946
.org 0xf7044
	adds r1, #16	@ 000f7044 1031
.org 0xf7046
	str r1, [sp, #260]	@ 000f7046 4191
.org 0xf7048
	ldr r5, [pc, #344]	@ 000f7048 564d
.org 0xf704a
	adds r0, r1, #0	@ 000f704a 081c
.org 0xf704c
	adds r1, r5, #0	@ 000f704c 291c
.org 0xf704e
	movs r2, #6	@ 000f704e 0622
.org 0xf7050
	bl 0x129258	@ 000f7050 32f002f9
.org 0xf7054
	mov r2, sp	@ 000f7054 6a46
.org 0xf7056
	adds r2, #24	@ 000f7056 1832
.org 0xf7058
	str r2, [sp, #264]	@ 000f7058 4292
.org 0xf705a
	ldr r4, [pc, #332]	@ 000f705a 534c
.org 0xf705c
	adds r0, r2, #0	@ 000f705c 101c
.org 0xf705e
	adds r1, r4, #0	@ 000f705e 211c
.org 0xf7060
	movs r2, #6	@ 000f7060 0622
.org 0xf7062
	bl 0x129258	@ 000f7062 32f0f9f8
.org 0xf7066
	mov r3, sp	@ 000f7066 6b46
.org 0xf7068
	adds r3, #32	@ 000f7068 2033
.org 0xf706a
	str r3, [sp, #268]	@ 000f706a 4393
.org 0xf706c
	ldr r1, [pc, #316]	@ 000f706c 4f49
.org 0xf706e
	adds r0, r3, #0	@ 000f706e 181c
.org 0xf7070
	movs r2, #6	@ 000f7070 0622
.org 0xf7072
	bl 0x129258	@ 000f7072 32f0f1f8
.org 0xf7076
	mov r0, sp	@ 000f7076 6846
.org 0xf7078
	adds r0, #40	@ 000f7078 2830
.org 0xf707a
	str r0, [sp, #272]	@ 000f707a 4490
.org 0xf707c
	ldr r1, [pc, #304]	@ 000f707c 4c49
.org 0xf707e
	movs r2, #6	@ 000f707e 0622
.org 0xf7080
	bl 0x129258	@ 000f7080 32f0eaf8
.org 0xf7084
	mov r1, sp	@ 000f7084 6946
.org 0xf7086
	adds r1, #48	@ 000f7086 3031
.org 0xf7088
	str r1, [sp, #276]	@ 000f7088 4591
.org 0xf708a
	adds r0, r1, #0	@ 000f708a 081c
.org 0xf708c
	adds r1, r5, #0	@ 000f708c 291c
.org 0xf708e
	movs r2, #6	@ 000f708e 0622
.org 0xf7090
	bl 0x129258	@ 000f7090 32f0e2f8
.org 0xf7094
	mov r2, sp	@ 000f7094 6a46
.org 0xf7096
	adds r2, #56	@ 000f7096 3832
.org 0xf7098
	str r2, [sp, #280]	@ 000f7098 4692
.org 0xf709a
	adds r0, r2, #0	@ 000f709a 101c
.org 0xf709c
	adds r1, r4, #0	@ 000f709c 211c
.org 0xf709e
	movs r2, #6	@ 000f709e 0622
.org 0xf70a0
	bl 0x129258	@ 000f70a0 32f0daf8
.org 0xf70a4
	mov r3, sp	@ 000f70a4 6b46
.org 0xf70a6
	adds r3, #64	@ 000f70a6 4033
.org 0xf70a8
	str r3, [sp, #284]	@ 000f70a8 4793
.org 0xf70aa
	ldr r1, [pc, #264]	@ 000f70aa 4249
.org 0xf70ac
	adds r0, r3, #0	@ 000f70ac 181c
.org 0xf70ae
	movs r2, #6	@ 000f70ae 0622
.org 0xf70b0
	bl 0x129258	@ 000f70b0 32f0d2f8
.org 0xf70b4
	mov r0, sp	@ 000f70b4 6846
.org 0xf70b6
	adds r0, #72	@ 000f70b6 4830
.org 0xf70b8
	str r0, [sp, #288]	@ 000f70b8 4890
.org 0xf70ba
	ldr r1, [pc, #252]	@ 000f70ba 3f49
.org 0xf70bc
	movs r2, #6	@ 000f70bc 0622
.org 0xf70be
	bl 0x129258	@ 000f70be 32f0cbf8
.org 0xf70c2
	mov r1, sp	@ 000f70c2 6946
.org 0xf70c4
	adds r1, #80	@ 000f70c4 5031
.org 0xf70c6
	str r1, [sp, #292]	@ 000f70c6 4991
.org 0xf70c8
	ldr r1, [pc, #240]	@ 000f70c8 3c49
.org 0xf70ca
	ldr r0, [sp, #292]	@ 000f70ca 4998
.org 0xf70cc
	movs r2, #6	@ 000f70cc 0622
.org 0xf70ce
	bl 0x129258	@ 000f70ce 32f0c3f8
.org 0xf70d2
	add r2, sp, #88	@ 000f70d2 16aa
.org 0xf70d4
	mov sl, r2	@ 000f70d4 9246
.org 0xf70d6
	ldr r1, [pc, #232]	@ 000f70d6 3a49
.org 0xf70d8
	mov r0, sl	@ 000f70d8 5046
.org 0xf70da
	movs r2, #6	@ 000f70da 0622
.org 0xf70dc
	bl 0x129258	@ 000f70dc 32f0bcf8
.org 0xf70e0
	add r3, sp, #96	@ 000f70e0 18ab
.org 0xf70e2
	mov r9, r3	@ 000f70e2 9946
.org 0xf70e4
	ldr r1, [pc, #220]	@ 000f70e4 3749
.org 0xf70e6
	mov r0, r9	@ 000f70e6 4846
.org 0xf70e8
	movs r2, #6	@ 000f70e8 0622
.org 0xf70ea
	bl 0x129258	@ 000f70ea 32f0b5f8
.org 0xf70ee
	add r0, sp, #104	@ 000f70ee 1aa8
.org 0xf70f0
	mov r8, r0	@ 000f70f0 8046
.org 0xf70f2
	ldr r1, [pc, #212]	@ 000f70f2 3549
.org 0xf70f4
	movs r2, #6	@ 000f70f4 0622
.org 0xf70f6
	bl 0x129258	@ 000f70f6 32f0aff8
.org 0xf70fa
	add r5, sp, #112	@ 000f70fa 1cad
.org 0xf70fc
	ldr r1, [pc, #204]	@ 000f70fc 3349
.org 0xf70fe
	adds r0, r5, #0	@ 000f70fe 281c
.org 0xf7100
	movs r2, #6	@ 000f7100 0622
.org 0xf7102
	bl 0x129258	@ 000f7102 32f0a9f8
.org 0xf7106
	add r4, sp, #120	@ 000f7106 1eac
.org 0xf7108
	ldr r1, [pc, #196]	@ 000f7108 3149
.org 0xf710a
	adds r0, r4, #0	@ 000f710a 201c
.org 0xf710c
	movs r2, #6	@ 000f710c 0622
.org 0xf710e
	bl 0x129258	@ 000f710e 32f0a3f8
.org 0xf7112
	add r6, sp, #128	@ 000f7112 20ae
.org 0xf7114
	add r1, sp, #192	@ 000f7114 30a9
.org 0xf7116
	mov r2, sp	@ 000f7116 6a46
.org 0xf7118
	str r2, [r1, #0]	@ 000f7118 0a60
.org 0xf711a
	add r0, sp, #196	@ 000f711a 31a8
.org 0xf711c
	ldr r3, [sp, #256]	@ 000f711c 409b
.org 0xf711e
	str r3, [r0, #0]	@ 000f711e 0360
.org 0xf7120
	add r0, sp, #200	@ 000f7120 32a8
.org 0xf7122
	ldr r2, [sp, #260]	@ 000f7122 419a
.org 0xf7124
	str r2, [r0, #0]	@ 000f7124 0260
.org 0xf7126
	add r0, sp, #204	@ 000f7126 33a8
.org 0xf7128
	ldr r3, [sp, #264]	@ 000f7128 429b
.org 0xf712a
	str r3, [r0, #0]	@ 000f712a 0360
.org 0xf712c
	add r0, sp, #208	@ 000f712c 34a8
.org 0xf712e
	ldr r2, [sp, #268]	@ 000f712e 439a
.org 0xf7130
	str r2, [r0, #0]	@ 000f7130 0260
.org 0xf7132
	add r0, sp, #212	@ 000f7132 35a8
.org 0xf7134
	ldr r3, [sp, #272]	@ 000f7134 449b
.org 0xf7136
	str r3, [r0, #0]	@ 000f7136 0360
.org 0xf7138
	add r0, sp, #216	@ 000f7138 36a8
.org 0xf713a
	ldr r2, [sp, #276]	@ 000f713a 459a
.org 0xf713c
	str r2, [r0, #0]	@ 000f713c 0260
.org 0xf713e
	add r0, sp, #220	@ 000f713e 37a8
.org 0xf7140
	ldr r3, [sp, #280]	@ 000f7140 469b
.org 0xf7142
	str r3, [r0, #0]	@ 000f7142 0360
.org 0xf7144
	add r0, sp, #224	@ 000f7144 38a8
.org 0xf7146
	ldr r2, [sp, #284]	@ 000f7146 479a
.org 0xf7148
	str r2, [r0, #0]	@ 000f7148 0260
.org 0xf714a
	add r0, sp, #228	@ 000f714a 39a8
.org 0xf714c
	ldr r3, [sp, #288]	@ 000f714c 489b
.org 0xf714e
	str r3, [r0, #0]	@ 000f714e 0360
.org 0xf7150
	add r0, sp, #232	@ 000f7150 3aa8
.org 0xf7152
	ldr r2, [sp, #292]	@ 000f7152 499a
.org 0xf7154
	str r2, [r0, #0]	@ 000f7154 0260
.org 0xf7156
	add r0, sp, #236	@ 000f7156 3ba8
.org 0xf7158
	mov r3, sl	@ 000f7158 5346
.org 0xf715a
	str r3, [r0, #0]	@ 000f715a 0360
.org 0xf715c
	add r0, sp, #240	@ 000f715c 3ca8
.org 0xf715e
	mov r2, r9	@ 000f715e 4a46
.org 0xf7160
	str r2, [r0, #0]	@ 000f7160 0260
.org 0xf7162
	add r0, sp, #244	@ 000f7162 3da8
.org 0xf7164
	mov r3, r8	@ 000f7164 4346
.org 0xf7166
	str r3, [r0, #0]	@ 000f7166 0360
.org 0xf7168
	add r0, sp, #248	@ 000f7168 3ea8
.org 0xf716a
	str r5, [r0, #0]	@ 000f716a 0560
.org 0xf716c
	add r0, sp, #252	@ 000f716c 3fa8
.org 0xf716e
	str r4, [r0, #0]	@ 000f716e 0460
.org 0xf7170
	adds r0, r6, #0	@ 000f7170 301c
.org 0xf7172
	movs r2, #64	@ 000f7172 4022
.org 0xf7174
	bl 0x129258	@ 000f7174 32f070f8
.org 0xf7178
	ldr r1, [r7, #40]	@ 000f7178 b96a
.org 0xf717a
	ldr r4, [r1, #40]	@ 000f717a 8c6a
.org 0xf717c
	ldrb r0, [r7, #10]	@ 000f717c b87a
.org 0xf717e
	lsrs r5, r0, #4	@ 000f717e 0509
.org 0xf7180
	movs r0, #1	@ 000f7180 0120
.org 0xf7182
	ands r5, r0	@ 000f7182 0540
.org 0xf7184
	ldrb r1, [r1, #17]	@ 000f7184 497c
.org 0xf7186
	mov r8, r1	@ 000f7186 8846
.org 0xf7188
	ldrb r0, [r7, #15]	@ 000f7188 f87b
.org 0xf718a
	cmp r0, #5	@ 000f718a 0528
.org 0xf718c
	bls.n 0xf7190	@ 000f718c 00d9
.org 0xf718e
	b.n 0xf72f0	@ 000f718e afe0
.org 0xf7190
	lsls r0, r0, #2	@ 000f7190 8000
.org 0xf7192
	ldr r1, [pc, #64]	@ 000f7192 1049
.org 0xf7194
	adds r0, r0, r1	@ 000f7194 4018
.org 0xf7196
	ldr r0, [r0, #0]	@ 000f7196 0068
.org 0xf7198
	mov pc, r0	@ 000f7198 8746
.org 0xf719a
	.byte 0x00	@ 000f719a data
.org 0xf719b
	.byte 0x00	@ 000f719b data
.org 0xf719c
	.byte 0x0c,0xa4,0x12,0x08	@ 000f719c data
.org 0xf71a0
	.byte 0x12,0xa4,0x12,0x08	@ 000f71a0 data
.org 0xf71a4
	.byte 0x18,0xa4,0x12,0x08	@ 000f71a4 data
.org 0xf71a8
	.byte 0x1e,0xa4,0x12,0x08	@ 000f71a8 data
.org 0xf71ac
	.byte 0x24,0xa4,0x12,0x08	@ 000f71ac data
.org 0xf71b0
	.byte 0x2a,0xa4,0x12,0x08	@ 000f71b0 data
.org 0xf71b4
	.byte 0x30,0xa4,0x12,0x08	@ 000f71b4 data
.org 0xf71b8
	.byte 0x36,0xa4,0x12,0x08	@ 000f71b8 data
.org 0xf71bc
	.byte 0x3c,0xa4,0x12,0x08	@ 000f71bc data
.org 0xf71c0
	.byte 0x42,0xa4,0x12,0x08	@ 000f71c0 data
.org 0xf71c4
	.byte 0x48,0xa4,0x12,0x08	@ 000f71c4 data
.org 0xf71c8
	.byte 0x4e,0xa4,0x12,0x08	@ 000f71c8 data
.org 0xf71cc
	.byte 0x54,0xa4,0x12,0x08	@ 000f71cc data
.org 0xf71d0
	.byte 0x5a,0xa4,0x12,0x08	@ 000f71d0 data
.org 0xf71d4
	.byte 0xd8,0x71,0x0f,0x08	@ 000f71d4 data
.org 0xf71d8
	.byte 0xf0,0x71,0x0f,0x08	@ 000f71d8 data
.org 0xf71dc
	.byte 0x50,0x72,0x0f,0x08	@ 000f71dc data
.org 0xf71e0
	.byte 0x90,0x72,0x0f,0x08	@ 000f71e0 data
.org 0xf71e4
	.byte 0x9a,0x72,0x0f,0x08	@ 000f71e4 data
.org 0xf71e8
	.byte 0xb8,0x72,0x0f,0x08	@ 000f71e8 data
.org 0xf71ec
	.byte 0xc4,0x72,0x0f,0x08	@ 000f71ec data
.org 0xf71f0
	.byte 0x22	@ 000f71f0 data
.org 0xf71f1
	.byte 0x1c	@ 000f71f1 data
.org 0xf71f2
	.byte 0xd0	@ 000f71f2 data
.org 0xf71f3
	.byte 0x32	@ 000f71f3 data
