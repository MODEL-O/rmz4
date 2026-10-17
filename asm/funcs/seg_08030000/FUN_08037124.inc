@ FUN_08037124  entry 0x08037124  size 100
.thumb
.org 0x37124
FUN_08037124:
	push {r4, lr}	@ 00037124 10b5
.org 0x37126
	adds r4, r0, #0	@ 00037126 041c
.org 0x37128
	adds r0, #180	@ 00037128 b430
.org 0x3712a
	ldrb r0, [r0, #12]	@ 0003712a 007b
.org 0x3712c
	cmp r0, #1	@ 0003712c 0128
.org 0x3712e
	bne.n 0x37136	@ 0003712e 02d1
.org 0x37130
	adds r0, r4, #0	@ 00037130 201c
.org 0x37132
	movs r1, #0	@ 00037132 0021
.org 0x37134
	b.n 0x3713a	@ 00037134 01e0
.org 0x37136
	adds r0, r4, #0	@ 00037136 201c
.org 0x37138
	movs r1, #1	@ 00037138 0121
.org 0x3713a
	bl 0x3a428	@ 0003713a 03f075f9
.org 0x3713e
	lsls r0, r0, #24	@ 0003713e 0006
.org 0x37140
	lsrs r1, r0, #24	@ 00037140 010e
.org 0x37142
	ldr r2, [pc, #40]	@ 00037142 0a4a
.org 0x37144
	adds r0, r4, r2	@ 00037144 a018
.org 0x37146
	ldrb r0, [r0, #0]	@ 00037146 0078
.org 0x37148
	cmp r0, #3	@ 00037148 0328
.org 0x3714a
	bne.n 0x3714e	@ 0003714a 00d1
.org 0x3714c
	movs r1, #2	@ 0003714c 0221
.org 0x3714e
	cmp r1, #2	@ 0003714e 0229
.org 0x37150
	bne.n 0x37174	@ 00037150 10d1
.org 0x37152
	ldr r0, [pc, #28]	@ 00037152 0748
.org 0x37154
	adds r2, r4, r0	@ 00037154 2218
.org 0x37156
	movs r0, #0	@ 00037156 0020
.org 0x37158
	strb r1, [r2, #0]	@ 00037158 1170
.org 0x3715a
	movs r2, #129	@ 0003715a 8122
.org 0x3715c
	lsls r2, r2, #1	@ 0003715c 5200
.org 0x3715e
	adds r1, r4, r2	@ 0003715e a118
.org 0x37160
	strb r0, [r1, #0]	@ 00037160 0870
.org 0x37162
	adds r0, r4, #0	@ 00037162 201c
.org 0x37164
	bl 0x3720c	@ 00037164 00f052f8
.org 0x37168
	b.n 0x3718c	@ 00037168 10e0
.org 0x3716a
	.byte 0x00	@ 0003716a data
.org 0x3716b
	.byte 0x00	@ 0003716b data
.org 0x3716c
	.byte 0x6f,0x02,0x00,0x00	@ 0003716c data
.org 0x37170
	.byte 0x01,0x01,0x00,0x00	@ 00037170 data
.org 0x37174
	ldr r0, [pc, #28]	@ 00037174 0748
.org 0x37176
	adds r2, r4, r0	@ 00037176 2218
.org 0x37178
	movs r1, #0	@ 00037178 0021
.org 0x3717a
	movs r0, #1	@ 0003717a 0120
.org 0x3717c
	strb r0, [r2, #0]	@ 0003717c 1070
.org 0x3717e
	movs r2, #129	@ 0003717e 8122
.org 0x37180
	lsls r2, r2, #1	@ 00037180 5200
.org 0x37182
	adds r0, r4, r2	@ 00037182 a018
.org 0x37184
	strb r1, [r0, #0]	@ 00037184 0170
.org 0x37186
	adds r0, r4, #0	@ 00037186 201c
