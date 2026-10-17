@ FUN_080ef170  entry 0x080ef170  size 150
.thumb
.org 0xef170
FUN_080ef170:
	push {r4, r5, r6, lr}	@ 000ef170 70b5
.org 0xef172
	adds r5, r0, #0	@ 000ef172 051c
.org 0xef174
	ldrb r1, [r5, #10]	@ 000ef174 a97a
.org 0xef176
	movs r0, #1	@ 000ef176 0120
.org 0xef178
	orrs r0, r1	@ 000ef178 0843
.org 0xef17a
	movs r1, #2	@ 000ef17a 0221
.org 0xef17c
	orrs r0, r1	@ 000ef17c 0843
.org 0xef17e
	strb r0, [r5, #10]	@ 000ef17e a872
.org 0xef180
	adds r0, r5, #0	@ 000ef180 281c
.org 0xef182
	bl 0x1cd28	@ 000ef182 2df7d1fd
.org 0xef186
	movs r6, #1	@ 000ef186 0126
.org 0xef188
	ldrb r1, [r5, #10]	@ 000ef188 a97a
.org 0xef18a
	movs r0, #16	@ 000ef18a 1020
.org 0xef18c
	orrs r0, r1	@ 000ef18c 0843
.org 0xef18e
	strb r0, [r5, #10]	@ 000ef18e a872
.org 0xef190
	adds r0, r5, #0	@ 000ef190 281c
.org 0xef192
	adds r0, #76	@ 000ef192 4c30
.org 0xef194
	strb r6, [r0, #0]	@ 000ef194 0670
.org 0xef196
	adds r3, r5, #0	@ 000ef196 2b1c
.org 0xef198
	adds r3, #74	@ 000ef198 4a33
.org 0xef19a
	movs r2, #16	@ 000ef19a 1022
.org 0xef19c
	ldrb r1, [r3, #0]	@ 000ef19c 1978
.org 0xef19e
	movs r0, #17	@ 000ef19e 1120
.org 0xef1a0
	negs r0, r0	@ 000ef1a0 4042
.org 0xef1a2
	ands r0, r1	@ 000ef1a2 0840
.org 0xef1a4
	orrs r0, r2	@ 000ef1a4 1043
.org 0xef1a6
	strb r0, [r3, #0]	@ 000ef1a6 1870
.org 0xef1a8
	adds r1, r5, #0	@ 000ef1a8 291c
.org 0xef1aa
	adds r1, #36	@ 000ef1aa 2431
.org 0xef1ac
	movs r0, #208	@ 000ef1ac d020
.org 0xef1ae
	strb r0, [r1, #0]	@ 000ef1ae 0870
.org 0xef1b0
	ldr r0, [pc, #84]	@ 000ef1b0 1548
.org 0xef1b2
	adds r0, #128	@ 000ef1b2 8030
.org 0xef1b4
	movs r1, #207	@ 000ef1b4 cf21
.org 0xef1b6
	lsls r1, r1, #2	@ 000ef1b6 8900
.org 0xef1b8
	strh r1, [r0, #0]	@ 000ef1b8 0180
.org 0xef1ba
	ldr r4, [pc, #80]	@ 000ef1ba 144c
.org 0xef1bc
	adds r4, #128	@ 000ef1bc 8034
.org 0xef1be
	movs r0, #5	@ 000ef1be 0520
.org 0xef1c0
	strh r0, [r4, #0]	@ 000ef1c0 2080
.org 0xef1c2
	ldr r0, [pc, #76]	@ 000ef1c2 1348
.org 0xef1c4
	ldrh r2, [r0, #6]	@ 000ef1c4 c288
.org 0xef1c6
	lsrs r2, r2, #6	@ 000ef1c6 9209
.org 0xef1c8
	subs r1, r1, r2	@ 000ef1c8 891a
.org 0xef1ca
	lsls r1, r1, #5	@ 000ef1ca 4901
.org 0xef1cc
	movs r2, #128	@ 000ef1cc 8022
.org 0xef1ce
	lsls r2, r2, #9	@ 000ef1ce 5202
.org 0xef1d0
	adds r1, r1, r2	@ 000ef1d0 8918
.org 0xef1d2
	bl 0x1d30	@ 000ef1d2 12f7adfd
.org 0xef1d6
	ldr r0, [pc, #60]	@ 000ef1d6 0f48
.org 0xef1d8
	ldrh r1, [r4, #0]	@ 000ef1d8 2188
.org 0xef1da
	ldrb r2, [r0, #7]	@ 000ef1da c279
.org 0xef1dc
	subs r1, r1, r2	@ 000ef1dc 891a
.org 0xef1de
	lsls r1, r1, #5	@ 000ef1de 4901
.org 0xef1e0
	movs r2, #128	@ 000ef1e0 8022
.org 0xef1e2
	lsls r2, r2, #2	@ 000ef1e2 9200
.org 0xef1e4
	adds r1, r1, r2	@ 000ef1e4 8918
.org 0xef1e6
	bl 0x2208	@ 000ef1e6 13f70ff8
.org 0xef1ea
	ldr r1, [pc, #44]	@ 000ef1ea 0b49
.org 0xef1ec
	ldrb r0, [r5, #9]	@ 000ef1ec 687a
.org 0xef1ee
	lsls r0, r0, #2	@ 000ef1ee 8000
.org 0xef1f0
	adds r0, r0, r1	@ 000ef1f0 4018
.org 0xef1f2
	str r6, [r5, #12]	@ 000ef1f2 ee60
.org 0xef1f4
	ldr r0, [r0, #0]	@ 000ef1f4 0068
.org 0xef1f6
	ldr r0, [r0, #4]	@ 000ef1f6 4068
.org 0xef1f8
	str r0, [r5, #20]	@ 000ef1f8 6861
.org 0xef1fa
	adds r0, r5, #0	@ 000ef1fa 281c
.org 0xef1fc
	bl 0xed7c8	@ 000ef1fc fef7e4fa
.org 0xef200
	pop {r4, r5, r6}	@ 000ef200 70bc
.org 0xef202
	pop {r0}	@ 000ef202 01bc
.org 0xef204
	bx r0	@ 000ef204 0047
