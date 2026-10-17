@ FUN_0803501c  entry 0x0803501c  size 100
.thumb
.org 0x3501c
FUN_0803501c:
	push {lr}	@ 0003501c 00b5
.org 0x3501e
	mov ip, r0	@ 0003501e 8446
.org 0x35020
	mov r1, ip	@ 00035020 6146
.org 0x35022
	adds r1, #180	@ 00035022 b431
.org 0x35024
	ldrb r0, [r1, #12]	@ 00035024 087b
.org 0x35026
	cmp r0, #4	@ 00035026 0428
.org 0x35028
	beq.n 0x3505c	@ 00035028 18d0
.org 0x3502a
	ldrb r0, [r1, #13]	@ 0003502a 487b
.org 0x3502c
	cmp r0, #4	@ 0003502c 0428
.org 0x3502e
	beq.n 0x3505c	@ 0003502e 15d0
.org 0x35030
	movs r1, #128	@ 00035030 8021
.org 0x35032
	lsls r1, r1, #1	@ 00035032 4900
.org 0x35034
	add r1, ip	@ 00035034 6144
.org 0x35036
	movs r0, #0	@ 00035036 0020
.org 0x35038
	strb r0, [r1, #0]	@ 00035038 0870
.org 0x3503a
	movs r1, #128	@ 0003503a 8021
.org 0x3503c
	lsls r1, r1, #2	@ 0003503c 8900
.org 0x3503e
	mov r0, ip	@ 0003503e 6046
.org 0x35040
	adds r0, #113	@ 00035040 7130
.org 0x35042
	movs r2, #0	@ 00035042 0022
.org 0x35044
	ldrsb r2, [r0, r2]	@ 00035044 8256
.org 0x35046
	lsls r2, r2, #16	@ 00035046 1204
.org 0x35048
	lsrs r2, r2, #16	@ 00035048 120c
.org 0x3504a
	adds r0, #1	@ 0003504a 0130
.org 0x3504c
	movs r3, #0	@ 0003504c 0023
.org 0x3504e
	ldrsb r3, [r0, r3]	@ 0003504e c356
.org 0x35050
	lsls r3, r3, #16	@ 00035050 1b04
.org 0x35052
	lsrs r3, r3, #16	@ 00035052 1b0c
.org 0x35054
	mov r0, ip	@ 00035054 6046
.org 0x35056
	bl 0x1cfc8	@ 00035056 e7f7b7ff
.org 0x3505a
	b.n 0x3507c	@ 0003505a 0fe0
.org 0x3505c
	ldr r2, [pc, #32]	@ 0003505c 084a
.org 0x3505e
	add r2, ip	@ 0003505e 6244
.org 0x35060
	ldrb r0, [r2, #0]	@ 00035060 1078
.org 0x35062
	movs r1, #4	@ 00035062 0421
.org 0x35064
	orrs r0, r1	@ 00035064 0843
.org 0x35066
	strb r0, [r2, #0]	@ 00035066 1070
.org 0x35068
	ldr r1, [pc, #24]	@ 00035068 0649
.org 0x3506a
	ldr r0, [pc, #28]	@ 0003506a 0748
.org 0x3506c
	add r0, ip	@ 0003506c 6044
.org 0x3506e
	ldrb r0, [r0, #0]	@ 0003506e 0078
.org 0x35070
	lsls r0, r0, #2	@ 00035070 8000
.org 0x35072
	adds r0, r0, r1	@ 00035072 4018
.org 0x35074
	ldr r1, [r0, #0]	@ 00035074 0168
.org 0x35076
	mov r0, ip	@ 00035076 6046
.org 0x35078
	bl 0x128f80	@ 00035078 f3f082ff
.org 0x3507c
	pop {r0}	@ 0003507c 01bc
.org 0x3507e
	bx r0	@ 0003507e 0047
