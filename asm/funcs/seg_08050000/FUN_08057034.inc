@ FUN_08057034  entry 0x08057034  size 112
.thumb
.org 0x57034
FUN_08057034:
	push {r4, lr}	@ 00057034 10b5
.org 0x57036
	adds r4, r0, #0	@ 00057036 041c
.org 0x57038
	ldrb r0, [r4, #15]	@ 00057038 e07b
.org 0x5703a
	cmp r0, #0	@ 0005703a 0028
.org 0x5703c
	bne.n 0x5704c	@ 0005703c 06d1
.org 0x5703e
	ldr r1, [pc, #100]	@ 0005703e 1949
.org 0x57040
	adds r0, r4, #0	@ 00057040 201c
.org 0x57042
	bl 0x1cf00	@ 00057042 c5f75dff
.org 0x57046
	ldrb r0, [r4, #15]	@ 00057046 e07b
.org 0x57048
	adds r0, #1	@ 00057048 0130
.org 0x5704a
	strb r0, [r4, #15]	@ 0005704a e073
.org 0x5704c
	adds r0, r4, #0	@ 0005704c 201c
.org 0x5704e
	bl 0x1cff0	@ 0005704e c5f7cfff
.org 0x57052
	adds r0, r4, #0	@ 00057052 201c
.org 0x57054
	adds r0, #116	@ 00057054 7430
.org 0x57056
	ldr r3, [pc, #80]	@ 00057056 144b
.org 0x57058
	ldrb r1, [r4, #30]	@ 00057058 a17f
.org 0x5705a
	lsls r1, r1, #8	@ 0005705a 0902
.org 0x5705c
	adds r2, r4, #0	@ 0005705c 221c
.org 0x5705e
	adds r2, #112	@ 0005705e 7032
.org 0x57060
	ldrb r2, [r2, #0]	@ 00057060 1278
.org 0x57062
	orrs r1, r2	@ 00057062 1143
.org 0x57064
	ldr r2, [pc, #68]	@ 00057064 114a
.org 0x57066
	adds r1, r1, r2	@ 00057066 8918
.org 0x57068
	lsls r1, r1, #2	@ 00057068 8900
.org 0x5706a
	adds r1, r1, r3	@ 0005706a c918
.org 0x5706c
	adds r2, r4, #0	@ 0005706c 221c
.org 0x5706e
	adds r2, #113	@ 0005706e 7132
.org 0x57070
	ldrb r2, [r2, #0]	@ 00057070 1278
.org 0x57072
	lsls r2, r2, #24	@ 00057072 1206
.org 0x57074
	asrs r2, r2, #24	@ 00057074 1216
.org 0x57076
	ldr r1, [r1, #0]	@ 00057076 0968
.org 0x57078
	lsls r2, r2, #2	@ 00057078 9200
.org 0x5707a
	adds r2, r2, r1	@ 0005707a 5218
.org 0x5707c
	ldr r1, [r2, #0]	@ 0005707c 1168
.org 0x5707e
	ldrb r2, [r1, #0]	@ 0005707e 0a78
.org 0x57080
	lsls r1, r2, #1	@ 00057080 5100
.org 0x57082
	adds r1, r1, r2	@ 00057082 8918
.org 0x57084
	lsls r1, r1, #3	@ 00057084 c900
.org 0x57086
	ldr r2, [pc, #40]	@ 00057086 0a4a
.org 0x57088
	adds r1, r1, r2	@ 00057088 8918
.org 0x5708a
	bl 0x5784	@ 0005708a aef77bfb
.org 0x5708e
	adds r0, r4, #0	@ 0005708e 201c
.org 0x57090
	adds r0, #115	@ 00057090 7330
.org 0x57092
	ldrb r1, [r0, #0]	@ 00057092 0178
.org 0x57094
	cmp r1, #3	@ 00057094 0329
.org 0x57096
	bne.n 0x5709e	@ 00057096 02d1
.org 0x57098
	movs r0, #0	@ 00057098 0020
.org 0x5709a
	strb r1, [r4, #14]	@ 0005709a a173
.org 0x5709c
	strb r0, [r4, #15]	@ 0005709c e073
.org 0x5709e
	pop {r4}	@ 0005709e 10bc
.org 0x570a0
	pop {r0}	@ 000570a0 01bc
.org 0x570a2
	bx r0	@ 000570a2 0047
