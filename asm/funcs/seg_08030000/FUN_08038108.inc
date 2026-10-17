@ FUN_08038108  entry 0x08038108  size 180
.thumb
.org 0x38108
FUN_08038108:
	push {r4, r5, lr}	@ 00038108 30b5
.org 0x3810a
	mov ip, r0	@ 0003810a 8446
.org 0x3810c
	lsls r1, r1, #24	@ 0003810c 0906
.org 0x3810e
	lsrs r4, r1, #24	@ 0003810e 0c0e
.org 0x38110
	cmp r4, #6	@ 00038110 062c
.org 0x38112
	bhi.n 0x38192	@ 00038112 3ed8
.org 0x38114
	lsls r0, r4, #2	@ 00038114 a000
.org 0x38116
	ldr r1, [pc, #8]	@ 00038116 0249
.org 0x38118
	adds r0, r0, r1	@ 00038118 4018
.org 0x3811a
	ldr r0, [r0, #0]	@ 0003811a 0068
.org 0x3811c
	mov pc, r0	@ 0003811c 8746
.org 0x3811e
	.byte 0x00	@ 0003811e data
.org 0x3811f
	.byte 0x00	@ 0003811f data
.org 0x38120
	.byte 0x24,0x81,0x03,0x08	@ 00038120 data
.org 0x38124
	.byte 0x40,0x81,0x03,0x08	@ 00038124 data
.org 0x38128
	.byte 0x40,0x81,0x03,0x08	@ 00038128 data
.org 0x3812c
	.byte 0x54,0x81,0x03,0x08	@ 0003812c data
.org 0x38130
	.byte 0x62,0x81,0x03,0x08	@ 00038130 data
.org 0x38134
	.byte 0x70,0x81,0x03,0x08	@ 00038134 data
.org 0x38138
	.byte 0x7e,0x81,0x03,0x08	@ 00038138 data
.org 0x3813c
	.byte 0x40,0x81,0x03,0x08	@ 0003813c data
.org 0x38140
	.byte 0x00	@ 00038140 data
.org 0x38141
	.byte 0x21	@ 00038141 data
.org 0x38142
	.byte 0x02	@ 00038142 data
.org 0x38143
	.byte 0x20	@ 00038143 data
.org 0x38144
	.byte 0x62	@ 00038144 data
.org 0x38145
	.byte 0x46	@ 00038145 data
.org 0x38146
	.byte 0x10	@ 00038146 data
.org 0x38147
	.byte 0x73	@ 00038147 data
.org 0x38148
	.byte 0x50	@ 00038148 data
.org 0x38149
	.byte 0x73	@ 00038149 data
.org 0x3814a
	.byte 0xd1	@ 0003814a data
.org 0x3814b
	.byte 0x73	@ 0003814b data
.org 0x3814c
	.byte 0x60	@ 0003814c data
.org 0x3814d
	.byte 0x46	@ 0003814d data
.org 0x3814e
	.byte 0x32	@ 0003814e data
.org 0x3814f
	.byte 0x30	@ 0003814f data
.org 0x38150
	.byte 0x01	@ 00038150 data
.org 0x38151
	.byte 0x70	@ 00038151 data
.org 0x38152
	.byte 0x1e	@ 00038152 data
.org 0x38153
	.byte 0xe0	@ 00038153 data
.org 0x38154
	.byte 0x00	@ 00038154 data
.org 0x38155
	.byte 0x21	@ 00038155 data
.org 0x38156
	.byte 0x07	@ 00038156 data
.org 0x38157
	.byte 0x20	@ 00038157 data
.org 0x38158
	.byte 0x65	@ 00038158 data
.org 0x38159
	.byte 0x46	@ 00038159 data
.org 0x3815a
	.byte 0x28	@ 0003815a data
.org 0x3815b
	.byte 0x73	@ 0003815b data
.org 0x3815c
	.byte 0x68	@ 0003815c data
.org 0x3815d
	.byte 0x73	@ 0003815d data
.org 0x3815e
	.byte 0xe9	@ 0003815e data
.org 0x3815f
	.byte 0x73	@ 0003815f data
.org 0x38160
	.byte 0x13	@ 00038160 data
.org 0x38161
	.byte 0xe0	@ 00038161 data
.org 0x38162
	.byte 0x03	@ 00038162 data
.org 0x38163
	.byte 0x20	@ 00038163 data
.org 0x38164
	.byte 0x61	@ 00038164 data
.org 0x38165
	.byte 0x46	@ 00038165 data
.org 0x38166
	.byte 0x08	@ 00038166 data
.org 0x38167
	.byte 0x73	@ 00038167 data
.org 0x38168
	.byte 0x48	@ 00038168 data
.org 0x38169
	.byte 0x73	@ 00038169 data
.org 0x3816a
	.byte 0x10	@ 0003816a data
.org 0x3816b
	.byte 0x20	@ 0003816b data
.org 0x3816c
	.byte 0xc8	@ 0003816c data
.org 0x3816d
	.byte 0x73	@ 0003816d data
.org 0x3816e
	.byte 0x0d	@ 0003816e data
.org 0x3816f
	.byte 0xe0	@ 0003816f data
.org 0x38170
	.byte 0x03	@ 00038170 data
.org 0x38171
	.byte 0x20	@ 00038171 data
.org 0x38172
	.byte 0x62	@ 00038172 data
.org 0x38173
	.byte 0x46	@ 00038173 data
.org 0x38174
	.byte 0x10	@ 00038174 data
.org 0x38175
	.byte 0x73	@ 00038175 data
.org 0x38176
	.byte 0x50	@ 00038176 data
.org 0x38177
	.byte 0x73	@ 00038177 data
.org 0x38178
	.byte 0x12	@ 00038178 data
.org 0x38179
	.byte 0x20	@ 00038179 data
.org 0x3817a
	.byte 0xd0	@ 0003817a data
.org 0x3817b
	.byte 0x73	@ 0003817b data
.org 0x3817c
	.byte 0x05	@ 0003817c data
.org 0x3817d
	.byte 0xe0	@ 0003817d data
.org 0x3817e
	.byte 0x07	@ 0003817e data
.org 0x3817f
	.byte 0x20	@ 0003817f data
.org 0x38180
	.byte 0x65	@ 00038180 data
.org 0x38181
	.byte 0x46	@ 00038181 data
.org 0x38182
	.byte 0x28	@ 00038182 data
.org 0x38183
	.byte 0x73	@ 00038183 data
.org 0x38184
	.byte 0x68	@ 00038184 data
.org 0x38185
	.byte 0x73	@ 00038185 data
.org 0x38186
	.byte 0x02	@ 00038186 data
.org 0x38187
	.byte 0x20	@ 00038187 data
.org 0x38188
	.byte 0xe8	@ 00038188 data
.org 0x38189
	.byte 0x73	@ 00038189 data
.org 0x3818a
	.byte 0x61	@ 0003818a data
.org 0x3818b
	.byte 0x46	@ 0003818b data
.org 0x3818c
	.byte 0x32	@ 0003818c data
.org 0x3818d
	.byte 0x31	@ 0003818d data
.org 0x3818e
	.byte 0xff	@ 0003818e data
.org 0x3818f
	.byte 0x20	@ 0003818f data
.org 0x38190
	.byte 0x08	@ 00038190 data
.org 0x38191
	.byte 0x70	@ 00038191 data
.org 0x38192
	movs r3, #0	@ 00038192 0023
.org 0x38194
	mov r0, ip	@ 00038194 6046
.org 0x38196
	strb r3, [r0, #14]	@ 00038196 8373
.org 0x38198
	movs r0, #255	@ 00038198 ff20
.org 0x3819a
	mov r1, ip	@ 0003819a 6146
.org 0x3819c
	strb r0, [r1, #16]	@ 0003819c 0874
.org 0x3819e
	movs r0, #1	@ 0003819e 0120
.org 0x381a0
	negs r0, r0	@ 000381a0 4042
.org 0x381a2
	strb r0, [r1, #17]	@ 000381a2 4874
.org 0x381a4
	strb r0, [r1, #18]	@ 000381a4 8874
.org 0x381a6
	movs r2, #0	@ 000381a6 0022
.org 0x381a8
	strh r3, [r1, #20]	@ 000381a8 8b82
.org 0x381aa
	strb r0, [r1, #24]	@ 000381aa 0876
.org 0x381ac
	strb r0, [r1, #25]	@ 000381ac 4876
.org 0x381ae
	strb r0, [r1, #26]	@ 000381ae 8876
.org 0x381b0
	strb r0, [r1, #27]	@ 000381b0 c876
.org 0x381b2
	ldr r0, [pc, #124]	@ 000381b2 1f48
.org 0x381b4
	strh r0, [r1, #22]	@ 000381b4 c882
.org 0x381b6
	movs r1, #1	@ 000381b6 0121
.org 0x381b8
	movs r0, #1	@ 000381b8 0120
.org 0x381ba
	mov r5, ip	@ 000381ba 6546
