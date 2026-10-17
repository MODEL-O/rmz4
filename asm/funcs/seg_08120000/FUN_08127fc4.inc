@ FUN_08127fc4  entry 0x08127fc4  size 194
.thumb
.org 0x127fc4
FUN_08127fc4:
	push {r4, r5, r6, r7, lr}	@ 00127fc4 f0b5
.org 0x127fc6
	adds r6, r0, #0	@ 00127fc6 061c
.org 0x127fc8
	ldrh r1, [r6, #36]	@ 00127fc8 b18c
.org 0x127fca
	cmp r1, #0	@ 00127fca 0029
.org 0x127fcc
	beq.n 0x128086	@ 00127fcc 5bd0
.org 0x127fce
	ldrh r0, [r6, #38]	@ 00127fce f08c
.org 0x127fd0
	subs r0, #1	@ 00127fd0 0138
.org 0x127fd2
	strh r0, [r6, #38]	@ 00127fd2 f084
.org 0x127fd4
	ldr r3, [pc, #44]	@ 00127fd4 0b4b
.org 0x127fd6
	adds r2, r3, #0	@ 00127fd6 1a1c
.org 0x127fd8
	lsls r0, r0, #16	@ 00127fd8 0004
.org 0x127fda
	lsrs r3, r0, #16	@ 00127fda 030c
.org 0x127fdc
	cmp r3, #0	@ 00127fdc 002b
.org 0x127fde
	bne.n 0x128086	@ 00127fde 52d1
.org 0x127fe0
	strh r1, [r6, #38]	@ 00127fe0 f184
.org 0x127fe2
	ldrh r1, [r6, #40]	@ 00127fe2 318d
.org 0x127fe4
	movs r0, #2	@ 00127fe4 0220
.org 0x127fe6
	ands r0, r1	@ 00127fe6 0840
.org 0x127fe8
	cmp r0, #0	@ 00127fe8 0028
.org 0x127fea
	beq.n 0x128008	@ 00127fea 0dd0
.org 0x127fec
	adds r0, r1, #0	@ 00127fec 081c
.org 0x127fee
	adds r0, #16	@ 00127fee 1030
.org 0x127ff0
	strh r0, [r6, #40]	@ 00127ff0 3085
.org 0x127ff2
	ands r0, r2	@ 00127ff2 1040
.org 0x127ff4
	cmp r0, #255	@ 00127ff4 ff28
.org 0x127ff6
	bls.n 0x12805a	@ 00127ff6 30d9
.org 0x127ff8
	movs r0, #128	@ 00127ff8 8020
.org 0x127ffa
	lsls r0, r0, #1	@ 00127ffa 4000
.org 0x127ffc
	strh r0, [r6, #40]	@ 00127ffc 3085
.org 0x127ffe
	strh r3, [r6, #36]	@ 00127ffe b384
.org 0x128000
	b.n 0x12805a	@ 00128000 2be0
.org 0x128002
	.byte 0x00	@ 00128002 data
.org 0x128003
	.byte 0x00	@ 00128003 data
.org 0x128004
	.byte 0xff,0xff,0x00,0x00	@ 00128004 data
.org 0x128008
	adds r0, r1, #0	@ 00128008 081c
.org 0x12800a
	subs r0, #16	@ 0012800a 1038
.org 0x12800c
	strh r0, [r6, #40]	@ 0012800c 3085
.org 0x12800e
	ands r0, r2	@ 0012800e 1040
.org 0x128010
	lsls r0, r0, #16	@ 00128010 0004
.org 0x128012
	cmp r0, #0	@ 00128012 0028
.org 0x128014
	bgt.n 0x12805a	@ 00128014 21dc
.org 0x128016
	ldrb r5, [r6, #8]	@ 00128016 357a
.org 0x128018
	ldr r4, [r6, #44]	@ 00128018 f46a
.org 0x12801a
	cmp r5, #0	@ 0012801a 002d
.org 0x12801c
	ble.n 0x12803a	@ 0012801c 0ddd
.org 0x12801e
	adds r0, r6, #0	@ 0012801e 301c
.org 0x128020
	adds r1, r4, #0	@ 00128020 211c
.org 0x128022
	bl 0x127388	@ 00128022 fff7b1f9
.org 0x128026
	movs r0, #1	@ 00128026 0120
.org 0x128028
	ldrh r7, [r6, #40]	@ 00128028 378d
.org 0x12802a
	ands r0, r7	@ 0012802a 3840
.org 0x12802c
	cmp r0, #0	@ 0012802c 0028
.org 0x12802e
	bne.n 0x128032	@ 0012802e 00d1
.org 0x128030
	strb r0, [r4, #0]	@ 00128030 2070
.org 0x128032
	subs r5, #1	@ 00128032 013d
.org 0x128034
	adds r4, #80	@ 00128034 5034
.org 0x128036
	cmp r5, #0	@ 00128036 002d
.org 0x128038
	bgt.n 0x12801e	@ 00128038 f1dc
.org 0x12803a
	movs r0, #1	@ 0012803a 0120
.org 0x12803c
	ldrh r1, [r6, #40]	@ 0012803c 318d
.org 0x12803e
	ands r0, r1	@ 0012803e 0840
.org 0x128040
	cmp r0, #0	@ 00128040 0028
.org 0x128042
	beq.n 0x12804e	@ 00128042 04d0
.org 0x128044
	ldr r0, [r6, #4]	@ 00128044 7068
.org 0x128046
	movs r1, #128	@ 00128046 8021
.org 0x128048
	lsls r1, r1, #24	@ 00128048 0906
.org 0x12804a
	orrs r0, r1	@ 0012804a 0843
.org 0x12804c
	b.n 0x128052	@ 0012804c 01e0
.org 0x12804e
	movs r0, #128	@ 0012804e 8020
.org 0x128050
	lsls r0, r0, #24	@ 00128050 0006
.org 0x128052
	str r0, [r6, #4]	@ 00128052 7060
.org 0x128054
	movs r0, #0	@ 00128054 0020
.org 0x128056
	strh r0, [r6, #36]	@ 00128056 b084
.org 0x128058
	b.n 0x128086	@ 00128058 15e0
.org 0x12805a
	ldrb r5, [r6, #8]	@ 0012805a 357a
.org 0x12805c
	ldr r4, [r6, #44]	@ 0012805c f46a
.org 0x12805e
	cmp r5, #0	@ 0012805e 002d
.org 0x128060
	ble.n 0x128086	@ 00128060 11dd
.org 0x128062
	movs r3, #128	@ 00128062 8023
.org 0x128064
	movs r7, #0	@ 00128064 0027
.org 0x128066
	movs r2, #3	@ 00128066 0322
.org 0x128068
	ldrb r1, [r4, #0]	@ 00128068 2178
.org 0x12806a
	adds r0, r3, #0	@ 0012806a 181c
.org 0x12806c
	ands r0, r1	@ 0012806c 0840
.org 0x12806e
	cmp r0, #0	@ 0012806e 0028
.org 0x128070
	beq.n 0x12807e	@ 00128070 05d0
.org 0x128072
	ldrh r7, [r6, #40]	@ 00128072 378d
.org 0x128074
	lsrs r0, r7, #2	@ 00128074 b808
.org 0x128076
	strb r0, [r4, #19]	@ 00128076 e074
.org 0x128078
	adds r0, r1, #0	@ 00128078 081c
.org 0x12807a
	orrs r0, r2	@ 0012807a 1043
.org 0x12807c
	strb r0, [r4, #0]	@ 0012807c 2070
.org 0x12807e
	subs r5, #1	@ 0012807e 013d
.org 0x128080
	adds r4, #80	@ 00128080 5034
.org 0x128082
	cmp r5, #0	@ 00128082 002d
.org 0x128084
	bgt.n 0x128068	@ 00128084 f0dc
