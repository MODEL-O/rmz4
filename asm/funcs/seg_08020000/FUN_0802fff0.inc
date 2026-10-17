@ FUN_0802fff0  entry 0x0802fff0  size 182
.thumb
.org 0x2fff0
FUN_0802fff0:
	push {r4, r5, r6, r7, lr}	@ 0002fff0 f0b5
.org 0x2fff2
	adds r4, r0, #0	@ 0002fff2 041c
.org 0x2fff4
	ldr r5, [r4, #44]	@ 0002fff4 e56a
.org 0x2fff6
	ldr r1, [r4, #12]	@ 0002fff6 e168
.org 0x2fff8
	ldr r7, [r1, #44]	@ 0002fff8 cf6a
.org 0x2fffa
	ldr r0, [r4, #20]	@ 0002fffa 6069
.org 0x2fffc
	movs r6, #1	@ 0002fffc 0126
.org 0x2fffe
	ands r0, r6	@ 0002fffe 3040
.org 0x30000
	cmp r0, #0	@ 00030000 0028
.org 0x30002
	beq.n 0x3001c	@ 00030002 0bd0
.org 0x30004
	adds r0, r1, #0	@ 00030004 081c
.org 0x30006
	adds r1, r4, #0	@ 00030006 211c
.org 0x30008
	bl 0x5b30	@ 00030008 d5f792fd
.org 0x3000c
	lsls r0, r0, #16	@ 0003000c 0004
.org 0x3000e
	lsrs r0, r0, #16	@ 0003000e 000c
.org 0x30010
	bl 0x1ebd0	@ 00030010 eef7defd
.org 0x30014
	movs r1, #187	@ 00030014 bb21
.org 0x30016
	lsls r1, r1, #1	@ 00030016 4900
.org 0x30018
	adds r0, r5, r1	@ 00030018 6818
.org 0x3001a
	strb r6, [r0, #0]	@ 0003001a 0670
.org 0x3001c
	ldr r0, [r4, #20]	@ 0003001c 6069
.org 0x3001e
	movs r4, #128	@ 0003001e 8024
.org 0x30020
	lsls r4, r4, #2	@ 00030020 a400
.org 0x30022
	ands r4, r0	@ 00030022 0440
.org 0x30024
	adds r1, r0, #0	@ 00030024 011c
.org 0x30026
	cmp r4, #0	@ 00030026 002c
.org 0x30028
	bne.n 0x30064	@ 00030028 1cd1
.org 0x3002a
	ldrb r0, [r5, #13]	@ 0003002a 687b
.org 0x3002c
	cmp r0, #5	@ 0003002c 0528
.org 0x3002e
	beq.n 0x300a0	@ 0003002e 37d0
.org 0x30030
	movs r0, #128	@ 00030030 8020
.org 0x30032
	lsls r0, r0, #3	@ 00030032 c000
.org 0x30034
	ands r0, r1	@ 00030034 0840
.org 0x30036
	cmp r0, #0	@ 00030036 0028
.org 0x30038
	beq.n 0x30064	@ 00030038 14d0
.org 0x3003a
	movs r2, #0	@ 0003003a 0022
.org 0x3003c
	ldr r1, [r7, #84]	@ 0003003c 796d
.org 0x3003e
	ldr r0, [r5, #84]	@ 0003003e 686d
.org 0x30040
	cmp r1, r0	@ 00030040 8142
.org 0x30042
	ble.n 0x30046	@ 00030042 00dd
.org 0x30044
	movs r2, #1	@ 00030044 0122
.org 0x30046
	movs r0, #161	@ 00030046 a120
.org 0x30048
	lsls r0, r0, #1	@ 00030048 4000
.org 0x3004a
	adds r3, r5, r0	@ 0003004a 2b18
.org 0x3004c
	adds r1, r6, #0	@ 0003004c 311c
.org 0x3004e
	ands r1, r2	@ 0003004e 1140
.org 0x30050
	ldrb r2, [r3, #0]	@ 00030050 1a78
.org 0x30052
	movs r0, #2	@ 00030052 0220
.org 0x30054
	negs r0, r0	@ 00030054 4042
.org 0x30056
	ands r0, r2	@ 00030056 1040
.org 0x30058
	orrs r0, r1	@ 00030058 0843
.org 0x3005a
	strb r0, [r3, #0]	@ 0003005a 1870
.org 0x3005c
	movs r0, #5	@ 0003005c 0520
.org 0x3005e
	strb r0, [r5, #13]	@ 0003005e 6873
.org 0x30060
	strb r4, [r5, #14]	@ 00030060 ac73
.org 0x30062
	b.n 0x300a0	@ 00030062 1de0
.org 0x30064
	movs r4, #1	@ 00030064 0124
.org 0x30066
	ands r1, r4	@ 00030066 2140
.org 0x30068
	cmp r1, #0	@ 00030068 0029
.org 0x3006a
	beq.n 0x300a0	@ 0003006a 19d0
.org 0x3006c
	ldrb r0, [r5, #13]	@ 0003006c 687b
.org 0x3006e
	cmp r0, #7	@ 0003006e 0728
.org 0x30070
	beq.n 0x300a0	@ 00030070 16d0
.org 0x30072
	cmp r0, #11	@ 00030072 0b28
.org 0x30074
	beq.n 0x300a0	@ 00030074 14d0
.org 0x30076
	movs r2, #0	@ 00030076 0022
.org 0x30078
	ldr r1, [r7, #84]	@ 00030078 796d
.org 0x3007a
	ldr r0, [r5, #84]	@ 0003007a 686d
.org 0x3007c
	cmp r1, r0	@ 0003007c 8142
.org 0x3007e
	ble.n 0x30082	@ 0003007e 00dd
.org 0x30080
	movs r2, #1	@ 00030080 0122
.org 0x30082
	movs r1, #161	@ 00030082 a121
.org 0x30084
	lsls r1, r1, #1	@ 00030084 4900
.org 0x30086
	adds r3, r5, r1	@ 00030086 6b18
.org 0x30088
	adds r1, r4, #0	@ 00030088 211c
.org 0x3008a
	ands r1, r2	@ 0003008a 1140
.org 0x3008c
	ldrb r2, [r3, #0]	@ 0003008c 1a78
.org 0x3008e
	movs r0, #2	@ 0003008e 0220
.org 0x30090
	negs r0, r0	@ 00030090 4042
.org 0x30092
	ands r0, r2	@ 00030092 1040
.org 0x30094
	orrs r0, r1	@ 00030094 0843
.org 0x30096
	strb r0, [r3, #0]	@ 00030096 1870
.org 0x30098
	movs r1, #0	@ 00030098 0021
.org 0x3009a
	movs r0, #4	@ 0003009a 0420
.org 0x3009c
	strb r0, [r5, #13]	@ 0003009c 6873
.org 0x3009e
	strb r1, [r5, #14]	@ 0003009e a973
.org 0x300a0
	pop {r4, r5, r6, r7}	@ 000300a0 f0bc
.org 0x300a2
	pop {r0}	@ 000300a2 01bc
.org 0x300a4
	bx r0	@ 000300a4 0047
