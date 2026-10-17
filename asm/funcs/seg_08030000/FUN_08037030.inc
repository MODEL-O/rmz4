@ FUN_08037030  entry 0x08037030  size 142
.thumb
.org 0x37030
FUN_08037030:
	push {r4, lr}	@ 00037030 10b5
.org 0x37032
	adds r4, r0, #0	@ 00037032 041c
.org 0x37034
	ldrb r0, [r4, #30]	@ 00037034 a07f
.org 0x37036
	lsls r0, r0, #8	@ 00037036 0002
.org 0x37038
	adds r1, r4, #0	@ 00037038 211c
.org 0x3703a
	adds r1, #112	@ 0003703a 7031
.org 0x3703c
	ldrb r1, [r1, #0]	@ 0003703c 0978
.org 0x3703e
	orrs r1, r0	@ 0003703e 0143
.org 0x37040
	ldr r2, [pc, #16]	@ 00037040 044a
.org 0x37042
	cmp r1, r2	@ 00037042 9142
.org 0x37044
	beq.n 0x37058	@ 00037044 08d0
.org 0x37046
	adds r0, r4, #0	@ 00037046 201c
.org 0x37048
	adds r1, r2, #0	@ 00037048 111c
.org 0x3704a
	movs r2, #2	@ 0003704a 0222
.org 0x3704c
	movs r3, #2	@ 0003704c 0223
.org 0x3704e
	bl 0x1cfc8	@ 0003704e e5f7bbff
.org 0x37052
	b.n 0x37070	@ 00037052 0de0
.org 0x37054
	.byte 0x01,0x0c,0x00,0x00	@ 00037054 data
.org 0x37058
	adds r0, r4, #0	@ 00037058 201c
.org 0x3705a
	adds r0, #113	@ 0003705a 7130
.org 0x3705c
	ldrb r0, [r0, #0]	@ 0003705c 0078
.org 0x3705e
	lsls r0, r0, #24	@ 0003705e 0006
.org 0x37060
	asrs r0, r0, #24	@ 00037060 0016
.org 0x37062
	cmp r0, #1	@ 00037062 0128
.org 0x37064
	bgt.n 0x37070	@ 00037064 04dc
.org 0x37066
	adds r0, r4, #0	@ 00037066 201c
.org 0x37068
	movs r2, #2	@ 00037068 0222
.org 0x3706a
	movs r3, #2	@ 0003706a 0223
.org 0x3706c
	bl 0x1cfc8	@ 0003706c e5f7acff
.org 0x37070
	movs r1, #170	@ 00037070 aa21
.org 0x37072
	lsls r1, r1, #1	@ 00037072 4900
.org 0x37074
	adds r0, r4, r1	@ 00037074 6018
.org 0x37076
	ldrb r0, [r0, #0]	@ 00037076 0078
.org 0x37078
	cmp r0, #4	@ 00037078 0428
.org 0x3707a
	bne.n 0x37092	@ 0003707a 0ad1
.org 0x3707c
	subs r1, #84	@ 0003707c 5439
.org 0x3707e
	adds r0, r4, r1	@ 0003707e 6018
.org 0x37080
	movs r1, #0	@ 00037080 0021
.org 0x37082
	strb r1, [r0, #0]	@ 00037082 0170
.org 0x37084
	movs r1, #160	@ 00037084 a021
.org 0x37086
	lsls r1, r1, #3	@ 00037086 c900
.org 0x37088
	adds r0, r4, #0	@ 00037088 201c
.org 0x3708a
	movs r2, #2	@ 0003708a 0222
.org 0x3708c
	movs r3, #1	@ 0003708c 0123
.org 0x3708e
	bl 0x1cfc8	@ 0003708e e5f79bff
.org 0x37092
	movs r0, #162	@ 00037092 a220
.org 0x37094
	lsls r0, r0, #1	@ 00037094 4000
.org 0x37096
	adds r1, r4, r0	@ 00037096 2118
.org 0x37098
	adds r0, r4, #0	@ 00037098 201c
.org 0x3709a
	bl 0x39fd8	@ 0003709a 02f09dff
.org 0x3709e
	lsls r0, r0, #24	@ 0003709e 0006
.org 0x370a0
	cmp r0, #0	@ 000370a0 0028
.org 0x370a2
	beq.n 0x370bc	@ 000370a2 0bd0
.org 0x370a4
	movs r1, #128	@ 000370a4 8021
.org 0x370a6
	lsls r1, r1, #1	@ 000370a6 4900
.org 0x370a8
	adds r0, r4, r1	@ 000370a8 6018
.org 0x370aa
	movs r2, #0	@ 000370aa 0022
.org 0x370ac
	movs r1, #3	@ 000370ac 0321
.org 0x370ae
	strb r1, [r0, #0]	@ 000370ae 0170
.org 0x370b0
	adds r1, #254	@ 000370b0 fe31
.org 0x370b2
	adds r0, r4, r1	@ 000370b2 6018
.org 0x370b4
	strb r2, [r0, #0]	@ 000370b4 0270
.org 0x370b6
	adds r0, r4, #0	@ 000370b6 201c
.org 0x370b8
	bl 0x36efc	@ 000370b8 fff720ff
.org 0x370bc
	pop {r4}	@ 000370bc 10bc
