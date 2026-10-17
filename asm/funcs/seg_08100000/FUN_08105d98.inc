@ FUN_08105d98  entry 0x08105d98  size 136
.thumb
.org 0x105d98
FUN_08105d98:
	push {r4, r5, lr}	@ 00105d98 30b5
.org 0x105d9a
	adds r5, r0, #0	@ 00105d9a 051c
.org 0x105d9c
	ldrb r0, [r5, #13]	@ 00105d9c 687b
.org 0x105d9e
	cmp r0, #0	@ 00105d9e 0028
.org 0x105da0
	beq.n 0x105da8	@ 00105da0 02d0
.org 0x105da2
	cmp r0, #1	@ 00105da2 0128
.org 0x105da4
	beq.n 0x105e14	@ 00105da4 36d0
.org 0x105da6
	b.n 0x105e1a	@ 00105da6 38e0
.org 0x105da8
	ldr r0, [pc, #116]	@ 00105da8 1d48
.org 0x105daa
	adds r0, #98	@ 00105daa 6230
.org 0x105dac
	movs r1, #192	@ 00105dac c021
.org 0x105dae
	lsls r1, r1, #2	@ 00105dae 8900
.org 0x105db0
	strh r1, [r0, #0]	@ 00105db0 0180
.org 0x105db2
	ldr r4, [pc, #112]	@ 00105db2 1c4c
.org 0x105db4
	adds r4, #98	@ 00105db4 6234
.org 0x105db6
	movs r0, #5	@ 00105db6 0520
.org 0x105db8
	strh r0, [r4, #0]	@ 00105db8 2080
.org 0x105dba
	ldr r0, [pc, #108]	@ 00105dba 1b48
.org 0x105dbc
	ldrh r2, [r0, #6]	@ 00105dbc c288
.org 0x105dbe
	lsrs r2, r2, #6	@ 00105dbe 9209
.org 0x105dc0
	subs r1, r1, r2	@ 00105dc0 891a
.org 0x105dc2
	lsls r1, r1, #5	@ 00105dc2 4901
.org 0x105dc4
	movs r2, #128	@ 00105dc4 8022
.org 0x105dc6
	lsls r2, r2, #9	@ 00105dc6 5202
.org 0x105dc8
	adds r1, r1, r2	@ 00105dc8 8918
.org 0x105dca
	bl 0x1d30	@ 00105dca fbf6b1ff
.org 0x105dce
	ldr r0, [pc, #92]	@ 00105dce 1748
.org 0x105dd0
	ldrh r1, [r4, #0]	@ 00105dd0 2188
.org 0x105dd2
	ldrb r2, [r0, #7]	@ 00105dd2 c279
.org 0x105dd4
	subs r1, r1, r2	@ 00105dd4 891a
.org 0x105dd6
	lsls r1, r1, #5	@ 00105dd6 4901
.org 0x105dd8
	movs r2, #128	@ 00105dd8 8022
.org 0x105dda
	lsls r2, r2, #2	@ 00105dda 9200
.org 0x105ddc
	adds r1, r1, r2	@ 00105ddc 8918
.org 0x105dde
	bl 0x2208	@ 00105dde fcf613fa
.org 0x105de2
	movs r1, #196	@ 00105de2 c421
.org 0x105de4
	lsls r1, r1, #6	@ 00105de4 8901
.org 0x105de6
	adds r0, r5, #0	@ 00105de6 281c
.org 0x105de8
	bl 0x1cf00	@ 00105de8 17f78af8
.org 0x105dec
	movs r2, #1	@ 00105dec 0122
.org 0x105dee
	ldrb r1, [r5, #10]	@ 00105dee a97a
.org 0x105df0
	movs r0, #16	@ 00105df0 1020
.org 0x105df2
	orrs r0, r1	@ 00105df2 0843
.org 0x105df4
	strb r0, [r5, #10]	@ 00105df4 a872
.org 0x105df6
	adds r0, r5, #0	@ 00105df6 281c
.org 0x105df8
	adds r0, #76	@ 00105df8 4c30
.org 0x105dfa
	strb r2, [r0, #0]	@ 00105dfa 0270
.org 0x105dfc
	adds r3, r5, #0	@ 00105dfc 2b1c
.org 0x105dfe
	adds r3, #74	@ 00105dfe 4a33
.org 0x105e00
	movs r2, #16	@ 00105e00 1022
.org 0x105e02
	ldrb r1, [r3, #0]	@ 00105e02 1978
.org 0x105e04
	movs r0, #17	@ 00105e04 1120
.org 0x105e06
	negs r0, r0	@ 00105e06 4042
.org 0x105e08
	ands r0, r1	@ 00105e08 0840
.org 0x105e0a
	orrs r0, r2	@ 00105e0a 1043
.org 0x105e0c
	strb r0, [r3, #0]	@ 00105e0c 1870
.org 0x105e0e
	ldrb r0, [r5, #13]	@ 00105e0e 687b
.org 0x105e10
	adds r0, #1	@ 00105e10 0130
.org 0x105e12
	strb r0, [r5, #13]	@ 00105e12 6873
.org 0x105e14
	adds r0, r5, #0	@ 00105e14 281c
.org 0x105e16
	bl 0x1cff0	@ 00105e16 17f7ebf8
.org 0x105e1a
	pop {r4, r5}	@ 00105e1a 30bc
.org 0x105e1c
	pop {r0}	@ 00105e1c 01bc
.org 0x105e1e
	bx r0	@ 00105e1e 0047
