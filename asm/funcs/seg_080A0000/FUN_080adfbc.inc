@ FUN_080adfbc  entry 0x080adfbc  size 188
.thumb
.org 0xadfbc
FUN_080adfbc:
	push {r4, lr}	@ 000adfbc 10b5
.org 0xadfbe
	sub sp, #16	@ 000adfbe 84b0
.org 0xadfc0
	adds r4, r0, #0	@ 000adfc0 041c
.org 0xadfc2
	ldrb r0, [r4, #13]	@ 000adfc2 607b
.org 0xadfc4
	cmp r0, #0	@ 000adfc4 0028
.org 0xadfc6
	bne.n 0xae024	@ 000adfc6 2dd1
.org 0xadfc8
	ldr r0, [r4, #84]	@ 000adfc8 606d
.org 0xadfca
	ldr r1, [pc, #40]	@ 000adfca 0a49
.org 0xadfcc
	adds r0, r0, r1	@ 000adfcc 4018
.org 0xadfce
	str r0, [sp, #0]	@ 000adfce 0090
.org 0xadfd0
	ldr r2, [pc, #36]	@ 000adfd0 094a
.org 0xadfd2
	ldr r1, [r2, #0]	@ 000adfd2 1168
.org 0xadfd4
	ldr r0, [pc, #36]	@ 000adfd4 0948
.org 0xadfd6
	muls r0, r1	@ 000adfd6 4843
.org 0xadfd8
	ldr r1, [pc, #36]	@ 000adfd8 0949
.org 0xadfda
	adds r0, r0, r1	@ 000adfda 4018
.org 0xadfdc
	lsls r0, r0, #1	@ 000adfdc 4000
.org 0xadfde
	lsrs r1, r0, #1	@ 000adfde 4108
.org 0xadfe0
	str r1, [r2, #0]	@ 000adfe0 1160
.org 0xadfe2
	lsrs r0, r0, #17	@ 000adfe2 400c
.org 0xadfe4
	movs r1, #1	@ 000adfe4 0121
.org 0xadfe6
	ands r0, r1	@ 000adfe6 0840
.org 0xadfe8
	strb r0, [r4, #14]	@ 000adfe8 a073
.org 0xadfea
	cmp r0, #0	@ 000adfea 0028
.org 0xadfec
	beq.n 0xae008	@ 000adfec 0cd0
.org 0xadfee
	ldr r0, [r4, #88]	@ 000adfee a06d
.org 0xadff0
	ldr r1, [pc, #16]	@ 000adff0 0449
.org 0xadff2
	b.n 0xae00e	@ 000adff2 0ce0
.org 0xadff4
	.byte 0x00,0xf5,0xff,0xff	@ 000adff4 data
.org 0xadff8
	.byte 0x38,0xdc,0x02,0x02	@ 000adff8 data
.org 0xadffc
	.byte 0xfd,0x43,0x03,0x00	@ 000adffc data
.org 0xae000
	.byte 0xc3,0x9e,0x26,0x00	@ 000ae000 data
.org 0xae004
	.byte 0x00,0xfd,0xff,0xff	@ 000ae004 data
.org 0xae008
	ldr r0, [r4, #88]	@ 000ae008 a06d
.org 0xae00a
	movs r1, #192	@ 000ae00a c021
.org 0xae00c
	lsls r1, r1, #2	@ 000ae00c 8900
.org 0xae00e
	adds r0, r0, r1	@ 000ae00e 4018
.org 0xae010
	str r0, [sp, #4]	@ 000ae010 0190
.org 0xae012
	movs r0, #1	@ 000ae012 0120
.org 0xae014
	mov r1, sp	@ 000ae014 6946
.org 0xae016
	bl 0xd0c88	@ 000ae016 22f037fe
.org 0xae01a
	movs r0, #4	@ 000ae01a 0420
.org 0xae01c
	strb r0, [r4, #18]	@ 000ae01c a074
.org 0xae01e
	ldrb r0, [r4, #13]	@ 000ae01e 607b
.org 0xae020
	adds r0, #1	@ 000ae020 0130
.org 0xae022
	strb r0, [r4, #13]	@ 000ae022 6073
.org 0xae024
	adds r0, r4, #0	@ 000ae024 201c
.org 0xae026
	bl 0x1cff0	@ 000ae026 6ef7e3ff
.org 0xae02a
	ldrb r0, [r4, #18]	@ 000ae02a a07c
.org 0xae02c
	subs r0, #1	@ 000ae02c 0138
.org 0xae02e
	strb r0, [r4, #18]	@ 000ae02e a074
.org 0xae030
	lsls r0, r0, #24	@ 000ae030 0006
.org 0xae032
	lsrs r0, r0, #24	@ 000ae032 000e
.org 0xae034
	cmp r0, #255	@ 000ae034 ff28
.org 0xae036
	bne.n 0xae084	@ 000ae036 25d1
.org 0xae038
	ldr r0, [r4, #84]	@ 000ae038 606d
.org 0xae03a
	movs r1, #160	@ 000ae03a a021
.org 0xae03c
	lsls r1, r1, #4	@ 000ae03c 0901
.org 0xae03e
	adds r0, r0, r1	@ 000ae03e 4018
.org 0xae040
	str r0, [sp, #8]	@ 000ae040 0290
.org 0xae042
	ldrb r0, [r4, #14]	@ 000ae042 a07b
.org 0xae044
	cmp r0, #0	@ 000ae044 0028
.org 0xae046
	beq.n 0xae050	@ 000ae046 03d0
.org 0xae048
	ldr r0, [r4, #88]	@ 000ae048 a06d
.org 0xae04a
	movs r1, #192	@ 000ae04a c021
.org 0xae04c
	lsls r1, r1, #2	@ 000ae04c 8900
.org 0xae04e
	b.n 0xae054	@ 000ae04e 01e0
.org 0xae050
	ldr r0, [r4, #88]	@ 000ae050 a06d
.org 0xae052
	ldr r1, [pc, #56]	@ 000ae052 0e49
.org 0xae054
	adds r0, r0, r1	@ 000ae054 4018
.org 0xae056
	add r1, sp, #8	@ 000ae056 02a9
.org 0xae058
	str r0, [r1, #4]	@ 000ae058 4860
.org 0xae05a
	movs r0, #1	@ 000ae05a 0120
.org 0xae05c
	bl 0xd0c88	@ 000ae05c 22f014fe
.org 0xae060
	movs r0, #53	@ 000ae060 3520
.org 0xae062
	bl 0x2b10	@ 000ae062 54f755fd
.org 0xae066
	adds r2, r4, #0	@ 000ae066 221c
.org 0xae068
	adds r2, #84	@ 000ae068 5432
.org 0xae06a
	movs r0, #0	@ 000ae06a 0020
.org 0xae06c
	movs r1, #255	@ 000ae06c ff21
.org 0xae06e
	bl 0x2ab88	@ 000ae06e 7cf78bfd
.org 0xae072
	ldr r1, [pc, #28]	@ 000ae072 0749
.org 0xae074
	ldrb r0, [r4, #9]	@ 000ae074 607a
.org 0xae076
	lsls r0, r0, #2	@ 000ae076 8000
