@ FUN_080e91d0  entry 0x080e91d0  size 138
.thumb
.org 0xe91d0
FUN_080e91d0:
	push {r4, r5, lr}	@ 000e91d0 30b5
.org 0xe91d2
	adds r4, r0, #0	@ 000e91d2 041c
.org 0xe91d4
	bl 0x1cdbc	@ 000e91d4 33f7f2fd
.org 0xe91d8
	ldrb r1, [r4, #10]	@ 000e91d8 a17a
.org 0xe91da
	movs r0, #1	@ 000e91da 0120
.org 0xe91dc
	movs r5, #0	@ 000e91dc 0025
.org 0xe91de
	orrs r0, r1	@ 000e91de 0843
.org 0xe91e0
	movs r1, #2	@ 000e91e0 0221
.org 0xe91e2
	orrs r0, r1	@ 000e91e2 0843
.org 0xe91e4
	strb r0, [r4, #10]	@ 000e91e4 a072
.org 0xe91e6
	ldr r1, [pc, #116]	@ 000e91e6 1d49
.org 0xe91e8
	ldrb r0, [r4, #9]	@ 000e91e8 607a
.org 0xe91ea
	lsls r0, r0, #2	@ 000e91ea 8000
.org 0xe91ec
	adds r0, r0, r1	@ 000e91ec 4018
.org 0xe91ee
	movs r1, #1	@ 000e91ee 0121
.org 0xe91f0
	str r1, [r4, #12]	@ 000e91f0 e160
.org 0xe91f2
	ldr r0, [r0, #0]	@ 000e91f2 0068
.org 0xe91f4
	ldr r0, [r0, #4]	@ 000e91f4 4068
.org 0xe91f6
	str r0, [r4, #20]	@ 000e91f6 6061
.org 0xe91f8
	ldr r1, [pc, #100]	@ 000e91f8 1949
.org 0xe91fa
	ldrb r0, [r4, #17]	@ 000e91fa 607c
.org 0xe91fc
	lsls r0, r0, #1	@ 000e91fc 4000
.org 0xe91fe
	adds r0, r0, r1	@ 000e91fe 4018
.org 0xe9200
	ldrh r1, [r0, #0]	@ 000e9200 0188
.org 0xe9202
	adds r0, r4, #0	@ 000e9202 201c
.org 0xe9204
	bl 0x1cf00	@ 000e9204 33f77cfe
.org 0xe9208
	ldrb r1, [r4, #17]	@ 000e9208 617c
.org 0xe920a
	lsls r0, r1, #4	@ 000e920a 0801
.org 0xe920c
	subs r0, r0, r1	@ 000e920c 401a
.org 0xe920e
	subs r0, #70	@ 000e920e 4638
.org 0xe9210
	lsls r0, r0, #8	@ 000e9210 0002
.org 0xe9212
	ldr r1, [r4, #84]	@ 000e9212 616d
.org 0xe9214
	adds r1, r1, r0	@ 000e9214 0918
.org 0xe9216
	str r1, [r4, #84]	@ 000e9216 6165
.org 0xe9218
	ldr r0, [r4, #88]	@ 000e9218 a06d
.org 0xe921a
	ldr r1, [pc, #72]	@ 000e921a 1249
.org 0xe921c
	adds r0, r0, r1	@ 000e921c 4018
.org 0xe921e
	str r0, [r4, #88]	@ 000e921e a065
.org 0xe9220
	str r0, [r4, #120]	@ 000e9220 a067
.org 0xe9222
	ldr r0, [pc, #68]	@ 000e9222 1148
.org 0xe9224
	str r0, [r4, #96]	@ 000e9224 2066
.org 0xe9226
	adds r1, r4, #0	@ 000e9226 211c
.org 0xe9228
	adds r1, #80	@ 000e9228 5031
.org 0xe922a
	movs r2, #0	@ 000e922a 0022
.org 0xe922c
	movs r0, #128	@ 000e922c 8020
.org 0xe922e
	lsls r0, r0, #2	@ 000e922e 8000
.org 0xe9230
	strh r0, [r1, #0]	@ 000e9230 0880
.org 0xe9232
	adds r1, #2	@ 000e9232 0231
.org 0xe9234
	strh r0, [r1, #0]	@ 000e9234 0880
.org 0xe9236
	ldr r0, [r4, #88]	@ 000e9236 a06d
.org 0xe9238
	ldr r1, [r4, #96]	@ 000e9238 216e
.org 0xe923a
	adds r0, r0, r1	@ 000e923a 4018
.org 0xe923c
	str r0, [r4, #88]	@ 000e923c a065
.org 0xe923e
	adds r1, #64	@ 000e923e 4031
.org 0xe9240
	str r1, [r4, #96]	@ 000e9240 2166
.org 0xe9242
	movs r0, #255	@ 000e9242 ff20
.org 0xe9244
	strb r0, [r4, #18]	@ 000e9244 a074
.org 0xe9246
	adds r0, r4, #0	@ 000e9246 201c
.org 0xe9248
	adds r0, #118	@ 000e9248 7630
.org 0xe924a
	strh r5, [r0, #0]	@ 000e924a 0580
.org 0xe924c
	strb r2, [r4, #13]	@ 000e924c 6273
.org 0xe924e
	adds r0, r4, #0	@ 000e924e 201c
.org 0xe9250
	bl 0xe8ebc	@ 000e9250 fff734fe
.org 0xe9254
	pop {r4, r5}	@ 000e9254 30bc
.org 0xe9256
	pop {r0}	@ 000e9256 01bc
.org 0xe9258
	bx r0	@ 000e9258 0047
