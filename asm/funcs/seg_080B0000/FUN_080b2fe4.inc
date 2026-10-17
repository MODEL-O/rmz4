@ FUN_080b2fe4  entry 0x080b2fe4  size 220
.thumb
.org 0xb2fe4
FUN_080b2fe4:
	push {r4, r5, lr}	@ 000b2fe4 30b5
.org 0xb2fe6
	adds r4, r0, #0	@ 000b2fe6 041c
.org 0xb2fe8
	ldrb r5, [r4, #14]	@ 000b2fe8 a57b
.org 0xb2fea
	cmp r5, #0	@ 000b2fea 002d
.org 0xb2fec
	bne.n 0xb3030	@ 000b2fec 20d1
.org 0xb2fee
	bl 0x1ce54	@ 000b2fee 69f731ff
.org 0xb2ff2
	adds r0, r4, #0	@ 000b2ff2 201c
.org 0xb2ff4
	adds r0, #140	@ 000b2ff4 8c30
.org 0xb2ff6
	str r5, [r0, #0]	@ 000b2ff6 0560
.org 0xb2ff8
	adds r0, #4	@ 000b2ff8 0430
.org 0xb2ffa
	str r5, [r0, #0]	@ 000b2ffa 0560
.org 0xb2ffc
	adds r0, #4	@ 000b2ffc 0430
.org 0xb2ffe
	strb r5, [r0, #0]	@ 000b2ffe 0570
.org 0xb3000
	ldrb r1, [r4, #10]	@ 000b3000 a17a
.org 0xb3002
	movs r0, #251	@ 000b3002 fb20
.org 0xb3004
	ands r0, r1	@ 000b3004 0840
.org 0xb3006
	movs r1, #1	@ 000b3006 0121
.org 0xb3008
	orrs r0, r1	@ 000b3008 0843
.org 0xb300a
	strb r0, [r4, #10]	@ 000b300a a072
.org 0xb300c
	ldr r1, [pc, #176]	@ 000b300c 2c49
.org 0xb300e
	adds r0, r4, #0	@ 000b300e 201c
.org 0xb3010
	bl 0x1cf00	@ 000b3010 69f776ff
.org 0xb3014
	movs r0, #40	@ 000b3014 2820
.org 0xb3016
	strb r0, [r4, #19]	@ 000b3016 e074
.org 0xb3018
	movs r0, #1	@ 000b3018 0120
.org 0xb301a
	strb r0, [r4, #18]	@ 000b301a a074
.org 0xb301c
	ldrb r0, [r4, #14]	@ 000b301c a07b
.org 0xb301e
	adds r0, #1	@ 000b301e 0130
.org 0xb3020
	strb r0, [r4, #14]	@ 000b3020 a073
.org 0xb3022
	adds r0, r4, #0	@ 000b3022 201c
.org 0xb3024
	adds r0, #80	@ 000b3024 5030
.org 0xb3026
	movs r1, #128	@ 000b3026 8021
.org 0xb3028
	lsls r1, r1, #1	@ 000b3028 4900
.org 0xb302a
	strh r1, [r0, #0]	@ 000b302a 0180
.org 0xb302c
	adds r0, #2	@ 000b302c 0230
.org 0xb302e
	strh r1, [r0, #0]	@ 000b302e 0180
.org 0xb3030
	ldrb r0, [r4, #19]	@ 000b3030 e07c
.org 0xb3032
	lsrs r0, r0, #2	@ 000b3032 8008
.org 0xb3034
	lsls r0, r0, #4	@ 000b3034 0001
.org 0xb3036
	adds r1, r4, #0	@ 000b3036 211c
.org 0xb3038
	adds r1, #80	@ 000b3038 5031
.org 0xb303a
	strh r0, [r1, #0]	@ 000b303a 0880
.org 0xb303c
	ldrb r0, [r4, #19]	@ 000b303c e07c
.org 0xb303e
	lsrs r0, r0, #2	@ 000b303e 8008
.org 0xb3040
	lsls r0, r0, #4	@ 000b3040 0001
.org 0xb3042
	adds r1, #2	@ 000b3042 0231
.org 0xb3044
	strh r0, [r1, #0]	@ 000b3044 0880
.org 0xb3046
	ldrb r0, [r4, #19]	@ 000b3046 e07c
.org 0xb3048
	movs r1, #3	@ 000b3048 0321
.org 0xb304a
	ands r0, r1	@ 000b304a 0840
.org 0xb304c
	cmp r0, #0	@ 000b304c 0028
.org 0xb304e
	bne.n 0xb3072	@ 000b304e 10d1
.org 0xb3050
	adds r0, r4, #0	@ 000b3050 201c
.org 0xb3052
	adds r0, #84	@ 000b3052 5430
.org 0xb3054
	ldrb r1, [r4, #18]	@ 000b3054 a17c
.org 0xb3056
	ldrb r2, [r4, #10]	@ 000b3056 a27a
.org 0xb3058
	lsrs r2, r2, #4	@ 000b3058 1209
.org 0xb305a
	movs r5, #1	@ 000b305a 0125
.org 0xb305c
	ands r2, r5	@ 000b305c 2a40
.org 0xb305e
	bl 0xe67ac	@ 000b305e 33f0a5fb
.org 0xb3062
	ldrb r0, [r4, #18]	@ 000b3062 a07c
.org 0xb3064
	adds r0, #1	@ 000b3064 0130
.org 0xb3066
	strb r0, [r4, #18]	@ 000b3066 a074
.org 0xb3068
	lsls r0, r0, #24	@ 000b3068 0006
.org 0xb306a
	lsrs r0, r0, #24	@ 000b306a 000e
.org 0xb306c
	cmp r0, #5	@ 000b306c 0528
.org 0xb306e
	bls.n 0xb3072	@ 000b306e 00d9
.org 0xb3070
	strb r5, [r4, #18]	@ 000b3070 a574
.org 0xb3072
	adds r0, r4, #0	@ 000b3072 201c
.org 0xb3074
	bl 0xb3804	@ 000b3074 00f0c6fb
.org 0xb3078
	lsls r0, r0, #24	@ 000b3078 0006
.org 0xb307a
	cmp r0, #0	@ 000b307a 0028
.org 0xb307c
	beq.n 0xb30ba	@ 000b307c 1dd0
.org 0xb307e
	adds r5, r4, #0	@ 000b307e 251c
.org 0xb3080
	adds r5, #84	@ 000b3080 5435
.org 0xb3082
	movs r0, #0	@ 000b3082 0020
.org 0xb3084
	movs r1, #32	@ 000b3084 2021
.org 0xb3086
	adds r2, r5, #0	@ 000b3086 2a1c
.org 0xb3088
	bl 0x2ab88	@ 000b3088 77f77efd
.org 0xb308c
	ldr r2, [pc, #52]	@ 000b308c 0d4a
.org 0xb308e
	ldrh r1, [r2, #12]	@ 000b308e 9189
.org 0xb3090
	ldr r0, [pc, #52]	@ 000b3090 0d48
.org 0xb3092
	cmp r1, r0	@ 000b3092 8142
.org 0xb3094
	bhi.n 0xb309a	@ 000b3094 01d8
.org 0xb3096
	adds r0, r1, #1	@ 000b3096 481c
.org 0xb3098
	strh r0, [r2, #12]	@ 000b3098 9081
.org 0xb309a
	adds r0, r4, #0	@ 000b309a 201c
.org 0xb309c
	adds r1, r5, #0	@ 000b309c 291c
.org 0xb309e
	bl 0x2abe0	@ 000b309e 77f79ffd
.org 0xb30a2
	ldr r1, [pc, #40]	@ 000b30a2 0a49
.org 0xb30a4
	ldrb r0, [r4, #9]	@ 000b30a4 607a
.org 0xb30a6
	lsls r0, r0, #2	@ 000b30a6 8000
.org 0xb30a8
	adds r0, r0, r1	@ 000b30a8 4018
.org 0xb30aa
	movs r1, #4	@ 000b30aa 0421
.org 0xb30ac
	str r1, [r4, #12]	@ 000b30ac e160
.org 0xb30ae
	ldr r0, [r0, #0]	@ 000b30ae 0068
.org 0xb30b0
	ldr r0, [r0, #16]	@ 000b30b0 0069
.org 0xb30b2
	str r0, [r4, #20]	@ 000b30b2 6061
.org 0xb30b4
	movs r0, #36	@ 000b30b4 2420
.org 0xb30b6
	bl 0x6984	@ 000b30b6 53f765fc
.org 0xb30ba
	pop {r4, r5}	@ 000b30ba 30bc
.org 0xb30bc
	pop {r0}	@ 000b30bc 01bc
.org 0xb30be
	bx r0	@ 000b30be 0047
