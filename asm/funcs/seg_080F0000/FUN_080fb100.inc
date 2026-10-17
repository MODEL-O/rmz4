@ FUN_080fb100  entry 0x080fb100  size 110
.thumb
.org 0xfb100
FUN_080fb100:
	push {r4, r5, r6, lr}	@ 000fb100 70b5
.org 0xfb102
	adds r4, r0, #0	@ 000fb102 041c
.org 0xfb104
	ldr r5, [r4, #40]	@ 000fb104 a56a
.org 0xfb106
	ldrb r6, [r4, #17]	@ 000fb106 667c
.org 0xfb108
	ldrb r0, [r5, #12]	@ 000fb108 287b
.org 0xfb10a
	cmp r0, #1	@ 000fb10a 0128
.org 0xfb10c
	bls.n 0xfb12c	@ 000fb10c 0ed9
.org 0xfb10e
	ldr r1, [pc, #24]	@ 000fb10e 0649
.org 0xfb110
	ldrb r0, [r4, #9]	@ 000fb110 607a
.org 0xfb112
	lsls r0, r0, #2	@ 000fb112 8000
.org 0xfb114
	adds r0, r0, r1	@ 000fb114 4018
.org 0xfb116
	movs r1, #2	@ 000fb116 0221
.org 0xfb118
	str r1, [r4, #12]	@ 000fb118 e160
.org 0xfb11a
	ldr r0, [r0, #0]	@ 000fb11a 0068
.org 0xfb11c
	ldr r0, [r0, #8]	@ 000fb11c 8068
.org 0xfb11e
	str r0, [r4, #20]	@ 000fb11e 6061
.org 0xfb120
	adds r0, r4, #0	@ 000fb120 201c
.org 0xfb122
	bl 0xfb17c	@ 000fb122 00f02bf8
.org 0xfb126
	b.n 0xfb174	@ 000fb126 25e0
.org 0xfb128
	.byte 0xfc,0x92,0x86,0x08	@ 000fb128 data
.org 0xfb12c
	adds r0, r4, #0	@ 000fb12c 201c
.org 0xfb12e
	bl 0x1cff0	@ 000fb12e 21f75fff
.org 0xfb132
	adds r0, r5, #0	@ 000fb132 281c
.org 0xfb134
	adds r0, #181	@ 000fb134 b530
.org 0xfb136
	ldrb r0, [r0, #0]	@ 000fb136 0078
.org 0xfb138
	asrs r0, r6	@ 000fb138 3041
.org 0xfb13a
	movs r1, #1	@ 000fb13a 0121
.org 0xfb13c
	ands r0, r1	@ 000fb13c 0840
.org 0xfb13e
	cmp r0, #0	@ 000fb13e 0028
.org 0xfb140
	beq.n 0xfb174	@ 000fb140 18d0
.org 0xfb142
	adds r0, r5, #0	@ 000fb142 281c
.org 0xfb144
	adds r0, #184	@ 000fb144 b830
.org 0xfb146
	ldr r0, [r0, #0]	@ 000fb146 0068
.org 0xfb148
	cmp r0, #159	@ 000fb148 9f28
.org 0xfb14a
	ble.n 0xfb15c	@ 000fb14a 07dd
.org 0xfb14c
	lsls r1, r0, #7	@ 000fb14c c101
.org 0xfb14e
	ldr r0, [pc, #8]	@ 000fb14e 0248
.org 0xfb150
	adds r1, r1, r0	@ 000fb150 0918
.org 0xfb152
	ldr r0, [r5, #88]	@ 000fb152 a86d
.org 0xfb154
	adds r0, r0, r1	@ 000fb154 4018
.org 0xfb156
	b.n 0xfb172	@ 000fb156 0ce0
.org 0xfb158
	.byte 0x00,0xa0,0xff,0xff	@ 000fb158 data
.org 0xfb15c
	cmp r0, #31	@ 000fb15c 1f28
.org 0xfb15e
	ble.n 0xfb16c	@ 000fb15e 05dd
.org 0xfb160
	ldr r0, [r5, #88]	@ 000fb160 a86d
.org 0xfb162
	ldr r1, [pc, #4]	@ 000fb162 0149
.org 0xfb164
	adds r0, r0, r1	@ 000fb164 4018
.org 0xfb166
	b.n 0xfb172	@ 000fb166 04e0
.org 0xfb168
	.byte 0x00,0xf0,0xff,0xff	@ 000fb168 data
.org 0xfb16c
	lsls r1, r0, #7	@ 000fb16c c101
