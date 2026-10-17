@ FUN_080350e8  entry 0x080350e8  size 194
.thumb
.org 0x350e8
FUN_080350e8:
	push {r4, r5, lr}	@ 000350e8 30b5
.org 0x350ea
	adds r4, r0, #0	@ 000350ea 041c
.org 0x350ec
	movs r0, #167	@ 000350ec a720
.org 0x350ee
	lsls r0, r0, #1	@ 000350ee 4000
.org 0x350f0
	adds r1, r4, r0	@ 000350f0 2118
.org 0x350f2
	movs r0, #1	@ 000350f2 0120
.org 0x350f4
	strb r0, [r1, #0]	@ 000350f4 0870
.org 0x350f6
	ldrb r1, [r4, #30]	@ 000350f6 a17f
.org 0x350f8
	lsls r1, r1, #8	@ 000350f8 0902
.org 0x350fa
	adds r0, r4, #0	@ 000350fa 201c
.org 0x350fc
	adds r0, #112	@ 000350fc 7030
.org 0x350fe
	ldrb r0, [r0, #0]	@ 000350fe 0078
.org 0x35100
	orrs r0, r1	@ 00035100 0843
.org 0x35102
	movs r5, #128	@ 00035102 8025
.org 0x35104
	lsls r5, r5, #6	@ 00035104 ad01
.org 0x35106
	cmp r0, r5	@ 00035106 a842
.org 0x35108
	beq.n 0x35140	@ 00035108 1ad0
.org 0x3510a
	adds r0, r4, #0	@ 0003510a 201c
.org 0x3510c
	adds r0, #252	@ 0003510c fc30
.org 0x3510e
	ldrh r1, [r0, #0]	@ 0003510e 0188
.org 0x35110
	movs r0, #128	@ 00035110 8020
.org 0x35112
	lsls r0, r0, #1	@ 00035112 4000
.org 0x35114
	cmp r1, r0	@ 00035114 8142
.org 0x35116
	bne.n 0x35138	@ 00035116 0fd1
.org 0x35118
	adds r0, r4, #0	@ 00035118 201c
.org 0x3511a
	adds r0, #113	@ 0003511a 7130
.org 0x3511c
	movs r2, #0	@ 0003511c 0022
.org 0x3511e
	ldrsb r2, [r0, r2]	@ 0003511e 8256
.org 0x35120
	lsls r2, r2, #16	@ 00035120 1204
.org 0x35122
	lsrs r2, r2, #16	@ 00035122 120c
.org 0x35124
	adds r0, #1	@ 00035124 0130
.org 0x35126
	movs r3, #0	@ 00035126 0023
.org 0x35128
	ldrsb r3, [r0, r3]	@ 00035128 c356
.org 0x3512a
	lsls r3, r3, #16	@ 0003512a 1b04
.org 0x3512c
	lsrs r3, r3, #16	@ 0003512c 1b0c
.org 0x3512e
	adds r0, r4, #0	@ 0003512e 201c
.org 0x35130
	adds r1, r5, #0	@ 00035130 291c
.org 0x35132
	bl 0x1cfc8	@ 00035132 e7f749ff
.org 0x35136
	b.n 0x35140	@ 00035136 03e0
.org 0x35138
	adds r0, r4, #0	@ 00035138 201c
.org 0x3513a
	adds r1, r5, #0	@ 0003513a 291c
.org 0x3513c
	bl 0x1cf00	@ 0003513c e7f7e0fe
.org 0x35140
	movs r1, #129	@ 00035140 8121
.org 0x35142
	lsls r1, r1, #1	@ 00035142 4900
.org 0x35144
	adds r5, r4, r1	@ 00035144 6518
.org 0x35146
	ldrb r0, [r5, #0]	@ 00035146 2878
.org 0x35148
	cmp r0, #0	@ 00035148 0028
.org 0x3514a
	bne.n 0x3515c	@ 0003514a 07d1
.org 0x3514c
	adds r0, r4, #0	@ 0003514c 201c
.org 0x3514e
	movs r1, #1	@ 0003514e 0121
.org 0x35150
	bl 0x3d374	@ 00035150 08f010f9
.org 0x35154
	ldrb r0, [r5, #0]	@ 00035154 2878
.org 0x35156
	adds r0, #1	@ 00035156 0130
.org 0x35158
	strb r0, [r5, #0]	@ 00035158 2870
.org 0x3515a
	b.n 0x351a4	@ 0003515a 23e0
.org 0x3515c
	movs r0, #162	@ 0003515c a220
.org 0x3515e
	lsls r0, r0, #1	@ 0003515e 4000
.org 0x35160
	adds r1, r4, r0	@ 00035160 2118
.org 0x35162
	adds r0, r4, #0	@ 00035162 201c
.org 0x35164
	bl 0x39fd8	@ 00035164 04f038ff
.org 0x35168
	lsls r0, r0, #24	@ 00035168 0006
.org 0x3516a
	lsrs r0, r0, #24	@ 0003516a 000e
.org 0x3516c
	cmp r0, #1	@ 0003516c 0128
.org 0x3516e
	bne.n 0x3518a	@ 0003516e 0cd1
.org 0x35170
	movs r1, #128	@ 00035170 8021
.org 0x35172
	lsls r1, r1, #1	@ 00035172 4900
.org 0x35174
	adds r0, r4, r1	@ 00035174 6018
.org 0x35176
	movs r2, #0	@ 00035176 0022
.org 0x35178
	movs r1, #3	@ 00035178 0321
.org 0x3517a
	strb r1, [r0, #0]	@ 0003517a 0170
.org 0x3517c
	adds r1, #254	@ 0003517c fe31
.org 0x3517e
	adds r0, r4, r1	@ 0003517e 6018
.org 0x35180
	strb r2, [r0, #0]	@ 00035180 0270
.org 0x35182
	adds r0, r4, #0	@ 00035182 201c
.org 0x35184
	bl 0x34b48	@ 00035184 fff7e0fc
.org 0x35188
	b.n 0x351a4	@ 00035188 0ce0
.org 0x3518a
	ldr r1, [pc, #32]	@ 0003518a 0849
.org 0x3518c
	adds r0, r4, r1	@ 0003518c 6018
.org 0x3518e
	ldrb r2, [r0, #0]	@ 0003518e 0278
.org 0x35190
	cmp r2, #0	@ 00035190 002a
.org 0x35192
	bne.n 0x351a4	@ 00035192 07d1
.org 0x35194
	ldr r0, [pc, #24]	@ 00035194 0648
.org 0x35196
	adds r1, r4, r0	@ 00035196 2118
.org 0x35198
	movs r0, #2	@ 00035198 0220
.org 0x3519a
	strb r0, [r1, #0]	@ 0003519a 0870
.org 0x3519c
	strb r2, [r5, #0]	@ 0003519c 2a70
.org 0x3519e
	adds r0, r4, #0	@ 0003519e 201c
.org 0x351a0
	bl 0x351b4	@ 000351a0 00f008f8
.org 0x351a4
	pop {r4, r5}	@ 000351a4 30bc
.org 0x351a6
	pop {r0}	@ 000351a6 01bc
.org 0x351a8
	bx r0	@ 000351a8 0047
