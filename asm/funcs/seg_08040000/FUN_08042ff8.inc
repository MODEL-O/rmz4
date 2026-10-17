@ FUN_08042ff8  entry 0x08042ff8  size 194
.thumb
.org 0x42ff8
FUN_08042ff8:
	push {r4, r5, r6, r7, lr}	@ 00042ff8 f0b5
.org 0x42ffa
	mov r7, sl	@ 00042ffa 5746
.org 0x42ffc
	mov r6, r9	@ 00042ffc 4e46
.org 0x42ffe
	mov r5, r8	@ 00042ffe 4546
.org 0x43000
	push {r5, r6, r7}	@ 00043000 e0b4
.org 0x43002
	sub sp, #8	@ 00043002 82b0
.org 0x43004
	str r0, [sp, #0]	@ 00043004 0090
.org 0x43006
	lsls r1, r1, #24	@ 00043006 0906
.org 0x43008
	lsrs r1, r1, #24	@ 00043008 090e
.org 0x4300a
	str r1, [sp, #4]	@ 0004300a 0191
.org 0x4300c
	ldr r0, [pc, #108]	@ 0004300c 1b48
.org 0x4300e
	ldr r0, [r0, #0]	@ 0004300e 0068
.org 0x43010
	bl 0x5500	@ 00043010 c2f776fa
.org 0x43014
	adds r2, r0, #0	@ 00043014 021c
.org 0x43016
	cmp r2, #0	@ 00043016 002a
.org 0x43018
	beq.n 0x430b8	@ 00043018 4ed0
.org 0x4301a
	ldr r7, [pc, #100]	@ 0004301a 194f
.org 0x4301c
	movs r6, #15	@ 0004301c 0f26
.org 0x4301e
	strb r6, [r2, #9]	@ 0004301e 5672
.org 0x43020
	ldr r0, [r7, #60]	@ 00043020 f86b
.org 0x43022
	ldr r0, [r0, #0]	@ 00043022 0068
.org 0x43024
	str r0, [r2, #20]	@ 00043024 5061
.org 0x43026
	ldrb r1, [r2, #11]	@ 00043026 d17a
.org 0x43028
	movs r0, #191	@ 00043028 bf20
.org 0x4302a
	mov r9, r0	@ 0004302a 8146
.org 0x4302c
	ands r0, r1	@ 0004302c 0840
.org 0x4302e
	strb r0, [r2, #11]	@ 0004302e d072
.org 0x43030
	adds r3, r2, #0	@ 00043030 131c
.org 0x43032
	adds r3, #37	@ 00043032 2533
.org 0x43034
	movs r1, #16	@ 00043034 1021
.org 0x43036
	mov r8, r1	@ 00043036 8846
.org 0x43038
	mov r0, r8	@ 00043038 4046
.org 0x4303a
	strb r0, [r3, #0]	@ 0004303a 1870
.org 0x4303c
	ldr r5, [pc, #68]	@ 0004303c 114d
.org 0x4303e
	ldrh r0, [r5, #0]	@ 0004303e 2888
.org 0x43040
	strh r0, [r2, #32]	@ 00043040 1084
.org 0x43042
	ldr r4, [pc, #68]	@ 00043042 114c
.org 0x43044
	ldrb r0, [r4, #0]	@ 00043044 2078
.org 0x43046
	movs r1, #34	@ 00043046 2221
.org 0x43048
	adds r1, r1, r2	@ 00043048 8918
.org 0x4304a
	mov ip, r1	@ 0004304a 8c46
.org 0x4304c
	strb r0, [r1, #0]	@ 0004304c 0870
.org 0x4304e
	ldr r0, [sp, #0]	@ 0004304e 0098
.org 0x43050
	adds r0, #248	@ 00043050 f830
.org 0x43052
	ldrb r0, [r0, #0]	@ 00043052 0078
.org 0x43054
	adds r1, r7, #0	@ 00043054 391c
.org 0x43056
	cmp r0, #2	@ 00043056 0228
.org 0x43058
	bne.n 0x4308c	@ 00043058 18d1
.org 0x4305a
	strb r6, [r2, #9]	@ 0004305a 5672
.org 0x4305c
	ldr r0, [r1, #60]	@ 0004305c c86b
.org 0x4305e
	ldr r0, [r0, #0]	@ 0004305e 0068
.org 0x43060
	str r0, [r2, #20]	@ 00043060 5061
.org 0x43062
	ldrb r1, [r2, #11]	@ 00043062 d17a
.org 0x43064
	mov r0, r9	@ 00043064 4846
.org 0x43066
	ands r0, r1	@ 00043066 0840
.org 0x43068
	strb r0, [r2, #11]	@ 00043068 d072
.org 0x4306a
	mov r0, r8	@ 0004306a 4046
.org 0x4306c
	strb r0, [r3, #0]	@ 0004306c 1870
.org 0x4306e
	ldrh r0, [r5, #0]	@ 0004306e 2888
.org 0x43070
	strh r0, [r2, #32]	@ 00043070 1084
.org 0x43072
	adds r1, r4, #0	@ 00043072 211c
.org 0x43074
	ldrb r0, [r1, #0]	@ 00043074 0878
.org 0x43076
	mov r3, ip	@ 00043076 6346
.org 0x43078
	strb r0, [r3, #0]	@ 00043078 1870
.org 0x4307a
	b.n 0x430aa	@ 0004307a 16e0
.org 0x4307c
	.byte 0x88,0xed,0x02,0x02	@ 0004307c data
.org 0x43080
	.byte 0xf8,0x39,0x85,0x08	@ 00043080 data
.org 0x43084
	.byte 0xfc,0x36,0x85,0x08	@ 00043084 data
.org 0x43088
	.byte 0x04,0x37,0x85,0x08	@ 00043088 data
.org 0x4308c
	strb r6, [r2, #9]	@ 0004308c 5672
.org 0x4308e
	ldr r0, [r7, #60]	@ 0004308e f86b
.org 0x43090
	ldr r0, [r0, #0]	@ 00043090 0068
.org 0x43092
	str r0, [r2, #20]	@ 00043092 5061
.org 0x43094
	ldrb r1, [r2, #11]	@ 00043094 d17a
.org 0x43096
	mov r0, r9	@ 00043096 4846
.org 0x43098
	ands r0, r1	@ 00043098 0840
.org 0x4309a
	strb r0, [r2, #11]	@ 0004309a d072
.org 0x4309c
	mov r0, r8	@ 0004309c 4046
.org 0x4309e
	strb r0, [r3, #0]	@ 0004309e 1870
.org 0x430a0
	ldrh r0, [r5, #2]	@ 000430a0 6888
.org 0x430a2
	strh r0, [r2, #32]	@ 000430a2 1084
.org 0x430a4
	ldrb r0, [r4, #1]	@ 000430a4 6078
.org 0x430a6
	mov r1, ip	@ 000430a6 6146
.org 0x430a8
	strb r0, [r1, #0]	@ 000430a8 0870
.org 0x430aa
	ldr r3, [sp, #0]	@ 000430aa 009b
.org 0x430ac
	str r3, [r2, #40]	@ 000430ac 9362
.org 0x430ae
	movs r0, #0	@ 000430ae 0020
.org 0x430b0
	mov r1, sp	@ 000430b0 6946
.org 0x430b2
	ldrb r1, [r1, #4]	@ 000430b2 0979
.org 0x430b4
	strb r1, [r2, #16]	@ 000430b4 1174
.org 0x430b6
	strb r0, [r2, #17]	@ 000430b6 5074
.org 0x430b8
	adds r0, r2, #0	@ 000430b8 101c
